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
}
ATerm term_n_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_h_15;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_f_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_i_13;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_n_10;
ATerm term_i_10;
ATerm term_f_10;
ATerm term_l_8;
ATerm term_i_8;
ATerm term_e_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_y_7;
ATerm term_f_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_t_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym__2, term_y_7, term_f_7);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_7);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_t_6);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_h_11);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("The SDF2 implementation caters for arbitrary context-free grammars. That is,\n", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("even for ambiguous grammars the parser will produce a parse trees containing\n", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("a concise encoding of allpossible parses. Ambiguities are represented by\n", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("means of amb nodes that contain a list of possible parse trees at that\n", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("point. For most applications, however, it is desirable to develop\n", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("unambiguous grammars. To aid the grammar writer in detecting and solving the\n", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ambiguities, the visamb tool extracts the ambiguities from a parse tree and\n", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("displays them in a readable format.\n", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, term_t_13, term_t_6);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym__2, term_w_13, term_t_6);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_t_6);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__2, term_x_15, term_t_6);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm e_4 (ATerm s_33, ATerm t_33, ATerm t);
ATerm foldr_2_0 (ATerm x_78 (ATerm), ATerm y_78 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm o_87 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm g_4 (ATerm x_30, ATerm y_30, ATerm t);
static ATerm h_4 (ATerm e_16, ATerm f_16, ATerm t);
static ATerm j_4 (ATerm l_72 (ATerm), ATerm h_138, ATerm i_16, ATerm t);
static ATerm i_4 (ATerm a_16, ATerm b_16, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm Lexical_0_0 (ATerm t);
static ATerm j_11 (ATerm m_10, ATerm t);
ATerm abbrev_term_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm k_73 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm yield_0_0 (ATerm t);
static ATerm p_4 (ATerm p_14, ATerm t);
static ATerm q_4 (ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm b_22, ATerm a_22, ATerm t);
static ATerm r_4 (ATerm y_76 (ATerm), ATerm x_21, ATerm w_21, ATerm t);
ATerm foldr_3_0 (ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm bu_collect_1_0 (ATerm r_77 (ATerm), ATerm t);
static ATerm n_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm visamb_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm g_89 (ATerm), ATerm t);
static ATerm o_22 (ATerm s_21, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_4 (ATerm g_16, ATerm t);
static ATerm t_4 (ATerm z_30, ATerm a_31, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm l_24 (ATerm i_23, ATerm t);
static ATerm m_24 (ATerm o_23, ATerm p_23, ATerm q_23, ATerm t);
static ATerm n_24 (ATerm y_23, ATerm z_23, ATerm a_24, ATerm t);
static ATerm u_4 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm e_73 (ATerm), ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm a_5 (ATerm p_40, ATerm q_40, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm y_4 (ATerm p_45, ATerm q_45, ATerm o_45, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_4 (ATerm r_29, ATerm s_29, ATerm t);
ATerm debug_1_0 (ATerm j_72 (ATerm), ATerm t);
ATerm map_1_0 (ATerm u_72 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm x_4 (ATerm g_47, ATerm h_47, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_50 (ATerm), ATerm r_50 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm h_92 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm parse_options_1_0 (ATerm g_92 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
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
  t = term_t_6;
  t = whoami_0_0(t);
  a_0 = t;
  t = term_v_6;
  c_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_6), a_0);
  e_0 = t;
  t = SSL_printnl(c_0, e_0);
  t = term_y_6;
  b_0 = t;
  t = SSL_exit(b_0);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_6;
  t = get_config_0_0(t);
  return(t);
}
static ATerm e_4 (ATerm s_33, ATerm t_33, ATerm t)
{
  ATerm b_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_33, t_33);
      LocalPopChoice(d_7);
    }
  else
    {
      t = b_7;
      t = SSL_addr(s_33, t_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_78 (ATerm), ATerm y_78 (ATerm), ATerm t)
{
  ATerm o_0 = NULL,q_0 = NULL,u_0 = NULL;
  o_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_0;
      t = x_78(t);
    }
  else
    {
      ATerm c_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_0 = ATgetFirst((ATermList) t);
          u_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_0;
      t = foldr_2_0(x_78, y_78, t);
      c_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_0, c_1);
      t = y_78(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_f_7;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm s_0 = NULL,v_0 = NULL;
  if(match_cons(t, sym__2))
    {
      s_0 = ATgetArgument(t, 0);
      v_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_4(s_0, v_0, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_1 = NULL,f_0 = NULL,h_0 = NULL;
  t = times_0_0(t);
  h_0 = t;
  t = SSL_explode_term(h_0);
  if(match_cons(t, sym__2))
    {
      ATerm l_7 = ATgetArgument(t, 0);
      f_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_0;
  t = foldr_2_0(w_0, x_0, t);
  h_1 = t;
  t = SSL_TicksToSeconds(h_1);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,g_2 = NULL;
  d_2 = t;
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      g_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_2;
        if((e_2 != t))
          {
            _fail(t);
          }
        t = d_2;
        LocalPopChoice(r_7);
      }
    else
      {
        t = p_7;
        t = (ATerm) ATmakeAppl(sym__2, e_2, g_2);
        {
          ATerm t_7 = t;
          int u_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_2, g_2);
              LocalPopChoice(u_7);
            }
          else
            {
              t = t_7;
              t = SSL_gtr(e_2, g_2);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_2, g_2);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_87 (ATerm), ATerm t)
{
  ATerm l_2 = NULL;
  l_2 = t;
  {
    ATerm v_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_2 = NULL;
        t = term_y_7;
        t = get_config_0_0(t);
        p_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_2, term_y_6);
        t = geq_0_0(t);
        t = l_2;
        t = o_87(t);
        LocalPopChoice(x_7);
      }
    else
      {
        t = v_7;
        t = l_2;
      }
  }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm r_2 = NULL,t_2 = NULL,v_2 = NULL,w_2 = NULL;
  t = run_time_0_0(t);
  r_2 = t;
  t = term_t_6;
  t = whoami_0_0(t);
  t_2 = t;
  t = term_v_6;
  v_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_8), r_2), term_b_8), t_2);
  w_2 = t;
  t = SSL_printnl(v_2, w_2);
  t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_8), r_2), term_b_8), t_2));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_0, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_2 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_7;
  x_2 = t;
  t = SSL_exit(x_2);
  return(t);
}
static ATerm g_4 (ATerm x_30, ATerm y_30, ATerm t)
{
  ATerm y_2 = NULL;
  t = SSL_fputc(x_30, y_30);
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_2);
  return(t);
}
static ATerm h_4 (ATerm e_16, ATerm f_16, ATerm t)
{
  ATerm d_3 = NULL;
  t = SSL_write_term_to_stream_text(e_16, f_16);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_3);
  return(t);
}
static ATerm j_4 (ATerm l_72 (ATerm), ATerm h_138, ATerm i_16, ATerm t)
{
  ATerm e_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_138, term_e_8);
  t = u_4(t);
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_3, i_16);
  t = l_72(t);
  t = fclose_0_0(t);
  t = i_16;
  return(t);
}
static ATerm i_4 (ATerm a_16, ATerm b_16, ATerm t)
{
  ATerm g_3 = NULL;
  t = SSL_write_term_to_stream_baf(a_16, b_16);
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_3);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm c_2 = NULL,f_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_8 = ATgetArgument(t, 0);
      if(match_cons(g_8, sym_Stream_1))
        {
          c_2 = ATgetArgument(g_8, 0);
        }
      else
        _fail(t);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(c_2, f_2, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_8 = ATgetArgument(t, 0);
      if(match_cons(h_8, sym_Stream_1))
        {
          k_3 = ATgetArgument(h_8, 0);
        }
      else
        _fail(t);
      n_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_4(k_3, n_3, t);
  h_3 = t;
  t = term_i_8;
  i_3 = t;
  t = h_3;
  if(match_cons(t, sym_Stream_1))
    {
      j_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_8, h_3);
  t = g_4(i_3, j_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,p_3 = NULL,q_3 = NULL,s_3 = NULL,u_3 = NULL,w_3 = NULL,b_4 = NULL,f_4 = NULL,k_4 = NULL,h_6 = NULL,i_6 = NULL,k_0 = NULL,j_0 = NULL;
  m_3 = t;
  if(match_cons(t, sym__2))
    {
      b_4 = ATgetArgument(t, 0);
      f_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_3);
  w_3 = t;
  t = b_4;
  {
    ATerm j_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((l_3 != NULL) && (l_3 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_0, t);
        LocalPopChoice(k_8);
      }
    else
      {
        t = j_8;
        t = term_l_8;
        l_3 = t;
      }
  }
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_4, f_4);
  j_0 = t;
  t = SSLsetAnnotations(j_0, w_3);
  t = m_3;
  if(match_cons(t, sym__2))
    {
      q_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_3);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_3, (ATerm) ATmakeAppl(sym__2, not_null(l_3), s_3));
  k_0 = t;
  t = SSLsetAnnotations(k_0, p_3);
  u_3 = t;
  if(match_cons(t, sym__2))
    {
      h_6 = ATgetArgument(t, 0);
      i_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,m_0 = NULL;
        t = SSLgetAnnotations(u_3);
        u_1 = t;
        t = h_6;
        t = fetch_1_0(a_1, t);
        x_1 = t;
        t = i_6;
        if(match_cons(t, sym__2))
          {
            z_1 = ATgetArgument(t, 0);
            a_2 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_4(b_1, z_1, a_2, t);
        y_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_1, y_1);
        m_0 = t;
        t = SSLsetAnnotations(m_0, u_1);
        LocalPopChoice(o_8);
      }
    else
      {
        t = m_8;
        {
          ATerm s_2 = NULL,b_3 = NULL,c_3 = NULL,f_3 = NULL,d_1 = NULL;
          t = SSLgetAnnotations(u_3);
          s_2 = t;
          t = i_6;
          if(match_cons(t, sym__2))
            {
              c_3 = ATgetArgument(t, 0);
              f_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_4(e_1, c_3, f_3, t);
          b_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_6, b_3);
          d_1 = t;
          t = SSLsetAnnotations(d_1, s_2);
        }
      }
  }
  return(t);
}
ATerm Lexical_0_0 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
  y_9 = t;
  if(match_cons(t, sym_appl_2))
    {
      z_9 = ATgetArgument(t, 0);
      a_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_3 = NULL,a_4 = NULL,d_5 = NULL,e_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,r_5 = NULL,s_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,e_6 = NULL,f_6 = NULL,j_6 = NULL,k_6 = NULL,b_2 = NULL,r_1 = NULL,q_1 = NULL,p_1 = NULL,o_1 = NULL;
        t = SSLgetAnnotations(y_9);
        a_4 = t;
        t = z_9;
        if(match_cons(t, sym_prod_3))
          {
            e_5 = ATgetArgument(t, 0);
            i_5 = ATgetArgument(t, 1);
            j_5 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_9);
        d_5 = t;
        t = e_5;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_5 = ATgetFirst((ATermList) t);
            a_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_5);
        y_5 = t;
        t = z_5;
        if(match_cons(t, sym_lex_1))
          {
            j_6 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_5);
        f_6 = t;
        t = (ATerm) ATmakeAppl(sym_lex_1, j_6);
        o_1 = t;
        t = SSLsetAnnotations(o_1, f_6);
        k_6 = t;
        t = a_6;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(a_6), k_6);
        p_1 = t;
        t = SSLsetAnnotations(p_1, y_5);
        e_6 = t;
        t = i_5;
        if(match_cons(t, sym_cf_1))
          {
            r_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_5);
        l_5 = t;
        t = (ATerm) ATmakeAppl(sym_cf_1, r_5);
        q_1 = t;
        t = SSLsetAnnotations(q_1, l_5);
        s_5 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, e_6, s_5, j_5);
        r_1 = t;
        t = SSLsetAnnotations(r_1, d_5);
        k_5 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, k_5, a_10);
        b_2 = t;
        t = SSLsetAnnotations(b_2, a_4);
        t = yield_0_0(t);
        z_3 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lexical_1, z_3));
        LocalPopChoice(r_8);
      }
    else
      {
        t = p_8;
        {
          ATerm u_6 = NULL,c_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,m_4 = NULL,l_4 = NULL,j_2 = NULL;
          t = SSLgetAnnotations(y_9);
          u_6 = t;
          t = z_9;
          if(match_cons(t, sym_prod_3))
            {
              h_7 = ATgetArgument(t, 0);
              i_7 = ATgetArgument(t, 1);
              j_7 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_9);
          c_7 = t;
          t = i_7;
          if(match_cons(t, sym_lit_1))
            {
              n_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_7);
          m_7 = t;
          t = (ATerm) ATmakeAppl(sym_lit_1, n_7);
          j_2 = t;
          t = SSLsetAnnotations(j_2, m_7);
          o_7 = t;
          t = (ATerm) ATmakeAppl(sym_prod_3, h_7, o_7, j_7);
          l_4 = t;
          t = SSLsetAnnotations(l_4, c_7);
          k_7 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, k_7, a_10);
          m_4 = t;
          t = SSLsetAnnotations(m_4, u_6);
          t = (ATerm) ATempty;
        }
      }
  }
  return(t);
}
static ATerm j_11 (ATerm m_10, ATerm t)
{
  t = SSL_is_int(m_10);
  return(t);
}
ATerm abbrev_term_0_0 (ATerm t)
{
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL;
      o_10 = t;
      if(match_cons(t, sym_amb_1))
        {
          p_10 = ATgetArgument(t, 0);
          t = p_10;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_10 = ATgetFirst((ATermList) t);
              r_10 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm u_8 = t;
                int v_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = j_11(o_10, t);
                    LocalPopChoice(v_8);
                  }
                else
                  {
                    t = u_8;
                    t = q_10;
                  }
              }
            }
          else
            {
              t = j_11(o_10, t);
            }
        }
      else
        {
          t = j_11(o_10, t);
        }
      LocalPopChoice(t_8);
    }
  else
    {
      t = s_8;
      {
        ATerm w_7 = NULL,z_7 = NULL,d_8 = NULL;
        w_7 = t;
        if(match_cons(t, sym_appl_2))
          {
            ATerm w_8 = ATgetArgument(t, 0);
            if(match_cons(w_8, sym_prod_3))
              {
                ATerm y_8 = ATgetArgument(w_8, 0);
                d_8 = ATgetArgument(w_8, 1);
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
        t = w_7;
        {
          ATerm a_9 = t;
          int c_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Lexical_0_0(t);
              LocalPopChoice(c_9);
            }
          else
            {
              t = a_9;
              {
                ATerm n_8 = NULL,q_8 = NULL;
                if(match_cons(t, sym_appl_2))
                  {
                    n_8 = ATgetArgument(t, 0);
                    q_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_8;
                t = map_1_0(abbrev_term_0_0, t);
              }
            }
        }
        z_7 = t;
        t = (ATerm) ATmakeAppl(sym_N_2, d_8, z_7);
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm k_73 (ATerm), ATerm t)
{
  static ATerm v_12 (ATerm t)
  {
    ATerm q_12 = NULL,r_12 = NULL,u_12 = NULL;
    u_12 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_12 = ATgetFirst((ATermList) t);
        r_12 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_9 = NULL,e_9 = NULL,h_5 = NULL;
          t = SSLgetAnnotations(u_12);
          b_9 = t;
          t = r_12;
          t = v_12(t);
          e_9 = t;
          t = (ATerm) ATinsert(CheckATermList(e_9), q_12);
          h_5 = t;
          t = SSLsetAnnotations(h_5, b_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_12;
        t = k_73(t);
      }
    return(t);
  }
  t = v_12(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_13 = NULL,h_13 = NULL,m_13 = NULL;
  d_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_13;
    }
  else
    {
      static ATerm f_1 (ATerm t)
      {
        t = not_null(m_13);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_13 = ATgetFirst((ATermList) t);
          if(((m_13 != NULL) && (m_13 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_13;
      t = at_end_1_0(f_1, t);
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm a_14 = NULL;
  static ATerm n_15 (ATerm t)
  {
    ATerm f_15 = NULL,g_15 = NULL,k_15 = NULL;
    k_15 = t;
    if(match_cons(t, sym_appl_2))
      {
        f_15 = ATgetArgument(t, 0);
        g_15 = ATgetArgument(t, 1);
        {
          ATerm d_9 = t;
          int f_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_10 = NULL,e_10 = NULL,k_10 = NULL,n_5 = NULL;
              t = SSLgetAnnotations(k_15);
              e_10 = t;
              t = g_15;
              t = map_1_0(n_15, t);
              k_10 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, f_15, k_10);
              n_5 = t;
              t = SSLsetAnnotations(n_5, e_10);
              if(match_cons(t, sym_appl_2))
                {
                  ATerm g_9 = ATgetArgument(t, 0);
                  d_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_10;
              t = concat_0_0(t);
              LocalPopChoice(f_9);
            }
          else
            {
              t = d_9;
              t = (ATerm) ATinsert(ATempty, k_15);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, k_15);
      }
    return(t);
  }
  t = n_15(t);
  a_14 = t;
  t = SSL_implode_string(a_14);
  return(t);
}
static ATerm p_4 (ATerm p_14, ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,s_15 = NULL;
  t = p_14;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_15 = ATgetFirst((ATermList) t);
      {
        ATerm h_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_15;
  t = yield_0_0(t);
  p_15 = t;
  t = p_14;
  t = map_1_0(abbrev_term_0_0, t);
  q_15 = t;
  t = (ATerm) ATmakeAppl(sym_amb_abbr_2, p_15, q_15);
  return(t);
}
static ATerm q_4 (ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm b_22, ATerm a_22, ATerm t)
{
  t = c_77(t);
  {
    static ATerm g_1 (ATerm t)
    {
      ATerm t_15 = NULL;
      t_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_22, t_15);
      t = b_77(t);
      return(t);
    }
    t = fetch_1_0(g_1, t);
  }
  t = a_22;
  return(t);
}
static ATerm r_4 (ATerm y_76 (ATerm), ATerm x_21, ATerm w_21, ATerm t)
{
  static ATerm d_17 (ATerm t)
  {
    ATerm q_16 = NULL,v_16 = NULL,w_16 = NULL;
    q_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_16 = ATgetFirst((ATermList) t);
            w_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_9 = t;
          int j_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_16;
              {
                static ATerm i_1 (ATerm t)
                {
                  t = w_21;
                  return(t);
                }
                t = q_4(y_76, i_1, v_16, w_16, t);
              }
              t = d_17(t);
              LocalPopChoice(j_9);
            }
          else
            {
              t = i_9;
              {
                ATerm m_11 = NULL,p_11 = NULL,p_5 = NULL;
                t = SSLgetAnnotations(q_16);
                m_11 = t;
                t = w_16;
                t = d_17(t);
                p_11 = t;
                t = (ATerm) ATinsert(CheckATermList(p_11), v_16);
                p_5 = t;
                t = SSLsetAnnotations(p_5, m_11);
              }
            }
        }
      }
    return(t);
  }
  t = x_21;
  t = d_17(t);
  return(t);
}
ATerm foldr_3_0 (ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
  l_17 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_17;
      t = z_78(t);
    }
  else
    {
      ATerm r_17 = NULL,y_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_17 = ATgetFirst((ATermList) t);
          n_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_17;
      t = b_79(t);
      r_17 = t;
      t = n_17;
      t = foldr_3_0(z_78, a_79, b_79, t);
      y_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_17, y_17);
      t = a_79(t);
    }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL;
  if(match_cons(t, sym__2))
    {
      d_12 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4(m_1, d_12, e_12, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm f_12 = NULL;
  if(match_cons(t, sym__2))
    {
      f_12 = ATgetArgument(t, 0);
      if((f_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm bu_collect_1_0 (ATerm r_77 (ATerm), ATerm t)
{
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm d_19 (ATerm t)
      {
        ATerm m_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_11 = NULL,y_11 = NULL;
            static ATerm l_1 (ATerm t)
            {
              ATerm o_9 = t;
              int p_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,f_13 = NULL,j_13 = NULL,t_5 = NULL;
                  w_12 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_12 = ATgetFirst((ATermList) t);
                      y_12 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_12);
                  f_13 = t;
                  t = x_12;
                  t = r_77(t);
                  j_13 = t;
                  t = (ATerm) ATinsert(CheckATermList(y_12), j_13);
                  t_5 = t;
                  t = SSLsetAnnotations(t_5, f_13);
                  LocalPopChoice(p_9);
                }
              else
                {
                  t = o_9;
                  t = (ATerm) ATempty;
                }
              return(t);
            }
            t = SRTS_some(d_19, t);
            y_11 = t;
            t = SSL_explode_term(y_11);
            if(match_cons(t, sym__2))
              {
                ATerm q_9 = ATgetArgument(t, 0);
                x_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_11;
            t = foldr_3_0(j_1, k_1, l_1, t);
            LocalPopChoice(n_9);
          }
        else
          {
            t = m_9;
            {
              ATerm c_19 = NULL;
              t = r_77(t);
              c_19 = t;
              t = (ATerm) ATinsert(ATempty, c_19);
            }
          }
        return(t);
      }
      t = d_19(t);
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm i_20 = NULL,l_20 = NULL,r_20 = NULL,v_5 = NULL;
  r_20 = t;
  if(match_cons(t, sym_amb_1))
    {
      l_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_20);
  i_20 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, l_20);
  v_5 = t;
  t = SSLsetAnnotations(v_5, i_20);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm u_20 = NULL,w_20 = NULL;
  if(match_cons(t, sym_amb_1))
    {
      w_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_4(w_20, t);
  u_20 = t;
  t = (ATerm) ATmakeAppl(sym_root_1, u_20);
  return(t);
}
ATerm visamb_0_0 (ATerm t)
{
  ATerm h_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,r_19 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,g_20 = NULL,h_20 = NULL,x_5 = NULL,w_5 = NULL;
  h_20 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      b_20 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_20);
  r_19 = t;
  t = b_20;
  t = bu_collect_1_0(n_1, t);
  d_20 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, d_20, c_20);
  w_5 = t;
  t = SSLsetAnnotations(w_5, r_19);
  g_20 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      k_19 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_20);
  h_19 = t;
  t = k_19;
  t = map_1_0(s_1, t);
  m_19 = t;
  t = SSL_int_to_string(l_19);
  n_19 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, m_19, n_19);
  x_5 = t;
  t = SSLsetAnnotations(x_5, h_19);
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm g_89 (ATerm), ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
  b_21 = t;
  t = dtime_0_0(t);
  t = b_21;
  t = g_89(t);
  a_21 = t;
  t = dtime_0_0(t);
  x_20 = t;
  t = a_21;
  if(match_cons(t, sym__2))
    {
      y_20 = ATgetArgument(t, 0);
      z_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_20), (ATerm) ATmakeAppl(sym_Runtime_1, x_20)), z_20);
  return(t);
}
static ATerm o_22 (ATerm s_21, ATerm t)
{
  t = SSL_fclose(s_21);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL;
  h_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_22 = ATgetArgument(t, 0);
      {
        ATerm r_9 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_22);
            LocalPopChoice(s_9);
          }
        else
          {
            t = r_9;
            t = o_22(h_22, t);
          }
      }
    }
  else
    {
      t = o_22(h_22, t);
    }
  return(t);
}
static ATerm s_4 (ATerm g_16, ATerm t)
{
  t = SSL_read_term_from_stream(g_16);
  return(t);
}
static ATerm t_4 (ATerm z_30, ATerm a_31, ATerm t)
{
  ATerm p_22 = NULL;
  t = SSL_fopen(z_30, a_31);
  p_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_22);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_22 = NULL;
  t = SSL_stdin_stream();
  q_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_22 = NULL;
  t = SSL_stdout_stream();
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_22);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_22 = NULL;
  t = SSL_stderr_stream();
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_22);
  return(t);
}
static ATerm l_24 (ATerm i_23, ATerm t)
{
  ATerm l_23 = NULL;
  t = SSL_explode_term(i_23);
  if(match_cons(t, sym__2))
    {
      ATerm t_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_9 = ATgetArgument(t, 1);
        if(((ATgetType(u_9) == AT_LIST) && !(ATisEmpty(u_9))))
          {
            l_23 = ATgetFirst((ATermList) u_9);
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
  t = l_23;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_23;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_23;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_23;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_24 (ATerm o_23, ATerm p_23, ATerm q_23, ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,w_23 = NULL,l_6 = NULL;
  t = SSLgetAnnotations(q_23);
  t_23 = t;
  t = o_23;
  if(match_cons(t, sym_Path_1))
    {
      w_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_23, p_23);
  l_6 = t;
  t = SSLsetAnnotations(l_6, t_23);
  if(match_cons(t, sym__2))
    {
      r_23 = ATgetArgument(t, 0);
      s_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_4(r_23, s_23, t);
  return(t);
}
static ATerm n_24 (ATerm y_23, ATerm z_23, ATerm a_24, ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL,g_24 = NULL,m_6 = NULL;
  t = SSLgetAnnotations(a_24);
  d_24 = t;
  t = SSL_is_string(y_23);
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_24, z_23);
  m_6 = t;
  t = SSLsetAnnotations(m_6, d_24);
  if(match_cons(t, sym__2))
    {
      b_24 = ATgetArgument(t, 0);
      c_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_4(b_24, c_24, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL;
  i_24 = t;
  if(match_cons(t, sym__2))
    {
      j_24 = ATgetArgument(t, 0);
      k_24 = ATgetArgument(t, 1);
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_24(i_24, t);
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            {
              ATerm b_10 = t;
              int c_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_24(j_24, k_24, i_24, t);
                  LocalPopChoice(c_10);
                }
              else
                {
                  t = b_10;
                  t = n_24(j_24, k_24, i_24, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_24(i_24, t);
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_f_10;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL;
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_24 = NULL;
      r_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_24, term_i_10);
      t = u_4(t);
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      t = debug_1_0(t_1, t);
      _fail(t);
    }
  p_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_4(q_24, t);
  o_24 = t;
  t = p_24;
  t = fclose_0_0(t);
  t = o_24;
  return(t);
}
ATerm fetch_1_0 (ATerm e_73 (ATerm), ATerm t)
{
  static ATerm p_25 (ATerm t)
  {
    ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
    m_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_25 = ATgetFirst((ATermList) t);
        o_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_10 = t;
      int l_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_14 = NULL,m_14 = NULL,x_6 = NULL;
          t = SSLgetAnnotations(m_25);
          h_14 = t;
          t = n_25;
          t = e_73(t);
          m_14 = t;
          t = (ATerm) ATinsert(CheckATermList(o_25), m_14);
          x_6 = t;
          t = SSLsetAnnotations(x_6, h_14);
          LocalPopChoice(l_10);
        }
      else
        {
          t = j_10;
          {
            ATerm z_14 = NULL,c_15 = NULL,a_7 = NULL;
            t = SSLgetAnnotations(m_25);
            z_14 = t;
            t = o_25;
            t = p_25(t);
            c_15 = t;
            t = (ATerm) ATinsert(CheckATermList(c_15), n_25);
            a_7 = t;
            t = SSLsetAnnotations(a_7, z_14);
          }
        }
    }
    return(t);
  }
  t = p_25(t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm t_25 = NULL;
  t_25 = t;
  if(match_string(t, "-k"))
    {
      t = t_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_25;
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  t = SSL_string_to_int(u_25);
  v_25 = t;
  t = term_n_10;
  w_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_10, v_25);
  t = a_5(w_25, v_25, t);
  t = u_25;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_s_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_1, w_1, h_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm y_25 = NULL;
  y_25 = t;
  if(match_string(t, "-S"))
    {
      t = y_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_25;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL;
  t = term_y_7;
  z_25 = t;
  t = term_f_7;
  a_26 = t;
  t = term_t_10;
  t = a_5(z_25, a_26, t);
  t = term_u_10;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_v_10;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
  b_26 = t;
  t = SSL_string_to_int(b_26);
  c_26 = t;
  t = term_y_7;
  d_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_7, c_26);
  t = a_5(d_26, c_26, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_26);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_w_10;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL;
  t = term_x_10;
  e_26 = t;
  t = term_t_6;
  f_26 = t;
  t = term_y_10;
  t = a_5(e_26, f_26, t);
  t = term_z_10;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_a_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_2, k_2, m_2, t);
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_2, o_2, q_2, t);
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
            t = Option_3_0(u_2, z_2, a_3, t);
          }
      }
    }
  return(t);
}
static ATerm a_5 (ATerm p_40, ATerm q_40, ATerm t)
{
  ATerm g_26 = NULL;
  t = term_f_11;
  g_26 = t;
  t = SSL_table_put(g_26, p_40, q_40);
  t = (ATerm) ATmakeAppl(sym__3, term_f_11, p_40, q_40);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
      t = term_t_6;
      t = i_0(t);
      l_26 = t;
      t = term_g_11;
      m_26 = t;
      t = term_h_11;
      n_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_11, term_h_11, l_26);
      t = y_4(m_26, n_26, l_26, t);
      _fail(t);
    }
  else
    {
      ATerm q_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_26 = ATgetFirst((ATermList) t);
          k_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_26;
      t = d_0(t);
      t = term_t_6;
      t = g_0(t);
      q_26 = t;
      t = (ATerm) ATinsert(CheckATermList(k_26), q_26);
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm s_26 = NULL;
  s_26 = t;
  if(match_string(t, "-o"))
    {
      t = s_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_26;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL;
  t_26 = t;
  t = term_i_11;
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_11, t_26);
  t = a_5(u_26, t_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_26);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_k_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_3, r_3, t_3, t);
  return(t);
}
static ATerm y_4 (ATerm p_45, ATerm q_45, ATerm o_45, ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
  w_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
  {
    ATerm l_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_11 = ATgetArgument(t, 0);
            ATerm q_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
        t = x_4(p_45, q_45, t);
        LocalPopChoice(n_11);
      }
    else
      {
        t = l_11;
        t = (ATerm) ATempty;
      }
  }
  x_26 = t;
  t = (ATerm) ATinsert(CheckATermList(x_26), o_45);
  y_26 = t;
  t = SSL_table_put(p_45, q_45, y_26);
  t = w_26;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
      t = term_t_6;
      t = t_0(t);
      j_27 = t;
      t = term_g_11;
      k_27 = t;
      t = term_h_11;
      l_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_11, term_h_11, j_27);
      t = y_4(k_27, l_27, j_27, t);
      _fail(t);
    }
  else
    {
      ATerm p_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_27 = ATgetFirst((ATermList) t);
          g_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_27 = ATgetFirst((ATermList) t);
          i_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_27;
      t = p_0(t);
      t = h_27;
      t = r_0(t);
      p_27 = t;
      t = (ATerm) ATinsert(CheckATermList(i_27), p_27);
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm r_27 = NULL;
  r_27 = t;
  if(match_string(t, "-i"))
    {
      t = r_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_27;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL;
  s_27 = t;
  t = term_r_11;
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_11, s_27);
  t = a_5(t_27, s_27, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_27);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_3, x_3, y_3, t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_27 = ATgetFirst((ATermList) t);
      w_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_28 = NULL,b_28 = NULL;
        static ATerm c_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_28)), not_null(b_28));
          return(t);
        }
        t = w_27;
        t = n_0(t);
        if(((a_28 != NULL) && (a_28 != t)))
          _fail(t);
        else
          a_28 = t;
        t = v_27;
        t = l_0(t);
        if(((b_28 != NULL) && (b_28 != t)))
          _fail(t);
        else
          b_28 = t;
        t = w_27;
        t = reverse_acc_2_0(l_0, c_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_6;
      t = n_0(t);
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm o_28 = NULL;
  o_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_28), term_t_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_6;
      t = get_config_0_0(t);
      f_28 = t;
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      {
        static ATerm d_4 (ATerm t)
        {
          ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,e_7 = NULL;
          k_28 = t;
          if(match_cons(t, sym_Program_1))
            {
              j_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_28);
          i_28 = t;
          t = j_28;
          if(((f_28 != NULL) && (f_28 != t)))
            _fail(t);
          else
            f_28 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, j_28);
          e_7 = t;
          t = SSLsetAnnotations(e_7, i_28);
          return(t);
        }
        t = fetch_1_0(d_4, t);
      }
    }
  {
    ATerm w_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_12), not_null(f_28)), term_a_12);
        t = echo_0_0(t);
        LocalPopChoice(z_11);
      }
    else
      {
        t = w_11;
      }
  }
  t = term_c_12;
  t = echo_0_0(t);
  t = term_g_11;
  g_28 = t;
  t = term_h_11;
  h_28 = t;
  t = term_g_12;
  t = x_4(g_28, h_28, t);
  t = reverse_acc_2_0(_id, n_4, t);
  t = map_1_0(o_4, t);
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_12), term_s_12), term_p_12), term_o_12), term_n_12), term_m_12), term_l_12), term_k_12), term_j_12);
        t = echo_0_0(t);
        LocalPopChoice(i_12);
      }
    else
      {
        t = h_12;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
  s_28 = t;
  {
    ATerm z_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_28;
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
            t = s_28;
          }
        LocalPopChoice(a_13);
      }
    else
      {
        t = z_12;
        t = (ATerm) ATinsert(ATempty, s_28);
      }
  }
  t_28 = t;
  t = term_l_8;
  u_28 = t;
  t = SSL_printnl(u_28, t_28);
  t = s_28;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_6;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm w_4 (ATerm r_29, ATerm s_29, ATerm t)
{
  t = SSL_strcat(r_29, s_29);
  return(t);
}
ATerm debug_1_0 (ATerm j_72 (ATerm), ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
  y_28 = t;
  t = j_72(t);
  z_28 = t;
  t = term_v_6;
  a_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_28), z_28);
  b_29 = t;
  t = SSL_printnl(a_29, b_29);
  t = y_28;
  return(t);
}
ATerm map_1_0 (ATerm u_72 (ATerm), ATerm t)
{
  static ATerm q_29 (ATerm t)
  {
    ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
    n_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_29;
      }
    else
      {
        ATerm w_15 = NULL,d_16 = NULL,h_16 = NULL,g_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_29 = ATgetFirst((ATermList) t);
            p_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_29);
        w_15 = t;
        t = o_29;
        t = u_72(t);
        d_16 = t;
        t = p_29;
        t = q_29(t);
        h_16 = t;
        t = (ATerm) ATinsert(CheckATermList(h_16), d_16);
        g_7 = t;
        t = SSLsetAnnotations(g_7, w_15);
      }
    return(t);
  }
  t = q_29(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm e_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(g_13);
    }
  else
    {
      t = e_13;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_i_13;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_30 = NULL;
      a_30 = t;
      t = SSL_is_string(a_30);
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_4, t);
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            {
              ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL;
              g_30 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_30 = ATgetArgument(t, 0);
                  t = h_30;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_30 = ATgetArgument(t, 0);
                      t = h_30;
                      {
                        ATerm p_13 = t;
                        int q_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(q_13);
                          }
                        else
                          {
                            t = p_13;
                            t = debug_1_0(z_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_30 = NULL,n_30 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_30 = ATgetArgument(t, 0);
                          i_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_30;
                      t = eval_config_0_0(t);
                      m_30 = t;
                      t = i_30;
                      t = eval_config_0_0(t);
                      n_30 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_30, n_30);
                      t = w_4(m_30, n_30, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_4 (ATerm g_47, ATerm h_47, ATerm t)
{
  t = SSL_table_get(g_47, h_47);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  r_30 = t;
  t = term_f_11;
  s_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_11, r_30);
  t = x_4(s_30, r_30, t);
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_30 = NULL,u_30 = NULL;
        t = eval_config_0_0(t);
        t_30 = t;
        t = term_f_11;
        u_30 = t;
        t = SSL_table_put(u_30, r_30, t_30);
        t = t_30;
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
      }
  }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL;
  t = term_t_13;
  d_31 = t;
  t = term_t_6;
  e_31 = t;
  t = term_u_13;
  t = a_5(d_31, e_31, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_v_13;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm f_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL;
  t = term_t_13;
  j_31 = t;
  t = term_t_6;
  k_31 = t;
  t = term_u_13;
  t = a_5(j_31, k_31, t);
  t = term_w_13;
  f_31 = t;
  t = term_t_6;
  i_31 = t;
  t = term_x_13;
  t = a_5(f_31, i_31, t);
  t = term_y_13;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_z_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_5, c_5, f_5, t);
      LocalPopChoice(c_14);
    }
  else
    {
      t = b_14;
      t = Option_3_0(g_5, m_5, o_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_50 (ATerm), ATerm r_50 (ATerm), ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,q_7 = NULL;
  q_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_31 = ATgetFirst((ATermList) t);
      n_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_31);
  l_31 = t;
  t = m_31;
  t = q_50(t);
  o_31 = t;
  t = n_31;
  t = r_50(t);
  p_31 = t;
  t = (ATerm) ATinsert(CheckATermList(p_31), o_31);
  q_7 = t;
  t = SSLsetAnnotations(q_7, l_31);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,a_32 = NULL,b_32 = NULL,s_7 = NULL;
  v_31 = t;
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_14;
        t = h_92(t);
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
      }
  }
  t = v_31;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_31 = ATgetFirst((ATermList) t);
      y_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_31);
  w_31 = t;
  t = term_z_6;
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_6, x_31);
  t = a_5(b_32, x_31, t);
  t = y_31;
  {
    static ATerm l_32 (ATerm t)
    {
      ATerm g_14 = t;
      int i_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_14 = t;
          int k_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_32 = NULL;
              e_32 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_32;
              LocalPopChoice(k_14);
            }
          else
            {
              t = j_14;
              t = h_92(t);
              t = Cons_2_0(_id, l_32, t);
            }
          LocalPopChoice(i_14);
        }
      else
        {
          t = g_14;
          {
            ATerm h_32 = NULL,i_32 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_32 = ATgetFirst((ATermList) t);
                i_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_32), (ATerm) ATmakeAppl(sym_Undefined_1, h_32));
          }
        }
      return(t);
    }
    t = l_32(t);
  }
  a_32 = t;
  t = (ATerm) ATinsert(CheckATermList(a_32), (ATerm) ATmakeAppl(sym_Program_1, x_31));
  s_7 = t;
  t = SSLsetAnnotations(s_7, w_31);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm x_32 = NULL;
  x_32 = t;
  if(match_string(t, "--help"))
    {
      t = x_32;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_32;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_32;
        }
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL;
  t = term_l_14;
  y_32 = t;
  t = term_t_6;
  z_32 = t;
  t = term_n_14;
  t = a_5(y_32, z_32, t);
  t = term_o_14;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_q_14;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_92 (ATerm), ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
  s_32 = t;
  t = term_g_11;
  u_32 = t;
  t = term_h_11;
  v_32 = t;
  t = (ATerm) ATempty;
  w_32 = t;
  t = SSL_table_put(u_32, v_32, w_32);
  t = s_32;
  {
    static ATerm q_5 (ATerm t)
    {
      ATerm r_14 = t;
      int s_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_92(t);
          LocalPopChoice(s_14);
        }
      else
        {
          t = r_14;
          {
            ATerm t_14 = t;
            int u_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_5, b_6, c_6, t);
                LocalPopChoice(u_14);
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
    t = parse_options_p__1_0(q_5, t);
  }
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_33 = NULL;
        g_33 = t;
        {
          ATerm x_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_17 = NULL;
              t = g_33;
              {
                ATerm a_15 = t;
                int b_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_l_14;
                    t = get_config_0_0(t);
                    LocalPopChoice(b_15);
                  }
                else
                  {
                    t = a_15;
                    t = fetch_1_0(d_6, t);
                  }
              }
              t = g_33;
              t = default_system_usage_0_0(t);
              t = term_f_7;
              k_17 = t;
              t = SSL_exit(k_17);
              LocalPopChoice(y_14);
            }
          else
            {
              t = x_14;
              {
                ATerm u_17 = NULL;
                t = term_t_13;
                t = get_config_0_0(t);
                t = g_33;
                t = default_system_about_0_0(t);
                t = term_f_7;
                u_17 = t;
                t = SSL_exit(u_17);
              }
            }
        }
        LocalPopChoice(w_14);
      }
    else
      {
        t = v_14;
        {
          ATerm d_15 = t;
          int e_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
              static ATerm g_6 (ATerm t)
              {
                ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL,a_8 = NULL;
                m_33 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_33 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_33);
                k_33 = t;
                t = l_33;
                if(((q_32 != NULL) && (q_32 != t)))
                  _fail(t);
                else
                  q_32 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_33);
                a_8 = t;
                t = SSLsetAnnotations(a_8, k_33);
                return(t);
              }
              t = fetch_1_0(g_6, t);
              t = term_v_6;
              i_33 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_32)), term_h_15);
              j_33 = t;
              t = SSL_printnl(i_33, j_33);
              t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_32)), term_h_15));
              t = default_system_usage_0_0(t);
              t = term_y_6;
              h_33 = t;
              t = SSL_exit(h_33);
              LocalPopChoice(e_15);
            }
          else
            {
              t = d_15;
            }
        }
      }
  }
  r_32 = t;
  t = term_g_11;
  t_32 = t;
  t = SSL_table_destroy(t_32);
  t = r_32;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
      {
        ATerm l_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(m_15);
          }
        else
          {
            t = l_15;
            {
              ATerm o_15 = t;
              int r_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(o_6, p_6, q_6, t);
                  LocalPopChoice(r_15);
                }
              else
                {
                  t = o_15;
                  {
                    ATerm u_15 = t;
                    int v_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(v_15);
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
static ATerm o_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL;
  t = term_x_15;
  u_33 = t;
  t = term_t_6;
  v_33 = t;
  t = term_y_15;
  t = a_5(u_33, v_33, t);
  t = term_z_15;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_c_16;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,h_18 = NULL,k_18 = NULL,l_18 = NULL,f_8 = NULL;
  l_18 = t;
  if(match_cons(t, sym__2))
    {
      e_18 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_18);
  d_18 = t;
  t = h_18;
  t = visamb_0_0(t);
  k_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_18, k_18);
  f_8 = t;
  t = SSLsetAnnotations(f_8, d_18);
  return(t);
}
ATerm Vis_amb_0_0 (ATerm t)
{
  t = parse_options_1_0(n_6, t);
  {
    ATerm j_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_34 = NULL,x_17 = NULL,c_18 = NULL;
        f_34 = t;
        {
          ATerm l_16 = t;
          int m_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm r_6 (ATerm t)
              {
                if(match_cons(t, sym_Input_1))
                  {
                    if(((x_17 != NULL) && (x_17 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      x_17 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(r_6, t);
              LocalPopChoice(m_16);
            }
          else
            {
              t = l_16;
              t = term_n_16;
              x_17 = t;
            }
        }
        t = not_null(x_17);
        t = ReadFromFile_0_0(t);
        c_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_34, c_18);
        t = apply_strategy_1_0(s_6, t);
        t = output_file_0_0(t);
        t = report_success_0_0(t);
        LocalPopChoice(k_16);
      }
    else
      {
        t = j_16;
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

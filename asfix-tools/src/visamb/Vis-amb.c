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
ATerm term_h_16;
ATerm term_c_16;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_f_15;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_g_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_g_13;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_j_11;
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
ATerm term_t_10;
ATerm term_s_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_i_10;
ATerm term_f_10;
ATerm term_l_8;
ATerm term_i_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_b_8;
ATerm term_z_7;
ATerm term_f_7;
ATerm term_y_6;
ATerm term_x_6;
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
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
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
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym__2, term_z_7, term_f_7);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_7);
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
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
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
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ambiguities, the visamb tool extracts the ambiguities from a parse tree and\n", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("displays them in a readable format.\n", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
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
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_t_6);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__2, term_w_15, term_t_6);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm d_4 (ATerm q_33, ATerm r_33, ATerm t);
ATerm foldr_2_0 (ATerm x_77 (ATerm), ATerm y_77 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm j_86 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm f_4 (ATerm v_30, ATerm w_30, ATerm t);
static ATerm g_4 (ATerm e_16, ATerm f_16, ATerm t);
static ATerm i_4 (ATerm l_71 (ATerm), ATerm c_137, ATerm i_16, ATerm t);
static ATerm h_4 (ATerm a_16, ATerm b_16, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm Lexical_0_0 (ATerm t);
static ATerm k_11 (ATerm n_10, ATerm t);
ATerm abbrev_term_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm k_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm yield_0_0 (ATerm t);
static ATerm o_4 (ATerm p_14, ATerm t);
static ATerm p_4 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm b_22, ATerm a_22, ATerm t);
static ATerm q_4 (ATerm y_75 (ATerm), ATerm x_21, ATerm w_21, ATerm t);
ATerm foldr_3_0 (ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm bu_collect_1_0 (ATerm r_76 (ATerm), ATerm t);
static ATerm n_1 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm visamb_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm b_88 (ATerm), ATerm t);
static ATerm p_22 (ATerm t_21, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm r_4 (ATerm g_16, ATerm t);
static ATerm s_4 (ATerm x_30, ATerm y_30, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_24 (ATerm l_23, ATerm t);
static ATerm n_24 (ATerm p_23, ATerm q_23, ATerm r_23, ATerm t);
static ATerm o_24 (ATerm z_23, ATerm a_24, ATerm b_24, ATerm t);
static ATerm t_4 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm e_72 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_4 (ATerm r_39, ATerm s_39, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm n_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_4 (ATerm p_44, ATerm q_44, ATerm o_44, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm v_4 (ATerm p_29, ATerm q_29, ATerm t);
ATerm debug_1_0 (ATerm j_71 (ATerm), ATerm t);
ATerm map_1_0 (ATerm u_71 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm w_4 (ATerm g_46, ATerm h_46, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_49 (ATerm), ATerm r_49 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm c_91 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm parse_options_1_0 (ATerm b_91 (ATerm), ATerm t);
static ATerm k_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
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
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,j_0 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_6;
  t = whoami_0_0(t);
  a_0 = t;
  t = term_v_6;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_6), a_0);
  j_0 = t;
  t = SSL_printnl(f_0, j_0);
  t = term_x_6;
  b_0 = t;
  t = SSL_exit(b_0);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_y_6;
  t = get_config_0_0(t);
  return(t);
}
static ATerm d_4 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_33, r_33);
      LocalPopChoice(d_7);
    }
  else
    {
      t = c_7;
      t = SSL_addr(q_33, r_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_77 (ATerm), ATerm y_77 (ATerm), ATerm t)
{
  ATerm t_0 = NULL,w_0 = NULL,y_0 = NULL;
  t_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_0;
      t = x_77(t);
    }
  else
    {
      ATerm d_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_0 = ATgetFirst((ATermList) t);
          y_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_0;
      t = foldr_2_0(x_77, y_77, t);
      d_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_0, d_1);
      t = y_77(t);
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
  t = term_f_7;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL;
  if(match_cons(t, sym__2))
    {
      r_0 = ATgetArgument(t, 0);
      s_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_4(r_0, s_0, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_1 = NULL,h_0 = NULL,l_0 = NULL;
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
  t = foldr_2_0(u_0, v_0, t);
  i_1 = t;
  t = SSL_TicksToSeconds(i_1);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,i_2 = NULL;
  f_2 = t;
  if(match_cons(t, sym__2))
    {
      g_2 = ATgetArgument(t, 0);
      i_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_2;
        if((g_2 != t))
          {
            _fail(t);
          }
        t = f_2;
        LocalPopChoice(q_7);
      }
    else
      {
        t = o_7;
        t = (ATerm) ATmakeAppl(sym__2, g_2, i_2);
        {
          ATerm s_7 = t;
          int t_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_2, i_2);
              LocalPopChoice(t_7);
            }
          else
            {
              t = s_7;
              t = SSL_gtr(g_2, i_2);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_2, i_2);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_86 (ATerm), ATerm t)
{
  ATerm n_2 = NULL;
  n_2 = t;
  {
    ATerm u_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_2 = NULL;
        t = term_z_7;
        t = get_config_0_0(t);
        p_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_2, term_x_6);
        t = geq_0_0(t);
        t = n_2;
        t = j_86(t);
        LocalPopChoice(x_7);
      }
    else
      {
        t = u_7;
        t = n_2;
      }
  }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,v_2 = NULL,w_2 = NULL;
  t = run_time_0_0(t);
  s_2 = t;
  t = term_t_6;
  t = whoami_0_0(t);
  t_2 = t;
  t = term_v_6;
  v_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_8), s_2), term_b_8), t_2);
  w_2 = t;
  t = SSL_printnl(v_2, w_2);
  t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_8), s_2), term_b_8), t_2));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_0, t);
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
static ATerm f_4 (ATerm v_30, ATerm w_30, ATerm t)
{
  ATerm c_3 = NULL;
  t = SSL_fputc(v_30, w_30);
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_3);
  return(t);
}
static ATerm g_4 (ATerm e_16, ATerm f_16, ATerm t)
{
  ATerm d_3 = NULL;
  t = SSL_write_term_to_stream_text(e_16, f_16);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_3);
  return(t);
}
static ATerm i_4 (ATerm l_71 (ATerm), ATerm c_137, ATerm i_16, ATerm t)
{
  ATerm f_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_137, term_e_8);
  t = t_4(t);
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_3, i_16);
  t = l_71(t);
  t = fclose_0_0(t);
  t = i_16;
  return(t);
}
static ATerm h_4 (ATerm a_16, ATerm b_16, ATerm t)
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
  ATerm a_2 = NULL,c_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_8 = ATgetArgument(t, 0);
      if(match_cons(f_8, sym_Stream_1))
        {
          a_2 = ATgetArgument(f_8, 0);
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
static ATerm c_1 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,m_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_8 = ATgetArgument(t, 0);
      if(match_cons(h_8, sym_Stream_1))
        {
          k_3 = ATgetArgument(h_8, 0);
        }
      else
        _fail(t);
      m_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(k_3, m_3, t);
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
  t = f_4(i_3, j_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm l_3 = NULL,o_3 = NULL,p_3 = NULL,s_3 = NULL,t_3 = NULL,w_3 = NULL,b_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,h_6 = NULL,l_6 = NULL,m_0 = NULL,g_0 = NULL;
  o_3 = t;
  if(match_cons(t, sym__2))
    {
      j_4 = ATgetArgument(t, 0);
      k_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_3);
  b_4 = t;
  t = j_4;
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
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_4, k_4);
  g_0 = t;
  t = SSLsetAnnotations(g_0, b_4);
  t = o_3;
  if(match_cons(t, sym__2))
    {
      s_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_3);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_3, (ATerm) ATmakeAppl(sym__2, not_null(l_3), t_3));
  m_0 = t;
  t = SSLsetAnnotations(m_0, p_3);
  w_3 = t;
  if(match_cons(t, sym__2))
    {
      h_6 = ATgetArgument(t, 0);
      l_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,q_0 = NULL;
        t = SSLgetAnnotations(w_3);
        t_1 = t;
        t = h_6;
        t = fetch_1_0(a_1, t);
        w_1 = t;
        t = l_6;
        if(match_cons(t, sym__2))
          {
            y_1 = ATgetArgument(t, 0);
            z_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_4(b_1, y_1, z_1, t);
        x_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_1, x_1);
        q_0 = t;
        t = SSLsetAnnotations(q_0, t_1);
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        {
          ATerm r_2 = NULL,a_3 = NULL,b_3 = NULL,e_3 = NULL,e_1 = NULL;
          t = SSLgetAnnotations(w_3);
          r_2 = t;
          t = l_6;
          if(match_cons(t, sym__2))
            {
              b_3 = ATgetArgument(t, 0);
              e_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_4(c_1, b_3, e_3, t);
          a_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_6, a_3);
          e_1 = t;
          t = SSLsetAnnotations(e_1, r_2);
        }
      }
  }
  return(t);
}
ATerm Lexical_0_0 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL;
  z_9 = t;
  if(match_cons(t, sym_appl_2))
    {
      a_10 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 = NULL,z_3 = NULL,e_4 = NULL,c_5 = NULL,d_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL,q_5 = NULL,r_5 = NULL,y_5 = NULL,z_5 = NULL,d_6 = NULL,e_6 = NULL,i_6 = NULL,j_6 = NULL,d_2 = NULL,b_2 = NULL,q_1 = NULL,p_1 = NULL,o_1 = NULL;
        t = SSLgetAnnotations(z_9);
        z_3 = t;
        t = a_10;
        if(match_cons(t, sym_prod_3))
          {
            c_5 = ATgetArgument(t, 0);
            d_5 = ATgetArgument(t, 1);
            h_5 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_10);
        e_4 = t;
        t = c_5;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_5 = ATgetFirst((ATermList) t);
            z_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_5);
        r_5 = t;
        t = y_5;
        if(match_cons(t, sym_lex_1))
          {
            i_6 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_5);
        e_6 = t;
        t = (ATerm) ATmakeAppl(sym_lex_1, i_6);
        o_1 = t;
        t = SSLsetAnnotations(o_1, e_6);
        j_6 = t;
        t = z_5;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(z_5), j_6);
        p_1 = t;
        t = SSLsetAnnotations(p_1, r_5);
        d_6 = t;
        t = d_5;
        if(match_cons(t, sym_cf_1))
          {
            k_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_5);
        j_5 = t;
        t = (ATerm) ATmakeAppl(sym_cf_1, k_5);
        q_1 = t;
        t = SSLsetAnnotations(q_1, j_5);
        q_5 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, d_6, q_5, h_5);
        b_2 = t;
        t = SSLsetAnnotations(b_2, e_4);
        i_5 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, i_5, b_10);
        d_2 = t;
        t = SSLsetAnnotations(d_2, z_3);
        t = yield_0_0(t);
        y_3 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lexical_1, y_3));
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
        {
          ATerm u_6 = NULL,z_6 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_4 = NULL,m_4 = NULL,k_2 = NULL;
          t = SSLgetAnnotations(z_9);
          u_6 = t;
          t = a_10;
          if(match_cons(t, sym_prod_3))
            {
              g_7 = ATgetArgument(t, 0);
              h_7 = ATgetArgument(t, 1);
              i_7 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_10);
          z_6 = t;
          t = h_7;
          if(match_cons(t, sym_lit_1))
            {
              l_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_7);
          k_7 = t;
          t = (ATerm) ATmakeAppl(sym_lit_1, l_7);
          k_2 = t;
          t = SSLsetAnnotations(k_2, k_7);
          m_7 = t;
          t = (ATerm) ATmakeAppl(sym_prod_3, g_7, m_7, i_7);
          m_4 = t;
          t = SSLsetAnnotations(m_4, z_6);
          j_7 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, j_7, b_10);
          n_4 = t;
          t = SSLsetAnnotations(n_4, u_6);
          t = (ATerm) ATempty;
        }
      }
  }
  return(t);
}
static ATerm k_11 (ATerm n_10, ATerm t)
{
  t = SSL_is_int(n_10);
  return(t);
}
ATerm abbrev_term_0_0 (ATerm t)
{
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,u_10 = NULL;
      p_10 = t;
      if(match_cons(t, sym_amb_1))
        {
          q_10 = ATgetArgument(t, 0);
          t = q_10;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_10 = ATgetFirst((ATermList) t);
              u_10 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm u_8 = t;
                int v_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = k_11(p_10, t);
                    LocalPopChoice(v_8);
                  }
                else
                  {
                    t = u_8;
                    t = r_10;
                  }
              }
            }
          else
            {
              t = k_11(p_10, t);
            }
        }
      else
        {
          t = k_11(p_10, t);
        }
      LocalPopChoice(t_8);
    }
  else
    {
      t = s_8;
      {
        ATerm v_7 = NULL,y_7 = NULL,c_8 = NULL;
        v_7 = t;
        if(match_cons(t, sym_appl_2))
          {
            ATerm x_8 = ATgetArgument(t, 0);
            if(match_cons(x_8, sym_prod_3))
              {
                ATerm z_8 = ATgetArgument(x_8, 0);
                c_8 = ATgetArgument(x_8, 1);
                {
                  ATerm a_9 = ATgetArgument(x_8, 2);
                }
              }
            else
              _fail(t);
            {
              ATerm y_8 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = v_7;
        {
          ATerm b_9 = t;
          int c_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Lexical_0_0(t);
              LocalPopChoice(c_9);
            }
          else
            {
              t = b_9;
              {
                ATerm m_8 = NULL,n_8 = NULL;
                if(match_cons(t, sym_appl_2))
                  {
                    m_8 = ATgetArgument(t, 0);
                    n_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = n_8;
                t = map_1_0(abbrev_term_0_0, t);
              }
            }
        }
        y_7 = t;
        t = (ATerm) ATmakeAppl(sym_N_2, c_8, y_7);
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm k_72 (ATerm), ATerm t)
{
  static ATerm b_13 (ATerm t)
  {
    ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
    v_12 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_12 = ATgetFirst((ATermList) t);
        u_12 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_8 = NULL,d_9 = NULL,m_5 = NULL;
          t = SSLgetAnnotations(v_12);
          w_8 = t;
          t = u_12;
          t = b_13(t);
          d_9 = t;
          t = (ATerm) ATinsert(CheckATermList(d_9), t_12);
          m_5 = t;
          t = SSLsetAnnotations(m_5, w_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_12;
        t = k_72(t);
      }
    return(t);
  }
  t = b_13(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_13 = NULL,m_13 = NULL,n_13 = NULL;
  h_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_13;
    }
  else
    {
      static ATerm f_1 (ATerm t)
      {
        t = not_null(n_13);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_13 = ATgetFirst((ATermList) t);
          if(((n_13 != NULL) && (n_13 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_13;
      t = at_end_1_0(f_1, t);
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm c_14 = NULL;
  static ATerm o_15 (ATerm t)
  {
    ATerm g_15 = NULL,k_15 = NULL,l_15 = NULL;
    l_15 = t;
    if(match_cons(t, sym_appl_2))
      {
        g_15 = ATgetArgument(t, 0);
        k_15 = ATgetArgument(t, 1);
        {
          ATerm e_9 = t;
          int f_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_9 = NULL,c_10 = NULL,k_10 = NULL,o_5 = NULL;
              t = SSLgetAnnotations(l_15);
              c_10 = t;
              t = k_15;
              t = map_1_0(o_15, t);
              k_10 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, g_15, k_10);
              o_5 = t;
              t = SSLsetAnnotations(o_5, c_10);
              if(match_cons(t, sym_appl_2))
                {
                  ATerm g_9 = ATgetArgument(t, 0);
                  t_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_9;
              t = concat_0_0(t);
              LocalPopChoice(f_9);
            }
          else
            {
              t = e_9;
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
  c_14 = t;
  t = SSL_implode_string(c_14);
  return(t);
}
static ATerm o_4 (ATerm p_14, ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,t_15 = NULL;
  t = p_14;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_15 = ATgetFirst((ATermList) t);
      {
        ATerm h_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_15;
  t = yield_0_0(t);
  q_15 = t;
  t = p_14;
  t = map_1_0(abbrev_term_0_0, t);
  r_15 = t;
  t = (ATerm) ATmakeAppl(sym_amb_abbr_2, q_15, r_15);
  return(t);
}
static ATerm p_4 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm b_22, ATerm a_22, ATerm t)
{
  t = c_76(t);
  {
    static ATerm g_1 (ATerm t)
    {
      ATerm x_15 = NULL;
      x_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_22, x_15);
      t = b_76(t);
      return(t);
    }
    t = fetch_1_0(g_1, t);
  }
  t = a_22;
  return(t);
}
static ATerm q_4 (ATerm y_75 (ATerm), ATerm x_21, ATerm w_21, ATerm t)
{
  static ATerm f_17 (ATerm t)
  {
    ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
    v_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_16 = ATgetFirst((ATermList) t);
            x_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_9 = t;
          int j_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_16;
              {
                static ATerm h_1 (ATerm t)
                {
                  t = w_21;
                  return(t);
                }
                t = p_4(y_75, h_1, w_16, x_16, t);
              }
              t = f_17(t);
              LocalPopChoice(j_9);
            }
          else
            {
              t = i_9;
              {
                ATerm m_11 = NULL,p_11 = NULL,s_5 = NULL;
                t = SSLgetAnnotations(v_16);
                m_11 = t;
                t = x_16;
                t = f_17(t);
                p_11 = t;
                t = (ATerm) ATinsert(CheckATermList(p_11), w_16);
                s_5 = t;
                t = SSLsetAnnotations(s_5, m_11);
              }
            }
        }
      }
    return(t);
  }
  t = x_21;
  t = f_17(t);
  return(t);
}
ATerm foldr_3_0 (ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm b_78 (ATerm), ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,p_17 = NULL;
  m_17 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_17;
      t = z_77(t);
    }
  else
    {
      ATerm y_17 = NULL,z_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_17 = ATgetFirst((ATermList) t);
          p_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_17;
      t = b_78(t);
      y_17 = t;
      t = p_17;
      t = foldr_3_0(z_77, a_78, b_78, t);
      z_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_17, z_17);
      t = a_78(t);
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
  ATerm b_12 = NULL,d_12 = NULL;
  if(match_cons(t, sym__2))
    {
      b_12 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4(m_1, b_12, d_12, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm e_12 = NULL;
  if(match_cons(t, sym__2))
    {
      e_12 = ATgetArgument(t, 0);
      if((e_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm bu_collect_1_0 (ATerm r_76 (ATerm), ATerm t)
{
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm e_19 (ATerm t)
      {
        ATerm m_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_11 = NULL,x_11 = NULL;
            static ATerm l_1 (ATerm t)
            {
              ATerm o_9 = t;
              int p_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_12 = NULL,w_12 = NULL,x_12 = NULL,e_13 = NULL,i_13 = NULL,u_5 = NULL;
                  s_12 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_12 = ATgetFirst((ATermList) t);
                      x_12 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_12);
                  e_13 = t;
                  t = w_12;
                  t = r_76(t);
                  i_13 = t;
                  t = (ATerm) ATinsert(CheckATermList(x_12), i_13);
                  u_5 = t;
                  t = SSLsetAnnotations(u_5, e_13);
                  LocalPopChoice(p_9);
                }
              else
                {
                  t = o_9;
                  t = (ATerm) ATempty;
                }
              return(t);
            }
            t = SRTS_some(e_19, t);
            x_11 = t;
            t = SSL_explode_term(x_11);
            if(match_cons(t, sym__2))
              {
                ATerm q_9 = ATgetArgument(t, 0);
                w_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_11;
            t = foldr_3_0(j_1, k_1, l_1, t);
            LocalPopChoice(n_9);
          }
        else
          {
            t = m_9;
            {
              ATerm d_19 = NULL;
              t = r_76(t);
              d_19 = t;
              t = (ATerm) ATinsert(ATempty, d_19);
            }
          }
        return(t);
      }
      t = e_19(t);
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
  ATerm l_20 = NULL,r_20 = NULL,t_20 = NULL,w_5 = NULL;
  t_20 = t;
  if(match_cons(t, sym_amb_1))
    {
      r_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_20);
  l_20 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, r_20);
  w_5 = t;
  t = SSLsetAnnotations(w_5, l_20);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL;
  if(match_cons(t, sym_amb_1))
    {
      x_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_4(x_20, t);
  w_20 = t;
  t = (ATerm) ATmakeAppl(sym_root_1, w_20);
  return(t);
}
ATerm visamb_0_0 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,r_19 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,a_6 = NULL,x_5 = NULL;
  i_20 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      c_20 = ATgetArgument(t, 0);
      d_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_20);
  b_20 = t;
  t = c_20;
  t = bu_collect_1_0(n_1, t);
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, g_20, d_20);
  x_5 = t;
  t = SSLsetAnnotations(x_5, b_20);
  h_20 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      l_19 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_20);
  k_19 = t;
  t = l_19;
  t = map_1_0(r_1, t);
  n_19 = t;
  t = SSL_int_to_string(m_19);
  r_19 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, n_19, r_19);
  a_6 = t;
  t = SSLsetAnnotations(a_6, k_19);
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
  c_21 = t;
  t = dtime_0_0(t);
  t = c_21;
  t = b_88(t);
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
static ATerm p_22 (ATerm t_21, ATerm t)
{
  t = SSL_fclose(t_21);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_22 = NULL,n_22 = NULL;
  n_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_22 = ATgetArgument(t, 0);
      {
        ATerm r_9 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_22);
            LocalPopChoice(s_9);
          }
        else
          {
            t = r_9;
            t = p_22(n_22, t);
          }
      }
    }
  else
    {
      t = p_22(n_22, t);
    }
  return(t);
}
static ATerm r_4 (ATerm g_16, ATerm t)
{
  t = SSL_read_term_from_stream(g_16);
  return(t);
}
static ATerm s_4 (ATerm x_30, ATerm y_30, ATerm t)
{
  ATerm q_22 = NULL;
  t = SSL_fopen(x_30, y_30);
  q_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_22);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_22 = NULL;
  t = SSL_stdin_stream();
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_22 = NULL;
  t = SSL_stdout_stream();
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_22);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_22 = NULL;
  t = SSL_stderr_stream();
  t_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_22);
  return(t);
}
static ATerm m_24 (ATerm l_23, ATerm t)
{
  ATerm m_23 = NULL;
  t = SSL_explode_term(l_23);
  if(match_cons(t, sym__2))
    {
      ATerm u_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_9 = ATgetArgument(t, 1);
        if(((ATgetType(v_9) == AT_LIST) && !(ATisEmpty(v_9))))
          {
            m_23 = ATgetFirst((ATermList) v_9);
            {
              ATerm w_9 = (ATerm) ATgetNext((ATermList) v_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_23;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_23;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_23;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_23;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_24 (ATerm p_23, ATerm q_23, ATerm r_23, ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL,x_23 = NULL,m_6 = NULL;
  t = SSLgetAnnotations(r_23);
  u_23 = t;
  t = p_23;
  if(match_cons(t, sym_Path_1))
    {
      x_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_23, q_23);
  m_6 = t;
  t = SSLsetAnnotations(m_6, u_23);
  if(match_cons(t, sym__2))
    {
      s_23 = ATgetArgument(t, 0);
      t_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(s_23, t_23, t);
  return(t);
}
static ATerm o_24 (ATerm z_23, ATerm a_24, ATerm b_24, ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,h_24 = NULL,r_6 = NULL;
  t = SSLgetAnnotations(b_24);
  e_24 = t;
  t = SSL_is_string(z_23);
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_24, a_24);
  r_6 = t;
  t = SSLsetAnnotations(r_6, e_24);
  if(match_cons(t, sym__2))
    {
      c_24 = ATgetArgument(t, 0);
      d_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(c_24, d_24, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
  j_24 = t;
  if(match_cons(t, sym__2))
    {
      k_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
      {
        ATerm x_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_24(j_24, t);
            LocalPopChoice(y_9);
          }
        else
          {
            t = x_9;
            {
              ATerm d_10 = t;
              int e_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_24(k_24, l_24, j_24, t);
                  LocalPopChoice(e_10);
                }
              else
                {
                  t = d_10;
                  t = o_24(k_24, l_24, j_24, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_24(j_24, t);
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_f_10;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_24 = NULL;
      s_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_24, term_i_10);
      t = t_4(t);
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      t = debug_1_0(s_1, t);
      _fail(t);
    }
  q_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_4(r_24, t);
  p_24 = t;
  t = q_24;
  t = fclose_0_0(t);
  t = p_24;
  return(t);
}
ATerm fetch_1_0 (ATerm e_72 (ATerm), ATerm t)
{
  static ATerm q_25 (ATerm t)
  {
    ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
    n_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_25 = ATgetFirst((ATermList) t);
        p_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_10 = t;
      int l_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_14 = NULL,k_14 = NULL,a_7 = NULL;
          t = SSLgetAnnotations(n_25);
          b_14 = t;
          t = o_25;
          t = e_72(t);
          k_14 = t;
          t = (ATerm) ATinsert(CheckATermList(p_25), k_14);
          a_7 = t;
          t = SSLsetAnnotations(a_7, b_14);
          LocalPopChoice(l_10);
        }
      else
        {
          t = j_10;
          {
            ATerm x_14 = NULL,b_15 = NULL,b_7 = NULL;
            t = SSLgetAnnotations(n_25);
            x_14 = t;
            t = p_25;
            t = q_25(t);
            b_15 = t;
            t = (ATerm) ATinsert(CheckATermList(b_15), o_25);
            b_7 = t;
            t = SSLsetAnnotations(b_7, x_14);
          }
        }
    }
    return(t);
  }
  t = q_25(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm u_25 = NULL;
  u_25 = t;
  if(match_string(t, "-k"))
    {
      t = u_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_25;
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  t = SSL_string_to_int(v_25);
  w_25 = t;
  t = term_m_10;
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, w_25);
  t = z_4(x_25, w_25, t);
  t = v_25;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_o_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_1, v_1, e_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm z_25 = NULL;
  z_25 = t;
  if(match_string(t, "-S"))
    {
      t = z_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_25;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL;
  t = term_z_7;
  a_26 = t;
  t = term_f_7;
  b_26 = t;
  t = term_s_10;
  t = z_4(a_26, b_26, t);
  t = term_t_10;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_v_10;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
  c_26 = t;
  t = SSL_string_to_int(c_26);
  d_26 = t;
  t = term_z_7;
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_7, d_26);
  t = z_4(e_26, d_26, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_26);
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
static ATerm y_2 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL;
  t = term_x_10;
  f_26 = t;
  t = term_t_6;
  g_26 = t;
  t = term_y_10;
  t = z_4(f_26, g_26, t);
  t = term_z_10;
  return(t);
}
static ATerm z_2 (ATerm t)
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
      t = Option_3_0(h_2, j_2, l_2, t);
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
            t = ArgOption_3_0(m_2, o_2, q_2, t);
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
            t = Option_3_0(u_2, y_2, z_2, t);
          }
      }
    }
  return(t);
}
static ATerm z_4 (ATerm r_39, ATerm s_39, ATerm t)
{
  ATerm h_26 = NULL;
  t = term_f_11;
  h_26 = t;
  t = SSL_table_put(h_26, r_39, s_39);
  t = (ATerm) ATmakeAppl(sym__3, term_f_11, r_39, s_39);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
      t = term_t_6;
      t = e_0(t);
      m_26 = t;
      t = term_g_11;
      n_26 = t;
      t = term_h_11;
      o_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_11, term_h_11, m_26);
      t = x_4(n_26, o_26, m_26, t);
      _fail(t);
    }
  else
    {
      ATerm r_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_26 = ATgetFirst((ATermList) t);
          l_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_26;
      t = c_0(t);
      t = term_t_6;
      t = d_0(t);
      r_26 = t;
      t = (ATerm) ATinsert(CheckATermList(l_26), r_26);
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm t_26 = NULL;
  t_26 = t;
  if(match_string(t, "-o"))
    {
      t = t_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_26;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL;
  u_26 = t;
  t = term_i_11;
  v_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_11, u_26);
  t = z_4(v_26, u_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_26);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_j_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_3, q_3, r_3, t);
  return(t);
}
static ATerm x_4 (ATerm p_44, ATerm q_44, ATerm o_44, ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_44, q_44);
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
        t = (ATerm) ATmakeAppl(sym__2, p_44, q_44);
        t = w_4(p_44, q_44, t);
        LocalPopChoice(n_11);
      }
    else
      {
        t = l_11;
        t = (ATerm) ATempty;
      }
  }
  y_26 = t;
  t = (ATerm) ATinsert(CheckATermList(y_26), o_44);
  z_26 = t;
  t = SSL_table_put(p_44, q_44, z_26);
  t = x_26;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
      t = term_t_6;
      t = p_0(t);
      k_27 = t;
      t = term_g_11;
      l_27 = t;
      t = term_h_11;
      m_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_11, term_h_11, k_27);
      t = x_4(l_27, m_27, k_27, t);
      _fail(t);
    }
  else
    {
      ATerm q_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_27 = ATgetFirst((ATermList) t);
          h_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_27 = ATgetFirst((ATermList) t);
          j_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_27;
      t = n_0(t);
      t = i_27;
      t = o_0(t);
      q_27 = t;
      t = (ATerm) ATinsert(CheckATermList(j_27), q_27);
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm s_27 = NULL;
  s_27 = t;
  if(match_string(t, "-i"))
    {
      t = s_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_27;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL;
  t_27 = t;
  t = term_r_11;
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_11, t_27);
  t = z_4(u_27, t_27, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_27);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_3, v_3, x_3, t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_27 = ATgetFirst((ATermList) t);
      x_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_28 = NULL,c_28 = NULL;
        static ATerm a_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_28)), not_null(c_28));
          return(t);
        }
        t = x_27;
        t = k_0(t);
        if(((b_28 != NULL) && (b_28 != t)))
          _fail(t);
        else
          b_28 = t;
        t = w_27;
        t = i_0(t);
        if(((c_28 != NULL) && (c_28 != t)))
          _fail(t);
        else
          c_28 = t;
        t = x_27;
        t = reverse_acc_2_0(i_0, a_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_6;
      t = k_0(t);
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm p_28 = NULL;
  p_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_28), term_t_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_6;
      t = get_config_0_0(t);
      g_28 = t;
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      {
        static ATerm c_4 (ATerm t)
        {
          ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL,e_7 = NULL;
          l_28 = t;
          if(match_cons(t, sym_Program_1))
            {
              k_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_28);
          j_28 = t;
          t = k_28;
          if(((g_28 != NULL) && (g_28 != t)))
            _fail(t);
          else
            g_28 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, k_28);
          e_7 = t;
          t = SSLsetAnnotations(e_7, j_28);
          return(t);
        }
        t = fetch_1_0(c_4, t);
      }
    }
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_12), not_null(g_28)), term_a_12);
        t = echo_0_0(t);
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
      }
  }
  t = term_f_12;
  t = echo_0_0(t);
  t = term_g_11;
  h_28 = t;
  t = term_h_11;
  i_28 = t;
  t = term_g_12;
  t = w_4(h_28, i_28, t);
  t = reverse_acc_2_0(_id, u_4, t);
  t = map_1_0(y_4, t);
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_12), term_q_12), term_p_12), term_o_12), term_n_12), term_m_12), term_l_12), term_k_12), term_j_12);
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
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
  t_28 = t;
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_13 = ATgetFirst((ATermList) t);
                ATerm c_13 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_28;
          }
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        t = (ATerm) ATinsert(ATempty, t_28);
      }
  }
  u_28 = t;
  t = term_l_8;
  v_28 = t;
  t = SSL_printnl(v_28, u_28);
  t = t_28;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_y_6;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm v_4 (ATerm p_29, ATerm q_29, ATerm t)
{
  t = SSL_strcat(p_29, q_29);
  return(t);
}
ATerm debug_1_0 (ATerm j_71 (ATerm), ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL;
  z_28 = t;
  t = j_71(t);
  a_29 = t;
  t = term_v_6;
  b_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_28), a_29);
  c_29 = t;
  t = SSL_printnl(b_29, c_29);
  t = z_28;
  return(t);
}
ATerm map_1_0 (ATerm u_71 (ATerm), ATerm t)
{
  static ATerm t_29 (ATerm t)
  {
    ATerm o_29 = NULL,r_29 = NULL,s_29 = NULL;
    o_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_29;
      }
    else
      {
        ATerm v_15 = NULL,z_15 = NULL,d_16 = NULL,p_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_29 = ATgetFirst((ATermList) t);
            s_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_29);
        v_15 = t;
        t = r_29;
        t = u_71(t);
        z_15 = t;
        t = s_29;
        t = t_29(t);
        d_16 = t;
        t = (ATerm) ATinsert(CheckATermList(d_16), z_15);
        p_7 = t;
        t = SSLsetAnnotations(p_7, v_15);
      }
    return(t);
  }
  t = t_29(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm d_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(f_13);
    }
  else
    {
      t = d_13;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_g_13;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_30 = NULL;
      b_30 = t;
      t = SSL_is_string(b_30);
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      {
        ATerm l_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_5, t);
            LocalPopChoice(o_13);
          }
        else
          {
            t = l_13;
            {
              ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
              h_30 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_30 = ATgetArgument(t, 0);
                  t = i_30;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_30 = ATgetArgument(t, 0);
                      t = i_30;
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
                            t = debug_1_0(b_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_30 = NULL,o_30 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_30 = ATgetArgument(t, 0);
                          j_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_30;
                      t = eval_config_0_0(t);
                      n_30 = t;
                      t = j_30;
                      t = eval_config_0_0(t);
                      o_30 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_30, o_30);
                      t = v_4(n_30, o_30, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_4 (ATerm g_46, ATerm h_46, ATerm t)
{
  t = SSL_table_get(g_46, h_46);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL;
  s_30 = t;
  t = term_f_11;
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_11, s_30);
  t = w_4(t_30, s_30, t);
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_30 = NULL,b_31 = NULL;
        t = eval_config_0_0(t);
        u_30 = t;
        t = term_f_11;
        b_31 = t;
        t = SSL_table_put(b_31, s_30, u_30);
        t = u_30;
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
      }
  }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL;
  t = term_t_13;
  g_31 = t;
  t = term_t_6;
  h_31 = t;
  t = term_u_13;
  t = z_4(g_31, h_31, t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_v_13;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL;
  t = term_t_13;
  k_31 = t;
  t = term_t_6;
  l_31 = t;
  t = term_u_13;
  t = z_4(k_31, l_31, t);
  t = term_w_13;
  i_31 = t;
  t = term_t_6;
  j_31 = t;
  t = term_x_13;
  t = z_4(i_31, j_31, t);
  t = term_y_13;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_z_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_5, f_5, g_5, t);
      LocalPopChoice(d_14);
    }
  else
    {
      t = a_14;
      t = Option_3_0(l_5, n_5, p_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_49 (ATerm), ATerm r_49 (ATerm), ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,r_7 = NULL;
  r_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_31 = ATgetFirst((ATermList) t);
      o_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_31);
  m_31 = t;
  t = n_31;
  t = q_49(t);
  p_31 = t;
  t = o_31;
  t = r_49(t);
  q_31 = t;
  t = (ATerm) ATinsert(CheckATermList(q_31), p_31);
  r_7 = t;
  t = SSLsetAnnotations(r_7, m_31);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_91 (ATerm), ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,b_32 = NULL,c_32 = NULL,w_7 = NULL;
  w_31 = t;
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_14;
        t = c_91(t);
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
      }
  }
  t = w_31;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_31 = ATgetFirst((ATermList) t);
      z_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_31);
  x_31 = t;
  t = term_y_6;
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_6, y_31);
  t = z_4(c_32, y_31, t);
  t = z_31;
  {
    static ATerm m_32 (ATerm t)
    {
      ATerm h_14 = t;
      int i_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_14 = t;
          int l_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_32 = NULL;
              f_32 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_32;
              LocalPopChoice(l_14);
            }
          else
            {
              t = j_14;
              t = c_91(t);
              t = Cons_2_0(_id, m_32, t);
            }
          LocalPopChoice(i_14);
        }
      else
        {
          t = h_14;
          {
            ATerm i_32 = NULL,j_32 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_32 = ATgetFirst((ATermList) t);
                j_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(j_32), (ATerm) ATmakeAppl(sym_Undefined_1, i_32));
          }
        }
      return(t);
    }
    t = m_32(t);
  }
  b_32 = t;
  t = (ATerm) ATinsert(CheckATermList(b_32), (ATerm) ATmakeAppl(sym_Program_1, y_31));
  w_7 = t;
  t = SSLsetAnnotations(w_7, x_31);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm y_32 = NULL;
  y_32 = t;
  if(match_string(t, "--help"))
    {
      t = y_32;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_32;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_32;
        }
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL;
  t = term_m_14;
  z_32 = t;
  t = term_t_6;
  a_33 = t;
  t = term_n_14;
  t = z_4(z_32, a_33, t);
  t = term_o_14;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_q_14;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_91 (ATerm), ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL;
  t_32 = t;
  t = term_g_11;
  v_32 = t;
  t = term_h_11;
  w_32 = t;
  t = (ATerm) ATempty;
  x_32 = t;
  t = SSL_table_put(v_32, w_32, x_32);
  t = t_32;
  {
    static ATerm t_5 (ATerm t)
    {
      ATerm r_14 = t;
      int s_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_91(t);
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
                t = Option_3_0(v_5, b_6, c_6, t);
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
    t = parse_options_p__1_0(t_5, t);
  }
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_33 = NULL;
        h_33 = t;
        {
          ATerm y_14 = t;
          int z_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_17 = NULL;
              t = h_33;
              {
                ATerm a_15 = t;
                int c_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_14;
                    t = get_config_0_0(t);
                    LocalPopChoice(c_15);
                  }
                else
                  {
                    t = a_15;
                    t = fetch_1_0(f_6, t);
                  }
              }
              t = h_33;
              t = default_system_usage_0_0(t);
              t = term_f_7;
              k_17 = t;
              t = SSL_exit(k_17);
              LocalPopChoice(z_14);
            }
          else
            {
              t = y_14;
              {
                ATerm t_17 = NULL;
                t = term_t_13;
                t = get_config_0_0(t);
                t = h_33;
                t = default_system_about_0_0(t);
                t = term_f_7;
                t_17 = t;
                t = SSL_exit(t_17);
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
              ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
              static ATerm g_6 (ATerm t)
              {
                ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL,a_8 = NULL;
                n_33 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    m_33 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_33);
                l_33 = t;
                t = m_33;
                if(((r_32 != NULL) && (r_32 != t)))
                  _fail(t);
                else
                  r_32 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, m_33);
                a_8 = t;
                t = SSLsetAnnotations(a_8, l_33);
                return(t);
              }
              t = fetch_1_0(g_6, t);
              t = term_v_6;
              j_33 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_32)), term_f_15);
              k_33 = t;
              t = SSL_printnl(j_33, k_33);
              t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_32)), term_f_15));
              t = default_system_usage_0_0(t);
              t = term_x_6;
              i_33 = t;
              t = SSL_exit(i_33);
              LocalPopChoice(e_15);
            }
          else
            {
              t = d_15;
            }
        }
      }
  }
  s_32 = t;
  t = term_g_11;
  u_32 = t;
  t = SSL_table_destroy(u_32);
  t = s_32;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
      {
        ATerm j_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(m_15);
          }
        else
          {
            t = j_15;
            {
              ATerm n_15 = t;
              int p_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(n_6, o_6, p_6, t);
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
                        t = verbose_option_0_0(t);
                        LocalPopChoice(u_15);
                      }
                    else
                      {
                        t = s_15;
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
static ATerm n_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL;
  t = term_w_15;
  v_33 = t;
  t = term_t_6;
  w_33 = t;
  t = term_y_15;
  t = z_4(v_33, w_33, t);
  t = term_c_16;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_h_16;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,h_18 = NULL,k_18 = NULL,g_8 = NULL;
  k_18 = t;
  if(match_cons(t, sym__2))
    {
      e_18 = ATgetArgument(t, 0);
      f_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_18);
  d_18 = t;
  t = f_18;
  t = visamb_0_0(t);
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_18, h_18);
  g_8 = t;
  t = SSLsetAnnotations(g_8, d_18);
  return(t);
}
ATerm Vis_amb_0_0 (ATerm t)
{
  t = parse_options_1_0(k_6, t);
  {
    ATerm j_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_34 = NULL,w_17 = NULL,c_18 = NULL;
        g_34 = t;
        {
          ATerm l_16 = t;
          int m_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm q_6 (ATerm t)
              {
                if(match_cons(t, sym_Input_1))
                  {
                    if(((w_17 != NULL) && (w_17 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      w_17 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(q_6, t);
              LocalPopChoice(m_16);
            }
          else
            {
              t = l_16;
              t = term_n_16;
              w_17 = t;
            }
        }
        t = not_null(w_17);
        t = ReadFromFile_0_0(t);
        c_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_34, c_18);
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

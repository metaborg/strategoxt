#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_Path_2;
Symbol sym_SDefT_4;
Symbol sym_ExtSDefInl_4;
Symbol sym_ExtSDef_3;
static void init_module_constructors (void)
{
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
}
ATerm term_v_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_s_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_i_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_o_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_j_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_c_9;
ATerm term_r_8;
ATerm term_o_8;
ATerm term_q_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_d_7;
ATerm term_s_6;
ATerm term_i_6;
ATerm term_w_5;
ATerm term_u_5;
ATerm term_g_5;
ATerm term_x_4;
ATerm term_w_4;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeInt(45);
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_u_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym__2, term_b_10, term_j_9);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_q_10);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_j_9);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_j_9);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_r_11, term_j_9);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym__2, term_i_6, term_j_9);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining: do not include definition bodies", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym__2, term_q_7, term_j_9);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm UnCify_1_0 (ATerm e_93 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm c_93 (ATerm (ATerm), ATerm), ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm match_digits_1_0 (ATerm i_75 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm i_84 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm b_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm m_0 (ATerm t);
ATerm unmangle_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm c_77 (ATerm), ATerm t);
static ATerm q_0 (ATerm t);
static ATerm d_4 (ATerm i_20, ATerm j_20, ATerm k_20, ATerm l_20, ATerm t);
ATerm filter_1_0 (ATerm v_90 (ATerm), ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm defs_to_external_defs_0_0 (ATerm t);
static ATerm e_4 (ATerm r_36, ATerm s_36, ATerm t);
static ATerm f_4 (ATerm a_22, ATerm b_22, ATerm t);
static ATerm h_4 (ATerm f_83 (ATerm), ATerm f_140, ATerm e_22, ATerm t);
static ATerm g_4 (ATerm w_21, ATerm x_21, ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm output_1_0 (ATerm c_101 (ATerm), ATerm t);
static ATerm v_13 (ATerm k_13, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_4 (ATerm c_22, ATerm t);
static ATerm j_4 (ATerm t_36, ATerm u_36, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm z_15 (ATerm m_14, ATerm t);
static ATerm a_16 (ATerm s_14, ATerm t_14, ATerm u_14, ATerm t);
static ATerm b_16 (ATerm j_15, ATerm l_15, ATerm m_15, ATerm t);
static ATerm k_4 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm d_101 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm s_4 (ATerm n_45, ATerm o_45, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_4 (ATerm n_50, ATerm o_50, ATerm m_50, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_4 (ATerm m_39, ATerm n_39, ATerm t);
ATerm foldr_2_0 (ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm d_98 (ATerm), ATerm t);
static ATerm h_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm need_help_1_0 (ATerm t_100 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_83 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm o_4 (ATerm l_35, ATerm m_35, ATerm t);
ATerm debug_1_0 (ATerm d_83 (ATerm), ATerm t);
ATerm map_1_0 (ATerm o_83 (ATerm), ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm p_4 (ATerm e_52, ATerm f_52, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_55 (ATerm), ATerm j_55 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm w_102 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm parse_options_1_0 (ATerm v_102 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm UnCify_1_0 (ATerm e_93 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,n_1 = NULL,o_1 = NULL,q_1 = NULL,s_1 = NULL,u_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_1 = ATgetFirst((ATermList) t);
      u_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 95)))
    _fail(t);
  t = u_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_1 = ATgetFirst((ATermList) t);
      q_1 = (ATerm) ATgetNext((ATermList) t);
      t = q_1;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_1 = ATgetFirst((ATermList) t);
          n_1 = (ATerm) ATgetNext((ATermList) t);
          t = l_1;
          if(match_int(t, 95))
            {
              t = o_1;
              if(match_int(t, 112))
                {
                  ATerm r_4 = t;
                  int v_4 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_1 = NULL;
                      t = n_1;
                      t = e_93(t);
                      w_1 = t;
                      t = (ATerm) ATinsert(CheckATermList(w_1), term_w_4);
                      LocalPopChoice(v_4);
                    }
                  else
                    {
                      t = r_4;
                      {
                        ATerm y_1 = NULL;
                        t = u_1;
                        t = e_93(t);
                        y_1 = t;
                        t = (ATerm) ATinsert(CheckATermList(y_1), term_x_4);
                      }
                    }
                }
              else
                {
                  if(match_int(t, 95))
                    {
                      ATerm e_5 = t;
                      int f_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_2 = NULL;
                          t = q_1;
                          t = e_93(t);
                          b_2 = t;
                          t = (ATerm) ATinsert(CheckATermList(b_2), term_g_5);
                          LocalPopChoice(f_5);
                        }
                      else
                        {
                          t = e_5;
                          {
                            ATerm e_2 = NULL;
                            t = u_1;
                            t = e_93(t);
                            e_2 = t;
                            t = (ATerm) ATinsert(CheckATermList(e_2), term_x_4);
                          }
                        }
                    }
                  else
                    {
                      ATerm g_2 = NULL;
                      t = u_1;
                      t = e_93(t);
                      g_2 = t;
                      t = (ATerm) ATinsert(CheckATermList(g_2), term_x_4);
                    }
                }
            }
          else
            {
              t = o_1;
              if(match_int(t, 95))
                {
                  ATerm h_5 = t;
                  int k_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_2 = NULL;
                      t = q_1;
                      t = e_93(t);
                      k_2 = t;
                      t = (ATerm) ATinsert(CheckATermList(k_2), term_g_5);
                      LocalPopChoice(k_5);
                    }
                  else
                    {
                      t = h_5;
                      {
                        ATerm n_2 = NULL;
                        t = u_1;
                        t = e_93(t);
                        n_2 = t;
                        t = (ATerm) ATinsert(CheckATermList(n_2), term_x_4);
                      }
                    }
                }
              else
                {
                  ATerm p_2 = NULL;
                  t = u_1;
                  t = e_93(t);
                  p_2 = t;
                  t = (ATerm) ATinsert(CheckATermList(p_2), term_x_4);
                }
            }
        }
      else
        {
          t = o_1;
          if(match_int(t, 95))
            {
              ATerm l_5 = t;
              int m_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_2 = NULL;
                  t = q_1;
                  t = e_93(t);
                  r_2 = t;
                  t = (ATerm) ATinsert(CheckATermList(r_2), term_g_5);
                  LocalPopChoice(m_5);
                }
              else
                {
                  t = l_5;
                  {
                    ATerm u_2 = NULL;
                    t = u_1;
                    t = e_93(t);
                    u_2 = t;
                    t = (ATerm) ATinsert(CheckATermList(u_2), term_x_4);
                  }
                }
            }
          else
            {
              ATerm x_2 = NULL;
              t = u_1;
              t = e_93(t);
              x_2 = t;
              t = (ATerm) ATinsert(CheckATermList(x_2), term_x_4);
            }
        }
    }
  else
    {
      ATerm a_3 = NULL;
      t = u_1;
      t = e_93(t);
      a_3 = t;
      t = (ATerm) ATinsert(CheckATermList(a_3), term_x_4);
    }
  return(t);
}
ATerm escape_1_0 (ATerm c_93 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL;
  f_3 = t;
  t = SSL_explode_string(f_3);
  {
    static ATerm n_4 (ATerm t)
    {
      ATerm n_5 = t;
      int p_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_93(n_4, t);
          LocalPopChoice(p_5);
        }
      else
        {
          t = n_5;
          {
            ATerm z_3 = NULL,c_4 = NULL,m_4 = NULL;
            m_4 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_3 = ATgetFirst((ATermList) t);
                c_4 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm h_0 = NULL,o_0 = NULL,i_3 = NULL;
                  t = SSLgetAnnotations(m_4);
                  h_0 = t;
                  t = c_4;
                  t = n_4(t);
                  o_0 = t;
                  t = (ATerm) ATinsert(CheckATermList(o_0), z_3);
                  i_3 = t;
                  t = SSLsetAnnotations(i_3, h_0);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_4;
              }
          }
        }
      return(t);
    }
    t = n_4(t);
  }
  e_3 = t;
  t = SSL_implode_string(e_3);
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm q_5 = t;
  if((PushChoice() == 0))
    {
      ATerm z_4 = NULL,a_5 = NULL;
      if(match_cons(t, sym__2))
        {
          z_4 = ATgetArgument(t, 0);
          a_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, z_4, a_5);
      {
        ATerm s_5 = t;
        int t_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(z_4, a_5);
            LocalPopChoice(t_5);
          }
        else
          {
            t = s_5;
            t = SSL_gtr(z_4, a_5);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, z_4, a_5);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_5;
    }
  return(t);
}
ATerm match_digits_1_0 (ATerm i_75 (ATerm), ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL,i_5 = NULL,j_5 = NULL,l_3 = NULL;
  j_5 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_5 = ATgetFirst((ATermList) t);
      d_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_5);
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_5, c_5);
  t = leq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, c_5, term_w_5);
  t = leq_0_0(t);
  t = d_5;
  {
    ATerm x_5 = t;
    int a_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = match_digits_1_0(i_75, t);
        LocalPopChoice(a_6);
      }
    else
      {
        t = x_5;
        t = i_75(t);
      }
  }
  i_5 = t;
  t = (ATerm) ATinsert(CheckATermList(i_5), c_5);
  l_3 = t;
  t = SSLsetAnnotations(l_3, b_5);
  return(t);
}
ATerm at_suffix_1_0 (ATerm i_84 (ATerm), ATerm t)
{
  static ATerm p_6 (ATerm t)
  {
    ATerm b_6 = t;
    int c_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_84(t);
        LocalPopChoice(c_6);
      }
    else
      {
        t = b_6;
        {
          ATerm j_6 = NULL,m_6 = NULL,o_6 = NULL,w_0 = NULL,z_0 = NULL,n_3 = NULL;
          j_6 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_6 = ATgetFirst((ATermList) t);
              o_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_6);
          w_0 = t;
          t = o_6;
          t = p_6(t);
          z_0 = t;
          t = (ATerm) ATinsert(CheckATermList(z_0), m_6);
          n_3 = t;
          t = SSLsetAnnotations(n_3, w_0);
        }
      }
    return(t);
  }
  t = p_6(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,s_3 = NULL;
  c_7 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_6 = ATgetFirst((ATermList) t);
      a_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_7);
  y_6 = t;
  t = z_6;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 95)))
    _fail(t);
  t = a_7;
  t = match_digits_1_0(b_0, t);
  b_7 = t;
  t = (ATerm) ATinsert(CheckATermList(b_7), z_6);
  s_3 = t;
  t = SSLsetAnnotations(s_3, y_6);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = Cons_2_0(f_0, j_0, t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 95)))
    _fail(t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = match_digits_1_0(m_0, t);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm unmangle_0_0 (ATerm t)
{
  ATerm t_6 = NULL,v_6 = NULL;
  v_6 = t;
  t = SSL_explode_string(v_6);
  t = at_suffix_1_0(a_0, t);
  t_6 = t;
  t = SSL_implode_string(t_6);
  t = escape_1_0(UnCify_1_0, t);
  return(t);
}
ATerm topdown_1_0 (ATerm c_77 (ATerm), ATerm t)
{
  static ATerm p_0 (ATerm t)
  {
    t = topdown_1_0(c_77, t);
    return(t);
  }
  t = c_77(t);
  t = SRTS_all(p_0, t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL;
  j_7 = t;
  if(match_cons(t, sym_SVar_1))
    {
      i_7 = ATgetArgument(t, 0);
      {
        ATerm d_6 = t;
        int e_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_7 = NULL;
            t = i_7;
            t = unmangle_0_0(t);
            o_7 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, o_7);
            LocalPopChoice(e_6);
          }
        else
          {
            t = d_6;
            t = j_7;
          }
      }
    }
  else
    {
      t = j_7;
    }
  return(t);
}
static ATerm d_4 (ATerm i_20, ATerm j_20, ATerm k_20, ATerm l_20, ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL;
  t = l_20;
  {
    ATerm f_6 = t;
    if((PushChoice() == 0))
      {
        t = term_i_6;
        t = get_config_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_6;
      }
  }
  t = i_20;
  t = unmangle_0_0(t);
  f_7 = t;
  t = l_20;
  t = topdown_1_0(q_0, t);
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, f_7, j_20, k_20, g_7);
  return(t);
}
ATerm filter_1_0 (ATerm v_90 (ATerm), ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL;
  l_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_8;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_8 = ATgetFirst((ATermList) t);
          n_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm k_6 = t;
        int l_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 = NULL,k_1 = NULL,m_1 = NULL,b_4 = NULL;
            t = SSLgetAnnotations(l_8);
            h_1 = t;
            t = m_8;
            t = v_90(t);
            k_1 = t;
            t = n_8;
            t = filter_1_0(v_90, t);
            m_1 = t;
            t = (ATerm) ATinsert(CheckATermList(m_1), k_1);
            b_4 = t;
            t = SSLsetAnnotations(b_4, h_1);
            LocalPopChoice(l_6);
          }
        else
          {
            t = k_6;
            t = n_8;
            t = filter_1_0(v_90, t);
          }
      }
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,r_5 = NULL;
  g_9 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      e_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_9);
  d_9 = t;
  t = e_9;
  t = filter_1_0(t_0, t);
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, f_9);
  r_5 = t;
  t = SSLsetAnnotations(r_5, d_9);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,o_10 = NULL,p_10 = NULL;
  l_10 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      m_10 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
      p_10 = ATgetArgument(t, 2);
      k_10 = ATgetArgument(t, 3);
      {
        ATerm n_6 = t;
        int r_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_10;
            t = d_4(m_10, o_10, p_10, k_10, t);
            LocalPopChoice(r_6);
          }
        else
          {
            t = n_6;
            {
              ATerm a_11 = NULL;
              t = m_10;
              t = unmangle_0_0(t);
              a_11 = t;
              t = (ATerm) ATmakeAppl(sym_ExtSDef_3, a_11, o_10, p_10);
            }
          }
      }
    }
  else
    {
      ATerm v_2 = NULL,y_4 = NULL;
      if(match_cons(t, sym_ExtSDef_3))
        {
          m_10 = ATgetArgument(t, 0);
          o_10 = ATgetArgument(t, 1);
          p_10 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_10);
      v_2 = t;
      t = (ATerm) ATmakeAppl(sym_ExtSDef_3, m_10, o_10, p_10);
      y_4 = t;
      t = SSLsetAnnotations(y_4, v_2);
    }
  return(t);
}
ATerm defs_to_external_defs_0_0 (ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,y_5 = NULL,v_5 = NULL;
  b_9 = t;
  if(match_cons(t, sym_Specification_1))
    {
      u_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_9);
  t_8 = t;
  t = u_8;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_8 = ATgetFirst((ATermList) t);
      y_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_8);
  v_8 = t;
  t = y_8;
  t = Cons_2_0(r_0, s_0, t);
  z_8 = t;
  t = (ATerm) ATinsert(CheckATermList(z_8), x_8);
  v_5 = t;
  t = SSLsetAnnotations(v_5, v_8);
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, a_9);
  y_5 = t;
  t = SSLsetAnnotations(y_5, t_8);
  return(t);
}
static ATerm e_4 (ATerm r_36, ATerm s_36, ATerm t)
{
  ATerm i_11 = NULL;
  t = SSL_fputc(r_36, s_36);
  i_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_11);
  return(t);
}
static ATerm f_4 (ATerm a_22, ATerm b_22, ATerm t)
{
  ATerm j_11 = NULL;
  t = SSL_write_term_to_stream_text(a_22, b_22);
  j_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_11);
  return(t);
}
static ATerm h_4 (ATerm f_83 (ATerm), ATerm f_140, ATerm e_22, ATerm t)
{
  ATerm m_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_140, term_s_6);
  t = k_4(t);
  m_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_11, e_22);
  t = f_83(t);
  t = fclose_0_0(t);
  t = e_22;
  return(t);
}
static ATerm g_4 (ATerm w_21, ATerm x_21, ATerm t)
{
  ATerm n_11 = NULL;
  t = SSL_write_term_to_stream_baf(w_21, x_21);
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_11);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm v_11 = NULL,b_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_6 = ATgetArgument(t, 0);
      if(match_cons(u_6, sym_Stream_1))
        {
          v_11 = ATgetArgument(u_6, 0);
        }
      else
        _fail(t);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(v_11, b_12, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,h_12 = NULL,l_12 = NULL,m_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_6 = ATgetArgument(t, 0);
      if(match_cons(x_6, sym_Stream_1))
        {
          l_12 = ATgetArgument(x_6, 0);
        }
      else
        _fail(t);
      m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_4(l_12, m_12, t);
  e_12 = t;
  t = term_d_7;
  f_12 = t;
  t = e_12;
  if(match_cons(t, sym_Stream_1))
    {
      h_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_7, e_12);
  t = e_4(f_12, h_12, t);
  return(t);
}
ATerm output_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL;
  t = c_101(t);
  t_11 = t;
  {
    ATerm h_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_7;
        t = get_config_0_0(t);
        LocalPopChoice(k_7);
      }
    else
      {
        t = h_7;
        t = term_m_7;
      }
  }
  s_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_11, t_11);
  {
    ATerm n_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_7;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, s_11, t_11);
        LocalPopChoice(p_7);
        if(match_cons(t, sym__2))
          {
            ATerm r_7 = ATgetArgument(t, 0);
            ATerm s_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_4(u_0, s_11, t_11, t);
      }
    else
      {
        t = n_7;
        if(match_cons(t, sym__2))
          {
            ATerm t_7 = ATgetArgument(t, 0);
            ATerm v_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_4(v_0, s_11, t_11, t);
      }
  }
  return(t);
}
static ATerm v_13 (ATerm k_13, ATerm t)
{
  t = SSL_fclose(k_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL;
  r_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_13 = ATgetArgument(t, 0);
      {
        ATerm w_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_13);
            LocalPopChoice(x_7);
          }
        else
          {
            t = w_7;
            t = v_13(r_13, t);
          }
      }
    }
  else
    {
      t = v_13(r_13, t);
    }
  return(t);
}
static ATerm i_4 (ATerm c_22, ATerm t)
{
  t = SSL_read_term_from_stream(c_22);
  return(t);
}
static ATerm j_4 (ATerm t_36, ATerm u_36, ATerm t)
{
  ATerm w_13 = NULL;
  t = SSL_fopen(t_36, u_36);
  w_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_13);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_13 = NULL;
  t = SSL_stdin_stream();
  y_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_13 = NULL;
  t = SSL_stdout_stream();
  z_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_14 = NULL;
  t = SSL_stderr_stream();
  c_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_14);
  return(t);
}
static ATerm z_15 (ATerm m_14, ATerm t)
{
  ATerm n_14 = NULL;
  t = SSL_explode_term(m_14);
  if(match_cons(t, sym__2))
    {
      ATerm z_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_8 = ATgetArgument(t, 1);
        if(((ATgetType(a_8) == AT_LIST) && !(ATisEmpty(a_8))))
          {
            n_14 = ATgetFirst((ATermList) a_8);
            {
              ATerm c_8 = (ATerm) ATgetNext((ATermList) a_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_14;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_14;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm a_16 (ATerm s_14, ATerm t_14, ATerm u_14, ATerm t)
{
  ATerm v_14 = NULL,y_14 = NULL,z_14 = NULL,e_15 = NULL,h_6 = NULL;
  t = SSLgetAnnotations(u_14);
  z_14 = t;
  t = s_14;
  if(match_cons(t, sym_Path_1))
    {
      e_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_15, t_14);
  h_6 = t;
  t = SSLsetAnnotations(h_6, z_14);
  if(match_cons(t, sym__2))
    {
      v_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_4(v_14, y_14, t);
  return(t);
}
static ATerm b_16 (ATerm j_15, ATerm l_15, ATerm m_15, ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,u_15 = NULL,q_6 = NULL;
  t = SSLgetAnnotations(m_15);
  p_15 = t;
  t = SSL_is_string(j_15);
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_15, l_15);
  q_6 = t;
  t = SSLsetAnnotations(q_6, p_15);
  if(match_cons(t, sym__2))
    {
      n_15 = ATgetArgument(t, 0);
      o_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_4(n_15, o_15, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
  w_15 = t;
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
      {
        ATerm e_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_15(w_15, t);
            LocalPopChoice(g_8);
          }
        else
          {
            t = e_8;
            {
              ATerm i_8 = t;
              int k_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_16(x_15, y_15, w_15, t);
                  LocalPopChoice(k_8);
                }
              else
                {
                  t = i_8;
                  t = b_16(x_15, y_15, w_15, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_15(w_15, t);
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_o_8;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_16 = NULL;
      f_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_16, term_r_8);
      t = k_4(t);
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      t = debug_1_0(x_0, t);
      _fail(t);
    }
  d_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_4(e_16, t);
  c_16 = t;
  t = d_16;
  t = fclose_0_0(t);
  t = c_16;
  return(t);
}
ATerm input_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm s_8 = t;
  int w_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_9;
      t = get_config_0_0(t);
      LocalPopChoice(w_8);
    }
  else
    {
      t = s_8;
      t = term_i_9;
    }
  t = ReadFromFile_0_0(t);
  t = d_101(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
  h_16 = t;
  t = term_j_9;
  t = whoami_0_0(t);
  i_16 = t;
  t = term_k_9;
  l_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_9), i_16), term_l_9);
  m_16 = t;
  t = SSL_printnl(l_16, m_16);
  t = term_n_9;
  k_16 = t;
  t = SSL_exit(k_16);
  t = h_16;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm o_16 = NULL;
  o_16 = t;
  if(match_string(t, "-k"))
    {
      t = o_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_16;
    }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
  p_16 = t;
  t = SSL_string_to_int(p_16);
  q_16 = t;
  t = term_p_9;
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_9, q_16);
  t = s_4(r_16, q_16, t);
  t = p_16;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_q_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_0, a_1, b_1, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm v_16 = NULL;
  v_16 = t;
  if(match_string(t, "-S"))
    {
      t = v_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_16;
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL;
  t = term_r_9;
  w_16 = t;
  t = term_u_9;
  x_16 = t;
  t = term_w_9;
  t = s_4(w_16, x_16, t);
  t = term_x_9;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_y_9;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm y_16 = NULL,a_17 = NULL,b_17 = NULL;
  y_16 = t;
  t = SSL_string_to_int(y_16);
  a_17 = t;
  t = term_r_9;
  b_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_9, a_17);
  t = s_4(b_17, a_17, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_16);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_z_9;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm c_17 = NULL,e_17 = NULL;
  t = term_b_10;
  c_17 = t;
  t = term_j_9;
  e_17 = t;
  t = term_c_10;
  t = s_4(c_17, e_17, t);
  t = term_d_10;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_e_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_1, d_1, e_1, t);
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_1, g_1, i_1, t);
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            t = Option_3_0(j_1, p_1, r_1, t);
          }
      }
    }
  return(t);
}
static ATerm s_4 (ATerm n_45, ATerm o_45, ATerm t)
{
  ATerm f_17 = NULL;
  t = term_j_10;
  f_17 = t;
  t = SSL_table_put(f_17, n_45, o_45);
  t = (ATerm) ATmakeAppl(sym__3, term_j_10, n_45, o_45);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_17 = NULL,t_17 = NULL,u_17 = NULL;
      t = term_j_9;
      t = e_0(t);
      m_17 = t;
      t = term_n_10;
      t_17 = t;
      t = term_q_10;
      u_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_10, term_q_10, m_17);
      t = q_4(t_17, u_17, m_17, t);
      _fail(t);
    }
  else
    {
      ATerm y_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_17 = ATgetFirst((ATermList) t);
          l_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_17;
      t = c_0(t);
      t = term_j_9;
      t = d_0(t);
      y_17 = t;
      t = (ATerm) ATinsert(CheckATermList(l_17), y_17);
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm a_18 = NULL;
  a_18 = t;
  if(match_string(t, "-o"))
    {
      t = a_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_18;
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm b_18 = NULL,d_18 = NULL;
  b_18 = t;
  t = term_l_7;
  d_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_7, b_18);
  t = s_4(d_18, b_18, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_18);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_r_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_1, v_1, x_1, t);
  return(t);
}
static ATerm q_4 (ATerm n_50, ATerm o_50, ATerm m_50, ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL;
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_50, o_50);
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_10 = ATgetArgument(t, 0);
            ATerm v_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_50, o_50);
        t = p_4(n_50, o_50, t);
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
        t = (ATerm) ATempty;
      }
  }
  i_18 = t;
  t = (ATerm) ATinsert(CheckATermList(i_18), m_50);
  j_18 = t;
  t = SSL_table_put(n_50, o_50, j_18);
  t = h_18;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL;
      t = term_j_9;
      t = n_0(t);
      v_18 = t;
      t = term_n_10;
      w_18 = t;
      t = term_q_10;
      x_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_10, term_q_10, v_18);
      t = q_4(w_18, x_18, v_18, t);
      _fail(t);
    }
  else
    {
      ATerm d_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_18 = ATgetFirst((ATermList) t);
          s_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_18;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_18 = ATgetFirst((ATermList) t);
          u_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_18;
      t = k_0(t);
      t = t_18;
      t = l_0(t);
      d_19 = t;
      t = (ATerm) ATinsert(CheckATermList(u_18), d_19);
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm h_19 = NULL;
  h_19 = t;
  if(match_string(t, "-i"))
    {
      t = h_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_19;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL;
  i_19 = t;
  t = term_c_9;
  j_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_9, i_19);
  t = s_4(j_19, i_19, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_19);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_1, a_2, c_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_19 = NULL,r_19 = NULL,u_19 = NULL,x_19 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_9;
  t = whoami_0_0(t);
  n_19 = t;
  t = term_k_9;
  u_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_10), n_19);
  x_19 = t;
  t = SSL_printnl(u_19, x_19);
  t = term_n_9;
  r_19 = t;
  t = SSL_exit(r_19);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_y_10;
  t = get_config_0_0(t);
  return(t);
}
static ATerm l_4 (ATerm m_39, ATerm n_39, ATerm t)
{
  ATerm z_10 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_39, n_39);
      LocalPopChoice(b_11);
    }
  else
    {
      t = z_10;
      t = SSL_addr(m_39, n_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,e_20 = NULL;
  z_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_19;
      t = r_89(t);
    }
  else
    {
      ATerm h_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_20 = ATgetFirst((ATermList) t);
          e_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_20;
      t = foldr_2_0(r_89, s_89, t);
      h_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_20, h_20);
      t = s_89(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_u_9;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL;
  if(match_cons(t, sym__2))
    {
      t_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_4(t_4, u_4, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_20 = NULL,y_3 = NULL,a_4 = NULL;
  t = times_0_0(t);
  a_4 = t;
  t = SSL_explode_term(a_4);
  if(match_cons(t, sym__2))
    {
      ATerm c_11 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3;
  t = foldr_2_0(d_2, f_2, t);
  o_20 = t;
  t = SSL_TicksToSeconds(o_20);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
  f_21 = t;
  if(match_cons(t, sym__2))
    {
      g_21 = ATgetArgument(t, 0);
      h_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_21;
        if((g_21 != t))
          {
            _fail(t);
          }
        t = f_21;
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
        t = (ATerm) ATmakeAppl(sym__2, g_21, h_21);
        {
          ATerm f_11 = t;
          int g_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_21, h_21);
              LocalPopChoice(g_11);
            }
          else
            {
              t = f_11;
              t = SSL_gtr(g_21, h_21);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_21, h_21);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_98 (ATerm), ATerm t)
{
  ATerm l_21 = NULL;
  l_21 = t;
  {
    ATerm h_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_21 = NULL;
        t = term_r_9;
        t = get_config_0_0(t);
        n_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_21, term_n_9);
        t = geq_0_0(t);
        t = l_21;
        t = d_98(t);
        LocalPopChoice(k_11);
      }
    else
      {
        t = h_11;
        t = l_21;
      }
  }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,s_21 = NULL,t_21 = NULL;
  t = run_time_0_0(t);
  p_21 = t;
  t = term_j_9;
  t = whoami_0_0(t);
  q_21 = t;
  t = term_k_9;
  s_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_11), p_21), term_l_11), q_21);
  t_21 = t;
  t = SSL_printnl(s_21, t_21);
  t = (ATerm) ATmakeAppl(sym__2, term_k_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_11), p_21), term_l_11), q_21));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_21 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_9;
  u_21 = t;
  t = SSL_exit(u_21);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL;
  p_22 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_22;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_22 = ATgetArgument(t, 0);
          {
            ATerm o_5 = NULL,b_8 = NULL;
            t = SSLgetAnnotations(p_22);
            o_5 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_22);
            b_8 = t;
            t = SSLsetAnnotations(b_8, o_5);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_22;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_11;
      t = get_config_0_0(t);
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      t = fetch_1_0(i_2, t);
    }
  t = t_100(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_22 = ATgetFirst((ATermList) t);
      t_22 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_22 = NULL,y_22 = NULL;
        static ATerm j_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_22)), not_null(y_22));
          return(t);
        }
        t = t_22;
        t = i_0(t);
        if(((x_22 != NULL) && (x_22 != t)))
          _fail(t);
        else
          x_22 = t;
        t = s_22;
        t = g_0(t);
        if(((y_22 != NULL) && (y_22 != t)))
          _fail(t);
        else
          y_22 = t;
        t = t_22;
        t = reverse_acc_2_0(g_0, j_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_9;
      t = i_0(t);
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,d_8 = NULL;
  e_23 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_23);
  c_23 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_23);
  d_8 = t;
  t = SSLsetAnnotations(d_8, c_23);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm i_23 = NULL;
  i_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_23), term_u_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL;
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_10;
      t = get_config_0_0(t);
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
      t = fetch_1_0(l_2, t);
    }
  t = term_y_11;
  t = echo_0_0(t);
  t = term_n_10;
  a_23 = t;
  t = term_q_10;
  b_23 = t;
  t = term_z_11;
  t = p_4(a_23, b_23, t);
  t = reverse_acc_2_0(_id, m_2, t);
  t = map_1_0(o_2, t);
  return(t);
}
ATerm fetch_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  static ATerm f_24 (ATerm t)
  {
    ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL;
    c_24 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_24 = ATgetFirst((ATermList) t);
        e_24 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_12 = t;
      int c_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_5 = NULL,g_6 = NULL,h_8 = NULL;
          t = SSLgetAnnotations(c_24);
          z_5 = t;
          t = d_24;
          t = y_83(t);
          g_6 = t;
          t = (ATerm) ATinsert(CheckATermList(e_24), g_6);
          h_8 = t;
          t = SSLsetAnnotations(h_8, z_5);
          LocalPopChoice(c_12);
        }
      else
        {
          t = a_12;
          {
            ATerm w_6 = NULL,e_7 = NULL,j_8 = NULL;
            t = SSLgetAnnotations(c_24);
            w_6 = t;
            t = e_24;
            t = f_24(t);
            e_7 = t;
            t = (ATerm) ATinsert(CheckATermList(e_7), d_24);
            j_8 = t;
            t = SSLsetAnnotations(j_8, w_6);
          }
        }
    }
    return(t);
  }
  t = f_24(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
  j_24 = t;
  {
    ATerm d_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_24;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_12 = ATgetFirst((ATermList) t);
                ATerm j_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_24;
          }
        LocalPopChoice(g_12);
      }
    else
      {
        t = d_12;
        t = (ATerm) ATinsert(ATempty, j_24);
      }
  }
  k_24 = t;
  t = term_m_7;
  l_24 = t;
  t = SSL_printnl(l_24, k_24);
  t = j_24;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_y_10;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm o_4 (ATerm l_35, ATerm m_35, ATerm t)
{
  t = SSL_strcat(l_35, m_35);
  return(t);
}
ATerm debug_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL;
  p_24 = t;
  t = d_83(t);
  q_24 = t;
  t = term_k_9;
  r_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_24), q_24);
  s_24 = t;
  t = SSL_printnl(r_24, s_24);
  t = p_24;
  return(t);
}
ATerm map_1_0 (ATerm o_83 (ATerm), ATerm t)
{
  static ATerm h_25 (ATerm t)
  {
    ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
    e_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_25;
      }
    else
      {
        ATerm u_7 = NULL,y_7 = NULL,f_8 = NULL,h_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_25 = ATgetFirst((ATermList) t);
            g_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_25);
        u_7 = t;
        t = f_25;
        t = o_83(t);
        y_7 = t;
        t = g_25;
        t = h_25(t);
        f_8 = t;
        t = (ATerm) ATinsert(CheckATermList(f_8), y_7);
        h_9 = t;
        t = SSLsetAnnotations(h_9, u_7);
      }
    return(t);
  }
  t = h_25(t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm k_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(n_12);
    }
  else
    {
      t = k_12;
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_25 = NULL;
      p_25 = t;
      t = SSL_is_string(p_25);
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
      {
        ATerm r_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(q_2, t);
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
            {
              ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
              v_25 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_25 = ATgetArgument(t, 0);
                  t = w_25;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_25 = ATgetArgument(t, 0);
                      t = w_25;
                      {
                        ATerm t_12 = t;
                        int u_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(u_12);
                          }
                        else
                          {
                            t = t_12;
                            t = debug_1_0(s_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm b_26 = NULL,c_26 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_25 = ATgetArgument(t, 0);
                          x_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_25;
                      t = eval_config_0_0(t);
                      b_26 = t;
                      t = x_25;
                      t = eval_config_0_0(t);
                      c_26 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_26, c_26);
                      t = o_4(b_26, c_26, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_4 (ATerm e_52, ATerm f_52, ATerm t)
{
  t = SSL_table_get(e_52, f_52);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL;
  g_26 = t;
  t = term_j_10;
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, g_26);
  t = p_4(h_26, g_26, t);
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_26 = NULL,j_26 = NULL;
        t = eval_config_0_0(t);
        i_26 = t;
        t = term_j_10;
        j_26 = t;
        t = SSL_table_put(j_26, g_26, i_26);
        t = i_26;
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
      }
  }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL;
  t = term_x_12;
  m_26 = t;
  t = term_j_9;
  n_26 = t;
  t = term_y_12;
  t = s_4(m_26, n_26, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_z_12;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL;
  t = term_x_12;
  q_26 = t;
  t = term_j_9;
  r_26 = t;
  t = term_y_12;
  t = s_4(q_26, r_26, t);
  t = term_a_13;
  o_26 = t;
  t = term_j_9;
  p_26 = t;
  t = term_b_13;
  t = s_4(o_26, p_26, t);
  t = term_c_13;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_d_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_2, w_2, y_2, t);
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
      t = Option_3_0(z_2, b_3, c_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_55 (ATerm), ATerm j_55 (ATerm), ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,o_9 = NULL;
  x_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_26 = ATgetFirst((ATermList) t);
      u_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_26);
  s_26 = t;
  t = t_26;
  t = i_55(t);
  v_26 = t;
  t = u_26;
  t = j_55(t);
  w_26 = t;
  t = (ATerm) ATinsert(CheckATermList(w_26), v_26);
  o_9 = t;
  t = SSLsetAnnotations(o_9, s_26);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_102 (ATerm), ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,h_27 = NULL,i_27 = NULL,t_9 = NULL;
  c_27 = t;
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_13;
        t = w_102(t);
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
      }
  }
  t = c_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_27 = ATgetFirst((ATermList) t);
      f_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_27);
  d_27 = t;
  t = term_y_10;
  i_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_10, e_27);
  t = s_4(i_27, e_27, t);
  t = f_27;
  {
    static ATerm s_27 (ATerm t)
    {
      ATerm j_13 = t;
      int l_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_13 = t;
          int n_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_27 = NULL;
              l_27 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_27;
              LocalPopChoice(n_13);
            }
          else
            {
              t = m_13;
              t = w_102(t);
              t = Cons_2_0(_id, s_27, t);
            }
          LocalPopChoice(l_13);
        }
      else
        {
          t = j_13;
          {
            ATerm o_27 = NULL,p_27 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_27 = ATgetFirst((ATermList) t);
                p_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(p_27), (ATerm) ATmakeAppl(sym_Undefined_1, o_27));
          }
        }
      return(t);
    }
    t = s_27(t);
  }
  h_27 = t;
  t = (ATerm) ATinsert(CheckATermList(h_27), (ATerm) ATmakeAppl(sym_Program_1, e_27));
  t_9 = t;
  t = SSLsetAnnotations(t_9, d_27);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm e_28 = NULL;
  e_28 = t;
  if(match_string(t, "--help"))
    {
      t = e_28;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_28;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_28;
        }
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL;
  t = term_r_11;
  f_28 = t;
  t = term_j_9;
  g_28 = t;
  t = term_o_13;
  t = s_4(f_28, g_28, t);
  t = term_p_13;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_102 (ATerm), ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL;
  z_27 = t;
  t = term_n_10;
  b_28 = t;
  t = term_q_10;
  c_28 = t;
  t = (ATerm) ATempty;
  d_28 = t;
  t = SSL_table_put(b_28, c_28, d_28);
  t = z_27;
  {
    static ATerm d_3 (ATerm t)
    {
      ATerm t_13 = t;
      int u_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_102(t);
          LocalPopChoice(u_13);
        }
      else
        {
          t = t_13;
          {
            ATerm x_13 = t;
            int a_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_3, h_3, j_3, t);
                LocalPopChoice(a_14);
              }
            else
              {
                t = x_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_3, t);
  }
  {
    ATerm b_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_28 = NULL;
        n_28 = t;
        {
          ATerm e_14 = t;
          int f_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_9 = NULL;
              t = n_28;
              {
                ATerm g_14 = t;
                int h_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_r_11;
                    t = get_config_0_0(t);
                    LocalPopChoice(h_14);
                  }
                else
                  {
                    t = g_14;
                    t = fetch_1_0(k_3, t);
                  }
              }
              t = n_28;
              t = default_system_usage_0_0(t);
              t = term_u_9;
              s_9 = t;
              t = SSL_exit(s_9);
              LocalPopChoice(f_14);
            }
          else
            {
              t = e_14;
              {
                ATerm a_10 = NULL;
                t = term_x_12;
                t = get_config_0_0(t);
                t = n_28;
                t = default_system_about_0_0(t);
                t = term_u_9;
                a_10 = t;
                t = SSL_exit(a_10);
              }
            }
        }
        LocalPopChoice(d_14);
      }
    else
      {
        t = b_14;
        {
          ATerm i_14 = t;
          int j_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
              static ATerm m_3 (ATerm t)
              {
                ATerm r_28 = NULL,s_28 = NULL,v_28 = NULL,v_9 = NULL;
                v_28 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_28 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_28);
                r_28 = t;
                t = s_28;
                if(((x_27 != NULL) && (x_27 != t)))
                  _fail(t);
                else
                  x_27 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_28);
                v_9 = t;
                t = SSLsetAnnotations(v_9, r_28);
                return(t);
              }
              t = fetch_1_0(m_3, t);
              t = term_k_9;
              p_28 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_27)), term_k_14);
              q_28 = t;
              t = SSL_printnl(p_28, q_28);
              t = (ATerm) ATmakeAppl(sym__2, term_k_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_27)), term_k_14));
              t = default_system_usage_0_0(t);
              t = term_n_9;
              o_28 = t;
              t = SSL_exit(o_28);
              LocalPopChoice(j_14);
            }
          else
            {
              t = i_14;
            }
        }
      }
  }
  y_27 = t;
  t = term_n_10;
  a_28 = t;
  t = SSL_table_destroy(a_28);
  t = y_27;
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
  t = parse_options_1_0(v_100, t);
  a_29 = t;
  t = term_l_14;
  d_29 = t;
  t = SSL_table_create(d_29);
  t = term_l_14;
  b_29 = t;
  t = term_o_14;
  c_29 = t;
  t = SSL_table_put(b_29, c_29, a_29);
  t = a_29;
  t = x_100(t);
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_100, t);
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        {
          ATerm r_14 = t;
          int w_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_100(t);
              t = report_success_0_0(t);
              LocalPopChoice(w_14);
            }
          else
            {
              t = r_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm x_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_3, r_3, t_3, t);
      LocalPopChoice(a_15);
    }
  else
    {
      t = x_14;
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
              int f_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(f_15);
                }
              else
                {
                  t = d_15;
                  {
                    ATerm g_15 = t;
                    int h_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(u_3, v_3, w_3, t);
                        LocalPopChoice(h_15);
                      }
                    else
                      {
                        t = g_15;
                        {
                          ATerm i_15 = t;
                          int k_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(k_15);
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
      }
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = input_1_0(x_3, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-inlining", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
  f_29 = t;
  t = term_i_6;
  g_29 = t;
  t = term_j_9;
  h_29 = t;
  t = term_q_15;
  t = s_4(g_29, h_29, t);
  t = f_29;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_r_15;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL;
  t = term_q_7;
  i_29 = t;
  t = term_j_9;
  j_29 = t;
  t = term_s_15;
  t = s_4(i_29, j_29, t);
  t = term_t_15;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_v_15;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = output_1_0(defs_to_external_defs_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(o_3, default_usage_0_0, _id, p_3, t);
  return(t);
}

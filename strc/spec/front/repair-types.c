#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_RDef_3;
Symbol sym_RDefT_4;
Symbol sym_Path_2;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Undefined_0;
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
static void init_module_constructors (void)
{
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
}
ATerm term_t_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_o_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_j_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_c_10;
ATerm term_p_9;
ATerm term_j_9;
ATerm term_g_9;
ATerm term_h_8;
ATerm term_e_8;
ATerm term_x_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_r_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_a_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_a_1));
  term_a_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: argument '", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("' of ", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" '", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("' starts with constant type", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_m_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym__2, term_t_10, term_a_1);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_d_11);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_t_12, term_a_1);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_a_1);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym__2, term_e_12, term_a_1);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__2, term_w_14, term_a_1);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm explanation_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm t_93 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm b_3 (ATerm p_2, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm f_4 (ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm b_21, ATerm z_20, ATerm y_20, ATerm a_21, ATerm t);
ATerm RepairVarDec_2_0 (ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm t);
ATerm map1_1_0 (ATerm f_93 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm RepairDefinition_0_0 (ATerm t);
ATerm sometd_1_0 (ATerm j_82 (ATerm), ATerm t);
static ATerm i_4 (ATerm o_29, ATerm p_29, ATerm t);
static ATerm j_4 (ATerm j_28, ATerm k_28, ATerm t);
static ATerm l_4 (ATerm f_88 (ATerm), ATerm r_194, ATerm n_28, ATerm t);
static ATerm k_4 (ATerm f_28, ATerm g_28, ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm e_107 (ATerm), ATerm t);
static ATerm g_13 (ATerm y_12, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_4 (ATerm l_28, ATerm t);
static ATerm n_4 (ATerm q_29, ATerm r_29, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm c_16 (ATerm f_14, ATerm t);
static ATerm g_16 (ATerm k_14, ATerm l_14, ATerm m_14, ATerm t);
static ATerm h_16 (ATerm a_15, ATerm b_15, ATerm c_15, ATerm t);
static ATerm o_4 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm n_93 (ATerm), ATerm t);
static ATerm h_4 (ATerm i_52, ATerm j_52, ATerm t);
ATerm debug_1_0 (ATerm d_88 (ATerm), ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm w_89 (ATerm), ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm u_4 (ATerm i_33, ATerm j_33, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_4 (ATerm x_38, ATerm y_38, ATerm w_38, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm p_4 (ATerm f_36, ATerm g_36, ATerm t);
ATerm foldr_2_0 (ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_89 (ATerm), ATerm t);
static ATerm t_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm need_help_1_0 (ATerm c_108 (ATerm), ATerm t);
ATerm map_1_0 (ATerm d_93 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm r_4 (ATerm o_40, ATerm p_40, ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm t_66 (ATerm), ATerm u_66 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm f_110 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm parse_options_1_0 (ATerm e_110 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm e_108 (ATerm), ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm h_108 (ATerm), ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm iowrap_3_0 (ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm t);
static ATerm k_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,f_0 = NULL;
  a_0 = t;
  t = term_a_1;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_l_6;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_6), b_0), term_m_6);
  f_0 = t;
  t = SSL_printnl(e_0, f_0);
  t = term_p_6;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm explanation_0_0 (ATerm t)
{
  ATerm q_0 = NULL,r_0 = NULL;
  t = term_l_6;
  q_0 = t;
  t = (ATerm) ATinsert(ATempty, term_r_6);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  t = (ATerm) ATmakeAppl(sym__2, term_l_6, (ATerm) ATinsert(ATempty, term_r_6));
  return(t);
}
ATerm at_end_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  static ATerm j_2 (ATerm t)
  {
    ATerm f_2 = NULL,h_2 = NULL,i_2 = NULL;
    i_2 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_2 = ATgetFirst((ATermList) t);
        h_2 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_0 = NULL,b_1 = NULL,k_1 = NULL;
          t = SSLgetAnnotations(i_2);
          s_0 = t;
          t = h_2;
          t = j_2(t);
          b_1 = t;
          t = (ATerm) ATinsert(CheckATermList(b_1), f_2);
          k_1 = t;
          t = SSLsetAnnotations(k_1, s_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_2;
        t = t_93(t);
      }
    return(t);
  }
  t = j_2(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL,v_0 = NULL;
  t_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_0;
    }
  else
    {
      static ATerm h_0 (ATerm t)
      {
        t = not_null(v_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_0 = ATgetFirst((ATermList) t);
          if(((v_0 != NULL) && (v_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_0;
      t = at_end_1_0(h_0, t);
    }
  return(t);
}
static ATerm b_3 (ATerm p_2, ATerm t)
{
  ATerm r_2 = NULL;
  t = SSL_explode_term(p_2);
  if(match_cons(t, sym__2))
    {
      ATerm u_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_2;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL;
  v_2 = t;
  if(match_cons(t, sym__2))
    {
      t_2 = ATgetArgument(t, 0);
      u_2 = ATgetArgument(t, 1);
      {
        ATerm w_6 = t;
        int x_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm j_0 (ATerm t)
            {
              t = u_2;
              return(t);
            }
            t = t_2;
            t = at_end_1_0(j_0, t);
            LocalPopChoice(x_6);
          }
        else
          {
            t = w_6;
            t = b_3(v_2, t);
          }
      }
    }
  else
    {
      t = b_3(v_2, t);
    }
  return(t);
}
static ATerm f_4 (ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm b_21, ATerm z_20, ATerm y_20, ATerm a_21, ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,k_3 = NULL;
  e_3 = t;
  t = b_79(t);
  f_3 = t;
  t = e_3;
  t = c_79(t);
  g_3 = t;
  t = term_l_6;
  h_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_7), g_3), term_b_7), f_3), term_z_6), b_21), term_y_6);
  k_3 = t;
  t = SSL_printnl(h_3, k_3);
  t = (ATerm) ATmakeAppl(sym__2, y_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, z_20)));
  t = conc_0_0(t);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_21, (ATerm) ATmakeAppl(sym_FunType_2, d_3, a_21));
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm t)
{
  ATerm l_3 = NULL,n_3 = NULL,o_3 = NULL,r_3 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      l_3 = ATgetArgument(t, 0);
      {
        ATerm d_7 = ATgetArgument(t, 1);
        if(match_cons(d_7, sym_FunType_2))
          {
            ATerm e_7 = ATgetArgument(d_7, 0);
            if(((ATgetType(e_7) == AT_LIST) && !(ATisEmpty(e_7))))
              {
                ATerm f_7 = ATgetFirst((ATermList) e_7);
                if(match_cons(f_7, sym_ConstType_1))
                  {
                    n_3 = ATgetArgument(f_7, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm g_7 = (ATerm) ATgetNext((ATermList) e_7);
                  o_3 = g_7;
                  if(((ATgetType(g_7) == AT_LIST) && !(ATisEmpty(g_7))))
                    {
                      ATerm i_7 = ATgetFirst((ATermList) g_7);
                      if(match_cons(i_7, sym_FunType_2))
                        {
                          ATerm l_7 = ATgetArgument(i_7, 0);
                          ATerm m_7 = ATgetArgument(i_7, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm j_7 = (ATerm) ATgetNext((ATermList) g_7);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            r_3 = ATgetArgument(d_7, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_4(b_79, c_79, l_3, n_3, o_3, r_3, t);
  return(t);
}
ATerm map1_1_0 (ATerm f_93 (ATerm), ATerm t)
{
  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL;
  c_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_6 = ATgetFirst((ATermList) t);
      e_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm n_7 = t;
    int o_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,t_1 = NULL,u_1 = NULL,w_1 = NULL,q_1 = NULL;
        t = SSLgetAnnotations(c_6);
        o_1 = t;
        t = d_6;
        t = f_93(t);
        t_1 = t;
        t = (ATerm) ATinsert(CheckATermList(e_6), t_1);
        q_1 = t;
        t = SSLsetAnnotations(q_1, o_1);
        u_1 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_1 = ATgetFirst((ATermList) t);
            m_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_1);
        j_1 = t;
        t = m_1;
        {
          ATerm q_7 = t;
          int r_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(f_93, t);
              LocalPopChoice(r_7);
            }
          else
            {
              t = q_7;
            }
        }
        n_1 = t;
        t = (ATerm) ATinsert(CheckATermList(n_1), l_1);
        w_1 = t;
        t = SSLsetAnnotations(w_1, j_1);
        LocalPopChoice(o_7);
      }
    else
      {
        t = n_7;
        {
          ATerm o_2 = NULL,y_2 = NULL,z_1 = NULL;
          t = SSLgetAnnotations(c_6);
          o_2 = t;
          t = e_6;
          t = map1_1_0(f_93, t);
          y_2 = t;
          t = (ATerm) ATinsert(CheckATermList(y_2), d_6);
          z_1 = t;
          t = SSLsetAnnotations(z_1, o_2);
        }
      }
  }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_s_7;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_s_7;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_t_7;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_t_7;
  return(t);
}
ATerm RepairDefinition_0_0 (ATerm t)
{
  ATerm n_6 = NULL,q_6 = NULL,s_6 = NULL,t_6 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      q_6 = ATgetArgument(t, 0);
      s_6 = ATgetArgument(t, 1);
      t_6 = ATgetArgument(t, 2);
      n_6 = ATgetArgument(t, 3);
      {
        ATerm h_7 = NULL;
        t = s_6;
        {
          static ATerm m_0 (ATerm t)
          {
            static ATerm x_0 (ATerm t)
            {
              t = q_6;
              return(t);
            }
            t = RepairVarDec_2_0(w_0, x_0, t);
            return(t);
          }
          t = map1_1_0(m_0, t);
        }
        h_7 = t;
        t = (ATerm) ATmakeAppl(sym_RDefT_4, q_6, h_7, t_6, n_6);
      }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          q_6 = ATgetArgument(t, 0);
          s_6 = ATgetArgument(t, 1);
          t_6 = ATgetArgument(t, 2);
          {
            ATerm p_7 = NULL;
            t = s_6;
            {
              static ATerm y_0 (ATerm t)
              {
                static ATerm c_1 (ATerm t)
                {
                  t = q_6;
                  return(t);
                }
                t = RepairVarDec_2_0(z_0, c_1, t);
                return(t);
              }
              t = map1_1_0(y_0, t);
            }
            p_7 = t;
            t = (ATerm) ATmakeAppl(sym_RDef_3, q_6, p_7, t_6);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              q_6 = ATgetArgument(t, 0);
              s_6 = ATgetArgument(t, 1);
              t_6 = ATgetArgument(t, 2);
              n_6 = ATgetArgument(t, 3);
              {
                ATerm u_7 = NULL;
                t = s_6;
                {
                  static ATerm d_1 (ATerm t)
                  {
                    static ATerm f_1 (ATerm t)
                    {
                      t = q_6;
                      return(t);
                    }
                    t = RepairVarDec_2_0(e_1, f_1, t);
                    return(t);
                  }
                  t = map1_1_0(d_1, t);
                }
                u_7 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, q_6, u_7, t_6, n_6);
              }
            }
          else
            {
              ATerm y_7 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  q_6 = ATgetArgument(t, 0);
                  s_6 = ATgetArgument(t, 1);
                  t_6 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = s_6;
              {
                static ATerm g_1 (ATerm t)
                {
                  static ATerm i_1 (ATerm t)
                  {
                    t = q_6;
                    return(t);
                  }
                  t = RepairVarDec_2_0(h_1, i_1, t);
                  return(t);
                }
                t = map1_1_0(g_1, t);
              }
              y_7 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_3, q_6, y_7, t_6);
            }
        }
    }
  return(t);
}
ATerm sometd_1_0 (ATerm j_82 (ATerm), ATerm t)
{
  static ATerm z_7 (ATerm t)
  {
    ATerm v_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_82(t);
        LocalPopChoice(w_7);
      }
    else
      {
        t = v_7;
        t = SRTS_some(z_7, t);
      }
    return(t);
  }
  t = z_7(t);
  return(t);
}
static ATerm i_4 (ATerm o_29, ATerm p_29, ATerm t)
{
  ATerm a_8 = NULL;
  t = SSL_fputc(o_29, p_29);
  a_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_8);
  return(t);
}
static ATerm j_4 (ATerm j_28, ATerm k_28, ATerm t)
{
  ATerm i_8 = NULL;
  t = SSL_write_term_to_stream_text(j_28, k_28);
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_8);
  return(t);
}
static ATerm l_4 (ATerm f_88 (ATerm), ATerm r_194, ATerm n_28, ATerm t)
{
  ATerm l_8 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_194, term_x_7);
  t = o_4(t);
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_8, n_28);
  t = f_88(t);
  t = fclose_0_0(t);
  t = n_28;
  return(t);
}
static ATerm k_4 (ATerm f_28, ATerm g_28, ATerm t)
{
  ATerm m_8 = NULL;
  t = SSL_write_term_to_stream_baf(f_28, g_28);
  m_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_8);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_8 = ATgetArgument(t, 0);
      if(match_cons(b_8, sym_Stream_1))
        {
          y_3 = ATgetArgument(b_8, 0);
        }
      else
        _fail(t);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_4(y_3, z_3, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm h_5 = NULL,q_5 = NULL,r_5 = NULL,u_5 = NULL,v_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_8 = ATgetArgument(t, 0);
      if(match_cons(d_8, sym_Stream_1))
        {
          u_5 = ATgetArgument(d_8, 0);
        }
      else
        _fail(t);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_4(u_5, v_5, t);
  h_5 = t;
  t = term_e_8;
  q_5 = t;
  t = h_5;
  if(match_cons(t, sym_Stream_1))
    {
      r_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_e_8, h_5);
  t = i_4(q_5, r_5, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL,c_9 = NULL,d_9 = NULL,l_9 = NULL,r_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,a_12 = NULL,b_12 = NULL,g_4 = NULL,l_2 = NULL;
  y_8 = t;
  if(match_cons(t, sym__2))
    {
      t_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_8);
  r_9 = t;
  t = t_9;
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm p_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((x_8 != NULL) && (x_8 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(p_1, t);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        t = term_h_8;
        x_8 = t;
      }
  }
  v_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_9, u_9);
  l_2 = t;
  t = SSLsetAnnotations(l_2, r_9);
  t = y_8;
  if(match_cons(t, sym__2))
    {
      c_9 = ATgetArgument(t, 0);
      d_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_8);
  z_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_9, (ATerm) ATmakeAppl(sym__2, not_null(x_8), d_9));
  g_4 = t;
  t = SSLsetAnnotations(g_4, z_8);
  l_9 = t;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,v_4 = NULL;
        t = SSLgetAnnotations(l_9);
        q_3 = t;
        t = a_12;
        t = fetch_1_0(r_1, t);
        u_3 = t;
        t = b_12;
        if(match_cons(t, sym__2))
          {
            w_3 = ATgetArgument(t, 0);
            x_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_4(s_1, w_3, x_3, t);
        v_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_3, v_3);
        v_4 = t;
        t = SSLsetAnnotations(v_4, q_3);
        LocalPopChoice(k_8);
      }
    else
      {
        t = j_8;
        {
          ATerm e_4 = NULL,x_4 = NULL,y_4 = NULL,g_5 = NULL,w_4 = NULL;
          t = SSLgetAnnotations(l_9);
          e_4 = t;
          t = b_12;
          if(match_cons(t, sym__2))
            {
              y_4 = ATgetArgument(t, 0);
              g_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_4(v_1, y_4, g_5, t);
          x_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_12, x_4);
          w_4 = t;
          t = SSLsetAnnotations(w_4, e_4);
        }
      }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm e_107 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
  l_12 = t;
  t = dtime_0_0(t);
  t = l_12;
  t = e_107(t);
  k_12 = t;
  t = dtime_0_0(t);
  h_12 = t;
  t = k_12;
  if(match_cons(t, sym__2))
    {
      i_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_12), (ATerm) ATmakeAppl(sym_Runtime_1, h_12)), j_12);
  return(t);
}
static ATerm g_13 (ATerm y_12, ATerm t)
{
  t = SSL_fclose(y_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_13 = NULL,e_13 = NULL;
  e_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_13 = ATgetArgument(t, 0);
      {
        ATerm n_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_13);
            LocalPopChoice(o_8);
          }
        else
          {
            t = n_8;
            t = g_13(e_13, t);
          }
      }
    }
  else
    {
      t = g_13(e_13, t);
    }
  return(t);
}
static ATerm m_4 (ATerm l_28, ATerm t)
{
  t = SSL_read_term_from_stream(l_28);
  return(t);
}
static ATerm n_4 (ATerm q_29, ATerm r_29, ATerm t)
{
  ATerm h_13 = NULL;
  t = SSL_fopen(q_29, r_29);
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_13);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_13 = NULL;
  t = SSL_stdin_stream();
  o_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_13 = NULL;
  t = SSL_stdout_stream();
  p_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_13 = NULL;
  t = SSL_stderr_stream();
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_13);
  return(t);
}
static ATerm c_16 (ATerm f_14, ATerm t)
{
  ATerm g_14 = NULL;
  t = SSL_explode_term(f_14);
  if(match_cons(t, sym__2))
    {
      ATerm p_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_8 = ATgetArgument(t, 1);
        if(((ATgetType(q_8) == AT_LIST) && !(ATisEmpty(q_8))))
          {
            g_14 = ATgetFirst((ATermList) q_8);
            {
              ATerm r_8 = (ATerm) ATgetNext((ATermList) q_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_14;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_14;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_16 (ATerm k_14, ATerm l_14, ATerm m_14, ATerm t)
{
  ATerm n_14 = NULL,q_14 = NULL,r_14 = NULL,u_14 = NULL,d_5 = NULL;
  t = SSLgetAnnotations(m_14);
  r_14 = t;
  t = k_14;
  if(match_cons(t, sym_Path_1))
    {
      u_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_14, l_14);
  d_5 = t;
  t = SSLsetAnnotations(d_5, r_14);
  if(match_cons(t, sym__2))
    {
      n_14 = ATgetArgument(t, 0);
      q_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4(n_14, q_14, t);
  return(t);
}
static ATerm h_16 (ATerm a_15, ATerm b_15, ATerm c_15, ATerm t)
{
  ATerm d_15 = NULL,h_15 = NULL,k_15 = NULL,s_15 = NULL,e_5 = NULL;
  t = SSLgetAnnotations(c_15);
  k_15 = t;
  t = SSL_is_string(a_15);
  s_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_15, b_15);
  e_5 = t;
  t = SSLsetAnnotations(e_5, k_15);
  if(match_cons(t, sym__2))
    {
      d_15 = ATgetArgument(t, 0);
      h_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4(d_15, h_15, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
  w_15 = t;
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
      {
        ATerm v_8 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_16(w_15, t);
            LocalPopChoice(b_9);
          }
        else
          {
            t = v_8;
            {
              ATerm e_9 = t;
              int f_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_16(x_15, y_15, w_15, t);
                  LocalPopChoice(f_9);
                }
              else
                {
                  t = e_9;
                  t = h_16(x_15, y_15, w_15, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_16(w_15, t);
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_g_9;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_16 = NULL,p_16 = NULL,q_16 = NULL;
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_16 = NULL;
      r_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_16, term_j_9);
      t = o_4(t);
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      t = debug_1_0(x_1, t);
      _fail(t);
    }
  p_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_4(q_16, t);
  i_16 = t;
  t = p_16;
  t = fclose_0_0(t);
  t = i_16;
  return(t);
}
ATerm fetch_1_0 (ATerm n_93 (ATerm), ATerm t)
{
  static ATerm m_18 (ATerm t)
  {
    ATerm e_18 = NULL,i_18 = NULL,l_18 = NULL;
    e_18 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_18 = ATgetFirst((ATermList) t);
        l_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm k_9 = t;
      int m_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_6 = NULL,a_7 = NULL,j_5 = NULL;
          t = SSLgetAnnotations(e_18);
          v_6 = t;
          t = i_18;
          t = n_93(t);
          a_7 = t;
          t = (ATerm) ATinsert(CheckATermList(l_18), a_7);
          j_5 = t;
          t = SSLsetAnnotations(j_5, v_6);
          LocalPopChoice(m_9);
        }
      else
        {
          t = k_9;
          {
            ATerm k_7 = NULL,c_8 = NULL,k_5 = NULL;
            t = SSLgetAnnotations(e_18);
            k_7 = t;
            t = l_18;
            t = m_18(t);
            c_8 = t;
            t = (ATerm) ATinsert(CheckATermList(c_8), i_18);
            k_5 = t;
            t = SSLsetAnnotations(k_5, k_7);
          }
        }
    }
    return(t);
  }
  t = m_18(t);
  return(t);
}
static ATerm h_4 (ATerm i_52, ATerm j_52, ATerm t)
{
  t = SSL_strcat(i_52, j_52);
  return(t);
}
ATerm debug_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
  p_18 = t;
  t = d_88(t);
  q_18 = t;
  t = term_l_6;
  r_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_18), q_18);
  s_18 = t;
  t = SSL_printnl(r_18, s_18);
  t = p_18;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm n_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(o_9);
    }
  else
    {
      t = n_9;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_p_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_18 = NULL;
      z_18 = t;
      t = SSL_is_string(z_18);
      LocalPopChoice(x_9);
    }
  else
    {
      t = s_9;
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(y_1, t);
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
            {
              ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
              f_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_19 = ATgetArgument(t, 0);
                  t = g_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_19 = ATgetArgument(t, 0);
                      t = g_19;
                      {
                        ATerm a_10 = t;
                        int b_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(b_10);
                          }
                        else
                          {
                            t = a_10;
                            t = debug_1_0(a_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm l_19 = NULL,m_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          g_19 = ATgetArgument(t, 0);
                          h_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_19;
                      t = eval_config_0_0(t);
                      l_19 = t;
                      t = h_19;
                      t = eval_config_0_0(t);
                      m_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_19, m_19);
                      t = h_4(l_19, m_19, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL;
  q_19 = t;
  t = term_c_10;
  r_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_10, q_19);
  t = r_4(r_19, q_19, t);
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_19 = NULL,t_19 = NULL;
        t = eval_config_0_0(t);
        s_19 = t;
        t = term_c_10;
        t_19 = t;
        t = SSL_table_put(t_19, q_19, s_19);
        t = s_19;
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_89 (ATerm), ATerm t)
{
  ATerm x_19 = NULL;
  x_19 = t;
  {
    ATerm f_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_19 = NULL;
        t = term_i_10;
        t = get_config_0_0(t);
        z_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_19, term_j_10);
        t = geq_0_0(t);
        t = x_19;
        t = w_89(t);
        LocalPopChoice(h_10);
      }
    else
      {
        t = f_10;
        t = x_19;
      }
  }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm c_20 = NULL;
  c_20 = t;
  if(match_string(t, "-k"))
    {
      t = c_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_20;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL;
  d_20 = t;
  t = SSL_string_to_int(d_20);
  e_20 = t;
  t = term_k_10;
  f_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_10, e_20);
  t = u_4(f_20, e_20, t);
  t = d_20;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_l_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_2, c_2, d_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm c_21 = NULL;
  c_21 = t;
  if(match_string(t, "-S"))
    {
      t = c_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_21;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL;
  t = term_i_10;
  d_21 = t;
  t = term_m_10;
  e_21 = t;
  t = term_p_10;
  t = u_4(d_21, e_21, t);
  t = term_q_10;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_r_10;
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
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
  f_21 = t;
  t = SSL_string_to_int(f_21);
  g_21 = t;
  t = term_i_10;
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, g_21);
  t = u_4(h_21, g_21, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_21);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_s_10;
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
  ATerm i_21 = NULL,j_21 = NULL;
  t = term_t_10;
  i_21 = t;
  t = term_a_1;
  j_21 = t;
  t = term_u_10;
  t = u_4(i_21, j_21, t);
  t = term_v_10;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_2, g_2, k_2, t);
      LocalPopChoice(y_10);
    }
  else
    {
      t = x_10;
      {
        ATerm z_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_2, n_2, q_2, t);
            LocalPopChoice(a_11);
          }
        else
          {
            t = z_10;
            t = Option_3_0(s_2, w_2, x_2, t);
          }
      }
    }
  return(t);
}
static ATerm u_4 (ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm k_21 = NULL;
  t = term_c_10;
  k_21 = t;
  t = SSL_table_put(k_21, i_33, j_33);
  t = (ATerm) ATmakeAppl(sym__3, term_c_10, i_33, j_33);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL;
      t = term_a_1;
      t = i_0(t);
      p_21 = t;
      t = term_b_11;
      q_21 = t;
      t = term_d_11;
      r_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_11, term_d_11, p_21);
      t = s_4(q_21, r_21, p_21, t);
      _fail(t);
    }
  else
    {
      ATerm u_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_21 = ATgetFirst((ATermList) t);
          o_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_21;
      t = d_0(t);
      t = term_a_1;
      t = g_0(t);
      u_21 = t;
      t = (ATerm) ATinsert(CheckATermList(o_21), u_21);
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm w_21 = NULL;
  w_21 = t;
  if(match_string(t, "-o"))
    {
      t = w_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_21;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL;
  x_21 = t;
  t = term_e_11;
  y_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, x_21);
  t = u_4(y_21, x_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_21);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_2, a_3, c_3, t);
  return(t);
}
static ATerm s_4 (ATerm x_38, ATerm y_38, ATerm w_38, ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
  a_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_38, y_38);
  {
    ATerm g_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_11 = ATgetArgument(t, 0);
            ATerm k_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_38, y_38);
        t = r_4(x_38, y_38, t);
        LocalPopChoice(i_11);
      }
    else
      {
        t = g_11;
        t = (ATerm) ATempty;
      }
  }
  b_22 = t;
  t = (ATerm) ATinsert(CheckATermList(b_22), w_38);
  c_22 = t;
  t = SSL_table_put(x_38, y_38, c_22);
  t = a_22;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
      t = term_a_1;
      t = p_0(t);
      n_22 = t;
      t = term_b_11;
      o_22 = t;
      t = term_d_11;
      p_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_11, term_d_11, n_22);
      t = s_4(o_22, p_22, n_22, t);
      _fail(t);
    }
  else
    {
      ATerm t_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_22 = ATgetFirst((ATermList) t);
          k_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_22 = ATgetFirst((ATermList) t);
          m_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_22;
      t = n_0(t);
      t = l_22;
      t = o_0(t);
      t_22 = t;
      t = (ATerm) ATinsert(CheckATermList(m_22), t_22);
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm v_22 = NULL;
  v_22 = t;
  if(match_string(t, "-i"))
    {
      t = v_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_22;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL;
  w_22 = t;
  t = term_l_11;
  x_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_11, w_22);
  t = u_4(x_22, w_22, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_22);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_m_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_3, j_3, m_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_1;
  t = whoami_0_0(t);
  y_22 = t;
  t = term_l_6;
  a_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_11), y_22);
  b_23 = t;
  t = SSL_printnl(a_23, b_23);
  t = term_p_6;
  z_22 = t;
  t = SSL_exit(z_22);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_11;
  t = get_config_0_0(t);
  return(t);
}
static ATerm p_4 (ATerm f_36, ATerm g_36, ATerm t)
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_36, g_36);
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      t = SSL_addr(f_36, g_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
  d_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_23;
      t = e_98(t);
    }
  else
    {
      ATerm i_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_23 = ATgetFirst((ATermList) t);
          f_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_23;
      t = foldr_2_0(e_98, f_98, t);
      i_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_23, i_23);
      t = f_98(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_m_10;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm w_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__2))
    {
      w_8 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_4(w_8, a_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_23 = NULL,s_8 = NULL,t_8 = NULL;
  t = times_0_0(t);
  t_8 = t;
  t = SSL_explode_term(t_8);
  if(match_cons(t, sym__2))
    {
      ATerm r_11 = ATgetArgument(t, 0);
      s_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_8;
  t = foldr_2_0(p_3, s_3, t);
  l_23 = t;
  t = SSL_TicksToSeconds(l_23);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
  w_23 = t;
  if(match_cons(t, sym__2))
    {
      x_23 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_23;
        if((x_23 != t))
          {
            _fail(t);
          }
        t = w_23;
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        t = (ATerm) ATmakeAppl(sym__2, x_23, y_23);
        {
          ATerm u_11 = t;
          int v_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_23, y_23);
              LocalPopChoice(v_11);
            }
          else
            {
              t = u_11;
              t = SSL_gtr(x_23, y_23);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_23, y_23);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_89 (ATerm), ATerm t)
{
  ATerm c_24 = NULL;
  c_24 = t;
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_24 = NULL;
        t = term_i_10;
        t = get_config_0_0(t);
        e_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_24, term_p_6);
        t = geq_0_0(t);
        t = c_24;
        t = v_89(t);
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = c_24;
      }
  }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,j_24 = NULL,k_24 = NULL;
  t = run_time_0_0(t);
  g_24 = t;
  t = term_a_1;
  t = whoami_0_0(t);
  h_24 = t;
  t = term_l_6;
  j_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_11), g_24), term_y_11), h_24);
  k_24 = t;
  t = SSL_printnl(j_24, k_24);
  t = (ATerm) ATmakeAppl(sym__2, term_l_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_11), g_24), term_y_11), h_24));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_24 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_10;
  l_24 = t;
  t = SSL_exit(l_24);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL;
  u_24 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_24;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_24 = ATgetArgument(t, 0);
          {
            ATerm q_9 = NULL,n_5 = NULL;
            t = SSLgetAnnotations(u_24);
            q_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_24);
            n_5 = t;
            t = SSLsetAnnotations(n_5, q_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_24;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_108 (ATerm), ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_12;
      t = get_config_0_0(t);
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      t = fetch_1_0(a_4, t);
    }
  t = c_108(t);
  return(t);
}
ATerm map_1_0 (ATerm d_93 (ATerm), ATerm t)
{
  static ATerm k_25 (ATerm t)
  {
    ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
    h_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_25;
      }
    else
      {
        ATerm g_10 = NULL,n_10 = NULL,o_10 = NULL,p_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_25 = ATgetFirst((ATermList) t);
            j_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_25);
        g_10 = t;
        t = i_25;
        t = d_93(t);
        n_10 = t;
        t = j_25;
        t = k_25(t);
        o_10 = t;
        t = (ATerm) ATinsert(CheckATermList(o_10), n_10);
        p_5 = t;
        t = SSLsetAnnotations(p_5, g_10);
      }
    return(t);
  }
  t = k_25(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_25 = ATgetFirst((ATermList) t);
      o_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_25 = NULL,t_25 = NULL;
        static ATerm b_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_25)), not_null(t_25));
          return(t);
        }
        t = o_25;
        t = l_0(t);
        if(((s_25 != NULL) && (s_25 != t)))
          _fail(t);
        else
          s_25 = t;
        t = n_25;
        t = k_0(t);
        if(((t_25 != NULL) && (t_25 != t)))
          _fail(t);
        else
          t_25 = t;
        t = o_25;
        t = reverse_acc_2_0(k_0, b_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_1;
      t = l_0(t);
    }
  return(t);
}
static ATerm r_4 (ATerm o_40, ATerm p_40, ATerm t)
{
  t = SSL_table_get(o_40, p_40);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,t_5 = NULL;
  z_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_25);
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_25);
  t_5 = t;
  t = SSLsetAnnotations(t_5, x_25);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm b_26 = NULL;
  b_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_26), term_f_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL;
  ATerm g_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_11;
      t = get_config_0_0(t);
      LocalPopChoice(m_12);
    }
  else
    {
      t = g_12;
      t = fetch_1_0(c_4, t);
    }
  t = term_n_12;
  t = echo_0_0(t);
  t = term_b_11;
  v_25 = t;
  t = term_d_11;
  w_25 = t;
  t = term_o_12;
  t = r_4(v_25, w_25, t);
  t = reverse_acc_2_0(_id, d_4, t);
  t = map_1_0(q_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
  d_26 = t;
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_26;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_12 = ATgetFirst((ATermList) t);
                ATerm s_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_26;
          }
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        t = (ATerm) ATinsert(ATempty, d_26);
      }
  }
  e_26 = t;
  t = term_h_8;
  f_26 = t;
  t = SSL_printnl(f_26, e_26);
  t = d_26;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_11;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL;
  t = term_t_12;
  j_26 = t;
  t = term_a_1;
  k_26 = t;
  t = term_u_12;
  t = u_4(j_26, k_26, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_v_12;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL;
  t = term_t_12;
  n_26 = t;
  t = term_a_1;
  o_26 = t;
  t = term_u_12;
  t = u_4(n_26, o_26, t);
  t = term_w_12;
  l_26 = t;
  t = term_a_1;
  m_26 = t;
  t = term_x_12;
  t = u_4(l_26, m_26, t);
  t = term_z_12;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_a_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_13 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_4, z_4, a_5, t);
      LocalPopChoice(d_13);
    }
  else
    {
      t = b_13;
      t = Option_3_0(b_5, c_5, f_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_66 (ATerm), ATerm u_66 (ATerm), ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,x_5 = NULL;
  u_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_26 = ATgetFirst((ATermList) t);
      r_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_26);
  p_26 = t;
  t = q_26;
  t = t_66(t);
  s_26 = t;
  t = r_26;
  t = u_66(t);
  t_26 = t;
  t = (ATerm) ATinsert(CheckATermList(t_26), s_26);
  x_5 = t;
  t = SSLsetAnnotations(x_5, p_26);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_110 (ATerm), ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,e_27 = NULL,f_27 = NULL,j_6 = NULL;
  z_26 = t;
  {
    ATerm f_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_13;
        t = f_110(t);
        LocalPopChoice(i_13);
      }
    else
      {
        t = f_13;
      }
  }
  t = z_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_27 = ATgetFirst((ATermList) t);
      c_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_26);
  a_27 = t;
  t = term_o_11;
  f_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_11, b_27);
  t = u_4(f_27, b_27, t);
  t = c_27;
  {
    static ATerm p_27 (ATerm t)
    {
      ATerm k_13 = t;
      int l_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_13 = t;
          int n_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_27 = NULL;
              i_27 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = i_27;
              LocalPopChoice(n_13);
            }
          else
            {
              t = m_13;
              t = f_110(t);
              t = Cons_2_0(_id, p_27, t);
            }
          LocalPopChoice(l_13);
        }
      else
        {
          t = k_13;
          {
            ATerm l_27 = NULL,m_27 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_27 = ATgetFirst((ATermList) t);
                m_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(m_27), (ATerm) ATmakeAppl(sym_Undefined_1, l_27));
          }
        }
      return(t);
    }
    t = p_27(t);
  }
  e_27 = t;
  t = (ATerm) ATinsert(CheckATermList(e_27), (ATerm) ATmakeAppl(sym_Program_1, b_27));
  j_6 = t;
  t = SSLsetAnnotations(j_6, a_27);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm b_28 = NULL;
  b_28 = t;
  if(match_string(t, "--help"))
    {
      t = b_28;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_28;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_28;
        }
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL;
  t = term_e_12;
  c_28 = t;
  t = term_a_1;
  d_28 = t;
  t = term_r_13;
  t = u_4(c_28, d_28, t);
  t = term_s_13;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_110 (ATerm), ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
  w_27 = t;
  t = term_b_11;
  y_27 = t;
  t = term_d_11;
  z_27 = t;
  t = (ATerm) ATempty;
  a_28 = t;
  t = SSL_table_put(y_27, z_27, a_28);
  t = w_27;
  {
    static ATerm i_5 (ATerm t)
    {
      ATerm u_13 = t;
      int v_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_110(t);
          LocalPopChoice(v_13);
        }
      else
        {
          t = u_13;
          {
            ATerm w_13 = t;
            int x_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_5, m_5, o_5, t);
                LocalPopChoice(x_13);
              }
            else
              {
                t = w_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_5, t);
  }
  {
    ATerm y_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_28 = NULL;
        r_28 = t;
        {
          ATerm a_14 = t;
          int b_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_11 = NULL;
              t = r_28;
              {
                ATerm c_14 = t;
                int d_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_e_12;
                    t = get_config_0_0(t);
                    LocalPopChoice(d_14);
                  }
                else
                  {
                    t = c_14;
                    t = fetch_1_0(s_5, t);
                  }
              }
              t = r_28;
              t = default_system_usage_0_0(t);
              t = term_m_10;
              c_11 = t;
              t = SSL_exit(c_11);
              LocalPopChoice(b_14);
            }
          else
            {
              t = a_14;
              {
                ATerm h_11 = NULL;
                t = term_t_12;
                t = get_config_0_0(t);
                t = r_28;
                t = default_system_about_0_0(t);
                t = term_m_10;
                h_11 = t;
                t = SSL_exit(h_11);
              }
            }
        }
        LocalPopChoice(z_13);
      }
    else
      {
        t = y_13;
        {
          ATerm e_14 = t;
          int h_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
              static ATerm w_5 (ATerm t)
              {
                ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,u_8 = NULL;
                x_28 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    w_28 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_28);
                v_28 = t;
                t = w_28;
                if(((u_27 != NULL) && (u_27 != t)))
                  _fail(t);
                else
                  u_27 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, w_28);
                u_8 = t;
                t = SSLsetAnnotations(u_8, v_28);
                return(t);
              }
              t = fetch_1_0(w_5, t);
              t = term_l_6;
              t_28 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_27)), term_i_14);
              u_28 = t;
              t = SSL_printnl(t_28, u_28);
              t = (ATerm) ATmakeAppl(sym__2, term_l_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_27)), term_i_14));
              t = default_system_usage_0_0(t);
              t = term_p_6;
              s_28 = t;
              t = SSL_exit(s_28);
              LocalPopChoice(h_14);
            }
          else
            {
              t = e_14;
            }
        }
      }
  }
  v_27 = t;
  t = term_b_11;
  x_27 = t;
  t = SSL_table_destroy(x_27);
  t = v_27;
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_108 (ATerm), ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm h_108 (ATerm), ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  t = parse_options_1_0(e_108, t);
  c_29 = t;
  t = term_j_14;
  f_29 = t;
  t = SSL_table_create(f_29);
  t = term_j_14;
  d_29 = t;
  t = term_o_14;
  e_29 = t;
  t = SSL_table_put(d_29, e_29, c_29);
  t = c_29;
  t = g_108(t);
  {
    ATerm p_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_108, t);
        LocalPopChoice(s_14);
      }
    else
      {
        t = p_14;
        {
          ATerm t_14 = t;
          int v_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_108(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_14);
            }
          else
            {
              t = t_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = if_verbose2_1_0(h_6, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL;
  t = term_w_14;
  g_29 = t;
  t = term_a_1;
  h_29 = t;
  t = term_x_14;
  t = u_4(g_29, h_29, t);
  t = term_y_14;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_z_14;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
  i_29 = t;
  t = term_o_11;
  t = get_config_0_0(t);
  j_29 = t;
  t = term_l_6;
  k_29 = t;
  t = (ATerm) ATinsert(ATempty, j_29);
  l_29 = t;
  t = SSL_printnl(k_29, l_29);
  t = i_29;
  return(t);
}
ATerm iowrap_3_0 (ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm t)
{
  static ATerm y_5 (ATerm t)
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_107(t);
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        {
          ATerm g_15 = t;
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(i_15);
            }
          else
            {
              t = g_15;
              {
                ATerm j_15 = t;
                int l_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(l_15);
                  }
                else
                  {
                    t = j_15;
                    {
                      ATerm m_15 = t;
                      int n_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(b_6, f_6, g_6, t);
                          LocalPopChoice(n_15);
                        }
                      else
                        {
                          t = m_15;
                          {
                            ATerm o_15 = t;
                            int p_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(p_15);
                              }
                            else
                              {
                                t = o_15;
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
  static ATerm a_6 (ATerm t)
  {
    ATerm m_29 = NULL,n_29 = NULL,u_29 = NULL;
    n_29 = t;
    {
      ATerm q_15 = t;
      int r_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm i_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((m_29 != NULL) && (m_29 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_29 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_6, t);
          LocalPopChoice(r_15);
        }
      else
        {
          t = q_15;
          t = term_t_15;
          m_29 = t;
        }
    }
    t = not_null(m_29);
    t = ReadFromFile_0_0(t);
    u_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_29, u_29);
    t = apply_strategy_1_0(n_107, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(y_5, p_107, z_5, a_6, t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,w_9 = NULL;
  a_30 = t;
  if(match_cons(t, sym__2))
    {
      x_29 = ATgetArgument(t, 0);
      y_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_30);
  w_29 = t;
  t = y_29;
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_30 = NULL;
        t = sometd_1_0(RepairDefinition_0_0, t);
        b_30 = t;
        t = explanation_0_0(t);
        t = b_30;
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
      }
  }
  z_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_29, z_29);
  w_9 = t;
  t = SSLsetAnnotations(w_9, w_29);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(k_6, _fail, default_usage_0_0, t);
  return(t);
}

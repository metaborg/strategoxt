#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
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
Symbol sym_Path_1;
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
ATerm term_i_15;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_v_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_z_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_o_10;
ATerm term_i_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_t_9;
ATerm term_q_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_c_8;
ATerm term_z_7;
ATerm term_v_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_q_6;
ATerm term_j_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_r_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_r_1));
  term_r_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: argument '", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("' of ", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" '", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("' starts with constant type", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_k_9);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_t_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_r_1);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_h_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_w_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_x_10);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym__2, term_i_12, term_r_1);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_m_12, term_r_1);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_r_1);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_i_12);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym__2, term_j_14, term_r_1);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm explanation_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm f_95 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm c_3 (ATerm o_2, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm x_3 (ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm c_21, ATerm a_21, ATerm z_20, ATerm b_21, ATerm t);
ATerm RepairVarDec_2_0 (ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm t);
ATerm map1_1_0 (ATerm q_94 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm RepairDefinition_0_0 (ATerm t);
ATerm sometd_1_0 (ATerm u_83 (ATerm), ATerm t);
static ATerm z_3 (ATerm s_29, ATerm t_29, ATerm t);
static ATerm a_4 (ATerm k_28, ATerm l_28, ATerm t);
static ATerm c_4 (ATerm q_89 (ATerm), ATerm j_197, ATerm q_28, ATerm t);
static ATerm b_4 (ATerm g_28, ATerm h_28, ATerm t);
static ATerm o_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm d_109 (ATerm), ATerm t);
static ATerm t_13 (ATerm e_13, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_4 (ATerm m_28, ATerm t);
static ATerm e_4 (ATerm c_53, ATerm d_53, ATerm t);
static ATerm f_4 (ATerm u_29, ATerm v_29, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm q_16 (ATerm n_14, ATerm t);
static ATerm r_16 (ATerm s_14, ATerm t_14, ATerm u_14, ATerm t);
static ATerm y_16 (ATerm o_15, ATerm r_15, ATerm t_15, ATerm t);
static ATerm g_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_94 (ATerm), ATerm t);
static ATerm j_4 (ATerm o_40, ATerm p_40, ATerm t);
ATerm if_verbose2_1_0 (ATerm h_91 (ATerm), ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm m_4 (ATerm n_33, ATerm o_33, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm r_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm k_4 (ATerm x_38, ATerm y_38, ATerm w_38, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_4 (ATerm f_36, ATerm g_36, ATerm t);
ATerm foldr_2_0 (ATerm d_100 (ATerm), ATerm e_100 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm g_91 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm need_help_1_0 (ATerm b_110 (ATerm), ATerm t);
ATerm map_1_0 (ATerm o_94 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm d_68 (ATerm), ATerm e_68 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm e_112 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm parse_options_1_0 (ATerm d_112 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm t);
static ATerm t_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm iowrap_3_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm t);
static ATerm c_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,j_0 = NULL,m_0 = NULL;
  a_0 = t;
  t = term_r_1;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_e_6;
  j_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_6), b_0), term_f_6);
  m_0 = t;
  t = SSL_printnl(j_0, m_0);
  t = term_h_6;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm explanation_0_0 (ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL;
  t = term_e_6;
  p_0 = t;
  t = (ATerm) ATinsert(ATempty, term_j_6);
  q_0 = t;
  t = SSL_printnl(p_0, q_0);
  t = (ATerm) ATmakeAppl(sym__2, term_e_6, (ATerm) ATinsert(ATempty, term_j_6));
  return(t);
}
ATerm at_end_1_0 (ATerm f_95 (ATerm), ATerm t)
{
  static ATerm k_2 (ATerm t)
  {
    ATerm g_2 = NULL,h_2 = NULL,j_2 = NULL;
    j_2 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_2 = ATgetFirst((ATermList) t);
        h_2 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_0 = NULL,y_0 = NULL,u_1 = NULL;
          t = SSLgetAnnotations(j_2);
          v_0 = t;
          t = h_2;
          t = k_2(t);
          y_0 = t;
          t = (ATerm) ATinsert(CheckATermList(y_0), g_2);
          u_1 = t;
          t = SSLsetAnnotations(u_1, v_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_2;
        t = f_95(t);
      }
    return(t);
  }
  t = k_2(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL,u_0 = NULL;
  s_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_0;
    }
  else
    {
      static ATerm h_0 (ATerm t)
      {
        t = not_null(u_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_0 = ATgetFirst((ATermList) t);
          if(((u_0 != NULL) && (u_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_0;
      t = at_end_1_0(h_0, t);
    }
  return(t);
}
static ATerm c_3 (ATerm o_2, ATerm t)
{
  ATerm t_2 = NULL;
  t = SSL_explode_term(o_2);
  if(match_cons(t, sym__2))
    {
      ATerm n_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_2;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL;
  x_2 = t;
  if(match_cons(t, sym__2))
    {
      v_2 = ATgetArgument(t, 0);
      w_2 = ATgetArgument(t, 1);
      {
        ATerm o_6 = t;
        int p_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_0 (ATerm t)
            {
              t = w_2;
              return(t);
            }
            t = v_2;
            t = at_end_1_0(o_0, t);
            LocalPopChoice(p_6);
          }
        else
          {
            t = o_6;
            t = c_3(x_2, t);
          }
      }
    }
  else
    {
      t = c_3(x_2, t);
    }
  return(t);
}
static ATerm x_3 (ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm c_21, ATerm a_21, ATerm z_20, ATerm b_21, ATerm t)
{
  ATerm d_3 = NULL,f_3 = NULL,g_3 = NULL,j_3 = NULL,k_3 = NULL,p_3 = NULL;
  f_3 = t;
  t = m_80(t);
  g_3 = t;
  t = f_3;
  t = n_80(t);
  j_3 = t;
  t = term_e_6;
  k_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_6), j_3), term_v_6), g_3), term_u_6), c_21), term_q_6);
  p_3 = t;
  t = SSL_printnl(k_3, p_3);
  t = (ATerm) ATmakeAppl(sym__2, z_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, a_21)));
  t = conc_0_0(t);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_21, (ATerm) ATmakeAppl(sym_FunType_2, d_3, b_21));
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm t)
{
  ATerm s_3 = NULL,u_3 = NULL,i_4 = NULL,n_4 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      s_3 = ATgetArgument(t, 0);
      {
        ATerm y_6 = ATgetArgument(t, 1);
        if(match_cons(y_6, sym_FunType_2))
          {
            ATerm a_7 = ATgetArgument(y_6, 0);
            if(((ATgetType(a_7) == AT_LIST) && !(ATisEmpty(a_7))))
              {
                ATerm e_7 = ATgetFirst((ATermList) a_7);
                if(match_cons(e_7, sym_ConstType_1))
                  {
                    u_3 = ATgetArgument(e_7, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm f_7 = (ATerm) ATgetNext((ATermList) a_7);
                  i_4 = f_7;
                  if(((ATgetType(f_7) == AT_LIST) && !(ATisEmpty(f_7))))
                    {
                      ATerm g_7 = ATgetFirst((ATermList) f_7);
                      if(match_cons(g_7, sym_FunType_2))
                        {
                          ATerm j_7 = ATgetArgument(g_7, 0);
                          ATerm k_7 = ATgetArgument(g_7, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm h_7 = (ATerm) ATgetNext((ATermList) f_7);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            n_4 = ATgetArgument(y_6, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_3(m_80, n_80, s_3, u_3, i_4, n_4, t);
  return(t);
}
ATerm map1_1_0 (ATerm q_94 (ATerm), ATerm t)
{
  ATerm i_6 = NULL,k_6 = NULL,r_6 = NULL;
  i_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_6 = ATgetFirst((ATermList) t);
      r_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm l_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,p_1 = NULL,q_1 = NULL,z_1 = NULL,x_1 = NULL;
        t = SSLgetAnnotations(i_6);
        m_1 = t;
        t = k_6;
        t = q_94(t);
        p_1 = t;
        t = (ATerm) ATinsert(CheckATermList(r_6), p_1);
        x_1 = t;
        t = SSLsetAnnotations(x_1, m_1);
        q_1 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_1 = ATgetFirst((ATermList) t);
            k_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_1);
        i_1 = t;
        t = k_1;
        {
          ATerm n_7 = t;
          int o_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(q_94, t);
              LocalPopChoice(o_7);
            }
          else
            {
              t = n_7;
            }
        }
        l_1 = t;
        t = (ATerm) ATinsert(CheckATermList(l_1), j_1);
        z_1 = t;
        t = SSLsetAnnotations(z_1, i_1);
        LocalPopChoice(m_7);
      }
    else
      {
        t = l_7;
        {
          ATerm p_2 = NULL,s_2 = NULL,a_2 = NULL;
          t = SSLgetAnnotations(i_6);
          p_2 = t;
          t = r_6;
          t = map1_1_0(q_94, t);
          s_2 = t;
          t = (ATerm) ATinsert(CheckATermList(s_2), k_6);
          a_2 = t;
          t = SSLsetAnnotations(a_2, p_2);
        }
      }
  }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_p_7;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_p_7;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_q_7;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_q_7;
  return(t);
}
ATerm RepairDefinition_0_0 (ATerm t)
{
  ATerm z_6 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      b_7 = ATgetArgument(t, 0);
      c_7 = ATgetArgument(t, 1);
      d_7 = ATgetArgument(t, 2);
      z_6 = ATgetArgument(t, 3);
      {
        ATerm i_7 = NULL;
        t = c_7;
        {
          static ATerm r_0 (ATerm t)
          {
            static ATerm x_0 (ATerm t)
            {
              t = b_7;
              return(t);
            }
            t = RepairVarDec_2_0(w_0, x_0, t);
            return(t);
          }
          t = map1_1_0(r_0, t);
        }
        i_7 = t;
        t = (ATerm) ATmakeAppl(sym_RDefT_4, b_7, i_7, d_7, z_6);
      }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          b_7 = ATgetArgument(t, 0);
          c_7 = ATgetArgument(t, 1);
          d_7 = ATgetArgument(t, 2);
          {
            ATerm u_7 = NULL;
            t = c_7;
            {
              static ATerm z_0 (ATerm t)
              {
                static ATerm b_1 (ATerm t)
                {
                  t = b_7;
                  return(t);
                }
                t = RepairVarDec_2_0(a_1, b_1, t);
                return(t);
              }
              t = map1_1_0(z_0, t);
            }
            u_7 = t;
            t = (ATerm) ATmakeAppl(sym_RDef_3, b_7, u_7, d_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              b_7 = ATgetArgument(t, 0);
              c_7 = ATgetArgument(t, 1);
              d_7 = ATgetArgument(t, 2);
              z_6 = ATgetArgument(t, 3);
              {
                ATerm h_8 = NULL;
                t = c_7;
                {
                  static ATerm c_1 (ATerm t)
                  {
                    static ATerm e_1 (ATerm t)
                    {
                      t = b_7;
                      return(t);
                    }
                    t = RepairVarDec_2_0(d_1, e_1, t);
                    return(t);
                  }
                  t = map1_1_0(c_1, t);
                }
                h_8 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, b_7, h_8, d_7, z_6);
              }
            }
          else
            {
              ATerm y_8 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  b_7 = ATgetArgument(t, 0);
                  c_7 = ATgetArgument(t, 1);
                  d_7 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = c_7;
              {
                static ATerm f_1 (ATerm t)
                {
                  static ATerm h_1 (ATerm t)
                  {
                    t = b_7;
                    return(t);
                  }
                  t = RepairVarDec_2_0(g_1, h_1, t);
                  return(t);
                }
                t = map1_1_0(f_1, t);
              }
              y_8 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_3, b_7, y_8, d_7);
            }
        }
    }
  return(t);
}
ATerm sometd_1_0 (ATerm u_83 (ATerm), ATerm t)
{
  static ATerm a_9 (ATerm t)
  {
    ATerm r_7 = t;
    int t_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_83(t);
        LocalPopChoice(t_7);
      }
    else
      {
        t = r_7;
        t = SRTS_some(a_9, t);
      }
    return(t);
  }
  t = a_9(t);
  return(t);
}
static ATerm z_3 (ATerm s_29, ATerm t_29, ATerm t)
{
  ATerm b_9 = NULL;
  t = SSL_fputc(s_29, t_29);
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_9);
  return(t);
}
static ATerm a_4 (ATerm k_28, ATerm l_28, ATerm t)
{
  ATerm c_9 = NULL;
  t = SSL_write_term_to_stream_text(k_28, l_28);
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_9);
  return(t);
}
static ATerm c_4 (ATerm q_89 (ATerm), ATerm j_197, ATerm q_28, ATerm t)
{
  ATerm e_9 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_197, term_v_7);
  t = g_4(t);
  e_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_9, q_28);
  t = q_89(t);
  t = fclose_0_0(t);
  t = q_28;
  return(t);
}
static ATerm b_4 (ATerm g_28, ATerm h_28, ATerm t)
{
  ATerm h_9 = NULL;
  t = SSL_write_term_to_stream_baf(g_28, h_28);
  h_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_9);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm w_3 = NULL,y_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_7 = ATgetArgument(t, 0);
      if(match_cons(x_7, sym_Stream_1))
        {
          w_3 = ATgetArgument(x_7, 0);
        }
      else
        _fail(t);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4(w_3, y_3, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm j_5 = NULL,m_5 = NULL,n_5 = NULL,r_5 = NULL,s_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_7 = ATgetArgument(t, 0);
      if(match_cons(y_7, sym_Stream_1))
        {
          r_5 = ATgetArgument(y_7, 0);
        }
      else
        _fail(t);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(r_5, s_5, t);
  j_5 = t;
  t = term_z_7;
  m_5 = t;
  t = j_5;
  if(match_cons(t, sym_Stream_1))
    {
      n_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_7, j_5);
  t = z_3(m_5, n_5, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm p_9 = NULL,r_9 = NULL,s_9 = NULL,v_9 = NULL,x_9 = NULL,c_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,j_10 = NULL,g_12 = NULL,j_12 = NULL,v_4 = NULL,l_2 = NULL;
  r_9 = t;
  if(match_cons(t, sym__2))
    {
      g_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_9);
  f_10 = t;
  t = g_10;
  {
    ATerm a_8 = t;
    int b_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((p_9 != NULL) && (p_9 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(n_1, t);
        LocalPopChoice(b_8);
      }
    else
      {
        t = a_8;
        t = term_c_8;
        p_9 = t;
      }
  }
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_10, h_10);
  l_2 = t;
  t = SSLsetAnnotations(l_2, f_10);
  t = r_9;
  if(match_cons(t, sym__2))
    {
      v_9 = ATgetArgument(t, 0);
      x_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_9);
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_9, (ATerm) ATmakeAppl(sym__2, not_null(p_9), x_9));
  v_4 = t;
  t = SSLsetAnnotations(v_4, s_9);
  c_10 = t;
  if(match_cons(t, sym__2))
    {
      g_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_3 = NULL,q_3 = NULL,r_3 = NULL,t_3 = NULL,v_3 = NULL,w_4 = NULL;
        t = SSLgetAnnotations(c_10);
        m_3 = t;
        t = g_12;
        t = fetch_1_0(o_1, t);
        q_3 = t;
        t = j_12;
        if(match_cons(t, sym__2))
          {
            t_3 = ATgetArgument(t, 0);
            v_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_4(s_1, t_3, v_3, t);
        r_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_3, r_3);
        w_4 = t;
        t = SSLsetAnnotations(w_4, m_3);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        {
          ATerm r_4 = NULL,u_4 = NULL,y_4 = NULL,z_4 = NULL,x_4 = NULL;
          t = SSLgetAnnotations(c_10);
          r_4 = t;
          t = j_12;
          if(match_cons(t, sym__2))
            {
              y_4 = ATgetArgument(t, 0);
              z_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_4(t_1, y_4, z_4, t);
          u_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_12, u_4);
          x_4 = t;
          t = SSLsetAnnotations(x_4, r_4);
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
ATerm apply_strategy_1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,u_12 = NULL,v_12 = NULL;
  v_12 = t;
  t = dtime_0_0(t);
  t = v_12;
  t = d_109(t);
  u_12 = t;
  t = dtime_0_0(t);
  q_12 = t;
  t = u_12;
  if(match_cons(t, sym__2))
    {
      r_12 = ATgetArgument(t, 0);
      s_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_12), (ATerm) ATmakeAppl(sym_Runtime_1, q_12)), s_12);
  return(t);
}
static ATerm t_13 (ATerm e_13, ATerm t)
{
  t = SSL_fclose(e_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL;
  q_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_13 = ATgetArgument(t, 0);
      {
        ATerm j_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_13);
            LocalPopChoice(m_8);
          }
        else
          {
            t = j_8;
            t = t_13(q_13, t);
          }
      }
    }
  else
    {
      t = t_13(q_13, t);
    }
  return(t);
}
static ATerm d_4 (ATerm m_28, ATerm t)
{
  t = SSL_read_term_from_stream(m_28);
  return(t);
}
static ATerm e_4 (ATerm c_53, ATerm d_53, ATerm t)
{
  t = SSL_strcat(c_53, d_53);
  return(t);
}
static ATerm f_4 (ATerm u_29, ATerm v_29, ATerm t)
{
  ATerm y_13 = NULL;
  t = SSL_fopen(u_29, v_29);
  y_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_13);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_14 = NULL;
  t = SSL_stdin_stream();
  c_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_14 = NULL;
  t = SSL_stdout_stream();
  f_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_14 = NULL;
  t = SSL_stderr_stream();
  g_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_14);
  return(t);
}
static ATerm q_16 (ATerm n_14, ATerm t)
{
  ATerm o_14 = NULL;
  t = SSL_explode_term(n_14);
  if(match_cons(t, sym__2))
    {
      ATerm n_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_8 = ATgetArgument(t, 1);
        if(((ATgetType(o_8) == AT_LIST) && !(ATisEmpty(o_8))))
          {
            o_14 = ATgetFirst((ATermList) o_8);
            {
              ATerm p_8 = (ATerm) ATgetNext((ATermList) o_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_14;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_14;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm r_16 (ATerm s_14, ATerm t_14, ATerm u_14, ATerm t)
{
  ATerm x_14 = NULL,a_15 = NULL,b_15 = NULL,h_15 = NULL,e_5 = NULL;
  t = SSLgetAnnotations(u_14);
  b_15 = t;
  t = s_14;
  if(match_cons(t, sym_Path_1))
    {
      h_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_15, t_14);
  e_5 = t;
  t = SSLsetAnnotations(e_5, b_15);
  if(match_cons(t, sym__2))
    {
      x_14 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_4(x_14, a_15, t);
  return(t);
}
static ATerm y_16 (ATerm o_15, ATerm r_15, ATerm t_15, ATerm t)
{
  ATerm u_15 = NULL,z_15 = NULL,a_16 = NULL,f_16 = NULL,f_5 = NULL;
  t = SSLgetAnnotations(t_15);
  a_16 = t;
  t = SSL_is_string(o_15);
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_16, r_15);
  f_5 = t;
  t = SSLsetAnnotations(f_5, a_16);
  if(match_cons(t, sym__2))
    {
      u_15 = ATgetArgument(t, 0);
      z_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_4(u_15, z_15, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm k_16 = NULL,o_16 = NULL,p_16 = NULL;
  k_16 = t;
  if(match_cons(t, sym__2))
    {
      o_16 = ATgetArgument(t, 0);
      p_16 = ATgetArgument(t, 1);
      {
        ATerm q_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_16(k_16, t);
            LocalPopChoice(r_8);
          }
        else
          {
            t = q_8;
            {
              ATerm s_8 = t;
              int t_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_16(o_16, p_16, k_16, t);
                  LocalPopChoice(t_8);
                }
              else
                {
                  t = s_8;
                  t = y_16(o_16, p_16, k_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_16(k_16, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_17 = NULL,i_17 = NULL,j_17 = NULL,u_17 = NULL;
  u_17 = t;
  {
    ATerm u_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_17, term_w_8);
        t = g_4(t);
        LocalPopChoice(v_8);
      }
    else
      {
        t = u_8;
        {
          ATerm l_6 = NULL,m_6 = NULL;
          t = term_x_8;
          m_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_8, u_17);
          t = e_4(m_6, u_17, t);
          l_6 = t;
          t = SSL_perror(l_6);
          _fail(t);
        }
      }
  }
  i_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_4(j_17, t);
  a_17 = t;
  t = i_17;
  t = fclose_0_0(t);
  t = a_17;
  return(t);
}
ATerm fetch_1_0 (ATerm y_94 (ATerm), ATerm t)
{
  static ATerm f_19 (ATerm t)
  {
    ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
    c_19 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_19 = ATgetFirst((ATermList) t);
        e_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_8 = t;
      int d_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_6 = NULL,x_6 = NULL,i_5 = NULL;
          t = SSLgetAnnotations(c_19);
          t_6 = t;
          t = d_19;
          t = y_94(t);
          x_6 = t;
          t = (ATerm) ATinsert(CheckATermList(e_19), x_6);
          i_5 = t;
          t = SSLsetAnnotations(i_5, t_6);
          LocalPopChoice(d_9);
        }
      else
        {
          t = z_8;
          {
            ATerm s_7 = NULL,w_7 = NULL,k_5 = NULL;
            t = SSLgetAnnotations(c_19);
            s_7 = t;
            t = e_19;
            t = f_19(t);
            w_7 = t;
            t = (ATerm) ATinsert(CheckATermList(w_7), d_19);
            k_5 = t;
            t = SSLsetAnnotations(k_5, s_7);
          }
        }
    }
    return(t);
  }
  t = f_19(t);
  return(t);
}
static ATerm j_4 (ATerm o_40, ATerm p_40, ATerm t)
{
  t = SSL_table_get(o_40, p_40);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm h_91 (ATerm), ATerm t)
{
  ATerm j_19 = NULL;
  j_19 = t;
  {
    ATerm g_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
        t = term_j_9;
        m_19 = t;
        t = term_k_9;
        n_19 = t;
        t = term_l_9;
        t = j_4(m_19, n_19, t);
        l_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_19, term_m_9);
        t = geq_0_0(t);
        t = j_19;
        t = h_91(t);
        LocalPopChoice(i_9);
      }
    else
      {
        t = g_9;
        t = j_19;
      }
  }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm q_19 = NULL;
  q_19 = t;
  if(match_string(t, "-k"))
    {
      t = q_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_19;
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
  r_19 = t;
  t = SSL_string_to_int(r_19);
  s_19 = t;
  t = term_n_9;
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_9, s_19);
  t = m_4(t_19, s_19, t);
  t = r_19;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_q_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_1, w_1, y_1, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm v_19 = NULL;
  v_19 = t;
  if(match_string(t, "-S"))
    {
      t = v_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_19;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL;
  t = term_k_9;
  w_19 = t;
  t = term_t_9;
  x_19 = t;
  t = term_y_9;
  t = m_4(w_19, x_19, t);
  t = term_z_9;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_a_10;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
  y_19 = t;
  t = SSL_string_to_int(y_19);
  z_19 = t;
  t = term_k_9;
  a_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_9, z_19);
  t = m_4(a_20, z_19, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_19);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_b_10;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL;
  t = term_d_10;
  b_20 = t;
  t = term_r_1;
  c_20 = t;
  t = term_e_10;
  t = m_4(b_20, c_20, t);
  t = term_i_10;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_o_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_2, c_2, d_2, t);
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
        ATerm r_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_2, f_2, i_2, t);
            LocalPopChoice(t_10);
          }
        else
          {
            t = r_10;
            t = Option_3_0(m_2, n_2, q_2, t);
          }
      }
    }
  return(t);
}
static ATerm m_4 (ATerm n_33, ATerm o_33, ATerm t)
{
  ATerm d_20 = NULL;
  t = term_j_9;
  d_20 = t;
  t = SSL_table_put(d_20, n_33, o_33);
  t = (ATerm) ATmakeAppl(sym__3, term_j_9, n_33, o_33);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm g_20 = NULL,d_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
      t = term_r_1;
      t = e_0(t);
      e_21 = t;
      t = term_w_10;
      f_21 = t;
      t = term_x_10;
      g_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_10, term_x_10, e_21);
      t = k_4(f_21, g_21, e_21, t);
      _fail(t);
    }
  else
    {
      ATerm j_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_20 = ATgetFirst((ATermList) t);
          d_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_20;
      t = c_0(t);
      t = term_r_1;
      t = d_0(t);
      j_21 = t;
      t = (ATerm) ATinsert(CheckATermList(d_21), j_21);
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm l_21 = NULL;
  l_21 = t;
  if(match_string(t, "-o"))
    {
      t = l_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_21;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL;
  m_21 = t;
  t = term_y_10;
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_10, m_21);
  t = m_4(n_21, m_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_21);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_z_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_2, u_2, y_2, t);
  return(t);
}
static ATerm k_4 (ATerm x_38, ATerm y_38, ATerm w_38, ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL;
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_38, y_38);
  {
    ATerm a_11 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_11 = ATgetArgument(t, 0);
            ATerm d_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_38, y_38);
        t = j_4(x_38, y_38, t);
        LocalPopChoice(b_11);
      }
    else
      {
        t = a_11;
        t = (ATerm) ATempty;
      }
  }
  q_21 = t;
  t = (ATerm) ATinsert(CheckATermList(q_21), w_38);
  r_21 = t;
  t = SSL_table_put(x_38, y_38, r_21);
  t = p_21;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
      t = term_r_1;
      t = n_0(t);
      c_22 = t;
      t = term_w_10;
      d_22 = t;
      t = term_x_10;
      e_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_10, term_x_10, c_22);
      t = k_4(d_22, e_22, c_22, t);
      _fail(t);
    }
  else
    {
      ATerm i_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_21 = ATgetFirst((ATermList) t);
          z_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_22 = ATgetFirst((ATermList) t);
          b_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_21;
      t = k_0(t);
      t = a_22;
      t = l_0(t);
      i_22 = t;
      t = (ATerm) ATinsert(CheckATermList(b_22), i_22);
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm k_22 = NULL;
  k_22 = t;
  if(match_string(t, "-i"))
    {
      t = k_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_22;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  l_22 = t;
  t = term_e_11;
  m_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, l_22);
  t = m_4(m_22, l_22, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_22);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_2, a_3, b_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_1;
  t = whoami_0_0(t);
  n_22 = t;
  t = term_e_6;
  p_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_11), n_22);
  q_22 = t;
  t = SSL_printnl(p_22, q_22);
  t = term_h_6;
  o_22 = t;
  t = SSL_exit(o_22);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  t = term_j_9;
  r_22 = t;
  t = term_h_11;
  s_22 = t;
  t = term_i_11;
  t = j_4(r_22, s_22, t);
  return(t);
}
static ATerm h_4 (ATerm f_36, ATerm g_36, ATerm t)
{
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_36, g_36);
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      t = SSL_addr(f_36, g_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_100 (ATerm), ATerm e_100 (ATerm), ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
  u_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_22;
      t = d_100(t);
    }
  else
    {
      ATerm z_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_22 = ATgetFirst((ATermList) t);
          w_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_22;
      t = foldr_2_0(d_100, e_100, t);
      z_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_22, z_22);
      t = e_100(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_t_9;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL;
  if(match_cons(t, sym__2))
    {
      k_8 = ATgetArgument(t, 0);
      l_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_4(k_8, l_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_23 = NULL,d_8 = NULL,e_8 = NULL;
  t = times_0_0(t);
  e_8 = t;
  t = SSL_explode_term(e_8);
  if(match_cons(t, sym__2))
    {
      ATerm l_11 = ATgetArgument(t, 0);
      d_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_8;
  t = foldr_2_0(e_3, h_3, t);
  c_23 = t;
  t = SSL_TicksToSeconds(c_23);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
  n_23 = t;
  if(match_cons(t, sym__2))
    {
      o_23 = ATgetArgument(t, 0);
      p_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_23;
        if((o_23 != t))
          {
            _fail(t);
          }
        t = n_23;
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        t = (ATerm) ATmakeAppl(sym__2, o_23, p_23);
        {
          ATerm o_11 = t;
          int p_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_23, p_23);
              LocalPopChoice(p_11);
            }
          else
            {
              t = o_11;
              t = SSL_gtr(o_23, p_23);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_23, p_23);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_91 (ATerm), ATerm t)
{
  ATerm t_23 = NULL;
  t_23 = t;
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
        t = term_j_9;
        w_23 = t;
        t = term_k_9;
        x_23 = t;
        t = term_l_9;
        t = j_4(w_23, x_23, t);
        v_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_23, term_h_6);
        t = geq_0_0(t);
        t = t_23;
        t = g_91(t);
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = t_23;
      }
  }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,c_24 = NULL,d_24 = NULL;
  t = run_time_0_0(t);
  z_23 = t;
  t = term_r_1;
  t = whoami_0_0(t);
  a_24 = t;
  t = term_e_6;
  c_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_11), z_23), term_s_11), a_24);
  d_24 = t;
  t = SSL_printnl(c_24, d_24);
  t = (ATerm) ATmakeAppl(sym__2, term_e_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_11), z_23), term_s_11), a_24));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_24 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_9;
  e_24 = t;
  t = SSL_exit(e_24);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL;
  p_24 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_24;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_24 = ATgetArgument(t, 0);
          {
            ATerm f_9 = NULL,p_5 = NULL;
            t = SSLgetAnnotations(p_24);
            f_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_24);
            p_5 = t;
            t = SSLsetAnnotations(p_5, f_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_24;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_110 (ATerm), ATerm t)
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_24 = NULL,i_24 = NULL;
      t = term_j_9;
      h_24 = t;
      t = term_w_11;
      i_24 = t;
      t = term_x_11;
      t = j_4(h_24, i_24, t);
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      t = fetch_1_0(l_3, t);
    }
  t = b_110(t);
  return(t);
}
ATerm map_1_0 (ATerm o_94 (ATerm), ATerm t)
{
  static ATerm f_25 (ATerm t)
  {
    ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
    c_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_25;
      }
    else
      {
        ATerm o_9 = NULL,u_9 = NULL,w_9 = NULL,v_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_25 = ATgetFirst((ATermList) t);
            e_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_25);
        o_9 = t;
        t = d_25;
        t = o_94(t);
        u_9 = t;
        t = e_25;
        t = f_25(t);
        w_9 = t;
        t = (ATerm) ATinsert(CheckATermList(w_9), u_9);
        v_5 = t;
        t = SSLsetAnnotations(v_5, o_9);
      }
    return(t);
  }
  t = f_25(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_25 = ATgetFirst((ATermList) t);
      j_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_25 = NULL,o_25 = NULL;
        static ATerm n_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_25)), not_null(o_25));
          return(t);
        }
        t = j_25;
        t = i_0(t);
        if(((n_25 != NULL) && (n_25 != t)))
          _fail(t);
        else
          n_25 = t;
        t = i_25;
        t = g_0(t);
        if(((o_25 != NULL) && (o_25 != t)))
          _fail(t);
        else
          o_25 = t;
        t = j_25;
        t = reverse_acc_2_0(g_0, n_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_1;
      t = i_0(t);
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,x_5 = NULL;
  w_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_25);
  u_25 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_25);
  x_5 = t;
  t = SSLsetAnnotations(x_5, u_25);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm y_25 = NULL;
  y_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_25), term_y_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL;
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_25 = NULL,t_25 = NULL;
      t = term_j_9;
      s_25 = t;
      t = term_h_11;
      t_25 = t;
      t = term_i_11;
      t = j_4(s_25, t_25, t);
      LocalPopChoice(a_12);
    }
  else
    {
      t = z_11;
      t = fetch_1_0(o_3, t);
    }
  t = term_b_12;
  t = echo_0_0(t);
  t = term_w_10;
  q_25 = t;
  t = term_x_10;
  r_25 = t;
  t = term_c_12;
  t = j_4(q_25, r_25, t);
  t = reverse_acc_2_0(_id, l_4, t);
  t = map_1_0(o_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
  a_26 = t;
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_26;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_12 = ATgetFirst((ATermList) t);
                ATerm h_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_26;
          }
        LocalPopChoice(e_12);
      }
    else
      {
        t = d_12;
        t = (ATerm) ATinsert(ATempty, a_26);
      }
  }
  b_26 = t;
  t = term_c_8;
  c_26 = t;
  t = SSL_printnl(c_26, b_26);
  t = a_26;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL;
  t = term_j_9;
  g_26 = t;
  t = term_h_11;
  h_26 = t;
  t = term_i_11;
  t = j_4(g_26, h_26, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL;
  t = term_i_12;
  i_26 = t;
  t = term_r_1;
  j_26 = t;
  t = term_k_12;
  t = m_4(i_26, j_26, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_l_12;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL;
  t = term_i_12;
  m_26 = t;
  t = term_r_1;
  n_26 = t;
  t = term_k_12;
  t = m_4(m_26, n_26, t);
  t = term_m_12;
  k_26 = t;
  t = term_r_1;
  l_26 = t;
  t = term_n_12;
  t = m_4(k_26, l_26, t);
  t = term_o_12;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_p_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_4, q_4, s_4, t);
      LocalPopChoice(w_12);
    }
  else
    {
      t = t_12;
      t = Option_3_0(t_4, a_5, b_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_68 (ATerm), ATerm e_68 (ATerm), ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,d_6 = NULL;
  t_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_26 = ATgetFirst((ATermList) t);
      q_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_26);
  o_26 = t;
  t = p_26;
  t = d_68(t);
  r_26 = t;
  t = q_26;
  t = e_68(t);
  s_26 = t;
  t = (ATerm) ATinsert(CheckATermList(s_26), r_26);
  d_6 = t;
  t = SSLsetAnnotations(d_6, o_26);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_112 (ATerm), ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,d_27 = NULL,e_27 = NULL,s_6 = NULL;
  y_26 = t;
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_12;
        t = e_112(t);
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
      }
  }
  t = y_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_27 = ATgetFirst((ATermList) t);
      b_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_26);
  z_26 = t;
  t = term_h_11;
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_11, a_27);
  t = m_4(e_27, a_27, t);
  t = b_27;
  {
    static ATerm o_27 (ATerm t)
    {
      ATerm a_13 = t;
      int b_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_13 = t;
          int d_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_27 = NULL;
              h_27 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_27;
              LocalPopChoice(d_13);
            }
          else
            {
              t = c_13;
              t = e_112(t);
              t = Cons_2_0(_id, o_27, t);
            }
          LocalPopChoice(b_13);
        }
      else
        {
          t = a_13;
          {
            ATerm k_27 = NULL,l_27 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_27 = ATgetFirst((ATermList) t);
                l_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_27), (ATerm) ATmakeAppl(sym_Undefined_1, k_27));
          }
        }
      return(t);
    }
    t = o_27(t);
  }
  d_27 = t;
  t = (ATerm) ATinsert(CheckATermList(d_27), (ATerm) ATmakeAppl(sym_Program_1, a_27));
  s_6 = t;
  t = SSLsetAnnotations(s_6, z_26);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm a_28 = NULL;
  a_28 = t;
  if(match_string(t, "--help"))
    {
      t = a_28;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_28;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_28;
        }
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL;
  t = term_w_11;
  b_28 = t;
  t = term_r_1;
  c_28 = t;
  t = term_f_13;
  t = m_4(b_28, c_28, t);
  t = term_g_13;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_h_13;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_112 (ATerm), ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
  v_27 = t;
  t = term_w_10;
  x_27 = t;
  t = term_x_10;
  y_27 = t;
  t = (ATerm) ATempty;
  z_27 = t;
  t = SSL_table_put(x_27, y_27, z_27);
  t = v_27;
  {
    static ATerm c_5 (ATerm t)
    {
      ATerm i_13 = t;
      int j_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_112(t);
          LocalPopChoice(j_13);
        }
      else
        {
          t = i_13;
          {
            ATerm k_13 = t;
            int l_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_5, g_5, h_5, t);
                LocalPopChoice(l_13);
              }
            else
              {
                t = k_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_5, t);
  }
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_28 = NULL;
        u_28 = t;
        {
          ATerm o_13 = t;
          int r_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_10 = NULL;
              t = u_28;
              {
                ATerm s_13 = t;
                int u_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_10 = NULL,n_10 = NULL;
                    t = term_j_9;
                    m_10 = t;
                    t = term_w_11;
                    n_10 = t;
                    t = term_x_11;
                    t = j_4(m_10, n_10, t);
                    LocalPopChoice(u_13);
                  }
                else
                  {
                    t = s_13;
                    t = fetch_1_0(l_5, t);
                  }
              }
              t = u_28;
              t = default_system_usage_0_0(t);
              t = term_t_9;
              l_10 = t;
              t = SSL_exit(l_10);
              LocalPopChoice(r_13);
            }
          else
            {
              t = o_13;
              {
                ATerm s_10 = NULL,u_10 = NULL,v_10 = NULL;
                t = term_j_9;
                u_10 = t;
                t = term_i_12;
                v_10 = t;
                t = term_v_13;
                t = j_4(u_10, v_10, t);
                t = u_28;
                t = default_system_about_0_0(t);
                t = term_t_9;
                s_10 = t;
                t = SSL_exit(s_10);
              }
            }
        }
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        {
          ATerm w_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
              static ATerm o_5 (ATerm t)
              {
                ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL,i_8 = NULL;
                a_29 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_28 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_29);
                y_28 = t;
                t = z_28;
                if(((t_27 != NULL) && (t_27 != t)))
                  _fail(t);
                else
                  t_27 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_28);
                i_8 = t;
                t = SSLsetAnnotations(i_8, y_28);
                return(t);
              }
              t = fetch_1_0(o_5, t);
              t = term_e_6;
              w_28 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_27)), term_z_13);
              x_28 = t;
              t = SSL_printnl(w_28, x_28);
              t = (ATerm) ATmakeAppl(sym__2, term_e_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_27)), term_z_13));
              t = default_system_usage_0_0(t);
              t = term_h_6;
              v_28 = t;
              t = SSL_exit(v_28);
              LocalPopChoice(x_13);
            }
          else
            {
              t = w_13;
            }
        }
      }
  }
  u_27 = t;
  t = term_w_10;
  w_27 = t;
  t = SSL_table_destroy(w_27);
  t = u_27;
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL;
  t = parse_options_1_0(d_110, t);
  f_29 = t;
  t = term_a_14;
  i_29 = t;
  t = SSL_table_create(i_29);
  t = term_a_14;
  g_29 = t;
  t = term_b_14;
  h_29 = t;
  t = SSL_table_put(g_29, h_29, f_29);
  t = f_29;
  t = f_110(t);
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_110, t);
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        {
          ATerm h_14 = t;
          int i_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_110(t);
              t = report_success_0_0(t);
              LocalPopChoice(i_14);
            }
          else
            {
              t = h_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = if_verbose2_1_0(a_6, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL;
  t = term_j_14;
  j_29 = t;
  t = term_r_1;
  k_29 = t;
  t = term_k_14;
  t = m_4(j_29, k_29, t);
  t = term_l_14;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_m_14;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
  l_29 = t;
  t = term_j_9;
  p_29 = t;
  t = term_h_11;
  q_29 = t;
  t = term_i_11;
  t = j_4(p_29, q_29, t);
  m_29 = t;
  t = term_e_6;
  n_29 = t;
  t = (ATerm) ATinsert(ATempty, m_29);
  o_29 = t;
  t = SSL_printnl(n_29, o_29);
  t = l_29;
  return(t);
}
ATerm iowrap_3_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm t)
{
  static ATerm q_5 (ATerm t)
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_109(t);
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        {
          ATerm r_14 = t;
          int v_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(v_14);
            }
          else
            {
              t = r_14;
              {
                ATerm w_14 = t;
                int y_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(y_14);
                  }
                else
                  {
                    t = w_14;
                    {
                      ATerm z_14 = t;
                      int c_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(w_5, y_5, z_5, t);
                          LocalPopChoice(c_15);
                        }
                      else
                        {
                          t = z_14;
                          {
                            ATerm d_15 = t;
                            int e_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(e_15);
                              }
                            else
                              {
                                t = d_15;
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
  static ATerm u_5 (ATerm t)
  {
    ATerm r_29 = NULL,y_29 = NULL,z_29 = NULL;
    y_29 = t;
    {
      ATerm f_15 = t;
      int g_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm b_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_29 != NULL) && (r_29 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_29 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(b_6, t);
          LocalPopChoice(g_15);
        }
      else
        {
          t = f_15;
          t = term_i_15;
          r_29 = t;
        }
    }
    t = not_null(r_29);
    t = ReadFromFile_0_0(t);
    z_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_29, z_29);
    t = apply_strategy_1_0(m_109, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(q_5, o_109, t_5, u_5, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,k_10 = NULL;
  f_30 = t;
  if(match_cons(t, sym__2))
    {
      c_30 = ATgetArgument(t, 0);
      d_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_30);
  b_30 = t;
  t = d_30;
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_30 = NULL;
        t = sometd_1_0(RepairDefinition_0_0, t);
        g_30 = t;
        t = explanation_0_0(t);
        t = g_30;
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
      }
  }
  e_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_30, e_30);
  k_10 = t;
  t = SSLsetAnnotations(k_10, b_30);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(c_6, _fail, default_usage_0_0, t);
  return(t);
}

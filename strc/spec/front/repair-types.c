#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Path_2;
Symbol sym_VarDec_2;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
Symbol sym_FunType_2;
Symbol sym_ConstType_1;
Symbol sym_RDefT_4;
Symbol sym_RDef_3;
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
Symbol sym_Hashtable_1;
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
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_h_14;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_f_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_x_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_k_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_w_7;
ATerm term_t_7;
ATerm term_o_7;
ATerm term_l_7;
ATerm term_h_7;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_l_6;
ATerm term_j_6;
ATerm term_e_6;
ATerm term_c_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_c_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_1));
  term_c_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: argument '", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("' of ", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" '", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("' starts with constant type", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym__2, term_x_8, term_y_8);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__2, term_x_8, term_k_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym__2, term_y_8, term_u_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_9);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym__2, term_g_10, term_c_1);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym__2, term_u_11, term_c_1);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym__2, term_x_11, term_c_1);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym__2, term_k_12, term_c_1);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__3, term_u_10, term_v_10, (ATerm) ATempty);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__2, term_x_8, term_k_12);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_x_8, term_u_11);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_c_1);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm explanation_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm w_118 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm b_3 (ATerm m_2, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm a_4 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm x_22, ATerm v_22, ATerm u_22, ATerm w_22, ATerm t);
ATerm RepairVarDec_2_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm t);
ATerm map1_1_0 (ATerm h_118 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm RepairDefinition_0_0 (ATerm t);
ATerm sometd_1_0 (ATerm o_104 (ATerm), ATerm t);
static ATerm c_4 (ATerm g_32, ATerm h_32, ATerm t);
static ATerm d_4 (ATerm m_30, ATerm n_30, ATerm t);
static ATerm f_4 (ATerm o_110 (ATerm), ATerm h_225, ATerm s_30, ATerm t);
static ATerm e_4 (ATerm i_30, ATerm j_30, ATerm t);
static ATerm o_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm g_132 (ATerm), ATerm t);
static ATerm m_14 (ATerm x_13, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_4 (ATerm o_30, ATerm t);
static ATerm h_4 (ATerm t_69, ATerm u_69, ATerm t);
static ATerm i_4 (ATerm i_32, ATerm j_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm z_16 (ATerm y_14, ATerm t);
static ATerm d_17 (ATerm g_15, ATerm h_15, ATerm i_15, ATerm t);
static ATerm e_17 (ATerm w_15, ATerm y_15, ATerm z_15, ATerm t);
static ATerm j_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm p_118 (ATerm), ATerm t);
static ATerm o_4 (ATerm j_43, ATerm k_43, ATerm t);
ATerm if_verbose2_1_0 (ATerm g_112 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_4 (ATerm c_36, ATerm d_36, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_4 (ATerm q_41, ATerm r_41, ATerm p_41, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_4 (ATerm y_38, ATerm z_38, ATerm t);
ATerm foldr_2_0 (ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm f_112 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_4 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm t);
static ATerm t_4 (ATerm l_46, ATerm m_46, ATerm t);
ATerm lookup_table_0_1 (ATerm c_43, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_46, ATerm r_46, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm m_4 (ATerm n_46, ATerm o_46, ATerm t);
static ATerm n_4 (ATerm s_46, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_135 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm parse_options_3_0 (ATerm j_135 (ATerm), ATerm k_135 (ATerm), ATerm l_135 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm m_133 (ATerm), ATerm n_133 (ATerm), ATerm o_133 (ATerm), ATerm p_133 (ATerm), ATerm q_133 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm iowrap_3_0 (ATerm p_132 (ATerm), ATerm q_132 (ATerm), ATerm r_132 (ATerm), ATerm t);
static ATerm x_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,i_0 = NULL;
  a_0 = t;
  t = term_c_1;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_y_5;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_6), b_0), term_z_5);
  i_0 = t;
  t = SSL_printnl(e_0, i_0);
  t = term_c_6;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm explanation_0_0 (ATerm t)
{
  ATerm k_0 = NULL,n_0 = NULL;
  t = term_y_5;
  k_0 = t;
  t = (ATerm) ATinsert(ATempty, term_e_6);
  n_0 = t;
  t = SSL_printnl(k_0, n_0);
  t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATempty, term_e_6));
  return(t);
}
ATerm at_end_1_0 (ATerm w_118 (ATerm), ATerm t)
{
  static ATerm h_2 (ATerm t);
  static ATerm h_2 (ATerm t)
  {
    ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
    f_2 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_2 = ATgetFirst((ATermList) t);
        e_2 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_0 = NULL,z_0 = NULL,o_0 = NULL;
          t = SSLgetAnnotations(f_2);
          v_0 = t;
          t = e_2;
          t = h_2(t);
          z_0 = t;
          t = (ATerm) ATinsert(CheckATermList(z_0), d_2);
          o_0 = t;
          t = SSLsetAnnotations(o_0, v_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_2;
        t = w_118(t);
      }
    return(t);
  }
  t = h_2(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL,r_0 = NULL;
  p_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_0;
    }
  else
    {
      static ATerm m_0 (ATerm t);
      static ATerm m_0 (ATerm t)
      {
        t = not_null(r_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_0 = ATgetFirst((ATermList) t);
          if(((r_0 != NULL) && (r_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_0;
      t = at_end_1_0(m_0, t);
    }
  return(t);
}
static ATerm b_3 (ATerm m_2, ATerm t)
{
  ATerm n_2 = NULL;
  t = SSL_explode_term(m_2);
  if(match_cons(t, sym__2))
    {
      ATerm f_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      n_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_2;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_2 = NULL,u_2 = NULL,v_2 = NULL;
  v_2 = t;
  if(match_cons(t, sym__2))
    {
      p_2 = ATgetArgument(t, 0);
      u_2 = ATgetArgument(t, 1);
      {
        ATerm g_6 = t;
        int h_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_0 (ATerm t);
            static ATerm s_0 (ATerm t)
            {
              t = u_2;
              return(t);
            }
            t = p_2;
            t = at_end_1_0(s_0, t);
            LocalPopChoice(h_6);
          }
        else
          {
            t = g_6;
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
static ATerm a_4 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm x_22, ATerm v_22, ATerm u_22, ATerm w_22, ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,u_3 = NULL;
  f_3 = t;
  t = u_100(t);
  n_3 = t;
  t = f_3;
  t = v_100(t);
  o_3 = t;
  t = term_y_5;
  p_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_6), o_3), term_n_6), n_3), term_l_6), x_22), term_j_6);
  u_3 = t;
  t = SSL_printnl(p_3, u_3);
  t = (ATerm) ATmakeAppl(sym__2, u_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, v_22)));
  t = conc_0_0(t);
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_22, (ATerm) ATmakeAppl(sym_FunType_2, e_3, w_22));
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm t)
{
  ATerm v_3 = NULL,b_4 = NULL,u_4 = NULL,v_4 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      v_3 = ATgetArgument(t, 0);
      {
        ATerm p_6 = ATgetArgument(t, 1);
        if(match_cons(p_6, sym_FunType_2))
          {
            ATerm r_6 = ATgetArgument(p_6, 0);
            if(((ATgetType(r_6) == AT_LIST) && !(ATisEmpty(r_6))))
              {
                ATerm s_6 = ATgetFirst((ATermList) r_6);
                if(match_cons(s_6, sym_ConstType_1))
                  {
                    b_4 = ATgetArgument(s_6, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm u_6 = (ATerm) ATgetNext((ATermList) r_6);
                  u_4 = u_6;
                  if(((ATgetType(u_6) == AT_LIST) && !(ATisEmpty(u_6))))
                    {
                      ATerm v_6 = ATgetFirst((ATermList) u_6);
                      if(match_cons(v_6, sym_FunType_2))
                        {
                          ATerm a_7 = ATgetArgument(v_6, 0);
                          ATerm b_7 = ATgetArgument(v_6, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm z_6 = (ATerm) ATgetNext((ATermList) u_6);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            v_4 = ATgetArgument(p_6, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_4(u_100, v_100, v_3, b_4, u_4, v_4, t);
  return(t);
}
ATerm map1_1_0 (ATerm h_118 (ATerm), ATerm t)
{
  ATerm q_6 = NULL,x_6 = NULL,y_6 = NULL;
  q_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_6 = ATgetFirst((ATermList) t);
      y_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm c_7 = t;
    int d_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,p_1 = NULL,q_1 = NULL,u_1 = NULL,s_1 = NULL;
        t = SSLgetAnnotations(q_6);
        m_1 = t;
        t = x_6;
        t = h_118(t);
        p_1 = t;
        t = (ATerm) ATinsert(CheckATermList(y_6), p_1);
        s_1 = t;
        t = SSLsetAnnotations(s_1, m_1);
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
          ATerm e_7 = t;
          int f_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(h_118, t);
              LocalPopChoice(f_7);
            }
          else
            {
              t = e_7;
            }
        }
        l_1 = t;
        t = (ATerm) ATinsert(CheckATermList(l_1), j_1);
        u_1 = t;
        t = SSLsetAnnotations(u_1, i_1);
        LocalPopChoice(d_7);
      }
    else
      {
        t = c_7;
        {
          ATerm r_2 = NULL,w_2 = NULL,v_1 = NULL;
          t = SSLgetAnnotations(q_6);
          r_2 = t;
          t = y_6;
          t = map1_1_0(h_118, t);
          w_2 = t;
          t = (ATerm) ATinsert(CheckATermList(w_2), x_6);
          v_1 = t;
          t = SSLsetAnnotations(v_1, r_2);
        }
      }
  }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_h_7;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_h_7;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_l_7;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_l_7;
  return(t);
}
ATerm RepairDefinition_0_0 (ATerm t)
{
  ATerm g_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      i_7 = ATgetArgument(t, 0);
      j_7 = ATgetArgument(t, 1);
      k_7 = ATgetArgument(t, 2);
      g_7 = ATgetArgument(t, 3);
      {
        ATerm p_7 = NULL;
        t = j_7;
        {
          static ATerm t_0 (ATerm t);
          static ATerm t_0 (ATerm t)
          {
            static ATerm w_0 (ATerm t);
            static ATerm w_0 (ATerm t)
            {
              t = i_7;
              return(t);
            }
            t = RepairVarDec_2_0(u_0, w_0, t);
            return(t);
          }
          t = map1_1_0(t_0, t);
        }
        p_7 = t;
        t = (ATerm) ATmakeAppl(sym_RDefT_4, i_7, p_7, k_7, g_7);
      }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          i_7 = ATgetArgument(t, 0);
          j_7 = ATgetArgument(t, 1);
          k_7 = ATgetArgument(t, 2);
          {
            ATerm h_8 = NULL;
            t = j_7;
            {
              static ATerm x_0 (ATerm t);
              static ATerm x_0 (ATerm t)
              {
                static ATerm a_1 (ATerm t);
                static ATerm a_1 (ATerm t)
                {
                  t = i_7;
                  return(t);
                }
                t = RepairVarDec_2_0(y_0, a_1, t);
                return(t);
              }
              t = map1_1_0(x_0, t);
            }
            h_8 = t;
            t = (ATerm) ATmakeAppl(sym_RDef_3, i_7, h_8, k_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              i_7 = ATgetArgument(t, 0);
              j_7 = ATgetArgument(t, 1);
              k_7 = ATgetArgument(t, 2);
              g_7 = ATgetArgument(t, 3);
              {
                ATerm p_8 = NULL;
                t = j_7;
                {
                  static ATerm b_1 (ATerm t);
                  static ATerm b_1 (ATerm t)
                  {
                    static ATerm e_1 (ATerm t);
                    static ATerm e_1 (ATerm t)
                    {
                      t = i_7;
                      return(t);
                    }
                    t = RepairVarDec_2_0(d_1, e_1, t);
                    return(t);
                  }
                  t = map1_1_0(b_1, t);
                }
                p_8 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, i_7, p_8, k_7, g_7);
              }
            }
          else
            {
              ATerm g_9 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  i_7 = ATgetArgument(t, 0);
                  j_7 = ATgetArgument(t, 1);
                  k_7 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = j_7;
              {
                static ATerm f_1 (ATerm t);
                static ATerm f_1 (ATerm t)
                {
                  static ATerm h_1 (ATerm t);
                  static ATerm h_1 (ATerm t)
                  {
                    t = i_7;
                    return(t);
                  }
                  t = RepairVarDec_2_0(g_1, h_1, t);
                  return(t);
                }
                t = map1_1_0(f_1, t);
              }
              g_9 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_3, i_7, g_9, k_7);
            }
        }
    }
  return(t);
}
ATerm sometd_1_0 (ATerm o_104 (ATerm), ATerm t)
{
  static ATerm h_9 (ATerm t);
  static ATerm h_9 (ATerm t)
  {
    ATerm m_7 = t;
    int n_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_104(t);
        LocalPopChoice(n_7);
      }
    else
      {
        t = m_7;
        t = SRTS_some(h_9, t);
      }
    return(t);
  }
  t = h_9(t);
  return(t);
}
static ATerm c_4 (ATerm g_32, ATerm h_32, ATerm t)
{
  ATerm i_9 = NULL;
  t = SSL_fputc(g_32, h_32);
  i_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_9);
  return(t);
}
static ATerm d_4 (ATerm m_30, ATerm n_30, ATerm t)
{
  ATerm j_9 = NULL;
  t = SSL_write_term_to_stream_text(m_30, n_30);
  j_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_9);
  return(t);
}
static ATerm f_4 (ATerm o_110 (ATerm), ATerm h_225, ATerm s_30, ATerm t)
{
  ATerm l_9 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_225, term_o_7);
  t = j_4(t);
  l_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_9, s_30);
  t = o_110(t);
  t = fclose_0_0(t);
  t = s_30;
  return(t);
}
static ATerm e_4 (ATerm i_30, ATerm j_30, ATerm t)
{
  ATerm o_9 = NULL;
  t = SSL_write_term_to_stream_baf(i_30, j_30);
  o_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_9);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_7 = ATgetArgument(t, 0);
      if(match_cons(q_7, sym_Stream_1))
        {
          s_3 = ATgetArgument(q_7, 0);
        }
      else
        _fail(t);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_4(s_3, t_3, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL,f_5 = NULL,g_5 = NULL,p_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_7 = ATgetArgument(t, 0);
      if(match_cons(r_7, sym_Stream_1))
        {
          g_5 = ATgetArgument(r_7, 0);
        }
      else
        _fail(t);
      p_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_4(g_5, p_5, t);
  a_5 = t;
  t = term_t_7;
  b_5 = t;
  t = a_5;
  if(match_cons(t, sym_Stream_1))
    {
      f_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_7, a_5);
  t = c_4(b_5, f_5, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm w_9 = NULL,y_9 = NULL,c_10 = NULL,e_10 = NULL,i_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,o_12 = NULL,p_12 = NULL,i_2 = NULL,b_2 = NULL;
  y_9 = t;
  if(match_cons(t, sym__2))
    {
      n_10 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_9);
  m_10 = t;
  t = n_10;
  {
    ATerm u_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_1 (ATerm t);
        static ATerm n_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((w_9 != NULL) && (w_9 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                w_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(n_1, t);
        LocalPopChoice(v_7);
      }
    else
      {
        t = u_7;
        t = term_w_7;
        w_9 = t;
      }
  }
  p_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_10, o_10);
  b_2 = t;
  t = SSLsetAnnotations(b_2, m_10);
  t = y_9;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      i_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_9);
  c_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_10, (ATerm) ATmakeAppl(sym__2, not_null(w_9), i_10));
  i_2 = t;
  t = SSLsetAnnotations(i_2, c_10);
  l_10 = t;
  if(match_cons(t, sym__2))
    {
      o_12 = ATgetArgument(t, 0);
      p_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_3 = NULL,l_3 = NULL,m_3 = NULL,q_3 = NULL,r_3 = NULL,c_5 = NULL;
        t = SSLgetAnnotations(l_10);
        i_3 = t;
        t = o_12;
        t = fetch_1_0(o_1, t);
        l_3 = t;
        t = p_12;
        if(match_cons(t, sym__2))
          {
            q_3 = ATgetArgument(t, 0);
            r_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_4(r_1, q_3, r_3, t);
        m_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_3, m_3);
        c_5 = t;
        t = SSLsetAnnotations(c_5, i_3);
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
        {
          ATerm l_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,d_5 = NULL;
          t = SSLgetAnnotations(l_10);
          l_4 = t;
          t = p_12;
          if(match_cons(t, sym__2))
            {
              y_4 = ATgetArgument(t, 0);
              z_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_4(t_1, y_4, z_4, t);
          x_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_12, x_4);
          d_5 = t;
          t = SSLsetAnnotations(d_5, l_4);
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
ATerm apply_strategy_1_0 (ATerm g_132 (ATerm), ATerm t)
{
  ATerm u_12 = NULL,w_12 = NULL,h_13 = NULL,k_13 = NULL,l_13 = NULL;
  l_13 = t;
  t = dtime_0_0(t);
  t = l_13;
  t = g_132(t);
  k_13 = t;
  t = dtime_0_0(t);
  u_12 = t;
  t = k_13;
  if(match_cons(t, sym__2))
    {
      w_12 = ATgetArgument(t, 0);
      h_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_12), (ATerm) ATmakeAppl(sym_Runtime_1, u_12)), h_13);
  return(t);
}
static ATerm m_14 (ATerm x_13, ATerm t)
{
  t = SSL_fclose(x_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_14 = NULL,j_14 = NULL;
  j_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_14 = ATgetArgument(t, 0);
      {
        ATerm a_8 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_14);
            LocalPopChoice(b_8);
          }
        else
          {
            t = a_8;
            t = m_14(j_14, t);
          }
      }
    }
  else
    {
      t = m_14(j_14, t);
    }
  return(t);
}
static ATerm g_4 (ATerm o_30, ATerm t)
{
  t = SSL_read_term_from_stream(o_30);
  return(t);
}
static ATerm h_4 (ATerm t_69, ATerm u_69, ATerm t)
{
  t = SSL_strcat(t_69, u_69);
  return(t);
}
static ATerm i_4 (ATerm i_32, ATerm j_32, ATerm t)
{
  ATerm n_14 = NULL;
  t = SSL_fopen(i_32, j_32);
  n_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_14 = NULL;
  t = SSL_stdin_stream();
  o_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_14 = NULL;
  t = SSL_stdout_stream();
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_14 = NULL;
  t = SSL_stderr_stream();
  s_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_14);
  return(t);
}
static ATerm z_16 (ATerm y_14, ATerm t)
{
  ATerm z_14 = NULL;
  t = SSL_explode_term(y_14);
  if(match_cons(t, sym__2))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_8 = ATgetArgument(t, 1);
        if(((ATgetType(f_8) == AT_LIST) && !(ATisEmpty(f_8))))
          {
            z_14 = ATgetFirst((ATermList) f_8);
            {
              ATerm g_8 = (ATerm) ATgetNext((ATermList) f_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_14;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_14;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_17 (ATerm g_15, ATerm h_15, ATerm i_15, ATerm t)
{
  ATerm j_15 = NULL,m_15 = NULL,n_15 = NULL,s_15 = NULL,k_5 = NULL;
  t = SSLgetAnnotations(i_15);
  n_15 = t;
  t = g_15;
  if(match_cons(t, sym_Path_1))
    {
      s_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_15, h_15);
  k_5 = t;
  t = SSLsetAnnotations(k_5, n_15);
  if(match_cons(t, sym__2))
    {
      j_15 = ATgetArgument(t, 0);
      m_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(j_15, m_15, t);
  return(t);
}
static ATerm e_17 (ATerm w_15, ATerm y_15, ATerm z_15, ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,f_16 = NULL,m_16 = NULL,l_5 = NULL;
  t = SSLgetAnnotations(z_15);
  f_16 = t;
  t = SSL_is_string(w_15);
  m_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_16, y_15);
  l_5 = t;
  t = SSLsetAnnotations(l_5, f_16);
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(a_16, b_16, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,y_16 = NULL;
  s_16 = t;
  if(match_cons(t, sym__2))
    {
      t_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
      {
        ATerm i_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_16(s_16, t);
            LocalPopChoice(j_8);
          }
        else
          {
            t = i_8;
            {
              ATerm m_8 = t;
              int n_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_17(t_16, y_16, s_16, t);
                  LocalPopChoice(n_8);
                }
              else
                {
                  t = m_8;
                  t = e_17(t_16, y_16, s_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_16(s_16, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_17 = NULL,j_17 = NULL,k_17 = NULL,s_17 = NULL;
  s_17 = t;
  {
    ATerm o_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_17, term_r_8);
        t = j_4(t);
        LocalPopChoice(q_8);
      }
    else
      {
        t = o_8;
        {
          ATerm i_6 = NULL,m_6 = NULL;
          t = term_s_8;
          m_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_8, s_17);
          t = h_4(m_6, s_17, t);
          i_6 = t;
          t = SSL_perror(i_6);
          _fail(t);
        }
      }
  }
  j_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_4(k_17, t);
  g_17 = t;
  t = j_17;
  t = fclose_0_0(t);
  t = g_17;
  return(t);
}
ATerm fetch_1_0 (ATerm p_118 (ATerm), ATerm t)
{
  static ATerm b_19 (ATerm t);
  static ATerm b_19 (ATerm t)
  {
    ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
    w_18 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_18 = ATgetFirst((ATermList) t);
        y_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_6 = NULL,w_6 = NULL,o_5 = NULL;
          t = SSLgetAnnotations(w_18);
          t_6 = t;
          t = x_18;
          t = p_118(t);
          w_6 = t;
          t = (ATerm) ATinsert(CheckATermList(y_18), w_6);
          o_5 = t;
          t = SSLsetAnnotations(o_5, t_6);
          LocalPopChoice(u_8);
        }
      else
        {
          t = t_8;
          {
            ATerm s_7 = NULL,x_7 = NULL,r_5 = NULL;
            t = SSLgetAnnotations(w_18);
            s_7 = t;
            t = y_18;
            t = b_19(t);
            x_7 = t;
            t = (ATerm) ATinsert(CheckATermList(x_7), x_18);
            r_5 = t;
            t = SSLsetAnnotations(r_5, s_7);
          }
        }
    }
    return(t);
  }
  t = b_19(t);
  return(t);
}
static ATerm o_4 (ATerm j_43, ATerm k_43, ATerm t)
{
  ATerm g_19 = NULL;
  t = lookup_table_0_1(j_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_4(k_43, g_19, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_112 (ATerm), ATerm t)
{
  ATerm n_19 = NULL;
  n_19 = t;
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_19 = NULL,s_19 = NULL,t_19 = NULL;
        t = term_x_8;
        s_19 = t;
        t = term_y_8;
        t_19 = t;
        t = term_z_8;
        t = o_4(s_19, t_19, t);
        p_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_19, term_a_9);
        t = geq_0_0(t);
        t = n_19;
        t = g_112(t);
        LocalPopChoice(w_8);
      }
    else
      {
        t = v_8;
        t = n_19;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
  x_19 = t;
  {
    ATerm c_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_19;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_9 = ATgetFirst((ATermList) t);
                ATerm f_9 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_19;
          }
        LocalPopChoice(d_9);
      }
    else
      {
        t = c_9;
        t = (ATerm) ATinsert(ATempty, x_19);
      }
  }
  y_19 = t;
  t = term_w_7;
  z_19 = t;
  t = SSL_printnl(z_19, y_19);
  t = x_19;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL;
  t = term_x_8;
  d_20 = t;
  t = term_k_9;
  e_20 = t;
  t = term_n_9;
  t = o_4(d_20, e_20, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm g_20 = NULL;
  g_20 = t;
  if(match_string(t, "-k"))
    {
      t = g_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_20;
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL;
  i_20 = t;
  t = SSL_string_to_int(i_20);
  j_20 = t;
  t = term_p_9;
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_9, j_20);
  t = r_4(k_20, j_20, t);
  t = i_20;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_q_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_1, x_1, y_1, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm m_20 = NULL;
  m_20 = t;
  if(match_string(t, "-S"))
    {
      t = m_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_20;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL;
  t = term_y_8;
  n_20 = t;
  t = term_u_9;
  o_20 = t;
  t = term_v_9;
  t = r_4(n_20, o_20, t);
  t = term_x_9;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_d_10;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
  p_20 = t;
  t = SSL_string_to_int(p_20);
  q_20 = t;
  t = term_y_8;
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_8, q_20);
  t = r_4(r_20, q_20, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_20);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_f_10;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL;
  t = term_g_10;
  s_20 = t;
  t = term_c_1;
  t_20 = t;
  t = term_h_10;
  t = r_4(s_20, t_20, t);
  t = term_j_10;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_1, a_2, c_2, t);
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        ATerm s_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_2, j_2, k_2, t);
            LocalPopChoice(t_10);
          }
        else
          {
            t = s_10;
            t = Option_3_0(l_2, o_2, q_2, t);
          }
      }
    }
  return(t);
}
static ATerm r_4 (ATerm c_36, ATerm d_36, ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL;
  t = term_x_8;
  u_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_8, c_36, d_36);
  t = lookup_table_0_1(u_20, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_4(c_36, d_36, v_20, t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_8, c_36, d_36);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
      t = term_c_1;
      t = g_0(t);
      b_21 = t;
      t = term_u_10;
      c_21 = t;
      t = term_v_10;
      d_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_10, term_v_10, b_21);
      t = p_4(c_21, d_21, b_21, t);
      _fail(t);
    }
  else
    {
      ATerm g_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_20 = ATgetFirst((ATermList) t);
          a_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_20;
      t = d_0(t);
      t = term_c_1;
      t = f_0(t);
      g_21 = t;
      t = (ATerm) ATinsert(CheckATermList(a_21), g_21);
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm i_21 = NULL;
  i_21 = t;
  if(match_string(t, "-o"))
    {
      t = i_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_21;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL;
  j_21 = t;
  t = term_w_10;
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_10, j_21);
  t = r_4(k_21, j_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_21);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_x_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, t_2, x_2, t);
  return(t);
}
static ATerm p_4 (ATerm q_41, ATerm r_41, ATerm p_41, ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_41, r_41);
  {
    ATerm y_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_11 = ATgetArgument(t, 0);
            ATerm b_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_41, r_41);
        t = o_4(q_41, r_41, t);
        LocalPopChoice(z_10);
      }
    else
      {
        t = y_10;
        t = (ATerm) ATempty;
      }
  }
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_41, r_41, (ATerm) ATinsert(CheckATermList(n_21), p_41));
  t = lookup_table_0_1(q_41, t);
  q_21 = t;
  t = (ATerm) ATinsert(CheckATermList(n_21), p_41);
  o_21 = t;
  t = q_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_4(r_41, o_21, p_21, t);
  t = m_21;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_22 = NULL,y_22 = NULL,z_22 = NULL;
      t = term_c_1;
      t = l_0(t);
      b_22 = t;
      t = term_u_10;
      y_22 = t;
      t = term_v_10;
      z_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_10, term_v_10, b_22);
      t = p_4(y_22, z_22, b_22, t);
      _fail(t);
    }
  else
    {
      ATerm d_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_21 = ATgetFirst((ATermList) t);
          y_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_21 = ATgetFirst((ATermList) t);
          a_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_21;
      t = h_0(t);
      t = z_21;
      t = j_0(t);
      d_23 = t;
      t = (ATerm) ATinsert(CheckATermList(a_22), d_23);
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm f_23 = NULL;
  f_23 = t;
  if(match_string(t, "-i"))
    {
      t = f_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_23;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL;
  g_23 = t;
  t = term_c_11;
  h_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_11, g_23);
  t = r_4(h_23, g_23, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_23);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_d_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, z_2, a_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_1;
  t = whoami_0_0(t);
  i_23 = t;
  t = term_y_5;
  k_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_11), i_23);
  l_23 = t;
  t = SSL_printnl(k_23, l_23);
  t = term_c_6;
  j_23 = t;
  t = SSL_exit(j_23);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL;
  t = term_x_8;
  m_23 = t;
  t = term_k_9;
  n_23 = t;
  t = term_n_9;
  t = o_4(m_23, n_23, t);
  return(t);
}
static ATerm k_4 (ATerm y_38, ATerm z_38, ATerm t)
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_38, z_38);
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      t = SSL_addr(y_38, z_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
  p_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_23;
      t = c_124(t);
    }
  else
    {
      ATerm u_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_23 = ATgetFirst((ATermList) t);
          r_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_23;
      t = foldr_2_0(c_124, d_124, t);
      u_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_23, u_23);
      t = d_124(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_u_9;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL;
  if(match_cons(t, sym__2))
    {
      k_8 = ATgetArgument(t, 0);
      l_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_4(k_8, l_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_23 = NULL,d_8 = NULL,e_8 = NULL;
  t = times_0_0(t);
  e_8 = t;
  t = SSL_explode_term(e_8);
  if(match_cons(t, sym__2))
    {
      ATerm h_11 = ATgetArgument(t, 0);
      d_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_8;
  t = foldr_2_0(c_3, d_3, t);
  x_23 = t;
  t = SSL_TicksToSeconds(x_23);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL;
  i_24 = t;
  if(match_cons(t, sym__2))
    {
      j_24 = ATgetArgument(t, 0);
      k_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_24;
        if((j_24 != t))
          {
            _fail(t);
          }
        t = i_24;
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        t = (ATerm) ATmakeAppl(sym__2, j_24, k_24);
        {
          ATerm k_11 = t;
          int l_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_24, k_24);
              LocalPopChoice(l_11);
            }
          else
            {
              t = k_11;
              t = SSL_gtr(j_24, k_24);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_24, k_24);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_112 (ATerm), ATerm t)
{
  ATerm o_24 = NULL;
  o_24 = t;
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
        t = term_x_8;
        r_24 = t;
        t = term_y_8;
        s_24 = t;
        t = term_z_8;
        t = o_4(r_24, s_24, t);
        q_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_24, term_c_6);
        t = geq_0_0(t);
        t = o_24;
        t = f_112(t);
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        t = o_24;
      }
  }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,x_24 = NULL,y_24 = NULL;
  t = run_time_0_0(t);
  u_24 = t;
  t = term_c_1;
  t = whoami_0_0(t);
  v_24 = t;
  t = term_y_5;
  x_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_11), u_24), term_o_11), v_24);
  y_24 = t;
  t = SSL_printnl(x_24, y_24);
  t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_11), u_24), term_o_11), v_24));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_24 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_9;
  z_24 = t;
  t = SSL_exit(z_24);
  return(t);
}
static ATerm s_4 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm t)
{
  ATerm a_25 = NULL;
  t = SSL_hashtable_put(k_46, i_46, j_46);
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_25);
  return(t);
}
static ATerm t_4 (ATerm l_46, ATerm m_46, ATerm t)
{
  t = SSL_hashtable_get(m_46, l_46);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_43, ATerm t)
{
  ATerm j_25 = NULL;
  t = table_hashtable_0_0(t);
  j_25 = t;
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_9 = NULL;
        t = j_25;
        if(match_cons(t, sym_Hashtable_1))
          {
            b_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_4(c_43, b_9, t);
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        {
          ATerm m_9 = NULL;
          t = c_43;
          t = table_create_0_0(t);
          t = j_25;
          if(match_cons(t, sym_Hashtable_1))
            {
              m_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_4(c_43, m_9, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_46, ATerm r_46, ATerm t)
{
  ATerm m_25 = NULL;
  t = SSL_hashtable_create(q_46, r_46);
  m_25 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_25);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,r_25 = NULL,s_25 = NULL;
  n_25 = t;
  t = term_s_11;
  r_25 = t;
  t = term_t_11;
  s_25 = t;
  t = n_25;
  t = new_hashtable_0_2(r_25, s_25, t);
  o_25 = t;
  t = n_25;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_4(n_25, o_25, p_25, t);
  t = n_25;
  return(t);
}
static ATerm m_4 (ATerm n_46, ATerm o_46, ATerm t)
{
  ATerm t_25 = NULL;
  t = SSL_hashtable_remove(o_46, n_46);
  t_25 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_25);
  return(t);
}
static ATerm n_4 (ATerm s_46, ATerm t)
{
  ATerm u_25 = NULL;
  t = SSL_hashtable_destroy(s_46);
  u_25 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_25);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm v_25 = NULL;
  t = SSL_table_hashtable();
  v_25 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_25);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
  w_25 = t;
  t = table_hashtable_0_0(t);
  x_25 = t;
  t = lookup_table_0_1(w_25, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_4(z_25, t);
  t = x_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_4(w_25, y_25, t);
  t = w_25;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL;
  t = term_u_11;
  a_26 = t;
  t = term_c_1;
  b_26 = t;
  t = term_v_11;
  t = r_4(a_26, b_26, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_w_11;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL;
  t = term_u_11;
  e_26 = t;
  t = term_c_1;
  f_26 = t;
  t = term_v_11;
  t = r_4(e_26, f_26, t);
  t = term_x_11;
  c_26 = t;
  t = term_c_1;
  d_26 = t;
  t = term_y_11;
  t = r_4(c_26, d_26, t);
  t = term_z_11;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_a_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, j_3, k_3, t);
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      t = Option_3_0(w_3, x_3, y_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,w_5 = NULL;
  l_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_26 = ATgetFirst((ATermList) t);
      i_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_26);
  g_26 = t;
  t = h_26;
  t = d_88(t);
  j_26 = t;
  t = i_26;
  t = e_88(t);
  k_26 = t;
  t = (ATerm) ATinsert(CheckATermList(k_26), j_26);
  w_5 = t;
  t = SSLsetAnnotations(w_5, g_26);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_135 (ATerm), ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,v_26 = NULL,w_26 = NULL,b_6 = NULL;
  q_26 = t;
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_12;
        t = m_135(t);
        LocalPopChoice(e_12);
      }
    else
      {
        t = d_12;
      }
  }
  t = q_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_26 = ATgetFirst((ATermList) t);
      t_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_26);
  r_26 = t;
  t = term_k_9;
  w_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_9, s_26);
  t = r_4(w_26, s_26, t);
  t = t_26;
  {
    static ATerm g_27 (ATerm t);
    static ATerm g_27 (ATerm t)
    {
      ATerm g_12 = t;
      int h_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_12 = t;
          int j_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_26 = NULL;
              z_26 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_26;
              LocalPopChoice(j_12);
            }
          else
            {
              t = i_12;
              t = m_135(t);
              t = Cons_2_0(_id, g_27, t);
            }
          LocalPopChoice(h_12);
        }
      else
        {
          t = g_12;
          {
            ATerm c_27 = NULL,d_27 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_27 = ATgetFirst((ATermList) t);
                d_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_27), (ATerm) ATmakeAppl(sym_Undefined_1, c_27));
          }
        }
      return(t);
    }
    t = g_27(t);
  }
  v_26 = t;
  t = (ATerm) ATinsert(CheckATermList(v_26), (ATerm) ATmakeAppl(sym_Program_1, s_26));
  b_6 = t;
  t = SSLsetAnnotations(b_6, r_26);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm t_27 = NULL;
  t_27 = t;
  if(match_string(t, "--help"))
    {
      t = t_27;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_27;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_27;
        }
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL;
  t = term_k_12;
  u_27 = t;
  t = term_c_1;
  v_27 = t;
  t = term_l_12;
  t = r_4(u_27, v_27, t);
  t = term_m_12;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_n_12;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm j_135 (ATerm), ATerm k_135 (ATerm), ATerm l_135 (ATerm), ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
  n_27 = t;
  t = term_u_10;
  o_27 = t;
  t = term_q_12;
  t = lookup_table_0_1(o_27, t);
  s_27 = t;
  t = term_v_10;
  p_27 = t;
  t = (ATerm) ATempty;
  q_27 = t;
  t = s_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_4(p_27, q_27, r_27, t);
  t = n_27;
  {
    static ATerm z_3 (ATerm t);
    static ATerm z_3 (ATerm t)
    {
      ATerm r_12 = t;
      int s_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_135(t);
          LocalPopChoice(s_12);
        }
      else
        {
          t = r_12;
          {
            ATerm t_12 = t;
            int v_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_4, w_4, e_5, t);
                LocalPopChoice(v_12);
              }
            else
              {
                t = t_12;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_3, t);
  }
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_28 = NULL;
        g_28 = t;
        {
          ATerm z_12 = t;
          int a_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_9 = NULL;
              t = g_28;
              {
                ATerm b_13 = t;
                int c_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_9 = NULL,t_9 = NULL;
                    t = term_x_8;
                    s_9 = t;
                    t = term_k_12;
                    t_9 = t;
                    t = term_d_13;
                    t = o_4(s_9, t_9, t);
                    LocalPopChoice(c_13);
                  }
                else
                  {
                    t = b_13;
                    t = fetch_1_0(h_5, t);
                  }
              }
              t = g_28;
              t = k_135(t);
              t = term_u_9;
              r_9 = t;
              t = SSL_exit(r_9);
              LocalPopChoice(a_13);
            }
          else
            {
              t = z_12;
              {
                ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL;
                t = term_x_8;
                a_10 = t;
                t = term_u_11;
                b_10 = t;
                t = term_e_13;
                t = o_4(a_10, b_10, t);
                t = g_28;
                t = l_135(t);
                t = term_u_9;
                z_9 = t;
                t = SSL_exit(z_9);
              }
            }
        }
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        {
          ATerm f_13 = t;
          int g_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
              static ATerm i_5 (ATerm t);
              static ATerm i_5 (ATerm t)
              {
                ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL,d_6 = NULL;
                m_28 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_28 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_28);
                k_28 = t;
                t = l_28;
                if(((l_27 != NULL) && (l_27 != t)))
                  _fail(t);
                else
                  l_27 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_28);
                d_6 = t;
                t = SSLsetAnnotations(d_6, k_28);
                return(t);
              }
              t = fetch_1_0(i_5, t);
              t = term_y_5;
              i_28 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_27)), term_i_13);
              j_28 = t;
              t = SSL_printnl(i_28, j_28);
              t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_27)), term_i_13));
              t = k_135(t);
              t = term_c_6;
              h_28 = t;
              t = SSL_exit(h_28);
              LocalPopChoice(g_13);
            }
          else
            {
              t = f_13;
            }
        }
      }
  }
  m_27 = t;
  t = term_u_10;
  t = table_destroy_0_0(t);
  t = m_27;
  return(t);
}
ATerm option_wrap_5_0 (ATerm m_133 (ATerm), ATerm n_133 (ATerm), ATerm o_133 (ATerm), ATerm p_133 (ATerm), ATerm q_133 (ATerm), ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
  t = parse_options_3_0(m_133, n_133, o_133, t);
  r_28 = t;
  t = term_j_13;
  t = table_create_0_0(t);
  t = term_j_13;
  s_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_13, term_m_13, r_28);
  t = lookup_table_0_1(s_28, t);
  v_28 = t;
  t = term_m_13;
  t_28 = t;
  t = v_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_4(t_28, r_28, u_28, t);
  t = r_28;
  t = p_133(t);
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_133(t);
        t = report_success_0_0(t);
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = if_verbose2_1_0(u_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL;
  t = term_p_13;
  w_28 = t;
  t = term_c_1;
  x_28 = t;
  t = term_q_13;
  t = r_4(w_28, x_28, t);
  t = term_r_13;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
  y_28 = t;
  t = term_x_8;
  c_29 = t;
  t = term_k_9;
  d_29 = t;
  t = term_n_9;
  t = o_4(c_29, d_29, t);
  z_28 = t;
  t = term_y_5;
  a_29 = t;
  t = (ATerm) ATinsert(ATempty, z_28);
  b_29 = t;
  t = SSL_printnl(a_29, b_29);
  t = y_28;
  return(t);
}
ATerm iowrap_3_0 (ATerm p_132 (ATerm), ATerm q_132 (ATerm), ATerm r_132 (ATerm), ATerm t)
{
  static ATerm j_5 (ATerm t);
  static ATerm n_5 (ATerm t);
  static ATerm j_5 (ATerm t)
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_132(t);
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
        {
          ATerm v_13 = t;
          int w_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(w_13);
            }
          else
            {
              t = v_13;
              {
                ATerm y_13 = t;
                int z_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(z_13);
                  }
                else
                  {
                    t = y_13;
                    {
                      ATerm a_14 = t;
                      int b_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(q_5, s_5, t_5, t);
                          LocalPopChoice(b_14);
                        }
                      else
                        {
                          t = a_14;
                          {
                            ATerm c_14 = t;
                            int e_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(e_14);
                              }
                            else
                              {
                                t = c_14;
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
  static ATerm n_5 (ATerm t)
  {
    ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
    f_29 = t;
    {
      ATerm f_14 = t;
      int g_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm v_5 (ATerm t);
          static ATerm v_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((e_29 != NULL) && (e_29 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_29 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_5, t);
          LocalPopChoice(g_14);
        }
      else
        {
          t = f_14;
          t = term_h_14;
          e_29 = t;
        }
    }
    t = not_null(e_29);
    t = ReadFromFile_0_0(t);
    g_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_29, g_29);
    t = apply_strategy_1_0(p_132, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(j_5, r_132, default_system_about_0_0, m_5, n_5, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,k_6 = NULL;
  m_29 = t;
  if(match_cons(t, sym__2))
    {
      j_29 = ATgetArgument(t, 0);
      k_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_29);
  i_29 = t;
  t = k_29;
  {
    ATerm i_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_29 = NULL;
        t = sometd_1_0(RepairDefinition_0_0, t);
        n_29 = t;
        t = explanation_0_0(t);
        t = n_29;
        LocalPopChoice(k_14);
      }
    else
      {
        t = i_14;
      }
  }
  l_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_29, l_29);
  k_6 = t;
  t = SSLsetAnnotations(k_6, i_29);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(x_5, _fail, default_usage_0_0, t);
  return(t);
}

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
ATerm term_n_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_u_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_m_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_k_9;
ATerm term_g_9;
ATerm term_d_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_t_7;
ATerm term_r_7;
ATerm term_j_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_v_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_c_6;
ATerm term_a_4;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_r_6);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym__2, term_y_6, term_z_6);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: argument '", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("' of ", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" '", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("' starts with constant type", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_m_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_e_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_11);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_a_4);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym__2, term_b_13, term_a_4);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_h_13, term_a_4);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_a_4);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym__3, term_y_6, term_z_6, (ATerm) ATempty);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_z_13);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_b_13);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym__2, term_x_14, term_a_4);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm map_1_0 (ATerm z_119 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm m_137 (ATerm), ATerm n_137 (ATerm), ATerm t);
static ATerm n_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm explanation_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm q_120 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm w_6 (ATerm x_5, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm i_4 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm z_22, ATerm x_22, ATerm w_22, ATerm y_22, ATerm t);
ATerm RepairVarDec_2_0 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm t);
ATerm map1_1_0 (ATerm b_120 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm RepairDefinition_0_0 (ATerm t);
ATerm sometd_1_0 (ATerm i_105 (ATerm), ATerm t);
static ATerm k_4 (ATerm i_32, ATerm j_32, ATerm t);
static ATerm l_4 (ATerm o_30, ATerm p_30, ATerm t);
static ATerm n_4 (ATerm i_111 (ATerm), ATerm x_227, ATerm u_30, ATerm t);
static ATerm m_4 (ATerm k_30, ATerm l_30, ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm b_134 (ATerm), ATerm t);
static ATerm d_17 (ATerm o_16, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_4 (ATerm q_30, ATerm t);
static ATerm p_4 (ATerm z_68, ATerm a_69, ATerm t);
static ATerm q_4 (ATerm k_32, ATerm l_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm c_20 (ATerm c_18, ATerm t);
static ATerm f_20 (ATerm k_18, ATerm m_18, ATerm n_18, ATerm t);
static ATerm g_20 (ATerm d_19, ATerm e_19, ATerm f_19, ATerm t);
static ATerm r_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm j_120 (ATerm), ATerm t);
static ATerm w_4 (ATerm l_43, ATerm m_43, ATerm t);
ATerm if_verbose2_1_0 (ATerm a_113 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_4 (ATerm e_36, ATerm f_36, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_4 (ATerm s_41, ATerm t_41, ATerm r_41, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm s_4 (ATerm a_39, ATerm b_39, ATerm t);
ATerm foldr_2_0 (ATerm w_125 (ATerm), ATerm x_125 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm z_112 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_5 (ATerm d_46, ATerm e_46, ATerm f_46, ATerm t);
static ATerm b_5 (ATerm g_46, ATerm h_46, ATerm t);
ATerm lookup_table_0_1 (ATerm e_43, ATerm t);
ATerm new_hashtable_0_2 (ATerm l_46, ATerm m_46, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm u_4 (ATerm i_46, ATerm j_46, ATerm t);
static ATerm v_4 (ATerm n_46, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm x_88 (ATerm), ATerm y_88 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm h_137 (ATerm), ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm parse_options_3_0 (ATerm e_137 (ATerm), ATerm f_137 (ATerm), ATerm g_137 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm h_135 (ATerm), ATerm i_135 (ATerm), ATerm j_135 (ATerm), ATerm k_135 (ATerm), ATerm l_135 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm iowrap_3_0 (ATerm k_134 (ATerm), ATerm l_134 (ATerm), ATerm m_134 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm map_1_0 (ATerm z_119 (ATerm), ATerm t)
{
  static ATerm x_0 (ATerm t);
  static ATerm x_0 (ATerm t)
  {
    ATerm u_0 = NULL,v_0 = NULL,w_0 = NULL;
    u_0 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_0;
      }
    else
      {
        ATerm z_0 = NULL,c_1 = NULL,d_1 = NULL,c_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_0 = ATgetFirst((ATermList) t);
            w_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_0);
        z_0 = t;
        t = v_0;
        t = z_119(t);
        c_1 = t;
        t = w_0;
        t = x_0(t);
        d_1 = t;
        t = (ATerm) ATinsert(CheckATermList(d_1), c_1);
        c_0 = t;
        t = SSLsetAnnotations(c_0, z_0);
      }
    return(t);
  }
  t = x_0(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm t_1 = NULL,x_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_1 = ATgetFirst((ATermList) t);
      x_1 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_2 = NULL,d_2 = NULL;
        static ATerm a_0 (ATerm t);
        static ATerm a_0 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_2)), not_null(d_2));
          return(t);
        }
        t = x_1;
        t = o_0(t);
        if(((c_2 != NULL) && (c_2 != t)))
          _fail(t);
        else
          c_2 = t;
        t = t_1;
        t = m_0(t);
        if(((d_2 != NULL) && (d_2 != t)))
          _fail(t);
        else
          d_2 = t;
        t = x_1;
        t = reverse_acc_2_0(m_0, a_0, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_4;
      t = o_0(t);
    }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm n_2 = NULL,p_2 = NULL,q_2 = NULL,i_0 = NULL;
  q_2 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_2);
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_2);
  i_0 = t;
  t = SSLsetAnnotations(i_0, n_2);
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm v_2 = NULL;
  v_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_2), term_c_6);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm m_137 (ATerm), ATerm n_137 (ATerm), ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL;
  ATerm d_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_2 = NULL,m_2 = NULL;
      t = term_q_6;
      l_2 = t;
      t = term_r_6;
      m_2 = t;
      t = term_s_6;
      t = w_4(l_2, m_2, t);
      LocalPopChoice(o_6);
    }
  else
    {
      t = d_6;
      t = fetch_1_0(b_0, t);
    }
  {
    ATerm t_6 = t;
    int u_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_137(t);
        t = echo_0_0(t);
        LocalPopChoice(u_6);
      }
    else
      {
        t = t_6;
      }
  }
  t = term_v_6;
  t = echo_0_0(t);
  t = term_y_6;
  j_2 = t;
  t = term_z_6;
  k_2 = t;
  t = term_a_7;
  t = w_4(j_2, k_2, t);
  t = reverse_acc_2_0(_id, e_0, t);
  t = map_1_0(k_0, t);
  {
    ATerm c_7 = t;
    int d_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_2 = NULL;
        t = n_137(t);
        w_2 = t;
        t = (ATerm) ATinsert(CheckATermList(w_2), term_j_7);
        t = echo_0_0(t);
        LocalPopChoice(d_7);
      }
    else
      {
        t = c_7;
      }
  }
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,m_3 = NULL,p_0 = NULL;
  m_3 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_3);
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_3);
  p_0 = t;
  t = SSLsetAnnotations(p_0, i_3);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_3 = NULL;
  c_3 = t;
  {
    ATerm k_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_3 = NULL,h_3 = NULL;
        t = term_q_6;
        d_3 = t;
        t = term_r_6;
        h_3 = t;
        t = term_s_6;
        t = w_4(d_3, h_3, t);
        LocalPopChoice(q_7);
      }
    else
      {
        t = k_7;
        t = fetch_1_0(n_0, t);
      }
  }
  t = c_3;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
ATerm explanation_0_0 (ATerm t)
{
  ATerm n_3 = NULL,p_3 = NULL;
  t = term_r_7;
  n_3 = t;
  t = (ATerm) ATinsert(ATempty, term_t_7);
  p_3 = t;
  t = SSL_printnl(n_3, p_3);
  t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATempty, term_t_7));
  return(t);
}
ATerm at_end_1_0 (ATerm q_120 (ATerm), ATerm t)
{
  static ATerm r_5 (ATerm t);
  static ATerm r_5 (ATerm t)
  {
    ATerm m_5 = NULL,p_5 = NULL,q_5 = NULL;
    q_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_5 = ATgetFirst((ATermList) t);
        p_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_1 = NULL,o_1 = NULL,r_0 = NULL;
          t = SSLgetAnnotations(q_5);
          l_1 = t;
          t = p_5;
          t = r_5(t);
          o_1 = t;
          t = (ATerm) ATinsert(CheckATermList(o_1), m_5);
          r_0 = t;
          t = SSLsetAnnotations(r_0, l_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_5;
        t = q_120(t);
      }
    return(t);
  }
  t = r_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_3 = NULL,u_3 = NULL,v_3 = NULL;
  r_3 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_3;
    }
  else
    {
      static ATerm q_0 (ATerm t);
      static ATerm q_0 (ATerm t)
      {
        t = not_null(v_3);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_3 = ATgetFirst((ATermList) t);
          if(((v_3 != NULL) && (v_3 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_3 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_3;
      t = at_end_1_0(q_0, t);
    }
  return(t);
}
static ATerm w_6 (ATerm x_5, ATerm t)
{
  ATerm b_6 = NULL;
  t = SSL_explode_term(x_5);
  if(match_cons(t, sym__2))
    {
      ATerm u_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_6 = NULL,m_6 = NULL,n_6 = NULL;
  n_6 = t;
  if(match_cons(t, sym__2))
    {
      g_6 = ATgetArgument(t, 0);
      m_6 = ATgetArgument(t, 1);
      {
        ATerm w_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_0 (ATerm t);
            static ATerm s_0 (ATerm t)
            {
              t = m_6;
              return(t);
            }
            t = g_6;
            t = at_end_1_0(s_0, t);
            LocalPopChoice(x_7);
          }
        else
          {
            t = w_7;
            t = w_6(n_6, t);
          }
      }
    }
  else
    {
      t = w_6(n_6, t);
    }
  return(t);
}
static ATerm i_4 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm z_22, ATerm x_22, ATerm w_22, ATerm y_22, ATerm t)
{
  ATerm x_6 = NULL,b_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,l_7 = NULL;
  b_7 = t;
  t = o_101(t);
  f_7 = t;
  t = b_7;
  t = p_101(t);
  g_7 = t;
  t = term_r_7;
  h_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_8), g_7), term_a_8), f_7), term_z_7), z_22), term_y_7);
  l_7 = t;
  t = SSL_printnl(h_7, l_7);
  t = (ATerm) ATmakeAppl(sym__2, w_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, x_22)));
  t = conc_0_0(t);
  x_6 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_22, (ATerm) ATmakeAppl(sym_FunType_2, x_6, y_22));
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      m_7 = ATgetArgument(t, 0);
      {
        ATerm c_8 = ATgetArgument(t, 1);
        if(match_cons(c_8, sym_FunType_2))
          {
            ATerm d_8 = ATgetArgument(c_8, 0);
            if(((ATgetType(d_8) == AT_LIST) && !(ATisEmpty(d_8))))
              {
                ATerm g_8 = ATgetFirst((ATermList) d_8);
                if(match_cons(g_8, sym_ConstType_1))
                  {
                    n_7 = ATgetArgument(g_8, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm h_8 = (ATerm) ATgetNext((ATermList) d_8);
                  o_7 = h_8;
                  if(((ATgetType(h_8) == AT_LIST) && !(ATisEmpty(h_8))))
                    {
                      ATerm i_8 = ATgetFirst((ATermList) h_8);
                      if(match_cons(i_8, sym_FunType_2))
                        {
                          ATerm l_8 = ATgetArgument(i_8, 0);
                          ATerm m_8 = ATgetArgument(i_8, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm j_8 = (ATerm) ATgetNext((ATermList) h_8);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            p_7 = ATgetArgument(c_8, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_4(o_101, p_101, m_7, n_7, o_7, p_7, t);
  return(t);
}
ATerm map1_1_0 (ATerm b_120 (ATerm), ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,h_10 = NULL;
  e_10 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_10 = ATgetFirst((ATermList) t);
      h_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,s_2 = NULL,z_2 = NULL,y_0 = NULL,t_0 = NULL;
        t = SSLgetAnnotations(e_10);
        h_2 = t;
        t = f_10;
        t = b_120(t);
        s_2 = t;
        t = (ATerm) ATinsert(CheckATermList(h_10), s_2);
        t_0 = t;
        t = SSLsetAnnotations(t_0, h_2);
        z_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_2 = ATgetFirst((ATermList) t);
            f_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_2);
        b_2 = t;
        t = f_2;
        {
          ATerm q_8 = t;
          int r_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(b_120, t);
              LocalPopChoice(r_8);
            }
          else
            {
              t = q_8;
            }
        }
        g_2 = t;
        t = (ATerm) ATinsert(CheckATermList(g_2), e_2);
        y_0 = t;
        t = SSLsetAnnotations(y_0, b_2);
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        {
          ATerm s_3 = NULL,z_3 = NULL,j_4 = NULL;
          t = SSLgetAnnotations(e_10);
          s_3 = t;
          t = h_10;
          t = map1_1_0(b_120, t);
          z_3 = t;
          t = (ATerm) ATinsert(CheckATermList(z_3), f_10);
          j_4 = t;
          t = SSLsetAnnotations(j_4, s_3);
        }
      }
  }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_w_8;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_w_8;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_x_8;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_x_8;
  return(t);
}
ATerm RepairDefinition_0_0 (ATerm t)
{
  ATerm r_10 = NULL,u_10 = NULL,y_10 = NULL,a_11 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      u_10 = ATgetArgument(t, 0);
      y_10 = ATgetArgument(t, 1);
      a_11 = ATgetArgument(t, 2);
      r_10 = ATgetArgument(t, 3);
      {
        ATerm i_11 = NULL;
        t = y_10;
        {
          static ATerm a_1 (ATerm t);
          static ATerm a_1 (ATerm t)
          {
            static ATerm e_1 (ATerm t);
            static ATerm e_1 (ATerm t)
            {
              t = u_10;
              return(t);
            }
            t = RepairVarDec_2_0(b_1, e_1, t);
            return(t);
          }
          t = map1_1_0(a_1, t);
        }
        i_11 = t;
        t = (ATerm) ATmakeAppl(sym_RDefT_4, u_10, i_11, a_11, r_10);
      }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          u_10 = ATgetArgument(t, 0);
          y_10 = ATgetArgument(t, 1);
          a_11 = ATgetArgument(t, 2);
          {
            ATerm m_11 = NULL;
            t = y_10;
            {
              static ATerm f_1 (ATerm t);
              static ATerm f_1 (ATerm t)
              {
                static ATerm h_1 (ATerm t);
                static ATerm h_1 (ATerm t)
                {
                  t = u_10;
                  return(t);
                }
                t = RepairVarDec_2_0(g_1, h_1, t);
                return(t);
              }
              t = map1_1_0(f_1, t);
            }
            m_11 = t;
            t = (ATerm) ATmakeAppl(sym_RDef_3, u_10, m_11, a_11);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              u_10 = ATgetArgument(t, 0);
              y_10 = ATgetArgument(t, 1);
              a_11 = ATgetArgument(t, 2);
              r_10 = ATgetArgument(t, 3);
              {
                ATerm v_11 = NULL;
                t = y_10;
                {
                  static ATerm i_1 (ATerm t);
                  static ATerm i_1 (ATerm t)
                  {
                    static ATerm k_1 (ATerm t);
                    static ATerm k_1 (ATerm t)
                    {
                      t = u_10;
                      return(t);
                    }
                    t = RepairVarDec_2_0(j_1, k_1, t);
                    return(t);
                  }
                  t = map1_1_0(i_1, t);
                }
                v_11 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, u_10, v_11, a_11, r_10);
              }
            }
          else
            {
              ATerm g_12 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  u_10 = ATgetArgument(t, 0);
                  y_10 = ATgetArgument(t, 1);
                  a_11 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = y_10;
              {
                static ATerm m_1 (ATerm t);
                static ATerm m_1 (ATerm t)
                {
                  static ATerm p_1 (ATerm t);
                  static ATerm p_1 (ATerm t)
                  {
                    t = u_10;
                    return(t);
                  }
                  t = RepairVarDec_2_0(n_1, p_1, t);
                  return(t);
                }
                t = map1_1_0(m_1, t);
              }
              g_12 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_3, u_10, g_12, a_11);
            }
        }
    }
  return(t);
}
ATerm sometd_1_0 (ATerm i_105 (ATerm), ATerm t)
{
  static ATerm l_12 (ATerm t);
  static ATerm l_12 (ATerm t)
  {
    ATerm b_9 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_105(t);
        LocalPopChoice(c_9);
      }
    else
      {
        t = b_9;
        t = SRTS_some(l_12, t);
      }
    return(t);
  }
  t = l_12(t);
  return(t);
}
static ATerm k_4 (ATerm i_32, ATerm j_32, ATerm t)
{
  ATerm m_12 = NULL;
  t = SSL_fputc(i_32, j_32);
  m_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_12);
  return(t);
}
static ATerm l_4 (ATerm o_30, ATerm p_30, ATerm t)
{
  ATerm n_12 = NULL;
  t = SSL_write_term_to_stream_text(o_30, p_30);
  n_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_12);
  return(t);
}
static ATerm n_4 (ATerm i_111 (ATerm), ATerm x_227, ATerm u_30, ATerm t)
{
  ATerm o_12 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_227, term_d_9);
  t = r_4(t);
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_12, u_30);
  t = i_111(t);
  t = fclose_0_0(t);
  t = u_30;
  return(t);
}
static ATerm m_4 (ATerm k_30, ATerm l_30, ATerm t)
{
  ATerm p_12 = NULL;
  t = SSL_write_term_to_stream_baf(k_30, l_30);
  p_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_12);
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
  ATerm o_5 = NULL,t_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_9 = ATgetArgument(t, 0);
      if(match_cons(e_9, sym_Stream_1))
        {
          o_5 = ATgetArgument(e_9, 0);
        }
      else
        _fail(t);
      t_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(o_5, t_5, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL,p_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_9 = ATgetArgument(t, 0);
      if(match_cons(f_9, sym_Stream_1))
        {
          l_6 = ATgetArgument(f_9, 0);
        }
      else
        _fail(t);
      p_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_4(l_6, p_6, t);
  i_6 = t;
  t = term_g_9;
  j_6 = t;
  t = i_6;
  if(match_cons(t, sym_Stream_1))
    {
      k_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_9, i_6);
  t = k_4(j_6, k_6, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,q_15 = NULL,r_15 = NULL,h_5 = NULL,g_5 = NULL;
  z_12 = t;
  if(match_cons(t, sym__2))
    {
      l_13 = ATgetArgument(t, 0);
      m_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_12);
  k_13 = t;
  t = l_13;
  {
    ATerm h_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_1 (ATerm t);
        static ATerm q_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((y_12 != NULL) && (y_12 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(q_1, t);
        LocalPopChoice(j_9);
      }
    else
      {
        t = h_9;
        t = term_k_9;
        y_12 = t;
      }
  }
  n_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_13, m_13);
  g_5 = t;
  t = SSLsetAnnotations(g_5, k_13);
  t = z_12;
  if(match_cons(t, sym__2))
    {
      d_13 = ATgetArgument(t, 0);
      e_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_12);
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_13, (ATerm) ATmakeAppl(sym__2, not_null(y_12), e_13));
  h_5 = t;
  t = SSLsetAnnotations(h_5, c_13);
  j_13 = t;
  if(match_cons(t, sym__2))
    {
      q_15 = ATgetArgument(t, 0);
      r_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_4 = NULL,f_5 = NULL,j_5 = NULL,k_5 = NULL,n_5 = NULL,i_5 = NULL;
        t = SSLgetAnnotations(j_13);
        h_4 = t;
        t = q_15;
        t = fetch_1_0(r_1, t);
        f_5 = t;
        t = r_15;
        if(match_cons(t, sym__2))
          {
            k_5 = ATgetArgument(t, 0);
            n_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_4(s_1, k_5, n_5, t);
        j_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_5, j_5);
        i_5 = t;
        t = SSLsetAnnotations(i_5, h_4);
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
        {
          ATerm z_5 = NULL,e_6 = NULL,f_6 = NULL,h_6 = NULL,l_5 = NULL;
          t = SSLgetAnnotations(j_13);
          z_5 = t;
          t = r_15;
          if(match_cons(t, sym__2))
            {
              f_6 = ATgetArgument(t, 0);
              h_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_4(u_1, f_6, h_6, t);
          e_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_15, e_6);
          l_5 = t;
          t = SSLsetAnnotations(l_5, z_5);
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
ATerm apply_strategy_1_0 (ATerm b_134 (ATerm), ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,z_15 = NULL,c_16 = NULL;
  c_16 = t;
  t = dtime_0_0(t);
  t = c_16;
  t = b_134(t);
  z_15 = t;
  t = dtime_0_0(t);
  u_15 = t;
  t = z_15;
  if(match_cons(t, sym__2))
    {
      v_15 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_15), (ATerm) ATmakeAppl(sym_Runtime_1, u_15)), w_15);
  return(t);
}
static ATerm d_17 (ATerm o_16, ATerm t)
{
  t = SSL_fclose(o_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_16 = NULL,b_17 = NULL;
  b_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_16 = ATgetArgument(t, 0);
      {
        ATerm o_9 = t;
        int q_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_16);
            LocalPopChoice(q_9);
          }
        else
          {
            t = o_9;
            t = d_17(b_17, t);
          }
      }
    }
  else
    {
      t = d_17(b_17, t);
    }
  return(t);
}
static ATerm o_4 (ATerm q_30, ATerm t)
{
  t = SSL_read_term_from_stream(q_30);
  return(t);
}
static ATerm p_4 (ATerm z_68, ATerm a_69, ATerm t)
{
  t = SSL_strcat(z_68, a_69);
  return(t);
}
static ATerm q_4 (ATerm k_32, ATerm l_32, ATerm t)
{
  ATerm i_17 = NULL;
  t = SSL_fopen(k_32, l_32);
  i_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_17);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_17 = NULL;
  t = SSL_stdin_stream();
  o_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_17 = NULL;
  t = SSL_stdout_stream();
  p_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_17 = NULL;
  t = SSL_stderr_stream();
  s_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_17);
  return(t);
}
static ATerm c_20 (ATerm c_18, ATerm t)
{
  ATerm f_18 = NULL;
  t = SSL_explode_term(c_18);
  if(match_cons(t, sym__2))
    {
      ATerm s_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_9 = ATgetArgument(t, 1);
        if(((ATgetType(t_9) == AT_LIST) && !(ATisEmpty(t_9))))
          {
            f_18 = ATgetFirst((ATermList) t_9);
            {
              ATerm u_9 = (ATerm) ATgetNext((ATermList) t_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm f_20 (ATerm k_18, ATerm m_18, ATerm n_18, ATerm t)
{
  ATerm o_18 = NULL,q_18 = NULL,t_18 = NULL,b_19 = NULL,e_8 = NULL;
  t = SSLgetAnnotations(n_18);
  t_18 = t;
  t = k_18;
  if(match_cons(t, sym_Path_1))
    {
      b_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_19, m_18);
  e_8 = t;
  t = SSLsetAnnotations(e_8, t_18);
  if(match_cons(t, sym__2))
    {
      o_18 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4(o_18, q_18, t);
  return(t);
}
static ATerm g_20 (ATerm d_19, ATerm e_19, ATerm f_19, ATerm t)
{
  ATerm i_19 = NULL,k_19 = NULL,l_19 = NULL,t_19 = NULL,f_8 = NULL;
  t = SSLgetAnnotations(f_19);
  l_19 = t;
  t = SSL_is_string(d_19);
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_19, e_19);
  f_8 = t;
  t = SSLsetAnnotations(f_8, l_19);
  if(match_cons(t, sym__2))
    {
      i_19 = ATgetArgument(t, 0);
      k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4(i_19, k_19, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,b_20 = NULL;
  x_19 = t;
  if(match_cons(t, sym__2))
    {
      y_19 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_20(x_19, t);
            LocalPopChoice(w_9);
          }
        else
          {
            t = v_9;
            {
              ATerm y_9 = t;
              int z_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_20(y_19, b_20, x_19, t);
                  LocalPopChoice(z_9);
                }
              else
                {
                  t = y_9;
                  t = g_20(y_19, b_20, x_19, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_20(x_19, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL,o_20 = NULL,u_20 = NULL;
  u_20 = t;
  {
    ATerm a_10 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_20, term_c_10);
        t = r_4(t);
        LocalPopChoice(b_10);
      }
    else
      {
        t = a_10;
        {
          ATerm e_7 = NULL,i_7 = NULL;
          t = term_d_10;
          i_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_10, u_20);
          t = p_4(i_7, u_20, t);
          e_7 = t;
          t = SSL_perror(e_7);
          _fail(t);
        }
      }
  }
  l_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_4(o_20, t);
  k_20 = t;
  t = l_20;
  t = fclose_0_0(t);
  t = k_20;
  return(t);
}
ATerm fetch_1_0 (ATerm j_120 (ATerm), ATerm t)
{
  static ATerm u_21 (ATerm t);
  static ATerm u_21 (ATerm t)
  {
    ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
    r_21 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_21 = ATgetFirst((ATermList) t);
        t_21 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_10 = t;
      int i_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_7 = NULL,v_7 = NULL,t_8 = NULL;
          t = SSLgetAnnotations(r_21);
          s_7 = t;
          t = s_21;
          t = j_120(t);
          v_7 = t;
          t = (ATerm) ATinsert(CheckATermList(t_21), v_7);
          t_8 = t;
          t = SSLsetAnnotations(t_8, s_7);
          LocalPopChoice(i_10);
        }
      else
        {
          t = g_10;
          {
            ATerm k_8 = NULL,n_8 = NULL,v_8 = NULL;
            t = SSLgetAnnotations(r_21);
            k_8 = t;
            t = t_21;
            t = u_21(t);
            n_8 = t;
            t = (ATerm) ATinsert(CheckATermList(n_8), s_21);
            v_8 = t;
            t = SSLsetAnnotations(v_8, k_8);
          }
        }
    }
    return(t);
  }
  t = u_21(t);
  return(t);
}
static ATerm w_4 (ATerm l_43, ATerm m_43, ATerm t)
{
  ATerm x_21 = NULL;
  t = lookup_table_0_1(l_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_5(m_43, x_21, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_113 (ATerm), ATerm t)
{
  ATerm a_22 = NULL;
  a_22 = t;
  {
    ATerm j_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_22 = NULL,a_23 = NULL,b_23 = NULL;
        t = term_q_6;
        a_23 = t;
        t = term_m_10;
        b_23 = t;
        t = term_p_10;
        t = w_4(a_23, b_23, t);
        c_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_22, term_q_10);
        t = geq_0_0(t);
        t = a_22;
        t = a_113(t);
        LocalPopChoice(k_10);
      }
    else
      {
        t = j_10;
        t = a_22;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
  e_23 = t;
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_23;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_10 = ATgetFirst((ATermList) t);
                ATerm b_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_23;
          }
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
        t = (ATerm) ATinsert(ATempty, e_23);
      }
  }
  f_23 = t;
  t = term_k_9;
  g_23 = t;
  t = SSL_printnl(g_23, f_23);
  t = e_23;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL;
  t = term_q_6;
  k_23 = t;
  t = term_r_6;
  l_23 = t;
  t = term_s_6;
  t = w_4(k_23, l_23, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm n_23 = NULL;
  n_23 = t;
  if(match_string(t, "-k"))
    {
      t = n_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_23;
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
  o_23 = t;
  t = SSL_string_to_int(o_23);
  p_23 = t;
  t = term_c_11;
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_11, p_23);
  t = z_4(q_23, p_23, t);
  t = o_23;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_d_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_1, w_1, y_1, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm s_23 = NULL;
  s_23 = t;
  if(match_string(t, "-S"))
    {
      t = s_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_23;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL;
  t = term_m_10;
  t_23 = t;
  t = term_e_11;
  u_23 = t;
  t = term_f_11;
  t = z_4(t_23, u_23, t);
  t = term_g_11;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_h_11;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
  v_23 = t;
  t = SSL_string_to_int(v_23);
  w_23 = t;
  t = term_m_10;
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, w_23);
  t = z_4(x_23, w_23, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_23);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_j_11;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL;
  t = term_k_11;
  y_23 = t;
  t = term_a_4;
  z_23 = t;
  t = term_l_11;
  t = z_4(y_23, z_23, t);
  t = term_n_11;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_1, a_2, i_2, t);
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_2, r_2, t_2, t);
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            t = Option_3_0(u_2, x_2, y_2, t);
          }
      }
    }
  return(t);
}
static ATerm z_4 (ATerm e_36, ATerm f_36, ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL;
  t = term_q_6;
  a_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_6, e_36, f_36);
  t = lookup_table_0_1(a_24, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(e_36, f_36, b_24, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_6, e_36, f_36);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
      t = term_a_4;
      t = g_0(t);
      h_24 = t;
      t = term_y_6;
      i_24 = t;
      t = term_z_6;
      j_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_6, term_z_6, h_24);
      t = x_4(i_24, j_24, h_24, t);
      _fail(t);
    }
  else
    {
      ATerm m_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_24 = ATgetFirst((ATermList) t);
          g_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_24;
      t = d_0(t);
      t = term_a_4;
      t = f_0(t);
      m_24 = t;
      t = (ATerm) ATinsert(CheckATermList(g_24), m_24);
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm o_24 = NULL;
  o_24 = t;
  if(match_string(t, "-o"))
    {
      t = o_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_24;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL;
  p_24 = t;
  t = term_t_11;
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_11, p_24);
  t = z_4(q_24, p_24, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_24);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_u_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, b_3, e_3, t);
  return(t);
}
static ATerm x_4 (ATerm s_41, ATerm t_41, ATerm r_41, ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL;
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_41, t_41);
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_11 = ATgetArgument(t, 0);
            ATerm z_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_41, t_41);
        t = w_4(s_41, t_41, t);
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = (ATerm) ATempty;
      }
  }
  t_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_41, t_41, (ATerm) ATinsert(CheckATermList(t_24), r_41));
  t = lookup_table_0_1(s_41, t);
  w_24 = t;
  t = (ATerm) ATinsert(CheckATermList(t_24), r_41);
  u_24 = t;
  t = w_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(t_41, u_24, v_24, t);
  t = s_24;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
      t = term_a_4;
      t = l_0(t);
      h_25 = t;
      t = term_y_6;
      i_25 = t;
      t = term_z_6;
      j_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_6, term_z_6, h_25);
      t = x_4(i_25, j_25, h_25, t);
      _fail(t);
    }
  else
    {
      ATerm n_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_25 = ATgetFirst((ATermList) t);
          e_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_25 = ATgetFirst((ATermList) t);
          g_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_25;
      t = h_0(t);
      t = f_25;
      t = j_0(t);
      n_25 = t;
      t = (ATerm) ATinsert(CheckATermList(g_25), n_25);
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm p_25 = NULL;
  p_25 = t;
  if(match_string(t, "-i"))
    {
      t = p_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_25;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL;
  q_25 = t;
  t = term_a_12;
  r_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_12, q_25);
  t = z_4(r_25, q_25, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_25);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_b_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_3, g_3, k_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_4;
  t = whoami_0_0(t);
  s_25 = t;
  t = term_r_7;
  u_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_12), s_25);
  v_25 = t;
  t = SSL_printnl(u_25, v_25);
  t = term_d_12;
  t_25 = t;
  t = SSL_exit(t_25);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL;
  t = term_q_6;
  w_25 = t;
  t = term_r_6;
  x_25 = t;
  t = term_s_6;
  t = w_4(w_25, x_25, t);
  return(t);
}
static ATerm s_4 (ATerm a_39, ATerm b_39, ATerm t)
{
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_39, b_39);
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
      t = SSL_addr(a_39, b_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_125 (ATerm), ATerm x_125 (ATerm), ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL;
  z_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_25;
      t = w_125(t);
    }
  else
    {
      ATerm e_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_26 = ATgetFirst((ATermList) t);
          b_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_26;
      t = foldr_2_0(w_125, x_125, t);
      e_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_26, e_26);
      t = x_125(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_e_11;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__2))
    {
      z_8 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(z_8, a_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_26 = NULL,s_8 = NULL,u_8 = NULL;
  t = times_0_0(t);
  u_8 = t;
  t = SSL_explode_term(u_8);
  if(match_cons(t, sym__2))
    {
      ATerm h_12 = ATgetArgument(t, 0);
      s_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_8;
  t = foldr_2_0(l_3, o_3, t);
  h_26 = t;
  t = SSL_TicksToSeconds(h_26);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
  s_26 = t;
  if(match_cons(t, sym__2))
    {
      t_26 = ATgetArgument(t, 0);
      u_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_26;
        if((t_26 != t))
          {
            _fail(t);
          }
        t = s_26;
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        t = (ATerm) ATmakeAppl(sym__2, t_26, u_26);
        {
          ATerm k_12 = t;
          int q_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_26, u_26);
              LocalPopChoice(q_12);
            }
          else
            {
              t = k_12;
              t = SSL_gtr(t_26, u_26);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_26, u_26);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_112 (ATerm), ATerm t)
{
  ATerm y_26 = NULL;
  y_26 = t;
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
        t = term_q_6;
        b_27 = t;
        t = term_m_10;
        c_27 = t;
        t = term_p_10;
        t = w_4(b_27, c_27, t);
        a_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_27, term_d_12);
        t = geq_0_0(t);
        t = y_26;
        t = z_112(t);
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        t = y_26;
      }
  }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,h_27 = NULL,i_27 = NULL;
  t = run_time_0_0(t);
  e_27 = t;
  t = term_a_4;
  t = whoami_0_0(t);
  f_27 = t;
  t = term_r_7;
  h_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_12), e_27), term_t_12), f_27);
  i_27 = t;
  t = SSL_printnl(h_27, i_27);
  t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_12), e_27), term_t_12), f_27));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_11;
  j_27 = t;
  t = SSL_exit(j_27);
  return(t);
}
static ATerm a_5 (ATerm d_46, ATerm e_46, ATerm f_46, ATerm t)
{
  ATerm k_27 = NULL;
  t = SSL_hashtable_put(f_46, d_46, e_46);
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_27);
  return(t);
}
static ATerm b_5 (ATerm g_46, ATerm h_46, ATerm t)
{
  t = SSL_hashtable_get(h_46, g_46);
  return(t);
}
ATerm lookup_table_0_1 (ATerm e_43, ATerm t)
{
  ATerm t_27 = NULL;
  t = table_hashtable_0_0(t);
  t_27 = t;
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_9 = NULL;
        t = t_27;
        if(match_cons(t, sym_Hashtable_1))
          {
            p_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_5(e_43, p_9, t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        {
          ATerm x_9 = NULL;
          t = e_43;
          t = table_create_0_0(t);
          t = t_27;
          if(match_cons(t, sym_Hashtable_1))
            {
              x_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_5(e_43, x_9, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm l_46, ATerm m_46, ATerm t)
{
  ATerm w_27 = NULL;
  t = SSL_hashtable_create(l_46, m_46);
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_27);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,b_28 = NULL,c_28 = NULL;
  x_27 = t;
  t = term_x_12;
  b_28 = t;
  t = term_a_13;
  c_28 = t;
  t = x_27;
  t = new_hashtable_0_2(b_28, c_28, t);
  y_27 = t;
  t = x_27;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(x_27, y_27, z_27, t);
  t = x_27;
  return(t);
}
static ATerm u_4 (ATerm i_46, ATerm j_46, ATerm t)
{
  ATerm d_28 = NULL;
  t = SSL_hashtable_remove(j_46, i_46);
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_28);
  return(t);
}
static ATerm v_4 (ATerm n_46, ATerm t)
{
  ATerm e_28 = NULL;
  t = SSL_hashtable_destroy(n_46);
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_28);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm f_28 = NULL;
  t = SSL_table_hashtable();
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_28);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
  g_28 = t;
  t = table_hashtable_0_0(t);
  h_28 = t;
  t = lookup_table_0_1(g_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_4(j_28, t);
  t = h_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_4(g_28, i_28, t);
  t = g_28;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL;
  t = term_b_13;
  k_28 = t;
  t = term_a_4;
  l_28 = t;
  t = term_f_13;
  t = z_4(k_28, l_28, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_g_13;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
  t = term_b_13;
  o_28 = t;
  t = term_a_4;
  p_28 = t;
  t = term_f_13;
  t = z_4(o_28, p_28, t);
  t = term_h_13;
  m_28 = t;
  t = term_a_4;
  n_28 = t;
  t = term_i_13;
  t = z_4(m_28, n_28, t);
  t = term_o_13;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_p_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_3, w_3, x_3, t);
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      t = Option_3_0(y_3, b_4, c_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_88 (ATerm), ATerm y_88 (ATerm), ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,y_8 = NULL;
  v_28 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_28 = ATgetFirst((ATermList) t);
      s_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_28);
  q_28 = t;
  t = r_28;
  t = x_88(t);
  t_28 = t;
  t = s_28;
  t = y_88(t);
  u_28 = t;
  t = (ATerm) ATinsert(CheckATermList(u_28), t_28);
  y_8 = t;
  t = SSLsetAnnotations(y_8, q_28);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_137 (ATerm), ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,f_29 = NULL,g_29 = NULL,i_9 = NULL;
  a_29 = t;
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_13;
        t = h_137(t);
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
      }
  }
  t = a_29;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_29 = ATgetFirst((ATermList) t);
      d_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_29);
  b_29 = t;
  t = term_r_6;
  g_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_6, c_29);
  t = z_4(g_29, c_29, t);
  t = d_29;
  {
    static ATerm q_29 (ATerm t);
    static ATerm q_29 (ATerm t)
    {
      ATerm v_13 = t;
      int w_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_29 = NULL;
              j_29 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_29;
              LocalPopChoice(y_13);
            }
          else
            {
              t = x_13;
              t = h_137(t);
              t = Cons_2_0(_id, q_29, t);
            }
          LocalPopChoice(w_13);
        }
      else
        {
          t = v_13;
          {
            ATerm m_29 = NULL,n_29 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_29 = ATgetFirst((ATermList) t);
                n_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_29), (ATerm) ATmakeAppl(sym_Undefined_1, m_29));
          }
        }
      return(t);
    }
    t = q_29(t);
  }
  f_29 = t;
  t = (ATerm) ATinsert(CheckATermList(f_29), (ATerm) ATmakeAppl(sym_Program_1, c_29));
  i_9 = t;
  t = SSLsetAnnotations(i_9, b_29);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm d_30 = NULL;
  d_30 = t;
  if(match_string(t, "--help"))
    {
      t = d_30;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_30;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_30;
        }
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL;
  t = term_z_13;
  e_30 = t;
  t = term_a_4;
  f_30 = t;
  t = term_a_14;
  t = z_4(e_30, f_30, t);
  t = term_b_14;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_c_14;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm e_137 (ATerm), ATerm f_137 (ATerm), ATerm g_137 (ATerm), ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL;
  x_29 = t;
  t = term_y_6;
  y_29 = t;
  t = term_d_14;
  t = lookup_table_0_1(y_29, t);
  c_30 = t;
  t = term_z_6;
  z_29 = t;
  t = (ATerm) ATempty;
  a_30 = t;
  t = c_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(z_29, a_30, b_30, t);
  t = x_29;
  {
    static ATerm d_4 (ATerm t);
    static ATerm d_4 (ATerm t)
    {
      ATerm e_14 = t;
      int f_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_137(t);
          LocalPopChoice(f_14);
        }
      else
        {
          t = e_14;
          {
            ATerm g_14 = t;
            int h_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(e_4, f_4, g_4, t);
                LocalPopChoice(h_14);
              }
            else
              {
                t = g_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_4, t);
  }
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_30 = NULL;
        x_30 = t;
        {
          ATerm k_14 = t;
          int l_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_10 = NULL;
              t = x_30;
              {
                ATerm m_14 = t;
                int n_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_10 = NULL,o_10 = NULL;
                    t = term_q_6;
                    n_10 = t;
                    t = term_z_13;
                    o_10 = t;
                    t = term_o_14;
                    t = w_4(n_10, o_10, t);
                    LocalPopChoice(n_14);
                  }
                else
                  {
                    t = m_14;
                    t = fetch_1_0(t_4, t);
                  }
              }
              t = x_30;
              t = f_137(t);
              t = term_e_11;
              l_10 = t;
              t = SSL_exit(l_10);
              LocalPopChoice(l_14);
            }
          else
            {
              t = k_14;
              {
                ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
                t = term_q_6;
                w_10 = t;
                t = term_b_13;
                x_10 = t;
                t = term_p_14;
                t = w_4(w_10, x_10, t);
                t = x_30;
                t = g_137(t);
                t = term_e_11;
                v_10 = t;
                t = SSL_exit(v_10);
              }
            }
        }
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
        {
          ATerm q_14 = t;
          int r_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL;
              static ATerm y_4 (ATerm t);
              static ATerm y_4 (ATerm t)
              {
                ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL,l_9 = NULL;
                d_31 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_31 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_31);
                b_31 = t;
                t = c_31;
                if(((v_29 != NULL) && (v_29 != t)))
                  _fail(t);
                else
                  v_29 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_31);
                l_9 = t;
                t = SSLsetAnnotations(l_9, b_31);
                return(t);
              }
              t = fetch_1_0(y_4, t);
              t = term_r_7;
              z_30 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_29)), term_s_14);
              a_31 = t;
              t = SSL_printnl(z_30, a_31);
              t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_29)), term_s_14));
              t = f_137(t);
              t = term_d_12;
              y_30 = t;
              t = SSL_exit(y_30);
              LocalPopChoice(r_14);
            }
          else
            {
              t = q_14;
            }
        }
      }
  }
  w_29 = t;
  t = term_y_6;
  t = table_destroy_0_0(t);
  t = w_29;
  return(t);
}
ATerm option_wrap_5_0 (ATerm h_135 (ATerm), ATerm i_135 (ATerm), ATerm j_135 (ATerm), ATerm k_135 (ATerm), ATerm l_135 (ATerm), ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL;
  t = parse_options_3_0(h_135, i_135, j_135, t);
  i_31 = t;
  t = term_t_14;
  t = table_create_0_0(t);
  t = term_t_14;
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_14, term_u_14, i_31);
  t = lookup_table_0_1(j_31, t);
  m_31 = t;
  t = term_u_14;
  k_31 = t;
  t = m_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(k_31, i_31, l_31, t);
  t = i_31;
  t = k_135(t);
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_135(t);
        t = report_success_0_0(t);
        LocalPopChoice(w_14);
      }
    else
      {
        t = v_14;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = if_verbose2_1_0(w_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL;
  t = term_x_14;
  n_31 = t;
  t = term_a_4;
  o_31 = t;
  t = term_y_14;
  t = z_4(n_31, o_31, t);
  t = term_z_14;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_a_15;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL;
  p_31 = t;
  t = term_q_6;
  t_31 = t;
  t = term_r_6;
  u_31 = t;
  t = term_s_6;
  t = w_4(t_31, u_31, t);
  q_31 = t;
  t = term_r_7;
  r_31 = t;
  t = (ATerm) ATinsert(ATempty, q_31);
  s_31 = t;
  t = SSL_printnl(r_31, s_31);
  t = p_31;
  return(t);
}
ATerm iowrap_3_0 (ATerm k_134 (ATerm), ATerm l_134 (ATerm), ATerm m_134 (ATerm), ATerm t)
{
  static ATerm c_5 (ATerm t);
  static ATerm e_5 (ATerm t);
  static ATerm c_5 (ATerm t)
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_134(t);
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
              t = input_option_0_0(t);
              LocalPopChoice(e_15);
            }
          else
            {
              t = d_15;
              {
                ATerm f_15 = t;
                int g_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(g_15);
                  }
                else
                  {
                    t = f_15;
                    {
                      ATerm h_15 = t;
                      int i_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(s_5, u_5, v_5, t);
                          LocalPopChoice(i_15);
                        }
                      else
                        {
                          t = h_15;
                          {
                            ATerm j_15 = t;
                            int k_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(k_15);
                              }
                            else
                              {
                                t = j_15;
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
  static ATerm e_5 (ATerm t)
  {
    ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
    w_31 = t;
    {
      ATerm l_15 = t;
      int m_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm y_5 (ATerm t);
          static ATerm y_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((v_31 != NULL) && (v_31 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  v_31 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_5, t);
          LocalPopChoice(m_15);
        }
      else
        {
          t = l_15;
          t = term_n_15;
          v_31 = t;
        }
    }
    t = not_null(v_31);
    t = ReadFromFile_0_0(t);
    x_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_31, x_31);
    t = apply_strategy_1_0(k_134, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(c_5, m_134, default_system_about_0_0, d_5, e_5, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,r_9 = NULL;
  d_32 = t;
  if(match_cons(t, sym__2))
    {
      a_32 = ATgetArgument(t, 0);
      b_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_32);
  z_31 = t;
  t = b_32;
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_32 = NULL;
        t = sometd_1_0(RepairDefinition_0_0, t);
        e_32 = t;
        t = explanation_0_0(t);
        t = e_32;
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
      }
  }
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_32, c_32);
  r_9 = t;
  t = SSLsetAnnotations(r_9, z_31);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(a_6, _fail, default_system_usage_0_0, t);
  return(t);
}

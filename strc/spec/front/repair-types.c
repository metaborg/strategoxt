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
ATerm map_1_0 (ATerm v_119 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm h_137 (ATerm), ATerm i_137 (ATerm), ATerm t);
static ATerm n_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm explanation_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm m_120 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm w_6 (ATerm x_5, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm i_4 (ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm x_22, ATerm v_22, ATerm u_22, ATerm w_22, ATerm t);
ATerm RepairVarDec_2_0 (ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm t);
ATerm map1_1_0 (ATerm x_119 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm RepairDefinition_0_0 (ATerm t);
ATerm sometd_1_0 (ATerm d_105 (ATerm), ATerm t);
static ATerm k_4 (ATerm g_32, ATerm h_32, ATerm t);
static ATerm l_4 (ATerm m_30, ATerm n_30, ATerm t);
static ATerm n_4 (ATerm d_111 (ATerm), ATerm v_227, ATerm s_30, ATerm t);
static ATerm m_4 (ATerm i_30, ATerm j_30, ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm w_133 (ATerm), ATerm t);
static ATerm d_17 (ATerm o_16, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_4 (ATerm o_30, ATerm t);
static ATerm p_4 (ATerm v_68, ATerm w_68, ATerm t);
static ATerm q_4 (ATerm i_32, ATerm j_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm c_20 (ATerm c_18, ATerm t);
static ATerm f_20 (ATerm k_18, ATerm m_18, ATerm n_18, ATerm t);
static ATerm g_20 (ATerm d_19, ATerm e_19, ATerm f_19, ATerm t);
static ATerm r_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_120 (ATerm), ATerm t);
static ATerm w_4 (ATerm j_43, ATerm k_43, ATerm t);
ATerm if_verbose2_1_0 (ATerm v_112 (ATerm), ATerm t);
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
static ATerm z_4 (ATerm c_36, ATerm d_36, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_4 (ATerm q_41, ATerm r_41, ATerm p_41, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm s_4 (ATerm y_38, ATerm z_38, ATerm t);
ATerm foldr_2_0 (ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm u_112 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_5 (ATerm b_46, ATerm c_46, ATerm d_46, ATerm t);
static ATerm b_5 (ATerm e_46, ATerm f_46, ATerm t);
ATerm lookup_table_0_1 (ATerm c_43, ATerm t);
ATerm new_hashtable_0_2 (ATerm j_46, ATerm k_46, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm u_4 (ATerm g_46, ATerm h_46, ATerm t);
static ATerm v_4 (ATerm l_46, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm c_137 (ATerm), ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm parse_options_3_0 (ATerm z_136 (ATerm), ATerm a_137 (ATerm), ATerm b_137 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm e_135 (ATerm), ATerm f_135 (ATerm), ATerm g_135 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm iowrap_3_0 (ATerm f_134 (ATerm), ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm map_1_0 (ATerm v_119 (ATerm), ATerm t)
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
        t = v_119(t);
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
ATerm default_system_usage_2_0 (ATerm h_137 (ATerm), ATerm i_137 (ATerm), ATerm t)
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
        t = h_137(t);
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
        t = i_137(t);
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
ATerm at_end_1_0 (ATerm m_120 (ATerm), ATerm t)
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
        t = m_120(t);
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
static ATerm i_4 (ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm x_22, ATerm v_22, ATerm u_22, ATerm w_22, ATerm t)
{
  ATerm x_6 = NULL,b_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,l_7 = NULL;
  b_7 = t;
  t = j_101(t);
  f_7 = t;
  t = b_7;
  t = k_101(t);
  g_7 = t;
  t = term_r_7;
  h_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_8), g_7), term_a_8), f_7), term_z_7), x_22), term_y_7);
  l_7 = t;
  t = SSL_printnl(h_7, l_7);
  t = (ATerm) ATmakeAppl(sym__2, u_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, v_22)));
  t = conc_0_0(t);
  x_6 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_22, (ATerm) ATmakeAppl(sym_FunType_2, x_6, w_22));
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm t)
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
  t = i_4(j_101, k_101, m_7, n_7, o_7, p_7, t);
  return(t);
}
ATerm map1_1_0 (ATerm x_119 (ATerm), ATerm t)
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
        t = x_119(t);
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
              t = map1_1_0(x_119, t);
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
          t = map1_1_0(x_119, t);
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
ATerm sometd_1_0 (ATerm d_105 (ATerm), ATerm t)
{
  static ATerm l_12 (ATerm t);
  static ATerm l_12 (ATerm t)
  {
    ATerm b_9 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_105(t);
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
static ATerm k_4 (ATerm g_32, ATerm h_32, ATerm t)
{
  ATerm m_12 = NULL;
  t = SSL_fputc(g_32, h_32);
  m_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_12);
  return(t);
}
static ATerm l_4 (ATerm m_30, ATerm n_30, ATerm t)
{
  ATerm n_12 = NULL;
  t = SSL_write_term_to_stream_text(m_30, n_30);
  n_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_12);
  return(t);
}
static ATerm n_4 (ATerm d_111 (ATerm), ATerm v_227, ATerm s_30, ATerm t)
{
  ATerm o_12 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_227, term_d_9);
  t = r_4(t);
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_12, s_30);
  t = d_111(t);
  t = fclose_0_0(t);
  t = s_30;
  return(t);
}
static ATerm m_4 (ATerm i_30, ATerm j_30, ATerm t)
{
  ATerm p_12 = NULL;
  t = SSL_write_term_to_stream_baf(i_30, j_30);
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
ATerm apply_strategy_1_0 (ATerm w_133 (ATerm), ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,z_15 = NULL,c_16 = NULL;
  c_16 = t;
  t = dtime_0_0(t);
  t = c_16;
  t = w_133(t);
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
static ATerm o_4 (ATerm o_30, ATerm t)
{
  t = SSL_read_term_from_stream(o_30);
  return(t);
}
static ATerm p_4 (ATerm v_68, ATerm w_68, ATerm t)
{
  t = SSL_strcat(v_68, w_68);
  return(t);
}
static ATerm q_4 (ATerm i_32, ATerm j_32, ATerm t)
{
  ATerm i_17 = NULL;
  t = SSL_fopen(i_32, j_32);
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
ATerm fetch_1_0 (ATerm f_120 (ATerm), ATerm t)
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
          t = f_120(t);
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
static ATerm w_4 (ATerm j_43, ATerm k_43, ATerm t)
{
  ATerm x_21 = NULL;
  t = lookup_table_0_1(j_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_5(k_43, x_21, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_112 (ATerm), ATerm t)
{
  ATerm a_22 = NULL;
  a_22 = t;
  {
    ATerm j_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
        t = term_q_6;
        z_22 = t;
        t = term_m_10;
        a_23 = t;
        t = term_p_10;
        t = w_4(z_22, a_23, t);
        y_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_22, term_q_10);
        t = geq_0_0(t);
        t = a_22;
        t = v_112(t);
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
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
  d_23 = t;
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_23;
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
            t = d_23;
          }
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
        t = (ATerm) ATinsert(ATempty, d_23);
      }
  }
  e_23 = t;
  t = term_k_9;
  f_23 = t;
  t = SSL_printnl(f_23, e_23);
  t = d_23;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL;
  t = term_q_6;
  j_23 = t;
  t = term_r_6;
  k_23 = t;
  t = term_s_6;
  t = w_4(j_23, k_23, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm m_23 = NULL;
  m_23 = t;
  if(match_string(t, "-k"))
    {
      t = m_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_23;
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
  n_23 = t;
  t = SSL_string_to_int(n_23);
  o_23 = t;
  t = term_c_11;
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_11, o_23);
  t = z_4(p_23, o_23, t);
  t = n_23;
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
  ATerm r_23 = NULL;
  r_23 = t;
  if(match_string(t, "-S"))
    {
      t = r_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_23;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  t = term_m_10;
  s_23 = t;
  t = term_e_11;
  t_23 = t;
  t = term_f_11;
  t = z_4(s_23, t_23, t);
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
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL;
  u_23 = t;
  t = SSL_string_to_int(u_23);
  v_23 = t;
  t = term_m_10;
  w_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, v_23);
  t = z_4(w_23, v_23, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_23);
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
  ATerm x_23 = NULL,y_23 = NULL;
  t = term_k_11;
  x_23 = t;
  t = term_a_4;
  y_23 = t;
  t = term_l_11;
  t = z_4(x_23, y_23, t);
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
static ATerm z_4 (ATerm c_36, ATerm d_36, ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL;
  t = term_q_6;
  z_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_6, c_36, d_36);
  t = lookup_table_0_1(z_23, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(c_36, d_36, a_24, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_6, c_36, d_36);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
      t = term_a_4;
      t = g_0(t);
      g_24 = t;
      t = term_y_6;
      h_24 = t;
      t = term_z_6;
      i_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_6, term_z_6, g_24);
      t = x_4(h_24, i_24, g_24, t);
      _fail(t);
    }
  else
    {
      ATerm l_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_24 = ATgetFirst((ATermList) t);
          f_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_24;
      t = d_0(t);
      t = term_a_4;
      t = f_0(t);
      l_24 = t;
      t = (ATerm) ATinsert(CheckATermList(f_24), l_24);
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm n_24 = NULL;
  n_24 = t;
  if(match_string(t, "-o"))
    {
      t = n_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_24;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL;
  o_24 = t;
  t = term_t_11;
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_11, o_24);
  t = z_4(p_24, o_24, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_24);
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
static ATerm x_4 (ATerm q_41, ATerm r_41, ATerm p_41, ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL;
  r_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_41, r_41);
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
        t = (ATerm) ATmakeAppl(sym__2, q_41, r_41);
        t = w_4(q_41, r_41, t);
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = (ATerm) ATempty;
      }
  }
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_41, r_41, (ATerm) ATinsert(CheckATermList(s_24), p_41));
  t = lookup_table_0_1(q_41, t);
  v_24 = t;
  t = (ATerm) ATinsert(CheckATermList(s_24), p_41);
  t_24 = t;
  t = v_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(r_41, t_24, u_24, t);
  t = r_24;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
      t = term_a_4;
      t = l_0(t);
      g_25 = t;
      t = term_y_6;
      h_25 = t;
      t = term_z_6;
      i_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_6, term_z_6, g_25);
      t = x_4(h_25, i_25, g_25, t);
      _fail(t);
    }
  else
    {
      ATerm m_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_25 = ATgetFirst((ATermList) t);
          d_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_25 = ATgetFirst((ATermList) t);
          f_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_25;
      t = h_0(t);
      t = e_25;
      t = j_0(t);
      m_25 = t;
      t = (ATerm) ATinsert(CheckATermList(f_25), m_25);
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  if(match_string(t, "-i"))
    {
      t = o_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_25;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL;
  p_25 = t;
  t = term_a_12;
  q_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_12, p_25);
  t = z_4(q_25, p_25, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_25);
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
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_4;
  t = whoami_0_0(t);
  r_25 = t;
  t = term_r_7;
  t_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_12), r_25);
  u_25 = t;
  t = SSL_printnl(t_25, u_25);
  t = term_d_12;
  s_25 = t;
  t = SSL_exit(s_25);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL;
  t = term_q_6;
  v_25 = t;
  t = term_r_6;
  w_25 = t;
  t = term_s_6;
  t = w_4(v_25, w_25, t);
  return(t);
}
static ATerm s_4 (ATerm y_38, ATerm z_38, ATerm t)
{
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_38, z_38);
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
      t = SSL_addr(y_38, z_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
  y_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_25;
      t = s_125(t);
    }
  else
    {
      ATerm d_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_25 = ATgetFirst((ATermList) t);
          a_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_26;
      t = foldr_2_0(s_125, t_125, t);
      d_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_25, d_26);
      t = t_125(t);
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
  ATerm g_26 = NULL,s_8 = NULL,u_8 = NULL;
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
  g_26 = t;
  t = SSL_TicksToSeconds(g_26);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
  r_26 = t;
  if(match_cons(t, sym__2))
    {
      s_26 = ATgetArgument(t, 0);
      t_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_26;
        if((s_26 != t))
          {
            _fail(t);
          }
        t = r_26;
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        t = (ATerm) ATmakeAppl(sym__2, s_26, t_26);
        {
          ATerm k_12 = t;
          int q_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_26, t_26);
              LocalPopChoice(q_12);
            }
          else
            {
              t = k_12;
              t = SSL_gtr(s_26, t_26);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, s_26, t_26);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_112 (ATerm), ATerm t)
{
  ATerm x_26 = NULL;
  x_26 = t;
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
        t = term_q_6;
        a_27 = t;
        t = term_m_10;
        b_27 = t;
        t = term_p_10;
        t = w_4(a_27, b_27, t);
        z_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_26, term_d_12);
        t = geq_0_0(t);
        t = x_26;
        t = u_112(t);
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        t = x_26;
      }
  }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,g_27 = NULL,h_27 = NULL;
  t = run_time_0_0(t);
  d_27 = t;
  t = term_a_4;
  t = whoami_0_0(t);
  e_27 = t;
  t = term_r_7;
  g_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_12), d_27), term_t_12), e_27);
  h_27 = t;
  t = SSL_printnl(g_27, h_27);
  t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_12), d_27), term_t_12), e_27));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_11;
  i_27 = t;
  t = SSL_exit(i_27);
  return(t);
}
static ATerm a_5 (ATerm b_46, ATerm c_46, ATerm d_46, ATerm t)
{
  ATerm j_27 = NULL;
  t = SSL_hashtable_put(d_46, b_46, c_46);
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_27);
  return(t);
}
static ATerm b_5 (ATerm e_46, ATerm f_46, ATerm t)
{
  t = SSL_hashtable_get(f_46, e_46);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_43, ATerm t)
{
  ATerm s_27 = NULL;
  t = table_hashtable_0_0(t);
  s_27 = t;
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_9 = NULL;
        t = s_27;
        if(match_cons(t, sym_Hashtable_1))
          {
            p_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_5(c_43, p_9, t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        {
          ATerm x_9 = NULL;
          t = c_43;
          t = table_create_0_0(t);
          t = s_27;
          if(match_cons(t, sym_Hashtable_1))
            {
              x_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_5(c_43, x_9, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm j_46, ATerm k_46, ATerm t)
{
  ATerm v_27 = NULL;
  t = SSL_hashtable_create(j_46, k_46);
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_27);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,a_28 = NULL,b_28 = NULL;
  w_27 = t;
  t = term_x_12;
  a_28 = t;
  t = term_a_13;
  b_28 = t;
  t = w_27;
  t = new_hashtable_0_2(a_28, b_28, t);
  x_27 = t;
  t = w_27;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(w_27, x_27, y_27, t);
  t = w_27;
  return(t);
}
static ATerm u_4 (ATerm g_46, ATerm h_46, ATerm t)
{
  ATerm c_28 = NULL;
  t = SSL_hashtable_remove(h_46, g_46);
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_28);
  return(t);
}
static ATerm v_4 (ATerm l_46, ATerm t)
{
  ATerm d_28 = NULL;
  t = SSL_hashtable_destroy(l_46);
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_28);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm e_28 = NULL;
  t = SSL_table_hashtable();
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_28);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL;
  f_28 = t;
  t = table_hashtable_0_0(t);
  g_28 = t;
  t = lookup_table_0_1(f_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_4(i_28, t);
  t = g_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_4(f_28, h_28, t);
  t = f_28;
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
  ATerm j_28 = NULL,k_28 = NULL;
  t = term_b_13;
  j_28 = t;
  t = term_a_4;
  k_28 = t;
  t = term_f_13;
  t = z_4(j_28, k_28, t);
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
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL;
  t = term_b_13;
  n_28 = t;
  t = term_a_4;
  o_28 = t;
  t = term_f_13;
  t = z_4(n_28, o_28, t);
  t = term_h_13;
  l_28 = t;
  t = term_a_4;
  m_28 = t;
  t = term_i_13;
  t = z_4(l_28, m_28, t);
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
ATerm Cons_2_0 (ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,y_8 = NULL;
  u_28 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_28 = ATgetFirst((ATermList) t);
      r_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_28);
  p_28 = t;
  t = q_28;
  t = s_88(t);
  s_28 = t;
  t = r_28;
  t = t_88(t);
  t_28 = t;
  t = (ATerm) ATinsert(CheckATermList(t_28), s_28);
  y_8 = t;
  t = SSLsetAnnotations(y_8, p_28);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_137 (ATerm), ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,e_29 = NULL,f_29 = NULL,i_9 = NULL;
  z_28 = t;
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_13;
        t = c_137(t);
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
      }
  }
  t = z_28;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_29 = ATgetFirst((ATermList) t);
      c_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_28);
  a_29 = t;
  t = term_r_6;
  f_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_6, b_29);
  t = z_4(f_29, b_29, t);
  t = c_29;
  {
    static ATerm p_29 (ATerm t);
    static ATerm p_29 (ATerm t)
    {
      ATerm v_13 = t;
      int w_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_29 = NULL;
              i_29 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = i_29;
              LocalPopChoice(y_13);
            }
          else
            {
              t = x_13;
              t = c_137(t);
              t = Cons_2_0(_id, p_29, t);
            }
          LocalPopChoice(w_13);
        }
      else
        {
          t = v_13;
          {
            ATerm l_29 = NULL,m_29 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_29 = ATgetFirst((ATermList) t);
                m_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(m_29), (ATerm) ATmakeAppl(sym_Undefined_1, l_29));
          }
        }
      return(t);
    }
    t = p_29(t);
  }
  e_29 = t;
  t = (ATerm) ATinsert(CheckATermList(e_29), (ATerm) ATmakeAppl(sym_Program_1, b_29));
  i_9 = t;
  t = SSLsetAnnotations(i_9, a_29);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm c_30 = NULL;
  c_30 = t;
  if(match_string(t, "--help"))
    {
      t = c_30;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_30;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_30;
        }
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL;
  t = term_z_13;
  d_30 = t;
  t = term_a_4;
  e_30 = t;
  t = term_a_14;
  t = z_4(d_30, e_30, t);
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
ATerm parse_options_3_0 (ATerm z_136 (ATerm), ATerm a_137 (ATerm), ATerm b_137 (ATerm), ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL;
  w_29 = t;
  t = term_y_6;
  x_29 = t;
  t = term_d_14;
  t = lookup_table_0_1(x_29, t);
  b_30 = t;
  t = term_z_6;
  y_29 = t;
  t = (ATerm) ATempty;
  z_29 = t;
  t = b_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(y_29, z_29, a_30, t);
  t = w_29;
  {
    static ATerm d_4 (ATerm t);
    static ATerm d_4 (ATerm t)
    {
      ATerm e_14 = t;
      int f_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_136(t);
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
        ATerm w_30 = NULL;
        w_30 = t;
        {
          ATerm k_14 = t;
          int l_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_10 = NULL;
              t = w_30;
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
              t = w_30;
              t = a_137(t);
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
                t = w_30;
                t = b_137(t);
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
              ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL;
              static ATerm y_4 (ATerm t);
              static ATerm y_4 (ATerm t)
              {
                ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,l_9 = NULL;
                c_31 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    b_31 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_31);
                a_31 = t;
                t = b_31;
                if(((u_29 != NULL) && (u_29 != t)))
                  _fail(t);
                else
                  u_29 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_31);
                l_9 = t;
                t = SSLsetAnnotations(l_9, a_31);
                return(t);
              }
              t = fetch_1_0(y_4, t);
              t = term_r_7;
              y_30 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_29)), term_s_14);
              z_30 = t;
              t = SSL_printnl(y_30, z_30);
              t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_29)), term_s_14));
              t = a_137(t);
              t = term_d_12;
              x_30 = t;
              t = SSL_exit(x_30);
              LocalPopChoice(r_14);
            }
          else
            {
              t = q_14;
            }
        }
      }
  }
  v_29 = t;
  t = term_y_6;
  t = table_destroy_0_0(t);
  t = v_29;
  return(t);
}
ATerm option_wrap_5_0 (ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm e_135 (ATerm), ATerm f_135 (ATerm), ATerm g_135 (ATerm), ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL;
  t = parse_options_3_0(c_135, d_135, e_135, t);
  h_31 = t;
  t = term_t_14;
  t = table_create_0_0(t);
  t = term_t_14;
  i_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_14, term_u_14, h_31);
  t = lookup_table_0_1(i_31, t);
  l_31 = t;
  t = term_u_14;
  j_31 = t;
  t = l_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(j_31, h_31, k_31, t);
  t = h_31;
  t = f_135(t);
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_135(t);
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
  ATerm m_31 = NULL,n_31 = NULL;
  t = term_x_14;
  m_31 = t;
  t = term_a_4;
  n_31 = t;
  t = term_y_14;
  t = z_4(m_31, n_31, t);
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
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
  o_31 = t;
  t = term_q_6;
  s_31 = t;
  t = term_r_6;
  t_31 = t;
  t = term_s_6;
  t = w_4(s_31, t_31, t);
  p_31 = t;
  t = term_r_7;
  q_31 = t;
  t = (ATerm) ATinsert(ATempty, p_31);
  r_31 = t;
  t = SSL_printnl(q_31, r_31);
  t = o_31;
  return(t);
}
ATerm iowrap_3_0 (ATerm f_134 (ATerm), ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm t)
{
  static ATerm c_5 (ATerm t);
  static ATerm e_5 (ATerm t);
  static ATerm c_5 (ATerm t)
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_134(t);
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
    ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
    v_31 = t;
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
                if(((u_31 != NULL) && (u_31 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_31 = ATgetArgument(t, 0);
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
          u_31 = t;
        }
    }
    t = not_null(u_31);
    t = ReadFromFile_0_0(t);
    w_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_31, w_31);
    t = apply_strategy_1_0(f_134, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(c_5, h_134, default_system_about_0_0, d_5, e_5, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,r_9 = NULL;
  c_32 = t;
  if(match_cons(t, sym__2))
    {
      z_31 = ATgetArgument(t, 0);
      a_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_32);
  y_31 = t;
  t = a_32;
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_32 = NULL;
        t = sometd_1_0(RepairDefinition_0_0, t);
        d_32 = t;
        t = explanation_0_0(t);
        t = d_32;
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
      }
  }
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_31, b_32);
  r_9 = t;
  t = SSLsetAnnotations(r_9, y_31);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(a_6, _fail, default_system_usage_0_0, t);
  return(t);
}

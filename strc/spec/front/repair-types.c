#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Cons_1;
Symbol sym_Nil_0;
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
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
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
ATerm term_o_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_k_9;
ATerm term_g_9;
ATerm term_c_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_t_7;
ATerm term_r_7;
ATerm term_i_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_a_6;
ATerm term_f_4;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_f_4));
  term_f_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_r_6);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym__2, term_w_6, term_y_6);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
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
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_o_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym__2, term_o_10, term_e_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_11);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_f_4);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
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
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_f_4);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_g_13, term_f_4);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_f_4);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym__3, term_w_6, term_y_6, (ATerm) ATempty);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_z_13);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__2, term_q_6, term_a_13);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym__2, term_x_14, term_f_4);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm map_1_0 (ATerm h_124 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm c_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm u_141 (ATerm), ATerm v_141 (ATerm), ATerm t);
static ATerm n_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm explanation_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm y_124 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm x_6 (ATerm b_6, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm i_4 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm i_23, ATerm g_23, ATerm f_23, ATerm h_23, ATerm t);
ATerm RepairVarDec_2_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm t);
ATerm map1_1_0 (ATerm j_124 (ATerm), ATerm t);
static ATerm a_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm RepairDefinition_0_0 (ATerm t);
ATerm sometd_1_0 (ATerm d_109 (ATerm), ATerm t);
static ATerm k_4 (ATerm r_32, ATerm s_32, ATerm t);
static ATerm l_4 (ATerm x_30, ATerm y_30, ATerm t);
static ATerm n_4 (ATerm e_115 (ATerm), ATerm e_232, ATerm d_31, ATerm t);
static ATerm m_4 (ATerm t_30, ATerm u_30, ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm j_138 (ATerm), ATerm t);
static ATerm i_17 (ATerm p_16, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_4 (ATerm z_30, ATerm t);
static ATerm p_4 (ATerm e_71, ATerm f_71, ATerm t);
static ATerm q_4 (ATerm t_32, ATerm u_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm f_20 (ATerm f_18, ATerm t);
static ATerm g_20 (ATerm m_18, ATerm n_18, ATerm o_18, ATerm t);
static ATerm j_20 (ATerm e_19, ATerm f_19, ATerm i_19, ATerm t);
static ATerm r_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_124 (ATerm), ATerm t);
static ATerm w_4 (ATerm x_43, ATerm y_43, ATerm t);
ATerm if_verbose2_1_0 (ATerm w_116 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_4 (ATerm n_36, ATerm o_36, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_4 (ATerm e_42, ATerm f_42, ATerm d_42, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm s_4 (ATerm m_39, ATerm n_39, ATerm t);
ATerm foldr_2_0 (ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_116 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_5 (ATerm p_46, ATerm q_46, ATerm r_46, ATerm t);
static ATerm b_5 (ATerm s_46, ATerm t_46, ATerm t);
ATerm lookup_table_0_1 (ATerm q_43, ATerm t);
ATerm new_hashtable_0_2 (ATerm x_46, ATerm y_46, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm u_4 (ATerm u_46, ATerm v_46, ATerm t);
static ATerm v_4 (ATerm z_46, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_141 (ATerm), ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm parse_options_3_0 (ATerm m_141 (ATerm), ATerm n_141 (ATerm), ATerm o_141 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm p_139 (ATerm), ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm iowrap_3_0 (ATerm s_138 (ATerm), ATerm t_138 (ATerm), ATerm u_138 (ATerm), ATerm t);
static ATerm z_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm map_1_0 (ATerm h_124 (ATerm), ATerm t)
{
  static ATerm y_0 (ATerm t);
  static ATerm y_0 (ATerm t)
  {
    ATerm v_0 = NULL,w_0 = NULL,x_0 = NULL;
    v_0 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_0;
      }
    else
      {
        ATerm q_0 = NULL,b_1 = NULL,c_1 = NULL,e_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_0 = ATgetFirst((ATermList) t);
            x_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_0);
        q_0 = t;
        t = w_0;
        t = h_124(t);
        b_1 = t;
        t = x_0;
        t = y_0(t);
        c_1 = t;
        t = (ATerm) ATinsert(CheckATermList(c_1), b_1);
        e_0 = t;
        t = SSLsetAnnotations(e_0, q_0);
      }
    return(t);
  }
  t = y_0(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_1 = ATgetFirst((ATermList) t);
      y_1 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_2 = NULL,f_2 = NULL;
        static ATerm a_0 (ATerm t);
        static ATerm a_0 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_2)), not_null(f_2));
          return(t);
        }
        t = y_1;
        t = o_0(t);
        if(((d_2 != NULL) && (d_2 != t)))
          _fail(t);
        else
          d_2 = t;
        t = x_1;
        t = m_0(t);
        if(((f_2 != NULL) && (f_2 != t)))
          _fail(t);
        else
          f_2 = t;
        t = y_1;
        t = reverse_acc_2_0(m_0, a_0, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_4;
      t = o_0(t);
    }
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,i_0 = NULL;
  r_2 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_2);
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_2);
  i_0 = t;
  t = SSLsetAnnotations(i_0, p_2);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm w_2 = NULL;
  w_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_2), term_a_6);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm u_141 (ATerm), ATerm v_141 (ATerm), ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  ATerm g_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_2 = NULL,n_2 = NULL;
      t = term_q_6;
      m_2 = t;
      t = term_r_6;
      n_2 = t;
      t = term_s_6;
      t = w_4(m_2, n_2, t);
      LocalPopChoice(p_6);
    }
  else
    {
      t = g_6;
      t = fetch_1_0(c_0, t);
    }
  {
    ATerm t_6 = t;
    int u_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_141(t);
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
  t = term_w_6;
  k_2 = t;
  t = term_y_6;
  l_2 = t;
  t = term_z_6;
  t = w_4(k_2, l_2, t);
  t = reverse_acc_2_0(_id, f_0, t);
  t = map_1_0(k_0, t);
  {
    ATerm a_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_2 = NULL;
        t = v_141(t);
        x_2 = t;
        t = (ATerm) ATinsert(CheckATermList(x_2), term_i_7);
        t = echo_0_0(t);
        LocalPopChoice(c_7);
      }
    else
      {
        t = a_7;
      }
  }
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm j_3 = NULL,m_3 = NULL,n_3 = NULL,p_0 = NULL;
  n_3 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_3);
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_3);
  p_0 = t;
  t = SSLsetAnnotations(p_0, j_3);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_3 = NULL;
  d_3 = t;
  {
    ATerm j_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_3 = NULL,i_3 = NULL;
        t = term_q_6;
        h_3 = t;
        t = term_r_6;
        i_3 = t;
        t = term_s_6;
        t = w_4(h_3, i_3, t);
        LocalPopChoice(k_7);
      }
    else
      {
        t = j_7;
        t = fetch_1_0(n_0, t);
      }
  }
  t = d_3;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
ATerm explanation_0_0 (ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL;
  t = term_r_7;
  p_3 = t;
  t = (ATerm) ATinsert(ATempty, term_t_7);
  q_3 = t;
  t = SSL_printnl(p_3, q_3);
  t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATempty, term_t_7));
  return(t);
}
ATerm at_end_1_0 (ATerm y_124 (ATerm), ATerm t)
{
  static ATerm s_5 (ATerm t);
  static ATerm s_5 (ATerm t)
  {
    ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
    r_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_5 = ATgetFirst((ATermList) t);
        q_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_1 = NULL,o_1 = NULL,s_0 = NULL;
          t = SSLgetAnnotations(r_5);
          l_1 = t;
          t = q_5;
          t = s_5(t);
          o_1 = t;
          t = (ATerm) ATinsert(CheckATermList(o_1), p_5);
          s_0 = t;
          t = SSLsetAnnotations(s_0, l_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_5;
        t = y_124(t);
      }
    return(t);
  }
  t = s_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL;
  u_3 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_3;
    }
  else
    {
      static ATerm r_0 (ATerm t);
      static ATerm r_0 (ATerm t)
      {
        t = not_null(w_3);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_3 = ATgetFirst((ATermList) t);
          if(((w_3 != NULL) && (w_3 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_3 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_3;
      t = at_end_1_0(r_0, t);
    }
  return(t);
}
static ATerm x_6 (ATerm b_6, ATerm t)
{
  ATerm c_6 = NULL;
  t = SSL_explode_term(b_6);
  if(match_cons(t, sym__2))
    {
      ATerm u_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL;
  o_6 = t;
  if(match_cons(t, sym__2))
    {
      m_6 = ATgetArgument(t, 0);
      n_6 = ATgetArgument(t, 1);
      {
        ATerm w_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_0 (ATerm t);
            static ATerm t_0 (ATerm t)
            {
              t = n_6;
              return(t);
            }
            t = m_6;
            t = at_end_1_0(t_0, t);
            LocalPopChoice(x_7);
          }
        else
          {
            t = w_7;
            t = x_6(o_6, t);
          }
      }
    }
  else
    {
      t = x_6(o_6, t);
    }
  return(t);
}
static ATerm i_4 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm i_23, ATerm g_23, ATerm f_23, ATerm h_23, ATerm t)
{
  ATerm b_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,l_7 = NULL,m_7 = NULL;
  f_7 = t;
  t = k_105(t);
  g_7 = t;
  t = f_7;
  t = l_105(t);
  h_7 = t;
  t = term_r_7;
  l_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_8), h_7), term_a_8), g_7), term_z_7), i_23), term_y_7);
  m_7 = t;
  t = SSL_printnl(l_7, m_7);
  t = (ATerm) ATmakeAppl(sym__2, f_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, g_23)));
  t = conc_0_0(t);
  b_7 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_23, (ATerm) ATmakeAppl(sym_FunType_2, b_7, h_23));
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      n_7 = ATgetArgument(t, 0);
      {
        ATerm c_8 = ATgetArgument(t, 1);
        if(match_cons(c_8, sym_FunType_2))
          {
            ATerm d_8 = ATgetArgument(c_8, 0);
            if(((ATgetType(d_8) == AT_LIST) && !(ATisEmpty(d_8))))
              {
                ATerm e_8 = ATgetFirst((ATermList) d_8);
                if(match_cons(e_8, sym_ConstType_1))
                  {
                    o_7 = ATgetArgument(e_8, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm h_8 = (ATerm) ATgetNext((ATermList) d_8);
                  p_7 = h_8;
                  if(((ATgetType(h_8) == AT_LIST) && !(ATisEmpty(h_8))))
                    {
                      ATerm i_8 = ATgetFirst((ATermList) h_8);
                      if(match_cons(i_8, sym_FunType_2))
                        {
                          ATerm l_8 = ATgetArgument(i_8, 0);
                          ATerm n_8 = ATgetArgument(i_8, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm k_8 = (ATerm) ATgetNext((ATermList) h_8);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            q_7 = ATgetArgument(c_8, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_4(k_105, l_105, n_7, o_7, p_7, q_7, t);
  return(t);
}
ATerm map1_1_0 (ATerm j_124 (ATerm), ATerm t)
{
  ATerm f_10 = NULL,h_10 = NULL,k_10 = NULL;
  f_10 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_10 = ATgetFirst((ATermList) t);
      k_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL,b_2 = NULL,e_2 = NULL,g_2 = NULL,h_2 = NULL,o_2 = NULL,s_2 = NULL,k_1 = NULL,u_0 = NULL;
        t = SSLgetAnnotations(f_10);
        h_2 = t;
        t = h_10;
        t = j_124(t);
        o_2 = t;
        t = (ATerm) ATinsert(CheckATermList(k_10), o_2);
        u_0 = t;
        t = SSLsetAnnotations(u_0, h_2);
        s_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_2 = ATgetFirst((ATermList) t);
            e_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_2);
        w_1 = t;
        t = e_2;
        {
          ATerm q_8 = t;
          int t_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(j_124, t);
              LocalPopChoice(t_8);
            }
          else
            {
              t = q_8;
            }
        }
        g_2 = t;
        t = (ATerm) ATinsert(CheckATermList(g_2), b_2);
        k_1 = t;
        t = SSLsetAnnotations(k_1, w_1);
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        {
          ATerm r_3 = NULL,y_3 = NULL,t_4 = NULL;
          t = SSLgetAnnotations(f_10);
          r_3 = t;
          t = k_10;
          t = map1_1_0(j_124, t);
          y_3 = t;
          t = (ATerm) ATinsert(CheckATermList(y_3), h_10);
          t_4 = t;
          t = SSLsetAnnotations(t_4, r_3);
        }
      }
  }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_w_8;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_w_8;
  return(t);
}
static ATerm i_1 (ATerm t)
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
  ATerm s_10 = NULL,y_10 = NULL,a_11 = NULL,d_11 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      y_10 = ATgetArgument(t, 0);
      a_11 = ATgetArgument(t, 1);
      d_11 = ATgetArgument(t, 2);
      s_10 = ATgetArgument(t, 3);
      {
        ATerm j_11 = NULL;
        t = a_11;
        {
          static ATerm z_0 (ATerm t);
          static ATerm z_0 (ATerm t)
          {
            static ATerm d_1 (ATerm t);
            static ATerm d_1 (ATerm t)
            {
              t = y_10;
              return(t);
            }
            t = RepairVarDec_2_0(a_1, d_1, t);
            return(t);
          }
          t = map1_1_0(z_0, t);
        }
        j_11 = t;
        t = (ATerm) ATmakeAppl(sym_RDefT_4, y_10, j_11, d_11, s_10);
      }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          y_10 = ATgetArgument(t, 0);
          a_11 = ATgetArgument(t, 1);
          d_11 = ATgetArgument(t, 2);
          {
            ATerm p_11 = NULL;
            t = a_11;
            {
              static ATerm e_1 (ATerm t);
              static ATerm e_1 (ATerm t)
              {
                static ATerm g_1 (ATerm t);
                static ATerm g_1 (ATerm t)
                {
                  t = y_10;
                  return(t);
                }
                t = RepairVarDec_2_0(f_1, g_1, t);
                return(t);
              }
              t = map1_1_0(e_1, t);
            }
            p_11 = t;
            t = (ATerm) ATmakeAppl(sym_RDef_3, y_10, p_11, d_11);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              y_10 = ATgetArgument(t, 0);
              a_11 = ATgetArgument(t, 1);
              d_11 = ATgetArgument(t, 2);
              s_10 = ATgetArgument(t, 3);
              {
                ATerm x_11 = NULL;
                t = a_11;
                {
                  static ATerm h_1 (ATerm t);
                  static ATerm h_1 (ATerm t)
                  {
                    static ATerm j_1 (ATerm t);
                    static ATerm j_1 (ATerm t)
                    {
                      t = y_10;
                      return(t);
                    }
                    t = RepairVarDec_2_0(i_1, j_1, t);
                    return(t);
                  }
                  t = map1_1_0(h_1, t);
                }
                x_11 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, y_10, x_11, d_11, s_10);
              }
            }
          else
            {
              ATerm l_12 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  y_10 = ATgetArgument(t, 0);
                  a_11 = ATgetArgument(t, 1);
                  d_11 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = a_11;
              {
                static ATerm m_1 (ATerm t);
                static ATerm m_1 (ATerm t)
                {
                  static ATerm p_1 (ATerm t);
                  static ATerm p_1 (ATerm t)
                  {
                    t = y_10;
                    return(t);
                  }
                  t = RepairVarDec_2_0(n_1, p_1, t);
                  return(t);
                }
                t = map1_1_0(m_1, t);
              }
              l_12 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_3, y_10, l_12, d_11);
            }
        }
    }
  return(t);
}
ATerm sometd_1_0 (ATerm d_109 (ATerm), ATerm t)
{
  static ATerm m_12 (ATerm t);
  static ATerm m_12 (ATerm t)
  {
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_109(t);
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        t = SRTS_some(m_12, t);
      }
    return(t);
  }
  t = m_12(t);
  return(t);
}
static ATerm k_4 (ATerm r_32, ATerm s_32, ATerm t)
{
  ATerm n_12 = NULL;
  t = SSL_fputc(r_32, s_32);
  n_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_12);
  return(t);
}
static ATerm l_4 (ATerm x_30, ATerm y_30, ATerm t)
{
  ATerm o_12 = NULL;
  t = SSL_write_term_to_stream_text(x_30, y_30);
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_12);
  return(t);
}
static ATerm n_4 (ATerm e_115 (ATerm), ATerm e_232, ATerm d_31, ATerm t)
{
  ATerm p_12 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_232, term_c_9);
  t = r_4(t);
  p_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_12, d_31);
  t = e_115(t);
  t = fclose_0_0(t);
  t = d_31;
  return(t);
}
static ATerm m_4 (ATerm t_30, ATerm u_30, ATerm t)
{
  ATerm t_12 = NULL;
  t = SSL_write_term_to_stream_baf(t_30, u_30);
  t_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_12);
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
  ATerm n_5 = NULL,o_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_9 = ATgetArgument(t, 0);
      if(match_cons(d_9, sym_Stream_1))
        {
          n_5 = ATgetArgument(d_9, 0);
        }
      else
        _fail(t);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(n_5, o_5, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_9 = ATgetArgument(t, 0);
      if(match_cons(e_9, sym_Stream_1))
        {
          k_6 = ATgetArgument(e_9, 0);
        }
      else
        _fail(t);
      l_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_4(k_6, l_6, t);
  h_6 = t;
  t = term_g_9;
  i_6 = t;
  t = h_6;
  if(match_cons(t, sym_Stream_1))
    {
      j_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_9, h_6);
  t = k_4(i_6, j_6, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_12 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,h_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,q_13 = NULL,r_15 = NULL,s_15 = NULL,i_5 = NULL,h_5 = NULL;
  c_13 = t;
  if(match_cons(t, sym__2))
    {
      m_13 = ATgetArgument(t, 0);
      n_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_13);
  l_13 = t;
  t = m_13;
  {
    ATerm h_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_1 (ATerm t);
        static ATerm q_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((z_12 != NULL) && (z_12 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                z_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(q_1, t);
        LocalPopChoice(i_9);
      }
    else
      {
        t = h_9;
        t = term_k_9;
        z_12 = t;
      }
  }
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_13, n_13);
  h_5 = t;
  t = SSLsetAnnotations(h_5, l_13);
  t = c_13;
  if(match_cons(t, sym__2))
    {
      e_13 = ATgetArgument(t, 0);
      h_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_13);
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_13, (ATerm) ATmakeAppl(sym__2, not_null(z_12), h_13));
  i_5 = t;
  t = SSLsetAnnotations(i_5, d_13);
  k_13 = t;
  if(match_cons(t, sym__2))
    {
      r_15 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_4 = NULL,e_5 = NULL,f_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL;
        t = SSLgetAnnotations(k_13);
        h_4 = t;
        t = r_15;
        t = fetch_1_0(r_1, t);
        e_5 = t;
        t = s_15;
        if(match_cons(t, sym__2))
          {
            j_5 = ATgetArgument(t, 0);
            k_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_4(s_1, j_5, k_5, t);
        f_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_5, f_5);
        l_5 = t;
        t = SSLsetAnnotations(l_5, h_4);
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        {
          ATerm y_5 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,m_5 = NULL;
          t = SSLgetAnnotations(k_13);
          y_5 = t;
          t = s_15;
          if(match_cons(t, sym__2))
            {
              e_6 = ATgetArgument(t, 0);
              f_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_4(t_1, e_6, f_6, t);
          d_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_15, d_6);
          m_5 = t;
          t = SSLsetAnnotations(m_5, y_5);
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
ATerm apply_strategy_1_0 (ATerm j_138 (ATerm), ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,z_15 = NULL,c_16 = NULL,d_16 = NULL;
  d_16 = t;
  t = dtime_0_0(t);
  t = d_16;
  t = j_138(t);
  c_16 = t;
  t = dtime_0_0(t);
  v_15 = t;
  t = c_16;
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      z_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_15), (ATerm) ATmakeAppl(sym_Runtime_1, v_15)), z_15);
  return(t);
}
static ATerm i_17 (ATerm p_16, ATerm t)
{
  t = SSL_fclose(p_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL;
  c_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_17 = ATgetArgument(t, 0);
      {
        ATerm n_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_17);
            LocalPopChoice(p_9);
          }
        else
          {
            t = n_9;
            t = i_17(c_17, t);
          }
      }
    }
  else
    {
      t = i_17(c_17, t);
    }
  return(t);
}
static ATerm o_4 (ATerm z_30, ATerm t)
{
  t = SSL_read_term_from_stream(z_30);
  return(t);
}
static ATerm p_4 (ATerm e_71, ATerm f_71, ATerm t)
{
  t = SSL_strcat(e_71, f_71);
  return(t);
}
static ATerm q_4 (ATerm t_32, ATerm u_32, ATerm t)
{
  ATerm o_17 = NULL;
  t = SSL_fopen(t_32, u_32);
  o_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_17);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_17 = NULL;
  t = SSL_stdin_stream();
  p_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_17 = NULL;
  t = SSL_stdout_stream();
  s_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_17 = NULL;
  t = SSL_stderr_stream();
  u_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_17);
  return(t);
}
static ATerm f_20 (ATerm f_18, ATerm t)
{
  ATerm g_18 = NULL;
  t = SSL_explode_term(f_18);
  if(match_cons(t, sym__2))
    {
      ATerm r_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_9 = ATgetArgument(t, 1);
        if(((ATgetType(s_9) == AT_LIST) && !(ATisEmpty(s_9))))
          {
            g_18 = ATgetFirst((ATermList) s_9);
            {
              ATerm t_9 = (ATerm) ATgetNext((ATermList) s_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_20 (ATerm m_18, ATerm n_18, ATerm o_18, ATerm t)
{
  ATerm q_18 = NULL,t_18 = NULL,z_18 = NULL,c_19 = NULL,f_8 = NULL;
  t = SSLgetAnnotations(o_18);
  z_18 = t;
  t = m_18;
  if(match_cons(t, sym_Path_1))
    {
      c_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_19, n_18);
  f_8 = t;
  t = SSLsetAnnotations(f_8, z_18);
  if(match_cons(t, sym__2))
    {
      q_18 = ATgetArgument(t, 0);
      t_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4(q_18, t_18, t);
  return(t);
}
static ATerm j_20 (ATerm e_19, ATerm f_19, ATerm i_19, ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,u_19 = NULL,g_8 = NULL;
  t = SSLgetAnnotations(i_19);
  m_19 = t;
  t = SSL_is_string(e_19);
  u_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_19, f_19);
  g_8 = t;
  t = SSLsetAnnotations(g_8, m_19);
  if(match_cons(t, sym__2))
    {
      k_19 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4(k_19, l_19, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm y_19 = NULL,b_20 = NULL,c_20 = NULL;
  y_19 = t;
  if(match_cons(t, sym__2))
    {
      b_20 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
      {
        ATerm u_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_20(y_19, t);
            LocalPopChoice(x_9);
          }
        else
          {
            t = u_9;
            {
              ATerm y_9 = t;
              int z_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_20(b_20, c_20, y_19, t);
                  LocalPopChoice(z_9);
                }
              else
                {
                  t = y_9;
                  t = j_20(b_20, c_20, y_19, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_20(y_19, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_20 = NULL,o_20 = NULL,p_20 = NULL,v_20 = NULL;
  v_20 = t;
  {
    ATerm a_10 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_20, term_c_10);
        t = r_4(t);
        LocalPopChoice(b_10);
      }
    else
      {
        t = a_10;
        {
          ATerm d_7 = NULL,e_7 = NULL;
          t = term_d_10;
          e_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_10, v_20);
          t = p_4(e_7, v_20, t);
          d_7 = t;
          t = SSL_perror(d_7);
          _fail(t);
        }
      }
  }
  o_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_4(p_20, t);
  l_20 = t;
  t = o_20;
  t = fclose_0_0(t);
  t = l_20;
  return(t);
}
ATerm fetch_1_0 (ATerm r_124 (ATerm), ATerm t)
{
  static ATerm v_21 (ATerm t);
  static ATerm v_21 (ATerm t)
  {
    ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
    s_21 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_21 = ATgetFirst((ATermList) t);
        u_21 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_10 = t;
      int g_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_7 = NULL,v_7 = NULL,u_8 = NULL;
          t = SSLgetAnnotations(s_21);
          s_7 = t;
          t = t_21;
          t = r_124(t);
          v_7 = t;
          t = (ATerm) ATinsert(CheckATermList(u_21), v_7);
          u_8 = t;
          t = SSLsetAnnotations(u_8, s_7);
          LocalPopChoice(g_10);
        }
      else
        {
          t = e_10;
          {
            ATerm j_8 = NULL,m_8 = NULL,v_8 = NULL;
            t = SSLgetAnnotations(s_21);
            j_8 = t;
            t = u_21;
            t = v_21(t);
            m_8 = t;
            t = (ATerm) ATinsert(CheckATermList(m_8), t_21);
            v_8 = t;
            t = SSLsetAnnotations(v_8, j_8);
          }
        }
    }
    return(t);
  }
  t = v_21(t);
  return(t);
}
static ATerm w_4 (ATerm x_43, ATerm y_43, ATerm t)
{
  ATerm y_21 = NULL;
  t = lookup_table_0_1(x_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_5(y_43, y_21, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_116 (ATerm), ATerm t)
{
  ATerm b_22 = NULL;
  b_22 = t;
  {
    ATerm i_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
        t = term_q_6;
        f_22 = t;
        t = term_o_10;
        g_22 = t;
        t = term_p_10;
        t = w_4(f_22, g_22, t);
        e_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_22, term_q_10);
        t = geq_0_0(t);
        t = b_22;
        t = w_116(t);
        LocalPopChoice(m_10);
      }
    else
      {
        t = i_10;
        t = b_22;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
  j_22 = t;
  {
    ATerm r_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_22;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_10 = ATgetFirst((ATermList) t);
                ATerm z_10 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_22;
          }
        LocalPopChoice(u_10);
      }
    else
      {
        t = r_10;
        t = (ATerm) ATinsert(ATempty, j_22);
      }
  }
  k_22 = t;
  t = term_k_9;
  l_22 = t;
  t = SSL_printnl(l_22, k_22);
  t = j_22;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL;
  t = term_q_6;
  l_23 = t;
  t = term_r_6;
  m_23 = t;
  t = term_s_6;
  t = w_4(l_23, m_23, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm o_23 = NULL;
  o_23 = t;
  if(match_string(t, "-k"))
    {
      t = o_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_23;
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
  p_23 = t;
  t = SSL_string_to_int(p_23);
  q_23 = t;
  t = term_b_11;
  r_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_11, q_23);
  t = z_4(r_23, q_23, t);
  t = p_23;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_c_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_1, v_1, z_1, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm t_23 = NULL;
  t_23 = t;
  if(match_string(t, "-S"))
    {
      t = t_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_23;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL;
  t = term_o_10;
  u_23 = t;
  t = term_e_11;
  v_23 = t;
  t = term_f_11;
  t = z_4(u_23, v_23, t);
  t = term_g_11;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_h_11;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
  w_23 = t;
  t = SSL_string_to_int(w_23);
  x_23 = t;
  t = term_o_10;
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_10, x_23);
  t = z_4(y_23, x_23, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_23);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_i_11;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL;
  t = term_k_11;
  z_23 = t;
  t = term_f_4;
  a_24 = t;
  t = term_l_11;
  t = z_4(z_23, a_24, t);
  t = term_m_11;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_n_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_2, c_2, i_2, t);
      LocalPopChoice(q_11);
    }
  else
    {
      t = o_11;
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_2, t_2, u_2, t);
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            t = Option_3_0(v_2, y_2, z_2, t);
          }
      }
    }
  return(t);
}
static ATerm z_4 (ATerm n_36, ATerm o_36, ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL;
  t = term_q_6;
  b_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_6, n_36, o_36);
  t = lookup_table_0_1(b_24, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(n_36, o_36, c_24, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_6, n_36, o_36);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL;
      t = term_f_4;
      t = g_0(t);
      i_24 = t;
      t = term_w_6;
      j_24 = t;
      t = term_y_6;
      k_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_6, term_y_6, i_24);
      t = x_4(j_24, k_24, i_24, t);
      _fail(t);
    }
  else
    {
      ATerm n_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_24 = ATgetFirst((ATermList) t);
          h_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_24;
      t = b_0(t);
      t = term_f_4;
      t = d_0(t);
      n_24 = t;
      t = (ATerm) ATinsert(CheckATermList(h_24), n_24);
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm p_24 = NULL;
  p_24 = t;
  if(match_string(t, "-o"))
    {
      t = p_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_24;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL;
  q_24 = t;
  t = term_t_11;
  r_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_11, q_24);
  t = z_4(r_24, q_24, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_24);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_u_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, b_3, c_3, t);
  return(t);
}
static ATerm x_4 (ATerm e_42, ATerm f_42, ATerm d_42, ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
  t_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_42, f_42);
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_11 = ATgetArgument(t, 0);
            ATerm z_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_42, f_42);
        t = w_4(e_42, f_42, t);
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
        t = (ATerm) ATempty;
      }
  }
  u_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_42, f_42, (ATerm) ATinsert(CheckATermList(u_24), d_42));
  t = lookup_table_0_1(e_42, t);
  x_24 = t;
  t = (ATerm) ATinsert(CheckATermList(u_24), d_42);
  v_24 = t;
  t = x_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(f_42, v_24, w_24, t);
  t = t_24;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
      t = term_f_4;
      t = l_0(t);
      i_25 = t;
      t = term_w_6;
      j_25 = t;
      t = term_y_6;
      k_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_6, term_y_6, i_25);
      t = x_4(j_25, k_25, i_25, t);
      _fail(t);
    }
  else
    {
      ATerm o_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_25 = ATgetFirst((ATermList) t);
          f_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_25 = ATgetFirst((ATermList) t);
          h_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_25;
      t = h_0(t);
      t = g_25;
      t = j_0(t);
      o_25 = t;
      t = (ATerm) ATinsert(CheckATermList(h_25), o_25);
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm q_25 = NULL;
  q_25 = t;
  if(match_string(t, "-i"))
    {
      t = q_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_25;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL;
  r_25 = t;
  t = term_a_12;
  s_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_12, r_25);
  t = z_4(s_25, r_25, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_25);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_b_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_3, f_3, g_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_4;
  t = whoami_0_0(t);
  t_25 = t;
  t = term_r_7;
  v_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_12), t_25);
  w_25 = t;
  t = SSL_printnl(v_25, w_25);
  t = term_d_12;
  u_25 = t;
  t = SSL_exit(u_25);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL;
  t = term_q_6;
  x_25 = t;
  t = term_r_6;
  y_25 = t;
  t = term_s_6;
  t = w_4(x_25, y_25, t);
  return(t);
}
static ATerm s_4 (ATerm m_39, ATerm n_39, ATerm t)
{
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_39, n_39);
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
      t = SSL_addr(m_39, n_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
  a_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_26;
      t = e_130(t);
    }
  else
    {
      ATerm f_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_26 = ATgetFirst((ATermList) t);
          c_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_26;
      t = foldr_2_0(e_130, f_130, t);
      f_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_26, f_26);
      t = f_130(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_e_11;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL;
  if(match_cons(t, sym__2))
    {
      y_8 = ATgetArgument(t, 0);
      z_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(y_8, z_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_26 = NULL,r_8 = NULL,s_8 = NULL;
  t = times_0_0(t);
  s_8 = t;
  t = SSL_explode_term(s_8);
  if(match_cons(t, sym__2))
    {
      ATerm g_12 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8;
  t = foldr_2_0(k_3, l_3, t);
  i_26 = t;
  t = SSL_TicksToSeconds(i_26);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
  t_26 = t;
  if(match_cons(t, sym__2))
    {
      u_26 = ATgetArgument(t, 0);
      v_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_26;
        if((u_26 != t))
          {
            _fail(t);
          }
        t = t_26;
        LocalPopChoice(i_12);
      }
    else
      {
        t = h_12;
        t = (ATerm) ATmakeAppl(sym__2, u_26, v_26);
        {
          ATerm j_12 = t;
          int k_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_26, v_26);
              LocalPopChoice(k_12);
            }
          else
            {
              t = j_12;
              t = SSL_gtr(u_26, v_26);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, u_26, v_26);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_116 (ATerm), ATerm t)
{
  ATerm z_26 = NULL;
  z_26 = t;
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
        t = term_q_6;
        c_27 = t;
        t = term_o_10;
        d_27 = t;
        t = term_p_10;
        t = w_4(c_27, d_27, t);
        b_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_27, term_d_12);
        t = geq_0_0(t);
        t = z_26;
        t = v_116(t);
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        t = z_26;
      }
  }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,i_27 = NULL,j_27 = NULL;
  t = run_time_0_0(t);
  f_27 = t;
  t = term_f_4;
  t = whoami_0_0(t);
  g_27 = t;
  t = term_r_7;
  i_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_12), f_27), term_s_12), g_27);
  j_27 = t;
  t = SSL_printnl(i_27, j_27);
  t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_12), f_27), term_s_12), g_27));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_11;
  k_27 = t;
  t = SSL_exit(k_27);
  return(t);
}
static ATerm a_5 (ATerm p_46, ATerm q_46, ATerm r_46, ATerm t)
{
  ATerm l_27 = NULL;
  t = SSL_hashtable_put(r_46, p_46, q_46);
  l_27 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_27);
  return(t);
}
static ATerm b_5 (ATerm s_46, ATerm t_46, ATerm t)
{
  t = SSL_hashtable_get(t_46, s_46);
  return(t);
}
ATerm lookup_table_0_1 (ATerm q_43, ATerm t)
{
  ATerm u_27 = NULL;
  t = table_hashtable_0_0(t);
  u_27 = t;
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_9 = NULL;
        t = u_27;
        if(match_cons(t, sym_Hashtable_1))
          {
            o_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_5(q_43, o_9, t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        {
          ATerm w_9 = NULL;
          t = q_43;
          t = table_create_0_0(t);
          t = u_27;
          if(match_cons(t, sym_Hashtable_1))
            {
              w_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_5(q_43, w_9, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm x_46, ATerm y_46, ATerm t)
{
  ATerm x_27 = NULL;
  t = SSL_hashtable_create(x_46, y_46);
  x_27 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_27);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,c_28 = NULL,d_28 = NULL;
  y_27 = t;
  t = term_x_12;
  c_28 = t;
  t = term_y_12;
  d_28 = t;
  t = y_27;
  t = new_hashtable_0_2(c_28, d_28, t);
  z_27 = t;
  t = y_27;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(y_27, z_27, a_28, t);
  t = y_27;
  return(t);
}
static ATerm u_4 (ATerm u_46, ATerm v_46, ATerm t)
{
  ATerm e_28 = NULL;
  t = SSL_hashtable_remove(v_46, u_46);
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_28);
  return(t);
}
static ATerm v_4 (ATerm z_46, ATerm t)
{
  ATerm f_28 = NULL;
  t = SSL_hashtable_destroy(z_46);
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_28);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm g_28 = NULL;
  t = SSL_table_hashtable();
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_28);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL;
  h_28 = t;
  t = table_hashtable_0_0(t);
  i_28 = t;
  t = lookup_table_0_1(h_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_4(k_28, t);
  t = i_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_4(h_28, j_28, t);
  t = h_28;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL;
  t = term_a_13;
  l_28 = t;
  t = term_f_4;
  m_28 = t;
  t = term_b_13;
  t = z_4(l_28, m_28, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_f_13;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
  t = term_a_13;
  p_28 = t;
  t = term_f_4;
  q_28 = t;
  t = term_b_13;
  t = z_4(p_28, q_28, t);
  t = term_g_13;
  n_28 = t;
  t = term_f_4;
  o_28 = t;
  t = term_i_13;
  t = z_4(n_28, o_28, t);
  t = term_j_13;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_o_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_3, t_3, x_3, t);
      LocalPopChoice(r_13);
    }
  else
    {
      t = p_13;
      t = Option_3_0(z_3, a_4, b_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,f_9 = NULL;
  w_28 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_28 = ATgetFirst((ATermList) t);
      t_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_28);
  r_28 = t;
  t = s_28;
  t = w_92(t);
  u_28 = t;
  t = t_28;
  t = x_92(t);
  v_28 = t;
  t = (ATerm) ATinsert(CheckATermList(v_28), u_28);
  f_9 = t;
  t = SSLsetAnnotations(f_9, r_28);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_141 (ATerm), ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,g_29 = NULL,h_29 = NULL,j_9 = NULL;
  b_29 = t;
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_13;
        t = p_141(t);
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
      }
  }
  t = b_29;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_29 = ATgetFirst((ATermList) t);
      e_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_29);
  c_29 = t;
  t = term_r_6;
  h_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_6, d_29);
  t = z_4(h_29, d_29, t);
  t = e_29;
  {
    static ATerm r_29 (ATerm t);
    static ATerm r_29 (ATerm t)
    {
      ATerm v_13 = t;
      int w_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_29 = NULL;
              k_29 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_29;
              LocalPopChoice(y_13);
            }
          else
            {
              t = x_13;
              t = p_141(t);
              t = Cons_2_0(_id, r_29, t);
            }
          LocalPopChoice(w_13);
        }
      else
        {
          t = v_13;
          {
            ATerm n_29 = NULL,o_29 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_29 = ATgetFirst((ATermList) t);
                o_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_29), (ATerm) ATmakeAppl(sym_Undefined_1, n_29));
          }
        }
      return(t);
    }
    t = r_29(t);
  }
  g_29 = t;
  t = (ATerm) ATinsert(CheckATermList(g_29), (ATerm) ATmakeAppl(sym_Program_1, d_29));
  j_9 = t;
  t = SSLsetAnnotations(j_9, c_29);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm e_30 = NULL;
  e_30 = t;
  if(match_string(t, "--help"))
    {
      t = e_30;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_30;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_30;
        }
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL;
  t = term_z_13;
  f_30 = t;
  t = term_f_4;
  g_30 = t;
  t = term_a_14;
  t = z_4(f_30, g_30, t);
  t = term_b_14;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_c_14;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm m_141 (ATerm), ATerm n_141 (ATerm), ATerm o_141 (ATerm), ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL;
  y_29 = t;
  t = term_w_6;
  z_29 = t;
  t = term_d_14;
  t = lookup_table_0_1(z_29, t);
  d_30 = t;
  t = term_y_6;
  a_30 = t;
  t = (ATerm) ATempty;
  b_30 = t;
  t = d_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(a_30, b_30, c_30, t);
  t = y_29;
  {
    static ATerm c_4 (ATerm t);
    static ATerm c_4 (ATerm t)
    {
      ATerm e_14 = t;
      int f_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_141(t);
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
                t = Option_3_0(d_4, e_4, g_4, t);
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
    t = parse_options_p__1_0(c_4, t);
  }
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_30 = NULL;
        r_30 = t;
        {
          ATerm k_14 = t;
          int l_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_10 = NULL;
              t = r_30;
              {
                ATerm m_14 = t;
                int n_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_10 = NULL,n_10 = NULL;
                    t = term_q_6;
                    l_10 = t;
                    t = term_z_13;
                    n_10 = t;
                    t = term_o_14;
                    t = w_4(l_10, n_10, t);
                    LocalPopChoice(n_14);
                  }
                else
                  {
                    t = m_14;
                    t = fetch_1_0(j_4, t);
                  }
              }
              t = r_30;
              t = n_141(t);
              t = term_e_11;
              j_10 = t;
              t = SSL_exit(j_10);
              LocalPopChoice(l_14);
            }
          else
            {
              t = k_14;
              {
                ATerm t_10 = NULL,v_10 = NULL,w_10 = NULL;
                t = term_q_6;
                v_10 = t;
                t = term_a_13;
                w_10 = t;
                t = term_p_14;
                t = w_4(v_10, w_10, t);
                t = r_30;
                t = o_141(t);
                t = term_e_11;
                t_10 = t;
                t = SSL_exit(t_10);
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
              ATerm s_30 = NULL,v_30 = NULL,w_30 = NULL;
              static ATerm y_4 (ATerm t);
              static ATerm y_4 (ATerm t)
              {
                ATerm a_31 = NULL,b_31 = NULL,e_31 = NULL,q_9 = NULL;
                e_31 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    b_31 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(e_31);
                a_31 = t;
                t = b_31;
                if(((w_29 != NULL) && (w_29 != t)))
                  _fail(t);
                else
                  w_29 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_31);
                q_9 = t;
                t = SSLsetAnnotations(q_9, a_31);
                return(t);
              }
              t = fetch_1_0(y_4, t);
              t = term_r_7;
              v_30 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_29)), term_s_14);
              w_30 = t;
              t = SSL_printnl(v_30, w_30);
              t = (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_29)), term_s_14));
              t = n_141(t);
              t = term_d_12;
              s_30 = t;
              t = SSL_exit(s_30);
              LocalPopChoice(r_14);
            }
          else
            {
              t = q_14;
            }
        }
      }
  }
  x_29 = t;
  t = term_w_6;
  t = table_destroy_0_0(t);
  t = x_29;
  return(t);
}
ATerm option_wrap_5_0 (ATerm p_139 (ATerm), ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
  t = parse_options_3_0(p_139, q_139, r_139, t);
  j_31 = t;
  t = term_t_14;
  t = table_create_0_0(t);
  t = term_t_14;
  k_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_14, term_u_14, j_31);
  t = lookup_table_0_1(k_31, t);
  n_31 = t;
  t = term_u_14;
  l_31 = t;
  t = n_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(l_31, j_31, m_31, t);
  t = j_31;
  t = s_139(t);
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_139(t);
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
static ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL;
  t = term_x_14;
  o_31 = t;
  t = term_f_4;
  p_31 = t;
  t = term_y_14;
  t = z_4(o_31, p_31, t);
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
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
  q_31 = t;
  t = term_q_6;
  u_31 = t;
  t = term_r_6;
  v_31 = t;
  t = term_s_6;
  t = w_4(u_31, v_31, t);
  r_31 = t;
  t = term_r_7;
  s_31 = t;
  t = (ATerm) ATinsert(ATempty, r_31);
  t_31 = t;
  t = SSL_printnl(s_31, t_31);
  t = q_31;
  return(t);
}
ATerm iowrap_3_0 (ATerm s_138 (ATerm), ATerm t_138 (ATerm), ATerm u_138 (ATerm), ATerm t)
{
  static ATerm c_5 (ATerm t);
  static ATerm g_5 (ATerm t);
  static ATerm c_5 (ATerm t)
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_138(t);
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
                          t = Option_3_0(t_5, u_5, v_5, t);
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
  static ATerm g_5 (ATerm t)
  {
    ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
    x_31 = t;
    {
      ATerm l_15 = t;
      int m_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm x_5 (ATerm t);
          static ATerm x_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((w_31 != NULL) && (w_31 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_31 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(x_5, t);
          LocalPopChoice(m_15);
        }
      else
        {
          t = l_15;
          t = term_n_15;
          w_31 = t;
        }
    }
    t = not_null(w_31);
    t = ReadFromFile_0_0(t);
    y_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_31, y_31);
    t = apply_strategy_1_0(s_138, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(c_5, u_138, default_system_about_0_0, d_5, g_5, t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,v_9 = NULL;
  e_32 = t;
  if(match_cons(t, sym__2))
    {
      b_32 = ATgetArgument(t, 0);
      c_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_32);
  a_32 = t;
  t = c_32;
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_32 = NULL;
        t = sometd_1_0(RepairDefinition_0_0, t);
        f_32 = t;
        t = explanation_0_0(t);
        t = f_32;
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
      }
  }
  d_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_32, d_32);
  v_9 = t;
  t = SSLsetAnnotations(v_9, a_32);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(z_5, _fail, default_system_usage_0_0, t);
  return(t);
}

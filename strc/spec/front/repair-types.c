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
ATerm term_t_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_j_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_t_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_o_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_g_8;
ATerm term_d_8;
ATerm term_y_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_k_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_e_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_1));
  term_e_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: argument '", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("' of ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" '", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("' starts with constant type", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_n_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym__2, term_n_9, term_w_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym__2, term_f_10, term_e_1);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
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
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_n_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_c_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_x_10);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym__2, term_t_12, term_e_1);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_e_1);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_c_12, term_e_1);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym__3, term_w_10, term_x_10, (ATerm) ATempty);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_t_12);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_u_14, term_e_1);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm explanation_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm c_117 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm c_3 (ATerm n_2, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm j_4 (ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm x_22, ATerm v_22, ATerm u_22, ATerm w_22, ATerm t);
ATerm RepairVarDec_2_0 (ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm t);
ATerm map1_1_0 (ATerm n_116 (ATerm), ATerm t);
static ATerm v_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm RepairDefinition_0_0 (ATerm t);
ATerm sometd_1_0 (ATerm u_102 (ATerm), ATerm t);
static ATerm l_4 (ATerm g_32, ATerm h_32, ATerm t);
static ATerm m_4 (ATerm m_30, ATerm n_30, ATerm t);
static ATerm o_4 (ATerm u_108 (ATerm), ATerm s_222, ATerm s_30, ATerm t);
static ATerm n_4 (ATerm i_30, ATerm j_30, ATerm t);
static ATerm p_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm a_130 (ATerm), ATerm t);
static ATerm c_14 (ATerm v_13, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm p_4 (ATerm o_30, ATerm t);
static ATerm q_4 (ATerm t_69, ATerm u_69, ATerm t);
static ATerm r_4 (ATerm i_32, ATerm j_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_16 (ATerm z_14, ATerm t);
static ATerm o_16 (ATerm e_15, ATerm f_15, ATerm i_15, ATerm t);
static ATerm r_16 (ATerm u_15, ATerm x_15, ATerm y_15, ATerm t);
static ATerm s_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_116 (ATerm), ATerm t);
static ATerm x_4 (ATerm j_43, ATerm k_43, ATerm t);
ATerm if_verbose2_1_0 (ATerm m_110 (ATerm), ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm a_5 (ATerm c_36, ATerm d_36, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm y_4 (ATerm q_41, ATerm r_41, ATerm p_41, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm t_4 (ATerm y_38, ATerm z_38, ATerm t);
ATerm foldr_2_0 (ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_110 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm need_help_1_0 (ATerm y_130 (ATerm), ATerm t);
static ATerm b_5 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm t);
static ATerm c_5 (ATerm l_46, ATerm m_46, ATerm t);
ATerm lookup_table_0_1 (ATerm c_43, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_46, ATerm r_46, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm v_4 (ATerm n_46, ATerm o_46, ATerm t);
static ATerm w_4 (ATerm s_46, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm l_116 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm b_133 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm parse_options_1_0 (ATerm a_133 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm a_131 (ATerm), ATerm b_131 (ATerm), ATerm c_131 (ATerm), ATerm d_131 (ATerm), ATerm t);
static ATerm x_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm iowrap_3_0 (ATerm j_130 (ATerm), ATerm k_130 (ATerm), ATerm l_130 (ATerm), ATerm t);
static ATerm g_6 (ATerm t);
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
  t = term_e_1;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_h_6;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_6), b_0), term_i_6);
  i_0 = t;
  t = SSL_printnl(e_0, i_0);
  t = term_m_6;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm explanation_0_0 (ATerm t)
{
  ATerm k_0 = NULL,p_0 = NULL;
  t = term_h_6;
  k_0 = t;
  t = (ATerm) ATinsert(ATempty, term_n_6);
  p_0 = t;
  t = SSL_printnl(k_0, p_0);
  t = (ATerm) ATmakeAppl(sym__2, term_h_6, (ATerm) ATinsert(ATempty, term_n_6));
  return(t);
}
ATerm at_end_1_0 (ATerm c_117 (ATerm), ATerm t)
{
  static ATerm j_2 (ATerm t);
  static ATerm j_2 (ATerm t)
  {
    ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL;
    h_2 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_2 = ATgetFirst((ATermList) t);
        g_2 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_0 = NULL,a_1 = NULL,t_1 = NULL;
          t = SSLgetAnnotations(h_2);
          w_0 = t;
          t = g_2;
          t = j_2(t);
          a_1 = t;
          t = (ATerm) ATinsert(CheckATermList(a_1), f_2);
          t_1 = t;
          t = SSLsetAnnotations(t_1, w_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_2;
        t = c_117(t);
      }
    return(t);
  }
  t = j_2(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL;
  r_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_0;
    }
  else
    {
      static ATerm n_0 (ATerm t);
      static ATerm n_0 (ATerm t)
      {
        t = not_null(t_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_0 = ATgetFirst((ATermList) t);
          if(((t_0 != NULL) && (t_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_0;
      t = at_end_1_0(n_0, t);
    }
  return(t);
}
static ATerm c_3 (ATerm n_2, ATerm t)
{
  ATerm o_2 = NULL;
  t = SSL_explode_term(n_2);
  if(match_cons(t, sym__2))
    {
      ATerm r_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_2;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_2 = NULL,y_2 = NULL,z_2 = NULL;
  z_2 = t;
  if(match_cons(t, sym__2))
    {
      u_2 = ATgetArgument(t, 0);
      y_2 = ATgetArgument(t, 1);
      {
        ATerm u_6 = t;
        int v_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm q_0 (ATerm t);
            static ATerm q_0 (ATerm t)
            {
              t = y_2;
              return(t);
            }
            t = u_2;
            t = at_end_1_0(q_0, t);
            LocalPopChoice(v_6);
          }
        else
          {
            t = u_6;
            t = c_3(z_2, t);
          }
      }
    }
  else
    {
      t = c_3(z_2, t);
    }
  return(t);
}
static ATerm j_4 (ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm x_22, ATerm v_22, ATerm u_22, ATerm w_22, ATerm t)
{
  ATerm d_3 = NULL,g_3 = NULL,h_3 = NULL,j_3 = NULL,k_3 = NULL,n_3 = NULL;
  g_3 = t;
  t = a_99(t);
  h_3 = t;
  t = g_3;
  t = b_99(t);
  j_3 = t;
  t = term_h_6;
  k_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_7), j_3), term_z_6), h_3), term_x_6), x_22), term_w_6);
  n_3 = t;
  t = SSL_printnl(k_3, n_3);
  t = (ATerm) ATmakeAppl(sym__2, u_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, v_22)));
  t = conc_0_0(t);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_22, (ATerm) ATmakeAppl(sym_FunType_2, d_3, w_22));
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,v_3 = NULL,x_3 = NULL,y_3 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      o_3 = ATgetArgument(t, 0);
      {
        ATerm c_7 = ATgetArgument(t, 1);
        if(match_cons(c_7, sym_FunType_2))
          {
            ATerm d_7 = ATgetArgument(c_7, 0);
            if(((ATgetType(d_7) == AT_LIST) && !(ATisEmpty(d_7))))
              {
                ATerm e_7 = ATgetFirst((ATermList) d_7);
                if(match_cons(e_7, sym_ConstType_1))
                  {
                    v_3 = ATgetArgument(e_7, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm g_7 = (ATerm) ATgetNext((ATermList) d_7);
                  x_3 = g_7;
                  if(((ATgetType(g_7) == AT_LIST) && !(ATisEmpty(g_7))))
                    {
                      ATerm h_7 = ATgetFirst((ATermList) g_7);
                      if(match_cons(h_7, sym_FunType_2))
                        {
                          ATerm j_7 = ATgetArgument(h_7, 0);
                          ATerm l_7 = ATgetArgument(h_7, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm i_7 = (ATerm) ATgetNext((ATermList) g_7);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            y_3 = ATgetArgument(c_7, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_4(a_99, b_99, o_3, v_3, x_3, y_3, t);
  return(t);
}
ATerm map1_1_0 (ATerm n_116 (ATerm), ATerm t)
{
  ATerm l_6 = NULL,p_6 = NULL,s_6 = NULL;
  l_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_6 = ATgetFirst((ATermList) t);
      s_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm o_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,q_1 = NULL,r_1 = NULL,x_1 = NULL,w_1 = NULL;
        t = SSLgetAnnotations(l_6);
        n_1 = t;
        t = p_6;
        t = n_116(t);
        q_1 = t;
        t = (ATerm) ATinsert(CheckATermList(s_6), q_1);
        w_1 = t;
        t = SSLsetAnnotations(w_1, n_1);
        r_1 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_1 = ATgetFirst((ATermList) t);
            l_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_1);
        j_1 = t;
        t = l_1;
        {
          ATerm q_7 = t;
          int r_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_116, t);
              LocalPopChoice(r_7);
            }
          else
            {
              t = q_7;
            }
        }
        m_1 = t;
        t = (ATerm) ATinsert(CheckATermList(m_1), k_1);
        x_1 = t;
        t = SSLsetAnnotations(x_1, j_1);
        LocalPopChoice(p_7);
      }
    else
      {
        t = o_7;
        {
          ATerm q_2 = NULL,v_2 = NULL,z_1 = NULL;
          t = SSLgetAnnotations(l_6);
          q_2 = t;
          t = s_6;
          t = map1_1_0(n_116, t);
          v_2 = t;
          t = (ATerm) ATinsert(CheckATermList(v_2), p_6);
          z_1 = t;
          t = SSLsetAnnotations(z_1, q_2);
        }
      }
  }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_t_7;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_t_7;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_u_7;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_u_7;
  return(t);
}
ATerm RepairDefinition_0_0 (ATerm t)
{
  ATerm f_7 = NULL,k_7 = NULL,m_7 = NULL,n_7 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      k_7 = ATgetArgument(t, 0);
      m_7 = ATgetArgument(t, 1);
      n_7 = ATgetArgument(t, 2);
      f_7 = ATgetArgument(t, 3);
      {
        ATerm s_7 = NULL;
        t = m_7;
        {
          static ATerm u_0 (ATerm t);
          static ATerm u_0 (ATerm t)
          {
            static ATerm x_0 (ATerm t);
            static ATerm x_0 (ATerm t)
            {
              t = k_7;
              return(t);
            }
            t = RepairVarDec_2_0(v_0, x_0, t);
            return(t);
          }
          t = map1_1_0(u_0, t);
        }
        s_7 = t;
        t = (ATerm) ATmakeAppl(sym_RDefT_4, k_7, s_7, n_7, f_7);
      }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          k_7 = ATgetArgument(t, 0);
          m_7 = ATgetArgument(t, 1);
          n_7 = ATgetArgument(t, 2);
          {
            ATerm w_7 = NULL;
            t = m_7;
            {
              static ATerm y_0 (ATerm t);
              static ATerm y_0 (ATerm t)
              {
                static ATerm b_1 (ATerm t);
                static ATerm b_1 (ATerm t)
                {
                  t = k_7;
                  return(t);
                }
                t = RepairVarDec_2_0(z_0, b_1, t);
                return(t);
              }
              t = map1_1_0(y_0, t);
            }
            w_7 = t;
            t = (ATerm) ATmakeAppl(sym_RDef_3, k_7, w_7, n_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              k_7 = ATgetArgument(t, 0);
              m_7 = ATgetArgument(t, 1);
              n_7 = ATgetArgument(t, 2);
              f_7 = ATgetArgument(t, 3);
              {
                ATerm k_8 = NULL;
                t = m_7;
                {
                  static ATerm c_1 (ATerm t);
                  static ATerm c_1 (ATerm t)
                  {
                    static ATerm f_1 (ATerm t);
                    static ATerm f_1 (ATerm t)
                    {
                      t = k_7;
                      return(t);
                    }
                    t = RepairVarDec_2_0(d_1, f_1, t);
                    return(t);
                  }
                  t = map1_1_0(c_1, t);
                }
                k_8 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, k_7, k_8, n_7, f_7);
              }
            }
          else
            {
              ATerm w_8 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  k_7 = ATgetArgument(t, 0);
                  m_7 = ATgetArgument(t, 1);
                  n_7 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = m_7;
              {
                static ATerm g_1 (ATerm t);
                static ATerm g_1 (ATerm t)
                {
                  static ATerm i_1 (ATerm t);
                  static ATerm i_1 (ATerm t)
                  {
                    t = k_7;
                    return(t);
                  }
                  t = RepairVarDec_2_0(h_1, i_1, t);
                  return(t);
                }
                t = map1_1_0(g_1, t);
              }
              w_8 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_3, k_7, w_8, n_7);
            }
        }
    }
  return(t);
}
ATerm sometd_1_0 (ATerm u_102 (ATerm), ATerm t)
{
  static ATerm x_8 (ATerm t);
  static ATerm x_8 (ATerm t)
  {
    ATerm v_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_102(t);
        LocalPopChoice(x_7);
      }
    else
      {
        t = v_7;
        t = SRTS_some(x_8, t);
      }
    return(t);
  }
  t = x_8(t);
  return(t);
}
static ATerm l_4 (ATerm g_32, ATerm h_32, ATerm t)
{
  ATerm e_9 = NULL;
  t = SSL_fputc(g_32, h_32);
  e_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_9);
  return(t);
}
static ATerm m_4 (ATerm m_30, ATerm n_30, ATerm t)
{
  ATerm i_9 = NULL;
  t = SSL_write_term_to_stream_text(m_30, n_30);
  i_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_9);
  return(t);
}
static ATerm o_4 (ATerm u_108 (ATerm), ATerm s_222, ATerm s_30, ATerm t)
{
  ATerm m_9 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_222, term_y_7);
  t = s_4(t);
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_9, s_30);
  t = u_108(t);
  t = fclose_0_0(t);
  t = s_30;
  return(t);
}
static ATerm n_4 (ATerm i_30, ATerm j_30, ATerm t)
{
  ATerm o_9 = NULL;
  t = SSL_write_term_to_stream_baf(i_30, j_30);
  o_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_9);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm w_3 = NULL,z_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_8 = ATgetArgument(t, 0);
      if(match_cons(a_8, sym_Stream_1))
        {
          w_3 = ATgetArgument(a_8, 0);
        }
      else
        _fail(t);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4(w_3, z_3, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm u_4 = NULL,z_4 = NULL,f_5 = NULL,g_5 = NULL,o_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_8 = ATgetArgument(t, 0);
      if(match_cons(b_8, sym_Stream_1))
        {
          g_5 = ATgetArgument(b_8, 0);
        }
      else
        _fail(t);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(g_5, o_5, t);
  u_4 = t;
  t = term_d_8;
  z_4 = t;
  t = u_4;
  if(match_cons(t, sym_Stream_1))
    {
      f_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_8, u_4);
  t = l_4(z_4, f_5, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm s_9 = NULL,u_9 = NULL,x_9 = NULL,z_9 = NULL,d_10 = NULL,h_10 = NULL,l_10 = NULL,n_10 = NULL,q_10 = NULL,r_10 = NULL,q_12 = NULL,r_12 = NULL,d_5 = NULL,k_2 = NULL;
  u_9 = t;
  if(match_cons(t, sym__2))
    {
      n_10 = ATgetArgument(t, 0);
      q_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_9);
  l_10 = t;
  t = n_10;
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_1 (ATerm t);
        static ATerm o_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((s_9 != NULL) && (s_9 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                s_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(o_1, t);
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        t = term_g_8;
        s_9 = t;
      }
  }
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_10, q_10);
  k_2 = t;
  t = SSLsetAnnotations(k_2, l_10);
  t = u_9;
  if(match_cons(t, sym__2))
    {
      z_9 = ATgetArgument(t, 0);
      d_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_9);
  x_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_9, (ATerm) ATmakeAppl(sym__2, not_null(s_9), d_10));
  d_5 = t;
  t = SSLsetAnnotations(d_5, x_9);
  h_10 = t;
  if(match_cons(t, sym__2))
    {
      q_12 = ATgetArgument(t, 0);
      r_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,e_5 = NULL;
        t = SSLgetAnnotations(h_10);
        m_3 = t;
        t = q_12;
        t = fetch_1_0(p_1, t);
        r_3 = t;
        t = r_12;
        if(match_cons(t, sym__2))
          {
            t_3 = ATgetArgument(t, 0);
            u_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_4(s_1, t_3, u_3, t);
        s_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_3, s_3);
        e_5 = t;
        t = SSLsetAnnotations(e_5, m_3);
        LocalPopChoice(j_8);
      }
    else
      {
        t = h_8;
        {
          ATerm e_4 = NULL,h_4 = NULL,i_4 = NULL,k_4 = NULL,h_5 = NULL;
          t = SSLgetAnnotations(h_10);
          e_4 = t;
          t = r_12;
          if(match_cons(t, sym__2))
            {
              i_4 = ATgetArgument(t, 0);
              k_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_4(u_1, i_4, k_4, t);
          h_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_12, h_4);
          h_5 = t;
          t = SSLsetAnnotations(h_5, e_4);
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
ATerm apply_strategy_1_0 (ATerm a_130 (ATerm), ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,y_12 = NULL,a_13 = NULL,c_13 = NULL;
  c_13 = t;
  t = dtime_0_0(t);
  t = c_13;
  t = a_130(t);
  a_13 = t;
  t = dtime_0_0(t);
  u_12 = t;
  t = a_13;
  if(match_cons(t, sym__2))
    {
      v_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_12), (ATerm) ATmakeAppl(sym_Runtime_1, u_12)), y_12);
  return(t);
}
static ATerm c_14 (ATerm v_13, ATerm t)
{
  t = SSL_fclose(v_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL;
  a_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_13 = ATgetArgument(t, 0);
      {
        ATerm n_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_13);
            LocalPopChoice(q_8);
          }
        else
          {
            t = n_8;
            t = c_14(a_14, t);
          }
      }
    }
  else
    {
      t = c_14(a_14, t);
    }
  return(t);
}
static ATerm p_4 (ATerm o_30, ATerm t)
{
  t = SSL_read_term_from_stream(o_30);
  return(t);
}
static ATerm q_4 (ATerm t_69, ATerm u_69, ATerm t)
{
  t = SSL_strcat(t_69, u_69);
  return(t);
}
static ATerm r_4 (ATerm i_32, ATerm j_32, ATerm t)
{
  ATerm d_14 = NULL;
  t = SSL_fopen(i_32, j_32);
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_14 = NULL;
  t = SSL_stdin_stream();
  m_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_14);
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
  ATerm q_14 = NULL;
  t = SSL_stderr_stream();
  q_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_14);
  return(t);
}
static ATerm n_16 (ATerm z_14, ATerm t)
{
  ATerm a_15 = NULL;
  t = SSL_explode_term(z_14);
  if(match_cons(t, sym__2))
    {
      ATerm r_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_8 = ATgetArgument(t, 1);
        if(((ATgetType(s_8) == AT_LIST) && !(ATisEmpty(s_8))))
          {
            a_15 = ATgetFirst((ATermList) s_8);
            {
              ATerm t_8 = (ATerm) ATgetNext((ATermList) s_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_16 (ATerm e_15, ATerm f_15, ATerm i_15, ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,n_15 = NULL,s_15 = NULL,m_5 = NULL;
  t = SSLgetAnnotations(i_15);
  n_15 = t;
  t = e_15;
  if(match_cons(t, sym_Path_1))
    {
      s_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_15, f_15);
  m_5 = t;
  t = SSLsetAnnotations(m_5, n_15);
  if(match_cons(t, sym__2))
    {
      j_15 = ATgetArgument(t, 0);
      k_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4(j_15, k_15, t);
  return(t);
}
static ATerm r_16 (ATerm u_15, ATerm x_15, ATerm y_15, ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,e_16 = NULL,n_5 = NULL;
  t = SSLgetAnnotations(y_15);
  b_16 = t;
  t = SSL_is_string(u_15);
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_16, x_15);
  n_5 = t;
  t = SSLsetAnnotations(n_5, b_16);
  if(match_cons(t, sym__2))
    {
      z_15 = ATgetArgument(t, 0);
      a_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4(z_15, a_16, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm i_16 = NULL,l_16 = NULL,m_16 = NULL;
  i_16 = t;
  if(match_cons(t, sym__2))
    {
      l_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
      {
        ATerm u_8 = t;
        int v_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_16(i_16, t);
            LocalPopChoice(v_8);
          }
        else
          {
            t = u_8;
            {
              ATerm y_8 = t;
              int z_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_16(l_16, m_16, i_16, t);
                  LocalPopChoice(z_8);
                }
              else
                {
                  t = y_8;
                  t = r_16(l_16, m_16, i_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_16(i_16, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,x_16 = NULL,l_17 = NULL;
  l_17 = t;
  {
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_17, term_c_9);
        t = s_4(t);
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        {
          ATerm o_6 = NULL,q_6 = NULL;
          t = term_d_9;
          q_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_9, l_17);
          t = q_4(q_6, l_17, t);
          o_6 = t;
          t = SSL_perror(o_6);
          _fail(t);
        }
      }
  }
  u_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_4(x_16, t);
  t_16 = t;
  t = u_16;
  t = fclose_0_0(t);
  t = t_16;
  return(t);
}
ATerm fetch_1_0 (ATerm v_116 (ATerm), ATerm t)
{
  static ATerm m_19 (ATerm t);
  static ATerm m_19 (ATerm t)
  {
    ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
    j_19 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_19 = ATgetFirst((ATermList) t);
        l_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_9 = t;
      int g_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_6 = NULL,b_7 = NULL,s_5 = NULL;
          t = SSLgetAnnotations(j_19);
          y_6 = t;
          t = k_19;
          t = v_116(t);
          b_7 = t;
          t = (ATerm) ATinsert(CheckATermList(l_19), b_7);
          s_5 = t;
          t = SSLsetAnnotations(s_5, y_6);
          LocalPopChoice(g_9);
        }
      else
        {
          t = f_9;
          {
            ATerm z_7 = NULL,c_8 = NULL,t_5 = NULL;
            t = SSLgetAnnotations(j_19);
            z_7 = t;
            t = l_19;
            t = m_19(t);
            c_8 = t;
            t = (ATerm) ATinsert(CheckATermList(c_8), k_19);
            t_5 = t;
            t = SSLsetAnnotations(t_5, z_7);
          }
        }
    }
    return(t);
  }
  t = m_19(t);
  return(t);
}
static ATerm x_4 (ATerm j_43, ATerm k_43, ATerm t)
{
  ATerm r_19 = NULL;
  t = lookup_table_0_1(j_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_5(k_43, r_19, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_110 (ATerm), ATerm t)
{
  ATerm z_19 = NULL;
  z_19 = t;
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_20 = NULL,e_20 = NULL,h_20 = NULL;
        t = term_l_9;
        e_20 = t;
        t = term_n_9;
        h_20 = t;
        t = term_p_9;
        t = x_4(e_20, h_20, t);
        d_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_20, term_r_9);
        t = geq_0_0(t);
        t = z_19;
        t = m_110(t);
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        t = z_19;
      }
  }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm m_20 = NULL;
  m_20 = t;
  if(match_string(t, "-k"))
    {
      t = m_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_20;
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm n_20 = NULL,p_20 = NULL,q_20 = NULL;
  n_20 = t;
  t = SSL_string_to_int(n_20);
  p_20 = t;
  t = term_t_9;
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_9, p_20);
  t = a_5(q_20, p_20, t);
  t = n_20;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_v_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_1, y_1, a_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm s_20 = NULL;
  s_20 = t;
  if(match_string(t, "-S"))
    {
      t = s_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_20;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm w_20 = NULL,z_20 = NULL;
  t = term_n_9;
  w_20 = t;
  t = term_w_9;
  z_20 = t;
  t = term_a_10;
  t = a_5(w_20, z_20, t);
  t = term_b_10;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_c_10;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm a_21 = NULL,c_21 = NULL,d_21 = NULL;
  a_21 = t;
  t = SSL_string_to_int(a_21);
  c_21 = t;
  t = term_n_9;
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_9, c_21);
  t = a_5(d_21, c_21, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_21);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_e_10;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL;
  t = term_f_10;
  e_21 = t;
  t = term_e_1;
  f_21 = t;
  t = term_i_10;
  t = a_5(e_21, f_21, t);
  t = term_j_10;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_o_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_2, c_2, d_2, t);
      LocalPopChoice(t_10);
    }
  else
    {
      t = p_10;
      {
        ATerm u_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_2, i_2, l_2, t);
            LocalPopChoice(v_10);
          }
        else
          {
            t = u_10;
            t = Option_3_0(m_2, p_2, r_2, t);
          }
      }
    }
  return(t);
}
static ATerm a_5 (ATerm c_36, ATerm d_36, ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL;
  t = term_l_9;
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_9, c_36, d_36);
  t = lookup_table_0_1(g_21, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_5(c_36, d_36, h_21, t);
  t = (ATerm) ATmakeAppl(sym__3, term_l_9, c_36, d_36);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
      t = term_e_1;
      t = g_0(t);
      n_21 = t;
      t = term_w_10;
      o_21 = t;
      t = term_x_10;
      p_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_10, term_x_10, n_21);
      t = y_4(o_21, p_21, n_21, t);
      _fail(t);
    }
  else
    {
      ATerm s_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_21 = ATgetFirst((ATermList) t);
          m_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_21;
      t = d_0(t);
      t = term_e_1;
      t = f_0(t);
      s_21 = t;
      t = (ATerm) ATinsert(CheckATermList(m_21), s_21);
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm u_21 = NULL;
  u_21 = t;
  if(match_string(t, "-o"))
    {
      t = u_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_21;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  v_21 = t;
  t = term_y_10;
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_10, v_21);
  t = a_5(w_21, v_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_21);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_z_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, t_2, w_2, t);
  return(t);
}
static ATerm y_4 (ATerm q_41, ATerm r_41, ATerm p_41, ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,y_22 = NULL;
  y_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_41, r_41);
  {
    ATerm a_11 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_11 = ATgetArgument(t, 0);
            ATerm g_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_41, r_41);
        t = x_4(q_41, r_41, t);
        LocalPopChoice(b_11);
      }
    else
      {
        t = a_11;
        t = (ATerm) ATempty;
      }
  }
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_41, r_41, (ATerm) ATinsert(CheckATermList(z_21), p_41));
  t = lookup_table_0_1(q_41, t);
  y_22 = t;
  t = (ATerm) ATinsert(CheckATermList(z_21), p_41);
  a_22 = t;
  t = y_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_5(r_41, a_22, b_22, t);
  t = y_21;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
      t = term_e_1;
      t = o_0(t);
      j_23 = t;
      t = term_w_10;
      k_23 = t;
      t = term_x_10;
      l_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_10, term_x_10, j_23);
      t = y_4(k_23, l_23, j_23, t);
      _fail(t);
    }
  else
    {
      ATerm p_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_23 = ATgetFirst((ATermList) t);
          g_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_23 = ATgetFirst((ATermList) t);
          i_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_23;
      t = l_0(t);
      t = h_23;
      t = m_0(t);
      p_23 = t;
      t = (ATerm) ATinsert(CheckATermList(i_23), p_23);
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm r_23 = NULL;
  r_23 = t;
  if(match_string(t, "-i"))
    {
      t = r_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_23;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  s_23 = t;
  t = term_h_11;
  t_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_11, s_23);
  t = a_5(t_23, s_23, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_23);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_i_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_2, a_3, b_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_1;
  t = whoami_0_0(t);
  u_23 = t;
  t = term_h_6;
  w_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_11), u_23);
  x_23 = t;
  t = SSL_printnl(w_23, x_23);
  t = term_m_6;
  v_23 = t;
  t = SSL_exit(v_23);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL;
  t = term_l_9;
  y_23 = t;
  t = term_n_11;
  z_23 = t;
  t = term_o_11;
  t = x_4(y_23, z_23, t);
  return(t);
}
static ATerm t_4 (ATerm y_38, ATerm z_38, ATerm t)
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_38, z_38);
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      t = SSL_addr(y_38, z_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
  b_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_24;
      t = i_122(t);
    }
  else
    {
      ATerm g_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_24 = ATgetFirst((ATermList) t);
          d_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_24;
      t = foldr_2_0(i_122, j_122, t);
      g_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_24, g_24);
      t = j_122(t);
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
  t = term_w_9;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL;
  if(match_cons(t, sym__2))
    {
      o_8 = ATgetArgument(t, 0);
      p_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_4(o_8, p_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_24 = NULL,i_8 = NULL,l_8 = NULL;
  t = times_0_0(t);
  l_8 = t;
  t = SSL_explode_term(l_8);
  if(match_cons(t, sym__2))
    {
      ATerm r_11 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8;
  t = foldr_2_0(e_3, f_3, t);
  j_24 = t;
  t = SSL_TicksToSeconds(j_24);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
  u_24 = t;
  if(match_cons(t, sym__2))
    {
      v_24 = ATgetArgument(t, 0);
      w_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_24;
        if((v_24 != t))
          {
            _fail(t);
          }
        t = u_24;
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        t = (ATerm) ATmakeAppl(sym__2, v_24, w_24);
        {
          ATerm u_11 = t;
          int v_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_24, w_24);
              LocalPopChoice(v_11);
            }
          else
            {
              t = u_11;
              t = SSL_gtr(v_24, w_24);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_24, w_24);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_110 (ATerm), ATerm t)
{
  ATerm a_25 = NULL;
  a_25 = t;
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
        t = term_l_9;
        d_25 = t;
        t = term_n_9;
        e_25 = t;
        t = term_p_9;
        t = x_4(d_25, e_25, t);
        c_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_25, term_m_6);
        t = geq_0_0(t);
        t = a_25;
        t = l_110(t);
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = a_25;
      }
  }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,j_25 = NULL,k_25 = NULL;
  t = run_time_0_0(t);
  g_25 = t;
  t = term_e_1;
  t = whoami_0_0(t);
  h_25 = t;
  t = term_h_6;
  j_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_11), g_25), term_y_11), h_25);
  k_25 = t;
  t = SSL_printnl(j_25, k_25);
  t = (ATerm) ATmakeAppl(sym__2, term_h_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_11), g_25), term_y_11), h_25));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_9;
  l_25 = t;
  t = SSL_exit(l_25);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL;
  w_25 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_25;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_25 = ATgetArgument(t, 0);
          {
            ATerm h_9 = NULL,w_5 = NULL;
            t = SSLgetAnnotations(w_25);
            h_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_25);
            w_5 = t;
            t = SSLsetAnnotations(w_5, h_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_25;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_130 (ATerm), ATerm t)
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_25 = NULL,p_25 = NULL;
      t = term_l_9;
      o_25 = t;
      t = term_c_12;
      p_25 = t;
      t = term_d_12;
      t = x_4(o_25, p_25, t);
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      t = fetch_1_0(l_3, t);
    }
  t = y_130(t);
  return(t);
}
static ATerm b_5 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm t)
{
  ATerm y_25 = NULL;
  t = SSL_hashtable_put(k_46, i_46, j_46);
  y_25 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_25);
  return(t);
}
static ATerm c_5 (ATerm l_46, ATerm m_46, ATerm t)
{
  t = SSL_hashtable_get(m_46, l_46);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_43, ATerm t)
{
  ATerm h_26 = NULL;
  t = table_hashtable_0_0(t);
  h_26 = t;
  {
    ATerm e_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_9 = NULL;
        t = h_26;
        if(match_cons(t, sym_Hashtable_1))
          {
            q_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_5(c_43, q_9, t);
        LocalPopChoice(f_12);
      }
    else
      {
        t = e_12;
        {
          ATerm y_9 = NULL;
          t = c_43;
          t = table_create_0_0(t);
          t = h_26;
          if(match_cons(t, sym_Hashtable_1))
            {
              y_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_5(c_43, y_9, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_46, ATerm r_46, ATerm t)
{
  ATerm k_26 = NULL;
  t = SSL_hashtable_create(q_46, r_46);
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_26);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,p_26 = NULL,q_26 = NULL;
  l_26 = t;
  t = term_g_12;
  p_26 = t;
  t = term_h_12;
  q_26 = t;
  t = l_26;
  t = new_hashtable_0_2(p_26, q_26, t);
  m_26 = t;
  t = l_26;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_5(l_26, m_26, n_26, t);
  t = l_26;
  return(t);
}
static ATerm v_4 (ATerm n_46, ATerm o_46, ATerm t)
{
  ATerm r_26 = NULL;
  t = SSL_hashtable_remove(o_46, n_46);
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_26);
  return(t);
}
static ATerm w_4 (ATerm s_46, ATerm t)
{
  ATerm s_26 = NULL;
  t = SSL_hashtable_destroy(s_46);
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_26);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm t_26 = NULL;
  t = SSL_table_hashtable();
  t_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_26);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
  u_26 = t;
  t = table_hashtable_0_0(t);
  v_26 = t;
  t = lookup_table_0_1(u_26, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_4(x_26, t);
  t = v_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_4(u_26, w_26, t);
  t = u_26;
  return(t);
}
ATerm map_1_0 (ATerm l_116 (ATerm), ATerm t)
{
  static ATerm m_27 (ATerm t);
  static ATerm m_27 (ATerm t)
  {
    ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
    j_27 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_27;
      }
    else
      {
        ATerm g_10 = NULL,k_10 = NULL,m_10 = NULL,b_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_27 = ATgetFirst((ATermList) t);
            l_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_27);
        g_10 = t;
        t = k_27;
        t = l_116(t);
        k_10 = t;
        t = l_27;
        t = m_27(t);
        m_10 = t;
        t = (ATerm) ATinsert(CheckATermList(m_10), k_10);
        b_6 = t;
        t = SSLsetAnnotations(b_6, g_10);
      }
    return(t);
  }
  t = m_27(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_27 = ATgetFirst((ATermList) t);
      q_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_27 = NULL,v_27 = NULL;
        static ATerm p_3 (ATerm t);
        static ATerm p_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_27)), not_null(v_27));
          return(t);
        }
        t = q_27;
        t = j_0(t);
        if(((u_27 != NULL) && (u_27 != t)))
          _fail(t);
        else
          u_27 = t;
        t = p_27;
        t = h_0(t);
        if(((v_27 != NULL) && (v_27 != t)))
          _fail(t);
        else
          v_27 = t;
        t = q_27;
        t = reverse_acc_2_0(h_0, p_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_1;
      t = j_0(t);
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,f_6 = NULL;
  d_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_28);
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_28);
  f_6 = t;
  t = SSLsetAnnotations(f_6, b_28);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm f_28 = NULL;
  f_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_28), term_i_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL;
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_27 = NULL,a_28 = NULL;
      t = term_l_9;
      z_27 = t;
      t = term_n_11;
      a_28 = t;
      t = term_o_11;
      t = x_4(z_27, a_28, t);
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      t = fetch_1_0(q_3, t);
    }
  t = term_l_12;
  t = echo_0_0(t);
  t = term_w_10;
  x_27 = t;
  t = term_x_10;
  y_27 = t;
  t = term_m_12;
  t = x_4(x_27, y_27, t);
  t = reverse_acc_2_0(_id, a_4, t);
  t = map_1_0(b_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
  h_28 = t;
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_12 = ATgetFirst((ATermList) t);
                ATerm s_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_28;
          }
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
        t = (ATerm) ATinsert(ATempty, h_28);
      }
  }
  i_28 = t;
  t = term_g_8;
  j_28 = t;
  t = SSL_printnl(j_28, i_28);
  t = h_28;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL;
  t = term_l_9;
  n_28 = t;
  t = term_n_11;
  o_28 = t;
  t = term_o_11;
  t = x_4(n_28, o_28, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL;
  t = term_t_12;
  p_28 = t;
  t = term_e_1;
  q_28 = t;
  t = term_w_12;
  t = a_5(p_28, q_28, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_x_12;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL;
  t = term_t_12;
  t_28 = t;
  t = term_e_1;
  u_28 = t;
  t = term_w_12;
  t = a_5(t_28, u_28, t);
  t = term_z_12;
  r_28 = t;
  t = term_e_1;
  s_28 = t;
  t = term_b_13;
  t = a_5(r_28, s_28, t);
  t = term_d_13;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_e_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_4, d_4, f_4, t);
      LocalPopChoice(g_13);
    }
  else
    {
      t = f_13;
      t = Option_3_0(g_4, i_5, j_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,j_6 = NULL;
  a_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_28 = ATgetFirst((ATermList) t);
      x_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_29);
  v_28 = t;
  t = w_28;
  t = j_86(t);
  y_28 = t;
  t = x_28;
  t = k_86(t);
  z_28 = t;
  t = (ATerm) ATinsert(CheckATermList(z_28), y_28);
  j_6 = t;
  t = SSLsetAnnotations(j_6, v_28);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_133 (ATerm), ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,k_29 = NULL,l_29 = NULL,t_6 = NULL;
  f_29 = t;
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_13;
        t = b_133(t);
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
      }
  }
  t = f_29;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_29 = ATgetFirst((ATermList) t);
      i_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_29);
  g_29 = t;
  t = term_n_11;
  l_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, h_29);
  t = a_5(l_29, h_29, t);
  t = i_29;
  {
    static ATerm v_29 (ATerm t);
    static ATerm v_29 (ATerm t)
    {
      ATerm k_13 = t;
      int l_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_13 = t;
          int n_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_29 = NULL;
              o_29 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_29;
              LocalPopChoice(n_13);
            }
          else
            {
              t = m_13;
              t = b_133(t);
              t = Cons_2_0(_id, v_29, t);
            }
          LocalPopChoice(l_13);
        }
      else
        {
          t = k_13;
          {
            ATerm r_29 = NULL,s_29 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_29 = ATgetFirst((ATermList) t);
                s_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_29), (ATerm) ATmakeAppl(sym_Undefined_1, r_29));
          }
        }
      return(t);
    }
    t = v_29(t);
  }
  k_29 = t;
  t = (ATerm) ATinsert(CheckATermList(k_29), (ATerm) ATmakeAppl(sym_Program_1, h_29));
  t_6 = t;
  t = SSLsetAnnotations(t_6, g_29);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm k_30 = NULL;
  k_30 = t;
  if(match_string(t, "--help"))
    {
      t = k_30;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_30;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_30;
        }
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm l_30 = NULL,p_30 = NULL;
  t = term_c_12;
  l_30 = t;
  t = term_e_1;
  p_30 = t;
  t = term_o_13;
  t = a_5(l_30, p_30, t);
  t = term_p_13;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_q_13;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_133 (ATerm), ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL;
  c_30 = t;
  t = term_w_10;
  d_30 = t;
  t = term_r_13;
  t = lookup_table_0_1(d_30, t);
  h_30 = t;
  t = term_x_10;
  e_30 = t;
  t = (ATerm) ATempty;
  f_30 = t;
  t = h_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_5(e_30, f_30, g_30, t);
  t = c_30;
  {
    static ATerm k_5 (ATerm t);
    static ATerm k_5 (ATerm t)
    {
      ATerm s_13 = t;
      int t_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_133(t);
          LocalPopChoice(t_13);
        }
      else
        {
          t = s_13;
          {
            ATerm u_13 = t;
            int w_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_5, p_5, q_5, t);
                LocalPopChoice(w_13);
              }
            else
              {
                t = u_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_5, t);
  }
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_31 = NULL;
        c_31 = t;
        {
          ATerm b_14 = t;
          int e_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_11 = NULL;
              t = c_31;
              {
                ATerm f_14 = t;
                int g_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_11 = NULL,e_11 = NULL;
                    t = term_l_9;
                    d_11 = t;
                    t = term_c_12;
                    e_11 = t;
                    t = term_d_12;
                    t = x_4(d_11, e_11, t);
                    LocalPopChoice(g_14);
                  }
                else
                  {
                    t = f_14;
                    t = fetch_1_0(r_5, t);
                  }
              }
              t = c_31;
              t = default_system_usage_0_0(t);
              t = term_w_9;
              c_11 = t;
              t = SSL_exit(c_11);
              LocalPopChoice(e_14);
            }
          else
            {
              t = b_14;
              {
                ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL;
                t = term_l_9;
                k_11 = t;
                t = term_t_12;
                l_11 = t;
                t = term_h_14;
                t = x_4(k_11, l_11, t);
                t = c_31;
                t = default_system_about_0_0(t);
                t = term_w_9;
                j_11 = t;
                t = SSL_exit(j_11);
              }
            }
        }
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        {
          ATerm i_14 = t;
          int j_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
              static ATerm u_5 (ATerm t);
              static ATerm u_5 (ATerm t)
              {
                ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,m_8 = NULL;
                i_31 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    h_31 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(i_31);
                g_31 = t;
                t = h_31;
                if(((a_30 != NULL) && (a_30 != t)))
                  _fail(t);
                else
                  a_30 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, h_31);
                m_8 = t;
                t = SSLsetAnnotations(m_8, g_31);
                return(t);
              }
              t = fetch_1_0(u_5, t);
              t = term_h_6;
              e_31 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_30)), term_k_14);
              f_31 = t;
              t = SSL_printnl(e_31, f_31);
              t = (ATerm) ATmakeAppl(sym__2, term_h_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_30)), term_k_14));
              t = default_system_usage_0_0(t);
              t = term_m_6;
              d_31 = t;
              t = SSL_exit(d_31);
              LocalPopChoice(j_14);
            }
          else
            {
              t = i_14;
            }
        }
      }
  }
  b_30 = t;
  t = term_w_10;
  t = table_destroy_0_0(t);
  t = b_30;
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_131 (ATerm), ATerm b_131 (ATerm), ATerm c_131 (ATerm), ATerm d_131 (ATerm), ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL;
  t = parse_options_1_0(a_131, t);
  n_31 = t;
  t = term_l_14;
  t = table_create_0_0(t);
  t = term_l_14;
  o_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_14, term_n_14, n_31);
  t = lookup_table_0_1(o_31, t);
  r_31 = t;
  t = term_n_14;
  p_31 = t;
  t = r_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_5(p_31, n_31, q_31, t);
  t = n_31;
  t = c_131(t);
  {
    ATerm o_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_131, t);
        LocalPopChoice(r_14);
      }
    else
      {
        t = o_14;
        {
          ATerm s_14 = t;
          int t_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_131(t);
              t = report_success_0_0(t);
              LocalPopChoice(t_14);
            }
          else
            {
              t = s_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = if_verbose2_1_0(d_6, t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL;
  t = term_u_14;
  s_31 = t;
  t = term_e_1;
  t_31 = t;
  t = term_v_14;
  t = a_5(s_31, t_31, t);
  t = term_w_14;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_x_14;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL;
  u_31 = t;
  t = term_l_9;
  y_31 = t;
  t = term_n_11;
  z_31 = t;
  t = term_o_11;
  t = x_4(y_31, z_31, t);
  v_31 = t;
  t = term_h_6;
  w_31 = t;
  t = (ATerm) ATinsert(ATempty, v_31);
  x_31 = t;
  t = SSL_printnl(w_31, x_31);
  t = u_31;
  return(t);
}
ATerm iowrap_3_0 (ATerm j_130 (ATerm), ATerm k_130 (ATerm), ATerm l_130 (ATerm), ATerm t)
{
  static ATerm v_5 (ATerm t);
  static ATerm y_5 (ATerm t);
  static ATerm v_5 (ATerm t)
  {
    ATerm y_14 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_130(t);
        LocalPopChoice(b_15);
      }
    else
      {
        t = y_14;
        {
          ATerm c_15 = t;
          int d_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(d_15);
            }
          else
            {
              t = c_15;
              {
                ATerm g_15 = t;
                int h_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(h_15);
                  }
                else
                  {
                    t = g_15;
                    {
                      ATerm l_15 = t;
                      int m_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(z_5, a_6, c_6, t);
                          LocalPopChoice(m_15);
                        }
                      else
                        {
                          t = l_15;
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
  static ATerm y_5 (ATerm t)
  {
    ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL;
    b_32 = t;
    {
      ATerm q_15 = t;
      int r_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm e_6 (ATerm t);
          static ATerm e_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((a_32 != NULL) && (a_32 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_32 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_6, t);
          LocalPopChoice(r_15);
        }
      else
        {
          t = q_15;
          t = term_t_15;
          a_32 = t;
        }
    }
    t = not_null(a_32);
    t = ReadFromFile_0_0(t);
    c_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_32, c_32);
    t = apply_strategy_1_0(j_130, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(v_5, l_130, x_5, y_5, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,s_10 = NULL;
  o_32 = t;
  if(match_cons(t, sym__2))
    {
      f_32 = ATgetArgument(t, 0);
      m_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_32);
  e_32 = t;
  t = m_32;
  {
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_32 = NULL;
        t = sometd_1_0(RepairDefinition_0_0, t);
        p_32 = t;
        t = explanation_0_0(t);
        t = p_32;
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
      }
  }
  n_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_32, n_32);
  s_10 = t;
  t = SSLsetAnnotations(s_10, e_32);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(g_6, _fail, default_usage_0_0, t);
  return(t);
}

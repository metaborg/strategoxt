#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Path_2;
static Symbol sym_VarDec_2;
static Symbol sym_SDefT_4;
static Symbol sym_SDef_3;
static Symbol sym_FunType_2;
static Symbol sym_ConstType_1;
static Symbol sym_RDefT_4;
static Symbol sym_RDef_3;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Path_1;
static Symbol sym_Undefined_0;
static Symbol sym_Hashtable_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
static ATerm term_n_15;
static ATerm term_m_15;
static ATerm term_l_15;
static ATerm term_x_14;
static ATerm term_u_14;
static ATerm term_r_14;
static ATerm term_o_14;
static ATerm term_m_14;
static ATerm term_a_14;
static ATerm term_z_13;
static ATerm term_x_13;
static ATerm term_v_13;
static ATerm term_s_13;
static ATerm term_i_13;
static ATerm term_d_13;
static ATerm term_c_13;
static ATerm term_b_13;
static ATerm term_a_13;
static ATerm term_x_12;
static ATerm term_w_12;
static ATerm term_u_12;
static ATerm term_q_12;
static ATerm term_n_12;
static ATerm term_k_12;
static ATerm term_j_12;
static ATerm term_i_12;
static ATerm term_r_11;
static ATerm term_q_11;
static ATerm term_o_11;
static ATerm term_i_11;
static ATerm term_d_11;
static ATerm term_z_10;
static ATerm term_y_10;
static ATerm term_x_10;
static ATerm term_w_10;
static ATerm term_v_10;
static ATerm term_s_10;
static ATerm term_r_10;
static ATerm term_o_10;
static ATerm term_n_10;
static ATerm term_m_10;
static ATerm term_l_10;
static ATerm term_d_10;
static ATerm term_c_10;
static ATerm term_b_10;
static ATerm term_a_10;
static ATerm term_z_9;
static ATerm term_u_9;
static ATerm term_t_9;
static ATerm term_c_9;
static ATerm term_y_8;
static ATerm term_x_8;
static ATerm term_w_8;
static ATerm term_r_8;
static ATerm term_j_8;
static ATerm term_i_8;
static ATerm term_m_7;
static ATerm term_l_7;
static ATerm term_h_7;
static ATerm term_g_7;
static ATerm term_e_7;
static ATerm term_d_7;
static ATerm term_z_6;
static ATerm term_v_6;
static ATerm term_q_6;
static ATerm term_p_6;
static ATerm term_v_5;
static ATerm term_u_5;
static ATerm term_t_5;
static ATerm term_s_5;
static ATerm term_j_5;
static ATerm term_q_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_0));
  term_q_0 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: argument '", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("' of ", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" '", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("' starts with constant type", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym__2, term_d_7, term_e_7);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym__2, term_d_7, term_l_7);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym__2, term_d_7, term_r_8);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym__2, term_d_7, term_y_8);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_b_10);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_o_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_t_9);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__2, term_d_7, term_n_10);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_t_9);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_t_9);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym__2, term_s_13, term_t_9);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__3, term_a_10, term_b_10, (ATerm) ATempty);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym__2, term_d_7, term_s_13);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym__2, term_d_7, term_u_12);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__2, term_l_7, term_t_9);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm explanation_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm y_132 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm o_2 (ATerm d_2, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm c_4 (ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm v_23, ATerm t_23, ATerm s_23, ATerm u_23, ATerm t);
ATerm RepairVarDec_2_0 (ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm t);
ATerm map1_1_0 (ATerm l_132 (ATerm), ATerm t);
static ATerm n_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm RepairDefinition_0_0 (ATerm t);
ATerm sometd_1_0 (ATerm l_116 (ATerm), ATerm t);
static ATerm d_4 (ATerm e_33, ATerm f_33, ATerm t);
static ATerm e_4 (ATerm k_31, ATerm l_31, ATerm t);
static ATerm g_4 (ATerm m_122 (ATerm), ATerm p_240, ATerm q_31, ATerm t);
static ATerm f_4 (ATerm g_31, ATerm h_31, ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm output_1_0 (ATerm p_148 (ATerm), ATerm t);
static ATerm t_10 (ATerm k_10, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm h_4 (ATerm m_31, ATerm t);
static ATerm i_4 (ATerm i_76, ATerm j_76, ATerm t);
static ATerm j_4 (ATerm g_33, ATerm h_33, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm p_13 (ATerm l_11, ATerm t);
static ATerm t_13 (ATerm u_11, ATerm v_11, ATerm y_11, ATerm t);
static ATerm u_13 (ATerm o_12, ATerm p_12, ATerm r_12, ATerm t);
static ATerm k_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm q_148 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm j_132 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm l_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm default_system_usage_2_0 (ATerm o_150 (ATerm), ATerm p_150 (ATerm), ATerm t);
static ATerm a_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm t_4 (ATerm g_37, ATerm h_37, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_4 (ATerm x_42, ATerm y_42, ATerm w_42, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_4 (ATerm f_40, ATerm g_40, ATerm t);
ATerm foldr_2_0 (ATerm e_138 (ATerm), ATerm f_138 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_124 (ATerm), ATerm t);
static ATerm n_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm u_4 (ATerm m_47, ATerm n_47, ATerm o_47, ATerm t);
ATerm lookup_table_0_1 (ATerm j_44, ATerm t);
ATerm new_hashtable_0_2 (ATerm u_47, ATerm v_47, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm n_4 (ATerm r_47, ATerm s_47, ATerm t);
static ATerm o_4 (ATerm w_47, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_132 (ATerm), ATerm t);
static ATerm v_4 (ATerm p_47, ATerm q_47, ATerm t);
static ATerm q_4 (ATerm q_44, ATerm r_44, ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_150 (ATerm), ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm parse_options_3_0 (ATerm g_150 (ATerm), ATerm h_150 (ATerm), ATerm i_150 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm j_148 (ATerm), ATerm k_148 (ATerm), ATerm l_148 (ATerm), ATerm m_148 (ATerm), ATerm n_148 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm explanation_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL;
  t = term_q_0;
  a_0 = t;
  t = (ATerm) ATinsert(ATempty, term_j_5);
  b_0 = t;
  t = SSL_printnl(a_0, b_0);
  t = (ATerm) ATmakeAppl(sym__2, term_q_0, (ATerm) ATinsert(ATempty, term_j_5));
  return(t);
}
ATerm at_end_1_0 (ATerm y_132 (ATerm), ATerm t)
{
  static ATerm x_1 (ATerm t);
  static ATerm x_1 (ATerm t)
  {
    ATerm n_1 = NULL,o_1 = NULL,t_1 = NULL;
    t_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_1 = ATgetFirst((ATermList) t);
        o_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_0 = NULL,d_1 = NULL,u_0 = NULL;
          t = SSLgetAnnotations(t_1);
          t_0 = t;
          t = o_1;
          t = x_1(t);
          d_1 = t;
          t = (ATerm) ATinsert(CheckATermList(d_1), n_1);
          u_0 = t;
          t = SSLsetAnnotations(u_0, t_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_1;
        t = y_132(t);
      }
    return(t);
  }
  t = x_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_0 = NULL,h_0 = NULL,i_0 = NULL;
  e_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_0;
    }
  else
    {
      static ATerm c_0 (ATerm t);
      static ATerm c_0 (ATerm t)
      {
        t = not_null(i_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_0 = ATgetFirst((ATermList) t);
          if(((i_0 != NULL) && (i_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_0;
      t = at_end_1_0(c_0, t);
    }
  return(t);
}
static ATerm o_2 (ATerm d_2, ATerm t)
{
  ATerm e_2 = NULL;
  t = SSL_explode_term(d_2);
  if(match_cons(t, sym__2))
    {
      ATerm k_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_5) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_2;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL;
  k_2 = t;
  if(match_cons(t, sym__2))
    {
      i_2 = ATgetArgument(t, 0);
      j_2 = ATgetArgument(t, 1);
      {
        ATerm m_5 = t;
        int q_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_0 (ATerm t);
            static ATerm k_0 (ATerm t)
            {
              t = j_2;
              return(t);
            }
            t = i_2;
            t = at_end_1_0(k_0, t);
            LocalPopChoice(q_5);
          }
        else
          {
            t = m_5;
            t = o_2(k_2, t);
          }
      }
    }
  else
    {
      t = o_2(k_2, t);
    }
  return(t);
}
static ATerm c_4 (ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm v_23, ATerm t_23, ATerm s_23, ATerm u_23, ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,t_2 = NULL,u_2 = NULL,w_2 = NULL;
  q_2 = t;
  t = s_112(t);
  r_2 = t;
  t = q_2;
  t = t_112(t);
  t_2 = t;
  t = term_q_0;
  u_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_5), t_2), term_u_5), r_2), term_t_5), v_23), term_s_5);
  w_2 = t;
  t = SSL_printnl(u_2, w_2);
  t = (ATerm) ATmakeAppl(sym__2, s_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, t_23)));
  t = conc_0_0(t);
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, v_23, (ATerm) ATmakeAppl(sym_FunType_2, p_2, u_23));
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm t)
{
  ATerm x_2 = NULL,b_3 = NULL,e_3 = NULL,f_3 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      x_2 = ATgetArgument(t, 0);
      {
        ATerm w_5 = ATgetArgument(t, 1);
        if(match_cons(w_5, sym_FunType_2))
          {
            ATerm x_5 = ATgetArgument(w_5, 0);
            if(((ATgetType(x_5) == AT_LIST) && !(ATisEmpty(x_5))))
              {
                ATerm y_5 = ATgetFirst((ATermList) x_5);
                if(match_cons(y_5, sym_ConstType_1))
                  {
                    b_3 = ATgetArgument(y_5, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm d_6 = (ATerm) ATgetNext((ATermList) x_5);
                  e_3 = d_6;
                  if(((ATgetType(d_6) == AT_LIST) && !(ATisEmpty(d_6))))
                    {
                      ATerm e_6 = ATgetFirst((ATermList) d_6);
                      if(match_cons(e_6, sym_FunType_2))
                        {
                          ATerm i_6 = ATgetArgument(e_6, 0);
                          ATerm j_6 = ATgetArgument(e_6, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm h_6 = (ATerm) ATgetNext((ATermList) d_6);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            f_3 = ATgetArgument(w_5, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_4(s_112, t_112, x_2, b_3, e_3, f_3, t);
  return(t);
}
ATerm map1_1_0 (ATerm l_132 (ATerm), ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
  a_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_6 = ATgetFirst((ATermList) t);
      c_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm l_6 = t;
    int m_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,w_1 = NULL,y_1 = NULL,y_0 = NULL,x_0 = NULL;
        t = SSLgetAnnotations(a_6);
        s_1 = t;
        t = b_6;
        t = l_132(t);
        w_1 = t;
        t = (ATerm) ATinsert(CheckATermList(c_6), w_1);
        x_0 = t;
        t = SSLsetAnnotations(x_0, s_1);
        y_1 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_1 = ATgetFirst((ATermList) t);
            q_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_1);
        m_1 = t;
        t = q_1;
        {
          ATerm n_6 = t;
          int o_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(l_132, t);
              LocalPopChoice(o_6);
            }
          else
            {
              t = n_6;
            }
        }
        r_1 = t;
        t = (ATerm) ATinsert(CheckATermList(r_1), p_1);
        y_0 = t;
        t = SSLsetAnnotations(y_0, m_1);
        LocalPopChoice(m_6);
      }
    else
      {
        t = l_6;
        {
          ATerm z_2 = NULL,d_3 = NULL,z_0 = NULL;
          t = SSLgetAnnotations(a_6);
          z_2 = t;
          t = c_6;
          t = map1_1_0(l_132, t);
          d_3 = t;
          t = (ATerm) ATinsert(CheckATermList(d_3), b_6);
          z_0 = t;
          t = SSLsetAnnotations(z_0, z_2);
        }
      }
  }
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = term_p_6;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_p_6;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_q_6;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_q_6;
  return(t);
}
ATerm RepairDefinition_0_0 (ATerm t)
{
  ATerm g_6 = NULL,k_6 = NULL,r_6 = NULL,t_6 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      k_6 = ATgetArgument(t, 0);
      r_6 = ATgetArgument(t, 1);
      t_6 = ATgetArgument(t, 2);
      g_6 = ATgetArgument(t, 3);
      {
        ATerm b_7 = NULL;
        t = r_6;
        {
          static ATerm m_0 (ATerm t);
          static ATerm m_0 (ATerm t)
          {
            static ATerm s_0 (ATerm t);
            static ATerm s_0 (ATerm t)
            {
              t = k_6;
              return(t);
            }
            t = RepairVarDec_2_0(n_0, s_0, t);
            return(t);
          }
          t = map1_1_0(m_0, t);
        }
        b_7 = t;
        t = (ATerm) ATmakeAppl(sym_RDefT_4, k_6, b_7, t_6, g_6);
      }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          k_6 = ATgetArgument(t, 0);
          r_6 = ATgetArgument(t, 1);
          t_6 = ATgetArgument(t, 2);
          {
            ATerm k_7 = NULL;
            t = r_6;
            {
              static ATerm v_0 (ATerm t);
              static ATerm v_0 (ATerm t)
              {
                static ATerm a_1 (ATerm t);
                static ATerm a_1 (ATerm t)
                {
                  t = k_6;
                  return(t);
                }
                t = RepairVarDec_2_0(w_0, a_1, t);
                return(t);
              }
              t = map1_1_0(v_0, t);
            }
            k_7 = t;
            t = (ATerm) ATmakeAppl(sym_RDef_3, k_6, k_7, t_6);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              k_6 = ATgetArgument(t, 0);
              r_6 = ATgetArgument(t, 1);
              t_6 = ATgetArgument(t, 2);
              g_6 = ATgetArgument(t, 3);
              {
                ATerm u_7 = NULL;
                t = r_6;
                {
                  static ATerm b_1 (ATerm t);
                  static ATerm b_1 (ATerm t)
                  {
                    static ATerm e_1 (ATerm t);
                    static ATerm e_1 (ATerm t)
                    {
                      t = k_6;
                      return(t);
                    }
                    t = RepairVarDec_2_0(c_1, e_1, t);
                    return(t);
                  }
                  t = map1_1_0(b_1, t);
                }
                u_7 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, k_6, u_7, t_6, g_6);
              }
            }
          else
            {
              ATerm e_8 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  k_6 = ATgetArgument(t, 0);
                  r_6 = ATgetArgument(t, 1);
                  t_6 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = r_6;
              {
                static ATerm f_1 (ATerm t);
                static ATerm f_1 (ATerm t)
                {
                  static ATerm h_1 (ATerm t);
                  static ATerm h_1 (ATerm t)
                  {
                    t = k_6;
                    return(t);
                  }
                  t = RepairVarDec_2_0(g_1, h_1, t);
                  return(t);
                }
                t = map1_1_0(f_1, t);
              }
              e_8 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_3, k_6, e_8, t_6);
            }
        }
    }
  return(t);
}
ATerm sometd_1_0 (ATerm l_116 (ATerm), ATerm t)
{
  static ATerm f_8 (ATerm t);
  static ATerm f_8 (ATerm t)
  {
    ATerm s_6 = t;
    int u_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_116(t);
        LocalPopChoice(u_6);
      }
    else
      {
        t = s_6;
        t = SRTS_some(f_8, t);
      }
    return(t);
  }
  t = f_8(t);
  return(t);
}
static ATerm d_4 (ATerm e_33, ATerm f_33, ATerm t)
{
  ATerm h_8 = NULL;
  t = SSL_fputc(e_33, f_33);
  h_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_8);
  return(t);
}
static ATerm e_4 (ATerm k_31, ATerm l_31, ATerm t)
{
  ATerm n_8 = NULL;
  t = SSL_write_term_to_stream_text(k_31, l_31);
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_8);
  return(t);
}
static ATerm g_4 (ATerm m_122 (ATerm), ATerm p_240, ATerm q_31, ATerm t)
{
  ATerm o_8 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_240, term_v_6);
  t = k_4(t);
  o_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_8, q_31);
  t = m_122(t);
  t = fclose_0_0(t);
  t = q_31;
  return(t);
}
static ATerm f_4 (ATerm g_31, ATerm h_31, ATerm t)
{
  ATerm p_8 = NULL;
  t = SSL_write_term_to_stream_baf(g_31, h_31);
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_8);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm b_9 = NULL,f_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_6 = ATgetArgument(t, 0);
      if(match_cons(w_6, sym_Stream_1))
        {
          b_9 = ATgetArgument(w_6, 0);
        }
      else
        _fail(t);
      f_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_4(b_9, f_9, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,m_9 = NULL,o_9 = NULL,r_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_6 = ATgetArgument(t, 0);
      if(match_cons(y_6, sym_Stream_1))
        {
          o_9 = ATgetArgument(y_6, 0);
        }
      else
        _fail(t);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_4(o_9, r_9, t);
  i_9 = t;
  t = term_z_6;
  j_9 = t;
  t = i_9;
  if(match_cons(t, sym_Stream_1))
    {
      m_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_6, i_9);
  t = d_4(j_9, m_9, t);
  return(t);
}
ATerm output_1_0 (ATerm p_148 (ATerm), ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL;
  t = p_148(t);
  t_8 = t;
  {
    ATerm a_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_8 = NULL,v_8 = NULL;
        t = term_d_7;
        u_8 = t;
        t = term_e_7;
        v_8 = t;
        t = term_g_7;
        t = q_4(u_8, v_8, t);
        LocalPopChoice(c_7);
      }
    else
      {
        t = a_7;
        t = term_h_7;
      }
  }
  s_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_8, t_8);
  {
    ATerm i_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_8 = NULL,a_9 = NULL;
        t = term_d_7;
        z_8 = t;
        t = term_l_7;
        a_9 = t;
        t = term_m_7;
        t = q_4(z_8, a_9, t);
        t = (ATerm) ATmakeAppl(sym__2, s_8, t_8);
        LocalPopChoice(j_7);
        if(match_cons(t, sym__2))
          {
            ATerm n_7 = ATgetArgument(t, 0);
            ATerm o_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_4(i_1, s_8, t_8, t);
      }
    else
      {
        t = i_7;
        if(match_cons(t, sym__2))
          {
            ATerm p_7 = ATgetArgument(t, 0);
            ATerm q_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_4(j_1, s_8, t_8, t);
      }
  }
  return(t);
}
static ATerm t_10 (ATerm k_10, ATerm t)
{
  t = SSL_fclose(k_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL;
  q_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_10 = ATgetArgument(t, 0);
      {
        ATerm r_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_10);
            LocalPopChoice(t_7);
          }
        else
          {
            t = r_7;
            t = t_10(q_10, t);
          }
      }
    }
  else
    {
      t = t_10(q_10, t);
    }
  return(t);
}
static ATerm h_4 (ATerm m_31, ATerm t)
{
  t = SSL_read_term_from_stream(m_31);
  return(t);
}
static ATerm i_4 (ATerm i_76, ATerm j_76, ATerm t)
{
  t = SSL_strcat(i_76, j_76);
  return(t);
}
static ATerm j_4 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm u_10 = NULL;
  t = SSL_fopen(g_33, h_33);
  u_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_10);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_11 = NULL;
  t = SSL_stdin_stream();
  a_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_11);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_11 = NULL;
  t = SSL_stdout_stream();
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_11);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_11 = NULL;
  t = SSL_stderr_stream();
  c_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_11);
  return(t);
}
static ATerm p_13 (ATerm l_11, ATerm t)
{
  ATerm p_11 = NULL;
  t = SSL_explode_term(l_11);
  if(match_cons(t, sym__2))
    {
      ATerm v_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_7 = ATgetArgument(t, 1);
        if(((ATgetType(w_7) == AT_LIST) && !(ATisEmpty(w_7))))
          {
            p_11 = ATgetFirst((ATermList) w_7);
            {
              ATerm y_7 = (ATerm) ATgetNext((ATermList) w_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_11;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_11;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_11;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_11;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm t_13 (ATerm u_11, ATerm v_11, ATerm y_11, ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,c_12 = NULL,g_12 = NULL,z_1 = NULL;
  t = SSLgetAnnotations(y_11);
  c_12 = t;
  t = u_11;
  if(match_cons(t, sym_Path_1))
    {
      g_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_12, v_11);
  z_1 = t;
  t = SSLsetAnnotations(z_1, c_12);
  if(match_cons(t, sym__2))
    {
      z_11 = ATgetArgument(t, 0);
      a_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_4(z_11, a_12, t);
  return(t);
}
static ATerm u_13 (ATerm o_12, ATerm p_12, ATerm r_12, ATerm t)
{
  ATerm v_12 = NULL,y_12 = NULL,z_12 = NULL,k_13 = NULL,t_3 = NULL;
  t = SSLgetAnnotations(r_12);
  z_12 = t;
  t = SSL_is_string(o_12);
  k_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_13, p_12);
  t_3 = t;
  t = SSLsetAnnotations(t_3, z_12);
  if(match_cons(t, sym__2))
    {
      v_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_4(v_12, y_12, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
  m_13 = t;
  if(match_cons(t, sym__2))
    {
      n_13 = ATgetArgument(t, 0);
      o_13 = ATgetArgument(t, 1);
      {
        ATerm z_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_13(m_13, t);
            LocalPopChoice(a_8);
          }
        else
          {
            t = z_7;
            {
              ATerm b_8 = t;
              int c_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_13(n_13, o_13, m_13, t);
                  LocalPopChoice(c_8);
                }
              else
                {
                  t = b_8;
                  t = u_13(n_13, o_13, m_13, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_13(m_13, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_13 = NULL,y_13 = NULL,c_14 = NULL,n_14 = NULL;
  n_14 = t;
  {
    ATerm d_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_14, term_i_8);
        t = k_4(t);
        LocalPopChoice(g_8);
      }
    else
      {
        t = d_8;
        {
          ATerm s_3 = NULL,u_3 = NULL;
          t = term_j_8;
          u_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_8, n_14);
          t = i_4(u_3, n_14, t);
          s_3 = t;
          t = SSL_perror(s_3);
          _fail(t);
        }
      }
  }
  y_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_4(c_14, t);
  w_13 = t;
  t = y_13;
  t = fclose_0_0(t);
  t = w_13;
  return(t);
}
ATerm input_1_0 (ATerm q_148 (ATerm), ATerm t)
{
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_14 = NULL,t_14 = NULL;
      t = term_d_7;
      s_14 = t;
      t = term_r_8;
      t_14 = t;
      t = term_w_8;
      t = q_4(s_14, t_14, t);
      LocalPopChoice(m_8);
    }
  else
    {
      t = l_8;
      t = term_x_8;
    }
  t = ReadFromFile_0_0(t);
  t = q_148(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL;
  t = term_d_7;
  v_14 = t;
  t = term_y_8;
  w_14 = t;
  t = term_c_9;
  t = q_4(v_14, w_14, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,c_15 = NULL;
  y_14 = t;
  {
    ATerm d_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_14;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_9 = ATgetFirst((ATermList) t);
                ATerm n_9 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_14;
          }
        LocalPopChoice(k_9);
      }
    else
      {
        t = d_9;
        t = (ATerm) ATinsert(ATempty, y_14);
      }
  }
  z_14 = t;
  t = term_h_7;
  c_15 = t;
  t = SSL_printnl(c_15, z_14);
  t = y_14;
  return(t);
}
ATerm map_1_0 (ATerm j_132 (ATerm), ATerm t)
{
  static ATerm o_16 (ATerm t);
  static ATerm o_16 (ATerm t)
  {
    ATerm f_16 = NULL,g_16 = NULL,l_16 = NULL;
    f_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_16;
      }
    else
      {
        ATerm a_4 = NULL,y_4 = NULL,z_4 = NULL,p_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_16 = ATgetFirst((ATermList) t);
            l_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_16);
        a_4 = t;
        t = g_16;
        t = j_132(t);
        y_4 = t;
        t = l_16;
        t = o_16(t);
        z_4 = t;
        t = (ATerm) ATinsert(CheckATermList(z_4), y_4);
        p_4 = t;
        t = SSLsetAnnotations(p_4, a_4);
      }
    return(t);
  }
  t = o_16(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm v_16 = NULL,x_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_16 = ATgetFirst((ATermList) t);
      x_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_17 = NULL,f_17 = NULL;
        static ATerm k_1 (ATerm t);
        static ATerm k_1 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_17)), not_null(f_17));
          return(t);
        }
        t = x_16;
        t = r_0(t);
        if(((e_17 != NULL) && (e_17 != t)))
          _fail(t);
        else
          e_17 = t;
        t = v_16;
        t = p_0(t);
        if(((f_17 != NULL) && (f_17 != t)))
          _fail(t);
        else
          f_17 = t;
        t = x_16;
        t = reverse_acc_2_0(p_0, k_1, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_9;
      t = r_0(t);
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,x_4 = NULL;
  y_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_17);
  w_17 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_17);
  x_4 = t;
  t = SSLsetAnnotations(x_4, w_17);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm f_18 = NULL;
  f_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_18), term_u_9);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm o_150 (ATerm), ATerm p_150 (ATerm), ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL;
  ATerm v_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_17 = NULL,t_17 = NULL;
      t = term_d_7;
      r_17 = t;
      t = term_y_8;
      t_17 = t;
      t = term_c_9;
      t = q_4(r_17, t_17, t);
      LocalPopChoice(w_9);
    }
  else
    {
      t = v_9;
      t = fetch_1_0(l_1, t);
    }
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_150(t);
        t = echo_0_0(t);
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
      }
  }
  t = term_z_9;
  t = echo_0_0(t);
  t = term_a_10;
  p_17 = t;
  t = term_b_10;
  q_17 = t;
  t = term_c_10;
  t = q_4(p_17, q_17, t);
  t = reverse_acc_2_0(_id, u_1, t);
  t = map_1_0(v_1, t);
  t = term_d_10;
  t = echo_0_0(t);
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_150(t);
        {
          ATerm g_10 = t;
          int h_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_18 = NULL;
              g_18 = t;
              t = SSL_is_string(g_18);
              t = g_18;
              LocalPopChoice(h_10);
              {
                ATerm h_18 = NULL;
                h_18 = t;
                t = (ATerm) ATinsert(ATempty, h_18);
              }
            }
          else
            {
              t = g_10;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
      }
  }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,b_5 = NULL;
  q_18 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_18);
  o_18 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_18);
  b_5 = t;
  t = SSLsetAnnotations(b_5, o_18);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_18 = NULL;
  l_18 = t;
  {
    ATerm i_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_18 = NULL,n_18 = NULL;
        t = term_d_7;
        m_18 = t;
        t = term_y_8;
        n_18 = t;
        t = term_c_9;
        t = q_4(m_18, n_18, t);
        LocalPopChoice(j_10);
      }
    else
      {
        t = i_10;
        t = fetch_1_0(a_2, t);
      }
  }
  t = l_18;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm s_18 = NULL;
  s_18 = t;
  if(match_string(t, "-k"))
    {
      t = s_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_18;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  t_18 = t;
  t = SSL_string_to_int(t_18);
  u_18 = t;
  t = term_l_10;
  v_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_10, u_18);
  t = t_4(v_18, u_18, t);
  t = t_18;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_m_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_2, c_2, f_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm x_18 = NULL;
  x_18 = t;
  if(match_string(t, "-S"))
    {
      t = x_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_18;
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL;
  t = term_n_10;
  y_18 = t;
  t = term_o_10;
  z_18 = t;
  t = term_r_10;
  t = t_4(y_18, z_18, t);
  t = term_s_10;
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
static ATerm n_2 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
  a_19 = t;
  t = SSL_string_to_int(a_19);
  b_19 = t;
  t = term_n_10;
  c_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_10, b_19);
  t = t_4(c_19, b_19, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_19);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_w_10;
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
  ATerm d_19 = NULL,e_19 = NULL;
  t = term_x_10;
  d_19 = t;
  t = term_t_9;
  e_19 = t;
  t = term_y_10;
  t = t_4(d_19, e_19, t);
  t = term_z_10;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_d_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_2, h_2, l_2, t);
      LocalPopChoice(f_11);
    }
  else
    {
      t = e_11;
      {
        ATerm g_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_2, n_2, s_2, t);
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
            t = Option_3_0(v_2, y_2, a_3, t);
          }
      }
    }
  return(t);
}
static ATerm t_4 (ATerm g_37, ATerm h_37, ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL;
  t = term_d_7;
  f_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_7, g_37, h_37);
  t = lookup_table_0_1(f_19, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_4(g_37, h_37, g_19, t);
  t = (ATerm) ATmakeAppl(sym__3, term_d_7, g_37, h_37);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL;
      t = term_t_9;
      t = g_0(t);
      m_19 = t;
      t = term_a_10;
      n_19 = t;
      t = term_b_10;
      o_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_10, term_b_10, m_19);
      t = r_4(n_19, o_19, m_19, t);
      _fail(t);
    }
  else
    {
      ATerm r_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_19 = ATgetFirst((ATermList) t);
          l_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_19;
      t = d_0(t);
      t = term_t_9;
      t = f_0(t);
      r_19 = t;
      t = (ATerm) ATinsert(CheckATermList(l_19), r_19);
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm t_19 = NULL;
  t_19 = t;
  if(match_string(t, "-o"))
    {
      t = t_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_19;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL;
  u_19 = t;
  t = term_e_7;
  v_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_7, u_19);
  t = t_4(v_19, u_19, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_19);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_i_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_3, g_3, h_3, t);
  return(t);
}
static ATerm r_4 (ATerm x_42, ATerm y_42, ATerm w_42, ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
  z_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_42, y_42);
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_11 = ATgetArgument(t, 0);
            ATerm n_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_42, y_42);
        t = q_4(x_42, y_42, t);
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        t = (ATerm) ATempty;
      }
  }
  a_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_42, y_42, (ATerm) ATinsert(CheckATermList(a_20), w_42));
  t = lookup_table_0_1(x_42, t);
  e_20 = t;
  t = (ATerm) ATinsert(CheckATermList(a_20), w_42);
  c_20 = t;
  t = e_20;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_4(y_42, c_20, d_20, t);
  t = z_19;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
      t = term_t_9;
      t = o_0(t);
      p_20 = t;
      t = term_a_10;
      q_20 = t;
      t = term_b_10;
      r_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_10, term_b_10, p_20);
      t = r_4(q_20, r_20, p_20, t);
      _fail(t);
    }
  else
    {
      ATerm v_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_20 = ATgetFirst((ATermList) t);
          m_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_20;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_20 = ATgetFirst((ATermList) t);
          o_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_20;
      t = j_0(t);
      t = n_20;
      t = l_0(t);
      v_20 = t;
      t = (ATerm) ATinsert(CheckATermList(o_20), v_20);
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm x_20 = NULL;
  x_20 = t;
  if(match_string(t, "-i"))
    {
      t = x_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_20;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL;
  y_20 = t;
  t = term_r_8;
  z_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_8, y_20);
  t = t_4(z_20, y_20, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_20);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_3, j_3, k_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_9;
  t = whoami_0_0(t);
  a_21 = t;
  t = term_q_0;
  c_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_11), a_21);
  d_21 = t;
  t = SSL_printnl(c_21, d_21);
  t = term_r_11;
  b_21 = t;
  t = SSL_exit(b_21);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL;
  t = term_d_7;
  e_21 = t;
  t = term_y_8;
  f_21 = t;
  t = term_c_9;
  t = q_4(e_21, f_21, t);
  return(t);
}
static ATerm l_4 (ATerm f_40, ATerm g_40, ATerm t)
{
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_40, g_40);
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      t = SSL_addr(f_40, g_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_138 (ATerm), ATerm f_138 (ATerm), ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL;
  h_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_21;
      t = e_138(t);
    }
  else
    {
      ATerm m_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_21 = ATgetFirst((ATermList) t);
          j_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_21;
      t = foldr_2_0(e_138, f_138, t);
      m_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_21, m_21);
      t = f_138(t);
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
  t = term_o_10;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm z_5 = NULL,f_6 = NULL;
  if(match_cons(t, sym__2))
    {
      z_5 = ATgetArgument(t, 0);
      f_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_4(z_5, f_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_21 = NULL,n_5 = NULL,o_5 = NULL;
  t = times_0_0(t);
  o_5 = t;
  t = SSL_explode_term(o_5);
  if(match_cons(t, sym__2))
    {
      ATerm w_11 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5;
  t = foldr_2_0(l_3, m_3, t);
  p_21 = t;
  t = SSL_TicksToSeconds(p_21);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
  a_22 = t;
  if(match_cons(t, sym__2))
    {
      b_22 = ATgetArgument(t, 0);
      c_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_11 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_22;
        if((b_22 != t))
          {
            _fail(t);
          }
        t = a_22;
        LocalPopChoice(b_12);
      }
    else
      {
        t = x_11;
        t = (ATerm) ATmakeAppl(sym__2, b_22, c_22);
        {
          ATerm d_12 = t;
          int e_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_22, c_22);
              LocalPopChoice(e_12);
            }
          else
            {
              t = d_12;
              t = SSL_gtr(b_22, c_22);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_22, c_22);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_124 (ATerm), ATerm t)
{
  ATerm h_22 = NULL;
  h_22 = t;
  {
    ATerm f_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
        t = term_d_7;
        k_22 = t;
        t = term_n_10;
        l_22 = t;
        t = term_i_12;
        t = q_4(k_22, l_22, t);
        j_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_22, term_r_11);
        t = geq_0_0(t);
        t = h_22;
        t = e_124(t);
        LocalPopChoice(h_12);
      }
    else
      {
        t = f_12;
        t = h_22;
      }
  }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,r_22 = NULL,s_22 = NULL;
  t = run_time_0_0(t);
  o_22 = t;
  t = term_t_9;
  t = whoami_0_0(t);
  p_22 = t;
  t = term_q_0;
  r_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_12), o_22), term_j_12), p_22);
  s_22 = t;
  t = SSL_printnl(r_22, s_22);
  t = (ATerm) ATmakeAppl(sym__2, term_q_0, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_12), o_22), term_j_12), p_22));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_10;
  t_22 = t;
  t = SSL_exit(t_22);
  return(t);
}
static ATerm u_4 (ATerm m_47, ATerm n_47, ATerm o_47, ATerm t)
{
  ATerm u_22 = NULL;
  t = SSL_hashtable_put(o_47, m_47, n_47);
  u_22 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_22);
  return(t);
}
ATerm lookup_table_0_1 (ATerm j_44, ATerm t)
{
  ATerm a_24 = NULL;
  t = table_hashtable_0_0(t);
  a_24 = t;
  {
    ATerm l_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_6 = NULL;
        t = a_24;
        if(match_cons(t, sym_Hashtable_1))
          {
            x_6 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_4(j_44, x_6, t);
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
        {
          ATerm f_7 = NULL;
          t = j_44;
          t = table_create_0_0(t);
          t = a_24;
          if(match_cons(t, sym_Hashtable_1))
            {
              f_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_4(j_44, f_7, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm u_47, ATerm v_47, ATerm t)
{
  ATerm d_24 = NULL;
  t = SSL_hashtable_create(u_47, v_47);
  d_24 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_24);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,i_24 = NULL,j_24 = NULL;
  e_24 = t;
  t = term_n_12;
  i_24 = t;
  t = term_q_12;
  j_24 = t;
  t = e_24;
  t = new_hashtable_0_2(i_24, j_24, t);
  f_24 = t;
  t = e_24;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_4(e_24, f_24, g_24, t);
  t = e_24;
  return(t);
}
static ATerm n_4 (ATerm r_47, ATerm s_47, ATerm t)
{
  ATerm k_24 = NULL;
  t = SSL_hashtable_remove(s_47, r_47);
  k_24 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_24);
  return(t);
}
static ATerm o_4 (ATerm w_47, ATerm t)
{
  ATerm l_24 = NULL;
  t = SSL_hashtable_destroy(w_47);
  l_24 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_24);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm m_24 = NULL;
  t = SSL_table_hashtable();
  m_24 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_24);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
  n_24 = t;
  t = table_hashtable_0_0(t);
  o_24 = t;
  t = lookup_table_0_1(n_24, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_4(q_24, t);
  t = o_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_4(n_24, p_24, t);
  t = n_24;
  return(t);
}
ATerm fetch_1_0 (ATerm r_132 (ATerm), ATerm t)
{
  static ATerm n_25 (ATerm t);
  static ATerm n_25 (ATerm t)
  {
    ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
    k_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_25 = ATgetFirst((ATermList) t);
        m_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_12 = t;
      int t_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_7 = NULL,x_7 = NULL,f_5 = NULL;
          t = SSLgetAnnotations(k_25);
          s_7 = t;
          t = l_25;
          t = r_132(t);
          x_7 = t;
          t = (ATerm) ATinsert(CheckATermList(m_25), x_7);
          f_5 = t;
          t = SSLsetAnnotations(f_5, s_7);
          LocalPopChoice(t_12);
        }
      else
        {
          t = s_12;
          {
            ATerm k_8 = NULL,q_8 = NULL,g_5 = NULL;
            t = SSLgetAnnotations(k_25);
            k_8 = t;
            t = m_25;
            t = n_25(t);
            q_8 = t;
            t = (ATerm) ATinsert(CheckATermList(q_8), l_25);
            g_5 = t;
            t = SSLsetAnnotations(g_5, k_8);
          }
        }
    }
    return(t);
  }
  t = n_25(t);
  return(t);
}
static ATerm v_4 (ATerm p_47, ATerm q_47, ATerm t)
{
  t = SSL_hashtable_get(q_47, p_47);
  return(t);
}
static ATerm q_4 (ATerm q_44, ATerm r_44, ATerm t)
{
  ATerm q_25 = NULL;
  t = lookup_table_0_1(q_44, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_4(r_44, q_25, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL;
  t = term_u_12;
  s_25 = t;
  t = term_t_9;
  t_25 = t;
  t = term_w_12;
  t = t_4(s_25, t_25, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_x_12;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL;
  t = term_u_12;
  w_25 = t;
  t = term_t_9;
  x_25 = t;
  t = term_w_12;
  t = t_4(w_25, x_25, t);
  t = term_a_13;
  u_25 = t;
  t = term_t_9;
  v_25 = t;
  t = term_b_13;
  t = t_4(u_25, v_25, t);
  t = term_c_13;
  return(t);
}
static ATerm w_3 (ATerm t)
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
      t = Option_3_0(o_3, p_3, q_3, t);
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
      t = Option_3_0(r_3, v_3, w_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,l_5 = NULL;
  d_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_25 = ATgetFirst((ATermList) t);
      a_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_26);
  y_25 = t;
  t = z_25;
  t = c_90(t);
  b_26 = t;
  t = a_26;
  t = d_90(t);
  c_26 = t;
  t = (ATerm) ATinsert(CheckATermList(c_26), b_26);
  l_5 = t;
  t = SSLsetAnnotations(l_5, y_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_150 (ATerm), ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,n_26 = NULL,o_26 = NULL,p_5 = NULL;
  i_26 = t;
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_13;
        t = j_150(t);
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
      }
  }
  t = i_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_26 = ATgetFirst((ATermList) t);
      l_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_26);
  j_26 = t;
  t = term_y_8;
  o_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_8, k_26);
  t = t_4(o_26, k_26, t);
  t = l_26;
  {
    static ATerm y_26 (ATerm t);
    static ATerm y_26 (ATerm t)
    {
      ATerm j_13 = t;
      int l_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_13 = t;
          int r_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_26 = NULL;
              r_26 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_26;
              LocalPopChoice(r_13);
            }
          else
            {
              t = q_13;
              t = j_150(t);
              t = Cons_2_0(_id, y_26, t);
            }
          LocalPopChoice(l_13);
        }
      else
        {
          t = j_13;
          {
            ATerm u_26 = NULL,v_26 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_26 = ATgetFirst((ATermList) t);
                v_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(v_26), (ATerm) ATmakeAppl(sym_Undefined_1, u_26));
          }
        }
      return(t);
    }
    t = y_26(t);
  }
  n_26 = t;
  t = (ATerm) ATinsert(CheckATermList(n_26), (ATerm) ATmakeAppl(sym_Program_1, k_26));
  p_5 = t;
  t = SSLsetAnnotations(p_5, j_26);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm l_27 = NULL;
  l_27 = t;
  if(match_string(t, "--help"))
    {
      t = l_27;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_27;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_27;
        }
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL;
  t = term_s_13;
  m_27 = t;
  t = term_t_9;
  n_27 = t;
  t = term_v_13;
  t = t_4(m_27, n_27, t);
  t = term_x_13;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_z_13;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm g_150 (ATerm), ATerm h_150 (ATerm), ATerm i_150 (ATerm), ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL;
  f_27 = t;
  t = term_a_10;
  g_27 = t;
  t = term_a_14;
  t = lookup_table_0_1(g_27, t);
  k_27 = t;
  t = term_b_10;
  h_27 = t;
  t = (ATerm) ATempty;
  i_27 = t;
  t = k_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_4(h_27, i_27, j_27, t);
  t = f_27;
  {
    static ATerm x_3 (ATerm t);
    static ATerm x_3 (ATerm t)
    {
      ATerm b_14 = t;
      int d_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_150(t);
          LocalPopChoice(d_14);
        }
      else
        {
          t = b_14;
          {
            ATerm e_14 = t;
            int f_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_3, z_3, b_4, t);
                LocalPopChoice(f_14);
              }
            else
              {
                t = e_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_3, t);
  }
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_27 = NULL;
        y_27 = t;
        {
          ATerm i_14 = t;
          int j_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_9 = NULL;
              t = y_27;
              {
                ATerm k_14 = t;
                int l_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_9 = NULL,h_9 = NULL;
                    t = term_d_7;
                    g_9 = t;
                    t = term_s_13;
                    h_9 = t;
                    t = term_m_14;
                    t = q_4(g_9, h_9, t);
                    LocalPopChoice(l_14);
                  }
                else
                  {
                    t = k_14;
                    t = fetch_1_0(m_4, t);
                  }
              }
              t = y_27;
              t = h_150(t);
              t = term_o_10;
              e_9 = t;
              t = SSL_exit(e_9);
              LocalPopChoice(j_14);
            }
          else
            {
              t = i_14;
              {
                ATerm p_9 = NULL,q_9 = NULL,s_9 = NULL;
                t = term_d_7;
                q_9 = t;
                t = term_u_12;
                s_9 = t;
                t = term_o_14;
                t = q_4(q_9, s_9, t);
                t = y_27;
                t = i_150(t);
                t = term_o_10;
                p_9 = t;
                t = SSL_exit(p_9);
              }
            }
        }
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
        {
          ATerm p_14 = t;
          int q_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
              static ATerm s_4 (ATerm t);
              static ATerm s_4 (ATerm t)
              {
                ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,r_5 = NULL;
                e_28 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    d_28 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(e_28);
                c_28 = t;
                t = d_28;
                if(((d_27 != NULL) && (d_27 != t)))
                  _fail(t);
                else
                  d_27 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, d_28);
                r_5 = t;
                t = SSLsetAnnotations(r_5, c_28);
                return(t);
              }
              t = fetch_1_0(s_4, t);
              t = term_q_0;
              a_28 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_27)), term_r_14);
              b_28 = t;
              t = SSL_printnl(a_28, b_28);
              t = (ATerm) ATmakeAppl(sym__2, term_q_0, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_27)), term_r_14));
              t = h_150(t);
              t = term_r_11;
              z_27 = t;
              t = SSL_exit(z_27);
              LocalPopChoice(q_14);
            }
          else
            {
              t = p_14;
            }
        }
      }
  }
  e_27 = t;
  t = term_a_10;
  t = table_destroy_0_0(t);
  t = e_27;
  return(t);
}
ATerm option_wrap_5_0 (ATerm j_148 (ATerm), ATerm k_148 (ATerm), ATerm l_148 (ATerm), ATerm m_148 (ATerm), ATerm n_148 (ATerm), ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL;
  t = parse_options_3_0(j_148, k_148, l_148, t);
  j_28 = t;
  t = term_u_14;
  t = table_create_0_0(t);
  t = term_u_14;
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_14, term_x_14, j_28);
  t = lookup_table_0_1(k_28, t);
  n_28 = t;
  t = term_x_14;
  l_28 = t;
  t = n_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_4(l_28, j_28, m_28, t);
  t = j_28;
  t = m_148(t);
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_148(t);
        t = report_success_0_0(t);
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm w_4 (ATerm t)
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
                  t = Option_3_0(c_5, d_5, e_5, t);
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
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = input_1_0(h_5, t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL;
  t = term_l_7;
  q_28 = t;
  t = term_t_9;
  r_28 = t;
  t = term_l_15;
  t = t_4(q_28, r_28, t);
  t = term_m_15;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_n_15;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = output_1_0(i_5, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_28 = NULL;
      t = sometd_1_0(RepairDefinition_0_0, t);
      t_28 = t;
      t = explanation_0_0(t);
      t = t_28;
      LocalPopChoice(p_15);
    }
  else
    {
      t = o_15;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(w_4, default_system_usage_0_0, default_system_about_0_0, _id, a_5, t);
  return(t);
}

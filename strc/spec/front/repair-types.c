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
static ATerm term_l_15;
static ATerm term_k_15;
static ATerm term_j_15;
static ATerm term_v_14;
static ATerm term_q_14;
static ATerm term_p_14;
static ATerm term_l_14;
static ATerm term_k_14;
static ATerm term_x_13;
static ATerm term_v_13;
static ATerm term_u_13;
static ATerm term_p_13;
static ATerm term_o_13;
static ATerm term_f_13;
static ATerm term_z_12;
static ATerm term_y_12;
static ATerm term_x_12;
static ATerm term_v_12;
static ATerm term_u_12;
static ATerm term_s_12;
static ATerm term_r_12;
static ATerm term_m_12;
static ATerm term_l_12;
static ATerm term_h_12;
static ATerm term_g_12;
static ATerm term_f_12;
static ATerm term_p_11;
static ATerm term_o_11;
static ATerm term_l_11;
static ATerm term_g_11;
static ATerm term_w_10;
static ATerm term_v_10;
static ATerm term_u_10;
static ATerm term_t_10;
static ATerm term_s_10;
static ATerm term_r_10;
static ATerm term_p_10;
static ATerm term_n_10;
static ATerm term_m_10;
static ATerm term_l_10;
static ATerm term_k_10;
static ATerm term_i_10;
static ATerm term_f_10;
static ATerm term_c_10;
static ATerm term_b_10;
static ATerm term_a_10;
static ATerm term_z_9;
static ATerm term_t_9;
static ATerm term_s_9;
static ATerm term_a_9;
static ATerm term_z_8;
static ATerm term_v_8;
static ATerm term_u_8;
static ATerm term_t_8;
static ATerm term_i_8;
static ATerm term_h_8;
static ATerm term_m_7;
static ATerm term_l_7;
static ATerm term_h_7;
static ATerm term_g_7;
static ATerm term_d_7;
static ATerm term_c_7;
static ATerm term_z_6;
static ATerm term_v_6;
static ATerm term_s_6;
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
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_d_7);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_l_7);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_t_8);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_z_8);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_b_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_m_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym__2, term_t_10, term_s_9);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_l_10);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym__2, term_r_12, term_s_9);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym__2, term_v_12, term_s_9);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym__2, term_o_13, term_s_9);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym__3, term_a_10, term_b_10, (ATerm) ATempty);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_o_13);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_r_12);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, term_l_7, term_s_9);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm explanation_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm d_132 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm n_2 (ATerm d_2, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm b_4 (ATerm y_111 (ATerm), ATerm z_111 (ATerm), ATerm v_23, ATerm t_23, ATerm s_23, ATerm u_23, ATerm t);
ATerm RepairVarDec_2_0 (ATerm y_111 (ATerm), ATerm z_111 (ATerm), ATerm t);
ATerm map1_1_0 (ATerm q_131 (ATerm), ATerm t);
static ATerm n_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm RepairDefinition_0_0 (ATerm t);
ATerm sometd_1_0 (ATerm r_115 (ATerm), ATerm t);
static ATerm c_4 (ATerm e_33, ATerm f_33, ATerm t);
static ATerm d_4 (ATerm k_31, ATerm l_31, ATerm t);
static ATerm f_4 (ATerm s_121 (ATerm), ATerm m_239, ATerm q_31, ATerm t);
static ATerm e_4 (ATerm g_31, ATerm h_31, ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm output_1_0 (ATerm q_147 (ATerm), ATerm t);
static ATerm x_10 (ATerm j_10, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_4 (ATerm m_31, ATerm t);
static ATerm h_4 (ATerm z_75, ATerm a_76, ATerm t);
static ATerm i_4 (ATerm g_33, ATerm h_33, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_13 (ATerm m_11, ATerm t);
static ATerm s_13 (ATerm s_11, ATerm v_11, ATerm w_11, ATerm t);
static ATerm t_13 (ATerm n_12, ATerm p_12, ATerm t_12, ATerm t);
static ATerm j_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm r_147 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm o_131 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm l_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm default_system_usage_2_0 (ATerm p_149 (ATerm), ATerm q_149 (ATerm), ATerm t);
static ATerm a_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm s_4 (ATerm a_37, ATerm b_37, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_4 (ATerm r_42, ATerm s_42, ATerm q_42, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_4 (ATerm z_39, ATerm a_40, ATerm t);
ATerm foldr_2_0 (ATerm j_137 (ATerm), ATerm k_137 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm j_123 (ATerm), ATerm t);
static ATerm n_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm t_4 (ATerm g_47, ATerm h_47, ATerm i_47, ATerm t);
ATerm lookup_table_0_1 (ATerm d_44, ATerm t);
ATerm new_hashtable_0_2 (ATerm o_47, ATerm p_47, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm m_4 (ATerm l_47, ATerm m_47, ATerm t);
static ATerm n_4 (ATerm q_47, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_131 (ATerm), ATerm t);
static ATerm u_4 (ATerm j_47, ATerm k_47, ATerm t);
static ATerm p_4 (ATerm k_44, ATerm l_44, ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_89 (ATerm), ATerm j_89 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_149 (ATerm), ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm parse_options_3_0 (ATerm h_149 (ATerm), ATerm i_149 (ATerm), ATerm j_149 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm k_147 (ATerm), ATerm l_147 (ATerm), ATerm m_147 (ATerm), ATerm n_147 (ATerm), ATerm o_147 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
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
ATerm at_end_1_0 (ATerm d_132 (ATerm), ATerm t)
{
  static ATerm y_1 (ATerm t);
  static ATerm y_1 (ATerm t)
  {
    ATerm m_1 = NULL,n_1 = NULL,w_1 = NULL;
    w_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_1 = ATgetFirst((ATermList) t);
        n_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_0 = NULL,d_1 = NULL,u_0 = NULL;
          t = SSLgetAnnotations(w_1);
          t_0 = t;
          t = n_1;
          t = y_1(t);
          d_1 = t;
          t = (ATerm) ATinsert(CheckATermList(d_1), m_1);
          u_0 = t;
          t = SSLsetAnnotations(u_0, t_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_1;
        t = d_132(t);
      }
    return(t);
  }
  t = y_1(t);
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
static ATerm n_2 (ATerm d_2, ATerm t)
{
  ATerm f_2 = NULL;
  t = SSL_explode_term(d_2);
  if(match_cons(t, sym__2))
    {
      ATerm l_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_5) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_2;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL;
  j_2 = t;
  if(match_cons(t, sym__2))
    {
      h_2 = ATgetArgument(t, 0);
      i_2 = ATgetArgument(t, 1);
      {
        ATerm m_5 = t;
        int q_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_0 (ATerm t);
            static ATerm k_0 (ATerm t)
            {
              t = i_2;
              return(t);
            }
            t = h_2;
            t = at_end_1_0(k_0, t);
            LocalPopChoice(q_5);
          }
        else
          {
            t = m_5;
            t = n_2(j_2, t);
          }
      }
    }
  else
    {
      t = n_2(j_2, t);
    }
  return(t);
}
static ATerm b_4 (ATerm y_111 (ATerm), ATerm z_111 (ATerm), ATerm v_23, ATerm t_23, ATerm s_23, ATerm u_23, ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL,t_2 = NULL,v_2 = NULL,w_2 = NULL;
  p_2 = t;
  t = y_111(t);
  q_2 = t;
  t = p_2;
  t = z_111(t);
  t_2 = t;
  t = term_q_0;
  v_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_5), t_2), term_u_5), q_2), term_t_5), v_23), term_s_5);
  w_2 = t;
  t = SSL_printnl(v_2, w_2);
  t = (ATerm) ATmakeAppl(sym__2, s_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, t_23)));
  t = conc_0_0(t);
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, v_23, (ATerm) ATmakeAppl(sym_FunType_2, o_2, u_23));
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm y_111 (ATerm), ATerm z_111 (ATerm), ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,d_3 = NULL,e_3 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      a_3 = ATgetArgument(t, 0);
      {
        ATerm w_5 = ATgetArgument(t, 1);
        if(match_cons(w_5, sym_FunType_2))
          {
            ATerm x_5 = ATgetArgument(w_5, 0);
            if(((ATgetType(x_5) == AT_LIST) && !(ATisEmpty(x_5))))
              {
                ATerm z_5 = ATgetFirst((ATermList) x_5);
                if(match_cons(z_5, sym_ConstType_1))
                  {
                    b_3 = ATgetArgument(z_5, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm d_6 = (ATerm) ATgetNext((ATermList) x_5);
                  d_3 = d_6;
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
            e_3 = ATgetArgument(w_5, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_4(y_111, z_111, a_3, b_3, d_3, e_3, t);
  return(t);
}
ATerm map1_1_0 (ATerm q_131 (ATerm), ATerm t)
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
        ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,v_1 = NULL,x_1 = NULL,y_0 = NULL,x_0 = NULL;
        t = SSLgetAnnotations(a_6);
        s_1 = t;
        t = b_6;
        t = q_131(t);
        v_1 = t;
        t = (ATerm) ATinsert(CheckATermList(c_6), v_1);
        x_0 = t;
        t = SSLsetAnnotations(x_0, s_1);
        x_1 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_1 = ATgetFirst((ATermList) t);
            q_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_1);
        o_1 = t;
        t = q_1;
        {
          ATerm n_6 = t;
          int o_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(q_131, t);
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
        t = SSLsetAnnotations(y_0, o_1);
        LocalPopChoice(m_6);
      }
    else
      {
        t = l_6;
        {
          ATerm y_2 = NULL,f_3 = NULL,z_0 = NULL;
          t = SSLgetAnnotations(a_6);
          y_2 = t;
          t = c_6;
          t = map1_1_0(q_131, t);
          f_3 = t;
          t = (ATerm) ATinsert(CheckATermList(f_3), b_6);
          z_0 = t;
          t = SSLsetAnnotations(z_0, y_2);
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
  t = term_s_6;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_s_6;
  return(t);
}
ATerm RepairDefinition_0_0 (ATerm t)
{
  ATerm g_6 = NULL,k_6 = NULL,q_6 = NULL,r_6 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      k_6 = ATgetArgument(t, 0);
      q_6 = ATgetArgument(t, 1);
      r_6 = ATgetArgument(t, 2);
      g_6 = ATgetArgument(t, 3);
      {
        ATerm e_7 = NULL;
        t = q_6;
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
        e_7 = t;
        t = (ATerm) ATmakeAppl(sym_RDefT_4, k_6, e_7, r_6, g_6);
      }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          k_6 = ATgetArgument(t, 0);
          q_6 = ATgetArgument(t, 1);
          r_6 = ATgetArgument(t, 2);
          {
            ATerm j_7 = NULL;
            t = q_6;
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
            j_7 = t;
            t = (ATerm) ATmakeAppl(sym_RDef_3, k_6, j_7, r_6);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              k_6 = ATgetArgument(t, 0);
              q_6 = ATgetArgument(t, 1);
              r_6 = ATgetArgument(t, 2);
              g_6 = ATgetArgument(t, 3);
              {
                ATerm s_7 = NULL;
                t = q_6;
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
                s_7 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, k_6, s_7, r_6, g_6);
              }
            }
          else
            {
              ATerm c_8 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  k_6 = ATgetArgument(t, 0);
                  q_6 = ATgetArgument(t, 1);
                  r_6 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = q_6;
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
              c_8 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_3, k_6, c_8, r_6);
            }
        }
    }
  return(t);
}
ATerm sometd_1_0 (ATerm r_115 (ATerm), ATerm t)
{
  static ATerm e_8 (ATerm t);
  static ATerm e_8 (ATerm t)
  {
    ATerm t_6 = t;
    int u_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_115(t);
        LocalPopChoice(u_6);
      }
    else
      {
        t = t_6;
        t = SRTS_some(e_8, t);
      }
    return(t);
  }
  t = e_8(t);
  return(t);
}
static ATerm c_4 (ATerm e_33, ATerm f_33, ATerm t)
{
  ATerm l_8 = NULL;
  t = SSL_fputc(e_33, f_33);
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_8);
  return(t);
}
static ATerm d_4 (ATerm k_31, ATerm l_31, ATerm t)
{
  ATerm m_8 = NULL;
  t = SSL_write_term_to_stream_text(k_31, l_31);
  m_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_8);
  return(t);
}
static ATerm f_4 (ATerm s_121 (ATerm), ATerm m_239, ATerm q_31, ATerm t)
{
  ATerm p_8 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_239, term_v_6);
  t = j_4(t);
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_8, q_31);
  t = s_121(t);
  t = fclose_0_0(t);
  t = q_31;
  return(t);
}
static ATerm e_4 (ATerm g_31, ATerm h_31, ATerm t)
{
  ATerm q_8 = NULL;
  t = SSL_write_term_to_stream_baf(g_31, h_31);
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_8);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_6 = ATgetArgument(t, 0);
      if(match_cons(w_6, sym_Stream_1))
        {
          f_9 = ATgetArgument(w_6, 0);
        }
      else
        _fail(t);
      g_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_4(f_9, g_9, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm j_9 = NULL,l_9 = NULL,o_9 = NULL,q_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_6 = ATgetArgument(t, 0);
      if(match_cons(x_6, sym_Stream_1))
        {
          q_9 = ATgetArgument(x_6, 0);
        }
      else
        _fail(t);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_4(q_9, u_9, t);
  j_9 = t;
  t = term_z_6;
  l_9 = t;
  t = j_9;
  if(match_cons(t, sym_Stream_1))
    {
      o_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_6, j_9);
  t = c_4(l_9, o_9, t);
  return(t);
}
ATerm output_1_0 (ATerm q_147 (ATerm), ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL;
  t = q_147(t);
  s_8 = t;
  {
    ATerm a_7 = t;
    int b_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_8 = NULL,x_8 = NULL;
        t = term_c_7;
        w_8 = t;
        t = term_d_7;
        x_8 = t;
        t = term_g_7;
        t = p_4(w_8, x_8, t);
        LocalPopChoice(b_7);
      }
    else
      {
        t = a_7;
        t = term_h_7;
      }
  }
  r_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_8, s_8);
  {
    ATerm i_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_8 = NULL,c_9 = NULL;
        t = term_c_7;
        y_8 = t;
        t = term_l_7;
        c_9 = t;
        t = term_m_7;
        t = p_4(y_8, c_9, t);
        t = (ATerm) ATmakeAppl(sym__2, r_8, s_8);
        LocalPopChoice(k_7);
        if(match_cons(t, sym__2))
          {
            ATerm n_7 = ATgetArgument(t, 0);
            ATerm o_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_4(i_1, r_8, s_8, t);
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
        t = f_4(j_1, r_8, s_8, t);
      }
  }
  return(t);
}
static ATerm x_10 (ATerm j_10, ATerm t)
{
  t = SSL_fclose(j_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_10 = NULL,q_10 = NULL;
  q_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_10 = ATgetArgument(t, 0);
      {
        ATerm r_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_10);
            LocalPopChoice(u_7);
          }
        else
          {
            t = r_7;
            t = x_10(q_10, t);
          }
      }
    }
  else
    {
      t = x_10(q_10, t);
    }
  return(t);
}
static ATerm g_4 (ATerm m_31, ATerm t)
{
  t = SSL_read_term_from_stream(m_31);
  return(t);
}
static ATerm h_4 (ATerm z_75, ATerm a_76, ATerm t)
{
  t = SSL_strcat(z_75, a_76);
  return(t);
}
static ATerm i_4 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm y_10 = NULL;
  t = SSL_fopen(g_33, h_33);
  y_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_10);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_10 = NULL;
  t = SSL_stdin_stream();
  z_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_11 = NULL;
  t = SSL_stdout_stream();
  a_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_11);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_11 = NULL;
  t = SSL_stderr_stream();
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_11);
  return(t);
}
static ATerm r_13 (ATerm m_11, ATerm t)
{
  ATerm n_11 = NULL;
  t = SSL_explode_term(m_11);
  if(match_cons(t, sym__2))
    {
      ATerm v_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_7 = ATgetArgument(t, 1);
        if(((ATgetType(w_7) == AT_LIST) && !(ATisEmpty(w_7))))
          {
            n_11 = ATgetFirst((ATermList) w_7);
            {
              ATerm x_7 = (ATerm) ATgetNext((ATermList) w_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_11;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_11;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_11;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_11;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_13 (ATerm s_11, ATerm v_11, ATerm w_11, ATerm t)
{
  ATerm x_11 = NULL,a_12 = NULL,c_12 = NULL,j_12 = NULL,z_1 = NULL;
  t = SSLgetAnnotations(w_11);
  c_12 = t;
  t = s_11;
  if(match_cons(t, sym_Path_1))
    {
      j_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_12, v_11);
  z_1 = t;
  t = SSLsetAnnotations(z_1, c_12);
  if(match_cons(t, sym__2))
    {
      x_11 = ATgetArgument(t, 0);
      a_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(x_11, a_12, t);
  return(t);
}
static ATerm t_13 (ATerm n_12, ATerm p_12, ATerm t_12, ATerm t)
{
  ATerm w_12 = NULL,d_13 = NULL,g_13 = NULL,j_13 = NULL,s_3 = NULL;
  t = SSLgetAnnotations(t_12);
  g_13 = t;
  t = SSL_is_string(n_12);
  j_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_13, p_12);
  s_3 = t;
  t = SSLsetAnnotations(s_3, g_13);
  if(match_cons(t, sym__2))
    {
      w_12 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(w_12, d_13, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL,q_13 = NULL;
  l_13 = t;
  if(match_cons(t, sym__2))
    {
      m_13 = ATgetArgument(t, 0);
      q_13 = ATgetArgument(t, 1);
      {
        ATerm z_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_13(l_13, t);
            LocalPopChoice(a_8);
          }
        else
          {
            t = z_7;
            {
              ATerm b_8 = t;
              int d_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_13(m_13, q_13, l_13, t);
                  LocalPopChoice(d_8);
                }
              else
                {
                  t = b_8;
                  t = t_13(m_13, q_13, l_13, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_13(l_13, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_13 = NULL,z_13 = NULL,h_14 = NULL,o_14 = NULL;
  o_14 = t;
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_14, term_h_8);
        t = j_4(t);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        {
          ATerm t_3 = NULL,u_3 = NULL;
          t = term_i_8;
          u_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_8, o_14);
          t = h_4(u_3, o_14, t);
          t_3 = t;
          t = SSL_perror(t_3);
          _fail(t);
        }
      }
  }
  z_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_4(h_14, t);
  w_13 = t;
  t = z_13;
  t = fclose_0_0(t);
  t = w_13;
  return(t);
}
ATerm input_1_0 (ATerm r_147 (ATerm), ATerm t)
{
  ATerm k_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_14 = NULL,s_14 = NULL;
      t = term_c_7;
      r_14 = t;
      t = term_t_8;
      s_14 = t;
      t = term_u_8;
      t = p_4(r_14, s_14, t);
      LocalPopChoice(n_8);
    }
  else
    {
      t = k_8;
      t = term_v_8;
    }
  t = ReadFromFile_0_0(t);
  t = r_147(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL;
  t = term_c_7;
  t_14 = t;
  t = term_z_8;
  u_14 = t;
  t = term_a_9;
  t = p_4(t_14, u_14, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_14 = NULL,z_14 = NULL,c_15 = NULL;
  w_14 = t;
  {
    ATerm b_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_14;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_9 = ATgetFirst((ATermList) t);
                ATerm m_9 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_14;
          }
        LocalPopChoice(i_9);
      }
    else
      {
        t = b_9;
        t = (ATerm) ATinsert(ATempty, w_14);
      }
  }
  z_14 = t;
  t = term_h_7;
  c_15 = t;
  t = SSL_printnl(c_15, z_14);
  t = w_14;
  return(t);
}
ATerm map_1_0 (ATerm o_131 (ATerm), ATerm t)
{
  static ATerm p_16 (ATerm t);
  static ATerm p_16 (ATerm t)
  {
    ATerm i_16 = NULL,l_16 = NULL,o_16 = NULL;
    i_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_16;
      }
    else
      {
        ATerm z_3 = NULL,y_4 = NULL,c_5 = NULL,r_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_16 = ATgetFirst((ATermList) t);
            o_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_16);
        z_3 = t;
        t = l_16;
        t = o_131(t);
        y_4 = t;
        t = o_16;
        t = p_16(t);
        c_5 = t;
        t = (ATerm) ATinsert(CheckATermList(c_5), y_4);
        r_4 = t;
        t = SSLsetAnnotations(r_4, z_3);
      }
    return(t);
  }
  t = p_16(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm v_16 = NULL,z_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_16 = ATgetFirst((ATermList) t);
      z_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_17 = NULL,g_17 = NULL;
        static ATerm k_1 (ATerm t);
        static ATerm k_1 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_17)), not_null(g_17));
          return(t);
        }
        t = z_16;
        t = r_0(t);
        if(((f_17 != NULL) && (f_17 != t)))
          _fail(t);
        else
          f_17 = t;
        t = v_16;
        t = p_0(t);
        if(((g_17 != NULL) && (g_17 != t)))
          _fail(t);
        else
          g_17 = t;
        t = z_16;
        t = reverse_acc_2_0(p_0, k_1, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_9;
      t = r_0(t);
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,w_4 = NULL;
  w_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_17);
  u_17 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_17);
  w_4 = t;
  t = SSLsetAnnotations(w_4, u_17);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm d_18 = NULL;
  d_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_18), term_t_9);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm p_149 (ATerm), ATerm q_149 (ATerm), ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL;
  ATerm v_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_17 = NULL,t_17 = NULL;
      t = term_c_7;
      q_17 = t;
      t = term_z_8;
      t_17 = t;
      t = term_a_9;
      t = p_4(q_17, t_17, t);
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
        t = p_149(t);
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
  n_17 = t;
  t = term_b_10;
  o_17 = t;
  t = term_c_10;
  t = p_4(n_17, o_17, t);
  t = reverse_acc_2_0(_id, t_1, t);
  t = map_1_0(u_1, t);
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_18 = NULL;
        t = q_149(t);
        e_18 = t;
        t = (ATerm) ATinsert(CheckATermList(e_18), term_f_10);
        t = echo_0_0(t);
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
      }
  }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,a_5 = NULL;
  m_18 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_18);
  k_18 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_18);
  a_5 = t;
  t = SSLsetAnnotations(a_5, k_18);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_18 = NULL;
  h_18 = t;
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_18 = NULL,j_18 = NULL;
        t = term_c_7;
        i_18 = t;
        t = term_z_8;
        j_18 = t;
        t = term_a_9;
        t = p_4(i_18, j_18, t);
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
        t = fetch_1_0(a_2, t);
      }
  }
  t = h_18;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm o_18 = NULL;
  o_18 = t;
  if(match_string(t, "-k"))
    {
      t = o_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_18;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
  p_18 = t;
  t = SSL_string_to_int(p_18);
  q_18 = t;
  t = term_i_10;
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, q_18);
  t = s_4(r_18, q_18, t);
  t = p_18;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_2, c_2, e_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm t_18 = NULL;
  t_18 = t;
  if(match_string(t, "-S"))
    {
      t = t_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_18;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL;
  t = term_l_10;
  u_18 = t;
  t = term_m_10;
  v_18 = t;
  t = term_n_10;
  t = s_4(u_18, v_18, t);
  t = term_p_10;
  return(t);
}
static ATerm l_2 (ATerm t)
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
static ATerm r_2 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  w_18 = t;
  t = SSL_string_to_int(w_18);
  x_18 = t;
  t = term_l_10;
  y_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_10, x_18);
  t = s_4(y_18, x_18, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_18);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_s_10;
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
  ATerm z_18 = NULL,a_19 = NULL;
  t = term_t_10;
  z_18 = t;
  t = term_s_9;
  a_19 = t;
  t = term_u_10;
  t = s_4(z_18, a_19, t);
  t = term_v_10;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_2, k_2, l_2, t);
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_2, r_2, s_2, t);
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
            t = Option_3_0(u_2, x_2, z_2, t);
          }
      }
    }
  return(t);
}
static ATerm s_4 (ATerm a_37, ATerm b_37, ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL;
  t = term_c_7;
  b_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_7, a_37, b_37);
  t = lookup_table_0_1(b_19, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_4(a_37, b_37, c_19, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_7, a_37, b_37);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL;
      t = term_s_9;
      t = g_0(t);
      i_19 = t;
      t = term_a_10;
      j_19 = t;
      t = term_b_10;
      k_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_10, term_b_10, i_19);
      t = q_4(j_19, k_19, i_19, t);
      _fail(t);
    }
  else
    {
      ATerm n_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_19 = ATgetFirst((ATermList) t);
          h_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_19;
      t = d_0(t);
      t = term_s_9;
      t = f_0(t);
      n_19 = t;
      t = (ATerm) ATinsert(CheckATermList(h_19), n_19);
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm p_19 = NULL;
  p_19 = t;
  if(match_string(t, "-o"))
    {
      t = p_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_19;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL;
  q_19 = t;
  t = term_d_7;
  r_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_7, q_19);
  t = s_4(r_19, q_19, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_19);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_g_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_3, g_3, h_3, t);
  return(t);
}
static ATerm q_4 (ATerm r_42, ATerm s_42, ATerm q_42, ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,z_19 = NULL,a_20 = NULL;
  v_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_42, s_42);
  {
    ATerm h_11 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, r_42, s_42);
        t = p_4(r_42, s_42, t);
        LocalPopChoice(i_11);
      }
    else
      {
        t = h_11;
        t = (ATerm) ATempty;
      }
  }
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_42, s_42, (ATerm) ATinsert(CheckATermList(w_19), q_42));
  t = lookup_table_0_1(r_42, t);
  a_20 = t;
  t = (ATerm) ATinsert(CheckATermList(w_19), q_42);
  x_19 = t;
  t = a_20;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_4(s_42, x_19, z_19, t);
  t = v_19;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
      t = term_s_9;
      t = o_0(t);
      l_20 = t;
      t = term_a_10;
      m_20 = t;
      t = term_b_10;
      n_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_10, term_b_10, l_20);
      t = q_4(m_20, n_20, l_20, t);
      _fail(t);
    }
  else
    {
      ATerm r_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_20 = ATgetFirst((ATermList) t);
          i_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_20;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_20 = ATgetFirst((ATermList) t);
          k_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_20;
      t = j_0(t);
      t = j_20;
      t = l_0(t);
      r_20 = t;
      t = (ATerm) ATinsert(CheckATermList(k_20), r_20);
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm t_20 = NULL;
  t_20 = t;
  if(match_string(t, "-i"))
    {
      t = t_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_20;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL;
  u_20 = t;
  t = term_t_8;
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_8, u_20);
  t = s_4(v_20, u_20, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_20);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_l_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_3, j_3, k_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_9;
  t = whoami_0_0(t);
  w_20 = t;
  t = term_q_0;
  y_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_11), w_20);
  z_20 = t;
  t = SSL_printnl(y_20, z_20);
  t = term_p_11;
  x_20 = t;
  t = SSL_exit(x_20);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL;
  t = term_c_7;
  a_21 = t;
  t = term_z_8;
  b_21 = t;
  t = term_a_9;
  t = p_4(a_21, b_21, t);
  return(t);
}
static ATerm k_4 (ATerm z_39, ATerm a_40, ATerm t)
{
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_39, a_40);
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
      t = SSL_addr(z_39, a_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_137 (ATerm), ATerm k_137 (ATerm), ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
  d_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_21;
      t = j_137(t);
    }
  else
    {
      ATerm i_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_21 = ATgetFirst((ATermList) t);
          f_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_21;
      t = foldr_2_0(j_137, k_137, t);
      i_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_21, i_21);
      t = k_137(t);
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
  t = term_m_10;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm y_5 = NULL,f_6 = NULL;
  if(match_cons(t, sym__2))
    {
      y_5 = ATgetArgument(t, 0);
      f_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_4(y_5, f_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_21 = NULL,n_5 = NULL,o_5 = NULL;
  t = times_0_0(t);
  o_5 = t;
  t = SSL_explode_term(o_5);
  if(match_cons(t, sym__2))
    {
      ATerm t_11 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5;
  t = foldr_2_0(l_3, m_3, t);
  l_21 = t;
  t = SSL_TicksToSeconds(l_21);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  w_21 = t;
  if(match_cons(t, sym__2))
    {
      x_21 = ATgetArgument(t, 0);
      y_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_21;
        if((x_21 != t))
          {
            _fail(t);
          }
        t = w_21;
        LocalPopChoice(y_11);
      }
    else
      {
        t = u_11;
        t = (ATerm) ATmakeAppl(sym__2, x_21, y_21);
        {
          ATerm z_11 = t;
          int b_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_21, y_21);
              LocalPopChoice(b_12);
            }
          else
            {
              t = z_11;
              t = SSL_gtr(x_21, y_21);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_21, y_21);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_123 (ATerm), ATerm t)
{
  ATerm c_22 = NULL;
  c_22 = t;
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_22 = NULL,g_22 = NULL,h_22 = NULL;
        t = term_c_7;
        g_22 = t;
        t = term_l_10;
        h_22 = t;
        t = term_f_12;
        t = p_4(g_22, h_22, t);
        e_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_22, term_p_11);
        t = geq_0_0(t);
        t = c_22;
        t = j_123(t);
        LocalPopChoice(e_12);
      }
    else
      {
        t = d_12;
        t = c_22;
      }
  }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,n_22 = NULL,o_22 = NULL;
  t = run_time_0_0(t);
  j_22 = t;
  t = term_s_9;
  t = whoami_0_0(t);
  k_22 = t;
  t = term_q_0;
  n_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_12), j_22), term_g_12), k_22);
  o_22 = t;
  t = SSL_printnl(n_22, o_22);
  t = (ATerm) ATmakeAppl(sym__2, term_q_0, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_12), j_22), term_g_12), k_22));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_10;
  p_22 = t;
  t = SSL_exit(p_22);
  return(t);
}
static ATerm t_4 (ATerm g_47, ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm q_22 = NULL;
  t = SSL_hashtable_put(i_47, g_47, h_47);
  q_22 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_22);
  return(t);
}
ATerm lookup_table_0_1 (ATerm d_44, ATerm t)
{
  ATerm w_23 = NULL;
  t = table_hashtable_0_0(t);
  w_23 = t;
  {
    ATerm i_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_6 = NULL;
        t = w_23;
        if(match_cons(t, sym_Hashtable_1))
          {
            y_6 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_4(d_44, y_6, t);
        LocalPopChoice(k_12);
      }
    else
      {
        t = i_12;
        {
          ATerm f_7 = NULL;
          t = d_44;
          t = table_create_0_0(t);
          t = w_23;
          if(match_cons(t, sym_Hashtable_1))
            {
              f_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_4(d_44, f_7, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm o_47, ATerm p_47, ATerm t)
{
  ATerm z_23 = NULL;
  t = SSL_hashtable_create(o_47, p_47);
  z_23 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_23);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,e_24 = NULL,f_24 = NULL;
  a_24 = t;
  t = term_l_12;
  e_24 = t;
  t = term_m_12;
  f_24 = t;
  t = a_24;
  t = new_hashtable_0_2(e_24, f_24, t);
  b_24 = t;
  t = a_24;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_4(a_24, b_24, c_24, t);
  t = a_24;
  return(t);
}
static ATerm m_4 (ATerm l_47, ATerm m_47, ATerm t)
{
  ATerm g_24 = NULL;
  t = SSL_hashtable_remove(m_47, l_47);
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_24);
  return(t);
}
static ATerm n_4 (ATerm q_47, ATerm t)
{
  ATerm h_24 = NULL;
  t = SSL_hashtable_destroy(q_47);
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_24);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_24 = NULL;
  t = SSL_table_hashtable();
  i_24 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_24);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL;
  j_24 = t;
  t = table_hashtable_0_0(t);
  k_24 = t;
  t = lookup_table_0_1(j_24, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_4(m_24, t);
  t = k_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_4(j_24, l_24, t);
  t = j_24;
  return(t);
}
ATerm fetch_1_0 (ATerm w_131 (ATerm), ATerm t)
{
  static ATerm j_25 (ATerm t);
  static ATerm j_25 (ATerm t)
  {
    ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
    g_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_25 = ATgetFirst((ATermList) t);
        i_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_12 = t;
      int q_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_7 = NULL,y_7 = NULL,e_5 = NULL;
          t = SSLgetAnnotations(g_25);
          t_7 = t;
          t = h_25;
          t = w_131(t);
          y_7 = t;
          t = (ATerm) ATinsert(CheckATermList(i_25), y_7);
          e_5 = t;
          t = SSLsetAnnotations(e_5, t_7);
          LocalPopChoice(q_12);
        }
      else
        {
          t = o_12;
          {
            ATerm j_8 = NULL,o_8 = NULL,f_5 = NULL;
            t = SSLgetAnnotations(g_25);
            j_8 = t;
            t = i_25;
            t = j_25(t);
            o_8 = t;
            t = (ATerm) ATinsert(CheckATermList(o_8), h_25);
            f_5 = t;
            t = SSLsetAnnotations(f_5, j_8);
          }
        }
    }
    return(t);
  }
  t = j_25(t);
  return(t);
}
static ATerm u_4 (ATerm j_47, ATerm k_47, ATerm t)
{
  t = SSL_hashtable_get(k_47, j_47);
  return(t);
}
static ATerm p_4 (ATerm k_44, ATerm l_44, ATerm t)
{
  ATerm m_25 = NULL;
  t = lookup_table_0_1(k_44, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_4(l_44, m_25, t);
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
  ATerm o_25 = NULL,p_25 = NULL;
  t = term_r_12;
  o_25 = t;
  t = term_s_9;
  p_25 = t;
  t = term_s_12;
  t = s_4(o_25, p_25, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_u_12;
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
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
  t = term_r_12;
  s_25 = t;
  t = term_s_9;
  t_25 = t;
  t = term_s_12;
  t = s_4(s_25, t_25, t);
  t = term_v_12;
  q_25 = t;
  t = term_s_9;
  r_25 = t;
  t = term_x_12;
  t = s_4(q_25, r_25, t);
  t = term_y_12;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_z_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_3, p_3, q_3, t);
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      t = Option_3_0(r_3, v_3, w_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_89 (ATerm), ATerm j_89 (ATerm), ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,k_5 = NULL;
  z_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_25 = ATgetFirst((ATermList) t);
      w_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_25);
  u_25 = t;
  t = v_25;
  t = i_89(t);
  x_25 = t;
  t = w_25;
  t = j_89(t);
  y_25 = t;
  t = (ATerm) ATinsert(CheckATermList(y_25), x_25);
  k_5 = t;
  t = SSLsetAnnotations(k_5, u_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_149 (ATerm), ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,j_26 = NULL,k_26 = NULL,p_5 = NULL;
  e_26 = t;
  {
    ATerm c_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_13;
        t = k_149(t);
        LocalPopChoice(e_13);
      }
    else
      {
        t = c_13;
      }
  }
  t = e_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_26 = ATgetFirst((ATermList) t);
      h_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_26);
  f_26 = t;
  t = term_z_8;
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_8, g_26);
  t = s_4(k_26, g_26, t);
  t = h_26;
  {
    static ATerm u_26 (ATerm t);
    static ATerm u_26 (ATerm t)
    {
      ATerm h_13 = t;
      int i_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_13 = t;
          int n_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_26 = NULL;
              n_26 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_26;
              LocalPopChoice(n_13);
            }
          else
            {
              t = k_13;
              t = k_149(t);
              t = Cons_2_0(_id, u_26, t);
            }
          LocalPopChoice(i_13);
        }
      else
        {
          t = h_13;
          {
            ATerm q_26 = NULL,r_26 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_26 = ATgetFirst((ATermList) t);
                r_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_26), (ATerm) ATmakeAppl(sym_Undefined_1, q_26));
          }
        }
      return(t);
    }
    t = u_26(t);
  }
  j_26 = t;
  t = (ATerm) ATinsert(CheckATermList(j_26), (ATerm) ATmakeAppl(sym_Program_1, g_26));
  p_5 = t;
  t = SSLsetAnnotations(p_5, f_26);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm h_27 = NULL;
  h_27 = t;
  if(match_string(t, "--help"))
    {
      t = h_27;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_27;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_27;
        }
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL;
  t = term_o_13;
  i_27 = t;
  t = term_s_9;
  j_27 = t;
  t = term_p_13;
  t = s_4(i_27, j_27, t);
  t = term_u_13;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_v_13;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm h_149 (ATerm), ATerm i_149 (ATerm), ATerm j_149 (ATerm), ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
  b_27 = t;
  t = term_a_10;
  c_27 = t;
  t = term_x_13;
  t = lookup_table_0_1(c_27, t);
  g_27 = t;
  t = term_b_10;
  d_27 = t;
  t = (ATerm) ATempty;
  e_27 = t;
  t = g_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_4(d_27, e_27, f_27, t);
  t = b_27;
  {
    static ATerm x_3 (ATerm t);
    static ATerm x_3 (ATerm t)
    {
      ATerm y_13 = t;
      int a_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_149(t);
          LocalPopChoice(a_14);
        }
      else
        {
          t = y_13;
          {
            ATerm b_14 = t;
            int c_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_3, a_4, l_4, t);
                LocalPopChoice(c_14);
              }
            else
              {
                t = b_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_3, t);
  }
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_27 = NULL;
        u_27 = t;
        {
          ATerm f_14 = t;
          int g_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_9 = NULL;
              t = u_27;
              {
                ATerm i_14 = t;
                int j_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_9 = NULL,h_9 = NULL;
                    t = term_c_7;
                    e_9 = t;
                    t = term_o_13;
                    h_9 = t;
                    t = term_k_14;
                    t = p_4(e_9, h_9, t);
                    LocalPopChoice(j_14);
                  }
                else
                  {
                    t = i_14;
                    t = fetch_1_0(o_4, t);
                  }
              }
              t = u_27;
              t = i_149(t);
              t = term_m_10;
              d_9 = t;
              t = SSL_exit(d_9);
              LocalPopChoice(g_14);
            }
          else
            {
              t = f_14;
              {
                ATerm n_9 = NULL,p_9 = NULL,r_9 = NULL;
                t = term_c_7;
                p_9 = t;
                t = term_r_12;
                r_9 = t;
                t = term_l_14;
                t = p_4(p_9, r_9, t);
                t = u_27;
                t = j_149(t);
                t = term_m_10;
                n_9 = t;
                t = SSL_exit(n_9);
              }
            }
        }
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        {
          ATerm m_14 = t;
          int n_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
              static ATerm v_4 (ATerm t);
              static ATerm v_4 (ATerm t)
              {
                ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,r_5 = NULL;
                a_28 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_28);
                y_27 = t;
                t = z_27;
                if(((z_26 != NULL) && (z_26 != t)))
                  _fail(t);
                else
                  z_26 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_27);
                r_5 = t;
                t = SSLsetAnnotations(r_5, y_27);
                return(t);
              }
              t = fetch_1_0(v_4, t);
              t = term_q_0;
              w_27 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_26)), term_p_14);
              x_27 = t;
              t = SSL_printnl(w_27, x_27);
              t = (ATerm) ATmakeAppl(sym__2, term_q_0, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_26)), term_p_14));
              t = i_149(t);
              t = term_p_11;
              v_27 = t;
              t = SSL_exit(v_27);
              LocalPopChoice(n_14);
            }
          else
            {
              t = m_14;
            }
        }
      }
  }
  a_27 = t;
  t = term_a_10;
  t = table_destroy_0_0(t);
  t = a_27;
  return(t);
}
ATerm option_wrap_5_0 (ATerm k_147 (ATerm), ATerm l_147 (ATerm), ATerm m_147 (ATerm), ATerm n_147 (ATerm), ATerm o_147 (ATerm), ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
  t = parse_options_3_0(k_147, l_147, m_147, t);
  f_28 = t;
  t = term_q_14;
  t = table_create_0_0(t);
  t = term_q_14;
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_14, term_v_14, f_28);
  t = lookup_table_0_1(g_28, t);
  j_28 = t;
  t = term_v_14;
  h_28 = t;
  t = j_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_4(h_28, f_28, i_28, t);
  t = f_28;
  t = n_147(t);
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_147(t);
        t = report_success_0_0(t);
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      {
        ATerm d_15 = t;
        int e_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(b_5, d_5, g_5, t);
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
                        t = verbose_option_0_0(t);
                        LocalPopChoice(i_15);
                      }
                    else
                      {
                        t = h_15;
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
static ATerm z_4 (ATerm t)
{
  t = input_1_0(h_5, t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL;
  t = term_l_7;
  m_28 = t;
  t = term_s_9;
  n_28 = t;
  t = term_j_15;
  t = s_4(m_28, n_28, t);
  t = term_k_15;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_l_15;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = output_1_0(i_5, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_28 = NULL;
      t = sometd_1_0(RepairDefinition_0_0, t);
      p_28 = t;
      t = explanation_0_0(t);
      t = p_28;
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(x_4, default_system_usage_0_0, default_system_about_0_0, _id, z_4, t);
  return(t);
}

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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_e_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_p_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_g_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_f_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_z_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_o_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_h_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_c_7;
ATerm term_z_6;
ATerm term_w_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_w_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_j_5;
ATerm term_s_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_0));
  term_s_0 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: argument '", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("' of ", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" '", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("' starts with constant type", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_e_7);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_l_7);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_o_8);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_v_8);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
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
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__2, term_k_10, term_l_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym__2, term_t_10, term_r_9);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_k_10);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_r_9);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_r_9);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_r_9);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym__3, term_a_10, term_b_10, (ATerm) ATempty);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_n_13);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_q_12);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, term_l_7, term_r_9);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm explanation_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm u_130 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm o_2 (ATerm f_2, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm b_4 (ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm v_23, ATerm t_23, ATerm s_23, ATerm u_23, ATerm t);
ATerm RepairVarDec_2_0 (ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm t);
ATerm map1_1_0 (ATerm h_130 (ATerm), ATerm t);
static ATerm n_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm RepairDefinition_0_0 (ATerm t);
ATerm sometd_1_0 (ATerm j_114 (ATerm), ATerm t);
static ATerm c_4 (ATerm e_33, ATerm f_33, ATerm t);
static ATerm d_4 (ATerm k_31, ATerm l_31, ATerm t);
static ATerm f_4 (ATerm k_120 (ATerm), ATerm p_237, ATerm q_31, ATerm t);
static ATerm e_4 (ATerm g_31, ATerm h_31, ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm output_1_0 (ATerm t_145 (ATerm), ATerm t);
static ATerm y_10 (ATerm m_10, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_4 (ATerm m_31, ATerm t);
static ATerm h_4 (ATerm x_75, ATerm y_75, ATerm t);
static ATerm i_4 (ATerm g_33, ATerm h_33, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_13 (ATerm n_11, ATerm t);
static ATerm t_13 (ATerm v_11, ATerm w_11, ATerm x_11, ATerm t);
static ATerm v_13 (ATerm p_12, ATerm t_12, ATerm w_12, ATerm t);
static ATerm j_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm u_145 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm f_130 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm m_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm default_system_usage_2_0 (ATerm s_147 (ATerm), ATerm t_147 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm s_4 (ATerm a_37, ATerm b_37, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm z_2 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
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
ATerm foldr_2_0 (ATerm a_136 (ATerm), ATerm b_136 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_122 (ATerm), ATerm t);
static ATerm n_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm t_4 (ATerm c_47, ATerm d_47, ATerm e_47, ATerm t);
ATerm lookup_table_0_1 (ATerm d_44, ATerm t);
ATerm new_hashtable_0_2 (ATerm k_47, ATerm l_47, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm m_4 (ATerm h_47, ATerm i_47, ATerm t);
static ATerm n_4 (ATerm m_47, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm n_130 (ATerm), ATerm t);
static ATerm u_4 (ATerm f_47, ATerm g_47, ATerm t);
static ATerm p_4 (ATerm k_44, ATerm l_44, ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm n_147 (ATerm), ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm parse_options_3_0 (ATerm k_147 (ATerm), ATerm l_147 (ATerm), ATerm m_147 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm n_145 (ATerm), ATerm o_145 (ATerm), ATerm p_145 (ATerm), ATerm q_145 (ATerm), ATerm r_145 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
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
  t = term_s_0;
  a_0 = t;
  t = (ATerm) ATinsert(ATempty, term_j_5);
  b_0 = t;
  t = SSL_printnl(a_0, b_0);
  t = (ATerm) ATmakeAppl(sym__2, term_s_0, (ATerm) ATinsert(ATempty, term_j_5));
  return(t);
}
ATerm at_end_1_0 (ATerm u_130 (ATerm), ATerm t)
{
  static ATerm z_1 (ATerm t);
  static ATerm z_1 (ATerm t)
  {
    ATerm n_1 = NULL,w_1 = NULL,y_1 = NULL;
    y_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_1 = ATgetFirst((ATermList) t);
        w_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_0 = NULL,c_1 = NULL,v_0 = NULL;
          t = SSLgetAnnotations(y_1);
          t_0 = t;
          t = w_1;
          t = z_1(t);
          c_1 = t;
          t = (ATerm) ATinsert(CheckATermList(c_1), n_1);
          v_0 = t;
          t = SSLsetAnnotations(v_0, t_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_1;
        t = u_130(t);
      }
    return(t);
  }
  t = z_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_0 = NULL,i_0 = NULL,m_0 = NULL;
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
        t = not_null(m_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_0 = ATgetFirst((ATermList) t);
          if(((m_0 != NULL) && (m_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_0;
      t = at_end_1_0(c_0, t);
    }
  return(t);
}
static ATerm o_2 (ATerm f_2, ATerm t)
{
  ATerm g_2 = NULL;
  t = SSL_explode_term(f_2);
  if(match_cons(t, sym__2))
    {
      ATerm k_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_5) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_2;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,l_2 = NULL;
  l_2 = t;
  if(match_cons(t, sym__2))
    {
      i_2 = ATgetArgument(t, 0);
      j_2 = ATgetArgument(t, 1);
      {
        ATerm o_5 = t;
        int q_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm h_0 (ATerm t);
            static ATerm h_0 (ATerm t)
            {
              t = j_2;
              return(t);
            }
            t = i_2;
            t = at_end_1_0(h_0, t);
            LocalPopChoice(q_5);
          }
        else
          {
            t = o_5;
            t = o_2(l_2, t);
          }
      }
    }
  else
    {
      t = o_2(l_2, t);
    }
  return(t);
}
static ATerm b_4 (ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm v_23, ATerm t_23, ATerm s_23, ATerm u_23, ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL,t_2 = NULL,v_2 = NULL,w_2 = NULL,a_3 = NULL;
  q_2 = t;
  t = q_110(t);
  t_2 = t;
  t = q_2;
  t = r_110(t);
  v_2 = t;
  t = term_s_0;
  w_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_5), v_2), term_u_5), t_2), term_t_5), v_23), term_s_5);
  a_3 = t;
  t = SSL_printnl(w_2, a_3);
  t = (ATerm) ATmakeAppl(sym__2, s_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, t_23)));
  t = conc_0_0(t);
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, v_23, (ATerm) ATmakeAppl(sym_FunType_2, p_2, u_23));
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm t)
{
  ATerm b_3 = NULL,d_3 = NULL,e_3 = NULL,h_3 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      b_3 = ATgetArgument(t, 0);
      {
        ATerm x_5 = ATgetArgument(t, 1);
        if(match_cons(x_5, sym_FunType_2))
          {
            ATerm z_5 = ATgetArgument(x_5, 0);
            if(((ATgetType(z_5) == AT_LIST) && !(ATisEmpty(z_5))))
              {
                ATerm a_6 = ATgetFirst((ATermList) z_5);
                if(match_cons(a_6, sym_ConstType_1))
                  {
                    d_3 = ATgetArgument(a_6, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm e_6 = (ATerm) ATgetNext((ATermList) z_5);
                  e_3 = e_6;
                  if(((ATgetType(e_6) == AT_LIST) && !(ATisEmpty(e_6))))
                    {
                      ATerm f_6 = ATgetFirst((ATermList) e_6);
                      if(match_cons(f_6, sym_FunType_2))
                        {
                          ATerm h_6 = ATgetArgument(f_6, 0);
                          ATerm i_6 = ATgetArgument(f_6, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm g_6 = (ATerm) ATgetNext((ATermList) e_6);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            h_3 = ATgetArgument(x_5, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_4(q_110, r_110, b_3, d_3, e_3, h_3, t);
  return(t);
}
ATerm map1_1_0 (ATerm h_130 (ATerm), ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL;
  b_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_6 = ATgetFirst((ATermList) t);
      d_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm k_6 = t;
    int l_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,u_1 = NULL,v_1 = NULL,z_0 = NULL,y_0 = NULL;
        t = SSLgetAnnotations(b_6);
        r_1 = t;
        t = c_6;
        t = h_130(t);
        u_1 = t;
        t = (ATerm) ATinsert(CheckATermList(d_6), u_1);
        y_0 = t;
        t = SSLsetAnnotations(y_0, r_1);
        v_1 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_1 = ATgetFirst((ATermList) t);
            p_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_1);
        l_1 = t;
        t = p_1;
        {
          ATerm m_6 = t;
          int n_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(h_130, t);
              LocalPopChoice(n_6);
            }
          else
            {
              t = m_6;
            }
        }
        q_1 = t;
        t = (ATerm) ATinsert(CheckATermList(q_1), o_1);
        z_0 = t;
        t = SSLsetAnnotations(z_0, l_1);
        LocalPopChoice(l_6);
      }
    else
      {
        t = k_6;
        {
          ATerm x_2 = NULL,c_3 = NULL,a_1 = NULL;
          t = SSLgetAnnotations(b_6);
          x_2 = t;
          t = d_6;
          t = map1_1_0(h_130, t);
          c_3 = t;
          t = (ATerm) ATinsert(CheckATermList(c_3), c_6);
          a_1 = t;
          t = SSLsetAnnotations(a_1, x_2);
        }
      }
  }
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = term_o_6;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_o_6;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_p_6;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_p_6;
  return(t);
}
ATerm RepairDefinition_0_0 (ATerm t)
{
  ATerm j_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      q_6 = ATgetArgument(t, 0);
      r_6 = ATgetArgument(t, 1);
      s_6 = ATgetArgument(t, 2);
      j_6 = ATgetArgument(t, 3);
      {
        ATerm g_7 = NULL;
        t = r_6;
        {
          static ATerm k_0 (ATerm t);
          static ATerm k_0 (ATerm t)
          {
            static ATerm q_0 (ATerm t);
            static ATerm q_0 (ATerm t)
            {
              t = q_6;
              return(t);
            }
            t = RepairVarDec_2_0(n_0, q_0, t);
            return(t);
          }
          t = map1_1_0(k_0, t);
        }
        g_7 = t;
        t = (ATerm) ATmakeAppl(sym_RDefT_4, q_6, g_7, s_6, j_6);
      }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          q_6 = ATgetArgument(t, 0);
          r_6 = ATgetArgument(t, 1);
          s_6 = ATgetArgument(t, 2);
          {
            ATerm k_7 = NULL;
            t = r_6;
            {
              static ATerm u_0 (ATerm t);
              static ATerm u_0 (ATerm t)
              {
                static ATerm x_0 (ATerm t);
                static ATerm x_0 (ATerm t)
                {
                  t = q_6;
                  return(t);
                }
                t = RepairVarDec_2_0(w_0, x_0, t);
                return(t);
              }
              t = map1_1_0(u_0, t);
            }
            k_7 = t;
            t = (ATerm) ATmakeAppl(sym_RDef_3, q_6, k_7, s_6);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              q_6 = ATgetArgument(t, 0);
              r_6 = ATgetArgument(t, 1);
              s_6 = ATgetArgument(t, 2);
              j_6 = ATgetArgument(t, 3);
              {
                ATerm v_7 = NULL;
                t = r_6;
                {
                  static ATerm b_1 (ATerm t);
                  static ATerm b_1 (ATerm t)
                  {
                    static ATerm e_1 (ATerm t);
                    static ATerm e_1 (ATerm t)
                    {
                      t = q_6;
                      return(t);
                    }
                    t = RepairVarDec_2_0(d_1, e_1, t);
                    return(t);
                  }
                  t = map1_1_0(b_1, t);
                }
                v_7 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, q_6, v_7, s_6, j_6);
              }
            }
          else
            {
              ATerm e_8 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  q_6 = ATgetArgument(t, 0);
                  r_6 = ATgetArgument(t, 1);
                  s_6 = ATgetArgument(t, 2);
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
                    t = q_6;
                    return(t);
                  }
                  t = RepairVarDec_2_0(g_1, h_1, t);
                  return(t);
                }
                t = map1_1_0(f_1, t);
              }
              e_8 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_3, q_6, e_8, s_6);
            }
        }
    }
  return(t);
}
ATerm sometd_1_0 (ATerm j_114 (ATerm), ATerm t)
{
  static ATerm l_8 (ATerm t);
  static ATerm l_8 (ATerm t)
  {
    ATerm t_6 = t;
    int u_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_114(t);
        LocalPopChoice(u_6);
      }
    else
      {
        t = t_6;
        t = SRTS_some(l_8, t);
      }
    return(t);
  }
  t = l_8(t);
  return(t);
}
static ATerm c_4 (ATerm e_33, ATerm f_33, ATerm t)
{
  ATerm m_8 = NULL;
  t = SSL_fputc(e_33, f_33);
  m_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_8);
  return(t);
}
static ATerm d_4 (ATerm k_31, ATerm l_31, ATerm t)
{
  ATerm p_8 = NULL;
  t = SSL_write_term_to_stream_text(k_31, l_31);
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_8);
  return(t);
}
static ATerm f_4 (ATerm k_120 (ATerm), ATerm p_237, ATerm q_31, ATerm t)
{
  ATerm q_8 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_237, term_w_6);
  t = j_4(t);
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_8, q_31);
  t = k_120(t);
  t = fclose_0_0(t);
  t = q_31;
  return(t);
}
static ATerm e_4 (ATerm g_31, ATerm h_31, ATerm t)
{
  ATerm r_8 = NULL;
  t = SSL_write_term_to_stream_baf(g_31, h_31);
  r_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_8);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm g_9 = NULL,j_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_6 = ATgetArgument(t, 0);
      if(match_cons(x_6, sym_Stream_1))
        {
          g_9 = ATgetArgument(x_6, 0);
        }
      else
        _fail(t);
      j_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_4(g_9, j_9, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm l_9 = NULL,o_9 = NULL,q_9 = NULL,u_9 = NULL,v_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_6 = ATgetArgument(t, 0);
      if(match_cons(y_6, sym_Stream_1))
        {
          u_9 = ATgetArgument(y_6, 0);
        }
      else
        _fail(t);
      v_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_4(u_9, v_9, t);
  l_9 = t;
  t = term_z_6;
  o_9 = t;
  t = l_9;
  if(match_cons(t, sym_Stream_1))
    {
      q_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_6, l_9);
  t = c_4(o_9, q_9, t);
  return(t);
}
ATerm output_1_0 (ATerm t_145 (ATerm), ATerm t)
{
  ATerm s_8 = NULL,w_8 = NULL;
  t = t_145(t);
  w_8 = t;
  {
    ATerm a_7 = t;
    int b_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_8 = NULL,y_8 = NULL;
        t = term_c_7;
        x_8 = t;
        t = term_e_7;
        y_8 = t;
        t = term_f_7;
        t = p_4(x_8, y_8, t);
        LocalPopChoice(b_7);
      }
    else
      {
        t = a_7;
        t = term_h_7;
      }
  }
  s_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_8, w_8);
  {
    ATerm i_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_9 = NULL,f_9 = NULL;
        t = term_c_7;
        c_9 = t;
        t = term_l_7;
        f_9 = t;
        t = term_m_7;
        t = p_4(c_9, f_9, t);
        t = (ATerm) ATmakeAppl(sym__2, s_8, w_8);
        LocalPopChoice(j_7);
        if(match_cons(t, sym__2))
          {
            ATerm n_7 = ATgetArgument(t, 0);
            ATerm o_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_4(i_1, s_8, w_8, t);
      }
    else
      {
        t = i_7;
        if(match_cons(t, sym__2))
          {
            ATerm p_7 = ATgetArgument(t, 0);
            ATerm r_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_4(j_1, s_8, w_8, t);
      }
  }
  return(t);
}
static ATerm y_10 (ATerm m_10, ATerm t)
{
  t = SSL_fclose(m_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL;
  r_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_10 = ATgetArgument(t, 0);
      {
        ATerm s_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_10);
            LocalPopChoice(t_7);
          }
        else
          {
            t = s_7;
            t = y_10(r_10, t);
          }
      }
    }
  else
    {
      t = y_10(r_10, t);
    }
  return(t);
}
static ATerm g_4 (ATerm m_31, ATerm t)
{
  t = SSL_read_term_from_stream(m_31);
  return(t);
}
static ATerm h_4 (ATerm x_75, ATerm y_75, ATerm t)
{
  t = SSL_strcat(x_75, y_75);
  return(t);
}
static ATerm i_4 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm z_10 = NULL;
  t = SSL_fopen(g_33, h_33);
  z_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_10);
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
  ATerm e_11 = NULL;
  t = SSL_stderr_stream();
  e_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_11);
  return(t);
}
static ATerm s_13 (ATerm n_11, ATerm t)
{
  ATerm o_11 = NULL;
  t = SSL_explode_term(n_11);
  if(match_cons(t, sym__2))
    {
      ATerm u_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_7 = ATgetArgument(t, 1);
        if(((ATgetType(w_7) == AT_LIST) && !(ATisEmpty(w_7))))
          {
            o_11 = ATgetFirst((ATermList) w_7);
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
  t = o_11;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_11;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_11;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_11;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm t_13 (ATerm v_11, ATerm w_11, ATerm x_11, ATerm t)
{
  ATerm a_12 = NULL,c_12 = NULL,d_12 = NULL,l_12 = NULL,b_2 = NULL;
  t = SSLgetAnnotations(x_11);
  d_12 = t;
  t = v_11;
  if(match_cons(t, sym_Path_1))
    {
      l_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_12, w_11);
  b_2 = t;
  t = SSLsetAnnotations(b_2, d_12);
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      c_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(a_12, c_12, t);
  return(t);
}
static ATerm v_13 (ATerm p_12, ATerm t_12, ATerm w_12, ATerm t)
{
  ATerm d_13 = NULL,g_13 = NULL,h_13 = NULL,k_13 = NULL,a_4 = NULL;
  t = SSLgetAnnotations(w_12);
  h_13 = t;
  t = SSL_is_string(p_12);
  k_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_13, t_12);
  a_4 = t;
  t = SSLsetAnnotations(a_4, h_13);
  if(match_cons(t, sym__2))
    {
      d_13 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(d_13, g_13, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm m_13 = NULL,q_13 = NULL,r_13 = NULL;
  m_13 = t;
  if(match_cons(t, sym__2))
    {
      q_13 = ATgetArgument(t, 0);
      r_13 = ATgetArgument(t, 1);
      {
        ATerm z_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_13(m_13, t);
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
                  t = t_13(q_13, r_13, m_13, t);
                  LocalPopChoice(c_8);
                }
              else
                {
                  t = b_8;
                  t = v_13(q_13, r_13, m_13, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_13(m_13, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_13 = NULL,h_14 = NULL,i_14 = NULL,p_14 = NULL;
  p_14 = t;
  {
    ATerm d_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_14, term_g_8);
        t = j_4(t);
        LocalPopChoice(f_8);
      }
    else
      {
        t = d_8;
        {
          ATerm s_3 = NULL,t_3 = NULL;
          t = term_h_8;
          t_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_8, p_14);
          t = h_4(t_3, p_14, t);
          s_3 = t;
          t = SSL_perror(s_3);
          _fail(t);
        }
      }
  }
  h_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_4(i_14, t);
  z_13 = t;
  t = h_14;
  t = fclose_0_0(t);
  t = z_13;
  return(t);
}
ATerm input_1_0 (ATerm u_145 (ATerm), ATerm t)
{
  ATerm j_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_14 = NULL,t_14 = NULL;
      t = term_c_7;
      s_14 = t;
      t = term_o_8;
      t_14 = t;
      t = term_t_8;
      t = p_4(s_14, t_14, t);
      LocalPopChoice(k_8);
    }
  else
    {
      t = j_8;
      t = term_u_8;
    }
  t = ReadFromFile_0_0(t);
  t = u_145(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL;
  t = term_c_7;
  u_14 = t;
  t = term_v_8;
  v_14 = t;
  t = term_z_8;
  t = p_4(u_14, v_14, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_14 = NULL,c_15 = NULL,d_15 = NULL;
  z_14 = t;
  {
    ATerm a_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_14;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_9 = ATgetFirst((ATermList) t);
                ATerm k_9 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_14;
          }
        LocalPopChoice(h_9);
      }
    else
      {
        t = a_9;
        t = (ATerm) ATinsert(ATempty, z_14);
      }
  }
  c_15 = t;
  t = term_h_7;
  d_15 = t;
  t = SSL_printnl(d_15, c_15);
  t = z_14;
  return(t);
}
ATerm map_1_0 (ATerm f_130 (ATerm), ATerm t)
{
  static ATerm s_16 (ATerm t);
  static ATerm s_16 (ATerm t)
  {
    ATerm l_16 = NULL,o_16 = NULL,p_16 = NULL;
    l_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_16;
      }
    else
      {
        ATerm y_3 = NULL,x_4 = NULL,y_4 = NULL,v_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_16 = ATgetFirst((ATermList) t);
            p_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_16);
        y_3 = t;
        t = o_16;
        t = f_130(t);
        x_4 = t;
        t = p_16;
        t = s_16(t);
        y_4 = t;
        t = (ATerm) ATinsert(CheckATermList(y_4), x_4);
        v_4 = t;
        t = SSLsetAnnotations(v_4, y_3);
      }
    return(t);
  }
  t = s_16(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_16 = ATgetFirst((ATermList) t);
      a_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_17 = NULL,h_17 = NULL;
        static ATerm k_1 (ATerm t);
        static ATerm k_1 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_17)), not_null(h_17));
          return(t);
        }
        t = a_17;
        t = r_0(t);
        if(((g_17 != NULL) && (g_17 != t)))
          _fail(t);
        else
          g_17 = t;
        t = z_16;
        t = p_0(t);
        if(((h_17 != NULL) && (h_17 != t)))
          _fail(t);
        else
          h_17 = t;
        t = a_17;
        t = reverse_acc_2_0(p_0, k_1, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_9;
      t = r_0(t);
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,z_17 = NULL,z_4 = NULL;
  z_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_17);
  v_17 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_17);
  z_4 = t;
  t = SSLsetAnnotations(z_4, v_17);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm e_18 = NULL;
  e_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_18), term_s_9);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm s_147 (ATerm), ATerm t_147 (ATerm), ATerm t)
{
  ATerm o_17 = NULL,q_17 = NULL;
  ATerm t_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_17 = NULL,u_17 = NULL;
      t = term_c_7;
      t_17 = t;
      t = term_v_8;
      u_17 = t;
      t = term_z_8;
      t = p_4(t_17, u_17, t);
      LocalPopChoice(w_9);
    }
  else
    {
      t = t_9;
      t = fetch_1_0(m_1, t);
    }
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_147(t);
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
  o_17 = t;
  t = term_b_10;
  q_17 = t;
  t = term_c_10;
  t = p_4(o_17, q_17, t);
  t = reverse_acc_2_0(_id, s_1, t);
  t = map_1_0(t_1, t);
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_18 = NULL;
        t = t_147(t);
        f_18 = t;
        t = (ATerm) ATinsert(CheckATermList(f_18), term_f_10);
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
static ATerm x_1 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,b_5 = NULL;
  n_18 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_18);
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_18);
  b_5 = t;
  t = SSLsetAnnotations(b_5, l_18);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_18 = NULL;
  i_18 = t;
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_18 = NULL,k_18 = NULL;
        t = term_c_7;
        j_18 = t;
        t = term_v_8;
        k_18 = t;
        t = term_z_8;
        t = p_4(j_18, k_18, t);
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
        t = fetch_1_0(x_1, t);
      }
  }
  t = i_18;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm p_18 = NULL;
  p_18 = t;
  if(match_string(t, "-k"))
    {
      t = p_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_18;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  t = SSL_string_to_int(q_18);
  r_18 = t;
  t = term_i_10;
  s_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, r_18);
  t = s_4(s_18, r_18, t);
  t = q_18;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_2, c_2, d_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm u_18 = NULL;
  u_18 = t;
  if(match_string(t, "-S"))
    {
      t = u_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_18;
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL;
  t = term_k_10;
  v_18 = t;
  t = term_l_10;
  w_18 = t;
  t = term_n_10;
  t = s_4(v_18, w_18, t);
  t = term_o_10;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_p_10;
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
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
  x_18 = t;
  t = SSL_string_to_int(x_18);
  y_18 = t;
  t = term_k_10;
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_10, y_18);
  t = s_4(z_18, y_18, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_18);
  return(t);
}
static ATerm r_2 (ATerm t)
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
static ATerm u_2 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL;
  t = term_t_10;
  a_19 = t;
  t = term_r_9;
  b_19 = t;
  t = term_u_10;
  t = s_4(a_19, b_19, t);
  t = term_v_10;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_10 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_2, h_2, k_2, t);
      LocalPopChoice(c_11);
    }
  else
    {
      t = x_10;
      {
        ATerm d_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_2, n_2, r_2, t);
            LocalPopChoice(f_11);
          }
        else
          {
            t = d_11;
            t = Option_3_0(s_2, u_2, y_2, t);
          }
      }
    }
  return(t);
}
static ATerm s_4 (ATerm a_37, ATerm b_37, ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL;
  t = term_c_7;
  c_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_7, a_37, b_37);
  t = lookup_table_0_1(c_19, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_4(a_37, b_37, d_19, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_7, a_37, b_37);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
      t = term_r_9;
      t = g_0(t);
      j_19 = t;
      t = term_a_10;
      k_19 = t;
      t = term_b_10;
      l_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_10, term_b_10, j_19);
      t = q_4(k_19, l_19, j_19, t);
      _fail(t);
    }
  else
    {
      ATerm o_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_19 = ATgetFirst((ATermList) t);
          i_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_19;
      t = d_0(t);
      t = term_r_9;
      t = f_0(t);
      o_19 = t;
      t = (ATerm) ATinsert(CheckATermList(i_19), o_19);
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm q_19 = NULL;
  q_19 = t;
  if(match_string(t, "-o"))
    {
      t = q_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_19;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL;
  r_19 = t;
  t = term_e_7;
  s_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_7, r_19);
  t = s_4(s_19, r_19, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_19);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_g_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_2, f_3, g_3, t);
  return(t);
}
static ATerm q_4 (ATerm r_42, ATerm s_42, ATerm q_42, ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL;
  w_19 = t;
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
  x_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_42, s_42, (ATerm) ATinsert(CheckATermList(x_19), q_42));
  t = lookup_table_0_1(r_42, t);
  b_20 = t;
  t = (ATerm) ATinsert(CheckATermList(x_19), q_42);
  z_19 = t;
  t = b_20;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_4(s_42, z_19, a_20, t);
  t = w_19;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
      t = term_r_9;
      t = o_0(t);
      m_20 = t;
      t = term_a_10;
      n_20 = t;
      t = term_b_10;
      o_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_10, term_b_10, m_20);
      t = q_4(n_20, o_20, m_20, t);
      _fail(t);
    }
  else
    {
      ATerm s_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_20 = ATgetFirst((ATermList) t);
          j_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_20;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_20 = ATgetFirst((ATermList) t);
          l_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_20;
      t = j_0(t);
      t = k_20;
      t = l_0(t);
      s_20 = t;
      t = (ATerm) ATinsert(CheckATermList(l_20), s_20);
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm u_20 = NULL;
  u_20 = t;
  if(match_string(t, "-i"))
    {
      t = u_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_20;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL;
  v_20 = t;
  t = term_o_8;
  w_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_8, v_20);
  t = s_4(w_20, v_20, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_20);
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
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_9;
  t = whoami_0_0(t);
  x_20 = t;
  t = term_s_0;
  z_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_11), x_20);
  a_21 = t;
  t = SSL_printnl(z_20, a_21);
  t = term_p_11;
  y_20 = t;
  t = SSL_exit(y_20);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL;
  t = term_c_7;
  b_21 = t;
  t = term_v_8;
  c_21 = t;
  t = term_z_8;
  t = p_4(b_21, c_21, t);
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
ATerm foldr_2_0 (ATerm a_136 (ATerm), ATerm b_136 (ATerm), ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
  e_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_21;
      t = a_136(t);
    }
  else
    {
      ATerm j_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_21 = ATgetFirst((ATermList) t);
          g_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_21;
      t = foldr_2_0(a_136, b_136, t);
      j_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_21, j_21);
      t = b_136(t);
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
  t = term_l_10;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm v_5 = NULL,y_5 = NULL;
  if(match_cons(t, sym__2))
    {
      v_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_4(v_5, y_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_21 = NULL,l_5 = NULL,n_5 = NULL;
  t = times_0_0(t);
  n_5 = t;
  t = SSL_explode_term(n_5);
  if(match_cons(t, sym__2))
    {
      ATerm s_11 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5;
  t = foldr_2_0(l_3, m_3, t);
  m_21 = t;
  t = SSL_TicksToSeconds(m_21);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  x_21 = t;
  if(match_cons(t, sym__2))
    {
      y_21 = ATgetArgument(t, 0);
      z_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_21;
        if((y_21 != t))
          {
            _fail(t);
          }
        t = x_21;
        LocalPopChoice(u_11);
      }
    else
      {
        t = t_11;
        t = (ATerm) ATmakeAppl(sym__2, y_21, z_21);
        {
          ATerm y_11 = t;
          int z_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_21, z_21);
              LocalPopChoice(z_11);
            }
          else
            {
              t = y_11;
              t = SSL_gtr(y_21, z_21);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, y_21, z_21);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_122 (ATerm), ATerm t)
{
  ATerm d_22 = NULL;
  d_22 = t;
  {
    ATerm b_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
        t = term_c_7;
        h_22 = t;
        t = term_k_10;
        i_22 = t;
        t = term_f_12;
        t = p_4(h_22, i_22, t);
        g_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_22, term_p_11);
        t = geq_0_0(t);
        t = d_22;
        t = b_122(t);
        LocalPopChoice(e_12);
      }
    else
      {
        t = b_12;
        t = d_22;
      }
  }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,o_22 = NULL,p_22 = NULL;
  t = run_time_0_0(t);
  k_22 = t;
  t = term_r_9;
  t = whoami_0_0(t);
  l_22 = t;
  t = term_s_0;
  o_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_12), k_22), term_g_12), l_22);
  p_22 = t;
  t = SSL_printnl(o_22, p_22);
  t = (ATerm) ATmakeAppl(sym__2, term_s_0, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_12), k_22), term_g_12), l_22));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_10;
  q_22 = t;
  t = SSL_exit(q_22);
  return(t);
}
static ATerm t_4 (ATerm c_47, ATerm d_47, ATerm e_47, ATerm t)
{
  ATerm r_22 = NULL;
  t = SSL_hashtable_put(e_47, c_47, d_47);
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_22);
  return(t);
}
ATerm lookup_table_0_1 (ATerm d_44, ATerm t)
{
  ATerm x_23 = NULL;
  t = table_hashtable_0_0(t);
  x_23 = t;
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_6 = NULL;
        t = x_23;
        if(match_cons(t, sym_Hashtable_1))
          {
            v_6 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_4(d_44, v_6, t);
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        {
          ATerm d_7 = NULL;
          t = d_44;
          t = table_create_0_0(t);
          t = x_23;
          if(match_cons(t, sym_Hashtable_1))
            {
              d_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_4(d_44, d_7, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm k_47, ATerm l_47, ATerm t)
{
  ATerm a_24 = NULL;
  t = SSL_hashtable_create(k_47, l_47);
  a_24 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_24);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL,f_24 = NULL,g_24 = NULL;
  b_24 = t;
  t = term_k_12;
  f_24 = t;
  t = term_m_12;
  g_24 = t;
  t = b_24;
  t = new_hashtable_0_2(f_24, g_24, t);
  c_24 = t;
  t = b_24;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_4(b_24, c_24, d_24, t);
  t = b_24;
  return(t);
}
static ATerm m_4 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm h_24 = NULL;
  t = SSL_hashtable_remove(i_47, h_47);
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_24);
  return(t);
}
static ATerm n_4 (ATerm m_47, ATerm t)
{
  ATerm i_24 = NULL;
  t = SSL_hashtable_destroy(m_47);
  i_24 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_24);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm j_24 = NULL;
  t = SSL_table_hashtable();
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_24);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
  k_24 = t;
  t = table_hashtable_0_0(t);
  l_24 = t;
  t = lookup_table_0_1(k_24, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_4(n_24, t);
  t = l_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_4(k_24, m_24, t);
  t = k_24;
  return(t);
}
ATerm fetch_1_0 (ATerm n_130 (ATerm), ATerm t)
{
  static ATerm k_25 (ATerm t);
  static ATerm k_25 (ATerm t)
  {
    ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
    h_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_25 = ATgetFirst((ATermList) t);
        j_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_12 = t;
      int o_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_7 = NULL,x_7 = NULL,f_5 = NULL;
          t = SSLgetAnnotations(h_25);
          q_7 = t;
          t = i_25;
          t = n_130(t);
          x_7 = t;
          t = (ATerm) ATinsert(CheckATermList(j_25), x_7);
          f_5 = t;
          t = SSLsetAnnotations(f_5, q_7);
          LocalPopChoice(o_12);
        }
      else
        {
          t = n_12;
          {
            ATerm i_8 = NULL,n_8 = NULL,i_5 = NULL;
            t = SSLgetAnnotations(h_25);
            i_8 = t;
            t = j_25;
            t = k_25(t);
            n_8 = t;
            t = (ATerm) ATinsert(CheckATermList(n_8), i_25);
            i_5 = t;
            t = SSLsetAnnotations(i_5, i_8);
          }
        }
    }
    return(t);
  }
  t = k_25(t);
  return(t);
}
static ATerm u_4 (ATerm f_47, ATerm g_47, ATerm t)
{
  t = SSL_hashtable_get(g_47, f_47);
  return(t);
}
static ATerm p_4 (ATerm k_44, ATerm l_44, ATerm t)
{
  ATerm n_25 = NULL;
  t = lookup_table_0_1(k_44, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_4(l_44, n_25, t);
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
  ATerm p_25 = NULL,q_25 = NULL;
  t = term_q_12;
  p_25 = t;
  t = term_r_9;
  q_25 = t;
  t = term_r_12;
  t = s_4(p_25, q_25, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_s_12;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
  t = term_q_12;
  t_25 = t;
  t = term_r_9;
  u_25 = t;
  t = term_r_12;
  t = s_4(t_25, u_25, t);
  t = term_u_12;
  r_25 = t;
  t = term_r_9;
  s_25 = t;
  t = term_v_12;
  t = s_4(r_25, s_25, t);
  t = term_x_12;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_y_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_3, p_3, q_3, t);
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      t = Option_3_0(r_3, u_3, v_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,m_5 = NULL;
  a_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_25 = ATgetFirst((ATermList) t);
      x_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_26);
  v_25 = t;
  t = w_25;
  t = b_98(t);
  y_25 = t;
  t = x_25;
  t = c_98(t);
  z_25 = t;
  t = (ATerm) ATinsert(CheckATermList(z_25), y_25);
  m_5 = t;
  t = SSLsetAnnotations(m_5, v_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_147 (ATerm), ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,k_26 = NULL,l_26 = NULL,p_5 = NULL;
  f_26 = t;
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_13;
        t = n_147(t);
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
      }
  }
  t = f_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_26 = ATgetFirst((ATermList) t);
      i_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_26);
  g_26 = t;
  t = term_v_8;
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_8, h_26);
  t = s_4(l_26, h_26, t);
  t = i_26;
  {
    static ATerm v_26 (ATerm t);
    static ATerm v_26 (ATerm t)
    {
      ATerm f_13 = t;
      int i_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_13 = t;
          int l_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_26 = NULL;
              o_26 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_26;
              LocalPopChoice(l_13);
            }
          else
            {
              t = j_13;
              t = n_147(t);
              t = Cons_2_0(_id, v_26, t);
            }
          LocalPopChoice(i_13);
        }
      else
        {
          t = f_13;
          {
            ATerm r_26 = NULL,s_26 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_26 = ATgetFirst((ATermList) t);
                s_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_26), (ATerm) ATmakeAppl(sym_Undefined_1, r_26));
          }
        }
      return(t);
    }
    t = v_26(t);
  }
  k_26 = t;
  t = (ATerm) ATinsert(CheckATermList(k_26), (ATerm) ATmakeAppl(sym_Program_1, h_26));
  p_5 = t;
  t = SSLsetAnnotations(p_5, g_26);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm i_27 = NULL;
  i_27 = t;
  if(match_string(t, "--help"))
    {
      t = i_27;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_27;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_27;
        }
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  t = term_n_13;
  j_27 = t;
  t = term_r_9;
  k_27 = t;
  t = term_o_13;
  t = s_4(j_27, k_27, t);
  t = term_p_13;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_u_13;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm k_147 (ATerm), ATerm l_147 (ATerm), ATerm m_147 (ATerm), ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL;
  c_27 = t;
  t = term_a_10;
  d_27 = t;
  t = term_w_13;
  t = lookup_table_0_1(d_27, t);
  h_27 = t;
  t = term_b_10;
  e_27 = t;
  t = (ATerm) ATempty;
  f_27 = t;
  t = h_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_4(e_27, f_27, g_27, t);
  t = c_27;
  {
    static ATerm w_3 (ATerm t);
    static ATerm w_3 (ATerm t)
    {
      ATerm x_13 = t;
      int y_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_147(t);
          LocalPopChoice(y_13);
        }
      else
        {
          t = x_13;
          {
            ATerm a_14 = t;
            int b_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_3, z_3, l_4, t);
                LocalPopChoice(b_14);
              }
            else
              {
                t = a_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_3, t);
  }
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_27 = NULL;
        v_27 = t;
        {
          ATerm e_14 = t;
          int f_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_9 = NULL;
              t = v_27;
              {
                ATerm g_14 = t;
                int j_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_9 = NULL,e_9 = NULL;
                    t = term_c_7;
                    d_9 = t;
                    t = term_n_13;
                    e_9 = t;
                    t = term_k_14;
                    t = p_4(d_9, e_9, t);
                    LocalPopChoice(j_14);
                  }
                else
                  {
                    t = g_14;
                    t = fetch_1_0(o_4, t);
                  }
              }
              t = v_27;
              t = l_147(t);
              t = term_l_10;
              b_9 = t;
              t = SSL_exit(b_9);
              LocalPopChoice(f_14);
            }
          else
            {
              t = e_14;
              {
                ATerm m_9 = NULL,n_9 = NULL,p_9 = NULL;
                t = term_c_7;
                n_9 = t;
                t = term_q_12;
                p_9 = t;
                t = term_l_14;
                t = p_4(n_9, p_9, t);
                t = v_27;
                t = m_147(t);
                t = term_l_10;
                m_9 = t;
                t = SSL_exit(m_9);
              }
            }
        }
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
        {
          ATerm m_14 = t;
          int n_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
              static ATerm r_4 (ATerm t);
              static ATerm r_4 (ATerm t)
              {
                ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL,r_5 = NULL;
                b_28 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_28 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_28);
                z_27 = t;
                t = a_28;
                if(((a_27 != NULL) && (a_27 != t)))
                  _fail(t);
                else
                  a_27 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_28);
                r_5 = t;
                t = SSLsetAnnotations(r_5, z_27);
                return(t);
              }
              t = fetch_1_0(r_4, t);
              t = term_s_0;
              x_27 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_27)), term_o_14);
              y_27 = t;
              t = SSL_printnl(x_27, y_27);
              t = (ATerm) ATmakeAppl(sym__2, term_s_0, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_27)), term_o_14));
              t = l_147(t);
              t = term_p_11;
              w_27 = t;
              t = SSL_exit(w_27);
              LocalPopChoice(n_14);
            }
          else
            {
              t = m_14;
            }
        }
      }
  }
  b_27 = t;
  t = term_a_10;
  t = table_destroy_0_0(t);
  t = b_27;
  return(t);
}
ATerm option_wrap_5_0 (ATerm n_145 (ATerm), ATerm o_145 (ATerm), ATerm p_145 (ATerm), ATerm q_145 (ATerm), ATerm r_145 (ATerm), ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL;
  t = parse_options_3_0(n_145, o_145, p_145, t);
  g_28 = t;
  t = term_q_14;
  t = table_create_0_0(t);
  t = term_q_14;
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_14, term_r_14, g_28);
  t = lookup_table_0_1(h_28, t);
  k_28 = t;
  t = term_r_14;
  i_28 = t;
  t = k_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_4(i_28, g_28, j_28, t);
  t = g_28;
  t = q_145(t);
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_145(t);
        t = report_success_0_0(t);
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm y_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(a_15);
    }
  else
    {
      t = y_14;
      {
        ATerm b_15 = t;
        int e_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(e_15);
          }
        else
          {
            t = b_15;
            {
              ATerm f_15 = t;
              int g_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(c_5, d_5, e_5, t);
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
static ATerm a_5 (ATerm t)
{
  t = input_1_0(g_5, t);
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
  ATerm n_28 = NULL,o_28 = NULL;
  t = term_l_7;
  n_28 = t;
  t = term_r_9;
  o_28 = t;
  t = term_j_15;
  t = s_4(n_28, o_28, t);
  t = term_k_15;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_l_15;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = output_1_0(h_5, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_28 = NULL;
      t = sometd_1_0(RepairDefinition_0_0, t);
      q_28 = t;
      t = explanation_0_0(t);
      t = q_28;
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
  t = option_wrap_5_0(w_4, default_system_usage_0_0, default_system_about_0_0, _id, a_5, t);
  return(t);
}

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
ATerm term_s_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_g_14;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_j_13;
ATerm term_e_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_u_12;
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
ATerm term_l_11;
ATerm term_h_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_m_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_g_8;
ATerm term_d_8;
ATerm term_z_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_w_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_r_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_r_1));
  term_r_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\n** Warning: Starting with Stratego 0.9.3 the calling convention of\n   strategies has been changed such that the current term is the *last*\n   argument. For most strategy definitions this is not a problem. Only\n   strategies which explicitly declare the type of a higher-order\n   strategy argument are affected. The argument declarations should be\n   changed such that the current term is the last argument. This change\n   is currently done automatically by the compiler. In the future source\n   programs are expected to incorporate this change.\n", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** Warning: argument '", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("' of ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" '", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("' starts with constant type", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_l_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_v_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym__2, term_g_10, term_r_1);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
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
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_n_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_c_12);
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
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_t_12, term_r_1);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_r_1);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_c_12, term_r_1);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym__3, term_w_10, term_x_10, (ATerm) ATempty);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_t_12);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_u_14, term_r_1);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm explanation_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm f_108 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm d_3 (ATerm o_2, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm j_4 (ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm c_22, ATerm a_22, ATerm z_21, ATerm b_22, ATerm t);
ATerm RepairVarDec_2_0 (ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm t);
ATerm map1_1_0 (ATerm q_107 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm RepairDefinition_0_0 (ATerm t);
ATerm sometd_1_0 (ATerm y_94 (ATerm), ATerm t);
static ATerm l_4 (ATerm z_30, ATerm a_31, ATerm t);
static ATerm m_4 (ATerm r_29, ATerm s_29, ATerm t);
static ATerm o_4 (ATerm u_100 (ATerm), ATerm n_214, ATerm x_29, ATerm t);
static ATerm n_4 (ATerm n_29, ATerm o_29, ATerm t);
static ATerm o_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm b_121 (ATerm), ATerm t);
static ATerm d_14 (ATerm w_13, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm p_4 (ATerm t_29, ATerm t);
static ATerm q_4 (ATerm v_62, ATerm w_62, ATerm t);
static ATerm r_4 (ATerm b_31, ATerm c_31, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_16 (ATerm a_15, ATerm t);
static ATerm r_16 (ATerm f_15, ATerm i_15, ATerm j_15, ATerm t);
static ATerm s_16 (ATerm x_15, ATerm y_15, ATerm z_15, ATerm t);
static ATerm s_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_107 (ATerm), ATerm t);
static ATerm x_4 (ATerm x_41, ATerm y_41, ATerm t);
ATerm if_verbose2_1_0 (ATerm l_102 (ATerm), ATerm t);
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
static ATerm a_5 (ATerm u_34, ATerm v_34, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm r_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm y_4 (ATerm e_40, ATerm f_40, ATerm d_40, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm t_4 (ATerm m_37, ATerm n_37, ATerm t);
ATerm foldr_2_0 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm k_102 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm need_help_1_0 (ATerm z_121 (ATerm), ATerm t);
static ATerm b_5 (ATerm j_44, ATerm k_44, ATerm l_44, ATerm t);
static ATerm c_5 (ATerm m_44, ATerm n_44, ATerm t);
ATerm lookup_table_0_1 (ATerm q_41, ATerm t);
ATerm new_hashtable_0_2 (ATerm r_44, ATerm s_44, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm v_4 (ATerm o_44, ATerm p_44, ATerm t);
static ATerm w_4 (ATerm t_44, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm o_107 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm c_124 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm parse_options_1_0 (ATerm b_124 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm b_122 (ATerm), ATerm c_122 (ATerm), ATerm d_122 (ATerm), ATerm e_122 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm iowrap_3_0 (ATerm k_121 (ATerm), ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm t);
static ATerm f_6 (ATerm t);
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
  t = term_h_6;
  j_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_6), b_0), term_i_6);
  m_0 = t;
  t = SSL_printnl(j_0, m_0);
  t = term_l_6;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm explanation_0_0 (ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL;
  t = term_h_6;
  p_0 = t;
  t = (ATerm) ATinsert(ATempty, term_m_6);
  q_0 = t;
  t = SSL_printnl(p_0, q_0);
  t = (ATerm) ATmakeAppl(sym__2, term_h_6, (ATerm) ATinsert(ATempty, term_m_6));
  return(t);
}
ATerm at_end_1_0 (ATerm f_108 (ATerm), ATerm t)
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
        t = f_108(t);
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
static ATerm d_3 (ATerm o_2, ATerm t)
{
  ATerm t_2 = NULL;
  t = SSL_explode_term(o_2);
  if(match_cons(t, sym__2))
    {
      ATerm q_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_6) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
  a_3 = t;
  if(match_cons(t, sym__2))
    {
      y_2 = ATgetArgument(t, 0);
      z_2 = ATgetArgument(t, 1);
      {
        ATerm r_6 = t;
        int v_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_0 (ATerm t)
            {
              t = z_2;
              return(t);
            }
            t = y_2;
            t = at_end_1_0(o_0, t);
            LocalPopChoice(v_6);
          }
        else
          {
            t = r_6;
            t = d_3(a_3, t);
          }
      }
    }
  else
    {
      t = d_3(a_3, t);
    }
  return(t);
}
static ATerm j_4 (ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm c_22, ATerm a_22, ATerm z_21, ATerm b_22, ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,j_3 = NULL,k_3 = NULL,n_3 = NULL,o_3 = NULL;
  h_3 = t;
  t = f_91(t);
  j_3 = t;
  t = h_3;
  t = g_91(t);
  k_3 = t;
  t = term_h_6;
  n_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_7), k_3), term_z_6), j_3), term_y_6), c_22), term_w_6);
  o_3 = t;
  t = SSL_printnl(n_3, o_3);
  t = (ATerm) ATmakeAppl(sym__2, z_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_ConstType_1, a_22)));
  t = conc_0_0(t);
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_22, (ATerm) ATmakeAppl(sym_FunType_2, g_3, b_22));
  return(t);
}
ATerm RepairVarDec_2_0 (ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm t)
{
  ATerm v_3 = NULL,x_3 = NULL,y_3 = NULL,b_4 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      v_3 = ATgetArgument(t, 0);
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
                    x_3 = ATgetArgument(e_7, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm f_7 = (ATerm) ATgetNext((ATermList) d_7);
                  y_3 = f_7;
                  if(((ATgetType(f_7) == AT_LIST) && !(ATisEmpty(f_7))))
                    {
                      ATerm h_7 = ATgetFirst((ATermList) f_7);
                      if(match_cons(h_7, sym_FunType_2))
                        {
                          ATerm j_7 = ATgetArgument(h_7, 0);
                          ATerm k_7 = ATgetArgument(h_7, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm i_7 = (ATerm) ATgetNext((ATermList) f_7);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            b_4 = ATgetArgument(c_7, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_4(f_91, g_91, v_3, x_3, y_3, b_4, t);
  return(t);
}
ATerm map1_1_0 (ATerm q_107 (ATerm), ATerm t)
{
  ATerm p_6 = NULL,s_6 = NULL,t_6 = NULL;
  p_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_6 = ATgetFirst((ATermList) t);
      t_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm p_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,p_1 = NULL,q_1 = NULL,z_1 = NULL,x_1 = NULL;
        t = SSLgetAnnotations(p_6);
        m_1 = t;
        t = s_6;
        t = q_107(t);
        p_1 = t;
        t = (ATerm) ATinsert(CheckATermList(t_6), p_1);
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
          ATerm r_7 = t;
          int s_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(q_107, t);
              LocalPopChoice(s_7);
            }
          else
            {
              t = r_7;
            }
        }
        l_1 = t;
        t = (ATerm) ATinsert(CheckATermList(l_1), j_1);
        z_1 = t;
        t = SSLsetAnnotations(z_1, i_1);
        LocalPopChoice(q_7);
      }
    else
      {
        t = p_7;
        {
          ATerm p_2 = NULL,s_2 = NULL,a_2 = NULL;
          t = SSLgetAnnotations(p_6);
          p_2 = t;
          t = t_6;
          t = map1_1_0(q_107, t);
          s_2 = t;
          t = (ATerm) ATinsert(CheckATermList(s_2), s_6);
          a_2 = t;
          t = SSLsetAnnotations(a_2, p_2);
        }
      }
  }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_u_7;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_u_7;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_v_7;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_v_7;
  return(t);
}
ATerm RepairDefinition_0_0 (ATerm t)
{
  ATerm g_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      m_7 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
      o_7 = ATgetArgument(t, 2);
      g_7 = ATgetArgument(t, 3);
      {
        ATerm t_7 = NULL;
        t = n_7;
        {
          static ATerm r_0 (ATerm t)
          {
            static ATerm x_0 (ATerm t)
            {
              t = m_7;
              return(t);
            }
            t = RepairVarDec_2_0(w_0, x_0, t);
            return(t);
          }
          t = map1_1_0(r_0, t);
        }
        t_7 = t;
        t = (ATerm) ATmakeAppl(sym_RDefT_4, m_7, t_7, o_7, g_7);
      }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          m_7 = ATgetArgument(t, 0);
          n_7 = ATgetArgument(t, 1);
          o_7 = ATgetArgument(t, 2);
          {
            ATerm x_7 = NULL;
            t = n_7;
            {
              static ATerm z_0 (ATerm t)
              {
                static ATerm b_1 (ATerm t)
                {
                  t = m_7;
                  return(t);
                }
                t = RepairVarDec_2_0(a_1, b_1, t);
                return(t);
              }
              t = map1_1_0(z_0, t);
            }
            x_7 = t;
            t = (ATerm) ATmakeAppl(sym_RDef_3, m_7, x_7, o_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              m_7 = ATgetArgument(t, 0);
              n_7 = ATgetArgument(t, 1);
              o_7 = ATgetArgument(t, 2);
              g_7 = ATgetArgument(t, 3);
              {
                ATerm q_8 = NULL;
                t = n_7;
                {
                  static ATerm c_1 (ATerm t)
                  {
                    static ATerm e_1 (ATerm t)
                    {
                      t = m_7;
                      return(t);
                    }
                    t = RepairVarDec_2_0(d_1, e_1, t);
                    return(t);
                  }
                  t = map1_1_0(c_1, t);
                }
                q_8 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, m_7, q_8, o_7, g_7);
              }
            }
          else
            {
              ATerm x_8 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  m_7 = ATgetArgument(t, 0);
                  n_7 = ATgetArgument(t, 1);
                  o_7 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = n_7;
              {
                static ATerm f_1 (ATerm t)
                {
                  static ATerm h_1 (ATerm t)
                  {
                    t = m_7;
                    return(t);
                  }
                  t = RepairVarDec_2_0(g_1, h_1, t);
                  return(t);
                }
                t = map1_1_0(f_1, t);
              }
              x_8 = t;
              t = (ATerm) ATmakeAppl(sym_SDef_3, m_7, x_8, o_7);
            }
        }
    }
  return(t);
}
ATerm sometd_1_0 (ATerm y_94 (ATerm), ATerm t)
{
  static ATerm e_9 (ATerm t)
  {
    ATerm w_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_94(t);
        LocalPopChoice(y_7);
      }
    else
      {
        t = w_7;
        t = SRTS_some(e_9, t);
      }
    return(t);
  }
  t = e_9(t);
  return(t);
}
static ATerm l_4 (ATerm z_30, ATerm a_31, ATerm t)
{
  ATerm i_9 = NULL;
  t = SSL_fputc(z_30, a_31);
  i_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_9);
  return(t);
}
static ATerm m_4 (ATerm r_29, ATerm s_29, ATerm t)
{
  ATerm m_9 = NULL;
  t = SSL_write_term_to_stream_text(r_29, s_29);
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_9);
  return(t);
}
static ATerm o_4 (ATerm u_100 (ATerm), ATerm n_214, ATerm x_29, ATerm t)
{
  ATerm o_9 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_214, term_z_7);
  t = s_4(t);
  o_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_9, x_29);
  t = u_100(t);
  t = fclose_0_0(t);
  t = x_29;
  return(t);
}
static ATerm n_4 (ATerm n_29, ATerm o_29, ATerm t)
{
  ATerm p_9 = NULL;
  t = SSL_write_term_to_stream_baf(n_29, o_29);
  p_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_9);
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
  ATerm u_3 = NULL,w_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_8 = ATgetArgument(t, 0);
      if(match_cons(a_8, sym_Stream_1))
        {
          u_3 = ATgetArgument(a_8, 0);
        }
      else
        _fail(t);
      w_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4(u_3, w_3, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm u_4 = NULL,z_4 = NULL,d_5 = NULL,f_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      if(match_cons(c_8, sym_Stream_1))
        {
          f_5 = ATgetArgument(c_8, 0);
        }
      else
        _fail(t);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(f_5, g_5, t);
  u_4 = t;
  t = term_d_8;
  z_4 = t;
  t = u_4;
  if(match_cons(t, sym_Stream_1))
    {
      d_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_8, u_4);
  t = l_4(z_4, d_5, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm u_9 = NULL,x_9 = NULL,z_9 = NULL,d_10 = NULL,e_10 = NULL,l_10 = NULL,n_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,r_12 = NULL,s_12 = NULL,e_5 = NULL,l_2 = NULL;
  x_9 = t;
  if(match_cons(t, sym__2))
    {
      q_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_9);
  n_10 = t;
  t = q_10;
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((u_9 != NULL) && (u_9 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(n_1, t);
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        t = term_g_8;
        u_9 = t;
      }
  }
  s_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_10, r_10);
  l_2 = t;
  t = SSLsetAnnotations(l_2, n_10);
  t = x_9;
  if(match_cons(t, sym__2))
    {
      d_10 = ATgetArgument(t, 0);
      e_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_9);
  z_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_10, (ATerm) ATmakeAppl(sym__2, not_null(u_9), e_10));
  e_5 = t;
  t = SSLsetAnnotations(e_5, z_9);
  l_10 = t;
  if(match_cons(t, sym__2))
    {
      r_12 = ATgetArgument(t, 0);
      s_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,h_5 = NULL;
        t = SSLgetAnnotations(l_10);
        l_3 = t;
        t = r_12;
        t = fetch_1_0(o_1, t);
        q_3 = t;
        t = s_12;
        if(match_cons(t, sym__2))
          {
            s_3 = ATgetArgument(t, 0);
            t_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_4(s_1, s_3, t_3, t);
        r_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_3, r_3);
        h_5 = t;
        t = SSLsetAnnotations(h_5, l_3);
        LocalPopChoice(k_8);
      }
    else
      {
        t = j_8;
        {
          ATerm e_4 = NULL,h_4 = NULL,i_4 = NULL,k_4 = NULL,i_5 = NULL;
          t = SSLgetAnnotations(l_10);
          e_4 = t;
          t = s_12;
          if(match_cons(t, sym__2))
            {
              i_4 = ATgetArgument(t, 0);
              k_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_4(t_1, i_4, k_4, t);
          h_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_12, h_4);
          i_5 = t;
          t = SSLsetAnnotations(i_5, e_4);
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
ATerm apply_strategy_1_0 (ATerm b_121 (ATerm), ATerm t)
{
  ATerm v_12 = NULL,y_12 = NULL,a_13 = NULL,c_13 = NULL,d_13 = NULL;
  d_13 = t;
  t = dtime_0_0(t);
  t = d_13;
  t = b_121(t);
  c_13 = t;
  t = dtime_0_0(t);
  v_12 = t;
  t = c_13;
  if(match_cons(t, sym__2))
    {
      y_12 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_12), (ATerm) ATmakeAppl(sym_Runtime_1, v_12)), a_13);
  return(t);
}
static ATerm d_14 (ATerm w_13, ATerm t)
{
  t = SSL_fclose(w_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL;
  b_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_14 = ATgetArgument(t, 0);
      {
        ATerm m_8 = t;
        int p_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_14);
            LocalPopChoice(p_8);
          }
        else
          {
            t = m_8;
            t = d_14(b_14, t);
          }
      }
    }
  else
    {
      t = d_14(b_14, t);
    }
  return(t);
}
static ATerm p_4 (ATerm t_29, ATerm t)
{
  t = SSL_read_term_from_stream(t_29);
  return(t);
}
static ATerm q_4 (ATerm v_62, ATerm w_62, ATerm t)
{
  t = SSL_strcat(v_62, w_62);
  return(t);
}
static ATerm r_4 (ATerm b_31, ATerm c_31, ATerm t)
{
  ATerm m_14 = NULL;
  t = SSL_fopen(b_31, c_31);
  m_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_14 = NULL;
  t = SSL_stdin_stream();
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_14 = NULL;
  t = SSL_stdout_stream();
  q_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_14 = NULL;
  t = SSL_stderr_stream();
  r_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_14);
  return(t);
}
static ATerm o_16 (ATerm a_15, ATerm t)
{
  ATerm b_15 = NULL;
  t = SSL_explode_term(a_15);
  if(match_cons(t, sym__2))
    {
      ATerm r_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_8 = ATgetArgument(t, 1);
        if(((ATgetType(s_8) == AT_LIST) && !(ATisEmpty(s_8))))
          {
            b_15 = ATgetFirst((ATermList) s_8);
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
  t = b_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm r_16 (ATerm f_15, ATerm i_15, ATerm j_15, ATerm t)
{
  ATerm k_15 = NULL,n_15 = NULL,q_15 = NULL,t_15 = NULL,n_5 = NULL;
  t = SSLgetAnnotations(j_15);
  q_15 = t;
  t = f_15;
  if(match_cons(t, sym_Path_1))
    {
      t_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_15, i_15);
  n_5 = t;
  t = SSLsetAnnotations(n_5, q_15);
  if(match_cons(t, sym__2))
    {
      k_15 = ATgetArgument(t, 0);
      n_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4(k_15, n_15, t);
  return(t);
}
static ATerm s_16 (ATerm x_15, ATerm y_15, ATerm z_15, ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,f_16 = NULL,q_5 = NULL;
  t = SSLgetAnnotations(z_15);
  c_16 = t;
  t = SSL_is_string(x_15);
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_16, y_15);
  q_5 = t;
  t = SSLsetAnnotations(q_5, c_16);
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4(a_16, b_16, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL;
  l_16 = t;
  if(match_cons(t, sym__2))
    {
      m_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
      {
        ATerm u_8 = t;
        int v_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_16(l_16, t);
            LocalPopChoice(v_8);
          }
        else
          {
            t = u_8;
            {
              ATerm w_8 = t;
              int y_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_16(m_16, n_16, l_16, t);
                  LocalPopChoice(y_8);
                }
              else
                {
                  t = w_8;
                  t = s_16(m_16, n_16, l_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_16(l_16, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_16 = NULL,x_16 = NULL,y_16 = NULL,m_17 = NULL;
  m_17 = t;
  {
    ATerm z_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_17, term_b_9);
        t = s_4(t);
        LocalPopChoice(a_9);
      }
    else
      {
        t = z_8;
        {
          ATerm n_6 = NULL,o_6 = NULL;
          t = term_c_9;
          o_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_9, m_17);
          t = q_4(o_6, m_17, t);
          n_6 = t;
          t = SSL_perror(n_6);
          _fail(t);
        }
      }
  }
  x_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_4(y_16, t);
  u_16 = t;
  t = x_16;
  t = fclose_0_0(t);
  t = u_16;
  return(t);
}
ATerm fetch_1_0 (ATerm y_107 (ATerm), ATerm t)
{
  static ATerm n_19 (ATerm t)
  {
    ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
    k_19 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_19 = ATgetFirst((ATermList) t);
        m_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_9 = t;
      int f_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_6 = NULL,b_7 = NULL,t_5 = NULL;
          t = SSLgetAnnotations(k_19);
          x_6 = t;
          t = l_19;
          t = y_107(t);
          b_7 = t;
          t = (ATerm) ATinsert(CheckATermList(m_19), b_7);
          t_5 = t;
          t = SSLsetAnnotations(t_5, x_6);
          LocalPopChoice(f_9);
        }
      else
        {
          t = d_9;
          {
            ATerm l_7 = NULL,b_8 = NULL,u_5 = NULL;
            t = SSLgetAnnotations(k_19);
            l_7 = t;
            t = m_19;
            t = n_19(t);
            b_8 = t;
            t = (ATerm) ATinsert(CheckATermList(b_8), l_19);
            u_5 = t;
            t = SSLsetAnnotations(u_5, l_7);
          }
        }
    }
    return(t);
  }
  t = n_19(t);
  return(t);
}
static ATerm x_4 (ATerm x_41, ATerm y_41, ATerm t)
{
  ATerm v_19 = NULL;
  t = lookup_table_0_1(x_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_5(y_41, v_19, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  ATerm a_20 = NULL;
  a_20 = t;
  {
    ATerm h_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_20 = NULL,h_20 = NULL,i_20 = NULL;
        t = term_k_9;
        h_20 = t;
        t = term_l_9;
        i_20 = t;
        t = term_n_9;
        t = x_4(h_20, i_20, t);
        e_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_20, term_r_9);
        t = geq_0_0(t);
        t = a_20;
        t = l_102(t);
        LocalPopChoice(j_9);
      }
    else
      {
        t = h_9;
        t = a_20;
      }
  }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm n_20 = NULL;
  n_20 = t;
  if(match_string(t, "-k"))
    {
      t = n_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_20;
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
  p_20 = t;
  t = SSL_string_to_int(p_20);
  q_20 = t;
  t = term_s_9;
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_9, q_20);
  t = a_5(r_20, q_20, t);
  t = p_20;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_1, w_1, y_1, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm w_20 = NULL;
  w_20 = t;
  if(match_string(t, "-S"))
    {
      t = w_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_20;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  t = term_l_9;
  z_20 = t;
  t = term_v_9;
  a_21 = t;
  t = term_y_9;
  t = a_5(z_20, a_21, t);
  t = term_a_10;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_b_10;
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
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
  c_21 = t;
  t = SSL_string_to_int(c_21);
  d_21 = t;
  t = term_l_9;
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_9, d_21);
  t = a_5(e_21, d_21, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_21);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_c_10;
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
  ATerm f_21 = NULL,g_21 = NULL;
  t = term_g_10;
  f_21 = t;
  t = term_r_1;
  g_21 = t;
  t = term_h_10;
  t = a_5(f_21, g_21, t);
  t = term_i_10;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_m_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_2, c_2, d_2, t);
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_2, f_2, i_2, t);
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            t = Option_3_0(m_2, n_2, q_2, t);
          }
      }
    }
  return(t);
}
static ATerm a_5 (ATerm u_34, ATerm v_34, ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL;
  t = term_k_9;
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, u_34, v_34);
  t = lookup_table_0_1(d_22, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_5(u_34, v_34, e_22, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, u_34, v_34);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL;
      t = term_r_1;
      t = e_0(t);
      k_22 = t;
      t = term_w_10;
      l_22 = t;
      t = term_x_10;
      m_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_10, term_x_10, k_22);
      t = y_4(l_22, m_22, k_22, t);
      _fail(t);
    }
  else
    {
      ATerm p_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_22 = ATgetFirst((ATermList) t);
          j_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_22;
      t = c_0(t);
      t = term_r_1;
      t = d_0(t);
      p_22 = t;
      t = (ATerm) ATinsert(CheckATermList(j_22), p_22);
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm r_22 = NULL;
  r_22 = t;
  if(match_string(t, "-o"))
    {
      t = r_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_22;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL;
  s_22 = t;
  t = term_y_10;
  t_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_10, s_22);
  t = a_5(t_22, s_22, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_22);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_z_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_2, u_2, v_2, t);
  return(t);
}
static ATerm y_4 (ATerm e_40, ATerm f_40, ATerm d_40, ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_40, f_40);
  {
    ATerm a_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_11 = ATgetArgument(t, 0);
            ATerm g_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_40, f_40);
        t = x_4(e_40, f_40, t);
        LocalPopChoice(e_11);
      }
    else
      {
        t = a_11;
        t = (ATerm) ATempty;
      }
  }
  w_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_40, f_40, (ATerm) ATinsert(CheckATermList(w_22), d_40));
  t = lookup_table_0_1(e_40, t);
  z_22 = t;
  t = (ATerm) ATinsert(CheckATermList(w_22), d_40);
  x_22 = t;
  t = z_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_5(f_40, x_22, y_22, t);
  t = v_22;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
      t = term_r_1;
      t = n_0(t);
      k_23 = t;
      t = term_w_10;
      l_23 = t;
      t = term_x_10;
      m_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_10, term_x_10, k_23);
      t = y_4(l_23, m_23, k_23, t);
      _fail(t);
    }
  else
    {
      ATerm q_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_23 = ATgetFirst((ATermList) t);
          h_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_23 = ATgetFirst((ATermList) t);
          j_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_23;
      t = k_0(t);
      t = i_23;
      t = l_0(t);
      q_23 = t;
      t = (ATerm) ATinsert(CheckATermList(j_23), q_23);
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm s_23 = NULL;
  s_23 = t;
  if(match_string(t, "-i"))
    {
      t = s_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_23;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL;
  t_23 = t;
  t = term_h_11;
  u_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_11, t_23);
  t = a_5(u_23, t_23, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_23);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_l_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_2, x_2, b_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_1;
  t = whoami_0_0(t);
  v_23 = t;
  t = term_h_6;
  x_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_11), v_23);
  y_23 = t;
  t = SSL_printnl(x_23, y_23);
  t = term_l_6;
  w_23 = t;
  t = SSL_exit(w_23);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL;
  t = term_k_9;
  z_23 = t;
  t = term_n_11;
  a_24 = t;
  t = term_o_11;
  t = x_4(z_23, a_24, t);
  return(t);
}
static ATerm t_4 (ATerm m_37, ATerm n_37, ATerm t)
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_37, n_37);
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      t = SSL_addr(m_37, n_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL;
  c_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_24;
      t = l_113(t);
    }
  else
    {
      ATerm h_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_24 = ATgetFirst((ATermList) t);
          e_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_24;
      t = foldr_2_0(l_113, m_113, t);
      h_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_24, h_24);
      t = m_113(t);
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
  t = term_v_9;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL;
  if(match_cons(t, sym__2))
    {
      n_8 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_4(n_8, o_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_24 = NULL,h_8 = NULL,i_8 = NULL;
  t = times_0_0(t);
  i_8 = t;
  t = SSL_explode_term(i_8);
  if(match_cons(t, sym__2))
    {
      ATerm r_11 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_8;
  t = foldr_2_0(c_3, e_3, t);
  k_24 = t;
  t = SSL_TicksToSeconds(k_24);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL;
  v_24 = t;
  if(match_cons(t, sym__2))
    {
      w_24 = ATgetArgument(t, 0);
      x_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_24;
        if((w_24 != t))
          {
            _fail(t);
          }
        t = v_24;
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        t = (ATerm) ATmakeAppl(sym__2, w_24, x_24);
        {
          ATerm u_11 = t;
          int v_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_24, x_24);
              LocalPopChoice(v_11);
            }
          else
            {
              t = u_11;
              t = SSL_gtr(w_24, x_24);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_24, x_24);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_102 (ATerm), ATerm t)
{
  ATerm b_25 = NULL;
  b_25 = t;
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
        t = term_k_9;
        e_25 = t;
        t = term_l_9;
        f_25 = t;
        t = term_n_9;
        t = x_4(e_25, f_25, t);
        d_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_25, term_l_6);
        t = geq_0_0(t);
        t = b_25;
        t = k_102(t);
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = b_25;
      }
  }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,k_25 = NULL,l_25 = NULL;
  t = run_time_0_0(t);
  h_25 = t;
  t = term_r_1;
  t = whoami_0_0(t);
  i_25 = t;
  t = term_h_6;
  k_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_11), h_25), term_y_11), i_25);
  l_25 = t;
  t = SSL_printnl(k_25, l_25);
  t = (ATerm) ATmakeAppl(sym__2, term_h_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_11), h_25), term_y_11), i_25));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_9;
  m_25 = t;
  t = SSL_exit(m_25);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL;
  x_25 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = x_25;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          w_25 = ATgetArgument(t, 0);
          {
            ATerm g_9 = NULL,a_6 = NULL;
            t = SSLgetAnnotations(x_25);
            g_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, w_25);
            a_6 = t;
            t = SSLsetAnnotations(a_6, g_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = x_25;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_121 (ATerm), ATerm t)
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_25 = NULL,q_25 = NULL;
      t = term_k_9;
      p_25 = t;
      t = term_c_12;
      q_25 = t;
      t = term_d_12;
      t = x_4(p_25, q_25, t);
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      t = fetch_1_0(i_3, t);
    }
  t = z_121(t);
  return(t);
}
static ATerm b_5 (ATerm j_44, ATerm k_44, ATerm l_44, ATerm t)
{
  ATerm z_25 = NULL;
  t = SSL_hashtable_put(l_44, j_44, k_44);
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_25);
  return(t);
}
static ATerm c_5 (ATerm m_44, ATerm n_44, ATerm t)
{
  t = SSL_hashtable_get(n_44, m_44);
  return(t);
}
ATerm lookup_table_0_1 (ATerm q_41, ATerm t)
{
  ATerm i_26 = NULL;
  t = table_hashtable_0_0(t);
  i_26 = t;
  {
    ATerm e_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_9 = NULL;
        t = i_26;
        if(match_cons(t, sym_Hashtable_1))
          {
            q_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_5(q_41, q_9, t);
        LocalPopChoice(f_12);
      }
    else
      {
        t = e_12;
        {
          ATerm w_9 = NULL;
          t = q_41;
          t = table_create_0_0(t);
          t = i_26;
          if(match_cons(t, sym_Hashtable_1))
            {
              w_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_5(q_41, w_9, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm r_44, ATerm s_44, ATerm t)
{
  ATerm l_26 = NULL;
  t = SSL_hashtable_create(r_44, s_44);
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_26);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,q_26 = NULL,r_26 = NULL;
  m_26 = t;
  t = term_g_12;
  q_26 = t;
  t = term_h_12;
  r_26 = t;
  t = m_26;
  t = new_hashtable_0_2(q_26, r_26, t);
  n_26 = t;
  t = m_26;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_5(m_26, n_26, o_26, t);
  t = m_26;
  return(t);
}
static ATerm v_4 (ATerm o_44, ATerm p_44, ATerm t)
{
  ATerm s_26 = NULL;
  t = SSL_hashtable_remove(p_44, o_44);
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_26);
  return(t);
}
static ATerm w_4 (ATerm t_44, ATerm t)
{
  ATerm t_26 = NULL;
  t = SSL_hashtable_destroy(t_44);
  t_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_26);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm u_26 = NULL;
  t = SSL_table_hashtable();
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_26);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
  v_26 = t;
  t = table_hashtable_0_0(t);
  w_26 = t;
  t = lookup_table_0_1(v_26, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_4(y_26, t);
  t = w_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_4(v_26, x_26, t);
  t = v_26;
  return(t);
}
ATerm map_1_0 (ATerm o_107 (ATerm), ATerm t)
{
  static ATerm n_27 (ATerm t)
  {
    ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
    k_27 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_27;
      }
    else
      {
        ATerm f_10 = NULL,j_10 = NULL,k_10 = NULL,e_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_27 = ATgetFirst((ATermList) t);
            m_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_27);
        f_10 = t;
        t = l_27;
        t = o_107(t);
        j_10 = t;
        t = m_27;
        t = n_27(t);
        k_10 = t;
        t = (ATerm) ATinsert(CheckATermList(k_10), j_10);
        e_6 = t;
        t = SSLsetAnnotations(e_6, f_10);
      }
    return(t);
  }
  t = n_27(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_27 = ATgetFirst((ATermList) t);
      r_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_27 = NULL,w_27 = NULL;
        static ATerm m_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_27)), not_null(w_27));
          return(t);
        }
        t = r_27;
        t = i_0(t);
        if(((v_27 != NULL) && (v_27 != t)))
          _fail(t);
        else
          v_27 = t;
        t = q_27;
        t = g_0(t);
        if(((w_27 != NULL) && (w_27 != t)))
          _fail(t);
        else
          w_27 = t;
        t = r_27;
        t = reverse_acc_2_0(g_0, m_3, t);
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
static ATerm p_3 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,g_6 = NULL;
  e_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_28);
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_28);
  g_6 = t;
  t = SSLsetAnnotations(g_6, c_28);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_28), term_i_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL;
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_28 = NULL,b_28 = NULL;
      t = term_k_9;
      a_28 = t;
      t = term_n_11;
      b_28 = t;
      t = term_o_11;
      t = x_4(a_28, b_28, t);
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      t = fetch_1_0(p_3, t);
    }
  t = term_l_12;
  t = echo_0_0(t);
  t = term_w_10;
  y_27 = t;
  t = term_x_10;
  z_27 = t;
  t = term_m_12;
  t = x_4(y_27, z_27, t);
  t = reverse_acc_2_0(_id, z_3, t);
  t = map_1_0(a_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
  i_28 = t;
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_12 = ATgetFirst((ATermList) t);
                ATerm q_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_28;
          }
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
        t = (ATerm) ATinsert(ATempty, i_28);
      }
  }
  j_28 = t;
  t = term_g_8;
  k_28 = t;
  t = SSL_printnl(k_28, j_28);
  t = i_28;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  t = term_k_9;
  o_28 = t;
  t = term_n_11;
  p_28 = t;
  t = term_o_11;
  t = x_4(o_28, p_28, t);
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
  ATerm q_28 = NULL,r_28 = NULL;
  t = term_t_12;
  q_28 = t;
  t = term_r_1;
  r_28 = t;
  t = term_u_12;
  t = a_5(q_28, r_28, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_w_12;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
  t = term_t_12;
  u_28 = t;
  t = term_r_1;
  v_28 = t;
  t = term_u_12;
  t = a_5(u_28, v_28, t);
  t = term_x_12;
  s_28 = t;
  t = term_r_1;
  t_28 = t;
  t = term_z_12;
  t = a_5(s_28, t_28, t);
  t = term_b_13;
  return(t);
}
static ATerm k_5 (ATerm t)
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
      t = Option_3_0(g_4, j_5, k_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,k_6 = NULL;
  b_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_28 = ATgetFirst((ATermList) t);
      y_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_29);
  w_28 = t;
  t = x_28;
  t = r_78(t);
  z_28 = t;
  t = y_28;
  t = s_78(t);
  a_29 = t;
  t = (ATerm) ATinsert(CheckATermList(a_29), z_28);
  k_6 = t;
  t = SSLsetAnnotations(k_6, w_28);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_124 (ATerm), ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,l_29 = NULL,m_29 = NULL,u_6 = NULL;
  g_29 = t;
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_13;
        t = c_124(t);
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
      }
  }
  t = g_29;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_29 = ATgetFirst((ATermList) t);
      j_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_29);
  h_29 = t;
  t = term_n_11;
  m_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, i_29);
  t = a_5(m_29, i_29, t);
  t = j_29;
  {
    static ATerm d_30 (ATerm t)
    {
      ATerm k_13 = t;
      int l_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_13 = t;
          int n_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_29 = NULL;
              u_29 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_29;
              LocalPopChoice(n_13);
            }
          else
            {
              t = m_13;
              t = c_124(t);
              t = Cons_2_0(_id, d_30, t);
            }
          LocalPopChoice(l_13);
        }
      else
        {
          t = k_13;
          {
            ATerm z_29 = NULL,a_30 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_29 = ATgetFirst((ATermList) t);
                a_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(a_30), (ATerm) ATmakeAppl(sym_Undefined_1, z_29));
          }
        }
      return(t);
    }
    t = d_30(t);
  }
  l_29 = t;
  t = (ATerm) ATinsert(CheckATermList(l_29), (ATerm) ATmakeAppl(sym_Program_1, i_29));
  u_6 = t;
  t = SSLsetAnnotations(u_6, h_29);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  if(match_string(t, "--help"))
    {
      t = q_30;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_30;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_30;
        }
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  t = term_c_12;
  r_30 = t;
  t = term_r_1;
  s_30 = t;
  t = term_o_13;
  t = a_5(r_30, s_30, t);
  t = term_p_13;
  return(t);
}
static ATerm p_5 (ATerm t)
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
ATerm parse_options_1_0 (ATerm b_124 (ATerm), ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
  k_30 = t;
  t = term_w_10;
  l_30 = t;
  t = term_r_13;
  t = lookup_table_0_1(l_30, t);
  p_30 = t;
  t = term_x_10;
  m_30 = t;
  t = (ATerm) ATempty;
  n_30 = t;
  t = p_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_5(m_30, n_30, o_30, t);
  t = k_30;
  {
    static ATerm l_5 (ATerm t)
    {
      ATerm s_13 = t;
      int t_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_124(t);
          LocalPopChoice(t_13);
        }
      else
        {
          t = s_13;
          {
            ATerm u_13 = t;
            int v_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_5, o_5, p_5, t);
                LocalPopChoice(v_13);
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
    t = parse_options_p__1_0(l_5, t);
  }
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_31 = NULL;
        j_31 = t;
        {
          ATerm z_13 = t;
          int c_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_11 = NULL;
              t = j_31;
              {
                ATerm e_14 = t;
                int f_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_11 = NULL,d_11 = NULL;
                    t = term_k_9;
                    c_11 = t;
                    t = term_c_12;
                    d_11 = t;
                    t = term_d_12;
                    t = x_4(c_11, d_11, t);
                    LocalPopChoice(f_14);
                  }
                else
                  {
                    t = e_14;
                    t = fetch_1_0(r_5, t);
                  }
              }
              t = j_31;
              t = default_system_usage_0_0(t);
              t = term_v_9;
              b_11 = t;
              t = SSL_exit(b_11);
              LocalPopChoice(c_14);
            }
          else
            {
              t = z_13;
              {
                ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
                t = term_k_9;
                j_11 = t;
                t = term_t_12;
                k_11 = t;
                t = term_g_14;
                t = x_4(j_11, k_11, t);
                t = j_31;
                t = default_system_about_0_0(t);
                t = term_v_9;
                i_11 = t;
                t = SSL_exit(i_11);
              }
            }
        }
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        {
          ATerm h_14 = t;
          int i_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
              static ATerm s_5 (ATerm t)
              {
                ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,l_8 = NULL;
                p_31 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    o_31 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_31);
                n_31 = t;
                t = o_31;
                if(((i_30 != NULL) && (i_30 != t)))
                  _fail(t);
                else
                  i_30 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, o_31);
                l_8 = t;
                t = SSLsetAnnotations(l_8, n_31);
                return(t);
              }
              t = fetch_1_0(s_5, t);
              t = term_h_6;
              l_31 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_30)), term_j_14);
              m_31 = t;
              t = SSL_printnl(l_31, m_31);
              t = (ATerm) ATmakeAppl(sym__2, term_h_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_30)), term_j_14));
              t = default_system_usage_0_0(t);
              t = term_l_6;
              k_31 = t;
              t = SSL_exit(k_31);
              LocalPopChoice(i_14);
            }
          else
            {
              t = h_14;
            }
        }
      }
  }
  j_30 = t;
  t = term_w_10;
  t = table_destroy_0_0(t);
  t = j_30;
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_122 (ATerm), ATerm c_122 (ATerm), ATerm d_122 (ATerm), ATerm e_122 (ATerm), ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL;
  t = parse_options_1_0(b_122, t);
  u_31 = t;
  t = term_k_14;
  t = table_create_0_0(t);
  t = term_k_14;
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_14, term_l_14, u_31);
  t = lookup_table_0_1(v_31, t);
  y_31 = t;
  t = term_l_14;
  w_31 = t;
  t = y_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_5(w_31, u_31, x_31, t);
  t = u_31;
  t = d_122(t);
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_122, t);
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        {
          ATerm s_14 = t;
          int t_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_122(t);
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
static ATerm w_5 (ATerm t)
{
  t = if_verbose2_1_0(c_6, t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL;
  t = term_u_14;
  z_31 = t;
  t = term_r_1;
  a_32 = t;
  t = term_v_14;
  t = a_5(z_31, a_32, t);
  t = term_w_14;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_x_14;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL;
  b_32 = t;
  t = term_k_9;
  f_32 = t;
  t = term_n_11;
  g_32 = t;
  t = term_o_11;
  t = x_4(f_32, g_32, t);
  c_32 = t;
  t = term_h_6;
  d_32 = t;
  t = (ATerm) ATinsert(ATempty, c_32);
  e_32 = t;
  t = SSL_printnl(d_32, e_32);
  t = b_32;
  return(t);
}
ATerm iowrap_3_0 (ATerm k_121 (ATerm), ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm t)
{
  static ATerm v_5 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_121(t);
        LocalPopChoice(z_14);
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
                ATerm e_15 = t;
                int g_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(g_15);
                  }
                else
                  {
                    t = e_15;
                    {
                      ATerm h_15 = t;
                      int l_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(y_5, z_5, b_6, t);
                          LocalPopChoice(l_15);
                        }
                      else
                        {
                          t = h_15;
                          {
                            ATerm m_15 = t;
                            int o_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(o_15);
                              }
                            else
                              {
                                t = m_15;
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
  static ATerm x_5 (ATerm t)
  {
    ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
    i_32 = t;
    {
      ATerm p_15 = t;
      int r_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm d_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((h_32 != NULL) && (h_32 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_32 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(d_6, t);
          LocalPopChoice(r_15);
        }
      else
        {
          t = p_15;
          t = term_s_15;
          h_32 = t;
        }
    }
    t = not_null(h_32);
    t = ReadFromFile_0_0(t);
    j_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_32, j_32);
    t = apply_strategy_1_0(k_121, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(v_5, m_121, w_5, x_5, t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,v_10 = NULL;
  p_32 = t;
  if(match_cons(t, sym__2))
    {
      m_32 = ATgetArgument(t, 0);
      n_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_32);
  l_32 = t;
  t = n_32;
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_32 = NULL;
        t = sometd_1_0(RepairDefinition_0_0, t);
        q_32 = t;
        t = explanation_0_0(t);
        t = q_32;
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
      }
  }
  o_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_32, o_32);
  v_10 = t;
  t = SSLsetAnnotations(v_10, l_32);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(f_6, _fail, default_usage_0_0, t);
  return(t);
}

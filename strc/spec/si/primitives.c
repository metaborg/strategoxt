#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_Undefined_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_Rules_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_Rule_3;
Symbol sym_RDef_3;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Prim_2;
Symbol sym_Path_2;
static void init_module_constructors (void)
{
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
}
ATerm term_p_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_k_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_u_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_z_9;
ATerm term_o_9;
ATerm term_g_9;
ATerm term_a_9;
ATerm term_k_8;
ATerm term_d_8;
ATerm term_z_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_Op_2, term_r_6, (ATerm) ATempty);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalTerm", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_7);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_Call_2, term_k_7, (ATerm) ATempty);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalPrim", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("App", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Prim", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_Var_1, term_t_7);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_m_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym__2, term_v_10, term_j_6);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_h_11);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_j_6);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__2, term_c_13, term_j_6);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_j_6);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_u_14, term_j_6);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm h_4 (ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm u_27, ATerm t_27, ATerm t);
static ATerm i_4 (ATerm m_87 (ATerm), ATerm q_27, ATerm p_27, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm g_4 (ATerm e_20, ATerm f_20, ATerm t);
ATerm foldr_3_0 (ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
ATerm collect_om_2_0 (ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t);
static ATerm l_4 (ATerm o_36, ATerm p_36, ATerm t);
static ATerm m_4 (ATerm x_21, ATerm y_21, ATerm t);
static ATerm o_4 (ATerm z_82 (ATerm), ATerm e_139, ATerm b_22, ATerm t);
static ATerm n_4 (ATerm t_21, ATerm u_21, ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm p_99 (ATerm), ATerm t);
static ATerm h_8 (ATerm b_8, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm p_4 (ATerm z_21, ATerm t);
static ATerm q_4 (ATerm q_36, ATerm r_36, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm q_11 (ATerm h_9, ATerm t);
static ATerm r_11 (ATerm n_9, ATerm r_9, ATerm t_9, ATerm t);
static ATerm s_11 (ATerm q_10, ATerm r_10, ATerm t_10, ATerm t);
static ATerm r_4 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_83 (ATerm), ATerm t);
static ATerm k_4 (ATerm i_35, ATerm j_35, ATerm t);
ATerm debug_1_0 (ATerm x_82 (ATerm), ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm y_97 (ATerm), ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm x_4 (ATerm k_45, ATerm l_45, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm v_4 (ATerm i_50, ATerm j_50, ATerm h_50, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm s_4 (ATerm j_39, ATerm k_39, ATerm t);
ATerm foldr_2_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_97 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm need_help_1_0 (ATerm n_100 (ATerm), ATerm t);
ATerm map_1_0 (ATerm i_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm u_4 (ATerm z_51, ATerm a_52, ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm d_55 (ATerm), ATerm e_55 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm q_102 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm parse_options_1_0 (ATerm p_102 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm iowrap_3_0 (ATerm y_99 (ATerm), ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,m_0 = NULL,o_0 = NULL,p_0 = NULL;
  a_0 = t;
  t = term_j_6;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_k_6;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_6), b_0), term_l_6);
  p_0 = t;
  t = SSL_printnl(o_0, p_0);
  t = term_o_6;
  m_0 = t;
  t = SSL_exit(m_0);
  t = a_0;
  return(t);
}
static ATerm h_4 (ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm u_27, ATerm t_27, ATerm t)
{
  t = q_87(t);
  {
    static ATerm f_0 (ATerm t)
    {
      ATerm q_0 = NULL;
      q_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_27, q_0);
      t = p_87(t);
      return(t);
    }
    t = fetch_1_0(f_0, t);
  }
  t = t_27;
  return(t);
}
static ATerm i_4 (ATerm m_87 (ATerm), ATerm q_27, ATerm p_27, ATerm t)
{
  static ATerm y_1 (ATerm t)
  {
    ATerm d_1 = NULL,g_1 = NULL,m_1 = NULL;
    d_1 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_27;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_1 = ATgetFirst((ATermList) t);
            m_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_6 = t;
          int q_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_1;
              {
                static ATerm h_0 (ATerm t)
                {
                  t = p_27;
                  return(t);
                }
                t = h_4(m_87, h_0, g_1, m_1, t);
              }
              t = y_1(t);
              LocalPopChoice(q_6);
            }
          else
            {
              t = p_6;
              {
                ATerm r_0 = NULL,z_0 = NULL,t_0 = NULL;
                t = SSLgetAnnotations(d_1);
                r_0 = t;
                t = m_1;
                t = y_1(t);
                z_0 = t;
                t = (ATerm) ATinsert(CheckATermList(z_0), g_1);
                t_0 = t;
                t = SSLsetAnnotations(t_0, r_0);
              }
            }
        }
      }
    return(t);
  }
  t = q_27;
  t = y_1(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm k_2 = NULL;
  t = new_0_0(t);
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_2);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_s_6;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm n_2 = NULL,p_2 = NULL,j_1 = NULL;
  n_2 = t;
  t = SSL_explode_term(n_2);
  if(match_cons(t, sym__2))
    {
      ATerm t_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_6 = ATgetArgument(t, 1);
        if(((ATgetType(u_6) == AT_LIST) && !(ATisEmpty(u_6))))
          {
            p_2 = ATgetFirst((ATermList) u_6);
            {
              ATerm v_6 = (ATerm) ATgetNext((ATermList) u_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(n_2);
  if(match_cons(t, sym__2))
    {
      ATerm w_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_6 = ATgetArgument(t, 1);
        if(((ATgetType(x_6) == AT_LIST) && !(ATisEmpty(x_6))))
          {
            ATerm z_6 = ATgetFirst((ATermList) x_6);
            ATerm b_7 = (ATerm) ATgetNext((ATermList) x_6);
            if(((ATgetType(b_7) == AT_LIST) && !(ATisEmpty(b_7))))
              {
                j_1 = ATgetFirst((ATermList) b_7);
                {
                  ATerm c_7 = (ATerm) ATgetNext((ATermList) b_7);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, j_1), p_2));
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm q_2 = NULL;
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, term_l_7, q_2);
  return(t);
}
static ATerm g_4 (ATerm e_20, ATerm f_20, ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL,j_2 = NULL;
  t = f_20;
  t = map_1_0(j_0, t);
  h_2 = t;
  t = foldr_2_0(s_0, u_0, t);
  g_2 = t;
  t = h_2;
  t = map_1_0(y_0, t);
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym_RDef_3, term_m_7, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_7, (ATerm) ATinsert(ATinsert(ATempty, term_u_7), (ATerm) ATmakeAppl(sym_Op_2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, g_2), (ATerm) ATmakeAppl(sym_Str_1, e_20))))), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Prim_2, e_20, j_2), term_u_7), term_v_7));
  return(t);
}
ATerm foldr_3_0 (ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL;
  t_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_2;
      t = n_89(t);
    }
  else
    {
      ATerm y_2 = NULL,b_3 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_2 = ATgetFirst((ATermList) t);
          v_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_2;
      t = p_89(t);
      y_2 = t;
      t = v_2;
      t = foldr_3_0(n_89, o_89, p_89, t);
      b_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_2, b_3);
      t = o_89(t);
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t)
{
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_3 = NULL;
      t = r_88(t);
      f_3 = t;
      t = (ATerm) ATinsert(ATempty, f_3);
      LocalPopChoice(x_7);
    }
  else
    {
      t = w_7;
      {
        ATerm l_1 = NULL,n_1 = NULL;
        static ATerm c_1 (ATerm t)
        {
          t = collect_om_2_0(r_88, s_88, t);
          return(t);
        }
        n_1 = t;
        t = SSL_explode_term(n_1);
        if(match_cons(t, sym__2))
          {
            ATerm y_7 = ATgetArgument(t, 0);
            l_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_1;
        t = foldr_3_0(b_1, s_88, c_1, t);
      }
    }
  return(t);
}
static ATerm l_4 (ATerm o_36, ATerm p_36, ATerm t)
{
  ATerm g_3 = NULL;
  t = SSL_fputc(o_36, p_36);
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_3);
  return(t);
}
static ATerm m_4 (ATerm x_21, ATerm y_21, ATerm t)
{
  ATerm h_3 = NULL;
  t = SSL_write_term_to_stream_text(x_21, y_21);
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_3);
  return(t);
}
static ATerm o_4 (ATerm z_82 (ATerm), ATerm e_139, ATerm b_22, ATerm t)
{
  ATerm i_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_139, term_z_7);
  t = r_4(t);
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_3, b_22);
  t = z_82(t);
  t = fclose_0_0(t);
  t = b_22;
  return(t);
}
static ATerm n_4 (ATerm t_21, ATerm u_21, ATerm t)
{
  ATerm j_3 = NULL;
  t = SSL_write_term_to_stream_baf(t_21, u_21);
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_3);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm i_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_8 = ATgetArgument(t, 0);
      if(match_cons(a_8, sym_Stream_1))
        {
          i_2 = ATgetArgument(a_8, 0);
        }
      else
        _fail(t);
      m_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4(i_2, m_2, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm o_3 = NULL,r_3 = NULL,s_3 = NULL,v_3 = NULL,w_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      if(match_cons(c_8, sym_Stream_1))
        {
          v_3 = ATgetArgument(c_8, 0);
        }
      else
        _fail(t);
      w_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(v_3, w_3, t);
  o_3 = t;
  t = term_d_8;
  r_3 = t;
  t = o_3;
  if(match_cons(t, sym_Stream_1))
    {
      s_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_8, o_3);
  t = l_4(r_3, s_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL,t_3 = NULL,u_3 = NULL,y_3 = NULL,y_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,f_5 = NULL,y_6 = NULL,a_7 = NULL,w_0 = NULL,v_0 = NULL;
  q_3 = t;
  if(match_cons(t, sym__2))
    {
      b_5 = ATgetArgument(t, 0);
      c_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_3);
  a_5 = t;
  t = b_5;
  {
    ATerm g_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm e_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((p_3 != NULL) && (p_3 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(e_1, t);
        LocalPopChoice(j_8);
      }
    else
      {
        t = g_8;
        t = term_k_8;
        p_3 = t;
      }
  }
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_5, c_5);
  v_0 = t;
  t = SSLsetAnnotations(v_0, a_5);
  t = q_3;
  if(match_cons(t, sym__2))
    {
      u_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_3);
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_3, (ATerm) ATmakeAppl(sym__2, not_null(p_3), y_3));
  w_0 = t;
  t = SSLsetAnnotations(w_0, t_3);
  y_4 = t;
  if(match_cons(t, sym__2))
    {
      y_6 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 = NULL,z_1 = NULL,a_2 = NULL,d_2 = NULL,f_2 = NULL,x_0 = NULL;
        t = SSLgetAnnotations(y_4);
        v_1 = t;
        t = y_6;
        t = fetch_1_0(f_1, t);
        z_1 = t;
        t = a_7;
        if(match_cons(t, sym__2))
          {
            d_2 = ATgetArgument(t, 0);
            f_2 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_4(h_1, d_2, f_2, t);
        a_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_1, a_2);
        x_0 = t;
        t = SSLsetAnnotations(x_0, v_1);
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        {
          ATerm a_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,a_1 = NULL;
          t = SSLgetAnnotations(y_4);
          a_3 = t;
          t = a_7;
          if(match_cons(t, sym__2))
            {
              m_3 = ATgetArgument(t, 0);
              n_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_4(i_1, m_3, n_3, t);
          l_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_6, l_3);
          a_1 = t;
          t = SSLsetAnnotations(a_1, a_3);
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
ATerm apply_strategy_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm d_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
  j_7 = t;
  t = dtime_0_0(t);
  t = j_7;
  t = p_99(t);
  i_7 = t;
  t = dtime_0_0(t);
  d_7 = t;
  t = i_7;
  if(match_cons(t, sym__2))
    {
      g_7 = ATgetArgument(t, 0);
      h_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_7), (ATerm) ATmakeAppl(sym_Runtime_1, d_7)), h_7);
  return(t);
}
static ATerm h_8 (ATerm b_8, ATerm t)
{
  t = SSL_fclose(b_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL;
  f_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_8 = ATgetArgument(t, 0);
      {
        ATerm o_8 = t;
        int p_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_8);
            LocalPopChoice(p_8);
          }
        else
          {
            t = o_8;
            t = h_8(f_8, t);
          }
      }
    }
  else
    {
      t = h_8(f_8, t);
    }
  return(t);
}
static ATerm p_4 (ATerm z_21, ATerm t)
{
  t = SSL_read_term_from_stream(z_21);
  return(t);
}
static ATerm q_4 (ATerm q_36, ATerm r_36, ATerm t)
{
  ATerm i_8 = NULL;
  t = SSL_fopen(q_36, r_36);
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_8);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_8 = NULL;
  t = SSL_stdin_stream();
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_8 = NULL;
  t = SSL_stdout_stream();
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_8 = NULL;
  t = SSL_stderr_stream();
  u_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_8);
  return(t);
}
static ATerm q_11 (ATerm h_9, ATerm t)
{
  ATerm k_9 = NULL;
  t = SSL_explode_term(h_9);
  if(match_cons(t, sym__2))
    {
      ATerm r_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_8 = ATgetArgument(t, 1);
        if(((ATgetType(t_8) == AT_LIST) && !(ATisEmpty(t_8))))
          {
            k_9 = ATgetFirst((ATermList) t_8);
            {
              ATerm v_8 = (ATerm) ATgetNext((ATermList) t_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_9;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_9;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_9;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_9;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm r_11 (ATerm n_9, ATerm r_9, ATerm t_9, ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,l_10 = NULL,q_1 = NULL;
  t = SSLgetAnnotations(t_9);
  e_10 = t;
  t = n_9;
  if(match_cons(t, sym_Path_1))
    {
      l_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_10, r_9);
  q_1 = t;
  t = SSLsetAnnotations(q_1, e_10);
  if(match_cons(t, sym__2))
    {
      c_10 = ATgetArgument(t, 0);
      d_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4(c_10, d_10, t);
  return(t);
}
static ATerm s_11 (ATerm q_10, ATerm r_10, ATerm t_10, ATerm t)
{
  ATerm u_10 = NULL,x_10 = NULL,z_10 = NULL,e_11 = NULL,b_2 = NULL;
  t = SSLgetAnnotations(t_10);
  z_10 = t;
  t = SSL_is_string(q_10);
  e_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_11, r_10);
  b_2 = t;
  t = SSLsetAnnotations(b_2, z_10);
  if(match_cons(t, sym__2))
    {
      u_10 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4(u_10, x_10, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,o_11 = NULL;
  i_11 = t;
  if(match_cons(t, sym__2))
    {
      j_11 = ATgetArgument(t, 0);
      o_11 = ATgetArgument(t, 1);
      {
        ATerm w_8 = t;
        int x_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_11(i_11, t);
            LocalPopChoice(x_8);
          }
        else
          {
            t = w_8;
            {
              ATerm y_8 = t;
              int z_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_11(j_11, o_11, i_11, t);
                  LocalPopChoice(z_8);
                }
              else
                {
                  t = y_8;
                  t = s_11(j_11, o_11, i_11, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_11(i_11, t);
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_a_9;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_11 = NULL;
      y_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_11, term_g_9);
      t = r_4(t);
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      t = debug_1_0(k_1, t);
      _fail(t);
    }
  w_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_4(x_11, t);
  v_11 = t;
  t = w_11;
  t = fclose_0_0(t);
  t = v_11;
  return(t);
}
ATerm fetch_1_0 (ATerm s_83 (ATerm), ATerm t)
{
  static ATerm p_13 (ATerm t)
  {
    ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
    m_13 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_13 = ATgetFirst((ATermList) t);
        o_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_9 = t;
      int j_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_5 = NULL,i_5 = NULL,d_3 = NULL;
          t = SSLgetAnnotations(m_13);
          d_5 = t;
          t = n_13;
          t = s_83(t);
          i_5 = t;
          t = (ATerm) ATinsert(CheckATermList(o_13), i_5);
          d_3 = t;
          t = SSLsetAnnotations(d_3, d_5);
          LocalPopChoice(j_9);
        }
      else
        {
          t = i_9;
          {
            ATerm h_6 = NULL,m_6 = NULL,e_3 = NULL;
            t = SSLgetAnnotations(m_13);
            h_6 = t;
            t = o_13;
            t = p_13(t);
            m_6 = t;
            t = (ATerm) ATinsert(CheckATermList(m_6), n_13);
            e_3 = t;
            t = SSLsetAnnotations(e_3, h_6);
          }
        }
    }
    return(t);
  }
  t = p_13(t);
  return(t);
}
static ATerm k_4 (ATerm i_35, ATerm j_35, ATerm t)
{
  t = SSL_strcat(i_35, j_35);
  return(t);
}
ATerm debug_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL,b_14 = NULL,c_14 = NULL;
  y_13 = t;
  t = x_82(t);
  z_13 = t;
  t = term_k_6;
  b_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_13), z_13);
  c_14 = t;
  t = SSL_printnl(b_14, c_14);
  t = y_13;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_o_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_14 = NULL;
      s_14 = t;
      t = SSL_is_string(s_14);
      LocalPopChoice(q_9);
    }
  else
    {
      t = p_9;
      {
        ATerm u_9 = t;
        int v_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(o_1, t);
            LocalPopChoice(v_9);
          }
        else
          {
            t = u_9;
            {
              ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
              a_15 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_15 = ATgetArgument(t, 0);
                  t = b_15;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_15 = ATgetArgument(t, 0);
                      t = b_15;
                      {
                        ATerm w_9 = t;
                        int y_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(y_9);
                          }
                        else
                          {
                            t = w_9;
                            t = debug_1_0(p_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm k_15 = NULL,l_15 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_15 = ATgetArgument(t, 0);
                          c_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_15;
                      t = eval_config_0_0(t);
                      k_15 = t;
                      t = c_15;
                      t = eval_config_0_0(t);
                      l_15 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_15, l_15);
                      t = k_4(k_15, l_15, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  z_15 = t;
  t = term_z_9;
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_9, z_15);
  t = u_4(a_16, z_15, t);
  {
    ATerm a_10 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_16 = NULL,e_16 = NULL;
        t = eval_config_0_0(t);
        b_16 = t;
        t = term_z_9;
        e_16 = t;
        t = SSL_table_put(e_16, z_15, b_16);
        t = b_16;
        LocalPopChoice(b_10);
      }
    else
      {
        t = a_10;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_97 (ATerm), ATerm t)
{
  ATerm o_16 = NULL;
  o_16 = t;
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_16 = NULL;
        t = term_h_10;
        t = get_config_0_0(t);
        q_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_16, term_i_10);
        t = geq_0_0(t);
        t = o_16;
        t = y_97(t);
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
        t = o_16;
      }
  }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm t_16 = NULL;
  t_16 = t;
  if(match_string(t, "-k"))
    {
      t = t_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_16;
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL;
  u_16 = t;
  t = SSL_string_to_int(u_16);
  v_16 = t;
  t = term_j_10;
  w_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, v_16);
  t = x_4(w_16, v_16, t);
  t = u_16;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_1, s_1, t_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm y_16 = NULL;
  y_16 = t;
  if(match_string(t, "-S"))
    {
      t = y_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_16;
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL;
  t = term_h_10;
  z_16 = t;
  t = term_m_10;
  a_17 = t;
  t = term_n_10;
  t = x_4(z_16, a_17, t);
  t = term_o_10;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_p_10;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
  b_17 = t;
  t = SSL_string_to_int(b_17);
  c_17 = t;
  t = term_h_10;
  d_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_10, c_17);
  t = x_4(d_17, c_17, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_17);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_s_10;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL;
  t = term_v_10;
  e_17 = t;
  t = term_j_6;
  f_17 = t;
  t = term_w_10;
  t = x_4(e_17, f_17, t);
  t = term_y_10;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_a_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_1, w_1, x_1, t);
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
      {
        ATerm d_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_2, e_2, l_2, t);
            LocalPopChoice(f_11);
          }
        else
          {
            t = d_11;
            t = Option_3_0(o_2, r_2, s_2, t);
          }
      }
    }
  return(t);
}
static ATerm x_4 (ATerm k_45, ATerm l_45, ATerm t)
{
  ATerm i_17 = NULL;
  t = term_z_9;
  i_17 = t;
  t = SSL_table_put(i_17, k_45, l_45);
  t = (ATerm) ATmakeAppl(sym__3, term_z_9, k_45, l_45);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm n_17 = NULL,q_17 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_17 = NULL,s_17 = NULL,v_17 = NULL;
      t = term_j_6;
      t = e_0(t);
      r_17 = t;
      t = term_g_11;
      s_17 = t;
      t = term_h_11;
      v_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_11, term_h_11, r_17);
      t = v_4(s_17, v_17, r_17, t);
      _fail(t);
    }
  else
    {
      ATerm z_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_17 = ATgetFirst((ATermList) t);
          q_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_17;
      t = c_0(t);
      t = term_j_6;
      t = d_0(t);
      z_17 = t;
      t = (ATerm) ATinsert(CheckATermList(q_17), z_17);
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm b_18 = NULL;
  b_18 = t;
  if(match_string(t, "-o"))
    {
      t = b_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_18;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL;
  c_18 = t;
  t = term_k_11;
  d_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_11, c_18);
  t = x_4(d_18, c_18, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_18);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_l_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_2, x_2, z_2, t);
  return(t);
}
static ATerm v_4 (ATerm i_50, ATerm j_50, ATerm h_50, ATerm t)
{
  ATerm f_18 = NULL,h_18 = NULL,m_18 = NULL;
  f_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_50, j_50);
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_11 = ATgetArgument(t, 0);
            ATerm t_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_50, j_50);
        t = u_4(i_50, j_50, t);
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        t = (ATerm) ATempty;
      }
  }
  h_18 = t;
  t = (ATerm) ATinsert(CheckATermList(h_18), h_50);
  m_18 = t;
  t = SSL_table_put(i_50, j_50, m_18);
  t = f_18;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
      t = term_j_6;
      t = n_0(t);
      z_18 = t;
      t = term_g_11;
      a_19 = t;
      t = term_h_11;
      b_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_11, term_h_11, z_18);
      t = v_4(a_19, b_19, z_18, t);
      _fail(t);
    }
  else
    {
      ATerm f_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_18 = ATgetFirst((ATermList) t);
          w_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_18;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_18 = ATgetFirst((ATermList) t);
          y_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_18;
      t = k_0(t);
      t = x_18;
      t = l_0(t);
      f_19 = t;
      t = (ATerm) ATinsert(CheckATermList(y_18), f_19);
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm h_19 = NULL;
  h_19 = t;
  if(match_string(t, "-i"))
    {
      t = h_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_19;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL;
  i_19 = t;
  t = term_u_11;
  j_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_11, i_19);
  t = x_4(j_19, i_19, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_19);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_z_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_3, k_3, x_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_6;
  t = whoami_0_0(t);
  k_19 = t;
  t = term_k_6;
  n_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_12), k_19);
  o_19 = t;
  t = SSL_printnl(n_19, o_19);
  t = term_o_6;
  m_19 = t;
  t = SSL_exit(m_19);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_12;
  t = get_config_0_0(t);
  return(t);
}
static ATerm s_4 (ATerm j_39, ATerm k_39, ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_39, k_39);
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      t = SSL_addr(j_39, k_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
  q_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_19;
      t = l_89(t);
    }
  else
    {
      ATerm v_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_19 = ATgetFirst((ATermList) t);
          s_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_19;
      t = foldr_2_0(l_89, m_89, t);
      v_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_19, v_19);
      t = m_89(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_m_10;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL;
  if(match_cons(t, sym__2))
    {
      r_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(r_7, s_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_19 = NULL,n_7 = NULL,o_7 = NULL;
  t = times_0_0(t);
  o_7 = t;
  t = SSL_explode_term(o_7);
  if(match_cons(t, sym__2))
    {
      ATerm e_12 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7;
  t = foldr_2_0(z_3, a_4, t);
  y_19 = t;
  t = SSL_TicksToSeconds(y_19);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
  o_20 = t;
  if(match_cons(t, sym__2))
    {
      p_20 = ATgetArgument(t, 0);
      q_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_20;
        if((p_20 != t))
          {
            _fail(t);
          }
        t = o_20;
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
        t = (ATerm) ATmakeAppl(sym__2, p_20, q_20);
        {
          ATerm h_12 = t;
          int i_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_20, q_20);
              LocalPopChoice(i_12);
            }
          else
            {
              t = h_12;
              t = SSL_gtr(p_20, q_20);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_20, q_20);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_97 (ATerm), ATerm t)
{
  ATerm u_20 = NULL;
  u_20 = t;
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_20 = NULL;
        t = term_h_10;
        t = get_config_0_0(t);
        w_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_20, term_o_6);
        t = geq_0_0(t);
        t = u_20;
        t = x_97(t);
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = u_20;
      }
  }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,b_21 = NULL,c_21 = NULL;
  t = run_time_0_0(t);
  y_20 = t;
  t = term_j_6;
  t = whoami_0_0(t);
  z_20 = t;
  t = term_k_6;
  b_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_12), y_20), term_l_12), z_20);
  c_21 = t;
  t = SSL_printnl(b_21, c_21);
  t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_12), y_20), term_l_12), z_20));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_21 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_10;
  d_21 = t;
  t = SSL_exit(d_21);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL;
  m_21 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = m_21;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          l_21 = ATgetArgument(t, 0);
          {
            ATerm s_8 = NULL,m_5 = NULL;
            t = SSLgetAnnotations(m_21);
            s_8 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, l_21);
            m_5 = t;
            t = SSLsetAnnotations(m_5, s_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = m_21;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_100 (ATerm), ATerm t)
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_12;
      t = get_config_0_0(t);
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      t = fetch_1_0(c_4, t);
    }
  t = n_100(t);
  return(t);
}
ATerm map_1_0 (ATerm i_83 (ATerm), ATerm t)
{
  static ATerm j_22 (ATerm t)
  {
    ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
    g_22 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_22;
      }
    else
      {
        ATerm b_9 = NULL,e_9 = NULL,f_9 = NULL,o_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_22 = ATgetFirst((ATermList) t);
            i_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_22);
        b_9 = t;
        t = h_22;
        t = i_83(t);
        e_9 = t;
        t = i_22;
        t = j_22(t);
        f_9 = t;
        t = (ATerm) ATinsert(CheckATermList(f_9), e_9);
        o_5 = t;
        t = SSLsetAnnotations(o_5, b_9);
      }
    return(t);
  }
  t = j_22(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_22 = ATgetFirst((ATermList) t);
      n_22 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_22 = NULL,s_22 = NULL;
        static ATerm d_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_22)), not_null(s_22));
          return(t);
        }
        t = n_22;
        t = i_0(t);
        if(((r_22 != NULL) && (r_22 != t)))
          _fail(t);
        else
          r_22 = t;
        t = m_22;
        t = g_0(t);
        if(((s_22 != NULL) && (s_22 != t)))
          _fail(t);
        else
          s_22 = t;
        t = n_22;
        t = reverse_acc_2_0(g_0, d_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_6;
      t = i_0(t);
    }
  return(t);
}
static ATerm u_4 (ATerm z_51, ATerm a_52, ATerm t)
{
  t = SSL_table_get(z_51, a_52);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,q_5 = NULL;
  y_22 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_22);
  w_22 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_22);
  q_5 = t;
  t = SSLsetAnnotations(q_5, w_22);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm a_23 = NULL;
  a_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_23), term_q_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL;
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_12;
      t = get_config_0_0(t);
      LocalPopChoice(s_12);
    }
  else
    {
      t = r_12;
      t = fetch_1_0(e_4, t);
    }
  t = term_t_12;
  t = echo_0_0(t);
  t = term_g_11;
  u_22 = t;
  t = term_h_11;
  v_22 = t;
  t = term_u_12;
  t = u_4(u_22, v_22, t);
  t = reverse_acc_2_0(_id, f_4, t);
  t = map_1_0(j_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
  e_23 = t;
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
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
                ATerm x_12 = ATgetFirst((ATermList) t);
                ATerm y_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_23;
          }
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        t = (ATerm) ATinsert(ATempty, e_23);
      }
  }
  f_23 = t;
  t = term_k_8;
  g_23 = t;
  t = SSL_printnl(g_23, f_23);
  t = e_23;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_12;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL;
  t = term_z_12;
  k_23 = t;
  t = term_j_6;
  l_23 = t;
  t = term_a_13;
  t = x_4(k_23, l_23, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_b_13;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL;
  t = term_z_12;
  o_23 = t;
  t = term_j_6;
  p_23 = t;
  t = term_a_13;
  t = x_4(o_23, p_23, t);
  t = term_c_13;
  m_23 = t;
  t = term_j_6;
  n_23 = t;
  t = term_d_13;
  t = x_4(m_23, n_23, t);
  t = term_e_13;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_f_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_4, w_4, z_4, t);
      LocalPopChoice(h_13);
    }
  else
    {
      t = g_13;
      t = Option_3_0(e_5, g_5, h_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_55 (ATerm), ATerm e_55 (ATerm), ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,s_5 = NULL;
  v_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_23 = ATgetFirst((ATermList) t);
      s_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_23);
  q_23 = t;
  t = r_23;
  t = d_55(t);
  t_23 = t;
  t = s_23;
  t = e_55(t);
  u_23 = t;
  t = (ATerm) ATinsert(CheckATermList(u_23), t_23);
  s_5 = t;
  t = SSLsetAnnotations(s_5, q_23);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_102 (ATerm), ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,f_24 = NULL,g_24 = NULL,u_5 = NULL;
  a_24 = t;
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_13;
        t = q_102(t);
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
      }
  }
  t = a_24;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_24 = ATgetFirst((ATermList) t);
      d_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_24);
  b_24 = t;
  t = term_b_12;
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_12, c_24);
  t = x_4(g_24, c_24, t);
  t = d_24;
  {
    static ATerm q_24 (ATerm t)
    {
      ATerm l_13 = t;
      int q_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_13 = t;
          int s_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_24 = NULL;
              j_24 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_24;
              LocalPopChoice(s_13);
            }
          else
            {
              t = r_13;
              t = q_102(t);
              t = Cons_2_0(_id, q_24, t);
            }
          LocalPopChoice(q_13);
        }
      else
        {
          t = l_13;
          {
            ATerm m_24 = NULL,n_24 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_24 = ATgetFirst((ATermList) t);
                n_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_24), (ATerm) ATmakeAppl(sym_Undefined_1, m_24));
          }
        }
      return(t);
    }
    t = q_24(t);
  }
  f_24 = t;
  t = (ATerm) ATinsert(CheckATermList(f_24), (ATerm) ATmakeAppl(sym_Program_1, c_24));
  u_5 = t;
  t = SSLsetAnnotations(u_5, b_24);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm c_25 = NULL;
  c_25 = t;
  if(match_string(t, "--help"))
    {
      t = c_25;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_25;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_25;
        }
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL;
  t = term_p_12;
  d_25 = t;
  t = term_j_6;
  e_25 = t;
  t = term_t_13;
  t = x_4(d_25, e_25, t);
  t = term_u_13;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_v_13;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
  x_24 = t;
  t = term_g_11;
  z_24 = t;
  t = term_h_11;
  a_25 = t;
  t = (ATerm) ATempty;
  b_25 = t;
  t = SSL_table_put(z_24, a_25, b_25);
  t = x_24;
  {
    static ATerm j_5 (ATerm t)
    {
      ATerm w_13 = t;
      int x_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_102(t);
          LocalPopChoice(x_13);
        }
      else
        {
          t = w_13;
          {
            ATerm a_14 = t;
            int d_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_5, l_5, n_5, t);
                LocalPopChoice(d_14);
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
    t = parse_options_p__1_0(j_5, t);
  }
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_25 = NULL;
        l_25 = t;
        {
          ATerm g_14 = t;
          int h_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_9 = NULL;
              t = l_25;
              {
                ATerm i_14 = t;
                int j_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_p_12;
                    t = get_config_0_0(t);
                    LocalPopChoice(j_14);
                  }
                else
                  {
                    t = i_14;
                    t = fetch_1_0(p_5, t);
                  }
              }
              t = l_25;
              t = default_system_usage_0_0(t);
              t = term_m_10;
              s_9 = t;
              t = SSL_exit(s_9);
              LocalPopChoice(h_14);
            }
          else
            {
              t = g_14;
              {
                ATerm x_9 = NULL;
                t = term_z_12;
                t = get_config_0_0(t);
                t = l_25;
                t = default_system_about_0_0(t);
                t = term_m_10;
                x_9 = t;
                t = SSL_exit(x_9);
              }
            }
        }
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        {
          ATerm k_14 = t;
          int l_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
              static ATerm r_5 (ATerm t)
              {
                ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,z_5 = NULL;
                r_25 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_25 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_25);
                p_25 = t;
                t = q_25;
                if(((v_24 != NULL) && (v_24 != t)))
                  _fail(t);
                else
                  v_24 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_25);
                z_5 = t;
                t = SSLsetAnnotations(z_5, p_25);
                return(t);
              }
              t = fetch_1_0(r_5, t);
              t = term_k_6;
              n_25 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_24)), term_m_14);
              o_25 = t;
              t = SSL_printnl(n_25, o_25);
              t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_24)), term_m_14));
              t = default_system_usage_0_0(t);
              t = term_o_6;
              m_25 = t;
              t = SSL_exit(m_25);
              LocalPopChoice(l_14);
            }
          else
            {
              t = k_14;
            }
        }
      }
  }
  w_24 = t;
  t = term_g_11;
  y_24 = t;
  t = SSL_table_destroy(y_24);
  t = w_24;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
  t = parse_options_1_0(p_100, t);
  w_25 = t;
  t = term_n_14;
  z_25 = t;
  t = SSL_table_create(z_25);
  t = term_n_14;
  x_25 = t;
  t = term_o_14;
  y_25 = t;
  t = SSL_table_put(x_25, y_25, w_25);
  t = w_25;
  t = r_100(t);
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_100, t);
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        {
          ATerm r_14 = t;
          int t_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_100(t);
              t = report_success_0_0(t);
              LocalPopChoice(t_14);
            }
          else
            {
              t = r_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = if_verbose2_1_0(c_6, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL;
  t = term_u_14;
  a_26 = t;
  t = term_j_6;
  b_26 = t;
  t = term_v_14;
  t = x_4(a_26, b_26, t);
  t = term_w_14;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_x_14;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL;
  c_26 = t;
  t = term_b_12;
  t = get_config_0_0(t);
  d_26 = t;
  t = term_k_6;
  e_26 = t;
  t = (ATerm) ATinsert(ATempty, d_26);
  f_26 = t;
  t = SSL_printnl(e_26, f_26);
  t = c_26;
  return(t);
}
ATerm iowrap_3_0 (ATerm y_99 (ATerm), ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm t)
{
  static ATerm t_5 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_99(t);
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
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
                          t = Option_3_0(x_5, y_5, a_6, t);
                          LocalPopChoice(i_15);
                        }
                      else
                        {
                          t = h_15;
                          {
                            ATerm j_15 = t;
                            int m_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(m_15);
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
  static ATerm w_5 (ATerm t)
  {
    ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
    h_26 = t;
    {
      ATerm n_15 = t;
      int o_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm d_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_26 != NULL) && (g_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(d_6, t);
          LocalPopChoice(o_15);
        }
      else
        {
          t = n_15;
          t = term_p_15;
          g_26 = t;
        }
    }
    t = not_null(g_26);
    t = ReadFromFile_0_0(t);
    i_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_26, i_26);
    t = apply_strategy_1_0(y_99, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(t_5, a_100, v_5, w_5, t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL,n_26 = NULL,o_26 = NULL,b_6 = NULL;
  o_26 = t;
  if(match_cons(t, sym__2))
    {
      k_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_26);
  j_26 = t;
  t = l_26;
  t = collect_om_2_0(f_6, g_6, t);
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_26, (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rules_1, n_26))));
  b_6 = t;
  t = SSLsetAnnotations(b_6, j_26);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL;
  if(match_cons(t, sym_Prim_2))
    {
      p_26 = ATgetArgument(t, 0);
      q_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(p_26, q_26, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  if(match_cons(t, sym__2))
    {
      r_26 = ATgetArgument(t, 0);
      s_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(i_6, r_26, s_26, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm t_26 = NULL;
  if(match_cons(t, sym__2))
    {
      t_26 = ATgetArgument(t, 0);
      if((t_26 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(e_6, _fail, default_usage_0_0, t);
  return(t);
}

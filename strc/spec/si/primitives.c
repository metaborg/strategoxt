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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Rules_1;
Symbol sym_Module_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_List_1;
Symbol sym_RuleNoCond_2;
Symbol sym_RDefNoArgs_2;
Symbol sym_CallNoArgs_1;
Symbol sym_SVar_1;
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
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
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
}
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_v_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_l_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_g_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_h_8;
ATerm term_c_8;
ATerm term_i_7;
ATerm term_d_7;
ATerm term_b_7;
ATerm term_s_6;
ATerm term_p_6;
ATerm term_g_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_x_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalTerm", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_5);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_y_5);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalPrim", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("App", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Prim", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym_Var_1, term_d_6);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym__2, term_f_9, term_g_9);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_q_8);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_e_10);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_q_8);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym__2, term_k_13, term_q_8);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym__2, term_s_11, term_q_8);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym__2, term_i_7, term_q_8);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("eval-lib-primitives", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm new_0_0 (ATerm t);
ATerm new_stratego_var_0_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm w_3 (ATerm m_0, ATerm f_20, ATerm t);
static ATerm x_3 (ATerm w_87 (ATerm), ATerm x_87 (ATerm), ATerm v_27, ATerm u_27, ATerm t);
static ATerm y_3 (ATerm t_87 (ATerm), ATerm r_27, ATerm q_27, ATerm t);
ATerm foldr_3_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm collect_all_1_0 (ATerm a_89 (ATerm), ATerm t);
static ATerm z_3 (ATerm s_36, ATerm t_36, ATerm t);
static ATerm a_4 (ATerm y_21, ATerm z_21, ATerm t);
static ATerm c_4 (ATerm g_83 (ATerm), ATerm c_138, ATerm c_22, ATerm t);
static ATerm b_4 (ATerm u_21, ATerm v_21, ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm output_1_0 (ATerm d_101 (ATerm), ATerm t);
static ATerm o_5 (ATerm f_5, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_4 (ATerm a_22, ATerm t);
static ATerm e_4 (ATerm u_36, ATerm v_36, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm v_8 (ATerm e_6, ATerm t);
static ATerm w_8 (ATerm v_6, ATerm w_6, ATerm a_7, ATerm t);
static ATerm z_8 (ATerm v_7, ATerm y_7, ATerm z_7, ATerm t);
static ATerm f_4 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm e_101 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm n_4 (ATerm p_45, ATerm q_45, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm l_4 (ATerm p_50, ATerm q_50, ATerm o_50, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm g_4 (ATerm o_39, ATerm p_39, ATerm t);
ATerm foldr_2_0 (ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_98 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm need_help_1_0 (ATerm u_100 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm i_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_83 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm j_4 (ATerm l_35, ATerm m_35, ATerm t);
ATerm debug_1_0 (ATerm e_83 (ATerm), ATerm t);
ATerm map_1_0 (ATerm p_83 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm k_4 (ATerm g_52, ATerm h_52, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm k_55 (ATerm), ATerm l_55 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm x_102 (ATerm), ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm parse_options_1_0 (ATerm w_102 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_stratego_var_0_0 (ATerm t)
{
  ATerm a_0 = NULL;
  t = new_0_0(t);
  a_0 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_0);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm e_0 = NULL;
  e_0 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, term_z_5, e_0);
  return(t);
}
static ATerm w_3 (ATerm m_0, ATerm f_20, ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL;
  t = f_20;
  t = map_1_0(new_stratego_var_0_0, t);
  b_0 = t;
  t = map_1_0(h_0, t);
  c_0 = t;
  t = (ATerm) ATmakeAppl(sym_RDefNoArgs_2, term_a_6, (ATerm) ATmakeAppl(sym_RuleNoCond_2, (ATerm)ATmakeAppl(sym_Op_2, term_b_6, (ATerm) ATinsert(ATinsert(ATempty, term_g_6), (ATerm) ATmakeAppl(sym_Op_2, term_c_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_List_1, b_0)), (ATerm) ATmakeAppl(sym_Str_1, m_0))))), (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Prim_2, m_0, c_0), term_g_6)));
  return(t);
}
static ATerm x_3 (ATerm w_87 (ATerm), ATerm x_87 (ATerm), ATerm v_27, ATerm u_27, ATerm t)
{
  t = x_87(t);
  {
    static ATerm j_0 (ATerm t)
    {
      ATerm f_0 = NULL;
      f_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_27, f_0);
      t = w_87(t);
      return(t);
    }
    t = fetch_1_0(j_0, t);
  }
  t = u_27;
  return(t);
}
static ATerm y_3 (ATerm t_87 (ATerm), ATerm r_27, ATerm q_27, ATerm t)
{
  static ATerm w_1 (ATerm t)
  {
    ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL;
    p_1 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_27;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_1 = ATgetFirst((ATermList) t);
            r_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_6 = t;
          int j_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_1;
              {
                static ATerm q_0 (ATerm t)
                {
                  t = q_27;
                  return(t);
                }
                t = x_3(t_87, q_0, q_1, r_1, t);
              }
              t = w_1(t);
              LocalPopChoice(j_6);
            }
          else
            {
              t = h_6;
              {
                ATerm s_0 = NULL,w_0 = NULL,r_0 = NULL;
                t = SSLgetAnnotations(p_1);
                s_0 = t;
                t = r_1;
                t = w_1(t);
                w_0 = t;
                t = (ATerm) ATinsert(CheckATermList(w_0), q_1);
                r_0 = t;
                t = SSLsetAnnotations(r_0, s_0);
              }
            }
        }
      }
    return(t);
  }
  t = r_27;
  t = w_1(t);
  return(t);
}
ATerm foldr_3_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm t)
{
  ATerm a_2 = NULL,c_2 = NULL,d_2 = NULL;
  a_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_2;
      t = u_89(t);
    }
  else
    {
      ATerm g_2 = NULL,h_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_2 = ATgetFirst((ATermList) t);
          d_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_2;
      t = w_89(t);
      g_2 = t;
      t = d_2;
      t = foldr_3_0(u_89, v_89, w_89, t);
      h_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_2, h_2);
      t = v_89(t);
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm j_1 = NULL,l_1 = NULL;
  if(match_cons(t, sym__2))
    {
      j_1 = ATgetArgument(t, 0);
      l_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(x_0, j_1, l_1, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm o_1 = NULL;
  if(match_cons(t, sym__2))
    {
      o_1 = ATgetArgument(t, 0);
      if((o_1 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL;
  if(match_cons(t, sym__2))
    {
      i_2 = ATgetArgument(t, 0);
      j_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(d_1, i_2, j_2, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm k_2 = NULL;
  if(match_cons(t, sym__2))
    {
      k_2 = ATgetArgument(t, 0);
      if((k_2 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm collect_all_1_0 (ATerm a_89 (ATerm), ATerm t)
{
  ATerm l_6 = t;
  int m_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL,e_1 = NULL;
      n_2 = t;
      t = a_89(t);
      o_2 = t;
      t = SSL_explode_term(n_2);
      if(match_cons(t, sym__2))
        {
          ATerm n_6 = ATgetArgument(t, 0);
          e_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_1;
      {
        static ATerm v_0 (ATerm t)
        {
          t = collect_all_1_0(a_89, t);
          return(t);
        }
        t = foldr_3_0(t_0, u_0, v_0, t);
      }
      p_2 = t;
      t = (ATerm) ATinsert(CheckATermList(p_2), o_2);
      LocalPopChoice(m_6);
    }
  else
    {
      t = l_6;
      {
        ATerm s_1 = NULL,u_1 = NULL;
        static ATerm c_1 (ATerm t)
        {
          t = collect_all_1_0(a_89, t);
          return(t);
        }
        u_1 = t;
        t = SSL_explode_term(u_1);
        if(match_cons(t, sym__2))
          {
            ATerm o_6 = ATgetArgument(t, 0);
            s_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_1;
        t = foldr_3_0(z_0, a_1, c_1, t);
      }
    }
  return(t);
}
static ATerm z_3 (ATerm s_36, ATerm t_36, ATerm t)
{
  ATerm z_2 = NULL;
  t = SSL_fputc(s_36, t_36);
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_2);
  return(t);
}
static ATerm a_4 (ATerm y_21, ATerm z_21, ATerm t)
{
  ATerm b_3 = NULL;
  t = SSL_write_term_to_stream_text(y_21, z_21);
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_3);
  return(t);
}
static ATerm c_4 (ATerm g_83 (ATerm), ATerm c_138, ATerm c_22, ATerm t)
{
  ATerm c_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_138, term_p_6);
  t = f_4(t);
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_3, c_22);
  t = g_83(t);
  t = fclose_0_0(t);
  t = c_22;
  return(t);
}
static ATerm b_4 (ATerm u_21, ATerm v_21, ATerm t)
{
  ATerm d_3 = NULL;
  t = SSL_write_term_to_stream_baf(u_21, v_21);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_3);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm i_3 = NULL,l_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_6 = ATgetArgument(t, 0);
      if(match_cons(q_6, sym_Stream_1))
        {
          i_3 = ATgetArgument(q_6, 0);
        }
      else
        _fail(t);
      l_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4(i_3, l_3, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm m_3 = NULL,o_3 = NULL,p_3 = NULL,r_3 = NULL,m_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_6 = ATgetArgument(t, 0);
      if(match_cons(r_6, sym_Stream_1))
        {
          r_3 = ATgetArgument(r_6, 0);
        }
      else
        _fail(t);
      m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(r_3, m_4, t);
  m_3 = t;
  t = term_s_6;
  o_3 = t;
  t = m_3;
  if(match_cons(t, sym_Stream_1))
    {
      p_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_6, m_3);
  t = z_3(o_3, p_3, t);
  return(t);
}
ATerm output_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm e_3 = NULL,h_3 = NULL;
  t = d_101(t);
  h_3 = t;
  {
    ATerm u_6 = t;
    int x_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_7;
        t = get_config_0_0(t);
        LocalPopChoice(x_6);
      }
    else
      {
        t = u_6;
        t = term_d_7;
      }
  }
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_3, h_3);
  {
    ATerm e_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_7;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, e_3, h_3);
        LocalPopChoice(g_7);
        if(match_cons(t, sym__2))
          {
            ATerm j_7 = ATgetArgument(t, 0);
            ATerm k_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_4(f_1, e_3, h_3, t);
      }
    else
      {
        t = e_7;
        if(match_cons(t, sym__2))
          {
            ATerm l_7 = ATgetArgument(t, 0);
            ATerm m_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_4(g_1, e_3, h_3, t);
      }
  }
  return(t);
}
static ATerm o_5 (ATerm f_5, ATerm t)
{
  t = SSL_fclose(f_5);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL;
  m_5 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_5 = ATgetArgument(t, 0);
      {
        ATerm n_7 = t;
        int o_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_5);
            LocalPopChoice(o_7);
          }
        else
          {
            t = n_7;
            t = o_5(m_5, t);
          }
      }
    }
  else
    {
      t = o_5(m_5, t);
    }
  return(t);
}
static ATerm d_4 (ATerm a_22, ATerm t)
{
  t = SSL_read_term_from_stream(a_22);
  return(t);
}
static ATerm e_4 (ATerm u_36, ATerm v_36, ATerm t)
{
  ATerm p_5 = NULL;
  t = SSL_fopen(u_36, v_36);
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_5);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_5 = NULL;
  t = SSL_stdin_stream();
  s_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_5);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_5 = NULL;
  t = SSL_stdout_stream();
  u_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_5);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_5 = NULL;
  t = SSL_stderr_stream();
  v_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_5);
  return(t);
}
static ATerm v_8 (ATerm e_6, ATerm t)
{
  ATerm k_6 = NULL;
  t = SSL_explode_term(e_6);
  if(match_cons(t, sym__2))
    {
      ATerm q_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_7 = ATgetArgument(t, 1);
        if(((ATgetType(r_7) == AT_LIST) && !(ATisEmpty(r_7))))
          {
            k_6 = ATgetFirst((ATermList) r_7);
            {
              ATerm s_7 = (ATerm) ATgetNext((ATermList) r_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_6;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_6;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_6;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_6;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm w_8 (ATerm v_6, ATerm w_6, ATerm a_7, ATerm t)
{
  ATerm c_7 = NULL,f_7 = NULL,h_7 = NULL,p_7 = NULL,y_0 = NULL;
  t = SSLgetAnnotations(a_7);
  h_7 = t;
  t = v_6;
  if(match_cons(t, sym_Path_1))
    {
      p_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_7, w_6);
  y_0 = t;
  t = SSLsetAnnotations(y_0, h_7);
  if(match_cons(t, sym__2))
    {
      c_7 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_4(c_7, f_7, t);
  return(t);
}
static ATerm z_8 (ATerm v_7, ATerm y_7, ATerm z_7, ATerm t)
{
  ATerm a_8 = NULL,d_8 = NULL,e_8 = NULL,i_8 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(z_7);
  e_8 = t;
  t = SSL_is_string(v_7);
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_8, y_7);
  b_1 = t;
  t = SSLsetAnnotations(b_1, e_8);
  if(match_cons(t, sym__2))
    {
      a_8 = ATgetArgument(t, 0);
      d_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_4(a_8, d_8, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,u_8 = NULL;
  m_8 = t;
  if(match_cons(t, sym__2))
    {
      n_8 = ATgetArgument(t, 0);
      u_8 = ATgetArgument(t, 1);
      {
        ATerm t_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_8(m_8, t);
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
            {
              ATerm w_7 = t;
              int b_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_8(n_8, u_8, m_8, t);
                  LocalPopChoice(b_8);
                }
              else
                {
                  t = w_7;
                  t = z_8(n_8, u_8, m_8, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_8(m_8, t);
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_c_8;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_9 = NULL;
      d_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_9, term_h_8);
      t = f_4(t);
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      t = debug_1_0(i_1, t);
      _fail(t);
    }
  b_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_4(c_9, t);
  a_9 = t;
  t = b_9;
  t = fclose_0_0(t);
  t = a_9;
  return(t);
}
ATerm input_1_0 (ATerm e_101 (ATerm), ATerm t)
{
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_8;
      t = get_config_0_0(t);
      LocalPopChoice(l_8);
    }
  else
    {
      t = k_8;
      t = term_p_8;
    }
  t = ReadFromFile_0_0(t);
  t = e_101(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL,m_9 = NULL,n_9 = NULL;
  h_9 = t;
  t = term_q_8;
  t = whoami_0_0(t);
  i_9 = t;
  t = term_r_8;
  m_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_8), i_9), term_s_8);
  n_9 = t;
  t = SSL_printnl(m_9, n_9);
  t = term_x_8;
  j_9 = t;
  t = SSL_exit(j_9);
  t = h_9;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm q_9 = NULL;
  q_9 = t;
  if(match_string(t, "-k"))
    {
      t = q_9;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_9;
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
  x_9 = t;
  t = SSL_string_to_int(x_9);
  y_9 = t;
  t = term_y_8;
  z_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_8, y_9);
  t = n_4(z_9, y_9, t);
  t = x_9;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_e_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_1, t_1, v_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm f_10 = NULL;
  f_10 = t;
  if(match_string(t, "-S"))
    {
      t = f_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_10;
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL;
  t = term_f_9;
  k_10 = t;
  t = term_g_9;
  l_10 = t;
  t = term_k_9;
  t = n_4(k_10, l_10, t);
  t = term_l_9;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_o_9;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm m_10 = NULL,q_10 = NULL,r_10 = NULL;
  m_10 = t;
  t = SSL_string_to_int(m_10);
  q_10 = t;
  t = term_f_9;
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_9, q_10);
  t = n_4(r_10, q_10, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_10);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_p_9;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL;
  t = term_r_9;
  t_10 = t;
  t = term_q_8;
  u_10 = t;
  t = term_s_9;
  t = n_4(t_10, u_10, t);
  t = term_t_9;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_u_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_1, z_1, e_2, t);
      LocalPopChoice(w_9);
    }
  else
    {
      t = v_9;
      {
        ATerm a_10 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_2, l_2, q_2, t);
            LocalPopChoice(b_10);
          }
        else
          {
            t = a_10;
            t = Option_3_0(r_2, s_2, u_2, t);
          }
      }
    }
  return(t);
}
static ATerm n_4 (ATerm p_45, ATerm q_45, ATerm t)
{
  ATerm v_10 = NULL;
  t = term_c_10;
  v_10 = t;
  t = SSL_table_put(v_10, p_45, q_45);
  t = (ATerm) ATmakeAppl(sym__3, term_c_10, p_45, q_45);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm a_11 = NULL,d_11 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL;
      t = term_q_8;
      t = i_0(t);
      e_11 = t;
      t = term_d_10;
      f_11 = t;
      t = term_e_10;
      g_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_10, term_e_10, e_11);
      t = l_4(f_11, g_11, e_11, t);
      _fail(t);
    }
  else
    {
      ATerm k_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_11 = ATgetFirst((ATermList) t);
          d_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_11;
      t = d_0(t);
      t = term_q_8;
      t = g_0(t);
      k_11 = t;
      t = (ATerm) ATinsert(CheckATermList(d_11), k_11);
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm n_11 = NULL;
  n_11 = t;
  if(match_string(t, "-o"))
    {
      t = n_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_11;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm o_11 = NULL,q_11 = NULL;
  o_11 = t;
  t = term_b_7;
  q_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_7, o_11);
  t = n_4(q_11, o_11, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_11);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_g_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_2, x_2, y_2, t);
  return(t);
}
static ATerm l_4 (ATerm p_50, ATerm q_50, ATerm o_50, ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
  t_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_50, q_50);
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_10 = ATgetArgument(t, 0);
            ATerm n_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_50, q_50);
        t = k_4(p_50, q_50, t);
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        t = (ATerm) ATempty;
      }
  }
  u_11 = t;
  t = (ATerm) ATinsert(CheckATermList(u_11), o_50);
  v_11 = t;
  t = SSL_table_put(p_50, q_50, v_11);
  t = t_11;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,m_12 = NULL,q_12 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_12 = NULL,u_12 = NULL,v_12 = NULL;
      t = term_q_8;
      t = p_0(t);
      s_12 = t;
      t = term_d_10;
      u_12 = t;
      t = term_e_10;
      v_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_10, term_e_10, s_12);
      t = l_4(u_12, v_12, s_12, t);
      _fail(t);
    }
  else
    {
      ATerm a_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_12 = ATgetFirst((ATermList) t);
          k_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_12;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_12 = ATgetFirst((ATermList) t);
          q_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_12;
      t = n_0(t);
      t = m_12;
      t = o_0(t);
      a_13 = t;
      t = (ATerm) ATinsert(CheckATermList(q_12), a_13);
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm c_13 = NULL;
  c_13 = t;
  if(match_string(t, "-i"))
    {
      t = c_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_13;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL;
  d_13 = t;
  t = term_o_8;
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_8, d_13);
  t = n_4(e_13, d_13, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_13);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_o_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, f_3, g_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_8;
  t = whoami_0_0(t);
  f_13 = t;
  t = term_r_8;
  h_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_10), f_13);
  i_13 = t;
  t = SSL_printnl(h_13, i_13);
  t = term_x_8;
  g_13 = t;
  t = SSL_exit(g_13);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_s_10;
  t = get_config_0_0(t);
  return(t);
}
static ATerm g_4 (ATerm o_39, ATerm p_39, ATerm t)
{
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(o_39, p_39);
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
      t = SSL_addr(o_39, p_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
  o_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_13;
      t = s_89(t);
    }
  else
    {
      ATerm y_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_13 = ATgetFirst((ATermList) t);
          q_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_13;
      t = foldr_2_0(s_89, t_89, t);
      y_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_13, y_13);
      t = t_89(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_g_9;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL;
  if(match_cons(t, sym__2))
    {
      t_3 = ATgetArgument(t, 0);
      u_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(t_3, u_3, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_14 = NULL,k_3 = NULL,n_3 = NULL;
  t = times_0_0(t);
  n_3 = t;
  t = SSL_explode_term(n_3);
  if(match_cons(t, sym__2))
    {
      ATerm y_10 = ATgetArgument(t, 0);
      k_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_3;
  t = foldr_2_0(j_3, q_3, t);
  f_14 = t;
  t = SSL_TicksToSeconds(f_14);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
  y_14 = t;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_10 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_15;
        if((z_14 != t))
          {
            _fail(t);
          }
        t = y_14;
        LocalPopChoice(b_11);
      }
    else
      {
        t = z_10;
        t = (ATerm) ATmakeAppl(sym__2, z_14, a_15);
        {
          ATerm c_11 = t;
          int h_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_14, a_15);
              LocalPopChoice(h_11);
            }
          else
            {
              t = c_11;
              t = SSL_gtr(z_14, a_15);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, z_14, a_15);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_98 (ATerm), ATerm t)
{
  ATerm e_15 = NULL;
  e_15 = t;
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_15 = NULL;
        t = term_f_9;
        t = get_config_0_0(t);
        g_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_15, term_x_8);
        t = geq_0_0(t);
        t = e_15;
        t = e_98(t);
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        t = e_15;
      }
  }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,l_15 = NULL,m_15 = NULL;
  t = run_time_0_0(t);
  i_15 = t;
  t = term_q_8;
  t = whoami_0_0(t);
  j_15 = t;
  t = term_r_8;
  l_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_11), i_15), term_l_11), j_15);
  m_15 = t;
  t = SSL_printnl(l_15, m_15);
  t = (ATerm) ATmakeAppl(sym__2, term_r_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_11), i_15), term_l_11), j_15));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_9;
  n_15 = t;
  t = SSL_exit(n_15);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL;
  b_16 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_16;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_16 = ATgetArgument(t, 0);
          {
            ATerm a_5 = NULL,h_1 = NULL;
            t = SSLgetAnnotations(b_16);
            a_5 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_16);
            h_1 = t;
            t = SSLsetAnnotations(h_1, a_5);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_16;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_100 (ATerm), ATerm t)
{
  ATerm p_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_11;
      t = get_config_0_0(t);
      LocalPopChoice(r_11);
    }
  else
    {
      t = p_11;
      t = fetch_1_0(v_3, t);
    }
  t = u_100(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_16 = ATgetFirst((ATermList) t);
      f_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_16 = NULL,k_16 = NULL;
        static ATerm h_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_16)), not_null(k_16));
          return(t);
        }
        t = f_16;
        t = l_0(t);
        if(((j_16 != NULL) && (j_16 != t)))
          _fail(t);
        else
          j_16 = t;
        t = e_16;
        t = k_0(t);
        if(((k_16 != NULL) && (k_16 != t)))
          _fail(t);
        else
          k_16 = t;
        t = f_16;
        t = reverse_acc_2_0(k_0, h_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_8;
      t = l_0(t);
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,k_1 = NULL;
  q_16 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_16);
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_16);
  k_1 = t;
  t = SSLsetAnnotations(k_1, o_16);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm s_16 = NULL;
  s_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_16), term_w_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL;
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_10;
      t = get_config_0_0(t);
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      t = fetch_1_0(i_4, t);
    }
  t = term_z_11;
  t = echo_0_0(t);
  t = term_d_10;
  m_16 = t;
  t = term_e_10;
  n_16 = t;
  t = term_a_12;
  t = k_4(m_16, n_16, t);
  t = reverse_acc_2_0(_id, o_4, t);
  t = map_1_0(p_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm z_83 (ATerm), ATerm t)
{
  static ATerm p_17 (ATerm t)
  {
    ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL;
    m_17 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_17 = ATgetFirst((ATermList) t);
        o_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_12 = t;
      int c_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_5 = NULL,w_5 = NULL,n_1 = NULL;
          t = SSLgetAnnotations(m_17);
          q_5 = t;
          t = n_17;
          t = z_83(t);
          w_5 = t;
          t = (ATerm) ATinsert(CheckATermList(o_17), w_5);
          n_1 = t;
          t = SSLsetAnnotations(n_1, q_5);
          LocalPopChoice(c_12);
        }
      else
        {
          t = b_12;
          {
            ATerm f_6 = NULL,i_6 = NULL,x_1 = NULL;
            t = SSLgetAnnotations(m_17);
            f_6 = t;
            t = o_17;
            t = p_17(t);
            i_6 = t;
            t = (ATerm) ATinsert(CheckATermList(i_6), n_17);
            x_1 = t;
            t = SSLsetAnnotations(x_1, f_6);
          }
        }
    }
    return(t);
  }
  t = p_17(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
  t_17 = t;
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_12 = ATgetFirst((ATermList) t);
                ATerm g_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_17;
          }
        LocalPopChoice(e_12);
      }
    else
      {
        t = d_12;
        t = (ATerm) ATinsert(ATempty, t_17);
      }
  }
  u_17 = t;
  t = term_d_7;
  v_17 = t;
  t = SSL_printnl(v_17, u_17);
  t = t_17;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_s_10;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm j_4 (ATerm l_35, ATerm m_35, ATerm t)
{
  t = SSL_strcat(l_35, m_35);
  return(t);
}
ATerm debug_1_0 (ATerm e_83 (ATerm), ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  z_17 = t;
  t = e_83(t);
  a_18 = t;
  t = term_r_8;
  b_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_17), a_18);
  c_18 = t;
  t = SSL_printnl(b_18, c_18);
  t = z_17;
  return(t);
}
ATerm map_1_0 (ATerm p_83 (ATerm), ATerm t)
{
  static ATerm r_18 (ATerm t)
  {
    ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL;
    o_18 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_18;
      }
    else
      {
        ATerm t_6 = NULL,y_6 = NULL,z_6 = NULL,b_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_18 = ATgetFirst((ATermList) t);
            q_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_18);
        t_6 = t;
        t = p_18;
        t = p_83(t);
        y_6 = t;
        t = q_18;
        t = r_18(t);
        z_6 = t;
        t = (ATerm) ATinsert(CheckATermList(z_6), y_6);
        b_2 = t;
        t = SSLsetAnnotations(b_2, t_6);
      }
    return(t);
  }
  t = r_18(t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_l_12;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_18 = NULL;
      z_18 = t;
      t = SSL_is_string(z_18);
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      {
        ATerm p_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(q_4, t);
            LocalPopChoice(r_12);
          }
        else
          {
            t = p_12;
            {
              ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
              f_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_19 = ATgetArgument(t, 0);
                  t = g_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_19 = ATgetArgument(t, 0);
                      t = g_19;
                      {
                        ATerm t_12 = t;
                        int w_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(w_12);
                          }
                        else
                          {
                            t = t_12;
                            t = debug_1_0(r_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm l_19 = NULL,m_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          g_19 = ATgetArgument(t, 0);
                          h_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_19;
                      t = eval_config_0_0(t);
                      l_19 = t;
                      t = h_19;
                      t = eval_config_0_0(t);
                      m_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_19, m_19);
                      t = j_4(l_19, m_19, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_4 (ATerm g_52, ATerm h_52, ATerm t)
{
  t = SSL_table_get(g_52, h_52);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL;
  q_19 = t;
  t = term_c_10;
  r_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_10, q_19);
  t = k_4(r_19, q_19, t);
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_19 = NULL,t_19 = NULL;
        t = eval_config_0_0(t);
        s_19 = t;
        t = term_c_10;
        t_19 = t;
        t = SSL_table_put(t_19, q_19, s_19);
        t = s_19;
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
      }
  }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL;
  t = term_z_12;
  w_19 = t;
  t = term_q_8;
  x_19 = t;
  t = term_b_13;
  t = n_4(w_19, x_19, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_j_13;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL;
  t = term_z_12;
  a_20 = t;
  t = term_q_8;
  b_20 = t;
  t = term_b_13;
  t = n_4(a_20, b_20, t);
  t = term_k_13;
  y_19 = t;
  t = term_q_8;
  z_19 = t;
  t = term_l_13;
  t = n_4(y_19, z_19, t);
  t = term_m_13;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_n_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_4, t_4, u_4, t);
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      t = Option_3_0(v_4, w_4, x_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_55 (ATerm), ATerm l_55 (ATerm), ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_2 = NULL;
  l_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_20 = ATgetFirst((ATermList) t);
      e_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_20);
  c_20 = t;
  t = d_20;
  t = k_55(t);
  j_20 = t;
  t = e_20;
  t = l_55(t);
  k_20 = t;
  t = (ATerm) ATinsert(CheckATermList(k_20), j_20);
  m_2 = t;
  t = SSLsetAnnotations(m_2, c_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_102 (ATerm), ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,v_20 = NULL,w_20 = NULL,t_2 = NULL;
  q_20 = t;
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_13;
        t = x_102(t);
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
      }
  }
  t = q_20;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_20 = ATgetFirst((ATermList) t);
      t_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_20);
  r_20 = t;
  t = term_s_10;
  w_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_10, s_20);
  t = n_4(w_20, s_20, t);
  t = t_20;
  {
    static ATerm g_21 (ATerm t)
    {
      ATerm w_13 = t;
      int x_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_13 = t;
          int a_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_20 = NULL;
              z_20 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_20;
              LocalPopChoice(a_14);
            }
          else
            {
              t = z_13;
              t = x_102(t);
              t = Cons_2_0(_id, g_21, t);
            }
          LocalPopChoice(x_13);
        }
      else
        {
          t = w_13;
          {
            ATerm c_21 = NULL,d_21 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_21 = ATgetFirst((ATermList) t);
                d_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_21), (ATerm) ATmakeAppl(sym_Undefined_1, c_21));
          }
        }
      return(t);
    }
    t = g_21(t);
  }
  v_20 = t;
  t = (ATerm) ATinsert(CheckATermList(v_20), (ATerm) ATmakeAppl(sym_Program_1, s_20));
  t_2 = t;
  t = SSLsetAnnotations(t_2, r_20);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm s_21 = NULL;
  s_21 = t;
  if(match_string(t, "--help"))
    {
      t = s_21;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_21;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_21;
        }
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm t_21 = NULL,w_21 = NULL;
  t = term_s_11;
  t_21 = t;
  t = term_q_8;
  w_21 = t;
  t = term_b_14;
  t = n_4(t_21, w_21, t);
  t = term_c_14;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_d_14;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_102 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  n_21 = t;
  t = term_d_10;
  p_21 = t;
  t = term_e_10;
  q_21 = t;
  t = (ATerm) ATempty;
  r_21 = t;
  t = SSL_table_put(p_21, q_21, r_21);
  t = n_21;
  {
    static ATerm y_4 (ATerm t)
    {
      ATerm e_14 = t;
      int g_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_102(t);
          LocalPopChoice(g_14);
        }
      else
        {
          t = e_14;
          {
            ATerm h_14 = t;
            int i_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_4, b_5, c_5, t);
                LocalPopChoice(i_14);
              }
            else
              {
                t = h_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_4, t);
  }
  {
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_22 = NULL;
        i_22 = t;
        {
          ATerm l_14 = t;
          int m_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_7 = NULL;
              t = i_22;
              {
                ATerm n_14 = t;
                int o_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_s_11;
                    t = get_config_0_0(t);
                    LocalPopChoice(o_14);
                  }
                else
                  {
                    t = n_14;
                    t = fetch_1_0(d_5, t);
                  }
              }
              t = i_22;
              t = default_system_usage_0_0(t);
              t = term_g_9;
              x_7 = t;
              t = SSL_exit(x_7);
              LocalPopChoice(m_14);
            }
          else
            {
              t = l_14;
              {
                ATerm j_8 = NULL;
                t = term_z_12;
                t = get_config_0_0(t);
                t = i_22;
                t = default_system_about_0_0(t);
                t = term_g_9;
                j_8 = t;
                t = SSL_exit(j_8);
              }
            }
        }
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        {
          ATerm p_14 = t;
          int q_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
              static ATerm e_5 (ATerm t)
              {
                ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,v_2 = NULL;
                o_22 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_22);
                m_22 = t;
                t = n_22;
                if(((l_21 != NULL) && (l_21 != t)))
                  _fail(t);
                else
                  l_21 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_22);
                v_2 = t;
                t = SSLsetAnnotations(v_2, m_22);
                return(t);
              }
              t = fetch_1_0(e_5, t);
              t = term_r_8;
              k_22 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_21)), term_r_14);
              l_22 = t;
              t = SSL_printnl(k_22, l_22);
              t = (ATerm) ATmakeAppl(sym__2, term_r_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_21)), term_r_14));
              t = default_system_usage_0_0(t);
              t = term_x_8;
              j_22 = t;
              t = SSL_exit(j_22);
              LocalPopChoice(q_14);
            }
          else
            {
              t = p_14;
            }
        }
      }
  }
  m_21 = t;
  t = term_d_10;
  o_21 = t;
  t = SSL_table_destroy(o_21);
  t = m_21;
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL;
  t = parse_options_1_0(w_100, t);
  t_22 = t;
  t = term_s_14;
  w_22 = t;
  t = SSL_table_create(w_22);
  t = term_s_14;
  u_22 = t;
  t = term_t_14;
  v_22 = t;
  t = SSL_table_put(u_22, v_22, t_22);
  t = t_22;
  t = y_100(t);
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_100, t);
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
        {
          ATerm w_14 = t;
          int x_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_100(t);
              t = report_success_0_0(t);
              LocalPopChoice(x_14);
            }
          else
            {
              t = w_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      {
        ATerm d_15 = t;
        int f_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(f_15);
          }
        else
          {
            t = d_15;
            {
              ATerm h_15 = t;
              int k_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(i_5, j_5, k_5, t);
                  LocalPopChoice(k_15);
                }
              else
                {
                  t = h_15;
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
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = input_1_0(n_5, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL;
  t = term_i_7;
  y_22 = t;
  t = term_q_8;
  z_22 = t;
  t = term_q_15;
  t = n_4(y_22, z_22, t);
  t = term_r_15;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_s_15;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = output_1_0(r_5, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm b_23 = NULL;
  t = collect_all_1_0(t_5, t);
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym_Module_2, term_t_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rules_1, b_23)));
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm c_23 = NULL,f_23 = NULL;
  if(match_cons(t, sym_Prim_2))
    {
      c_23 = ATgetArgument(t, 0);
      f_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3(c_23, f_23, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(g_5, default_usage_0_0, _id, h_5, t);
  return(t);
}

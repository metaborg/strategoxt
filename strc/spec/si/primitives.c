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
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_u_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_k_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_r_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_r_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_g_8;
ATerm term_b_8;
ATerm term_h_7;
ATerm term_c_7;
ATerm term_a_7;
ATerm term_r_6;
ATerm term_o_6;
ATerm term_f_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalTerm", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_5);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_x_5);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalPrim", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("App", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Prim", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym_Var_1, term_c_6);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_f_9);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_9);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_p_8);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_d_10);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_p_8);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym__2, term_j_13, term_p_8);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__2, term_r_11, term_p_8);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym__2, term_h_7, term_p_8);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("eval-lib-primitives", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm new_0_0 (ATerm t);
ATerm new_stratego_var_0_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm v_3 (ATerm e_20, ATerm f_20, ATerm t);
static ATerm w_3 (ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm v_27, ATerm u_27, ATerm t);
static ATerm x_3 (ATerm r_87 (ATerm), ATerm r_27, ATerm q_27, ATerm t);
ATerm foldr_3_0 (ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm collect_all_1_0 (ATerm y_88 (ATerm), ATerm t);
static ATerm y_3 (ATerm q_36, ATerm r_36, ATerm t);
static ATerm z_3 (ATerm y_21, ATerm z_21, ATerm t);
static ATerm b_4 (ATerm e_83 (ATerm), ATerm a_138, ATerm c_22, ATerm t);
static ATerm a_4 (ATerm u_21, ATerm v_21, ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm output_1_0 (ATerm b_101 (ATerm), ATerm t);
static ATerm n_5 (ATerm e_5, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm c_4 (ATerm a_22, ATerm t);
static ATerm d_4 (ATerm s_36, ATerm t_36, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_8 (ATerm d_6, ATerm t);
static ATerm v_8 (ATerm u_6, ATerm v_6, ATerm z_6, ATerm t);
static ATerm y_8 (ATerm u_7, ATerm x_7, ATerm y_7, ATerm t);
static ATerm e_4 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm c_101 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm m_4 (ATerm n_45, ATerm o_45, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm k_4 (ATerm n_50, ATerm o_50, ATerm m_50, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm z_2 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm f_4 (ATerm m_39, ATerm n_39, ATerm t);
ATerm foldr_2_0 (ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm c_98 (ATerm), ATerm t);
static ATerm r_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm need_help_1_0 (ATerm s_100 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm x_83 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_4 (ATerm j_35, ATerm k_35, ATerm t);
ATerm debug_1_0 (ATerm c_83 (ATerm), ATerm t);
ATerm map_1_0 (ATerm n_83 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm j_4 (ATerm e_52, ATerm f_52, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_55 (ATerm), ATerm j_55 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_102 (ATerm), ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm parse_options_1_0 (ATerm u_102 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
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
  ATerm j_0 = NULL;
  j_0 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, term_y_5, j_0);
  return(t);
}
static ATerm v_3 (ATerm e_20, ATerm f_20, ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL;
  t = f_20;
  t = map_1_0(new_stratego_var_0_0, t);
  b_0 = t;
  t = map_1_0(h_0, t);
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym_RDefNoArgs_2, term_z_5, (ATerm) ATmakeAppl(sym_RuleNoCond_2, (ATerm)ATmakeAppl(sym_Op_2, term_a_6, (ATerm) ATinsert(ATinsert(ATempty, term_f_6), (ATerm) ATmakeAppl(sym_Op_2, term_b_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_List_1, b_0)), (ATerm) ATmakeAppl(sym_Str_1, e_20))))), (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Prim_2, e_20, f_0), term_f_6)));
  return(t);
}
static ATerm w_3 (ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm v_27, ATerm u_27, ATerm t)
{
  t = v_87(t);
  {
    static ATerm o_0 (ATerm t)
    {
      ATerm m_0 = NULL;
      m_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_27, m_0);
      t = u_87(t);
      return(t);
    }
    t = fetch_1_0(o_0, t);
  }
  t = u_27;
  return(t);
}
static ATerm x_3 (ATerm r_87 (ATerm), ATerm r_27, ATerm q_27, ATerm t)
{
  static ATerm v_1 (ATerm t)
  {
    ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL;
    o_1 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_27;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_1 = ATgetFirst((ATermList) t);
            q_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_6 = t;
          int i_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_1;
              {
                static ATerm p_0 (ATerm t)
                {
                  t = q_27;
                  return(t);
                }
                t = w_3(r_87, p_0, p_1, q_1, t);
              }
              t = v_1(t);
              LocalPopChoice(i_6);
            }
          else
            {
              t = g_6;
              {
                ATerm r_0 = NULL,v_0 = NULL,q_0 = NULL;
                t = SSLgetAnnotations(o_1);
                r_0 = t;
                t = q_1;
                t = v_1(t);
                v_0 = t;
                t = (ATerm) ATinsert(CheckATermList(v_0), p_1);
                q_0 = t;
                t = SSLsetAnnotations(q_0, r_0);
              }
            }
        }
      }
    return(t);
  }
  t = r_27;
  t = v_1(t);
  return(t);
}
ATerm foldr_3_0 (ATerm s_89 (ATerm), ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,b_2 = NULL,c_2 = NULL;
  z_1 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_1;
      t = s_89(t);
    }
  else
    {
      ATerm f_2 = NULL,g_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_2 = ATgetFirst((ATermList) t);
          c_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_2;
      t = u_89(t);
      f_2 = t;
      t = c_2;
      t = foldr_3_0(s_89, t_89, u_89, t);
      g_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_2, g_2);
      t = t_89(t);
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm i_1 = NULL,k_1 = NULL;
  if(match_cons(t, sym__2))
    {
      i_1 = ATgetArgument(t, 0);
      k_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3(w_0, i_1, k_1, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm n_1 = NULL;
  if(match_cons(t, sym__2))
    {
      n_1 = ATgetArgument(t, 0);
      if((n_1 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL;
  if(match_cons(t, sym__2))
    {
      h_2 = ATgetArgument(t, 0);
      i_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3(c_1, h_2, i_2, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm j_2 = NULL;
  if(match_cons(t, sym__2))
    {
      j_2 = ATgetArgument(t, 0);
      if((j_2 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm collect_all_1_0 (ATerm y_88 (ATerm), ATerm t)
{
  ATerm k_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,d_1 = NULL;
      m_2 = t;
      t = y_88(t);
      n_2 = t;
      t = SSL_explode_term(m_2);
      if(match_cons(t, sym__2))
        {
          ATerm m_6 = ATgetArgument(t, 0);
          d_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_1;
      {
        static ATerm u_0 (ATerm t)
        {
          t = collect_all_1_0(y_88, t);
          return(t);
        }
        t = foldr_3_0(s_0, t_0, u_0, t);
      }
      o_2 = t;
      t = (ATerm) ATinsert(CheckATermList(o_2), n_2);
      LocalPopChoice(l_6);
    }
  else
    {
      t = k_6;
      {
        ATerm r_1 = NULL,t_1 = NULL;
        static ATerm b_1 (ATerm t)
        {
          t = collect_all_1_0(y_88, t);
          return(t);
        }
        t_1 = t;
        t = SSL_explode_term(t_1);
        if(match_cons(t, sym__2))
          {
            ATerm n_6 = ATgetArgument(t, 0);
            r_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_1;
        t = foldr_3_0(y_0, z_0, b_1, t);
      }
    }
  return(t);
}
static ATerm y_3 (ATerm q_36, ATerm r_36, ATerm t)
{
  ATerm y_2 = NULL;
  t = SSL_fputc(q_36, r_36);
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_2);
  return(t);
}
static ATerm z_3 (ATerm y_21, ATerm z_21, ATerm t)
{
  ATerm a_3 = NULL;
  t = SSL_write_term_to_stream_text(y_21, z_21);
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_3);
  return(t);
}
static ATerm b_4 (ATerm e_83 (ATerm), ATerm a_138, ATerm c_22, ATerm t)
{
  ATerm b_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_138, term_o_6);
  t = e_4(t);
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_3, c_22);
  t = e_83(t);
  t = fclose_0_0(t);
  t = c_22;
  return(t);
}
static ATerm a_4 (ATerm u_21, ATerm v_21, ATerm t)
{
  ATerm c_3 = NULL;
  t = SSL_write_term_to_stream_baf(u_21, v_21);
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_3);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm h_3 = NULL,k_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_6 = ATgetArgument(t, 0);
      if(match_cons(p_6, sym_Stream_1))
        {
          h_3 = ATgetArgument(p_6, 0);
        }
      else
        _fail(t);
      k_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(h_3, k_3, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm l_3 = NULL,n_3 = NULL,o_3 = NULL,q_3 = NULL,l_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_6 = ATgetArgument(t, 0);
      if(match_cons(q_6, sym_Stream_1))
        {
          q_3 = ATgetArgument(q_6, 0);
        }
      else
        _fail(t);
      l_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(q_3, l_4, t);
  l_3 = t;
  t = term_r_6;
  n_3 = t;
  t = l_3;
  if(match_cons(t, sym_Stream_1))
    {
      o_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_r_6, l_3);
  t = y_3(n_3, o_3, t);
  return(t);
}
ATerm output_1_0 (ATerm b_101 (ATerm), ATerm t)
{
  ATerm d_3 = NULL,g_3 = NULL;
  t = b_101(t);
  g_3 = t;
  {
    ATerm t_6 = t;
    int w_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_7;
        t = get_config_0_0(t);
        LocalPopChoice(w_6);
      }
    else
      {
        t = t_6;
        t = term_c_7;
      }
  }
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_3, g_3);
  {
    ATerm d_7 = t;
    int f_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_7;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, d_3, g_3);
        LocalPopChoice(f_7);
        if(match_cons(t, sym__2))
          {
            ATerm i_7 = ATgetArgument(t, 0);
            ATerm j_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_4(e_1, d_3, g_3, t);
      }
    else
      {
        t = d_7;
        if(match_cons(t, sym__2))
          {
            ATerm k_7 = ATgetArgument(t, 0);
            ATerm l_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_4(f_1, d_3, g_3, t);
      }
  }
  return(t);
}
static ATerm n_5 (ATerm e_5, ATerm t)
{
  t = SSL_fclose(e_5);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL;
  l_5 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_5 = ATgetArgument(t, 0);
      {
        ATerm m_7 = t;
        int n_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_5);
            LocalPopChoice(n_7);
          }
        else
          {
            t = m_7;
            t = n_5(l_5, t);
          }
      }
    }
  else
    {
      t = n_5(l_5, t);
    }
  return(t);
}
static ATerm c_4 (ATerm a_22, ATerm t)
{
  t = SSL_read_term_from_stream(a_22);
  return(t);
}
static ATerm d_4 (ATerm s_36, ATerm t_36, ATerm t)
{
  ATerm o_5 = NULL;
  t = SSL_fopen(s_36, t_36);
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_5);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_5 = NULL;
  t = SSL_stdin_stream();
  r_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_5);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_5 = NULL;
  t = SSL_stdout_stream();
  t_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_5);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_5 = NULL;
  t = SSL_stderr_stream();
  u_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_5);
  return(t);
}
static ATerm u_8 (ATerm d_6, ATerm t)
{
  ATerm j_6 = NULL;
  t = SSL_explode_term(d_6);
  if(match_cons(t, sym__2))
    {
      ATerm p_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_7 = ATgetArgument(t, 1);
        if(((ATgetType(q_7) == AT_LIST) && !(ATisEmpty(q_7))))
          {
            j_6 = ATgetFirst((ATermList) q_7);
            {
              ATerm r_7 = (ATerm) ATgetNext((ATermList) q_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_6;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_6;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_6;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_6;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_8 (ATerm u_6, ATerm v_6, ATerm z_6, ATerm t)
{
  ATerm b_7 = NULL,e_7 = NULL,g_7 = NULL,o_7 = NULL,x_0 = NULL;
  t = SSLgetAnnotations(z_6);
  g_7 = t;
  t = u_6;
  if(match_cons(t, sym_Path_1))
    {
      o_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_7, v_6);
  x_0 = t;
  t = SSLsetAnnotations(x_0, g_7);
  if(match_cons(t, sym__2))
    {
      b_7 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_4(b_7, e_7, t);
  return(t);
}
static ATerm y_8 (ATerm u_7, ATerm x_7, ATerm y_7, ATerm t)
{
  ATerm z_7 = NULL,c_8 = NULL,d_8 = NULL,h_8 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(y_7);
  d_8 = t;
  t = SSL_is_string(u_7);
  h_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_8, x_7);
  a_1 = t;
  t = SSLsetAnnotations(a_1, d_8);
  if(match_cons(t, sym__2))
    {
      z_7 = ATgetArgument(t, 0);
      c_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_4(z_7, c_8, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL,t_8 = NULL;
  l_8 = t;
  if(match_cons(t, sym__2))
    {
      m_8 = ATgetArgument(t, 0);
      t_8 = ATgetArgument(t, 1);
      {
        ATerm s_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_8(l_8, t);
            LocalPopChoice(t_7);
          }
        else
          {
            t = s_7;
            {
              ATerm v_7 = t;
              int a_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_8(m_8, t_8, l_8, t);
                  LocalPopChoice(a_8);
                }
              else
                {
                  t = v_7;
                  t = y_8(m_8, t_8, l_8, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_8(l_8, t);
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_b_8;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_9 = NULL;
      c_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_9, term_g_8);
      t = e_4(t);
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
      t = debug_1_0(h_1, t);
      _fail(t);
    }
  a_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_4(b_9, t);
  z_8 = t;
  t = a_9;
  t = fclose_0_0(t);
  t = z_8;
  return(t);
}
ATerm input_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm j_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_8;
      t = get_config_0_0(t);
      LocalPopChoice(k_8);
    }
  else
    {
      t = j_8;
      t = term_o_8;
    }
  t = ReadFromFile_0_0(t);
  t = c_101(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,l_9 = NULL,m_9 = NULL;
  g_9 = t;
  t = term_p_8;
  t = whoami_0_0(t);
  h_9 = t;
  t = term_q_8;
  l_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_8), h_9), term_r_8);
  m_9 = t;
  t = SSL_printnl(l_9, m_9);
  t = term_w_8;
  i_9 = t;
  t = SSL_exit(i_9);
  t = g_9;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm p_9 = NULL;
  p_9 = t;
  if(match_string(t, "-k"))
    {
      t = p_9;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_9;
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL;
  w_9 = t;
  t = SSL_string_to_int(w_9);
  x_9 = t;
  t = term_x_8;
  y_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_8, x_9);
  t = m_4(y_9, x_9, t);
  t = w_9;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_d_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_1, s_1, u_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm e_10 = NULL;
  e_10 = t;
  if(match_string(t, "-S"))
    {
      t = e_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_10;
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL;
  t = term_e_9;
  j_10 = t;
  t = term_f_9;
  k_10 = t;
  t = term_j_9;
  t = m_4(j_10, k_10, t);
  t = term_k_9;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_n_9;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm l_10 = NULL,p_10 = NULL,q_10 = NULL;
  l_10 = t;
  t = SSL_string_to_int(l_10);
  p_10 = t;
  t = term_e_9;
  q_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_9, p_10);
  t = m_4(q_10, p_10, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_10);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_o_9;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL;
  t = term_q_9;
  s_10 = t;
  t = term_p_8;
  t_10 = t;
  t = term_r_9;
  t = m_4(s_10, t_10, t);
  t = term_s_9;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_1, y_1, d_2, t);
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      {
        ATerm z_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_2, k_2, p_2, t);
            LocalPopChoice(a_10);
          }
        else
          {
            t = z_9;
            t = Option_3_0(q_2, r_2, t_2, t);
          }
      }
    }
  return(t);
}
static ATerm m_4 (ATerm n_45, ATerm o_45, ATerm t)
{
  ATerm u_10 = NULL;
  t = term_b_10;
  u_10 = t;
  t = SSL_table_put(u_10, n_45, o_45);
  t = (ATerm) ATmakeAppl(sym__3, term_b_10, n_45, o_45);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm z_10 = NULL,c_11 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL;
      t = term_p_8;
      t = e_0(t);
      d_11 = t;
      t = term_c_10;
      e_11 = t;
      t = term_d_10;
      f_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_10, term_d_10, d_11);
      t = k_4(e_11, f_11, d_11, t);
      _fail(t);
    }
  else
    {
      ATerm j_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_10 = ATgetFirst((ATermList) t);
          c_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_10;
      t = c_0(t);
      t = term_p_8;
      t = d_0(t);
      j_11 = t;
      t = (ATerm) ATinsert(CheckATermList(c_11), j_11);
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm m_11 = NULL;
  m_11 = t;
  if(match_string(t, "-o"))
    {
      t = m_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_11;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm n_11 = NULL,p_11 = NULL;
  n_11 = t;
  t = term_a_7;
  p_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_7, n_11);
  t = m_4(p_11, n_11, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_11);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_f_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_2, w_2, x_2, t);
  return(t);
}
static ATerm k_4 (ATerm n_50, ATerm o_50, ATerm m_50, ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
  s_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_50, o_50);
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_10 = ATgetArgument(t, 0);
            ATerm m_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_50, o_50);
        t = j_4(n_50, o_50, t);
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
        t = (ATerm) ATempty;
      }
  }
  t_11 = t;
  t = (ATerm) ATinsert(CheckATermList(t_11), m_50);
  u_11 = t;
  t = SSL_table_put(n_50, o_50, u_11);
  t = s_11;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,l_12 = NULL,p_12 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_12 = NULL,t_12 = NULL,u_12 = NULL;
      t = term_p_8;
      t = n_0(t);
      r_12 = t;
      t = term_c_10;
      t_12 = t;
      t = term_d_10;
      u_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_10, term_d_10, r_12);
      t = k_4(t_12, u_12, r_12, t);
      _fail(t);
    }
  else
    {
      ATerm z_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_12 = ATgetFirst((ATermList) t);
          j_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_12;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_12 = ATgetFirst((ATermList) t);
          p_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_12;
      t = k_0(t);
      t = l_12;
      t = l_0(t);
      z_12 = t;
      t = (ATerm) ATinsert(CheckATermList(p_12), z_12);
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm b_13 = NULL;
  b_13 = t;
  if(match_string(t, "-i"))
    {
      t = b_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_13;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL;
  c_13 = t;
  t = term_n_8;
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_8, c_13);
  t = m_4(d_13, c_13, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_13);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_n_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_2, e_3, f_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_8;
  t = whoami_0_0(t);
  e_13 = t;
  t = term_q_8;
  g_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_10), e_13);
  h_13 = t;
  t = SSL_printnl(g_13, h_13);
  t = term_w_8;
  f_13 = t;
  t = SSL_exit(f_13);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_10;
  t = get_config_0_0(t);
  return(t);
}
static ATerm f_4 (ATerm m_39, ATerm n_39, ATerm t)
{
  ATerm v_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_39, n_39);
      LocalPopChoice(w_10);
    }
  else
    {
      t = v_10;
      t = SSL_addr(m_39, n_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
  n_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_13;
      t = q_89(t);
    }
  else
    {
      ATerm x_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_13 = ATgetFirst((ATermList) t);
          p_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_13;
      t = foldr_2_0(q_89, r_89, t);
      x_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_13, x_13);
      t = r_89(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_f_9;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL;
  if(match_cons(t, sym__2))
    {
      s_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_4(s_3, t_3, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_14 = NULL,j_3 = NULL,m_3 = NULL;
  t = times_0_0(t);
  m_3 = t;
  t = SSL_explode_term(m_3);
  if(match_cons(t, sym__2))
    {
      ATerm x_10 = ATgetArgument(t, 0);
      j_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_3;
  t = foldr_2_0(i_3, p_3, t);
  e_14 = t;
  t = SSL_TicksToSeconds(e_14);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
  x_14 = t;
  if(match_cons(t, sym__2))
    {
      y_14 = ATgetArgument(t, 0);
      z_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_14;
        if((y_14 != t))
          {
            _fail(t);
          }
        t = x_14;
        LocalPopChoice(a_11);
      }
    else
      {
        t = y_10;
        t = (ATerm) ATmakeAppl(sym__2, y_14, z_14);
        {
          ATerm b_11 = t;
          int g_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_14, z_14);
              LocalPopChoice(g_11);
            }
          else
            {
              t = b_11;
              t = SSL_gtr(y_14, z_14);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, y_14, z_14);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_98 (ATerm), ATerm t)
{
  ATerm d_15 = NULL;
  d_15 = t;
  {
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_15 = NULL;
        t = term_e_9;
        t = get_config_0_0(t);
        f_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_15, term_w_8);
        t = geq_0_0(t);
        t = d_15;
        t = c_98(t);
        LocalPopChoice(i_11);
      }
    else
      {
        t = h_11;
        t = d_15;
      }
  }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,k_15 = NULL,l_15 = NULL;
  t = run_time_0_0(t);
  h_15 = t;
  t = term_p_8;
  t = whoami_0_0(t);
  i_15 = t;
  t = term_q_8;
  k_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_11), h_15), term_k_11), i_15);
  l_15 = t;
  t = SSL_printnl(k_15, l_15);
  t = (ATerm) ATmakeAppl(sym__2, term_q_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_11), h_15), term_k_11), i_15));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_9;
  m_15 = t;
  t = SSL_exit(m_15);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  a_16 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = a_16;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          z_15 = ATgetArgument(t, 0);
          {
            ATerm z_4 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(a_16);
            z_4 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, z_15);
            g_1 = t;
            t = SSLsetAnnotations(g_1, z_4);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = a_16;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_100 (ATerm), ATerm t)
{
  ATerm o_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_11;
      t = get_config_0_0(t);
      LocalPopChoice(q_11);
    }
  else
    {
      t = o_11;
      t = fetch_1_0(u_3, t);
    }
  t = s_100(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_16 = ATgetFirst((ATermList) t);
      e_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_16 = NULL,j_16 = NULL;
        static ATerm g_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_16)), not_null(j_16));
          return(t);
        }
        t = e_16;
        t = i_0(t);
        if(((i_16 != NULL) && (i_16 != t)))
          _fail(t);
        else
          i_16 = t;
        t = d_16;
        t = g_0(t);
        if(((j_16 != NULL) && (j_16 != t)))
          _fail(t);
        else
          j_16 = t;
        t = e_16;
        t = reverse_acc_2_0(g_0, g_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_8;
      t = i_0(t);
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,j_1 = NULL;
  p_16 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_16);
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_16);
  j_1 = t;
  t = SSLsetAnnotations(j_1, n_16);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm r_16 = NULL;
  r_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_16), term_v_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL;
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_10;
      t = get_config_0_0(t);
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
      t = fetch_1_0(h_4, t);
    }
  t = term_y_11;
  t = echo_0_0(t);
  t = term_c_10;
  l_16 = t;
  t = term_d_10;
  m_16 = t;
  t = term_z_11;
  t = j_4(l_16, m_16, t);
  t = reverse_acc_2_0(_id, n_4, t);
  t = map_1_0(o_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm x_83 (ATerm), ATerm t)
{
  static ATerm o_17 (ATerm t)
  {
    ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
    l_17 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_17 = ATgetFirst((ATermList) t);
        n_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_12 = t;
      int b_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_5 = NULL,v_5 = NULL,m_1 = NULL;
          t = SSLgetAnnotations(l_17);
          p_5 = t;
          t = m_17;
          t = x_83(t);
          v_5 = t;
          t = (ATerm) ATinsert(CheckATermList(n_17), v_5);
          m_1 = t;
          t = SSLsetAnnotations(m_1, p_5);
          LocalPopChoice(b_12);
        }
      else
        {
          t = a_12;
          {
            ATerm e_6 = NULL,h_6 = NULL,w_1 = NULL;
            t = SSLgetAnnotations(l_17);
            e_6 = t;
            t = n_17;
            t = o_17(t);
            h_6 = t;
            t = (ATerm) ATinsert(CheckATermList(h_6), m_17);
            w_1 = t;
            t = SSLsetAnnotations(w_1, e_6);
          }
        }
    }
    return(t);
  }
  t = o_17(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
  s_17 = t;
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_12 = ATgetFirst((ATermList) t);
                ATerm f_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_17;
          }
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        t = (ATerm) ATinsert(ATempty, s_17);
      }
  }
  t_17 = t;
  t = term_c_7;
  u_17 = t;
  t = SSL_printnl(u_17, t_17);
  t = s_17;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_10;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm i_4 (ATerm j_35, ATerm k_35, ATerm t)
{
  t = SSL_strcat(j_35, k_35);
  return(t);
}
ATerm debug_1_0 (ATerm c_83 (ATerm), ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  y_17 = t;
  t = c_83(t);
  z_17 = t;
  t = term_q_8;
  a_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_17), z_17);
  b_18 = t;
  t = SSL_printnl(a_18, b_18);
  t = y_17;
  return(t);
}
ATerm map_1_0 (ATerm n_83 (ATerm), ATerm t)
{
  static ATerm q_18 (ATerm t)
  {
    ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
    n_18 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_18;
      }
    else
      {
        ATerm s_6 = NULL,x_6 = NULL,y_6 = NULL,a_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_18 = ATgetFirst((ATermList) t);
            p_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_18);
        s_6 = t;
        t = o_18;
        t = n_83(t);
        x_6 = t;
        t = p_18;
        t = q_18(t);
        y_6 = t;
        t = (ATerm) ATinsert(CheckATermList(y_6), x_6);
        a_2 = t;
        t = SSLsetAnnotations(a_2, s_6);
      }
    return(t);
  }
  t = q_18(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_k_12;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_18 = NULL;
      y_18 = t;
      t = SSL_is_string(y_18);
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
        ATerm o_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_4, t);
            LocalPopChoice(q_12);
          }
        else
          {
            t = o_12;
            {
              ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
              e_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_19 = ATgetArgument(t, 0);
                  t = f_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_19 = ATgetArgument(t, 0);
                      t = f_19;
                      {
                        ATerm s_12 = t;
                        int v_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(v_12);
                          }
                        else
                          {
                            t = s_12;
                            t = debug_1_0(q_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm k_19 = NULL,l_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_19 = ATgetArgument(t, 0);
                          g_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_19;
                      t = eval_config_0_0(t);
                      k_19 = t;
                      t = g_19;
                      t = eval_config_0_0(t);
                      l_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_19, l_19);
                      t = i_4(k_19, l_19, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_4 (ATerm e_52, ATerm f_52, ATerm t)
{
  t = SSL_table_get(e_52, f_52);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL;
  p_19 = t;
  t = term_b_10;
  q_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_10, p_19);
  t = j_4(q_19, p_19, t);
  {
    ATerm w_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_19 = NULL,s_19 = NULL;
        t = eval_config_0_0(t);
        r_19 = t;
        t = term_b_10;
        s_19 = t;
        t = SSL_table_put(s_19, p_19, r_19);
        t = r_19;
        LocalPopChoice(x_12);
      }
    else
      {
        t = w_12;
      }
  }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL;
  t = term_y_12;
  v_19 = t;
  t = term_p_8;
  w_19 = t;
  t = term_a_13;
  t = m_4(v_19, w_19, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_i_13;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL;
  t = term_y_12;
  z_19 = t;
  t = term_p_8;
  a_20 = t;
  t = term_a_13;
  t = m_4(z_19, a_20, t);
  t = term_j_13;
  x_19 = t;
  t = term_p_8;
  y_19 = t;
  t = term_k_13;
  t = m_4(x_19, y_19, t);
  t = term_l_13;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_m_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_4, s_4, t_4, t);
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      t = Option_3_0(u_4, v_4, w_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_55 (ATerm), ATerm j_55 (ATerm), ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,l_2 = NULL;
  l_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_20 = ATgetFirst((ATermList) t);
      d_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_20);
  b_20 = t;
  t = c_20;
  t = i_55(t);
  j_20 = t;
  t = d_20;
  t = j_55(t);
  k_20 = t;
  t = (ATerm) ATinsert(CheckATermList(k_20), j_20);
  l_2 = t;
  t = SSLsetAnnotations(l_2, b_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_102 (ATerm), ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,v_20 = NULL,w_20 = NULL,s_2 = NULL;
  q_20 = t;
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_13;
        t = v_102(t);
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
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
  t = term_r_10;
  w_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_10, s_20);
  t = m_4(w_20, s_20, t);
  t = t_20;
  {
    static ATerm g_21 (ATerm t)
    {
      ATerm v_13 = t;
      int w_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_13 = t;
          int z_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_20 = NULL;
              z_20 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_20;
              LocalPopChoice(z_13);
            }
          else
            {
              t = y_13;
              t = v_102(t);
              t = Cons_2_0(_id, g_21, t);
            }
          LocalPopChoice(w_13);
        }
      else
        {
          t = v_13;
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
  s_2 = t;
  t = SSLsetAnnotations(s_2, r_20);
  return(t);
}
static ATerm y_4 (ATerm t)
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
static ATerm a_5 (ATerm t)
{
  ATerm t_21 = NULL,w_21 = NULL;
  t = term_r_11;
  t_21 = t;
  t = term_p_8;
  w_21 = t;
  t = term_a_14;
  t = m_4(t_21, w_21, t);
  t = term_b_14;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_c_14;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_102 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  n_21 = t;
  t = term_c_10;
  p_21 = t;
  t = term_d_10;
  q_21 = t;
  t = (ATerm) ATempty;
  r_21 = t;
  t = SSL_table_put(p_21, q_21, r_21);
  t = n_21;
  {
    static ATerm x_4 (ATerm t)
    {
      ATerm d_14 = t;
      int f_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_102(t);
          LocalPopChoice(f_14);
        }
      else
        {
          t = d_14;
          {
            ATerm g_14 = t;
            int h_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_4, a_5, b_5, t);
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
    t = parse_options_p__1_0(x_4, t);
  }
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_22 = NULL;
        i_22 = t;
        {
          ATerm k_14 = t;
          int l_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_7 = NULL;
              t = i_22;
              {
                ATerm m_14 = t;
                int n_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_r_11;
                    t = get_config_0_0(t);
                    LocalPopChoice(n_14);
                  }
                else
                  {
                    t = m_14;
                    t = fetch_1_0(c_5, t);
                  }
              }
              t = i_22;
              t = default_system_usage_0_0(t);
              t = term_f_9;
              w_7 = t;
              t = SSL_exit(w_7);
              LocalPopChoice(l_14);
            }
          else
            {
              t = k_14;
              {
                ATerm i_8 = NULL;
                t = term_y_12;
                t = get_config_0_0(t);
                t = i_22;
                t = default_system_about_0_0(t);
                t = term_f_9;
                i_8 = t;
                t = SSL_exit(i_8);
              }
            }
        }
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
        {
          ATerm o_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
              static ATerm d_5 (ATerm t)
              {
                ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,u_2 = NULL;
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
                u_2 = t;
                t = SSLsetAnnotations(u_2, m_22);
                return(t);
              }
              t = fetch_1_0(d_5, t);
              t = term_q_8;
              k_22 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_21)), term_q_14);
              l_22 = t;
              t = SSL_printnl(k_22, l_22);
              t = (ATerm) ATmakeAppl(sym__2, term_q_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_21)), term_q_14));
              t = default_system_usage_0_0(t);
              t = term_w_8;
              j_22 = t;
              t = SSL_exit(j_22);
              LocalPopChoice(p_14);
            }
          else
            {
              t = o_14;
            }
        }
      }
  }
  m_21 = t;
  t = term_c_10;
  o_21 = t;
  t = SSL_table_destroy(o_21);
  t = m_21;
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL;
  t = parse_options_1_0(u_100, t);
  t_22 = t;
  t = term_r_14;
  w_22 = t;
  t = SSL_table_create(w_22);
  t = term_r_14;
  u_22 = t;
  t = term_s_14;
  v_22 = t;
  t = SSL_table_put(u_22, v_22, t_22);
  t = t_22;
  t = w_100(t);
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_100, t);
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        {
          ATerm v_14 = t;
          int w_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_100(t);
              t = report_success_0_0(t);
              LocalPopChoice(w_14);
            }
          else
            {
              t = v_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm f_5 (ATerm t)
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
        ATerm c_15 = t;
        int e_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(e_15);
          }
        else
          {
            t = c_15;
            {
              ATerm g_15 = t;
              int j_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(h_5, i_5, j_5, t);
                  LocalPopChoice(j_15);
                }
              else
                {
                  t = g_15;
                  {
                    ATerm n_15 = t;
                    int o_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(o_15);
                      }
                    else
                      {
                        t = n_15;
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
static ATerm g_5 (ATerm t)
{
  t = input_1_0(m_5, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL;
  t = term_h_7;
  y_22 = t;
  t = term_p_8;
  z_22 = t;
  t = term_p_15;
  t = m_4(y_22, z_22, t);
  t = term_q_15;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_r_15;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = output_1_0(q_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm b_23 = NULL;
  t = collect_all_1_0(s_5, t);
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym_Module_2, term_s_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rules_1, b_23)));
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm c_23 = NULL,f_23 = NULL;
  if(match_cons(t, sym_Prim_2))
    {
      c_23 = ATgetArgument(t, 0);
      f_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(c_23, f_23, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(f_5, default_usage_0_0, _id, g_5, t);
  return(t);
}

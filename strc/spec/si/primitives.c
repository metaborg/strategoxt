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
ATerm term_o_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_j_15;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_f_14;
ATerm term_r_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_f_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_t_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_u_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_h_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_p_8;
ATerm term_l_8;
ATerm term_h_7;
ATerm term_e_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_t_6;
ATerm term_p_6;
ATerm term_c_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_q_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalTerm", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_5);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_r_5);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalPrim", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("App", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Prim", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym_Var_1, term_z_5);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym__2, term_w_6, term_x_6);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym__2, term_w_6, term_e_7);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym__2, term_w_6, term_u_8);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_j_9);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_y_8);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym__2, term_w_6, term_o_10);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym__2, term_w_6, term_h_9);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym__2, term_w_6, term_o_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_d_10);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, term_o_12, term_y_8);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_s_12, term_y_8);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_y_8);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__2, term_w_6, term_o_12);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, term_e_7, term_y_8);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("eval-lib-primitives", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm new_0_0 (ATerm t);
ATerm new_stratego_var_0_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm o_3 (ATerm h_20, ATerm i_20, ATerm t);
static ATerm p_3 (ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm j_28, ATerm i_28, ATerm t);
static ATerm q_3 (ATerm j_90 (ATerm), ATerm f_28, ATerm e_28, ATerm t);
ATerm foldr_3_0 (ATerm r_92 (ATerm), ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm collect_all_1_0 (ATerm q_91 (ATerm), ATerm t);
static ATerm r_3 (ATerm g_37, ATerm h_37, ATerm t);
static ATerm s_3 (ATerm b_22, ATerm c_22, ATerm t);
static ATerm u_3 (ATerm p_85 (ATerm), ATerm v_141, ATerm h_22, ATerm t);
static ATerm t_3 (ATerm x_21, ATerm y_21, ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm output_1_0 (ATerm f_104 (ATerm), ATerm t);
static ATerm d_6 (ATerm v_5, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm v_3 (ATerm d_22, ATerm t);
static ATerm w_3 (ATerm z_35, ATerm a_36, ATerm t);
static ATerm x_3 (ATerm i_37, ATerm j_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_9 (ATerm f_7, ATerm t);
static ATerm n_9 (ATerm o_7, ATerm q_7, ATerm u_7, ATerm t);
static ATerm o_9 (ATerm j_8, ATerm m_8, ATerm n_8, ATerm t);
static ATerm y_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm g_104 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm f_4 (ATerm z_46, ATerm a_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_4 (ATerm u_51, ATerm v_51, ATerm t_51, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_3 (ATerm c_40, ATerm d_40, ATerm t);
ATerm foldr_2_0 (ATerm p_92 (ATerm), ATerm q_92 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm g_101 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm need_help_1_0 (ATerm w_103 (ATerm), ATerm t);
ATerm map_1_0 (ATerm y_85 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_86 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_4 (ATerm l_53, ATerm m_53, ATerm t);
static ATerm k_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_57 (ATerm), ATerm r_57 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_105 (ATerm), ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm parse_options_1_0 (ATerm y_105 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
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
  t = (ATerm) ATmakeAppl(sym_App_2, term_s_5, j_0);
  return(t);
}
static ATerm o_3 (ATerm h_20, ATerm i_20, ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL;
  t = i_20;
  t = map_1_0(new_stratego_var_0_0, t);
  b_0 = t;
  t = map_1_0(h_0, t);
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym_RDefNoArgs_2, term_w_5, (ATerm) ATmakeAppl(sym_RuleNoCond_2, (ATerm)ATmakeAppl(sym_Op_2, term_x_5, (ATerm) ATinsert(ATinsert(ATempty, term_c_6), (ATerm) ATmakeAppl(sym_Op_2, term_y_5, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_List_1, b_0)), (ATerm) ATmakeAppl(sym_Str_1, h_20))))), (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Prim_2, h_20, f_0), term_c_6)));
  return(t);
}
static ATerm p_3 (ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm j_28, ATerm i_28, ATerm t)
{
  t = n_90(t);
  {
    static ATerm o_0 (ATerm t)
    {
      ATerm m_0 = NULL;
      m_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_28, m_0);
      t = m_90(t);
      return(t);
    }
    t = fetch_1_0(o_0, t);
  }
  t = i_28;
  return(t);
}
static ATerm q_3 (ATerm j_90 (ATerm), ATerm f_28, ATerm e_28, ATerm t)
{
  static ATerm w_1 (ATerm t)
  {
    ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL;
    p_1 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_28;
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
          ATerm f_6 = t;
          int g_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_1;
              {
                static ATerm p_0 (ATerm t)
                {
                  t = e_28;
                  return(t);
                }
                t = p_3(j_90, p_0, q_1, r_1, t);
              }
              t = w_1(t);
              LocalPopChoice(g_6);
            }
          else
            {
              t = f_6;
              {
                ATerm r_0 = NULL,v_0 = NULL,q_0 = NULL;
                t = SSLgetAnnotations(p_1);
                r_0 = t;
                t = r_1;
                t = w_1(t);
                v_0 = t;
                t = (ATerm) ATinsert(CheckATermList(v_0), q_1);
                q_0 = t;
                t = SSLsetAnnotations(q_0, r_0);
              }
            }
        }
      }
    return(t);
  }
  t = f_28;
  t = w_1(t);
  return(t);
}
ATerm foldr_3_0 (ATerm r_92 (ATerm), ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm t)
{
  ATerm a_2 = NULL,c_2 = NULL,d_2 = NULL;
  a_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_2;
      t = r_92(t);
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
      t = t_92(t);
      g_2 = t;
      t = d_2;
      t = foldr_3_0(r_92, s_92, t_92, t);
      h_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_2, h_2);
      t = s_92(t);
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
  ATerm i_1 = NULL,j_1 = NULL;
  if(match_cons(t, sym__2))
    {
      i_1 = ATgetArgument(t, 0);
      j_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_3(w_0, i_1, j_1, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm l_1 = NULL;
  if(match_cons(t, sym__2))
    {
      l_1 = ATgetArgument(t, 0);
      if((l_1 != ATgetArgument(t, 1)))
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
  ATerm b_2 = NULL,i_2 = NULL;
  if(match_cons(t, sym__2))
    {
      b_2 = ATgetArgument(t, 0);
      i_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_3(c_1, b_2, i_2, t);
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
ATerm collect_all_1_0 (ATerm q_91 (ATerm), ATerm t)
{
  ATerm h_6 = t;
  int i_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL,d_1 = NULL;
      n_2 = t;
      t = q_91(t);
      o_2 = t;
      t = SSL_explode_term(n_2);
      if(match_cons(t, sym__2))
        {
          ATerm j_6 = ATgetArgument(t, 0);
          d_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_1;
      {
        static ATerm u_0 (ATerm t)
        {
          t = collect_all_1_0(q_91, t);
          return(t);
        }
        t = foldr_3_0(s_0, t_0, u_0, t);
      }
      p_2 = t;
      t = (ATerm) ATinsert(CheckATermList(p_2), o_2);
      LocalPopChoice(i_6);
    }
  else
    {
      t = h_6;
      {
        ATerm o_1 = NULL,s_1 = NULL;
        static ATerm b_1 (ATerm t)
        {
          t = collect_all_1_0(q_91, t);
          return(t);
        }
        s_1 = t;
        t = SSL_explode_term(s_1);
        if(match_cons(t, sym__2))
          {
            ATerm o_6 = ATgetArgument(t, 0);
            o_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_1;
        t = foldr_3_0(y_0, z_0, b_1, t);
      }
    }
  return(t);
}
static ATerm r_3 (ATerm g_37, ATerm h_37, ATerm t)
{
  ATerm a_3 = NULL;
  t = SSL_fputc(g_37, h_37);
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_3);
  return(t);
}
static ATerm s_3 (ATerm b_22, ATerm c_22, ATerm t)
{
  ATerm d_3 = NULL;
  t = SSL_write_term_to_stream_text(b_22, c_22);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_3);
  return(t);
}
static ATerm u_3 (ATerm p_85 (ATerm), ATerm v_141, ATerm h_22, ATerm t)
{
  ATerm e_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_141, term_p_6);
  t = y_3(t);
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_3, h_22);
  t = p_85(t);
  t = fclose_0_0(t);
  t = h_22;
  return(t);
}
static ATerm t_3 (ATerm x_21, ATerm y_21, ATerm t)
{
  ATerm h_3 = NULL;
  t = SSL_write_term_to_stream_baf(x_21, y_21);
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_3);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_6 = ATgetArgument(t, 0);
      if(match_cons(r_6, sym_Stream_1))
        {
          o_4 = ATgetArgument(r_6, 0);
        }
      else
        _fail(t);
      p_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_3(o_4, p_4, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm q_4 = NULL,x_4 = NULL,y_4 = NULL,b_5 = NULL,d_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_6 = ATgetArgument(t, 0);
      if(match_cons(s_6, sym_Stream_1))
        {
          b_5 = ATgetArgument(s_6, 0);
        }
      else
        _fail(t);
      d_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_3(b_5, d_5, t);
  q_4 = t;
  t = term_t_6;
  x_4 = t;
  t = q_4;
  if(match_cons(t, sym_Stream_1))
    {
      y_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_6, q_4);
  t = r_3(x_4, y_4, t);
  return(t);
}
ATerm output_1_0 (ATerm f_104 (ATerm), ATerm t)
{
  ATerm i_3 = NULL,l_3 = NULL;
  t = f_104(t);
  l_3 = t;
  {
    ATerm u_6 = t;
    int v_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_4 = NULL,l_4 = NULL;
        t = term_w_6;
        j_4 = t;
        t = term_x_6;
        l_4 = t;
        t = term_z_6;
        t = c_4(j_4, l_4, t);
        LocalPopChoice(v_6);
      }
    else
      {
        t = u_6;
        t = term_a_7;
      }
  }
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_3, l_3);
  {
    ATerm c_7 = t;
    int d_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_4 = NULL,n_4 = NULL;
        t = term_w_6;
        m_4 = t;
        t = term_e_7;
        n_4 = t;
        t = term_h_7;
        t = c_4(m_4, n_4, t);
        t = (ATerm) ATmakeAppl(sym__2, i_3, l_3);
        LocalPopChoice(d_7);
        if(match_cons(t, sym__2))
          {
            ATerm i_7 = ATgetArgument(t, 0);
            ATerm j_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_3(e_1, i_3, l_3, t);
      }
    else
      {
        t = c_7;
        if(match_cons(t, sym__2))
          {
            ATerm k_7 = ATgetArgument(t, 0);
            ATerm l_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_3(f_1, i_3, l_3, t);
      }
  }
  return(t);
}
static ATerm d_6 (ATerm v_5, ATerm t)
{
  t = SSL_fclose(v_5);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL;
  b_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_6 = ATgetArgument(t, 0);
      {
        ATerm r_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_6);
            LocalPopChoice(s_7);
          }
        else
          {
            t = r_7;
            t = d_6(b_6, t);
          }
      }
    }
  else
    {
      t = d_6(b_6, t);
    }
  return(t);
}
static ATerm v_3 (ATerm d_22, ATerm t)
{
  t = SSL_read_term_from_stream(d_22);
  return(t);
}
static ATerm w_3 (ATerm z_35, ATerm a_36, ATerm t)
{
  t = SSL_strcat(z_35, a_36);
  return(t);
}
static ATerm x_3 (ATerm i_37, ATerm j_37, ATerm t)
{
  ATerm e_6 = NULL;
  t = SSL_fopen(i_37, j_37);
  e_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_6);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_6 = NULL;
  t = SSL_stdin_stream();
  k_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_6);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_6 = NULL;
  t = SSL_stdout_stream();
  l_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_6);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_6 = NULL;
  t = SSL_stderr_stream();
  m_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_6);
  return(t);
}
static ATerm m_9 (ATerm f_7, ATerm t)
{
  ATerm g_7 = NULL;
  t = SSL_explode_term(f_7);
  if(match_cons(t, sym__2))
    {
      ATerm t_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_7 = ATgetArgument(t, 1);
        if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
          {
            g_7 = ATgetFirst((ATermList) z_7);
            {
              ATerm c_8 = (ATerm) ATgetNext((ATermList) z_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_7;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_7;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_7;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_7;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_9 (ATerm o_7, ATerm q_7, ATerm u_7, ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,y_7 = NULL,e_8 = NULL,x_0 = NULL;
  t = SSLgetAnnotations(u_7);
  y_7 = t;
  t = o_7;
  if(match_cons(t, sym_Path_1))
    {
      e_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_8, q_7);
  x_0 = t;
  t = SSLsetAnnotations(x_0, y_7);
  if(match_cons(t, sym__2))
    {
      v_7 = ATgetArgument(t, 0);
      w_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3(v_7, w_7, t);
  return(t);
}
static ATerm o_9 (ATerm j_8, ATerm m_8, ATerm n_8, ATerm t)
{
  ATerm o_8 = NULL,q_8 = NULL,r_8 = NULL,w_8 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(n_8);
  r_8 = t;
  t = SSL_is_string(j_8);
  w_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_8, m_8);
  a_1 = t;
  t = SSLsetAnnotations(a_1, r_8);
  if(match_cons(t, sym__2))
    {
      o_8 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3(o_8, q_8, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm z_8 = NULL,g_9 = NULL,i_9 = NULL;
  z_8 = t;
  if(match_cons(t, sym__2))
    {
      g_9 = ATgetArgument(t, 0);
      i_9 = ATgetArgument(t, 1);
      {
        ATerm d_8 = t;
        int f_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_9(z_8, t);
            LocalPopChoice(f_8);
          }
        else
          {
            t = d_8;
            {
              ATerm g_8 = t;
              int h_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_9(g_9, i_9, z_8, t);
                  LocalPopChoice(h_8);
                }
              else
                {
                  t = g_8;
                  t = o_9(g_9, i_9, z_8, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_9(z_8, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_9 = NULL,u_9 = NULL,v_9 = NULL,e_10 = NULL;
  e_10 = t;
  {
    ATerm i_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_10, term_l_8);
        t = y_3(t);
        LocalPopChoice(k_8);
      }
    else
      {
        t = i_8;
        {
          ATerm j_3 = NULL,k_3 = NULL;
          t = term_p_8;
          k_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_8, e_10);
          t = w_3(k_3, e_10, t);
          j_3 = t;
          t = SSL_perror(j_3);
          _fail(t);
        }
      }
  }
  u_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_3(v_9, t);
  q_9 = t;
  t = u_9;
  t = fclose_0_0(t);
  t = q_9;
  return(t);
}
ATerm input_1_0 (ATerm g_104 (ATerm), ATerm t)
{
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_10 = NULL,m_10 = NULL;
      t = term_w_6;
      i_10 = t;
      t = term_u_8;
      m_10 = t;
      t = term_v_8;
      t = c_4(i_10, m_10, t);
      LocalPopChoice(t_8);
    }
  else
    {
      t = s_8;
      t = term_x_8;
    }
  t = ReadFromFile_0_0(t);
  t = g_104(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL;
  p_10 = t;
  t = term_y_8;
  t = whoami_0_0(t);
  q_10 = t;
  t = term_a_9;
  s_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_9), q_10), term_b_9);
  t_10 = t;
  t = SSL_printnl(s_10, t_10);
  t = term_d_9;
  r_10 = t;
  t = SSL_exit(r_10);
  t = p_10;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm v_10 = NULL;
  v_10 = t;
  if(match_string(t, "-k"))
    {
      t = v_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_10;
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,i_11 = NULL;
  f_11 = t;
  t = SSL_string_to_int(f_11);
  g_11 = t;
  t = term_e_9;
  i_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_9, g_11);
  t = f_4(i_11, g_11, t);
  t = f_11;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_f_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_1, m_1, t_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm k_11 = NULL;
  k_11 = t;
  if(match_string(t, "-S"))
    {
      t = k_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_11;
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL;
  t = term_h_9;
  q_11 = t;
  t = term_j_9;
  r_11 = t;
  t = term_k_9;
  t = f_4(q_11, r_11, t);
  t = term_l_9;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_p_9;
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
  ATerm s_11 = NULL,u_11 = NULL,v_11 = NULL;
  s_11 = t;
  t = SSL_string_to_int(s_11);
  u_11 = t;
  t = term_h_9;
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_9, u_11);
  t = f_4(v_11, u_11, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_11);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_r_9;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL;
  t = term_s_9;
  w_11 = t;
  t = term_y_8;
  x_11 = t;
  t = term_t_9;
  t = f_4(w_11, x_11, t);
  t = term_w_9;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_x_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_1, v_1, z_1, t);
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      {
        ATerm a_10 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_2, f_2, k_2, t);
            LocalPopChoice(b_10);
          }
        else
          {
            t = a_10;
            t = Option_3_0(l_2, q_2, r_2, t);
          }
      }
    }
  return(t);
}
static ATerm f_4 (ATerm z_46, ATerm a_47, ATerm t)
{
  ATerm y_11 = NULL;
  t = term_w_6;
  y_11 = t;
  t = SSL_table_put(y_11, z_46, a_47);
  t = (ATerm) ATmakeAppl(sym__3, term_w_6, z_46, a_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm d_12 = NULL,k_12 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
      t = term_y_8;
      t = e_0(t);
      l_12 = t;
      t = term_c_10;
      m_12 = t;
      t = term_d_10;
      n_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_10, term_d_10, l_12);
      t = d_4(m_12, n_12, l_12, t);
      _fail(t);
    }
  else
    {
      ATerm r_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_12 = ATgetFirst((ATermList) t);
          k_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_12;
      t = c_0(t);
      t = term_y_8;
      t = d_0(t);
      r_12 = t;
      t = (ATerm) ATinsert(CheckATermList(k_12), r_12);
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm u_12 = NULL;
  u_12 = t;
  if(match_string(t, "-o"))
    {
      t = u_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_12;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm v_12 = NULL,y_12 = NULL;
  v_12 = t;
  t = term_x_6;
  y_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_6, v_12);
  t = f_4(y_12, v_12, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_12);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_f_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, u_2, w_2, t);
  return(t);
}
static ATerm d_4 (ATerm u_51, ATerm v_51, ATerm t_51, ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,g_13 = NULL;
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_51, v_51);
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_10 = ATgetArgument(t, 0);
            ATerm k_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_51, v_51);
        t = c_4(u_51, v_51, t);
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
        t = (ATerm) ATempty;
      }
  }
  e_13 = t;
  t = (ATerm) ATinsert(CheckATermList(e_13), t_51);
  g_13 = t;
  t = SSL_table_put(u_51, v_51, g_13);
  t = d_13;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_13 = NULL,w_13 = NULL,x_13 = NULL;
      t = term_y_8;
      t = n_0(t);
      t_13 = t;
      t = term_c_10;
      w_13 = t;
      t = term_d_10;
      x_13 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_10, term_d_10, t_13);
      t = d_4(w_13, x_13, t_13, t);
      _fail(t);
    }
  else
    {
      ATerm g_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_13 = ATgetFirst((ATermList) t);
          o_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_13;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_13 = ATgetFirst((ATermList) t);
          q_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_13;
      t = k_0(t);
      t = p_13;
      t = l_0(t);
      g_14 = t;
      t = (ATerm) ATinsert(CheckATermList(q_13), g_14);
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm k_14 = NULL;
  k_14 = t;
  if(match_string(t, "-i"))
    {
      t = k_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_14;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm n_14 = NULL,p_14 = NULL;
  n_14 = t;
  t = term_u_8;
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_8, n_14);
  t = f_4(p_14, n_14, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_14);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_l_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_2, y_2, z_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_8;
  t = whoami_0_0(t);
  q_14 = t;
  t = term_a_9;
  v_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_10), q_14);
  w_14 = t;
  t = SSL_printnl(v_14, w_14);
  t = term_d_9;
  u_14 = t;
  t = SSL_exit(u_14);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm x_14 = NULL,a_15 = NULL;
  t = term_w_6;
  x_14 = t;
  t = term_o_10;
  a_15 = t;
  t = term_u_10;
  t = c_4(x_14, a_15, t);
  return(t);
}
static ATerm z_3 (ATerm c_40, ATerm d_40, ATerm t)
{
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_40, d_40);
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
      t = SSL_addr(c_40, d_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_92 (ATerm), ATerm q_92 (ATerm), ATerm t)
{
  ATerm c_15 = NULL,g_15 = NULL,k_15 = NULL;
  c_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_15;
      t = p_92(t);
    }
  else
    {
      ATerm n_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_15 = ATgetFirst((ATermList) t);
          k_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_15;
      t = foldr_2_0(p_92, q_92, t);
      n_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_15, n_15);
      t = q_92(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_j_9;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL;
  if(match_cons(t, sym__2))
    {
      g_4 = ATgetArgument(t, 0);
      h_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(g_4, h_4, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_15 = NULL,n_3 = NULL,a_4 = NULL;
  t = times_0_0(t);
  a_4 = t;
  t = SSL_explode_term(a_4);
  if(match_cons(t, sym__2))
    {
      ATerm y_10 = ATgetArgument(t, 0);
      n_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_3;
  t = foldr_2_0(b_3, c_3, t);
  q_15 = t;
  t = SSL_TicksToSeconds(q_15);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL;
  b_16 = t;
  if(match_cons(t, sym__2))
    {
      c_16 = ATgetArgument(t, 0);
      d_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_16;
        if((c_16 != t))
          {
            _fail(t);
          }
        t = b_16;
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        t = (ATerm) ATmakeAppl(sym__2, c_16, d_16);
        {
          ATerm b_11 = t;
          int c_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_16, d_16);
              LocalPopChoice(c_11);
            }
          else
            {
              t = b_11;
              t = SSL_gtr(c_16, d_16);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_16, d_16);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_101 (ATerm), ATerm t)
{
  ATerm h_16 = NULL;
  h_16 = t;
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_16 = NULL,p_16 = NULL,q_16 = NULL;
        t = term_w_6;
        p_16 = t;
        t = term_h_9;
        q_16 = t;
        t = term_h_11;
        t = c_4(p_16, q_16, t);
        l_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_16, term_d_9);
        t = geq_0_0(t);
        t = h_16;
        t = g_101(t);
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
        t = h_16;
      }
  }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,v_16 = NULL,w_16 = NULL;
  t = run_time_0_0(t);
  s_16 = t;
  t = term_y_8;
  t = whoami_0_0(t);
  t_16 = t;
  t = term_a_9;
  v_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_11), s_16), term_j_11), t_16);
  w_16 = t;
  t = SSL_printnl(v_16, w_16);
  t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_11), s_16), term_j_11), t_16));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_16 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_9;
  x_16 = t;
  t = SSL_exit(x_16);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL;
  i_17 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_17;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_17 = ATgetArgument(t, 0);
          {
            ATerm e_5 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(i_17);
            e_5 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_17);
            g_1 = t;
            t = SSLsetAnnotations(g_1, e_5);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_17;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_103 (ATerm), ATerm t)
{
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_17 = NULL,b_17 = NULL;
      t = term_w_6;
      a_17 = t;
      t = term_o_11;
      b_17 = t;
      t = term_p_11;
      t = c_4(a_17, b_17, t);
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      t = fetch_1_0(g_3, t);
    }
  t = w_103(t);
  return(t);
}
ATerm map_1_0 (ATerm y_85 (ATerm), ATerm t)
{
  static ATerm y_17 (ATerm t)
  {
    ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL;
    v_17 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_17;
      }
    else
      {
        ATerm m_5 = NULL,t_5 = NULL,u_5 = NULL,k_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_17 = ATgetFirst((ATermList) t);
            x_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_17);
        m_5 = t;
        t = w_17;
        t = y_85(t);
        t_5 = t;
        t = x_17;
        t = y_17(t);
        u_5 = t;
        t = (ATerm) ATinsert(CheckATermList(u_5), t_5);
        k_1 = t;
        t = SSLsetAnnotations(k_1, m_5);
      }
    return(t);
  }
  t = y_17(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_18 = ATgetFirst((ATermList) t);
      c_18 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_18 = NULL,h_18 = NULL;
        static ATerm m_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_18)), not_null(h_18));
          return(t);
        }
        t = c_18;
        t = i_0(t);
        if(((g_18 != NULL) && (g_18 != t)))
          _fail(t);
        else
          g_18 = t;
        t = b_18;
        t = g_0(t);
        if(((h_18 != NULL) && (h_18 != t)))
          _fail(t);
        else
          h_18 = t;
        t = c_18;
        t = reverse_acc_2_0(g_0, m_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_8;
      t = i_0(t);
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,n_1 = NULL;
  p_18 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_18);
  n_18 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_18);
  n_1 = t;
  t = SSLsetAnnotations(n_1, n_18);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm r_18 = NULL;
  r_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_18), term_t_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL;
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_18 = NULL,m_18 = NULL;
      t = term_w_6;
      l_18 = t;
      t = term_o_10;
      m_18 = t;
      t = term_u_10;
      t = c_4(l_18, m_18, t);
      LocalPopChoice(a_12);
    }
  else
    {
      t = z_11;
      t = fetch_1_0(b_4, t);
    }
  t = term_b_12;
  t = echo_0_0(t);
  t = term_c_10;
  j_18 = t;
  t = term_d_10;
  k_18 = t;
  t = term_c_12;
  t = c_4(j_18, k_18, t);
  t = reverse_acc_2_0(_id, e_4, t);
  t = map_1_0(i_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_86 (ATerm), ATerm t)
{
  static ATerm o_19 (ATerm t)
  {
    ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
    l_19 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_19 = ATgetFirst((ATermList) t);
        n_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_12 = t;
      int f_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_6 = NULL,q_6 = NULL,x_1 = NULL;
          t = SSLgetAnnotations(l_19);
          n_6 = t;
          t = m_19;
          t = i_86(t);
          q_6 = t;
          t = (ATerm) ATinsert(CheckATermList(n_19), q_6);
          x_1 = t;
          t = SSLsetAnnotations(x_1, n_6);
          LocalPopChoice(f_12);
        }
      else
        {
          t = e_12;
          {
            ATerm y_6 = NULL,b_7 = NULL,y_1 = NULL;
            t = SSLgetAnnotations(l_19);
            y_6 = t;
            t = n_19;
            t = o_19(t);
            b_7 = t;
            t = (ATerm) ATinsert(CheckATermList(b_7), m_19);
            y_1 = t;
            t = SSLsetAnnotations(y_1, y_6);
          }
        }
    }
    return(t);
  }
  t = o_19(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  s_19 = t;
  {
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_19;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_12 = ATgetFirst((ATermList) t);
                ATerm j_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_19;
          }
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        t = (ATerm) ATinsert(ATempty, s_19);
      }
  }
  t_19 = t;
  t = term_a_7;
  u_19 = t;
  t = SSL_printnl(u_19, t_19);
  t = s_19;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL;
  t = term_w_6;
  y_19 = t;
  t = term_o_10;
  z_19 = t;
  t = term_u_10;
  t = c_4(y_19, z_19, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_4 (ATerm l_53, ATerm m_53, ATerm t)
{
  t = SSL_table_get(l_53, m_53);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL;
  t = term_o_12;
  a_20 = t;
  t = term_y_8;
  b_20 = t;
  t = term_p_12;
  t = f_4(a_20, b_20, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_q_12;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL;
  t = term_o_12;
  e_20 = t;
  t = term_y_8;
  f_20 = t;
  t = term_p_12;
  t = f_4(e_20, f_20, t);
  t = term_s_12;
  c_20 = t;
  t = term_y_8;
  d_20 = t;
  t = term_t_12;
  t = f_4(c_20, d_20, t);
  t = term_w_12;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_x_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_4, r_4, s_4, t);
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      t = Option_3_0(t_4, u_4, v_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_57 (ATerm), ATerm r_57 (ATerm), ATerm t)
{
  ATerm g_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,m_2 = NULL;
  q_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_20 = ATgetFirst((ATermList) t);
      n_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_20);
  g_20 = t;
  t = m_20;
  t = q_57(t);
  o_20 = t;
  t = n_20;
  t = r_57(t);
  p_20 = t;
  t = (ATerm) ATinsert(CheckATermList(p_20), o_20);
  m_2 = t;
  t = SSLsetAnnotations(m_2, g_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_105 (ATerm), ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,a_21 = NULL,b_21 = NULL,t_2 = NULL;
  v_20 = t;
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_13;
        t = z_105(t);
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
      }
  }
  t = v_20;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_20 = ATgetFirst((ATermList) t);
      y_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_20);
  w_20 = t;
  t = term_o_10;
  b_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_10, x_20);
  t = f_4(b_21, x_20, t);
  t = y_20;
  {
    static ATerm l_21 (ATerm t)
    {
      ATerm h_13 = t;
      int i_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_13 = t;
          int k_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_21 = NULL;
              e_21 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_21;
              LocalPopChoice(k_13);
            }
          else
            {
              t = j_13;
              t = z_105(t);
              t = Cons_2_0(_id, l_21, t);
            }
          LocalPopChoice(i_13);
        }
      else
        {
          t = h_13;
          {
            ATerm h_21 = NULL,i_21 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_21 = ATgetFirst((ATermList) t);
                i_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_21), (ATerm) ATmakeAppl(sym_Undefined_1, h_21));
          }
        }
      return(t);
    }
    t = l_21(t);
  }
  a_21 = t;
  t = (ATerm) ATinsert(CheckATermList(a_21), (ATerm) ATmakeAppl(sym_Program_1, x_20));
  t_2 = t;
  t = SSLsetAnnotations(t_2, w_20);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm z_21 = NULL;
  z_21 = t;
  if(match_string(t, "--help"))
    {
      t = z_21;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_21;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_21;
        }
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm a_22 = NULL,e_22 = NULL;
  t = term_o_11;
  a_22 = t;
  t = term_y_8;
  e_22 = t;
  t = term_l_13;
  t = f_4(a_22, e_22, t);
  t = term_m_13;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_105 (ATerm), ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL;
  s_21 = t;
  t = term_c_10;
  u_21 = t;
  t = term_d_10;
  v_21 = t;
  t = (ATerm) ATempty;
  w_21 = t;
  t = SSL_table_put(u_21, v_21, w_21);
  t = s_21;
  {
    static ATerm w_4 (ATerm t)
    {
      ATerm s_13 = t;
      int u_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_105(t);
          LocalPopChoice(u_13);
        }
      else
        {
          t = s_13;
          {
            ATerm v_13 = t;
            int y_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_4, a_5, c_5, t);
                LocalPopChoice(y_13);
              }
            else
              {
                t = v_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_4, t);
  }
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_22 = NULL;
        r_22 = t;
        {
          ATerm b_14 = t;
          int c_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_7 = NULL;
              t = r_22;
              {
                ATerm d_14 = t;
                int e_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_7 = NULL,p_7 = NULL;
                    t = term_w_6;
                    n_7 = t;
                    t = term_o_11;
                    p_7 = t;
                    t = term_p_11;
                    t = c_4(n_7, p_7, t);
                    LocalPopChoice(e_14);
                  }
                else
                  {
                    t = d_14;
                    t = fetch_1_0(f_5, t);
                  }
              }
              t = r_22;
              t = default_system_usage_0_0(t);
              t = term_j_9;
              m_7 = t;
              t = SSL_exit(m_7);
              LocalPopChoice(c_14);
            }
          else
            {
              t = b_14;
              {
                ATerm x_7 = NULL,a_8 = NULL,b_8 = NULL;
                t = term_w_6;
                a_8 = t;
                t = term_o_12;
                b_8 = t;
                t = term_f_14;
                t = c_4(a_8, b_8, t);
                t = r_22;
                t = default_system_about_0_0(t);
                t = term_j_9;
                x_7 = t;
                t = SSL_exit(x_7);
              }
            }
        }
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        {
          ATerm h_14 = t;
          int i_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
              static ATerm g_5 (ATerm t)
              {
                ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,v_2 = NULL;
                x_22 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    w_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_22);
                v_22 = t;
                t = w_22;
                if(((q_21 != NULL) && (q_21 != t)))
                  _fail(t);
                else
                  q_21 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, w_22);
                v_2 = t;
                t = SSLsetAnnotations(v_2, v_22);
                return(t);
              }
              t = fetch_1_0(g_5, t);
              t = term_a_9;
              t_22 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_21)), term_j_14);
              u_22 = t;
              t = SSL_printnl(t_22, u_22);
              t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_21)), term_j_14));
              t = default_system_usage_0_0(t);
              t = term_d_9;
              s_22 = t;
              t = SSL_exit(s_22);
              LocalPopChoice(i_14);
            }
          else
            {
              t = h_14;
            }
        }
      }
  }
  r_21 = t;
  t = term_c_10;
  t_21 = t;
  t = SSL_table_destroy(t_21);
  t = r_21;
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
  t = parse_options_1_0(y_103, t);
  c_23 = t;
  t = term_l_14;
  f_23 = t;
  t = SSL_table_create(f_23);
  t = term_l_14;
  d_23 = t;
  t = term_m_14;
  e_23 = t;
  t = SSL_table_put(d_23, e_23, c_23);
  t = c_23;
  t = a_104(t);
  {
    ATerm o_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_103, t);
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
              t = b_104(t);
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
static ATerm h_5 (ATerm t)
{
  ATerm y_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(z_14);
    }
  else
    {
      t = y_14;
      {
        ATerm b_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(d_15);
          }
        else
          {
            t = b_15;
            {
              ATerm e_15 = t;
              int f_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(j_5, k_5, l_5, t);
                  LocalPopChoice(f_15);
                }
              else
                {
                  t = e_15;
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
static ATerm i_5 (ATerm t)
{
  t = input_1_0(n_5, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL;
  t = term_e_7;
  h_23 = t;
  t = term_y_8;
  i_23 = t;
  t = term_j_15;
  t = f_4(h_23, i_23, t);
  t = term_l_15;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_m_15;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = output_1_0(o_5, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm m_23 = NULL;
  t = collect_all_1_0(p_5, t);
  m_23 = t;
  t = (ATerm) ATmakeAppl(sym_Module_2, term_o_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rules_1, m_23)));
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL;
  if(match_cons(t, sym_Prim_2))
    {
      n_23 = ATgetArgument(t, 0);
      o_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_3(n_23, o_23, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(h_5, default_usage_0_0, _id, i_5, t);
  return(t);
}

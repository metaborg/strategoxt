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
Symbol sym_Hashtable_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_t_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_o_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_w_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_n_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_w_8;
ATerm term_r_8;
ATerm term_o_8;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_b_7;
ATerm term_x_6;
ATerm term_u_6;
ATerm term_d_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_u_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalTerm", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_5);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_w_5);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalPrim", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("App", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Prim", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_Var_1, term_b_6);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym__2, term_b_7, term_d_7);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym__2, term_b_7, term_j_7);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym__2, term_b_7, term_w_8);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_r_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym__2, term_x_9, term_d_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym__2, term_b_7, term_s_10);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym__2, term_b_7, term_q_9);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym__2, term_b_7, term_u_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_j_10);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_d_9);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_d_9);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__2, term_u_11, term_d_9);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym__3, term_i_10, term_j_10, (ATerm) ATempty);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym__2, term_b_7, term_a_13);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__2, term_j_7, term_d_9);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("eval-lib-primitives", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm new_0_0 (ATerm t);
ATerm new_stratego_var_0_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm a_4 (ATerm h_20, ATerm i_20, ATerm t);
static ATerm b_4 (ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm j_28, ATerm i_28, ATerm t);
static ATerm c_4 (ATerm s_91 (ATerm), ATerm f_28, ATerm e_28, ATerm t);
ATerm foldr_3_0 (ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm collect_all_1_0 (ATerm z_92 (ATerm), ATerm t);
static ATerm d_4 (ATerm g_37, ATerm h_37, ATerm t);
static ATerm e_4 (ATerm b_22, ATerm c_22, ATerm t);
static ATerm g_4 (ATerm y_86 (ATerm), ATerm e_143, ATerm h_22, ATerm t);
static ATerm f_4 (ATerm x_21, ATerm y_21, ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm output_1_0 (ATerm o_105 (ATerm), ATerm t);
static ATerm m_6 (ATerm c_6, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm h_4 (ATerm d_22, ATerm t);
static ATerm i_4 (ATerm z_35, ATerm a_36, ATerm t);
static ATerm j_4 (ATerm i_37, ATerm j_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_9 (ATerm h_7, ATerm t);
static ATerm p_9 (ATerm s_7, ATerm v_7, ATerm w_7, ATerm t);
static ATerm w_9 (ATerm s_8, ATerm u_8, ATerm x_8, ATerm t);
static ATerm k_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm p_105 (ATerm), ATerm t);
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
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm t_4 (ATerm z_46, ATerm a_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_4 (ATerm u_51, ATerm v_51, ATerm t_51, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_4 (ATerm c_40, ATerm d_40, ATerm t);
ATerm foldr_2_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm p_102 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm need_help_1_0 (ATerm f_105 (ATerm), ATerm t);
static ATerm u_4 (ATerm b_55, ATerm c_55, ATerm d_55, ATerm t);
ATerm lookup_table_0_1 (ATerm g_53, ATerm t);
ATerm new_hashtable_0_2 (ATerm j_55, ATerm k_55, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm n_4 (ATerm g_55, ATerm h_55, ATerm t);
static ATerm o_4 (ATerm l_55, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm h_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_87 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm v_4 (ATerm e_55, ATerm f_55, ATerm t);
static ATerm q_4 (ATerm n_53, ATerm o_53, ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_107 (ATerm), ATerm t);
static ATerm y_4 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm parse_options_1_0 (ATerm h_107 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
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
  ATerm j_0 = NULL;
  j_0 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, term_x_5, j_0);
  return(t);
}
static ATerm a_4 (ATerm h_20, ATerm i_20, ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL;
  t = i_20;
  t = map_1_0(new_stratego_var_0_0, t);
  b_0 = t;
  t = map_1_0(h_0, t);
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym_RDefNoArgs_2, term_y_5, (ATerm) ATmakeAppl(sym_RuleNoCond_2, (ATerm)ATmakeAppl(sym_Op_2, term_z_5, (ATerm) ATinsert(ATinsert(ATempty, term_d_6), (ATerm) ATmakeAppl(sym_Op_2, term_a_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_List_1, b_0)), (ATerm) ATmakeAppl(sym_Str_1, h_20))))), (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Prim_2, h_20, f_0), term_d_6)));
  return(t);
}
static ATerm b_4 (ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm j_28, ATerm i_28, ATerm t)
{
  t = w_91(t);
  {
    static ATerm o_0 (ATerm t)
    {
      ATerm m_0 = NULL;
      m_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_28, m_0);
      t = v_91(t);
      return(t);
    }
    t = fetch_1_0(o_0, t);
  }
  t = i_28;
  return(t);
}
static ATerm c_4 (ATerm s_91 (ATerm), ATerm f_28, ATerm e_28, ATerm t)
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
          ATerm e_6 = t;
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
                t = b_4(s_91, p_0, q_1, r_1, t);
              }
              t = w_1(t);
              LocalPopChoice(g_6);
            }
          else
            {
              t = e_6;
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
ATerm foldr_3_0 (ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm t)
{
  ATerm a_2 = NULL,c_2 = NULL,d_2 = NULL;
  a_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_2;
      t = a_94(t);
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
      t = c_94(t);
      g_2 = t;
      t = d_2;
      t = foldr_3_0(a_94, b_94, c_94, t);
      h_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_2, h_2);
      t = b_94(t);
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
  t = c_4(w_0, i_1, j_1, t);
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
  t = c_4(c_1, b_2, i_2, t);
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
ATerm collect_all_1_0 (ATerm z_92 (ATerm), ATerm t)
{
  ATerm j_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL,d_1 = NULL;
      q_2 = t;
      t = z_92(t);
      r_2 = t;
      t = SSL_explode_term(q_2);
      if(match_cons(t, sym__2))
        {
          ATerm o_6 = ATgetArgument(t, 0);
          d_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_1;
      {
        static ATerm u_0 (ATerm t)
        {
          t = collect_all_1_0(z_92, t);
          return(t);
        }
        t = foldr_3_0(s_0, t_0, u_0, t);
      }
      s_2 = t;
      t = (ATerm) ATinsert(CheckATermList(s_2), r_2);
      LocalPopChoice(l_6);
    }
  else
    {
      t = j_6;
      {
        ATerm o_1 = NULL,s_1 = NULL;
        static ATerm b_1 (ATerm t)
        {
          t = collect_all_1_0(z_92, t);
          return(t);
        }
        s_1 = t;
        t = SSL_explode_term(s_1);
        if(match_cons(t, sym__2))
          {
            ATerm t_6 = ATgetArgument(t, 0);
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
static ATerm d_4 (ATerm g_37, ATerm h_37, ATerm t)
{
  ATerm d_3 = NULL;
  t = SSL_fputc(g_37, h_37);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_3);
  return(t);
}
static ATerm e_4 (ATerm b_22, ATerm c_22, ATerm t)
{
  ATerm e_3 = NULL;
  t = SSL_write_term_to_stream_text(b_22, c_22);
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_3);
  return(t);
}
static ATerm g_4 (ATerm y_86 (ATerm), ATerm e_143, ATerm h_22, ATerm t)
{
  ATerm h_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_143, term_u_6);
  t = k_4(t);
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_3, h_22);
  t = y_86(t);
  t = fclose_0_0(t);
  t = h_22;
  return(t);
}
static ATerm f_4 (ATerm x_21, ATerm y_21, ATerm t)
{
  ATerm i_3 = NULL;
  t = SSL_write_term_to_stream_baf(x_21, y_21);
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_3);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_6 = ATgetArgument(t, 0);
      if(match_cons(v_6, sym_Stream_1))
        {
          z_4 = ATgetArgument(v_6, 0);
        }
      else
        _fail(t);
      a_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_4(z_4, a_5, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_6 = ATgetArgument(t, 0);
      if(match_cons(w_6, sym_Stream_1))
        {
          e_5 = ATgetArgument(w_6, 0);
        }
      else
        _fail(t);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_4(e_5, f_5, t);
  b_5 = t;
  t = term_x_6;
  c_5 = t;
  t = b_5;
  if(match_cons(t, sym_Stream_1))
    {
      d_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_6, b_5);
  t = d_4(c_5, d_5, t);
  return(t);
}
ATerm output_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL;
  t = o_105(t);
  m_3 = t;
  {
    ATerm y_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_3 = NULL,r_3 = NULL;
        t = term_b_7;
        q_3 = t;
        t = term_d_7;
        r_3 = t;
        t = term_e_7;
        t = q_4(q_3, r_3, t);
        LocalPopChoice(a_7);
      }
    else
      {
        t = y_6;
        t = term_f_7;
      }
  }
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_3, m_3);
  {
    ATerm g_7 = t;
    int i_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_3 = NULL,p_4 = NULL;
        t = term_b_7;
        s_3 = t;
        t = term_j_7;
        p_4 = t;
        t = term_k_7;
        t = q_4(s_3, p_4, t);
        t = (ATerm) ATmakeAppl(sym__2, l_3, m_3);
        LocalPopChoice(i_7);
        if(match_cons(t, sym__2))
          {
            ATerm n_7 = ATgetArgument(t, 0);
            ATerm o_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_4(e_1, l_3, m_3, t);
      }
    else
      {
        t = g_7;
        if(match_cons(t, sym__2))
          {
            ATerm p_7 = ATgetArgument(t, 0);
            ATerm q_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_4(f_1, l_3, m_3, t);
      }
  }
  return(t);
}
static ATerm m_6 (ATerm c_6, ATerm t)
{
  t = SSL_fclose(c_6);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL;
  i_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_6 = ATgetArgument(t, 0);
      {
        ATerm t_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_6);
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
            t = m_6(i_6, t);
          }
      }
    }
  else
    {
      t = m_6(i_6, t);
    }
  return(t);
}
static ATerm h_4 (ATerm d_22, ATerm t)
{
  t = SSL_read_term_from_stream(d_22);
  return(t);
}
static ATerm i_4 (ATerm z_35, ATerm a_36, ATerm t)
{
  t = SSL_strcat(z_35, a_36);
  return(t);
}
static ATerm j_4 (ATerm i_37, ATerm j_37, ATerm t)
{
  ATerm p_6 = NULL;
  t = SSL_fopen(i_37, j_37);
  p_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_6);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_6 = NULL;
  t = SSL_stdin_stream();
  q_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_6);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_6 = NULL;
  t = SSL_stdout_stream();
  r_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_6);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_6 = NULL;
  t = SSL_stderr_stream();
  s_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_6);
  return(t);
}
static ATerm o_9 (ATerm h_7, ATerm t)
{
  ATerm m_7 = NULL;
  t = SSL_explode_term(h_7);
  if(match_cons(t, sym__2))
    {
      ATerm x_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_7 = ATgetArgument(t, 1);
        if(((ATgetType(y_7) == AT_LIST) && !(ATisEmpty(y_7))))
          {
            m_7 = ATgetFirst((ATermList) y_7);
            {
              ATerm a_8 = (ATerm) ATgetNext((ATermList) y_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_7;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_7;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_7;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_7;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_9 (ATerm s_7, ATerm v_7, ATerm w_7, ATerm t)
{
  ATerm z_7 = NULL,b_8 = NULL,e_8 = NULL,l_8 = NULL,x_0 = NULL;
  t = SSLgetAnnotations(w_7);
  e_8 = t;
  t = s_7;
  if(match_cons(t, sym_Path_1))
    {
      l_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_8, v_7);
  x_0 = t;
  t = SSLsetAnnotations(x_0, e_8);
  if(match_cons(t, sym__2))
    {
      z_7 = ATgetArgument(t, 0);
      b_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_4(z_7, b_8, t);
  return(t);
}
static ATerm w_9 (ATerm s_8, ATerm u_8, ATerm x_8, ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,c_9 = NULL,g_9 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(x_8);
  c_9 = t;
  t = SSL_is_string(s_8);
  g_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_9, u_8);
  a_1 = t;
  t = SSLsetAnnotations(a_1, c_9);
  if(match_cons(t, sym__2))
    {
      y_8 = ATgetArgument(t, 0);
      z_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_4(y_8, z_8, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  k_9 = t;
  if(match_cons(t, sym__2))
    {
      l_9 = ATgetArgument(t, 0);
      m_9 = ATgetArgument(t, 1);
      {
        ATerm c_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_9(k_9, t);
            LocalPopChoice(g_8);
          }
        else
          {
            t = c_8;
            {
              ATerm i_8 = t;
              int j_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_9(l_9, m_9, k_9, t);
                  LocalPopChoice(j_8);
                }
              else
                {
                  t = i_8;
                  t = w_9(l_9, m_9, k_9, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_9(k_9, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,m_10 = NULL;
  m_10 = t;
  {
    ATerm k_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_10, term_o_8);
        t = k_4(t);
        LocalPopChoice(m_8);
      }
    else
      {
        t = k_8;
        {
          ATerm g_3 = NULL,j_3 = NULL;
          t = term_r_8;
          j_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_r_8, m_10);
          t = i_4(j_3, m_10, t);
          g_3 = t;
          t = SSL_perror(g_3);
          _fail(t);
        }
      }
  }
  e_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_4(f_10, t);
  d_10 = t;
  t = e_10;
  t = fclose_0_0(t);
  t = d_10;
  return(t);
}
ATerm input_1_0 (ATerm p_105 (ATerm), ATerm t)
{
  ATerm t_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_10 = NULL,u_10 = NULL;
      t = term_b_7;
      t_10 = t;
      t = term_w_8;
      u_10 = t;
      t = term_a_9;
      t = q_4(t_10, u_10, t);
      LocalPopChoice(v_8);
    }
  else
    {
      t = t_8;
      t = term_b_9;
    }
  t = ReadFromFile_0_0(t);
  t = p_105(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_10 = NULL,x_10 = NULL,y_10 = NULL,d_11 = NULL,e_11 = NULL;
  v_10 = t;
  t = term_d_9;
  t = whoami_0_0(t);
  x_10 = t;
  t = term_e_9;
  d_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_9), x_10), term_f_9);
  e_11 = t;
  t = SSL_printnl(d_11, e_11);
  t = term_i_9;
  y_10 = t;
  t = SSL_exit(y_10);
  t = v_10;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm g_11 = NULL;
  g_11 = t;
  if(match_string(t, "-k"))
    {
      t = g_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_11;
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm h_11 = NULL,n_11 = NULL,p_11 = NULL;
  h_11 = t;
  t = SSL_string_to_int(h_11);
  n_11 = t;
  t = term_j_9;
  p_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_9, n_11);
  t = t_4(p_11, n_11, t);
  t = h_11;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_n_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_1, m_1, t_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm t_11 = NULL;
  t_11 = t;
  if(match_string(t, "-S"))
    {
      t = t_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_11;
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL;
  t = term_q_9;
  w_11 = t;
  t = term_r_9;
  x_11 = t;
  t = term_s_9;
  t = t_4(w_11, x_11, t);
  t = term_t_9;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_u_9;
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
  ATerm y_11 = NULL,d_12 = NULL,e_12 = NULL;
  y_11 = t;
  t = SSL_string_to_int(y_11);
  d_12 = t;
  t = term_q_9;
  e_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_9, d_12);
  t = t_4(e_12, d_12, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_11);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_v_9;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL;
  t = term_x_9;
  i_12 = t;
  t = term_d_9;
  j_12 = t;
  t = term_y_9;
  t = t_4(i_12, j_12, t);
  t = term_z_9;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_a_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_1, v_1, z_1, t);
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      {
        ATerm g_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_2, f_2, k_2, t);
            LocalPopChoice(h_10);
          }
        else
          {
            t = g_10;
            t = Option_3_0(l_2, n_2, o_2, t);
          }
      }
    }
  return(t);
}
static ATerm t_4 (ATerm z_46, ATerm a_47, ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL;
  t = term_b_7;
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_7, z_46, a_47);
  t = lookup_table_0_1(k_12, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_4(z_46, a_47, l_12, t);
  t = (ATerm) ATmakeAppl(sym__3, term_b_7, z_46, a_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
      t = term_d_9;
      t = e_0(t);
      s_12 = t;
      t = term_i_10;
      t_12 = t;
      t = term_j_10;
      u_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_10, term_j_10, s_12);
      t = r_4(t_12, u_12, s_12, t);
      _fail(t);
    }
  else
    {
      ATerm x_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_12 = ATgetFirst((ATermList) t);
          q_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_12;
      t = c_0(t);
      t = term_d_9;
      t = d_0(t);
      x_12 = t;
      t = (ATerm) ATinsert(CheckATermList(q_12), x_12);
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm l_13 = NULL;
  l_13 = t;
  if(match_string(t, "-o"))
    {
      t = l_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_13;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL;
  m_13 = t;
  t = term_d_7;
  n_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_7, m_13);
  t = t_4(n_13, m_13, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_13);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_2, t_2, u_2, t);
  return(t);
}
static ATerm r_4 (ATerm u_51, ATerm v_51, ATerm t_51, ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,v_13 = NULL,w_13 = NULL;
  p_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_51, v_51);
  {
    ATerm l_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_10 = ATgetArgument(t, 0);
            ATerm p_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_51, v_51);
        t = q_4(u_51, v_51, t);
        LocalPopChoice(n_10);
      }
    else
      {
        t = l_10;
        t = (ATerm) ATempty;
      }
  }
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_51, v_51, (ATerm) ATinsert(CheckATermList(q_13), t_51));
  t = lookup_table_0_1(u_51, t);
  w_13 = t;
  t = (ATerm) ATinsert(CheckATermList(q_13), t_51);
  r_13 = t;
  t = w_13;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_4(v_51, r_13, v_13, t);
  t = p_13;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
      t = term_d_9;
      t = n_0(t);
      m_14 = t;
      t = term_i_10;
      n_14 = t;
      t = term_j_10;
      o_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_10, term_j_10, m_14);
      t = r_4(n_14, o_14, m_14, t);
      _fail(t);
    }
  else
    {
      ATerm u_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_14 = ATgetFirst((ATermList) t);
          i_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_14 = ATgetFirst((ATermList) t);
          k_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_14;
      t = k_0(t);
      t = j_14;
      t = l_0(t);
      u_14 = t;
      t = (ATerm) ATinsert(CheckATermList(k_14), u_14);
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm w_14 = NULL;
  w_14 = t;
  if(match_string(t, "-i"))
    {
      t = w_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_14;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL;
  x_14 = t;
  t = term_w_8;
  y_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_8, x_14);
  t = t_4(y_14, x_14, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_14);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_2, x_2, z_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,e_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_9;
  t = whoami_0_0(t);
  z_14 = t;
  t = term_e_9;
  b_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_10), z_14);
  e_15 = t;
  t = SSL_printnl(b_15, e_15);
  t = term_i_9;
  a_15 = t;
  t = SSL_exit(a_15);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL;
  t = term_b_7;
  h_15 = t;
  t = term_s_10;
  i_15 = t;
  t = term_w_10;
  t = q_4(h_15, i_15, t);
  return(t);
}
static ATerm l_4 (ATerm c_40, ATerm d_40, ATerm t)
{
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_40, d_40);
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      t = SSL_addr(c_40, d_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,n_15 = NULL,o_15 = NULL;
  k_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_15;
      t = y_93(t);
    }
  else
    {
      ATerm t_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_15 = ATgetFirst((ATermList) t);
          o_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_15;
      t = foldr_2_0(y_93, z_93, t);
      t_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_15, t_15);
      t = z_93(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_r_9;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL;
  if(match_cons(t, sym__2))
    {
      u_3 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_4(u_3, v_3, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_15 = NULL,n_3 = NULL,o_3 = NULL;
  t = times_0_0(t);
  o_3 = t;
  t = SSL_explode_term(o_3);
  if(match_cons(t, sym__2))
    {
      ATerm b_11 = ATgetArgument(t, 0);
      n_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_3;
  t = foldr_2_0(a_3, b_3, t);
  z_15 = t;
  t = SSL_TicksToSeconds(z_15);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,x_16 = NULL;
  t_16 = t;
  if(match_cons(t, sym__2))
    {
      u_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_16;
        if((u_16 != t))
          {
            _fail(t);
          }
        t = t_16;
        LocalPopChoice(f_11);
      }
    else
      {
        t = c_11;
        t = (ATerm) ATmakeAppl(sym__2, u_16, x_16);
        {
          ATerm i_11 = t;
          int j_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_16, x_16);
              LocalPopChoice(j_11);
            }
          else
            {
              t = i_11;
              t = SSL_gtr(u_16, x_16);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, u_16, x_16);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  ATerm f_17 = NULL;
  f_17 = t;
  {
    ATerm k_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_17 = NULL,k_17 = NULL,l_17 = NULL;
        t = term_b_7;
        k_17 = t;
        t = term_q_9;
        l_17 = t;
        t = term_m_11;
        t = q_4(k_17, l_17, t);
        h_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_17, term_i_9);
        t = geq_0_0(t);
        t = f_17;
        t = p_102(t);
        LocalPopChoice(l_11);
      }
    else
      {
        t = k_11;
        t = f_17;
      }
  }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm p_17 = NULL,r_17 = NULL,t_17 = NULL,v_17 = NULL;
  t = run_time_0_0(t);
  p_17 = t;
  t = term_d_9;
  t = whoami_0_0(t);
  r_17 = t;
  t = term_e_9;
  t_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_11), p_17), term_o_11), r_17);
  v_17 = t;
  t = SSL_printnl(t_17, v_17);
  t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_11), p_17), term_o_11), r_17));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_17 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_9;
  y_17 = t;
  t = SSL_exit(y_17);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL;
  j_18 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = j_18;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          i_18 = ATgetArgument(t, 0);
          {
            ATerm i_5 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(j_18);
            i_5 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_18);
            g_1 = t;
            t = SSLsetAnnotations(g_1, i_5);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = j_18;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_105 (ATerm), ATerm t)
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_18 = NULL,c_18 = NULL;
      t = term_b_7;
      b_18 = t;
      t = term_u_11;
      c_18 = t;
      t = term_v_11;
      t = q_4(b_18, c_18, t);
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      t = fetch_1_0(f_3, t);
    }
  t = f_105(t);
  return(t);
}
static ATerm u_4 (ATerm b_55, ATerm c_55, ATerm d_55, ATerm t)
{
  ATerm l_18 = NULL;
  t = SSL_hashtable_put(d_55, b_55, c_55);
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_18);
  return(t);
}
ATerm lookup_table_0_1 (ATerm g_53, ATerm t)
{
  ATerm u_18 = NULL;
  t = table_hashtable_0_0(t);
  u_18 = t;
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_5 = NULL;
        t = u_18;
        if(match_cons(t, sym_Hashtable_1))
          {
            o_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_4(g_53, o_5, t);
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        {
          ATerm v_5 = NULL;
          t = g_53;
          t = table_create_0_0(t);
          t = u_18;
          if(match_cons(t, sym_Hashtable_1))
            {
              v_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_4(g_53, v_5, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm j_55, ATerm k_55, ATerm t)
{
  ATerm c_19 = NULL;
  t = SSL_hashtable_create(j_55, k_55);
  c_19 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_19);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,h_19 = NULL,i_19 = NULL;
  d_19 = t;
  t = term_b_12;
  h_19 = t;
  t = term_c_12;
  i_19 = t;
  t = d_19;
  t = new_hashtable_0_2(h_19, i_19, t);
  e_19 = t;
  t = d_19;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_4(d_19, e_19, f_19, t);
  t = d_19;
  return(t);
}
static ATerm n_4 (ATerm g_55, ATerm h_55, ATerm t)
{
  ATerm j_19 = NULL;
  t = SSL_hashtable_remove(h_55, g_55);
  j_19 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_19);
  return(t);
}
static ATerm o_4 (ATerm l_55, ATerm t)
{
  ATerm k_19 = NULL;
  t = SSL_hashtable_destroy(l_55);
  k_19 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_19);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm l_19 = NULL;
  t = SSL_table_hashtable();
  l_19 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_19);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
  m_19 = t;
  t = table_hashtable_0_0(t);
  n_19 = t;
  t = lookup_table_0_1(m_19, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_4(p_19, t);
  t = n_19;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_4(m_19, o_19, t);
  t = m_19;
  return(t);
}
ATerm map_1_0 (ATerm h_87 (ATerm), ATerm t)
{
  static ATerm e_20 (ATerm t)
  {
    ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
    b_20 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_20;
      }
    else
      {
        ATerm f_6 = NULL,k_6 = NULL,n_6 = NULL,k_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_20 = ATgetFirst((ATermList) t);
            d_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_20);
        f_6 = t;
        t = c_20;
        t = h_87(t);
        k_6 = t;
        t = d_20;
        t = e_20(t);
        n_6 = t;
        t = (ATerm) ATinsert(CheckATermList(n_6), k_6);
        k_1 = t;
        t = SSLsetAnnotations(k_1, f_6);
      }
    return(t);
  }
  t = e_20(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_20 = ATgetFirst((ATermList) t);
      n_20 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_20 = NULL,s_20 = NULL;
        static ATerm k_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_20)), not_null(s_20));
          return(t);
        }
        t = n_20;
        t = i_0(t);
        if(((r_20 != NULL) && (r_20 != t)))
          _fail(t);
        else
          r_20 = t;
        t = m_20;
        t = g_0(t);
        if(((s_20 != NULL) && (s_20 != t)))
          _fail(t);
        else
          s_20 = t;
        t = n_20;
        t = reverse_acc_2_0(g_0, k_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_9;
      t = i_0(t);
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,n_1 = NULL;
  a_21 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_21);
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_20);
  n_1 = t;
  t = SSLsetAnnotations(n_1, y_20);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm c_21 = NULL;
  c_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_21), term_f_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL;
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_20 = NULL,x_20 = NULL;
      t = term_b_7;
      w_20 = t;
      t = term_s_10;
      x_20 = t;
      t = term_w_10;
      t = q_4(w_20, x_20, t);
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      t = fetch_1_0(p_3, t);
    }
  t = term_m_12;
  t = echo_0_0(t);
  t = term_i_10;
  u_20 = t;
  t = term_j_10;
  v_20 = t;
  t = term_n_12;
  t = q_4(u_20, v_20, t);
  t = reverse_acc_2_0(_id, t_3, t);
  t = map_1_0(w_3, t);
  return(t);
}
ATerm fetch_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  static ATerm e_22 (ATerm t)
  {
    ATerm w_21 = NULL,z_21 = NULL,a_22 = NULL;
    w_21 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_21 = ATgetFirst((ATermList) t);
        a_22 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_12 = t;
      int r_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_6 = NULL,c_7 = NULL,x_1 = NULL;
          t = SSLgetAnnotations(w_21);
          z_6 = t;
          t = z_21;
          t = r_87(t);
          c_7 = t;
          t = (ATerm) ATinsert(CheckATermList(a_22), c_7);
          x_1 = t;
          t = SSLsetAnnotations(x_1, z_6);
          LocalPopChoice(r_12);
        }
      else
        {
          t = o_12;
          {
            ATerm l_7 = NULL,r_7 = NULL,y_1 = NULL;
            t = SSLgetAnnotations(w_21);
            l_7 = t;
            t = a_22;
            t = e_22(t);
            r_7 = t;
            t = (ATerm) ATinsert(CheckATermList(r_7), z_21);
            y_1 = t;
            t = SSLsetAnnotations(y_1, l_7);
          }
        }
    }
    return(t);
  }
  t = e_22(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL;
  k_22 = t;
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_22;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_12 = ATgetFirst((ATermList) t);
                ATerm z_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_22;
          }
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        t = (ATerm) ATinsert(ATempty, k_22);
      }
  }
  l_22 = t;
  t = term_f_7;
  m_22 = t;
  t = SSL_printnl(m_22, l_22);
  t = k_22;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL;
  t = term_b_7;
  q_22 = t;
  t = term_s_10;
  r_22 = t;
  t = term_w_10;
  t = q_4(q_22, r_22, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm v_4 (ATerm e_55, ATerm f_55, ATerm t)
{
  t = SSL_hashtable_get(f_55, e_55);
  return(t);
}
static ATerm q_4 (ATerm n_53, ATerm o_53, ATerm t)
{
  ATerm s_22 = NULL;
  t = lookup_table_0_1(n_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_4(o_53, s_22, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL;
  t = term_a_13;
  u_22 = t;
  t = term_d_9;
  v_22 = t;
  t = term_b_13;
  t = t_4(u_22, v_22, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_c_13;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
  t = term_a_13;
  y_22 = t;
  t = term_d_9;
  z_22 = t;
  t = term_b_13;
  t = t_4(y_22, z_22, t);
  t = term_d_13;
  w_22 = t;
  t = term_d_9;
  x_22 = t;
  t = term_e_13;
  t = t_4(w_22, x_22, t);
  t = term_f_13;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_g_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_3, y_3, z_3, t);
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      t = Option_3_0(m_4, s_4, w_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,m_2 = NULL;
  f_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_23 = ATgetFirst((ATermList) t);
      c_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_23);
  a_23 = t;
  t = b_23;
  t = z_58(t);
  d_23 = t;
  t = c_23;
  t = a_59(t);
  e_23 = t;
  t = (ATerm) ATinsert(CheckATermList(e_23), d_23);
  m_2 = t;
  t = SSLsetAnnotations(m_2, a_23);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_107 (ATerm), ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,r_23 = NULL,s_23 = NULL,v_2 = NULL;
  m_23 = t;
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_13;
        t = i_107(t);
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
      }
  }
  t = m_23;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_23 = ATgetFirst((ATermList) t);
      p_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_23);
  n_23 = t;
  t = term_s_10;
  s_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_10, o_23);
  t = t_4(s_23, o_23, t);
  t = p_23;
  {
    static ATerm c_24 (ATerm t)
    {
      ATerm s_13 = t;
      int t_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_23 = NULL;
              v_23 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_23;
              LocalPopChoice(x_13);
            }
          else
            {
              t = u_13;
              t = i_107(t);
              t = Cons_2_0(_id, c_24, t);
            }
          LocalPopChoice(t_13);
        }
      else
        {
          t = s_13;
          {
            ATerm y_23 = NULL,z_23 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_23 = ATgetFirst((ATermList) t);
                z_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_23), (ATerm) ATmakeAppl(sym_Undefined_1, y_23));
          }
        }
      return(t);
    }
    t = c_24(t);
  }
  r_23 = t;
  t = (ATerm) ATinsert(CheckATermList(r_23), (ATerm) ATmakeAppl(sym_Program_1, o_23));
  v_2 = t;
  t = SSLsetAnnotations(v_2, n_23);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm p_24 = NULL;
  p_24 = t;
  if(match_string(t, "--help"))
    {
      t = p_24;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_24;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_24;
        }
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL;
  t = term_u_11;
  q_24 = t;
  t = term_d_9;
  r_24 = t;
  t = term_y_13;
  t = t_4(q_24, r_24, t);
  t = term_z_13;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_a_14;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_107 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL;
  j_24 = t;
  t = term_i_10;
  k_24 = t;
  t = term_b_14;
  t = lookup_table_0_1(k_24, t);
  o_24 = t;
  t = term_j_10;
  l_24 = t;
  t = (ATerm) ATempty;
  m_24 = t;
  t = o_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_4(l_24, m_24, n_24, t);
  t = j_24;
  {
    static ATerm x_4 (ATerm t)
    {
      ATerm c_14 = t;
      int d_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_107(t);
          LocalPopChoice(d_14);
        }
      else
        {
          t = c_14;
          {
            ATerm e_14 = t;
            int f_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_4, g_5, h_5, t);
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
    t = parse_options_p__1_0(x_4, t);
  }
  {
    ATerm g_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_25 = NULL;
        c_25 = t;
        {
          ATerm p_14 = t;
          int q_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_8 = NULL;
              t = c_25;
              {
                ATerm r_14 = t;
                int s_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_8 = NULL,h_8 = NULL;
                    t = term_b_7;
                    f_8 = t;
                    t = term_u_11;
                    h_8 = t;
                    t = term_v_11;
                    t = q_4(f_8, h_8, t);
                    LocalPopChoice(s_14);
                  }
                else
                  {
                    t = r_14;
                    t = fetch_1_0(j_5, t);
                  }
              }
              t = c_25;
              t = default_system_usage_0_0(t);
              t = term_r_9;
              d_8 = t;
              t = SSL_exit(d_8);
              LocalPopChoice(q_14);
            }
          else
            {
              t = p_14;
              {
                ATerm n_8 = NULL,p_8 = NULL,q_8 = NULL;
                t = term_b_7;
                p_8 = t;
                t = term_a_13;
                q_8 = t;
                t = term_t_14;
                t = q_4(p_8, q_8, t);
                t = c_25;
                t = default_system_about_0_0(t);
                t = term_r_9;
                n_8 = t;
                t = SSL_exit(n_8);
              }
            }
        }
        LocalPopChoice(l_14);
      }
    else
      {
        t = g_14;
        {
          ATerm v_14 = t;
          int c_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
              static ATerm k_5 (ATerm t)
              {
                ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,y_2 = NULL;
                i_25 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    h_25 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(i_25);
                g_25 = t;
                t = h_25;
                if(((h_24 != NULL) && (h_24 != t)))
                  _fail(t);
                else
                  h_24 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, h_25);
                y_2 = t;
                t = SSLsetAnnotations(y_2, g_25);
                return(t);
              }
              t = fetch_1_0(k_5, t);
              t = term_e_9;
              e_25 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_24)), term_d_15);
              f_25 = t;
              t = SSL_printnl(e_25, f_25);
              t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_24)), term_d_15));
              t = default_system_usage_0_0(t);
              t = term_i_9;
              d_25 = t;
              t = SSL_exit(d_25);
              LocalPopChoice(c_15);
            }
          else
            {
              t = v_14;
            }
        }
      }
  }
  i_24 = t;
  t = term_i_10;
  t = table_destroy_0_0(t);
  t = i_24;
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
  t = parse_options_1_0(h_105, t);
  n_25 = t;
  t = term_f_15;
  t = table_create_0_0(t);
  t = term_f_15;
  o_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_15, term_g_15, n_25);
  t = lookup_table_0_1(o_25, t);
  r_25 = t;
  t = term_g_15;
  p_25 = t;
  t = r_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_4(p_25, n_25, q_25, t);
  t = n_25;
  t = j_105(t);
  {
    ATerm j_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_105, t);
        LocalPopChoice(l_15);
      }
    else
      {
        t = j_15;
        {
          ATerm m_15 = t;
          int p_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_105(t);
              t = report_success_0_0(t);
              LocalPopChoice(p_15);
            }
          else
            {
              t = m_15;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(r_15);
    }
  else
    {
      t = q_15;
      {
        ATerm s_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(u_15);
          }
        else
          {
            t = s_15;
            {
              ATerm v_15 = t;
              int w_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(n_5, p_5, q_5, t);
                  LocalPopChoice(w_15);
                }
              else
                {
                  t = v_15;
                  {
                    ATerm x_15 = t;
                    int y_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(y_15);
                      }
                    else
                      {
                        t = x_15;
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
static ATerm m_5 (ATerm t)
{
  t = input_1_0(r_5, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  t = term_j_7;
  t_25 = t;
  t = term_d_9;
  u_25 = t;
  t = term_a_16;
  t = t_4(t_25, u_25, t);
  t = term_b_16;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_c_16;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = output_1_0(s_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm w_25 = NULL;
  t = collect_all_1_0(t_5, t);
  w_25 = t;
  t = (ATerm) ATmakeAppl(sym_Module_2, term_d_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rules_1, w_25)));
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL;
  if(match_cons(t, sym_Prim_2))
    {
      x_25 = ATgetArgument(t, 0);
      y_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(x_25, y_25, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(l_5, default_usage_0_0, _id, m_5, t);
  return(t);
}

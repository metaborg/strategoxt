#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Case_4;
static Symbol sym_Case_3;
static Symbol sym_Case_2;
static Symbol sym_Alt_3;
static Symbol sym_Assign_2;
static Symbol sym_Assign_1;
static Symbol sym_Fun_2;
static Symbol sym_Str_1;
static Symbol sym_Int_1;
static Symbol sym_Real_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Op_2;
static Symbol sym_Str_1;
static Symbol sym_Real_1;
static Symbol sym_Int_1;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_Path_2;
static Symbol sym_GuardedLChoice_3;
static Symbol sym_Seq_2;
static Symbol sym_Build_1;
static Symbol sym_Match_1;
static Symbol sym_Undefined_0;
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
static Symbol sym_Hashtable_1;
static Symbol sym_Var_1;
static Symbol sym_Path_1;
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
  sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
  ATprotectSymbol(sym_Case_4);
  sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
  ATprotectSymbol(sym_Case_3);
  sym_Case_2 = ATmakeSymbol("Case", 2, ATfalse);
  ATprotectSymbol(sym_Case_2);
  sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
  ATprotectSymbol(sym_Alt_3);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
  ATprotectSymbol(sym_Assign_1);
  sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
  ATprotectSymbol(sym_Fun_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
}
static ATerm term_t_12;
static ATerm term_s_12;
static ATerm term_r_12;
static ATerm term_g_12;
static ATerm term_f_12;
static ATerm term_e_12;
static ATerm term_b_12;
static ATerm term_a_12;
static ATerm term_m_11;
static ATerm term_l_11;
static ATerm term_g_11;
static ATerm term_f_11;
static ATerm term_d_11;
static ATerm term_y_10;
static ATerm term_t_10;
static ATerm term_r_10;
static ATerm term_q_10;
static ATerm term_p_10;
static ATerm term_o_10;
static ATerm term_l_10;
static ATerm term_k_10;
static ATerm term_f_10;
static ATerm term_b_10;
static ATerm term_x_9;
static ATerm term_v_9;
static ATerm term_u_9;
static ATerm term_f_9;
static ATerm term_d_9;
static ATerm term_b_9;
static ATerm term_a_9;
static ATerm term_r_8;
static ATerm term_k_8;
static ATerm term_j_8;
static ATerm term_i_8;
static ATerm term_h_8;
static ATerm term_g_8;
static ATerm term_f_8;
static ATerm term_d_8;
static ATerm term_c_8;
static ATerm term_a_8;
static ATerm term_z_7;
static ATerm term_y_7;
static ATerm term_x_7;
static ATerm term_u_7;
static ATerm term_r_7;
static ATerm term_q_7;
static ATerm term_p_7;
static ATerm term_o_7;
static ATerm term_h_7;
static ATerm term_d_7;
static ATerm term_q_6;
static ATerm term_m_6;
static ATerm term_l_6;
static ATerm term_k_6;
static ATerm term_j_6;
static ATerm term_c_6;
static ATerm term_z_5;
static ATerm term_o_4;
static ATerm term_l_4;
static ATerm term_h_4;
static ATerm term_a_4;
static ATerm term_x_3;
static ATerm term_n_3;
static ATerm term_j_3;
static ATerm term_g_3;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_g_3));
  term_g_3 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_3));
  term_j_3 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_3));
  term_n_3 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(sym__2, term_n_3, term_x_3);
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(sym__2, term_n_3, term_l_4);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym__2, term_n_3, term_j_6);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym__2, term_n_3, term_m_6);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym__2, term_p_7, term_q_7);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym__2, term_z_7, term_a_8);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_8);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym__2, term_h_8, term_d_7);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym__2, term_n_3, term_z_7);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym__2, term_k_10, term_d_7);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym__2, term_p_10, term_d_7);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym__2, term_d_11, term_d_7);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym__3, term_p_7, term_q_7, (ATerm) ATempty);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__2, term_n_3, term_d_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym__2, term_n_3, term_k_10);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__2, term_l_4, term_d_7);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm DesugarCase_0_0 (ATerm t);
ATerm DesugarAssign_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm j_116 (ATerm), ATerm t);
static ATerm o_3 (ATerm r_58, ATerm s_58, ATerm t);
static ATerm p_3 (ATerm y_42, ATerm z_42, ATerm t);
static ATerm r_3 (ATerm m_122 (ATerm), ATerm w_278, ATerm e_43, ATerm t);
static ATerm q_3 (ATerm u_42, ATerm v_42, ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
ATerm output_1_0 (ATerm b_143 (ATerm), ATerm t);
static ATerm b_7 (ATerm i_6, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_3 (ATerm a_43, ATerm t);
static ATerm t_3 (ATerm x_56, ATerm y_56, ATerm t);
static ATerm u_3 (ATerm t_58, ATerm u_58, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm e_10 (ATerm b_8, ATerm t);
static ATerm h_10 (ATerm m_8, ATerm o_8, ATerm s_8, ATerm t);
static ATerm i_10 (ATerm e_9, ATerm g_9, ATerm h_9, ATerm t);
static ATerm v_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm c_143 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm u_122 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm a_145 (ATerm), ATerm b_145 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_4 (ATerm x_78, ATerm y_78, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_4 (ATerm d_64, ATerm e_64, ATerm c_64, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_3 (ATerm m_62, ATerm n_62, ATerm t);
ATerm foldr_2_0 (ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_139 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm f_4 (ATerm s_68, ATerm t_68, ATerm u_68, ATerm t);
ATerm lookup_table_0_1 (ATerm p_65, ATerm t);
ATerm new_hashtable_0_2 (ATerm a_69, ATerm b_69, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm y_3 (ATerm x_68, ATerm y_68, ATerm t);
static ATerm z_3 (ATerm c_69, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_123 (ATerm), ATerm t);
static ATerm g_4 (ATerm v_68, ATerm w_68, ATerm t);
static ATerm b_4 (ATerm w_65, ATerm x_65, ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_144 (ATerm), ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm parse_options_3_0 (ATerm s_144 (ATerm), ATerm t_144 (ATerm), ATerm u_144 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm v_142 (ATerm), ATerm w_142 (ATerm), ATerm x_142 (ATerm), ATerm y_142 (ATerm), ATerm z_142 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm DesugarCase_0_0 (ATerm t)
{
  ATerm k_0 = NULL,m_0 = NULL,a_1 = NULL,b_1 = NULL,k_1 = NULL,m_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,t_1 = NULL;
  if(match_cons(t, sym_Case_2))
    {
      p_1 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
      t = p_1;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_1 = ATgetFirst((ATermList) t);
          k_1 = (ATerm) ATgetNext((ATermList) t);
          t = m_1;
          if(match_cons(t, sym_Alt_3))
            {
              k_0 = ATgetArgument(t, 0);
              a_1 = ATgetArgument(t, 1);
              b_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = k_0;
          if(match_cons(t, sym_Real_1))
            {
              m_0 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, m_0)), b_1, (ATerm) ATmakeAppl(sym_Case_2, k_1, q_1));
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  m_0 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, m_0)), b_1, (ATerm) ATmakeAppl(sym_Case_2, k_1, q_1));
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      m_0 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, m_0)), b_1, (ATerm) ATmakeAppl(sym_Case_2, k_1, q_1));
                    }
                  else
                    {
                      if(match_cons(t, sym_Fun_2))
                        {
                          m_0 = ATgetArgument(t, 0);
                          {
                            ATerm b_3 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, m_0, a_1)), b_1, (ATerm) ATmakeAppl(sym_Case_2, k_1, q_1));
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = q_1;
        }
    }
  else
    {
      if(match_cons(t, sym_Case_3))
        {
          p_1 = ATgetArgument(t, 0);
          q_1 = ATgetArgument(t, 1);
          r_1 = ATgetArgument(t, 2);
          t = p_1;
          if(match_cons(t, sym_Var_1))
            {
              m_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, m_1)), (ATerm) ATmakeAppl(sym_Case_2, q_1, r_1));
        }
      else
        {
          if(match_cons(t, sym_Case_4))
            {
              ATerm d_3 = ATgetArgument(t, 0);
              q_1 = ATgetArgument(t, 1);
              r_1 = ATgetArgument(t, 2);
              t_1 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Case_3, q_1, r_1, t_1);
        }
    }
  return(t);
}
ATerm DesugarAssign_0_0 (ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,p_4 = NULL;
  if(match_cons(t, sym_Assign_1))
    {
      m_4 = ATgetArgument(t, 0);
      t = m_4;
      if(match_cons(t, sym_Var_1))
        {
          n_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_4));
    }
  else
    {
      if(match_cons(t, sym_Assign_2))
        {
          m_4 = ATgetArgument(t, 0);
          p_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_4;
      if(match_cons(t, sym_Var_1))
        {
          n_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_4), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_4)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm t)
{
  static ATerm u_4 (ATerm t);
  static ATerm u_4 (ATerm t)
  {
    ATerm e_3 = t;
    int f_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_115(t);
        t = u_4(t);
        LocalPopChoice(f_3);
      }
    else
      {
        t = e_3;
        t = k_115(t);
      }
    return(t);
  }
  t = u_4(t);
  return(t);
}
ATerm topdown_1_0 (ATerm j_116 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(j_116, t);
    return(t);
  }
  t = j_116(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm o_3 (ATerm r_58, ATerm s_58, ATerm t)
{
  ATerm v_4 = NULL;
  t = SSL_fputc(r_58, s_58);
  v_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_4);
  return(t);
}
static ATerm p_3 (ATerm y_42, ATerm z_42, ATerm t)
{
  ATerm w_4 = NULL;
  t = SSL_write_term_to_stream_text(y_42, z_42);
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_4);
  return(t);
}
static ATerm r_3 (ATerm m_122 (ATerm), ATerm w_278, ATerm e_43, ATerm t)
{
  ATerm z_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_278, term_g_3);
  t = v_3(t);
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_4, e_43);
  t = m_122(t);
  t = fclose_0_0(t);
  t = e_43;
  return(t);
}
static ATerm q_3 (ATerm u_42, ATerm v_42, ATerm t)
{
  ATerm a_5 = NULL;
  t = SSL_write_term_to_stream_baf(u_42, v_42);
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_5);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm o_5 = NULL,q_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_3 = ATgetArgument(t, 0);
      if(match_cons(h_3, sym_Stream_1))
        {
          o_5 = ATgetArgument(h_3, 0);
        }
      else
        _fail(t);
      q_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_3(o_5, q_5, t);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_3 = ATgetArgument(t, 0);
      if(match_cons(i_3, sym_Stream_1))
        {
          u_5 = ATgetArgument(i_3, 0);
        }
      else
        _fail(t);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3(u_5, v_5, t);
  r_5 = t;
  t = term_j_3;
  s_5 = t;
  t = r_5;
  if(match_cons(t, sym_Stream_1))
    {
      t_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_3, r_5);
  t = o_3(s_5, t_5, t);
  return(t);
}
ATerm output_1_0 (ATerm b_143 (ATerm), ATerm t)
{
  ATerm b_5 = NULL,e_5 = NULL;
  t = b_143(t);
  e_5 = t;
  {
    ATerm k_3 = t;
    int m_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_5 = NULL,h_5 = NULL;
        t = term_n_3;
        g_5 = t;
        t = term_x_3;
        h_5 = t;
        t = term_a_4;
        t = b_4(g_5, h_5, t);
        LocalPopChoice(m_3);
      }
    else
      {
        t = k_3;
        t = term_h_4;
      }
  }
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_5, e_5);
  {
    ATerm i_4 = t;
    int j_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_5 = NULL,l_5 = NULL;
        t = term_n_3;
        i_5 = t;
        t = term_l_4;
        l_5 = t;
        t = term_o_4;
        t = b_4(i_5, l_5, t);
        t = (ATerm) ATmakeAppl(sym__2, b_5, e_5);
        LocalPopChoice(j_4);
        if(match_cons(t, sym__2))
          {
            ATerm q_4 = ATgetArgument(t, 0);
            ATerm r_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_3(b_0, b_5, e_5, t);
      }
    else
      {
        t = i_4;
        if(match_cons(t, sym__2))
          {
            ATerm s_4 = ATgetArgument(t, 0);
            ATerm t_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_3(c_0, b_5, e_5, t);
      }
  }
  return(t);
}
static ATerm b_7 (ATerm i_6, ATerm t)
{
  t = SSL_fclose(i_6);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL;
  s_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_6 = ATgetArgument(t, 0);
      {
        ATerm x_4 = t;
        int y_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_6);
            LocalPopChoice(y_4);
          }
        else
          {
            t = x_4;
            t = b_7(s_6, t);
          }
      }
    }
  else
    {
      t = b_7(s_6, t);
    }
  return(t);
}
static ATerm s_3 (ATerm a_43, ATerm t)
{
  t = SSL_read_term_from_stream(a_43);
  return(t);
}
static ATerm t_3 (ATerm x_56, ATerm y_56, ATerm t)
{
  t = SSL_strcat(x_56, y_56);
  return(t);
}
static ATerm u_3 (ATerm t_58, ATerm u_58, ATerm t)
{
  ATerm c_7 = NULL;
  t = SSL_fopen(t_58, u_58);
  c_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_7);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_7 = NULL;
  t = SSL_stdin_stream();
  f_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_7);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_7 = NULL;
  t = SSL_stdout_stream();
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_7);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_7 = NULL;
  t = SSL_stderr_stream();
  i_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_7);
  return(t);
}
static ATerm e_10 (ATerm b_8, ATerm t)
{
  ATerm e_8 = NULL;
  t = SSL_explode_term(b_8);
  if(match_cons(t, sym__2))
    {
      ATerm c_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_5) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_5 = ATgetArgument(t, 1);
        if(((ATgetType(d_5) == AT_LIST) && !(ATisEmpty(d_5))))
          {
            e_8 = ATgetFirst((ATermList) d_5);
            {
              ATerm j_5 = (ATerm) ATgetNext((ATermList) d_5);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_8;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_8;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_8;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_8;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm h_10 (ATerm m_8, ATerm o_8, ATerm s_8, ATerm t)
{
  ATerm u_8 = NULL,w_8 = NULL,x_8 = NULL,c_9 = NULL,n_0 = NULL;
  t = SSLgetAnnotations(s_8);
  x_8 = t;
  t = m_8;
  if(match_cons(t, sym_Path_1))
    {
      c_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_9, o_8);
  n_0 = t;
  t = SSLsetAnnotations(n_0, x_8);
  if(match_cons(t, sym__2))
    {
      u_8 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(u_8, w_8, t);
  return(t);
}
static ATerm i_10 (ATerm e_9, ATerm g_9, ATerm h_9, ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,w_9 = NULL,y_1 = NULL;
  t = SSLgetAnnotations(h_9);
  p_9 = t;
  t = SSL_is_string(e_9);
  w_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_9, g_9);
  y_1 = t;
  t = SSLsetAnnotations(y_1, p_9);
  if(match_cons(t, sym__2))
    {
      n_9 = ATgetArgument(t, 0);
      o_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(n_9, o_9, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm y_9 = NULL,c_10 = NULL,d_10 = NULL;
  y_9 = t;
  if(match_cons(t, sym__2))
    {
      c_10 = ATgetArgument(t, 0);
      d_10 = ATgetArgument(t, 1);
      {
        ATerm k_5 = t;
        int n_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_10(y_9, t);
            LocalPopChoice(n_5);
          }
        else
          {
            t = k_5;
            {
              ATerm p_5 = t;
              int w_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_10(c_10, d_10, y_9, t);
                  LocalPopChoice(w_5);
                }
              else
                {
                  t = p_5;
                  t = i_10(c_10, d_10, y_9, t);
                }
            }
          }
      }
    }
  else
    {
      t = e_10(y_9, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL,s_10 = NULL,e_11 = NULL;
  e_11 = t;
  {
    ATerm x_5 = t;
    int y_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_11, term_z_5);
        t = v_3(t);
        LocalPopChoice(y_5);
      }
    else
      {
        t = x_5;
        {
          ATerm t_0 = NULL,u_0 = NULL;
          t = term_c_6;
          u_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_6, e_11);
          t = t_3(u_0, e_11, t);
          t_0 = t;
          t = SSL_perror(t_0);
          _fail(t);
        }
      }
  }
  n_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_3(s_10, t);
  m_10 = t;
  t = n_10;
  t = fclose_0_0(t);
  t = m_10;
  return(t);
}
ATerm input_1_0 (ATerm c_143 (ATerm), ATerm t)
{
  ATerm e_6 = t;
  int g_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_11 = NULL,i_11 = NULL;
      t = term_n_3;
      h_11 = t;
      t = term_j_6;
      i_11 = t;
      t = term_k_6;
      t = b_4(h_11, i_11, t);
      LocalPopChoice(g_6);
    }
  else
    {
      t = e_6;
      t = term_l_6;
    }
  t = ReadFromFile_0_0(t);
  t = c_143(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL;
  t = term_n_3;
  j_11 = t;
  t = term_m_6;
  k_11 = t;
  t = term_q_6;
  t = b_4(j_11, k_11, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
  w_11 = t;
  {
    ATerm t_6 = t;
    int v_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_11;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_6 = ATgetFirst((ATermList) t);
                ATerm z_6 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_11;
          }
        LocalPopChoice(v_6);
      }
    else
      {
        t = t_6;
        t = (ATerm) ATinsert(ATempty, w_11);
      }
  }
  x_11 = t;
  t = term_h_4;
  y_11 = t;
  t = SSL_printnl(y_11, x_11);
  t = w_11;
  return(t);
}
ATerm map_1_0 (ATerm u_122 (ATerm), ATerm t)
{
  static ATerm y_12 (ATerm t);
  static ATerm y_12 (ATerm t)
  {
    ATerm u_12 = NULL,v_12 = NULL,x_12 = NULL;
    u_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_12;
      }
    else
      {
        ATerm c_1 = NULL,f_1 = NULL,g_1 = NULL,d_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_12 = ATgetFirst((ATermList) t);
            x_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_12);
        c_1 = t;
        t = v_12;
        t = u_122(t);
        f_1 = t;
        t = x_12;
        t = y_12(t);
        g_1 = t;
        t = (ATerm) ATinsert(CheckATermList(g_1), f_1);
        d_6 = t;
        t = SSLsetAnnotations(d_6, c_1);
      }
    return(t);
  }
  t = y_12(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm b_13 = NULL,e_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_13 = ATgetFirst((ATermList) t);
      e_13 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_13 = NULL,j_13 = NULL;
        static ATerm e_0 (ATerm t);
        static ATerm e_0 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_13)), not_null(j_13));
          return(t);
        }
        t = e_13;
        t = r_0(t);
        if(((i_13 != NULL) && (i_13 != t)))
          _fail(t);
        else
          i_13 = t;
        t = b_13;
        t = p_0(t);
        if(((j_13 != NULL) && (j_13 != t)))
          _fail(t);
        else
          j_13 = t;
        t = e_13;
        t = reverse_acc_2_0(p_0, e_0, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_7;
      t = r_0(t);
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm v_13 = NULL,y_13 = NULL,z_13 = NULL,h_6 = NULL;
  z_13 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_13);
  v_13 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_13);
  h_6 = t;
  t = SSLsetAnnotations(h_6, v_13);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm f_14 = NULL;
  f_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_14), term_h_7);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm a_145 (ATerm), ATerm b_145 (ATerm), ATerm t)
{
  ATerm p_13 = NULL,s_13 = NULL;
  ATerm k_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_13 = NULL,u_13 = NULL;
      t = term_n_3;
      t_13 = t;
      t = term_m_6;
      u_13 = t;
      t = term_q_6;
      t = b_4(t_13, u_13, t);
      LocalPopChoice(l_7);
    }
  else
    {
      t = k_7;
      t = fetch_1_0(h_0, t);
    }
  {
    ATerm m_7 = t;
    int n_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_145(t);
        t = echo_0_0(t);
        LocalPopChoice(n_7);
      }
    else
      {
        t = m_7;
      }
  }
  t = term_o_7;
  t = echo_0_0(t);
  t = term_p_7;
  p_13 = t;
  t = term_q_7;
  s_13 = t;
  t = term_r_7;
  t = b_4(p_13, s_13, t);
  t = reverse_acc_2_0(_id, i_0, t);
  t = map_1_0(q_0, t);
  {
    ATerm s_7 = t;
    int t_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_14 = NULL;
        t = b_145(t);
        i_14 = t;
        t = (ATerm) ATinsert(CheckATermList(i_14), term_u_7);
        t = echo_0_0(t);
        LocalPopChoice(t_7);
      }
    else
      {
        t = s_7;
      }
  }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm p_14 = NULL,r_14 = NULL,s_14 = NULL,u_6 = NULL;
  s_14 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_14);
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_14);
  u_6 = t;
  t = SSLsetAnnotations(u_6, p_14);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_14 = NULL;
  m_14 = t;
  {
    ATerm v_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_14 = NULL,o_14 = NULL;
        t = term_n_3;
        n_14 = t;
        t = term_m_6;
        o_14 = t;
        t = term_q_6;
        t = b_4(n_14, o_14, t);
        LocalPopChoice(w_7);
      }
    else
      {
        t = v_7;
        t = fetch_1_0(s_0, t);
      }
  }
  t = m_14;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm y_14 = NULL;
  y_14 = t;
  if(match_string(t, "-k"))
    {
      t = y_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_14;
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm b_15 = NULL,e_15 = NULL,f_15 = NULL;
  b_15 = t;
  t = SSL_string_to_int(b_15);
  e_15 = t;
  t = term_x_7;
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_7, e_15);
  t = e_4(f_15, e_15, t);
  t = b_15;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_y_7;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_0, w_0, x_0, t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm k_15 = NULL;
  k_15 = t;
  if(match_string(t, "-S"))
    {
      t = k_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_15;
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm l_15 = NULL,p_15 = NULL;
  t = term_z_7;
  l_15 = t;
  t = term_a_8;
  p_15 = t;
  t = term_c_8;
  t = e_4(l_15, p_15, t);
  t = term_d_8;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_f_8;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
  q_15 = t;
  t = SSL_string_to_int(q_15);
  r_15 = t;
  t = term_z_7;
  s_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_7, r_15);
  t = e_4(s_15, r_15, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_15);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_g_8;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL;
  t = term_h_8;
  v_15 = t;
  t = term_d_7;
  w_15 = t;
  t = term_i_8;
  t = e_4(v_15, w_15, t);
  t = term_j_8;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_k_8;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_0, z_0, d_1, t);
      LocalPopChoice(n_8);
    }
  else
    {
      t = l_8;
      {
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_1, h_1, i_1, t);
            LocalPopChoice(q_8);
          }
        else
          {
            t = p_8;
            t = Option_3_0(j_1, l_1, n_1, t);
          }
      }
    }
  return(t);
}
static ATerm e_4 (ATerm x_78, ATerm y_78, ATerm t)
{
  ATerm x_15 = NULL,a_16 = NULL;
  t = term_n_3;
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_3, x_78, y_78);
  t = lookup_table_0_1(x_15, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_4(x_78, y_78, a_16, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_3, x_78, y_78);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm g_16 = NULL,j_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
      t = term_d_7;
      t = g_0(t);
      k_16 = t;
      t = term_p_7;
      l_16 = t;
      t = term_q_7;
      m_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_7, term_q_7, k_16);
      t = c_4(l_16, m_16, k_16, t);
      _fail(t);
    }
  else
    {
      ATerm p_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_16 = ATgetFirst((ATermList) t);
          j_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_16;
      t = d_0(t);
      t = term_d_7;
      t = f_0(t);
      p_16 = t;
      t = (ATerm) ATinsert(CheckATermList(j_16), p_16);
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm r_16 = NULL;
  r_16 = t;
  if(match_string(t, "-o"))
    {
      t = r_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_16;
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL;
  s_16 = t;
  t = term_x_3;
  t_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_3, s_16);
  t = e_4(t_16, s_16, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_16);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_r_8;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_1, v_1, w_1, t);
  return(t);
}
static ATerm c_4 (ATerm d_64, ATerm e_64, ATerm c_64, ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
  v_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_64, e_64);
  {
    ATerm t_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_8 = ATgetArgument(t, 0);
            ATerm z_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_64, e_64);
        t = b_4(d_64, e_64, t);
        LocalPopChoice(v_8);
      }
    else
      {
        t = t_8;
        t = (ATerm) ATempty;
      }
  }
  w_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_64, e_64, (ATerm) ATinsert(CheckATermList(w_16), c_64));
  t = lookup_table_0_1(d_64, t);
  z_16 = t;
  t = (ATerm) ATinsert(CheckATermList(w_16), c_64);
  x_16 = t;
  t = z_16;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_4(e_64, x_16, y_16, t);
  t = v_16;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
      t = term_d_7;
      t = o_0(t);
      k_17 = t;
      t = term_p_7;
      l_17 = t;
      t = term_q_7;
      m_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_7, term_q_7, k_17);
      t = c_4(l_17, m_17, k_17, t);
      _fail(t);
    }
  else
    {
      ATerm q_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_17 = ATgetFirst((ATermList) t);
          h_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_17;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_17 = ATgetFirst((ATermList) t);
          j_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_17;
      t = j_0(t);
      t = i_17;
      t = l_0(t);
      q_17 = t;
      t = (ATerm) ATinsert(CheckATermList(j_17), q_17);
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm s_17 = NULL;
  s_17 = t;
  if(match_string(t, "-i"))
    {
      t = s_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_17;
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL;
  t_17 = t;
  t = term_j_6;
  u_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_6, t_17);
  t = e_4(u_17, t_17, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_17);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_a_9;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_1, z_1, a_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_7;
  t = whoami_0_0(t);
  v_17 = t;
  t = term_b_9;
  x_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_9), v_17);
  y_17 = t;
  t = SSL_printnl(x_17, y_17);
  t = term_f_9;
  w_17 = t;
  t = SSL_exit(w_17);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL;
  t = term_n_3;
  b_18 = t;
  t = term_m_6;
  c_18 = t;
  t = term_q_6;
  t = b_4(b_18, c_18, t);
  return(t);
}
static ATerm w_3 (ATerm m_62, ATerm n_62, ATerm t)
{
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_62, n_62);
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      t = SSL_addr(m_62, n_62);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  e_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_18;
      t = r_129(t);
    }
  else
    {
      ATerm j_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_18 = ATgetFirst((ATermList) t);
          g_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_18;
      t = foldr_2_0(r_129, s_129, t);
      j_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_18, j_18);
      t = s_129(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_a_8;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm i_2 = NULL,k_2 = NULL;
  if(match_cons(t, sym__2))
    {
      i_2 = ATgetArgument(t, 0);
      k_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3(i_2, k_2, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_18 = NULL,o_1 = NULL,s_1 = NULL;
  t = times_0_0(t);
  s_1 = t;
  t = SSL_explode_term(s_1);
  if(match_cons(t, sym__2))
    {
      ATerm k_9 = ATgetArgument(t, 0);
      o_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_1;
  t = foldr_2_0(b_2, c_2, t);
  m_18 = t;
  t = SSL_TicksToSeconds(m_18);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
  x_18 = t;
  if(match_cons(t, sym__2))
    {
      y_18 = ATgetArgument(t, 0);
      z_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_18;
        if((y_18 != t))
          {
            _fail(t);
          }
        t = x_18;
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        t = (ATerm) ATmakeAppl(sym__2, y_18, z_18);
        {
          ATerm q_9 = t;
          int r_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_18, z_18);
              LocalPopChoice(r_9);
            }
          else
            {
              t = q_9;
              t = SSL_gtr(y_18, z_18);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, y_18, z_18);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_139 (ATerm), ATerm t)
{
  ATerm d_19 = NULL;
  d_19 = t;
  {
    ATerm s_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
        t = term_n_3;
        g_19 = t;
        t = term_z_7;
        h_19 = t;
        t = term_u_9;
        t = b_4(g_19, h_19, t);
        f_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_19, term_f_9);
        t = geq_0_0(t);
        t = d_19;
        t = x_139(t);
        LocalPopChoice(t_9);
      }
    else
      {
        t = s_9;
        t = d_19;
      }
  }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,m_19 = NULL,n_19 = NULL;
  t = run_time_0_0(t);
  j_19 = t;
  t = term_d_7;
  t = whoami_0_0(t);
  k_19 = t;
  t = term_b_9;
  m_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_9), j_19), term_v_9), k_19);
  n_19 = t;
  t = SSL_printnl(m_19, n_19);
  t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_9), j_19), term_v_9), k_19));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_19 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_8;
  o_19 = t;
  t = SSL_exit(o_19);
  return(t);
}
static ATerm f_4 (ATerm s_68, ATerm t_68, ATerm u_68, ATerm t)
{
  ATerm p_19 = NULL;
  t = SSL_hashtable_put(u_68, s_68, t_68);
  p_19 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_19);
  return(t);
}
ATerm lookup_table_0_1 (ATerm p_65, ATerm t)
{
  ATerm y_19 = NULL;
  t = table_hashtable_0_0(t);
  y_19 = t;
  {
    ATerm z_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_3 = NULL;
        t = y_19;
        if(match_cons(t, sym_Hashtable_1))
          {
            c_3 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_4(p_65, c_3, t);
        LocalPopChoice(a_10);
      }
    else
      {
        t = z_9;
        {
          ATerm l_3 = NULL;
          t = p_65;
          t = table_create_0_0(t);
          t = y_19;
          if(match_cons(t, sym_Hashtable_1))
            {
              l_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_4(p_65, l_3, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm a_69, ATerm b_69, ATerm t)
{
  ATerm b_20 = NULL;
  t = SSL_hashtable_create(a_69, b_69);
  b_20 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_20);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,g_20 = NULL,h_20 = NULL;
  c_20 = t;
  t = term_b_10;
  g_20 = t;
  t = term_f_10;
  h_20 = t;
  t = c_20;
  t = new_hashtable_0_2(g_20, h_20, t);
  d_20 = t;
  t = c_20;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_4(c_20, d_20, e_20, t);
  t = c_20;
  return(t);
}
static ATerm y_3 (ATerm x_68, ATerm y_68, ATerm t)
{
  ATerm i_20 = NULL;
  t = SSL_hashtable_remove(y_68, x_68);
  i_20 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_20);
  return(t);
}
static ATerm z_3 (ATerm c_69, ATerm t)
{
  ATerm j_20 = NULL;
  t = SSL_hashtable_destroy(c_69);
  j_20 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_20);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm k_20 = NULL;
  t = SSL_table_hashtable();
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_20);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
  l_20 = t;
  t = table_hashtable_0_0(t);
  m_20 = t;
  t = lookup_table_0_1(l_20, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_3(o_20, t);
  t = m_20;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_3(l_20, n_20, t);
  t = l_20;
  return(t);
}
ATerm fetch_1_0 (ATerm c_123 (ATerm), ATerm t)
{
  static ATerm l_21 (ATerm t);
  static ATerm l_21 (ATerm t)
  {
    ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
    i_21 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_21 = ATgetFirst((ATermList) t);
        k_21 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_10 = t;
      int j_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_4 = NULL,k_4 = NULL,w_6 = NULL;
          t = SSLgetAnnotations(i_21);
          d_4 = t;
          t = j_21;
          t = c_123(t);
          k_4 = t;
          t = (ATerm) ATinsert(CheckATermList(k_21), k_4);
          w_6 = t;
          t = SSLsetAnnotations(w_6, d_4);
          LocalPopChoice(j_10);
        }
      else
        {
          t = g_10;
          {
            ATerm f_5 = NULL,m_5 = NULL,x_6 = NULL;
            t = SSLgetAnnotations(i_21);
            f_5 = t;
            t = k_21;
            t = l_21(t);
            m_5 = t;
            t = (ATerm) ATinsert(CheckATermList(m_5), j_21);
            x_6 = t;
            t = SSLsetAnnotations(x_6, f_5);
          }
        }
    }
    return(t);
  }
  t = l_21(t);
  return(t);
}
static ATerm g_4 (ATerm v_68, ATerm w_68, ATerm t)
{
  t = SSL_hashtable_get(w_68, v_68);
  return(t);
}
static ATerm b_4 (ATerm w_65, ATerm x_65, ATerm t)
{
  ATerm o_21 = NULL;
  t = lookup_table_0_1(w_65, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_4(x_65, o_21, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL;
  t = term_k_10;
  q_21 = t;
  t = term_d_7;
  r_21 = t;
  t = term_l_10;
  t = e_4(q_21, r_21, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_o_10;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL;
  t = term_k_10;
  u_21 = t;
  t = term_d_7;
  v_21 = t;
  t = term_l_10;
  t = e_4(u_21, v_21, t);
  t = term_p_10;
  s_21 = t;
  t = term_d_7;
  t_21 = t;
  t = term_q_10;
  t = e_4(s_21, t_21, t);
  t = term_r_10;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_2, f_2, g_2, t);
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      t = Option_3_0(h_2, j_2, l_2, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_88 (ATerm), ATerm u_88 (ATerm), ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,a_7 = NULL;
  b_22 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_21 = ATgetFirst((ATermList) t);
      y_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_22);
  w_21 = t;
  t = x_21;
  t = t_88(t);
  z_21 = t;
  t = y_21;
  t = u_88(t);
  a_22 = t;
  t = (ATerm) ATinsert(CheckATermList(a_22), z_21);
  a_7 = t;
  t = SSLsetAnnotations(a_7, w_21);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_144 (ATerm), ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,l_22 = NULL,m_22 = NULL,e_7 = NULL;
  g_22 = t;
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_10;
        t = v_144(t);
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
      }
  }
  t = g_22;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_22 = ATgetFirst((ATermList) t);
      j_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_22);
  h_22 = t;
  t = term_m_6;
  m_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_6, i_22);
  t = e_4(m_22, i_22, t);
  t = j_22;
  {
    static ATerm w_22 (ATerm t);
    static ATerm w_22 (ATerm t)
    {
      ATerm z_10 = t;
      int a_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_11 = t;
          int c_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_22 = NULL;
              p_22 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_22;
              LocalPopChoice(c_11);
            }
          else
            {
              t = b_11;
              t = v_144(t);
              t = Cons_2_0(_id, w_22, t);
            }
          LocalPopChoice(a_11);
        }
      else
        {
          t = z_10;
          {
            ATerm s_22 = NULL,t_22 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_22 = ATgetFirst((ATermList) t);
                t_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(t_22), (ATerm) ATmakeAppl(sym_Undefined_1, s_22));
          }
        }
      return(t);
    }
    t = w_22(t);
  }
  l_22 = t;
  t = (ATerm) ATinsert(CheckATermList(l_22), (ATerm) ATmakeAppl(sym_Program_1, i_22));
  e_7 = t;
  t = SSLsetAnnotations(e_7, h_22);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm j_23 = NULL;
  j_23 = t;
  if(match_string(t, "--help"))
    {
      t = j_23;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_23;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_23;
        }
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL;
  t = term_d_11;
  k_23 = t;
  t = term_d_7;
  l_23 = t;
  t = term_f_11;
  t = e_4(k_23, l_23, t);
  t = term_g_11;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_l_11;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm s_144 (ATerm), ATerm t_144 (ATerm), ATerm u_144 (ATerm), ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL;
  d_23 = t;
  t = term_p_7;
  e_23 = t;
  t = term_m_11;
  t = lookup_table_0_1(e_23, t);
  i_23 = t;
  t = term_q_7;
  f_23 = t;
  t = (ATerm) ATempty;
  g_23 = t;
  t = i_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_4(f_23, g_23, h_23, t);
  t = d_23;
  {
    static ATerm m_2 (ATerm t);
    static ATerm m_2 (ATerm t)
    {
      ATerm n_11 = t;
      int o_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_144(t);
          LocalPopChoice(o_11);
        }
      else
        {
          t = n_11;
          {
            ATerm p_11 = t;
            int q_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_2, o_2, p_2, t);
                LocalPopChoice(q_11);
              }
            else
              {
                t = p_11;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_2, t);
  }
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_24 = NULL;
        x_24 = t;
        {
          ATerm t_11 = t;
          int u_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_6 = NULL;
              t = x_24;
              {
                ATerm v_11 = t;
                int z_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_6 = NULL,f_6 = NULL;
                    t = term_n_3;
                    b_6 = t;
                    t = term_d_11;
                    f_6 = t;
                    t = term_a_12;
                    t = b_4(b_6, f_6, t);
                    LocalPopChoice(z_11);
                  }
                else
                  {
                    t = v_11;
                    t = fetch_1_0(q_2, t);
                  }
              }
              t = x_24;
              t = t_144(t);
              t = term_a_8;
              a_6 = t;
              t = SSL_exit(a_6);
              LocalPopChoice(u_11);
            }
          else
            {
              t = t_11;
              {
                ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL;
                t = term_n_3;
                o_6 = t;
                t = term_k_10;
                p_6 = t;
                t = term_b_12;
                t = b_4(o_6, p_6, t);
                t = x_24;
                t = u_144(t);
                t = term_a_8;
                n_6 = t;
                t = SSL_exit(n_6);
              }
            }
        }
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        {
          ATerm c_12 = t;
          int d_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
              static ATerm r_2 (ATerm t);
              static ATerm r_2 (ATerm t)
              {
                ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,j_7 = NULL;
                d_25 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_25 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_25);
                b_25 = t;
                t = c_25;
                if(((b_23 != NULL) && (b_23 != t)))
                  _fail(t);
                else
                  b_23 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_25);
                j_7 = t;
                t = SSLsetAnnotations(j_7, b_25);
                return(t);
              }
              t = fetch_1_0(r_2, t);
              t = term_b_9;
              z_24 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_23)), term_e_12);
              a_25 = t;
              t = SSL_printnl(z_24, a_25);
              t = (ATerm) ATmakeAppl(sym__2, term_b_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_23)), term_e_12));
              t = t_144(t);
              t = term_f_9;
              y_24 = t;
              t = SSL_exit(y_24);
              LocalPopChoice(d_12);
            }
          else
            {
              t = c_12;
            }
        }
      }
  }
  c_23 = t;
  t = term_p_7;
  t = table_destroy_0_0(t);
  t = c_23;
  return(t);
}
ATerm option_wrap_5_0 (ATerm v_142 (ATerm), ATerm w_142 (ATerm), ATerm x_142 (ATerm), ATerm y_142 (ATerm), ATerm z_142 (ATerm), ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  t = parse_options_3_0(v_142, w_142, x_142, t);
  i_25 = t;
  t = term_f_12;
  t = table_create_0_0(t);
  t = term_f_12;
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_12, term_g_12, i_25);
  t = lookup_table_0_1(j_25, t);
  m_25 = t;
  t = term_g_12;
  k_25 = t;
  t = m_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_4(k_25, i_25, l_25, t);
  t = i_25;
  t = y_142(t);
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_142(t);
        t = report_success_0_0(t);
        LocalPopChoice(i_12);
      }
    else
      {
        t = h_12;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      {
        ATerm l_12 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(m_12);
          }
        else
          {
            t = l_12;
            {
              ATerm n_12 = t;
              int o_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(u_2, v_2, w_2, t);
                  LocalPopChoice(o_12);
                }
              else
                {
                  t = n_12;
                  {
                    ATerm p_12 = t;
                    int q_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(q_12);
                      }
                    else
                      {
                        t = p_12;
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
static ATerm t_2 (ATerm t)
{
  t = input_1_0(x_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL;
  t = term_l_4;
  p_25 = t;
  t = term_d_7;
  q_25 = t;
  t = term_r_12;
  t = e_4(p_25, q_25, t);
  t = term_s_12;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_t_12;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = output_1_0(y_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = topdown_1_0(z_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = repeat_2_0(a_3, _id, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm w_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DesugarAssign_0_0(t);
      LocalPopChoice(z_12);
    }
  else
    {
      t = w_12;
      t = DesugarCase_0_0(t);
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(s_2, default_system_usage_0_0, default_system_about_0_0, _id, t_2, t);
  return(t);
}

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
static ATerm term_z_12;
static ATerm term_u_12;
static ATerm term_t_12;
static ATerm term_i_12;
static ATerm term_h_12;
static ATerm term_g_12;
static ATerm term_d_12;
static ATerm term_c_12;
static ATerm term_o_11;
static ATerm term_n_11;
static ATerm term_m_11;
static ATerm term_h_11;
static ATerm term_g_11;
static ATerm term_a_11;
static ATerm term_v_10;
static ATerm term_u_10;
static ATerm term_t_10;
static ATerm term_s_10;
static ATerm term_r_10;
static ATerm term_n_10;
static ATerm term_m_10;
static ATerm term_i_10;
static ATerm term_e_10;
static ATerm term_z_9;
static ATerm term_x_9;
static ATerm term_w_9;
static ATerm term_l_9;
static ATerm term_i_9;
static ATerm term_e_9;
static ATerm term_d_9;
static ATerm term_u_8;
static ATerm term_m_8;
static ATerm term_l_8;
static ATerm term_k_8;
static ATerm term_j_8;
static ATerm term_i_8;
static ATerm term_h_8;
static ATerm term_g_8;
static ATerm term_f_8;
static ATerm term_d_8;
static ATerm term_b_8;
static ATerm term_a_8;
static ATerm term_z_7;
static ATerm term_s_7;
static ATerm term_r_7;
static ATerm term_q_7;
static ATerm term_p_7;
static ATerm term_o_7;
static ATerm term_g_7;
static ATerm term_c_7;
static ATerm term_r_6;
static ATerm term_o_6;
static ATerm term_l_6;
static ATerm term_j_6;
static ATerm term_i_6;
static ATerm term_d_6;
static ATerm term_z_5;
static ATerm term_m_4;
static ATerm term_l_4;
static ATerm term_e_4;
static ATerm term_y_3;
static ATerm term_o_3;
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
  ATprotect(&(term_o_3));
  term_o_3 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_3));
  term_y_3 = (ATerm) ATmakeAppl(sym__2, term_n_3, term_o_3);
  ATprotect(&(term_e_4));
  term_e_4 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(sym__2, term_n_3, term_l_4);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym__2, term_n_3, term_i_6);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym__2, term_n_3, term_o_6);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym__2, term_p_7, term_q_7);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_d_8);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_8);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_c_7);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym__2, term_n_3, term_b_8);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_c_7);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym__2, term_s_10, term_c_7);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_c_7);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym__3, term_p_7, term_q_7, (ATerm) ATempty);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym__2, term_n_3, term_g_11);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__2, term_n_3, term_m_10);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_l_4, term_c_7);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm DesugarCase_0_0 (ATerm t);
ATerm DesugarAssign_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm d_117 (ATerm), ATerm t);
static ATerm p_3 (ATerm u_58, ATerm v_58, ATerm t);
static ATerm q_3 (ATerm y_42, ATerm z_42, ATerm t);
static ATerm s_3 (ATerm g_123 (ATerm), ATerm z_279, ATerm e_43, ATerm t);
static ATerm r_3 (ATerm u_42, ATerm v_42, ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
ATerm output_1_0 (ATerm a_144 (ATerm), ATerm t);
static ATerm x_6 (ATerm k_6, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm t_3 (ATerm a_43, ATerm t);
static ATerm u_3 (ATerm a_57, ATerm b_57, ATerm t);
static ATerm v_3 (ATerm w_58, ATerm x_58, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm g_10 (ATerm c_8, ATerm t);
static ATerm h_10 (ATerm n_8, ATerm o_8, ATerm r_8, ATerm t);
static ATerm k_10 (ATerm f_9, ATerm g_9, ATerm h_9, ATerm t);
static ATerm w_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm b_144 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm o_123 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm z_145 (ATerm), ATerm a_146 (ATerm), ATerm t);
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
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm f_4 (ATerm b_79, ATerm c_79, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_4 (ATerm g_64, ATerm h_64, ATerm f_64, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_3 (ATerm p_62, ATerm q_62, ATerm t);
ATerm foldr_2_0 (ATerm l_130 (ATerm), ATerm m_130 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_140 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm g_4 (ATerm v_68, ATerm w_68, ATerm x_68, ATerm t);
ATerm lookup_table_0_1 (ATerm s_65, ATerm t);
ATerm new_hashtable_0_2 (ATerm d_69, ATerm e_69, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm z_3 (ATerm a_69, ATerm b_69, ATerm t);
static ATerm a_4 (ATerm f_69, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_123 (ATerm), ATerm t);
static ATerm h_4 (ATerm y_68, ATerm z_68, ATerm t);
static ATerm c_4 (ATerm z_65, ATerm a_66, ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_145 (ATerm), ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm parse_options_3_0 (ATerm r_145 (ATerm), ATerm s_145 (ATerm), ATerm t_145 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm u_143 (ATerm), ATerm v_143 (ATerm), ATerm w_143 (ATerm), ATerm x_143 (ATerm), ATerm y_143 (ATerm), ATerm t);
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
  ATerm k_0 = NULL,m_0 = NULL,b_1 = NULL,c_1 = NULL,h_1 = NULL,l_1 = NULL,o_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL;
  if(match_cons(t, sym_Case_2))
    {
      o_1 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
      t = o_1;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_1 = ATgetFirst((ATermList) t);
          h_1 = (ATerm) ATgetNext((ATermList) t);
          t = l_1;
          if(match_cons(t, sym_Alt_3))
            {
              k_0 = ATgetArgument(t, 0);
              b_1 = ATgetArgument(t, 1);
              c_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = k_0;
          if(match_cons(t, sym_Real_1))
            {
              m_0 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, m_0)), c_1, (ATerm) ATmakeAppl(sym_Case_2, h_1, q_1));
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  m_0 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, m_0)), c_1, (ATerm) ATmakeAppl(sym_Case_2, h_1, q_1));
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      m_0 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, m_0)), c_1, (ATerm) ATmakeAppl(sym_Case_2, h_1, q_1));
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
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, m_0, b_1)), c_1, (ATerm) ATmakeAppl(sym_Case_2, h_1, q_1));
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
          o_1 = ATgetArgument(t, 0);
          q_1 = ATgetArgument(t, 1);
          r_1 = ATgetArgument(t, 2);
          t = o_1;
          if(match_cons(t, sym_Var_1))
            {
              l_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, l_1)), (ATerm) ATmakeAppl(sym_Case_2, q_1, r_1));
        }
      else
        {
          if(match_cons(t, sym_Case_4))
            {
              ATerm c_3 = ATgetArgument(t, 0);
              q_1 = ATgetArgument(t, 1);
              r_1 = ATgetArgument(t, 2);
              s_1 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Case_3, q_1, r_1, s_1);
        }
    }
  return(t);
}
ATerm DesugarAssign_0_0 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,q_4 = NULL;
  if(match_cons(t, sym_Assign_1))
    {
      n_4 = ATgetArgument(t, 0);
      t = n_4;
      if(match_cons(t, sym_Var_1))
        {
          o_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_4));
    }
  else
    {
      if(match_cons(t, sym_Assign_2))
        {
          n_4 = ATgetArgument(t, 0);
          q_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_4;
      if(match_cons(t, sym_Var_1))
        {
          o_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_4), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_4)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm t)
{
  static ATerm u_4 (ATerm t);
  static ATerm u_4 (ATerm t)
  {
    ATerm e_3 = t;
    int f_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_116(t);
        t = u_4(t);
        LocalPopChoice(f_3);
      }
    else
      {
        t = e_3;
        t = e_116(t);
      }
    return(t);
  }
  t = u_4(t);
  return(t);
}
ATerm topdown_1_0 (ATerm d_117 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(d_117, t);
    return(t);
  }
  t = d_117(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm p_3 (ATerm u_58, ATerm v_58, ATerm t)
{
  ATerm v_4 = NULL;
  t = SSL_fputc(u_58, v_58);
  v_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_4);
  return(t);
}
static ATerm q_3 (ATerm y_42, ATerm z_42, ATerm t)
{
  ATerm w_4 = NULL;
  t = SSL_write_term_to_stream_text(y_42, z_42);
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_4);
  return(t);
}
static ATerm s_3 (ATerm g_123 (ATerm), ATerm z_279, ATerm e_43, ATerm t)
{
  ATerm x_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_279, term_g_3);
  t = w_3(t);
  x_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_4, e_43);
  t = g_123(t);
  t = fclose_0_0(t);
  t = e_43;
  return(t);
}
static ATerm r_3 (ATerm u_42, ATerm v_42, ATerm t)
{
  ATerm a_5 = NULL;
  t = SSL_write_term_to_stream_baf(u_42, v_42);
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_5);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm l_5 = NULL,q_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_3 = ATgetArgument(t, 0);
      if(match_cons(h_3, sym_Stream_1))
        {
          l_5 = ATgetArgument(h_3, 0);
        }
      else
        _fail(t);
      q_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_3(l_5, q_5, t);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_3 = ATgetArgument(t, 0);
      if(match_cons(i_3, sym_Stream_1))
        {
          v_5 = ATgetArgument(i_3, 0);
        }
      else
        _fail(t);
      w_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_3(v_5, w_5, t);
  s_5 = t;
  t = term_j_3;
  t_5 = t;
  t = s_5;
  if(match_cons(t, sym_Stream_1))
    {
      u_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_3, s_5);
  t = p_3(t_5, u_5, t);
  return(t);
}
ATerm output_1_0 (ATerm a_144 (ATerm), ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL;
  t = a_144(t);
  c_5 = t;
  {
    ATerm k_3 = t;
    int m_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_5 = NULL,h_5 = NULL;
        t = term_n_3;
        f_5 = t;
        t = term_o_3;
        h_5 = t;
        t = term_y_3;
        t = c_4(f_5, h_5, t);
        LocalPopChoice(m_3);
      }
    else
      {
        t = k_3;
        t = term_e_4;
      }
  }
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_5, c_5);
  {
    ATerm i_4 = t;
    int k_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_5 = NULL,k_5 = NULL;
        t = term_n_3;
        j_5 = t;
        t = term_l_4;
        k_5 = t;
        t = term_m_4;
        t = c_4(j_5, k_5, t);
        t = (ATerm) ATmakeAppl(sym__2, b_5, c_5);
        LocalPopChoice(k_4);
        if(match_cons(t, sym__2))
          {
            ATerm p_4 = ATgetArgument(t, 0);
            ATerm r_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_3(b_0, b_5, c_5, t);
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
        t = s_3(c_0, b_5, c_5, t);
      }
  }
  return(t);
}
static ATerm x_6 (ATerm k_6, ATerm t)
{
  t = SSL_fclose(k_6);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_6 = NULL,u_6 = NULL;
  u_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_6 = ATgetArgument(t, 0);
      {
        ATerm y_4 = t;
        int z_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_6);
            LocalPopChoice(z_4);
          }
        else
          {
            t = y_4;
            t = x_6(u_6, t);
          }
      }
    }
  else
    {
      t = x_6(u_6, t);
    }
  return(t);
}
static ATerm t_3 (ATerm a_43, ATerm t)
{
  t = SSL_read_term_from_stream(a_43);
  return(t);
}
static ATerm u_3 (ATerm a_57, ATerm b_57, ATerm t)
{
  t = SSL_strcat(a_57, b_57);
  return(t);
}
static ATerm v_3 (ATerm w_58, ATerm x_58, ATerm t)
{
  ATerm d_7 = NULL;
  t = SSL_fopen(w_58, x_58);
  d_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_7);
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
  ATerm i_7 = NULL;
  t = SSL_stdout_stream();
  i_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_7);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_7 = NULL;
  t = SSL_stderr_stream();
  j_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_7);
  return(t);
}
static ATerm g_10 (ATerm c_8, ATerm t)
{
  ATerm e_8 = NULL;
  t = SSL_explode_term(c_8);
  if(match_cons(t, sym__2))
    {
      ATerm d_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_5) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_5 = ATgetArgument(t, 1);
        if(((ATgetType(e_5) == AT_LIST) && !(ATisEmpty(e_5))))
          {
            e_8 = ATgetFirst((ATermList) e_5);
            {
              ATerm i_5 = (ATerm) ATgetNext((ATermList) e_5);
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
static ATerm h_10 (ATerm n_8, ATerm o_8, ATerm r_8, ATerm t)
{
  ATerm v_8 = NULL,x_8 = NULL,y_8 = NULL,b_9 = NULL,n_0 = NULL;
  t = SSLgetAnnotations(r_8);
  y_8 = t;
  t = n_8;
  if(match_cons(t, sym_Path_1))
    {
      b_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_9, o_8);
  n_0 = t;
  t = SSLsetAnnotations(n_0, y_8);
  if(match_cons(t, sym__2))
    {
      v_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(v_8, x_8, t);
  return(t);
}
static ATerm k_10 (ATerm f_9, ATerm g_9, ATerm h_9, ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL,q_9 = NULL,y_9 = NULL,z_1 = NULL;
  t = SSLgetAnnotations(h_9);
  q_9 = t;
  t = SSL_is_string(f_9);
  y_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_9, g_9);
  z_1 = t;
  t = SSLsetAnnotations(z_1, q_9);
  if(match_cons(t, sym__2))
    {
      j_9 = ATgetArgument(t, 0);
      k_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(j_9, k_9, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,f_10 = NULL;
  a_10 = t;
  if(match_cons(t, sym__2))
    {
      b_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
      {
        ATerm m_5 = t;
        int o_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_10(a_10, t);
            LocalPopChoice(o_5);
          }
        else
          {
            t = m_5;
            {
              ATerm p_5 = t;
              int r_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_10(b_10, f_10, a_10, t);
                  LocalPopChoice(r_5);
                }
              else
                {
                  t = p_5;
                  t = k_10(b_10, f_10, a_10, t);
                }
            }
          }
      }
    }
  else
    {
      t = g_10(a_10, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,e_11 = NULL;
  e_11 = t;
  {
    ATerm x_5 = t;
    int y_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_11, term_z_5);
        t = w_3(t);
        LocalPopChoice(y_5);
      }
    else
      {
        t = x_5;
        {
          ATerm t_0 = NULL,u_0 = NULL;
          t = term_d_6;
          u_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_6, e_11);
          t = u_3(u_0, e_11, t);
          t_0 = t;
          t = SSL_perror(t_0);
          _fail(t);
        }
      }
  }
  p_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_3(q_10, t);
  o_10 = t;
  t = p_10;
  t = fclose_0_0(t);
  t = o_10;
  return(t);
}
ATerm input_1_0 (ATerm b_144 (ATerm), ATerm t)
{
  ATerm f_6 = t;
  int g_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_11 = NULL,j_11 = NULL;
      t = term_n_3;
      i_11 = t;
      t = term_i_6;
      j_11 = t;
      t = term_j_6;
      t = c_4(i_11, j_11, t);
      LocalPopChoice(g_6);
    }
  else
    {
      t = f_6;
      t = term_l_6;
    }
  t = ReadFromFile_0_0(t);
  t = b_144(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  t = term_n_3;
  k_11 = t;
  t = term_o_6;
  l_11 = t;
  t = term_r_6;
  t = c_4(k_11, l_11, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_11 = NULL,w_11 = NULL,z_11 = NULL;
  p_11 = t;
  {
    ATerm s_6 = t;
    int v_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_11;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_6 = ATgetFirst((ATermList) t);
                ATerm a_7 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_11;
          }
        LocalPopChoice(v_6);
      }
    else
      {
        t = s_6;
        t = (ATerm) ATinsert(ATempty, p_11);
      }
  }
  w_11 = t;
  t = term_e_4;
  z_11 = t;
  t = SSL_printnl(z_11, w_11);
  t = p_11;
  return(t);
}
ATerm map_1_0 (ATerm o_123 (ATerm), ATerm t)
{
  static ATerm y_12 (ATerm t);
  static ATerm y_12 (ATerm t)
  {
    ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
    v_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_12;
      }
    else
      {
        ATerm a_1 = NULL,f_1 = NULL,g_1 = NULL,e_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_12 = ATgetFirst((ATermList) t);
            x_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_12);
        a_1 = t;
        t = w_12;
        t = o_123(t);
        f_1 = t;
        t = x_12;
        t = y_12(t);
        g_1 = t;
        t = (ATerm) ATinsert(CheckATermList(g_1), f_1);
        e_6 = t;
        t = SSLsetAnnotations(e_6, a_1);
      }
    return(t);
  }
  t = y_12(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_13 = ATgetFirst((ATermList) t);
      d_13 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_13 = NULL,k_13 = NULL;
        static ATerm e_0 (ATerm t);
        static ATerm e_0 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_13)), not_null(k_13));
          return(t);
        }
        t = d_13;
        t = r_0(t);
        if(((j_13 != NULL) && (j_13 != t)))
          _fail(t);
        else
          j_13 = t;
        t = c_13;
        t = p_0(t);
        if(((k_13 != NULL) && (k_13 != t)))
          _fail(t);
        else
          k_13 = t;
        t = d_13;
        t = reverse_acc_2_0(p_0, e_0, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_7;
      t = r_0(t);
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,b_14 = NULL,h_6 = NULL;
  b_14 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_14);
  x_13 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_13);
  h_6 = t;
  t = SSLsetAnnotations(h_6, x_13);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm h_14 = NULL;
  h_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_14), term_g_7);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm z_145 (ATerm), ATerm a_146 (ATerm), ATerm t)
{
  ATerm p_13 = NULL,s_13 = NULL;
  ATerm k_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_13 = NULL,w_13 = NULL;
      t = term_n_3;
      v_13 = t;
      t = term_o_6;
      w_13 = t;
      t = term_r_6;
      t = c_4(v_13, w_13, t);
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
        t = z_145(t);
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
  t = c_4(p_13, s_13, t);
  t = reverse_acc_2_0(_id, i_0, t);
  t = map_1_0(q_0, t);
  t = term_s_7;
  t = echo_0_0(t);
  {
    ATerm t_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_146(t);
        {
          ATerm v_7 = t;
          int w_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_14 = NULL;
              i_14 = t;
              t = SSL_is_string(i_14);
              t = i_14;
              LocalPopChoice(w_7);
              {
                ATerm l_14 = NULL;
                l_14 = t;
                t = (ATerm) ATinsert(ATempty, l_14);
              }
            }
          else
            {
              t = v_7;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(u_7);
      }
    else
      {
        t = t_7;
      }
  }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,t_6 = NULL;
  w_14 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_14);
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_14);
  t_6 = t;
  t = SSLsetAnnotations(t_6, u_14);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_14 = NULL;
  q_14 = t;
  {
    ATerm x_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_14 = NULL,s_14 = NULL;
        t = term_n_3;
        r_14 = t;
        t = term_o_6;
        s_14 = t;
        t = term_r_6;
        t = c_4(r_14, s_14, t);
        LocalPopChoice(y_7);
      }
    else
      {
        t = x_7;
        t = fetch_1_0(s_0, t);
      }
  }
  t = q_14;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm e_15 = NULL;
  e_15 = t;
  if(match_string(t, "-k"))
    {
      t = e_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_15;
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,l_15 = NULL;
  h_15 = t;
  t = SSL_string_to_int(h_15);
  i_15 = t;
  t = term_z_7;
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_7, i_15);
  t = f_4(l_15, i_15, t);
  t = h_15;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_a_8;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_0, w_0, x_0, t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm o_15 = NULL;
  o_15 = t;
  if(match_string(t, "-S"))
    {
      t = o_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_15;
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  t = term_b_8;
  s_15 = t;
  t = term_d_8;
  t_15 = t;
  t = term_f_8;
  t = f_4(s_15, t_15, t);
  t = term_g_8;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_h_8;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,y_15 = NULL;
  u_15 = t;
  t = SSL_string_to_int(u_15);
  v_15 = t;
  t = term_b_8;
  y_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_8, v_15);
  t = f_4(y_15, v_15, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_15);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_i_8;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  t = term_j_8;
  z_15 = t;
  t = term_c_7;
  a_16 = t;
  t = term_k_8;
  t = f_4(z_15, a_16, t);
  t = term_l_8;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_m_8;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_0, z_0, d_1, t);
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      {
        ATerm s_8 = t;
        int t_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_1, i_1, j_1, t);
            LocalPopChoice(t_8);
          }
        else
          {
            t = s_8;
            t = Option_3_0(k_1, m_1, n_1, t);
          }
      }
    }
  return(t);
}
static ATerm f_4 (ATerm b_79, ATerm c_79, ATerm t)
{
  ATerm d_16 = NULL,f_16 = NULL;
  t = term_n_3;
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_3, b_79, c_79);
  t = lookup_table_0_1(d_16, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_4(b_79, c_79, f_16, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_3, b_79, c_79);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
      t = term_c_7;
      t = g_0(t);
      o_16 = t;
      t = term_p_7;
      p_16 = t;
      t = term_q_7;
      q_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_7, term_q_7, o_16);
      t = d_4(p_16, q_16, o_16, t);
      _fail(t);
    }
  else
    {
      ATerm t_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_16 = ATgetFirst((ATermList) t);
          n_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_16;
      t = d_0(t);
      t = term_c_7;
      t = f_0(t);
      t_16 = t;
      t = (ATerm) ATinsert(CheckATermList(n_16), t_16);
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm v_16 = NULL;
  v_16 = t;
  if(match_string(t, "-o"))
    {
      t = v_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_16;
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL;
  w_16 = t;
  t = term_o_3;
  x_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_3, w_16);
  t = f_4(x_16, w_16, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_16);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_u_8;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_1, v_1, w_1, t);
  return(t);
}
static ATerm d_4 (ATerm g_64, ATerm h_64, ATerm f_64, ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  z_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_64, h_64);
  {
    ATerm w_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_9 = ATgetArgument(t, 0);
            ATerm c_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_64, h_64);
        t = c_4(g_64, h_64, t);
        LocalPopChoice(z_8);
      }
    else
      {
        t = w_8;
        t = (ATerm) ATempty;
      }
  }
  a_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_64, h_64, (ATerm) ATinsert(CheckATermList(a_17), f_64));
  t = lookup_table_0_1(g_64, t);
  d_17 = t;
  t = (ATerm) ATinsert(CheckATermList(a_17), f_64);
  b_17 = t;
  t = d_17;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_4(h_64, b_17, c_17, t);
  t = z_16;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
      t = term_c_7;
      t = o_0(t);
      o_17 = t;
      t = term_p_7;
      p_17 = t;
      t = term_q_7;
      q_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_7, term_q_7, o_17);
      t = d_4(p_17, q_17, o_17, t);
      _fail(t);
    }
  else
    {
      ATerm u_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_17 = ATgetFirst((ATermList) t);
          l_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_17;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_17 = ATgetFirst((ATermList) t);
          n_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_17;
      t = j_0(t);
      t = m_17;
      t = l_0(t);
      u_17 = t;
      t = (ATerm) ATinsert(CheckATermList(n_17), u_17);
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm w_17 = NULL;
  w_17 = t;
  if(match_string(t, "-i"))
    {
      t = w_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_17;
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL;
  x_17 = t;
  t = term_i_6;
  y_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_6, x_17);
  t = f_4(y_17, x_17, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_17);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_d_9;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_1, y_1, a_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,e_18 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_7;
  t = whoami_0_0(t);
  z_17 = t;
  t = term_e_9;
  b_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_9), z_17);
  e_18 = t;
  t = SSL_printnl(b_18, e_18);
  t = term_l_9;
  a_18 = t;
  t = SSL_exit(a_18);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL;
  t = term_n_3;
  f_18 = t;
  t = term_o_6;
  g_18 = t;
  t = term_r_6;
  t = c_4(f_18, g_18, t);
  return(t);
}
static ATerm x_3 (ATerm p_62, ATerm q_62, ATerm t)
{
  ATerm m_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_62, q_62);
      LocalPopChoice(n_9);
    }
  else
    {
      t = m_9;
      t = SSL_addr(p_62, q_62);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_130 (ATerm), ATerm m_130 (ATerm), ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
  i_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_18;
      t = l_130(t);
    }
  else
    {
      ATerm n_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_18 = ATgetFirst((ATermList) t);
          k_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_18;
      t = foldr_2_0(l_130, m_130, t);
      n_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_18, n_18);
      t = m_130(t);
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
  t = term_d_8;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL;
  if(match_cons(t, sym__2))
    {
      i_2 = ATgetArgument(t, 0);
      j_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3(i_2, j_2, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_18 = NULL,p_1 = NULL,t_1 = NULL;
  t = times_0_0(t);
  t_1 = t;
  t = SSL_explode_term(t_1);
  if(match_cons(t, sym__2))
    {
      ATerm o_9 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_1;
  t = foldr_2_0(b_2, c_2, t);
  q_18 = t;
  t = SSL_TicksToSeconds(q_18);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  b_19 = t;
  if(match_cons(t, sym__2))
    {
      c_19 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_19;
        if((c_19 != t))
          {
            _fail(t);
          }
        t = b_19;
        LocalPopChoice(r_9);
      }
    else
      {
        t = p_9;
        t = (ATerm) ATmakeAppl(sym__2, c_19, d_19);
        {
          ATerm s_9 = t;
          int t_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_19, d_19);
              LocalPopChoice(t_9);
            }
          else
            {
              t = s_9;
              t = SSL_gtr(c_19, d_19);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_19, d_19);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_140 (ATerm), ATerm t)
{
  ATerm h_19 = NULL;
  h_19 = t;
  {
    ATerm u_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
        t = term_n_3;
        k_19 = t;
        t = term_b_8;
        l_19 = t;
        t = term_w_9;
        t = c_4(k_19, l_19, t);
        j_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_19, term_l_9);
        t = geq_0_0(t);
        t = h_19;
        t = w_140(t);
        LocalPopChoice(v_9);
      }
    else
      {
        t = u_9;
        t = h_19;
      }
  }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,q_19 = NULL,r_19 = NULL;
  t = run_time_0_0(t);
  n_19 = t;
  t = term_c_7;
  t = whoami_0_0(t);
  o_19 = t;
  t = term_e_9;
  q_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_9), n_19), term_x_9), o_19);
  r_19 = t;
  t = SSL_printnl(q_19, r_19);
  t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_9), n_19), term_x_9), o_19));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_19 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_8;
  s_19 = t;
  t = SSL_exit(s_19);
  return(t);
}
static ATerm g_4 (ATerm v_68, ATerm w_68, ATerm x_68, ATerm t)
{
  ATerm t_19 = NULL;
  t = SSL_hashtable_put(x_68, v_68, w_68);
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_19);
  return(t);
}
ATerm lookup_table_0_1 (ATerm s_65, ATerm t)
{
  ATerm c_20 = NULL;
  t = table_hashtable_0_0(t);
  c_20 = t;
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_3 = NULL;
        t = c_20;
        if(match_cons(t, sym_Hashtable_1))
          {
            d_3 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_4(s_65, d_3, t);
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        {
          ATerm l_3 = NULL;
          t = s_65;
          t = table_create_0_0(t);
          t = c_20;
          if(match_cons(t, sym_Hashtable_1))
            {
              l_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_4(s_65, l_3, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm d_69, ATerm e_69, ATerm t)
{
  ATerm f_20 = NULL;
  t = SSL_hashtable_create(d_69, e_69);
  f_20 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_20);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,k_20 = NULL,l_20 = NULL;
  g_20 = t;
  t = term_e_10;
  k_20 = t;
  t = term_i_10;
  l_20 = t;
  t = g_20;
  t = new_hashtable_0_2(k_20, l_20, t);
  h_20 = t;
  t = g_20;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_4(g_20, h_20, i_20, t);
  t = g_20;
  return(t);
}
static ATerm z_3 (ATerm a_69, ATerm b_69, ATerm t)
{
  ATerm m_20 = NULL;
  t = SSL_hashtable_remove(b_69, a_69);
  m_20 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_20);
  return(t);
}
static ATerm a_4 (ATerm f_69, ATerm t)
{
  ATerm n_20 = NULL;
  t = SSL_hashtable_destroy(f_69);
  n_20 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_20);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm o_20 = NULL;
  t = SSL_table_hashtable();
  o_20 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_20);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
  p_20 = t;
  t = table_hashtable_0_0(t);
  q_20 = t;
  t = lookup_table_0_1(p_20, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_4(s_20, t);
  t = q_20;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_3(p_20, r_20, t);
  t = p_20;
  return(t);
}
ATerm fetch_1_0 (ATerm w_123 (ATerm), ATerm t)
{
  static ATerm p_21 (ATerm t);
  static ATerm p_21 (ATerm t)
  {
    ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
    m_21 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_21 = ATgetFirst((ATermList) t);
        o_21 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_10 = t;
      int l_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_4 = NULL,j_4 = NULL,w_6 = NULL;
          t = SSLgetAnnotations(m_21);
          b_4 = t;
          t = n_21;
          t = w_123(t);
          j_4 = t;
          t = (ATerm) ATinsert(CheckATermList(o_21), j_4);
          w_6 = t;
          t = SSLsetAnnotations(w_6, b_4);
          LocalPopChoice(l_10);
        }
      else
        {
          t = j_10;
          {
            ATerm g_5 = NULL,n_5 = NULL,y_6 = NULL;
            t = SSLgetAnnotations(m_21);
            g_5 = t;
            t = o_21;
            t = p_21(t);
            n_5 = t;
            t = (ATerm) ATinsert(CheckATermList(n_5), n_21);
            y_6 = t;
            t = SSLsetAnnotations(y_6, g_5);
          }
        }
    }
    return(t);
  }
  t = p_21(t);
  return(t);
}
static ATerm h_4 (ATerm y_68, ATerm z_68, ATerm t)
{
  t = SSL_hashtable_get(z_68, y_68);
  return(t);
}
static ATerm c_4 (ATerm z_65, ATerm a_66, ATerm t)
{
  ATerm s_21 = NULL;
  t = lookup_table_0_1(z_65, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_4(a_66, s_21, t);
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
  ATerm u_21 = NULL,v_21 = NULL;
  t = term_m_10;
  u_21 = t;
  t = term_c_7;
  v_21 = t;
  t = term_n_10;
  t = f_4(u_21, v_21, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_r_10;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  t = term_m_10;
  y_21 = t;
  t = term_c_7;
  z_21 = t;
  t = term_n_10;
  t = f_4(y_21, z_21, t);
  t = term_s_10;
  w_21 = t;
  t = term_c_7;
  x_21 = t;
  t = term_t_10;
  t = f_4(w_21, x_21, t);
  t = term_u_10;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_v_10;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_2, f_2, g_2, t);
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
      t = Option_3_0(h_2, k_2, l_2, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,b_7 = NULL;
  f_22 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_22 = ATgetFirst((ATermList) t);
      c_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_22);
  a_22 = t;
  t = b_22;
  t = n_89(t);
  d_22 = t;
  t = c_22;
  t = o_89(t);
  e_22 = t;
  t = (ATerm) ATinsert(CheckATermList(e_22), d_22);
  b_7 = t;
  t = SSLsetAnnotations(b_7, a_22);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_145 (ATerm), ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,p_22 = NULL,q_22 = NULL,e_7 = NULL;
  k_22 = t;
  {
    ATerm y_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_11;
        t = u_145(t);
        LocalPopChoice(z_10);
      }
    else
      {
        t = y_10;
      }
  }
  t = k_22;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_22 = ATgetFirst((ATermList) t);
      n_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_22);
  l_22 = t;
  t = term_o_6;
  q_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_6, m_22);
  t = f_4(q_22, m_22, t);
  t = n_22;
  {
    static ATerm a_23 (ATerm t);
    static ATerm a_23 (ATerm t)
    {
      ATerm b_11 = t;
      int c_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_11 = t;
          int f_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_22 = NULL;
              t_22 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_22;
              LocalPopChoice(f_11);
            }
          else
            {
              t = d_11;
              t = u_145(t);
              t = Cons_2_0(_id, a_23, t);
            }
          LocalPopChoice(c_11);
        }
      else
        {
          t = b_11;
          {
            ATerm w_22 = NULL,x_22 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_22 = ATgetFirst((ATermList) t);
                x_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(x_22), (ATerm) ATmakeAppl(sym_Undefined_1, w_22));
          }
        }
      return(t);
    }
    t = a_23(t);
  }
  p_22 = t;
  t = (ATerm) ATinsert(CheckATermList(p_22), (ATerm) ATmakeAppl(sym_Program_1, m_22));
  e_7 = t;
  t = SSLsetAnnotations(e_7, l_22);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm n_23 = NULL;
  n_23 = t;
  if(match_string(t, "--help"))
    {
      t = n_23;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_23;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_23;
        }
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL;
  t = term_g_11;
  o_23 = t;
  t = term_c_7;
  p_23 = t;
  t = term_h_11;
  t = f_4(o_23, p_23, t);
  t = term_m_11;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_n_11;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm r_145 (ATerm), ATerm s_145 (ATerm), ATerm t_145 (ATerm), ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL;
  h_23 = t;
  t = term_p_7;
  i_23 = t;
  t = term_o_11;
  t = lookup_table_0_1(i_23, t);
  m_23 = t;
  t = term_q_7;
  j_23 = t;
  t = (ATerm) ATempty;
  k_23 = t;
  t = m_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_4(j_23, k_23, l_23, t);
  t = h_23;
  {
    static ATerm m_2 (ATerm t);
    static ATerm m_2 (ATerm t)
    {
      ATerm q_11 = t;
      int r_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_145(t);
          LocalPopChoice(r_11);
        }
      else
        {
          t = q_11;
          {
            ATerm s_11 = t;
            int t_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_2, o_2, p_2, t);
                LocalPopChoice(t_11);
              }
            else
              {
                t = s_11;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_2, t);
  }
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_25 = NULL;
        b_25 = t;
        {
          ATerm x_11 = t;
          int y_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_6 = NULL;
              t = b_25;
              {
                ATerm a_12 = t;
                int b_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_6 = NULL,c_6 = NULL;
                    t = term_n_3;
                    b_6 = t;
                    t = term_g_11;
                    c_6 = t;
                    t = term_c_12;
                    t = c_4(b_6, c_6, t);
                    LocalPopChoice(b_12);
                  }
                else
                  {
                    t = a_12;
                    t = fetch_1_0(q_2, t);
                  }
              }
              t = b_25;
              t = s_145(t);
              t = term_d_8;
              a_6 = t;
              t = SSL_exit(a_6);
              LocalPopChoice(y_11);
            }
          else
            {
              t = x_11;
              {
                ATerm m_6 = NULL,n_6 = NULL,q_6 = NULL;
                t = term_n_3;
                n_6 = t;
                t = term_m_10;
                q_6 = t;
                t = term_d_12;
                t = c_4(n_6, q_6, t);
                t = b_25;
                t = t_145(t);
                t = term_d_8;
                m_6 = t;
                t = SSL_exit(m_6);
              }
            }
        }
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
        {
          ATerm e_12 = t;
          int f_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
              static ATerm r_2 (ATerm t);
              static ATerm r_2 (ATerm t)
              {
                ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,h_7 = NULL;
                h_25 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_25 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_25);
                f_25 = t;
                t = g_25;
                if(((f_23 != NULL) && (f_23 != t)))
                  _fail(t);
                else
                  f_23 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_25);
                h_7 = t;
                t = SSLsetAnnotations(h_7, f_25);
                return(t);
              }
              t = fetch_1_0(r_2, t);
              t = term_e_9;
              d_25 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_23)), term_g_12);
              e_25 = t;
              t = SSL_printnl(d_25, e_25);
              t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_23)), term_g_12));
              t = s_145(t);
              t = term_l_9;
              c_25 = t;
              t = SSL_exit(c_25);
              LocalPopChoice(f_12);
            }
          else
            {
              t = e_12;
            }
        }
      }
  }
  g_23 = t;
  t = term_p_7;
  t = table_destroy_0_0(t);
  t = g_23;
  return(t);
}
ATerm option_wrap_5_0 (ATerm u_143 (ATerm), ATerm v_143 (ATerm), ATerm w_143 (ATerm), ATerm x_143 (ATerm), ATerm y_143 (ATerm), ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
  t = parse_options_3_0(u_143, v_143, w_143, t);
  m_25 = t;
  t = term_h_12;
  t = table_create_0_0(t);
  t = term_h_12;
  n_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_12, term_i_12, m_25);
  t = lookup_table_0_1(n_25, t);
  q_25 = t;
  t = term_i_12;
  o_25 = t;
  t = q_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_4(o_25, m_25, p_25, t);
  t = m_25;
  t = x_143(t);
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_143(t);
        t = report_success_0_0(t);
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
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
                  t = Option_3_0(u_2, v_2, w_2, t);
                  LocalPopChoice(q_12);
                }
              else
                {
                  t = p_12;
                  {
                    ATerm r_12 = t;
                    int s_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(s_12);
                      }
                    else
                      {
                        t = r_12;
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
  ATerm t_25 = NULL,u_25 = NULL;
  t = term_l_4;
  t_25 = t;
  t = term_c_7;
  u_25 = t;
  t = term_t_12;
  t = f_4(t_25, u_25, t);
  t = term_u_12;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_z_12;
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
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DesugarAssign_0_0(t);
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      t = DesugarCase_0_0(t);
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(s_2, default_system_usage_0_0, default_system_about_0_0, _id, t_2, t);
  return(t);
}

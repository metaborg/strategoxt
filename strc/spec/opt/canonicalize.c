#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_As_2;
Symbol sym_Choice_2;
Symbol sym_AM_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_Bagof_1;
Symbol sym_Prim_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
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
Symbol sym_Some_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
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
Symbol sym_Id_1;
Symbol sym_Undefined_0;
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
static void init_module_constructors (void)
{
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
}
ATerm term_o_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_s_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_a_26;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_x_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_i_22;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_z_17;
ATerm term_u_17;
ATerm term_q_17;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_h_10;
ATerm term_i_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_CallT_3, term_q_13, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_CallT_3, term_t_13, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_14);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_one", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_all", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_bagof", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_15);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, term_z_18, term_a_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_p_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_d_20, term_x_7);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_z_18, term_b_21);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_z_18, term_i_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__2, term_q_20, term_r_20);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym__2, term_b_23, term_x_7);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym__2, term_e_23, term_x_7);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym__2, term_i_22, term_x_7);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym__2, term_z_18, term_b_23);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym__2, term_s_26, term_x_7);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm l_118 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
static ATerm j_4 (ATerm p_86, ATerm o_86, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm p_119 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm n_118 (ATerm), ATerm t);
ATerm CreateDef2_0_0 (ATerm t);
static ATerm z_24 (ATerm n_24, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm d_120 (ATerm), ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm Canon_0_0 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm r_5 (ATerm g_73, ATerm h_73, ATerm i_73, ATerm t);
ATerm genzip_4_0 (ATerm b_127 (ATerm), ATerm c_127 (ATerm), ATerm d_127 (ATerm), ATerm e_127 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm o_125 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm q_43 (ATerm h_43, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm downup2_2_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm t);
static ATerm w_5 (ATerm k_47, ATerm m_47, ATerm t);
static ATerm x_5 (ATerm n_31, ATerm o_31, ATerm t);
static ATerm z_5 (ATerm o_124 (ATerm), ATerm u_182, ATerm t_31, ATerm t);
static ATerm y_5 (ATerm j_31, ATerm k_31, ATerm t);
static ATerm o_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm j_141 (ATerm), ATerm t);
static ATerm i_49 (ATerm c_49, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm a_6 (ATerm p_31, ATerm t);
static ATerm b_6 (ATerm c_46, ATerm d_46, ATerm t);
static ATerm c_6 (ATerm n_47, ATerm p_47, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm v_50 (ATerm s_49, ATerm t);
static ATerm w_50 (ATerm w_49, ATerm x_49, ATerm y_49, ATerm t);
static ATerm x_50 (ATerm g_50, ATerm h_50, ATerm k_50, ATerm t);
static ATerm d_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm h_125 (ATerm), ATerm t);
static ATerm g_6 (ATerm h_62, ATerm i_62, ATerm t);
ATerm if_verbose2_1_0 (ATerm s_139 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm j_6 (ATerm v_55, ATerm w_55, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm h_6 (ATerm q_60, ATerm r_60, ATerm p_60, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm e_6 (ATerm i_50, ATerm j_50, ATerm t);
ATerm foldr_2_0 (ATerm o_131 (ATerm), ATerm p_131 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_139 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm need_help_1_0 (ATerm h_142 (ATerm), ATerm t);
ATerm map_1_0 (ATerm x_124 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_144 (ATerm), ATerm t);
static ATerm r_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm parse_options_1_0 (ATerm j_144 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_142 (ATerm), ATerm k_142 (ATerm), ATerm l_142 (ATerm), ATerm m_142 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm iowrap_3_0 (ATerm s_141 (ATerm), ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,j_0 = NULL,m_0 = NULL,o_0 = NULL;
  b_0 = t;
  t = term_x_7;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_y_7;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), f_0), term_z_7);
  o_0 = t;
  t = SSL_printnl(m_0, o_0);
  t = term_i_8;
  j_0 = t;
  t = SSL_exit(j_0);
  t = b_0;
  return(t);
}
ATerm topdown_1_0 (ATerm l_118 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(l_118, t);
    return(t);
  }
  t = l_118(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm j_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm m_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(l_8);
      {
        ATerm r_0 = NULL,s_0 = NULL;
        r_0 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm n_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        s_0 = t;
        t = SSLgetAnnotations(r_0);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_8 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) o_8) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_8 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(p_8) != AT_LIST) || !(ATisEmpty(p_8))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = s_0;
      }
    }
  else
    {
      t = j_8;
      {
        ATerm q_8 = t;
        int s_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm t_8 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) t_8) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm v_8 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(s_8);
            _fail(t);
          }
        else
          {
            t = q_8;
          }
      }
    }
  return(t);
}
static ATerm j_4 (ATerm p_86, ATerm o_86, ATerm t)
{
  t = p_86;
  t = topdown_1_0(h_0, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, p_86);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,q_1 = NULL,z_1 = NULL,g_2 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      e_1 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_1;
  if(match_cons(t, sym_Match_1))
    {
      f_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_1;
  if(match_cons(t, sym_Var_1))
    {
      g_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_1;
  if(match_cons(t, sym_Seq_2))
    {
      z_1 = ATgetArgument(t, 0);
      c_1 = ATgetArgument(t, 1);
      t = z_1;
      if(match_cons(t, sym_Build_1))
        {
          g_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_2;
      if(match_cons(t, sym_Var_1))
        {
          b_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_1;
      if((g_1 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_1)), c_1);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          z_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_1;
      if(match_cons(t, sym_Var_1))
        {
          g_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_2;
      if((g_1 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_1));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      v_2 = ATgetArgument(t, 0);
      x_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_2;
  if(match_cons(t, sym_Build_1))
    {
      w_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_2;
  if(match_cons(t, sym_Seq_2))
    {
      y_2 = ATgetArgument(t, 0);
      s_2 = ATgetArgument(t, 1);
      t = y_2;
      if(match_cons(t, sym_Match_1))
        {
          r_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_2;
      if((w_2 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_2), s_2);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          y_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_2;
      if((w_2 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, w_2);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,p_3 = NULL,r_3 = NULL,s_3 = NULL,v_3 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      p_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3;
  if(match_cons(t, sym_Match_1))
    {
      r_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_3;
  if(match_cons(t, sym_Seq_2))
    {
      v_3 = ATgetArgument(t, 0);
      l_3 = ATgetArgument(t, 1);
      t = v_3;
      if(match_cons(t, sym_Match_1))
        {
          k_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_3;
      if((r_3 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_3), l_3);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          v_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_3;
      if((r_3 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, r_3);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,y_4 = NULL,a_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,i_5 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      a_5 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_5;
  if(match_cons(t, sym_Build_1))
    {
      ATerm e_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_5;
  if(match_cons(t, sym_Seq_2))
    {
      e_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
      t = e_5;
      if(match_cons(t, sym_PrimT_3))
        {
          r_4 = ATgetArgument(t, 0);
          s_4 = ATgetArgument(t, 1);
          y_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, r_4, s_4, y_4), f_5);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          e_5 = ATgetArgument(t, 0);
          f_5 = ATgetArgument(t, 1);
          i_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, e_5, f_5, i_5);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL,q_6 = NULL,s_6 = NULL,t_6 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      q_6 = ATgetArgument(t, 0);
      s_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6;
  if(match_cons(t, sym_Build_1))
    {
      ATerm h_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6;
  if(match_cons(t, sym_Seq_2))
    {
      t_6 = ATgetArgument(t, 0);
      o_6 = ATgetArgument(t, 1);
      t = t_6;
      if(match_cons(t, sym_Build_1))
        {
          n_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_6), o_6);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          t_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, t_6);
    }
  return(t);
}
static ATerm p_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_9 = ATgetArgument(t, 0);
      if(((ATgetType(i_9) != AT_LIST) || !(ATisEmpty(i_9))))
        _fail(t);
      {
        ATerm j_9 = ATgetArgument(t, 1);
        if(((ATgetType(j_9) != AT_LIST) || !(ATisEmpty(j_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_9 = ATgetArgument(t, 0);
      if(((ATgetType(k_9) == AT_LIST) && !(ATisEmpty(k_9))))
        {
          x_8 = ATgetFirst((ATermList) k_9);
          y_8 = (ATerm) ATgetNext((ATermList) k_9);
        }
      else
        _fail(t);
      {
        ATerm l_9 = ATgetArgument(t, 1);
        if(((ATgetType(l_9) == AT_LIST) && !(ATisEmpty(l_9))))
          {
            z_8 = ATgetFirst((ATermList) l_9);
            a_9 = (ATerm) ATgetNext((ATermList) l_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_8, z_8), (ATerm) ATmakeAppl(sym__2, y_8, a_9));
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL;
  if(match_cons(t, sym__2))
    {
      b_9 = ATgetArgument(t, 0);
      c_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_9), b_9);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  if(match_cons(t, sym__2))
    {
      f_9 = ATgetArgument(t, 0);
      g_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_9), (ATerm) ATmakeAppl(sym_Match_1, g_9));
  return(t);
}
static ATerm w_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_9 = ATgetArgument(t, 0);
      if(((ATgetType(m_9) != AT_LIST) || !(ATisEmpty(m_9))))
        _fail(t);
      {
        ATerm p_9 = ATgetArgument(t, 1);
        if(((ATgetType(p_9) != AT_LIST) || !(ATisEmpty(p_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm o_9 = NULL,s_9 = NULL,v_9 = NULL,w_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_9 = ATgetArgument(t, 0);
      if(((ATgetType(q_9) == AT_LIST) && !(ATisEmpty(q_9))))
        {
          o_9 = ATgetFirst((ATermList) q_9);
          s_9 = (ATerm) ATgetNext((ATermList) q_9);
        }
      else
        _fail(t);
      {
        ATerm r_9 = ATgetArgument(t, 1);
        if(((ATgetType(r_9) == AT_LIST) && !(ATisEmpty(r_9))))
          {
            v_9 = ATgetFirst((ATermList) r_9);
            w_9 = (ATerm) ATgetNext((ATermList) r_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_9, v_9), (ATerm) ATmakeAppl(sym__2, s_9, w_9));
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL;
  if(match_cons(t, sym__2))
    {
      x_9 = ATgetArgument(t, 0);
      y_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_9), x_9);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL;
  if(match_cons(t, sym__2))
    {
      z_9 = ATgetArgument(t, 0);
      a_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_9), (ATerm) ATmakeAppl(sym_Match_1, a_10));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,k_8 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_8 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_8;
  if(match_cons(t, sym_Build_1))
    {
      c_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8;
  if(match_cons(t, sym_Op_2))
    {
      d_8 = ATgetArgument(t, 0);
      e_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8;
  if(match_cons(t, sym_Seq_2))
    {
      g_8 = ATgetArgument(t, 0);
      p_7 = ATgetArgument(t, 1);
      {
        ATerm w_8 = NULL;
        t = g_8;
        if(match_cons(t, sym_Match_1))
          {
            h_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_8;
        if(match_cons(t, sym_Op_2))
          {
            n_7 = ATgetArgument(t, 0);
            o_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_7;
        if((d_8 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, e_8, o_7);
        t = genzip_4_0(p_0, q_0, t_0, u_0, t);
        w_8 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, d_8, e_8)), p_7));
      }
    }
  else
    {
      ATerm n_9 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          g_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_8;
      if(match_cons(t, sym_Op_2))
        {
          h_8 = ATgetArgument(t, 0);
          k_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_8;
      if((d_8 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, e_8, k_8);
      t = genzip_4_0(w_0, x_0, y_0, z_0, t);
      n_9 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_9), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, d_8, e_8)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm i_11 = NULL,n_11 = NULL,o_11 = NULL,q_11 = NULL,r_11 = NULL,u_11 = NULL,x_11 = NULL,y_11 = NULL;
  n_11 = t;
  if(match_cons(t, sym_Seq_2))
    {
      o_11 = ATgetArgument(t, 0);
      u_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11;
  if(match_cons(t, sym_Build_1))
    {
      q_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_11;
  if(match_cons(t, sym_Op_2))
    {
      r_11 = ATgetArgument(t, 0);
      {
        ATerm t_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = u_11;
  {
    ATerm u_9 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            x_11 = ATgetArgument(t, 0);
            {
              ATerm d_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(b_10);
        t = x_11;
        if(match_cons(t, sym_Match_1))
          {
            y_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_11;
        if(match_cons(t, sym_Op_2))
          {
            i_11 = ATgetArgument(t, 0);
            {
              ATerm e_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_11, i_11);
        {
          ATerm g_10 = t;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              if(match_cons(t, sym__2))
                {
                  v_0 = ATgetArgument(t, 0);
                  if((v_0 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_10;
            }
        }
        t = term_h_10;
      }
    else
      {
        t = u_9;
        if(match_cons(t, sym_Match_1))
          {
            x_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_11;
        if(match_cons(t, sym_Op_2))
          {
            y_11 = ATgetArgument(t, 0);
            {
              ATerm i_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_11, y_11);
        {
          ATerm j_10 = t;
          if((PushChoice() == 0))
            {
              ATerm k_1 = NULL;
              if(match_cons(t, sym__2))
                {
                  k_1 = ATgetArgument(t, 0);
                  if((k_1 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_10;
            }
        }
        t = term_h_10;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm p_119 (ATerm), ATerm t)
{
  static ATerm i_12 (ATerm t)
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_119(t);
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        t = SRTS_one(i_12, t);
      }
    return(t);
  }
  t = i_12(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm n_13 = NULL,p_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,l_14 = NULL,m_14 = NULL;
  n_13 = t;
  if(match_cons(t, sym_Let_2))
    {
      p_13 = ATgetArgument(t, 0);
      e_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_14;
  if(match_cons(t, sym_Let_2))
    {
      f_14 = ATgetArgument(t, 0);
      l_14 = ATgetArgument(t, 1);
      {
        ATerm q_14 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, p_13, f_14);
        t = conc_0_0(t);
        q_14 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, q_14, l_14);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          f_14 = ATgetArgument(t, 0);
          l_14 = ATgetArgument(t, 1);
          m_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = p_13;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_13 = ATgetFirst((ATermList) t);
          d_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_13;
      if(match_cons(t, sym_SDefT_4))
        {
          x_13 = ATgetArgument(t, 0);
          y_13 = ATgetArgument(t, 1);
          z_13 = ATgetArgument(t, 2);
          a_14 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = y_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_14;
      if(match_cons(t, sym_SVar_1))
        {
          g_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_14;
      if((x_13 != t))
        {
          _fail(t);
        }
      t = a_14;
      {
        ATerm m_10 = t;
        if((PushChoice() == 0))
          {
            static ATerm a_1 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm n_10 = ATgetArgument(t, 0);
                  if(match_cons(n_10, sym_SVar_1))
                    {
                      if((x_13 != ATgetArgument(n_10, 0)))
                        {
                          _fail(ATgetArgument(n_10, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm o_10 = ATgetArgument(t, 1);
                    if(((ATgetType(o_10) != AT_LIST) || !(ATisEmpty(o_10))))
                      _fail(t);
                  }
                  {
                    ATerm p_10 = ATgetArgument(t, 2);
                    if(((ATgetType(p_10) != AT_LIST) || !(ATisEmpty(p_10))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(a_1, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_10;
          }
      }
      t = a_14;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,n_15 = NULL,p_15 = NULL,q_15 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      p_15 = ATgetArgument(t, 0);
      t = p_15;
      if(match_cons(t, sym_Seq_2))
        {
          n_15 = ATgetArgument(t, 0);
          c_15 = ATgetArgument(t, 1);
          t = n_15;
          if(match_cons(t, sym_Where_1))
            {
              b_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_15;
          if(match_cons(t, sym_Seq_2))
            {
              e_15 = ATgetArgument(t, 0);
              g_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_15;
          if(match_cons(t, sym_Build_1))
            {
              f_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, b_15, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_15), g_15)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              n_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, n_15);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          p_15 = ATgetArgument(t, 0);
          t = p_15;
          if(match_cons(t, sym_Test_1))
            {
              n_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, n_15);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              p_15 = ATgetArgument(t, 0);
              t = p_15;
              if(match_cons(t, sym_Not_1))
                {
                  n_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, n_15);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  p_15 = ATgetArgument(t, 0);
                  q_15 = ATgetArgument(t, 1);
                  t = q_15;
                  if((p_15 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      p_15 = ATgetArgument(t, 0);
                      q_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = q_15;
                  if((p_15 != t))
                    {
                      _fail(t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm AssociateR_0_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,o_16 = NULL,p_16 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      k_16 = ATgetArgument(t, 0);
      p_16 = ATgetArgument(t, 1);
      t = k_16;
      if(match_cons(t, sym_LChoice_2))
        {
          l_16 = ATgetArgument(t, 0);
          o_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, l_16, (ATerm) ATmakeAppl(sym_LChoice_2, o_16, p_16));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          k_16 = ATgetArgument(t, 0);
          p_16 = ATgetArgument(t, 1);
          t = k_16;
          if(match_cons(t, sym_Seq_2))
            {
              l_16 = ATgetArgument(t, 0);
              o_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, l_16, (ATerm) ATmakeAppl(sym_Seq_2, o_16, p_16));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              k_16 = ATgetArgument(t, 0);
              p_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_16;
          if(match_cons(t, sym_Choice_2))
            {
              l_16 = ATgetArgument(t, 0);
              o_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, l_16, (ATerm) ATmakeAppl(sym_Choice_2, o_16, p_16));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,t_17 = NULL,v_17 = NULL,w_17 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      v_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, v_17, w_17);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          v_17 = ATgetArgument(t, 0);
          t = v_17;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_17 = ATgetFirst((ATermList) t);
              n_17 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, m_17, (ATerm) ATmakeAppl(sym_LChoices_1, n_17));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_h_10;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              v_17 = ATgetArgument(t, 0);
              t = v_17;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_17 = ATgetFirst((ATermList) t);
                  n_17 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, m_17, (ATerm) ATmakeAppl(sym_Choices_1, n_17));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_h_10;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  v_17 = ATgetArgument(t, 0);
                  t = v_17;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      m_17 = ATgetFirst((ATermList) t);
                      n_17 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_17, (ATerm) ATmakeAppl(sym_Seqs_1, n_17));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_q_10;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      v_17 = ATgetArgument(t, 0);
                      w_17 = ATgetArgument(t, 1);
                      t_17 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, w_17, (ATerm) ATmakeAppl(sym_Op_2, term_r_10, (ATerm) ATinsert(ATinsert(ATempty, t_17), v_17)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          v_17 = ATgetArgument(t, 0);
                          w_17 = ATgetArgument(t, 1);
                          t_17 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, t_17)), v_17), (ATerm) ATmakeAppl(sym_Build_1, w_17)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              v_17 = ATgetArgument(t, 0);
                              w_17 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_17, (ATerm) ATmakeAppl(sym_Match_1, w_17));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  v_17 = ATgetArgument(t, 0);
                                  w_17 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_17), w_17);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      v_17 = ATgetArgument(t, 0);
                                      w_17 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_17), v_17);
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
static ATerm d_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      j_20 = ATgetArgument(t, 0);
      t = j_20;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_h_10;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          j_20 = ATgetArgument(t, 0);
          t = j_20;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_q_10;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              j_20 = ATgetArgument(t, 0);
              k_20 = ATgetArgument(t, 1);
              t = j_20;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_h_10;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  j_20 = ATgetArgument(t, 0);
                  k_20 = ATgetArgument(t, 1);
                  t = k_20;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_h_10;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      j_20 = ATgetArgument(t, 0);
                      k_20 = ATgetArgument(t, 1);
                      t = k_20;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_h_10;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          j_20 = ATgetArgument(t, 0);
                          t = j_20;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_h_10;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              j_20 = ATgetArgument(t, 0);
                              t = j_20;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_h_10;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  j_20 = ATgetArgument(t, 0);
                                  k_20 = ATgetArgument(t, 1);
                                  t = k_20;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_h_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      j_20 = ATgetArgument(t, 0);
                                      k_20 = ATgetArgument(t, 1);
                                      t = k_20;
                                      t = fetch_1_0(d_1, t);
                                      t = term_h_10;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          j_20 = ATgetArgument(t, 0);
                                          k_20 = ATgetArgument(t, 1);
                                          t = k_20;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = j_20;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = k_20;
                                                }
                                              else
                                                {
                                                  t = j_20;
                                                }
                                            }
                                          else
                                            {
                                              t = j_20;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = k_20;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              j_20 = ATgetArgument(t, 0);
                                              k_20 = ATgetArgument(t, 1);
                                              t = k_20;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = j_20;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = k_20;
                                                    }
                                                  else
                                                    {
                                                      t = j_20;
                                                    }
                                                }
                                              else
                                                {
                                                  t = j_20;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = k_20;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  j_20 = ATgetArgument(t, 0);
                                                  t = j_20;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_h_10;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      j_20 = ATgetArgument(t, 0);
                                                      k_20 = ATgetArgument(t, 1);
                                                      l_20 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = l_20;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_20, k_20);
                                                }
                                            }
                                        }
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
ATerm ElimId_0_0 (ATerm t)
{
  ATerm h_22 = NULL,j_22 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      j_22 = ATgetArgument(t, 0);
      t = j_22;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_q_10;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          j_22 = ATgetArgument(t, 0);
          t = j_22;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_h_10;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              j_22 = ATgetArgument(t, 0);
              h_22 = ATgetArgument(t, 1);
              t = h_22;
              if(match_cons(t, sym_Id_0))
                {
                  t = j_22;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = h_22;
                    }
                  else
                    {
                      t = j_22;
                    }
                }
              else
                {
                  t = j_22;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = h_22;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  j_22 = ATgetArgument(t, 0);
                  h_22 = ATgetArgument(t, 1);
                  t = j_22;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_q_10;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      j_22 = ATgetArgument(t, 0);
                      h_22 = ATgetArgument(t, 1);
                      t = h_22;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_q_10;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          j_22 = ATgetArgument(t, 0);
                          h_22 = ATgetArgument(t, 1);
                          t = h_22;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_q_10;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              j_22 = ATgetArgument(t, 0);
                              t = j_22;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_q_10;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  j_22 = ATgetArgument(t, 0);
                                  t = j_22;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_q_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      j_22 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = j_22;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_q_10;
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
ATerm Simplify_0_0 (ATerm t)
{
  ATerm s_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(u_10);
    }
  else
    {
      t = s_10;
      {
        ATerm v_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(x_10);
          }
        else
          {
            t = v_10;
            {
              ATerm y_10 = t;
              int a_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(a_11);
                }
              else
                {
                  t = y_10;
                  {
                    ATerm b_11 = t;
                    int e_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(e_11);
                      }
                    else
                      {
                        t = b_11;
                        {
                          ATerm f_11 = t;
                          int g_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(g_11);
                            }
                          else
                            {
                              t = f_11;
                              {
                                ATerm h_11 = t;
                                int k_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm k_23 = NULL,l_23 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        k_23 = ATgetArgument(t, 0);
                                        l_23 = ATgetArgument(t, 1);
                                        t = k_23;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = l_23;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            k_23 = ATgetArgument(t, 0);
                                            l_23 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = k_23;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = l_23;
                                      }
                                    LocalPopChoice(k_11);
                                  }
                                else
                                  {
                                    t = h_11;
                                    {
                                      ATerm l_11 = t;
                                      int t_11 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(t_11);
                                        }
                                      else
                                        {
                                          t = l_11;
                                          {
                                            ATerm w_11 = t;
                                            int z_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(z_11);
                                              }
                                            else
                                              {
                                                t = w_11;
                                                {
                                                  ATerm a_12 = t;
                                                  int b_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(b_12);
                                                    }
                                                  else
                                                    {
                                                      t = a_12;
                                                      {
                                                        ATerm h_12 = t;
                                                        int k_12 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(k_12);
                                                          }
                                                        else
                                                          {
                                                            t = h_12;
                                                            {
                                                              ATerm l_12 = t;
                                                              int v_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(v_12);
                                                                }
                                                              else
                                                                {
                                                                  t = l_12;
                                                                  {
                                                                    ATerm w_12 = t;
                                                                    int x_12 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(x_12);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = w_12;
                                                                        {
                                                                          ATerm y_12 = t;
                                                                          int z_12 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(z_12);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_12;
                                                                              {
                                                                                ATerm a_13 = t;
                                                                                int b_13 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(b_13);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = a_13;
                                                                                    {
                                                                                      ATerm q_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL;
                                                                                      t_23 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          u_23 = ATgetArgument(t, 0);
                                                                                          v_23 = ATgetArgument(t, 1);
                                                                                          t = u_23;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              q_23 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = t_23;
                                                                                          t = j_4(q_23, v_23, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              u_23 = ATgetArgument(t, 0);
                                                                                              v_23 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = u_23;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = v_23;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_2_0 (ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm t)
{
  static ATerm b_24 (ATerm t)
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_117(t);
        t = b_24(t);
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = m_117(t);
      }
    return(t);
  }
  t = b_24(t);
  return(t);
}
ATerm downup_1_0 (ATerm n_118 (ATerm), ATerm t)
{
  t = n_118(t);
  {
    static ATerm h_1 (ATerm t)
    {
      t = downup_1_0(n_118, t);
      return(t);
    }
    t = SRTS_all(h_1, t);
  }
  t = n_118(t);
  return(t);
}
ATerm CreateDef2_0_0 (ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL;
  d_24 = t;
  t = new_0_0(t);
  e_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_24), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, e_24, (ATerm)ATempty, (ATerm)ATempty, d_24)));
  return(t);
}
static ATerm z_24 (ATerm n_24, ATerm t)
{
  ATerm o_24 = NULL;
  t = SSL_explode_term(n_24);
  if(match_cons(t, sym__2))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_24;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
  s_24 = t;
  if(match_cons(t, sym__2))
    {
      q_24 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
      {
        ATerm f_13 = t;
        int g_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm i_1 (ATerm t)
            {
              t = r_24;
              return(t);
            }
            t = q_24;
            t = at_end_1_0(i_1, t);
            LocalPopChoice(g_13);
          }
        else
          {
            t = f_13;
            t = z_24(s_24, t);
          }
      }
    }
  else
    {
      t = z_24(s_24, t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm d_120 (ATerm), ATerm t)
{
  static ATerm c_25 (ATerm t)
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_120(t);
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        t = SRTS_all(c_25, t);
      }
    return(t);
  }
  t = c_25(t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_13;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_11 = ATgetFirst((ATermList) t);
      d_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_11, d_11);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm j_11 = NULL,m_11 = NULL,p_11 = NULL,s_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_13 = ATgetArgument(t, 0);
      if(match_cons(k_13, sym__2))
        {
          j_11 = ATgetArgument(k_13, 0);
          m_11 = ATgetArgument(k_13, 1);
        }
      else
        _fail(t);
      {
        ATerm l_13 = ATgetArgument(t, 1);
        if(match_cons(l_13, sym__2))
          {
            p_11 = ATgetArgument(l_13, 0);
            s_11 = ATgetArgument(l_13, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_11), j_11), (ATerm) ATinsert(CheckATermList(s_11), m_11));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm v_11 = NULL;
  v_11 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = term_r_13;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = term_u_13;
        }
      else
        {
          t = v_11;
        }
    }
  {
    ATerm v_13 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,j_12 = NULL;
        if(match_cons(t, sym_Let_2))
          {
            c_12 = ATgetArgument(t, 0);
            d_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_12;
        if(match_cons(t, sym_CallT_3))
          {
            e_12 = ATgetArgument(t, 0);
            g_12 = ATgetArgument(t, 1);
            j_12 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = e_12;
        if(match_cons(t, sym_SVar_1))
          {
            f_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_12), (ATerm)ATempty, (ATerm) ATempty), c_12);
        LocalPopChoice(b_14);
      }
    else
      {
        t = v_13;
        {
          ATerm c_14 = t;
          int h_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_14 = t;
              if((PushChoice() == 0))
                {
                  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,d_2 = NULL,c_2 = NULL;
                  t_12 = t;
                  if(match_cons(t, sym_CallT_3))
                    {
                      n_12 = ATgetArgument(t, 0);
                      o_12 = ATgetArgument(t, 1);
                      p_12 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_12);
                  m_12 = t;
                  t = n_12;
                  if(match_cons(t, sym_SVar_1))
                    {
                      r_12 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_12);
                  q_12 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, r_12);
                  c_2 = t;
                  t = SSLsetAnnotations(c_2, q_12);
                  s_12 = t;
                  t = o_12;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = p_12;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_CallT_3, s_12, o_12, p_12);
                  d_2 = t;
                  t = SSLsetAnnotations(d_2, m_12);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = i_14;
                }
              t = CreateDef2_0_0(t);
              LocalPopChoice(h_14);
            }
          else
            {
              t = c_14;
              {
                ATerm u_12 = NULL;
                u_12 = t;
                t = (ATerm) ATmakeAppl(sym__2, u_12, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_13;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_18 = ATgetFirst((ATermList) t);
      q_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_18, q_18);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm s_18 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_14 = ATgetArgument(t, 0);
      if(match_cons(j_14, sym__2))
        {
          s_18 = ATgetArgument(j_14, 0);
          c_19 = ATgetArgument(j_14, 1);
        }
      else
        _fail(t);
      {
        ATerm k_14 = ATgetArgument(t, 1);
        if(match_cons(k_14, sym__2))
          {
            d_19 = ATgetArgument(k_14, 0);
            e_19 = ATgetArgument(k_14, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_19), s_18), (ATerm) ATinsert(CheckATermList(e_19), c_19));
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm f_19 = NULL;
  f_19 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = term_r_13;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = term_u_13;
        }
      else
        {
          t = f_19;
        }
    }
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
        if(match_cons(t, sym_Let_2))
          {
            i_19 = ATgetArgument(t, 0);
            j_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_19;
        if(match_cons(t, sym_CallT_3))
          {
            k_19 = ATgetArgument(t, 0);
            m_19 = ATgetArgument(t, 1);
            n_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = k_19;
        if(match_cons(t, sym_SVar_1))
          {
            l_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_19;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_19;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_19), (ATerm)ATempty, (ATerm) ATempty), i_19);
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        {
          ATerm p_14 = t;
          int r_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_14 = t;
              if((PushChoice() == 0))
                {
                  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,k_2 = NULL,h_2 = NULL;
                  x_19 = t;
                  if(match_cons(t, sym_CallT_3))
                    {
                      r_19 = ATgetArgument(t, 0);
                      s_19 = ATgetArgument(t, 1);
                      t_19 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_19);
                  q_19 = t;
                  t = r_19;
                  if(match_cons(t, sym_SVar_1))
                    {
                      v_19 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_19);
                  u_19 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, v_19);
                  h_2 = t;
                  t = SSLsetAnnotations(h_2, u_19);
                  w_19 = t;
                  t = s_19;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = t_19;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_CallT_3, w_19, s_19, t_19);
                  k_2 = t;
                  t = SSLsetAnnotations(k_2, q_19);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = s_14;
                }
              t = CreateDef2_0_0(t);
              LocalPopChoice(r_14);
            }
          else
            {
              t = p_14;
              {
                ATerm y_19 = NULL;
                y_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, y_19, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
ATerm Canon_0_0 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
  h_39 = t;
  if(match_cons(t, sym_Rec_2))
    {
      i_39 = ATgetArgument(t, 0);
      j_39 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, i_39, (ATerm)ATempty, (ATerm)ATempty, j_39)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_39), (ATerm)ATempty, (ATerm) ATempty));
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          i_39 = ATgetArgument(t, 0);
          j_39 = ATgetArgument(t, 1);
          k_39 = ATgetArgument(t, 2);
          x_38 = ATgetArgument(t, 3);
          {
            ATerm q_39 = NULL;
            t = j_39;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = k_39;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = x_38;
            if(match_cons(t, sym_Rec_2))
              {
                y_38 = ATgetArgument(t, 0);
                z_38 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = z_38;
            {
              static ATerm j_1 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm t_14 = ATgetArgument(t, 0);
                    if(match_cons(t_14, sym_SVar_1))
                      {
                        if((y_38 != ATgetArgument(t_14, 0)))
                          {
                            _fail(ATgetArgument(t_14, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm u_14 = ATgetArgument(t, 1);
                      if(((ATgetType(u_14) != AT_LIST) || !(ATisEmpty(u_14))))
                        _fail(t);
                    }
                    {
                      ATerm v_14 = ATgetArgument(t, 2);
                      if(((ATgetType(v_14) != AT_LIST) || !(ATisEmpty(v_14))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_39), (ATerm)ATempty, (ATerm) ATempty);
                return(t);
              }
              t = alltd_1_0(j_1, t);
            }
            q_39 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, i_39, (ATerm)ATempty, (ATerm)ATempty, q_39);
          }
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              i_39 = ATgetArgument(t, 0);
              j_39 = ATgetArgument(t, 1);
              t = j_39;
              if(match_cons(t, sym_Seq_2))
                {
                  c_39 = ATgetArgument(t, 0);
                  d_39 = ATgetArgument(t, 1);
                  t = i_39;
                  if(match_cons(t, sym_Where_1))
                    {
                      b_39 = ATgetArgument(t, 0);
                      t = c_39;
                      if(match_cons(t, sym_Build_1))
                        {
                          a_39 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_39, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_39), d_39));
                    }
                  else
                    {
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = j_39;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Build_1))
                    {
                      c_39 = ATgetArgument(t, 0);
                      t = i_39;
                      if(match_cons(t, sym_Where_1))
                        {
                          b_39 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_39, (ATerm) ATmakeAppl(sym_Build_1, c_39));
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = j_39;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Id_0))
                        {
                          t = i_39;
                          if(match_cons(t, sym_Id_0))
                            {
                              t = i_39;
                            }
                          else
                            {
                              t = i_39;
                            }
                        }
                      else
                        {
                          t = i_39;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = j_39;
                        }
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  i_39 = ATgetArgument(t, 0);
                  j_39 = ATgetArgument(t, 1);
                  t = j_39;
                  if(match_cons(t, sym_Scope_2))
                    {
                      c_39 = ATgetArgument(t, 0);
                      d_39 = ATgetArgument(t, 1);
                      t = i_39;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          ATerm w_14 = t;
                          int x_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_40 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, i_39, c_39);
                              t = conc_0_0(t);
                              f_40 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_40, d_39);
                              LocalPopChoice(x_14);
                            }
                          else
                            {
                              t = w_14;
                              t = j_39;
                            }
                        }
                      else
                        {
                          ATerm k_40 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, i_39, c_39);
                          t = conc_0_0(t);
                          k_40 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, k_40, d_39);
                        }
                    }
                  else
                    {
                      t = i_39;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = j_39;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Thread_1))
                    {
                      i_39 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_z_14, (ATerm)ATinsert(ATempty, i_39), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          i_39 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, term_k_15, (ATerm)ATinsert(ATempty, i_39), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              i_39 = ATgetArgument(t, 0);
                              t = (ATerm) ATmakeAppl(sym_CallT_3, term_m_15, (ATerm)ATinsert(ATempty, i_39), (ATerm) ATempty);
                            }
                          else
                            {
                              if(match_cons(t, sym_All_1))
                                {
                                  i_39 = ATgetArgument(t, 0);
                                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_r_15, (ATerm)ATinsert(ATempty, i_39), (ATerm) ATempty);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Bagof_1))
                                    {
                                      i_39 = ATgetArgument(t, 0);
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_t_15, (ATerm)ATinsert(ATempty, i_39), (ATerm) ATempty);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_PrimT_3))
                                        {
                                          i_39 = ATgetArgument(t, 0);
                                          j_39 = ATgetArgument(t, 1);
                                          k_39 = ATgetArgument(t, 2);
                                          {
                                            ATerm u_15 = t;
                                            int v_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm k_6 = NULL;
                                                t = j_39;
                                                {
                                                  static ATerm v_7 (ATerm t)
                                                  {
                                                    ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
                                                    s_7 = t;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        t_7 = ATgetFirst((ATermList) t);
                                                        u_7 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm w_15 = t;
                                                      int x_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm r_8 = NULL,u_8 = NULL,d_9 = NULL,a_2 = NULL;
                                                          t = SSLgetAnnotations(s_7);
                                                          r_8 = t;
                                                          t = t_7;
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_r_13;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_Fail_0)))
                                                                _fail(t);
                                                              t = term_u_13;
                                                            }
                                                          u_8 = t;
                                                          t = u_7;
                                                          {
                                                            ATerm y_15 = t;
                                                            int z_15 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = v_7(t);
                                                                LocalPopChoice(z_15);
                                                              }
                                                            else
                                                              {
                                                                t = y_15;
                                                              }
                                                          }
                                                          d_9 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(d_9), u_8);
                                                          a_2 = t;
                                                          t = SSLsetAnnotations(a_2, r_8);
                                                          LocalPopChoice(x_15);
                                                        }
                                                      else
                                                        {
                                                          t = w_15;
                                                          {
                                                            ATerm c_10 = NULL,f_10 = NULL,b_2 = NULL;
                                                            t = SSLgetAnnotations(s_7);
                                                            c_10 = t;
                                                            t = u_7;
                                                            t = v_7(t);
                                                            f_10 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(f_10), t_7);
                                                            b_2 = t;
                                                            t = SSLsetAnnotations(b_2, c_10);
                                                          }
                                                        }
                                                    }
                                                    return(t);
                                                  }
                                                  t = v_7(t);
                                                }
                                                k_6 = t;
                                                t = (ATerm) ATmakeAppl(sym_PrimT_3, i_39, k_6, k_39);
                                                LocalPopChoice(v_15);
                                              }
                                            else
                                              {
                                                t = u_15;
                                                {
                                                  ATerm t_10 = NULL,w_10 = NULL,z_10 = NULL;
                                                  t = j_39;
                                                  t = genzip_4_0(l_1, m_1, n_1, o_1, t);
                                                  if(match_cons(t, sym__2))
                                                    {
                                                      t_10 = ATgetArgument(t, 0);
                                                      w_10 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = w_10;
                                                  t = concat_0_0(t);
                                                  z_10 = t;
                                                  {
                                                    ATerm a_16 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                          _fail(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = a_16;
                                                      }
                                                  }
                                                  t = (ATerm) ATmakeAppl(sym_Let_2, z_10, (ATerm) ATmakeAppl(sym_PrimT_3, i_39, t_10, k_39));
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              i_39 = ATgetArgument(t, 0);
                                              j_39 = ATgetArgument(t, 1);
                                              k_39 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          {
                                            ATerm b_16 = t;
                                            int c_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm o_13 = NULL;
                                                t = j_39;
                                                {
                                                  static ATerm i_15 (ATerm t)
                                                  {
                                                    ATerm a_15 = NULL,d_15 = NULL,h_15 = NULL;
                                                    a_15 = t;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        d_15 = ATgetFirst((ATermList) t);
                                                        h_15 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm d_16 = t;
                                                      int f_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm e_16 = NULL,h_16 = NULL,i_16 = NULL,e_2 = NULL;
                                                          t = SSLgetAnnotations(a_15);
                                                          e_16 = t;
                                                          t = d_15;
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_r_13;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_Fail_0)))
                                                                _fail(t);
                                                              t = term_u_13;
                                                            }
                                                          h_16 = t;
                                                          t = h_15;
                                                          {
                                                            ATerm g_16 = t;
                                                            int j_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = i_15(t);
                                                                LocalPopChoice(j_16);
                                                              }
                                                            else
                                                              {
                                                                t = g_16;
                                                              }
                                                          }
                                                          i_16 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(i_16), h_16);
                                                          e_2 = t;
                                                          t = SSLsetAnnotations(e_2, e_16);
                                                          LocalPopChoice(f_16);
                                                        }
                                                      else
                                                        {
                                                          t = d_16;
                                                          {
                                                            ATerm f_17 = NULL,k_17 = NULL,f_2 = NULL;
                                                            t = SSLgetAnnotations(a_15);
                                                            f_17 = t;
                                                            t = h_15;
                                                            t = i_15(t);
                                                            k_17 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(k_17), d_15);
                                                            f_2 = t;
                                                            t = SSLsetAnnotations(f_2, f_17);
                                                          }
                                                        }
                                                    }
                                                    return(t);
                                                  }
                                                  t = i_15(t);
                                                }
                                                o_13 = t;
                                                t = (ATerm) ATmakeAppl(sym_CallT_3, i_39, o_13, k_39);
                                                LocalPopChoice(c_16);
                                              }
                                            else
                                              {
                                                t = b_16;
                                                {
                                                  ATerm k_18 = NULL,l_18 = NULL,o_18 = NULL;
                                                  t = j_39;
                                                  t = genzip_4_0(p_1, r_1, s_1, t_1, t);
                                                  if(match_cons(t, sym__2))
                                                    {
                                                      k_18 = ATgetArgument(t, 0);
                                                      l_18 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = l_18;
                                                  t = concat_0_0(t);
                                                  o_18 = t;
                                                  {
                                                    ATerm m_16 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                          _fail(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = m_16;
                                                      }
                                                  }
                                                  t = (ATerm) ATmakeAppl(sym_Let_2, o_18, (ATerm) ATmakeAppl(sym_CallT_3, i_39, k_18, k_39));
                                                }
                                              }
                                          }
                                        }
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
static ATerm u_1 (ATerm t)
{
  ATerm n_16 = t;
  if((PushChoice() == 0))
    {
      ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL,e_3 = NULL;
      o_41 = t;
      if(match_cons(t, sym_Var_1))
        {
          n_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_41);
      m_41 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, n_41);
      e_3 = t;
      t = SSLsetAnnotations(e_3, m_41);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_16;
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_13;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_41 = ATgetFirst((ATermList) t);
      q_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_41, q_41);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_16 = ATgetArgument(t, 0);
      if(match_cons(q_16, sym__2))
        {
          r_41 = ATgetArgument(q_16, 0);
          s_41 = ATgetArgument(q_16, 1);
        }
      else
        _fail(t);
      {
        ATerm r_16 = ATgetArgument(t, 1);
        if(match_cons(r_16, sym__2))
          {
            t_41 = ATgetArgument(r_16, 0);
            u_41 = ATgetArgument(r_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_41), r_41), (ATerm) ATinsert(CheckATermList(u_41), s_41));
  return(t);
}
static ATerm y_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_13;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_41 = ATgetFirst((ATermList) t);
      w_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_41, w_41);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_16 = ATgetArgument(t, 0);
      if(match_cons(s_16, sym__2))
        {
          x_41 = ATgetArgument(s_16, 0);
          y_41 = ATgetArgument(s_16, 1);
        }
      else
        _fail(t);
      {
        ATerm t_16 = ATgetArgument(t, 1);
        if(match_cons(t_16, sym__2))
          {
            z_41 = ATgetArgument(t_16, 0);
            a_42 = ATgetArgument(t_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_41), x_41), (ATerm) ATinsert(CheckATermList(a_42), y_41));
  return(t);
}
static ATerm r_5 (ATerm g_73, ATerm h_73, ATerm i_73, ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,f_3 = NULL;
  t = i_73;
  t = fetch_1_0(u_1, t);
  t = i_73;
  t = genzip_4_0(v_1, w_1, x_1, LiftPrimArg_0_0, t);
  l_41 = t;
  if(match_cons(t, sym__2))
    {
      h_41 = ATgetArgument(t, 0);
      i_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_41);
  g_41 = t;
  t = h_41;
  t = concat_0_0(t);
  j_41 = t;
  t = i_41;
  t = genzip_4_0(y_1, i_2, j_2, _id, t);
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_41, k_41);
  f_3 = t;
  t = SSLsetAnnotations(f_3, g_41);
  if(match_cons(t, sym__2))
    {
      d_41 = ATgetArgument(t, 0);
      {
        ATerm u_16 = ATgetArgument(t, 1);
        if(match_cons(u_16, sym__2))
          {
            e_41 = ATgetArgument(u_16, 0);
            f_41 = ATgetArgument(u_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, d_41, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, e_41), (ATerm) ATmakeAppl(sym_CallT_3, g_73, h_73, f_41)));
  return(t);
}
ATerm genzip_4_0 (ATerm b_127 (ATerm), ATerm c_127 (ATerm), ATerm d_127 (ATerm), ATerm e_127 (ATerm), ATerm t)
{
  static ATerm i_42 (ATerm t)
  {
    ATerm v_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_127(t);
        LocalPopChoice(w_16);
      }
    else
      {
        t = v_16;
        {
          ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_3 = NULL;
          t = c_127(t);
          h_42 = t;
          if(match_cons(t, sym__2))
            {
              d_42 = ATgetArgument(t, 0);
              e_42 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_42);
          c_42 = t;
          t = d_42;
          t = e_127(t);
          f_42 = t;
          t = e_42;
          t = i_42(t);
          g_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_42, g_42);
          i_3 = t;
          t = SSLsetAnnotations(i_3, c_42);
          t = d_127(t);
        }
      }
    return(t);
  }
  t = i_42(t);
  return(t);
}
ATerm at_end_1_0 (ATerm o_125 (ATerm), ATerm t)
{
  static ATerm w_42 (ATerm t)
  {
    ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL;
    v_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_42 = ATgetFirst((ATermList) t);
        u_42 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_20 = NULL,p_20 = NULL,m_3 = NULL;
          t = SSLgetAnnotations(v_42);
          h_20 = t;
          t = u_42;
          t = w_42(t);
          p_20 = t;
          t = (ATerm) ATinsert(CheckATermList(p_20), t_42);
          m_3 = t;
          t = SSLsetAnnotations(m_3, h_20);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_42;
        t = o_125(t);
      }
    return(t);
  }
  t = w_42(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL;
  z_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_42;
    }
  else
    {
      static ATerm l_2 (ATerm t)
      {
        t = not_null(b_43);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_43 = ATgetFirst((ATermList) t);
          if(((b_43 != NULL) && (b_43 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            b_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_43;
      t = at_end_1_0(l_2, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm q_43 (ATerm h_43, ATerm t)
{
  ATerm j_43 = NULL;
  t = h_43;
  {
    ATerm x_16 = t;
    if((PushChoice() == 0))
      {
        ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL,q_3 = NULL;
        m_43 = t;
        if(match_cons(t, sym_Var_1))
          {
            l_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_43);
        k_43 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, l_43);
        q_3 = t;
        t = SSLsetAnnotations(q_3, k_43);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_16;
      }
  }
  t = new_0_0(t);
  j_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, j_43), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_43), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_43)))), (ATerm) ATmakeAppl(sym_Var_1, j_43)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL;
  n_43 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_43 = ATgetArgument(t, 0);
      {
        ATerm y_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_43(n_43, t);
            LocalPopChoice(z_16);
          }
        else
          {
            t = y_16;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_q_10, (ATerm) ATmakeAppl(sym_Var_1, o_43)));
          }
      }
    }
  else
    {
      t = q_43(n_43, t);
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm a_17 = t;
  if((PushChoice() == 0))
    {
      ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,u_3 = NULL;
      b_22 = t;
      if(match_cons(t, sym_Var_1))
        {
          a_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_22);
      z_21 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, a_22);
      u_3 = t;
      t = SSLsetAnnotations(u_3, z_21);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_17;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_13;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_22 = ATgetFirst((ATermList) t);
      d_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_22, d_22);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,k_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_17 = ATgetArgument(t, 0);
      if(match_cons(b_17, sym__2))
        {
          e_22 = ATgetArgument(b_17, 0);
          f_22 = ATgetArgument(b_17, 1);
        }
      else
        _fail(t);
      {
        ATerm c_17 = ATgetArgument(t, 1);
        if(match_cons(c_17, sym__2))
          {
            g_22 = ATgetArgument(c_17, 0);
            k_22 = ATgetArgument(c_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_22), e_22), (ATerm) ATinsert(CheckATermList(k_22), f_22));
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_13;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_22 = ATgetFirst((ATermList) t);
      m_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_22, m_22);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm n_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_17 = ATgetArgument(t, 0);
      if(match_cons(d_17, sym__2))
        {
          n_22 = ATgetArgument(d_17, 0);
          v_22 = ATgetArgument(d_17, 1);
        }
      else
        _fail(t);
      {
        ATerm e_17 = ATgetArgument(t, 1);
        if(match_cons(e_17, sym__2))
          {
            w_22 = ATgetArgument(e_17, 0);
            x_22 = ATgetArgument(e_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_22), n_22), (ATerm) ATinsert(CheckATermList(x_22), v_22));
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm g_17 = t;
  if((PushChoice() == 0))
    {
      ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,y_3 = NULL;
      i_24 = t;
      if(match_cons(t, sym_Var_1))
        {
          h_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_24);
      g_24 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, h_24);
      y_3 = t;
      t = SSLsetAnnotations(y_3, g_24);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_17;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_13;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_24 = ATgetFirst((ATermList) t);
      k_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_24, k_24);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,v_24 = NULL,w_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_17 = ATgetArgument(t, 0);
      if(match_cons(h_17, sym__2))
        {
          l_24 = ATgetArgument(h_17, 0);
          m_24 = ATgetArgument(h_17, 1);
        }
      else
        _fail(t);
      {
        ATerm i_17 = ATgetArgument(t, 1);
        if(match_cons(i_17, sym__2))
          {
            v_24 = ATgetArgument(i_17, 0);
            w_24 = ATgetArgument(i_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_24), l_24), (ATerm) ATinsert(CheckATermList(w_24), m_24));
  return(t);
}
static ATerm d_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_13;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_24 = ATgetFirst((ATermList) t);
      y_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_24, y_24);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,d_25 = NULL,e_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_17 = ATgetArgument(t, 0);
      if(match_cons(j_17, sym__2))
        {
          a_25 = ATgetArgument(j_17, 0);
          b_25 = ATgetArgument(j_17, 1);
        }
      else
        _fail(t);
      {
        ATerm l_17 = ATgetArgument(t, 1);
        if(match_cons(l_17, sym__2))
          {
            d_25 = ATgetArgument(l_17, 0);
            e_25 = ATgetArgument(l_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_25), a_25), (ATerm) ATinsert(CheckATermList(e_25), b_25));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL;
  j_46 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      k_46 = ATgetArgument(t, 0);
      l_46 = ATgetArgument(t, 1);
      i_46 = ATgetArgument(t, 2);
      {
        ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,x_3 = NULL;
        t = i_46;
        t = fetch_1_0(m_2, t);
        t = i_46;
        t = genzip_4_0(n_2, o_2, p_2, LiftPrimArg_0_0, t);
        y_21 = t;
        if(match_cons(t, sym__2))
          {
            u_21 = ATgetArgument(t, 0);
            v_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_21);
        t_21 = t;
        t = u_21;
        t = concat_0_0(t);
        w_21 = t;
        t = v_21;
        t = genzip_4_0(q_2, t_2, u_2, _id, t);
        x_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_21, x_21);
        x_3 = t;
        t = SSLsetAnnotations(x_3, t_21);
        if(match_cons(t, sym__2))
          {
            q_21 = ATgetArgument(t, 0);
            {
              ATerm o_17 = ATgetArgument(t, 1);
              if(match_cons(o_17, sym__2))
                {
                  r_21 = ATgetArgument(o_17, 0);
                  s_21 = ATgetArgument(o_17, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, q_21, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_21), (ATerm) ATmakeAppl(sym_PrimT_3, k_46, l_46, s_21)));
      }
    }
  else
    {
      ATerm j_23 = NULL,m_23 = NULL,n_23 = NULL,r_23 = NULL,s_23 = NULL,z_23 = NULL,a_24 = NULL,c_24 = NULL,f_24 = NULL,z_3 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          k_46 = ATgetArgument(t, 0);
          l_46 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_46;
      t = fetch_1_0(z_2, t);
      t = l_46;
      t = genzip_4_0(a_3, b_3, c_3, LiftPrimArg_0_0, t);
      f_24 = t;
      if(match_cons(t, sym__2))
        {
          s_23 = ATgetArgument(t, 0);
          z_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_24);
      r_23 = t;
      t = s_23;
      t = concat_0_0(t);
      a_24 = t;
      t = z_23;
      t = genzip_4_0(d_3, g_3, h_3, _id, t);
      c_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_24, c_24);
      z_3 = t;
      t = SSLsetAnnotations(z_3, r_23);
      if(match_cons(t, sym__2))
        {
          j_23 = ATgetArgument(t, 0);
          {
            ATerm p_17 = ATgetArgument(t, 1);
            if(match_cons(p_17, sym__2))
              {
                m_23 = ATgetArgument(p_17, 0);
                n_23 = ATgetArgument(p_17, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, j_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_23), (ATerm) ATmakeAppl(sym_PrimT_3, k_46, (ATerm)ATempty, n_23)));
    }
  return(t);
}
ATerm downup2_2_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm t)
{
  t = q_118(t);
  {
    static ATerm j_3 (ATerm t)
    {
      t = downup2_2_0(q_118, r_118, t);
      return(t);
    }
    t = SRTS_all(j_3, t);
  }
  t = r_118(t);
  return(t);
}
static ATerm w_5 (ATerm k_47, ATerm m_47, ATerm t)
{
  ATerm o_46 = NULL;
  t = SSL_fputc(k_47, m_47);
  o_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_46);
  return(t);
}
static ATerm x_5 (ATerm n_31, ATerm o_31, ATerm t)
{
  ATerm p_46 = NULL;
  t = SSL_write_term_to_stream_text(n_31, o_31);
  p_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_46);
  return(t);
}
static ATerm z_5 (ATerm o_124 (ATerm), ATerm u_182, ATerm t_31, ATerm t)
{
  ATerm q_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_182, term_q_17);
  t = d_6(t);
  q_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_46, t_31);
  t = o_124(t);
  t = fclose_0_0(t);
  t = t_31;
  return(t);
}
static ATerm y_5 (ATerm j_31, ATerm k_31, ATerm t)
{
  ATerm r_46 = NULL;
  t = SSL_write_term_to_stream_baf(j_31, k_31);
  r_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_46);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_17 = ATgetArgument(t, 0);
      if(match_cons(r_17, sym_Stream_1))
        {
          s_25 = ATgetArgument(r_17, 0);
        }
      else
        _fail(t);
      t_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(s_25, t_25, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      if(match_cons(s_17, sym_Stream_1))
        {
          h_26 = ATgetArgument(s_17, 0);
        }
      else
        _fail(t);
      i_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(h_26, i_26, t);
  e_26 = t;
  t = term_u_17;
  f_26 = t;
  t = e_26;
  if(match_cons(t, sym_Stream_1))
    {
      g_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_17, e_26);
  t = w_5(f_26, g_26, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,m_48 = NULL,n_48 = NULL,g_4 = NULL,f_4 = NULL;
  w_46 = t;
  if(match_cons(t, sym__2))
    {
      d_47 = ATgetArgument(t, 0);
      e_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_46);
  c_47 = t;
  t = d_47;
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((v_46 != NULL) && (v_46 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(n_3, t);
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        t = term_z_17;
        v_46 = t;
      }
  }
  f_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_47, e_47);
  f_4 = t;
  t = SSLsetAnnotations(f_4, c_47);
  t = w_46;
  if(match_cons(t, sym__2))
    {
      y_46 = ATgetArgument(t, 0);
      z_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_46);
  x_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_46, (ATerm) ATmakeAppl(sym__2, not_null(v_46), z_46));
  g_4 = t;
  t = SSLsetAnnotations(g_4, x_46);
  b_47 = t;
  if(match_cons(t, sym__2))
    {
      m_48 = ATgetArgument(t, 0);
      n_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,i_4 = NULL;
        t = SSLgetAnnotations(b_47);
        l_25 = t;
        t = m_48;
        t = fetch_1_0(o_3, t);
        o_25 = t;
        t = n_48;
        if(match_cons(t, sym__2))
          {
            q_25 = ATgetArgument(t, 0);
            r_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_5(t_3, q_25, r_25, t);
        p_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_25, p_25);
        i_4 = t;
        t = SSLsetAnnotations(i_4, l_25);
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        {
          ATerm y_25 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,k_4 = NULL;
          t = SSLgetAnnotations(b_47);
          y_25 = t;
          t = n_48;
          if(match_cons(t, sym__2))
            {
              c_26 = ATgetArgument(t, 0);
              d_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_5(w_3, c_26, d_26, t);
          b_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_48, b_26);
          k_4 = t;
          t = SSLsetAnnotations(k_4, y_25);
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
ATerm apply_strategy_1_0 (ATerm j_141 (ATerm), ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL;
  u_48 = t;
  t = dtime_0_0(t);
  t = u_48;
  t = j_141(t);
  t_48 = t;
  t = dtime_0_0(t);
  q_48 = t;
  t = t_48;
  if(match_cons(t, sym__2))
    {
      r_48 = ATgetArgument(t, 0);
      s_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_48), (ATerm) ATmakeAppl(sym_Runtime_1, q_48)), s_48);
  return(t);
}
static ATerm i_49 (ATerm c_49, ATerm t)
{
  t = SSL_fclose(c_49);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL;
  g_49 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_49 = ATgetArgument(t, 0);
      {
        ATerm c_18 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_49);
            LocalPopChoice(d_18);
          }
        else
          {
            t = c_18;
            t = i_49(g_49, t);
          }
      }
    }
  else
    {
      t = i_49(g_49, t);
    }
  return(t);
}
static ATerm a_6 (ATerm p_31, ATerm t)
{
  t = SSL_read_term_from_stream(p_31);
  return(t);
}
static ATerm b_6 (ATerm c_46, ATerm d_46, ATerm t)
{
  t = SSL_strcat(c_46, d_46);
  return(t);
}
static ATerm c_6 (ATerm n_47, ATerm p_47, ATerm t)
{
  ATerm j_49 = NULL;
  t = SSL_fopen(n_47, p_47);
  j_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_49);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_49 = NULL;
  t = SSL_stdin_stream();
  k_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_49);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_49 = NULL;
  t = SSL_stdout_stream();
  l_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_49);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_49 = NULL;
  t = SSL_stderr_stream();
  m_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_49);
  return(t);
}
static ATerm v_50 (ATerm s_49, ATerm t)
{
  ATerm t_49 = NULL;
  t = SSL_explode_term(s_49);
  if(match_cons(t, sym__2))
    {
      ATerm e_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_18 = ATgetArgument(t, 1);
        if(((ATgetType(f_18) == AT_LIST) && !(ATisEmpty(f_18))))
          {
            t_49 = ATgetFirst((ATermList) f_18);
            {
              ATerm g_18 = (ATerm) ATgetNext((ATermList) f_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_49;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_49;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_49;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_49;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm w_50 (ATerm w_49, ATerm x_49, ATerm y_49, ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,e_50 = NULL,p_4 = NULL;
  t = SSLgetAnnotations(y_49);
  b_50 = t;
  t = w_49;
  if(match_cons(t, sym_Path_1))
    {
      e_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_50, x_49);
  p_4 = t;
  t = SSLsetAnnotations(p_4, b_50);
  if(match_cons(t, sym__2))
    {
      z_49 = ATgetArgument(t, 0);
      a_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(z_49, a_50, t);
  return(t);
}
static ATerm x_50 (ATerm g_50, ATerm h_50, ATerm k_50, ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL,q_50 = NULL,q_4 = NULL;
  t = SSLgetAnnotations(k_50);
  n_50 = t;
  t = SSL_is_string(g_50);
  q_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_50, h_50);
  q_4 = t;
  t = SSLsetAnnotations(q_4, n_50);
  if(match_cons(t, sym__2))
    {
      l_50 = ATgetArgument(t, 0);
      m_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(l_50, m_50, t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
  s_50 = t;
  if(match_cons(t, sym__2))
    {
      t_50 = ATgetArgument(t, 0);
      u_50 = ATgetArgument(t, 1);
      {
        ATerm h_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_50(s_50, t);
            LocalPopChoice(i_18);
          }
        else
          {
            t = h_18;
            {
              ATerm j_18 = t;
              int m_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_50(t_50, u_50, s_50, t);
                  LocalPopChoice(m_18);
                }
              else
                {
                  t = j_18;
                  t = x_50(t_50, u_50, s_50, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_50(s_50, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL,g_51 = NULL;
  g_51 = t;
  {
    ATerm n_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_51, term_t_18);
        t = d_6(t);
        LocalPopChoice(r_18);
      }
    else
      {
        t = n_18;
        {
          ATerm t_26 = NULL,u_26 = NULL;
          t = term_u_18;
          u_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_18, g_51);
          t = b_6(u_26, g_51, t);
          t_26 = t;
          t = SSL_perror(t_26);
          _fail(t);
        }
      }
  }
  a_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(b_51, t);
  z_50 = t;
  t = a_51;
  t = fclose_0_0(t);
  t = z_50;
  return(t);
}
ATerm fetch_1_0 (ATerm h_125 (ATerm), ATerm t)
{
  static ATerm g_52 (ATerm t)
  {
    ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL;
    d_52 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_52 = ATgetFirst((ATermList) t);
        f_52 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_18 = t;
      int w_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_26 = NULL,c_27 = NULL,v_4 = NULL;
          t = SSLgetAnnotations(d_52);
          z_26 = t;
          t = e_52;
          t = h_125(t);
          c_27 = t;
          t = (ATerm) ATinsert(CheckATermList(f_52), c_27);
          v_4 = t;
          t = SSLsetAnnotations(v_4, z_26);
          LocalPopChoice(w_18);
        }
      else
        {
          t = v_18;
          {
            ATerm k_27 = NULL,n_27 = NULL,w_4 = NULL;
            t = SSLgetAnnotations(d_52);
            k_27 = t;
            t = f_52;
            t = g_52(t);
            n_27 = t;
            t = (ATerm) ATinsert(CheckATermList(n_27), e_52);
            w_4 = t;
            t = SSLsetAnnotations(w_4, k_27);
          }
        }
    }
    return(t);
  }
  t = g_52(t);
  return(t);
}
static ATerm g_6 (ATerm h_62, ATerm i_62, ATerm t)
{
  t = SSL_table_get(h_62, i_62);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_139 (ATerm), ATerm t)
{
  ATerm k_52 = NULL;
  k_52 = t;
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL;
        t = term_z_18;
        n_52 = t;
        t = term_a_19;
        o_52 = t;
        t = term_b_19;
        t = g_6(n_52, o_52, t);
        m_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_52, term_g_19);
        t = geq_0_0(t);
        t = k_52;
        t = s_139(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = k_52;
      }
  }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm r_52 = NULL;
  r_52 = t;
  if(match_string(t, "-k"))
    {
      t = r_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_52;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL;
  s_52 = t;
  t = SSL_string_to_int(s_52);
  t_52 = t;
  t = term_h_19;
  u_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_19, t_52);
  t = j_6(u_52, t_52, t);
  t = s_52;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_o_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_4, b_4, c_4, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm w_52 = NULL;
  w_52 = t;
  if(match_string(t, "-S"))
    {
      t = w_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_52;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL;
  t = term_a_19;
  x_52 = t;
  t = term_p_19;
  y_52 = t;
  t = term_z_19;
  t = j_6(x_52, y_52, t);
  t = term_a_20;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL;
  z_52 = t;
  t = SSL_string_to_int(z_52);
  a_53 = t;
  t = term_a_19;
  b_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_19, a_53);
  t = j_6(b_53, a_53, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_52);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_c_20;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL;
  t = term_d_20;
  c_53 = t;
  t = term_x_7;
  d_53 = t;
  t = term_e_20;
  t = j_6(c_53, d_53, t);
  t = term_f_20;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_4, e_4, h_4, t);
      LocalPopChoice(m_20);
    }
  else
    {
      t = i_20;
      {
        ATerm n_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_4, m_4, n_4, t);
            LocalPopChoice(o_20);
          }
        else
          {
            t = n_20;
            t = Option_3_0(o_4, t_4, u_4, t);
          }
      }
    }
  return(t);
}
static ATerm j_6 (ATerm v_55, ATerm w_55, ATerm t)
{
  ATerm e_53 = NULL;
  t = term_z_18;
  e_53 = t;
  t = SSL_table_put(e_53, v_55, w_55);
  t = (ATerm) ATmakeAppl(sym__3, term_z_18, v_55, w_55);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm h_53 = NULL,i_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL;
      t = term_x_7;
      t = e_0(t);
      j_53 = t;
      t = term_q_20;
      k_53 = t;
      t = term_r_20;
      l_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_20, term_r_20, j_53);
      t = h_6(k_53, l_53, j_53, t);
      _fail(t);
    }
  else
    {
      ATerm o_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_53 = ATgetFirst((ATermList) t);
          i_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_53;
      t = c_0(t);
      t = term_x_7;
      t = d_0(t);
      o_53 = t;
      t = (ATerm) ATinsert(CheckATermList(i_53), o_53);
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm q_53 = NULL;
  q_53 = t;
  if(match_string(t, "-o"))
    {
      t = q_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_53;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL;
  r_53 = t;
  t = term_s_20;
  s_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_20, r_53);
  t = j_6(s_53, r_53, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_53);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_t_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, z_4, b_5, t);
  return(t);
}
static ATerm h_6 (ATerm q_60, ATerm r_60, ATerm p_60, ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL;
  u_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_60, r_60);
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_20 = ATgetArgument(t, 0);
            ATerm x_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_60, r_60);
        t = g_6(q_60, r_60, t);
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
        t = (ATerm) ATempty;
      }
  }
  v_53 = t;
  t = (ATerm) ATinsert(CheckATermList(v_53), p_60);
  w_53 = t;
  t = SSL_table_put(q_60, r_60, w_53);
  t = u_53;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL;
      t = term_x_7;
      t = n_0(t);
      h_54 = t;
      t = term_q_20;
      i_54 = t;
      t = term_r_20;
      j_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_20, term_r_20, h_54);
      t = h_6(i_54, j_54, h_54, t);
      _fail(t);
    }
  else
    {
      ATerm n_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_54 = ATgetFirst((ATermList) t);
          e_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_54;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_54 = ATgetFirst((ATermList) t);
          g_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_54;
      t = k_0(t);
      t = f_54;
      t = l_0(t);
      n_54 = t;
      t = (ATerm) ATinsert(CheckATermList(g_54), n_54);
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm p_54 = NULL;
  p_54 = t;
  if(match_string(t, "-i"))
    {
      t = p_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_54;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL;
  q_54 = t;
  t = term_y_20;
  r_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_20, q_54);
  t = j_6(r_54, q_54, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_54);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_5, h_5, j_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_7;
  t = whoami_0_0(t);
  s_54 = t;
  t = term_y_7;
  u_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_21), s_54);
  v_54 = t;
  t = SSL_printnl(u_54, v_54);
  t = term_i_8;
  t_54 = t;
  t = SSL_exit(t_54);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_54 = NULL,x_54 = NULL;
  t = term_z_18;
  w_54 = t;
  t = term_b_21;
  x_54 = t;
  t = term_c_21;
  t = g_6(w_54, x_54, t);
  return(t);
}
static ATerm e_6 (ATerm i_50, ATerm j_50, ATerm t)
{
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_50, j_50);
      LocalPopChoice(e_21);
    }
  else
    {
      t = d_21;
      t = SSL_addr(i_50, j_50);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_131 (ATerm), ATerm p_131 (ATerm), ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL;
  z_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_54;
      t = o_131(t);
    }
  else
    {
      ATerm e_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_55 = ATgetFirst((ATermList) t);
          b_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_55;
      t = foldr_2_0(o_131, p_131, t);
      e_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_55, e_55);
      t = p_131(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_p_19;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL;
  if(match_cons(t, sym__2))
    {
      w_27 = ATgetArgument(t, 0);
      x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(w_27, x_27, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_55 = NULL,s_27 = NULL,t_27 = NULL;
  t = times_0_0(t);
  t_27 = t;
  t = SSL_explode_term(t_27);
  if(match_cons(t, sym__2))
    {
      ATerm f_21 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_27;
  t = foldr_2_0(k_5, l_5, t);
  h_55 = t;
  t = SSL_TicksToSeconds(h_55);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL;
  s_55 = t;
  if(match_cons(t, sym__2))
    {
      t_55 = ATgetArgument(t, 0);
      u_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_55;
        if((t_55 != t))
          {
            _fail(t);
          }
        t = s_55;
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = (ATerm) ATmakeAppl(sym__2, t_55, u_55);
        {
          ATerm i_21 = t;
          int j_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_55, u_55);
              LocalPopChoice(j_21);
            }
          else
            {
              t = i_21;
              t = SSL_gtr(t_55, u_55);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_55, u_55);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_139 (ATerm), ATerm t)
{
  ATerm a_56 = NULL;
  a_56 = t;
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL;
        t = term_z_18;
        d_56 = t;
        t = term_a_19;
        e_56 = t;
        t = term_b_19;
        t = g_6(d_56, e_56, t);
        c_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_56, term_i_8);
        t = geq_0_0(t);
        t = a_56;
        t = r_139(t);
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        t = a_56;
      }
  }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL,j_56 = NULL,k_56 = NULL;
  t = run_time_0_0(t);
  g_56 = t;
  t = term_x_7;
  t = whoami_0_0(t);
  h_56 = t;
  t = term_y_7;
  j_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_21), g_56), term_m_21), h_56);
  k_56 = t;
  t = SSL_printnl(j_56, k_56);
  t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_21), g_56), term_m_21), h_56));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_19;
  l_56 = t;
  t = SSL_exit(l_56);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL;
  w_56 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_56;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_56 = ATgetArgument(t, 0);
          {
            ATerm j_28 = NULL,g_5 = NULL;
            t = SSLgetAnnotations(w_56);
            j_28 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_56);
            g_5 = t;
            t = SSLsetAnnotations(g_5, j_28);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_56;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_142 (ATerm), ATerm t)
{
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_56 = NULL,p_56 = NULL;
      t = term_z_18;
      o_56 = t;
      t = term_i_22;
      p_56 = t;
      t = term_o_22;
      t = g_6(o_56, p_56, t);
      LocalPopChoice(p_21);
    }
  else
    {
      t = o_21;
      t = fetch_1_0(n_5, t);
    }
  t = h_142(t);
  return(t);
}
ATerm map_1_0 (ATerm x_124 (ATerm), ATerm t)
{
  static ATerm q_57 (ATerm t)
  {
    ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL;
    n_57 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_57;
      }
    else
      {
        ATerm r_28 = NULL,u_28 = NULL,v_28 = NULL,l_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_57 = ATgetFirst((ATermList) t);
            p_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_57);
        r_28 = t;
        t = o_57;
        t = x_124(t);
        u_28 = t;
        t = p_57;
        t = q_57(t);
        v_28 = t;
        t = (ATerm) ATinsert(CheckATermList(v_28), u_28);
        l_6 = t;
        t = SSLsetAnnotations(l_6, r_28);
      }
    return(t);
  }
  t = q_57(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_57 = ATgetFirst((ATermList) t);
      u_57 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_57 = NULL,z_57 = NULL;
        static ATerm o_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_57)), not_null(z_57));
          return(t);
        }
        t = u_57;
        t = i_0(t);
        if(((y_57 != NULL) && (y_57 != t)))
          _fail(t);
        else
          y_57 = t;
        t = t_57;
        t = g_0(t);
        if(((z_57 != NULL) && (z_57 != t)))
          _fail(t);
        else
          z_57 = t;
        t = u_57;
        t = reverse_acc_2_0(g_0, o_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_7;
      t = i_0(t);
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL,x_6 = NULL;
  h_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_58);
  f_58 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_58);
  x_6 = t;
  t = SSLsetAnnotations(x_6, f_58);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm j_58 = NULL;
  j_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_58), term_p_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL;
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_58 = NULL,e_58 = NULL;
      t = term_z_18;
      d_58 = t;
      t = term_b_21;
      e_58 = t;
      t = term_c_21;
      t = g_6(d_58, e_58, t);
      LocalPopChoice(r_22);
    }
  else
    {
      t = q_22;
      t = fetch_1_0(p_5, t);
    }
  t = term_s_22;
  t = echo_0_0(t);
  t = term_q_20;
  b_58 = t;
  t = term_r_20;
  c_58 = t;
  t = term_t_22;
  t = g_6(b_58, c_58, t);
  t = reverse_acc_2_0(_id, q_5, t);
  t = map_1_0(s_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL;
  l_58 = t;
  {
    ATerm u_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_58;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_22 = ATgetFirst((ATermList) t);
                ATerm a_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_58;
          }
        LocalPopChoice(y_22);
      }
    else
      {
        t = u_22;
        t = (ATerm) ATinsert(ATempty, l_58);
      }
  }
  m_58 = t;
  t = term_z_17;
  n_58 = t;
  t = SSL_printnl(n_58, m_58);
  t = l_58;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_58 = NULL,s_58 = NULL;
  t = term_z_18;
  r_58 = t;
  t = term_b_21;
  s_58 = t;
  t = term_c_21;
  t = g_6(r_58, s_58, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL;
  t = term_b_23;
  t_58 = t;
  t = term_x_7;
  u_58 = t;
  t = term_c_23;
  t = j_6(t_58, u_58, t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_d_23;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL;
  t = term_b_23;
  x_58 = t;
  t = term_x_7;
  y_58 = t;
  t = term_c_23;
  t = j_6(x_58, y_58, t);
  t = term_e_23;
  v_58 = t;
  t = term_x_7;
  w_58 = t;
  t = term_f_23;
  t = j_6(v_58, w_58, t);
  t = term_g_23;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_5, u_5, v_5, t);
      LocalPopChoice(o_23);
    }
  else
    {
      t = i_23;
      t = Option_3_0(f_6, i_6, m_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,z_6 = NULL;
  e_59 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_59 = ATgetFirst((ATermList) t);
      b_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_59);
  z_58 = t;
  t = a_59;
  t = h_96(t);
  c_59 = t;
  t = b_59;
  t = i_96(t);
  d_59 = t;
  t = (ATerm) ATinsert(CheckATermList(d_59), c_59);
  z_6 = t;
  t = SSLsetAnnotations(z_6, z_58);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_144 (ATerm), ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,o_59 = NULL,p_59 = NULL,b_7 = NULL;
  j_59 = t;
  {
    ATerm p_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_23;
        t = k_144(t);
        LocalPopChoice(w_23);
      }
    else
      {
        t = p_23;
      }
  }
  t = j_59;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_59 = ATgetFirst((ATermList) t);
      m_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_59);
  k_59 = t;
  t = term_b_21;
  p_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_21, l_59);
  t = j_6(p_59, l_59, t);
  t = m_59;
  {
    static ATerm e_60 (ATerm t)
    {
      ATerm y_23 = t;
      int p_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_24 = t;
          int u_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_59 = NULL;
              s_59 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_59;
              LocalPopChoice(u_24);
            }
          else
            {
              t = t_24;
              t = k_144(t);
              t = Cons_2_0(_id, e_60, t);
            }
          LocalPopChoice(p_24);
        }
      else
        {
          t = y_23;
          {
            ATerm v_59 = NULL,w_59 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_59 = ATgetFirst((ATermList) t);
                w_59 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_59), (ATerm) ATmakeAppl(sym_Undefined_1, v_59));
          }
        }
      return(t);
    }
    t = e_60(t);
  }
  o_59 = t;
  t = (ATerm) ATinsert(CheckATermList(o_59), (ATerm) ATmakeAppl(sym_Program_1, l_59));
  b_7 = t;
  t = SSLsetAnnotations(b_7, k_59);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm u_60 = NULL;
  u_60 = t;
  if(match_string(t, "--help"))
    {
      t = u_60;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_60;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_60;
        }
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL;
  t = term_i_22;
  v_60 = t;
  t = term_x_7;
  w_60 = t;
  t = term_f_25;
  t = j_6(v_60, w_60, t);
  t = term_g_25;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_h_25;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_144 (ATerm), ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,o_60 = NULL,s_60 = NULL,t_60 = NULL;
  l_60 = t;
  t = term_q_20;
  o_60 = t;
  t = term_r_20;
  s_60 = t;
  t = (ATerm) ATempty;
  t_60 = t;
  t = SSL_table_put(o_60, s_60, t_60);
  t = l_60;
  {
    static ATerm p_6 (ATerm t)
    {
      ATerm i_25 = t;
      int j_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_144(t);
          LocalPopChoice(j_25);
        }
      else
        {
          t = i_25;
          {
            ATerm k_25 = t;
            int m_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_6, u_6, v_6, t);
                LocalPopChoice(m_25);
              }
            else
              {
                t = k_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_6, t);
  }
  {
    ATerm n_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_61 = NULL;
        h_61 = t;
        {
          ATerm v_25 = t;
          int w_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_29 = NULL;
              t = h_61;
              {
                ATerm x_25 = t;
                int z_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_29 = NULL,e_29 = NULL;
                    t = term_z_18;
                    d_29 = t;
                    t = term_i_22;
                    e_29 = t;
                    t = term_o_22;
                    t = g_6(d_29, e_29, t);
                    LocalPopChoice(z_25);
                  }
                else
                  {
                    t = x_25;
                    t = fetch_1_0(w_6, t);
                  }
              }
              t = h_61;
              t = default_system_usage_0_0(t);
              t = term_p_19;
              c_29 = t;
              t = SSL_exit(c_29);
              LocalPopChoice(w_25);
            }
          else
            {
              t = v_25;
              {
                ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL;
                t = term_z_18;
                j_29 = t;
                t = term_b_23;
                k_29 = t;
                t = term_a_26;
                t = g_6(j_29, k_29, t);
                t = h_61;
                t = default_system_about_0_0(t);
                t = term_p_19;
                i_29 = t;
                t = SSL_exit(i_29);
              }
            }
        }
        LocalPopChoice(u_25);
      }
    else
      {
        t = n_25;
        {
          ATerm j_26 = t;
          int k_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL;
              static ATerm y_6 (ATerm t)
              {
                ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL,d_7 = NULL;
                n_61 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    m_61 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_61);
                l_61 = t;
                t = m_61;
                if(((j_60 != NULL) && (j_60 != t)))
                  _fail(t);
                else
                  j_60 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, m_61);
                d_7 = t;
                t = SSLsetAnnotations(d_7, l_61);
                return(t);
              }
              t = fetch_1_0(y_6, t);
              t = term_y_7;
              j_61 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_60)), term_l_26);
              k_61 = t;
              t = SSL_printnl(j_61, k_61);
              t = (ATerm) ATmakeAppl(sym__2, term_y_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_60)), term_l_26));
              t = default_system_usage_0_0(t);
              t = term_i_8;
              i_61 = t;
              t = SSL_exit(i_61);
              LocalPopChoice(k_26);
            }
          else
            {
              t = j_26;
            }
        }
      }
  }
  k_60 = t;
  t = term_q_20;
  m_60 = t;
  t = SSL_table_destroy(m_60);
  t = k_60;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_142 (ATerm), ATerm k_142 (ATerm), ATerm l_142 (ATerm), ATerm m_142 (ATerm), ATerm t)
{
  ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL;
  t = parse_options_1_0(j_142, t);
  s_61 = t;
  t = term_m_26;
  v_61 = t;
  t = SSL_table_create(v_61);
  t = term_m_26;
  t_61 = t;
  t = term_n_26;
  u_61 = t;
  t = SSL_table_put(t_61, u_61, s_61);
  t = s_61;
  t = l_142(t);
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_142, t);
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        {
          ATerm q_26 = t;
          int r_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_142(t);
              t = report_success_0_0(t);
              LocalPopChoice(r_26);
            }
          else
            {
              t = q_26;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = if_verbose2_1_0(j_7, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm w_61 = NULL,x_61 = NULL;
  t = term_s_26;
  w_61 = t;
  t = term_x_7;
  x_61 = t;
  t = term_v_26;
  t = j_6(w_61, x_61, t);
  t = term_w_26;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_x_26;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL;
  y_61 = t;
  t = term_z_18;
  c_62 = t;
  t = term_b_21;
  d_62 = t;
  t = term_c_21;
  t = g_6(c_62, d_62, t);
  z_61 = t;
  t = term_y_7;
  a_62 = t;
  t = (ATerm) ATinsert(ATempty, z_61);
  b_62 = t;
  t = SSL_printnl(a_62, b_62);
  t = y_61;
  return(t);
}
ATerm iowrap_3_0 (ATerm s_141 (ATerm), ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t)
{
  static ATerm a_7 (ATerm t)
  {
    ATerm y_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_141(t);
        LocalPopChoice(a_27);
      }
    else
      {
        t = y_26;
        {
          ATerm b_27 = t;
          int d_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(d_27);
            }
          else
            {
              t = b_27;
              {
                ATerm e_27 = t;
                int f_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(f_27);
                  }
                else
                  {
                    t = e_27;
                    {
                      ATerm g_27 = t;
                      int h_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(g_7, h_7, i_7, t);
                          LocalPopChoice(h_27);
                        }
                      else
                        {
                          t = g_27;
                          {
                            ATerm i_27 = t;
                            int j_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(j_27);
                              }
                            else
                              {
                                t = i_27;
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
  static ATerm e_7 (ATerm t)
  {
    ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL;
    f_62 = t;
    {
      ATerm l_27 = t;
      int m_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm k_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((e_62 != NULL) && (e_62 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(k_7, t);
          LocalPopChoice(m_27);
        }
      else
        {
          t = l_27;
          t = term_o_27;
          e_62 = t;
        }
    }
    t = not_null(e_62);
    t = ReadFromFile_0_0(t);
    g_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_62, g_62);
    t = apply_strategy_1_0(s_141, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(a_7, u_141, c_7, e_7, t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,f_7 = NULL;
  r_62 = t;
  if(match_cons(t, sym__2))
    {
      o_62 = ATgetArgument(t, 0);
      p_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_62);
  n_62 = t;
  t = p_62;
  t = downup2_2_0(m_7, q_7, t);
  t = downup_1_0(w_7, t);
  q_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_62, q_62);
  f_7 = t;
  t = SSLsetAnnotations(f_7, n_62);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = repeat_2_0(r_7, _id, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = repeat_2_0(Canon_0_0, _id, t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm p_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Canon_0_0(t);
      LocalPopChoice(q_27);
    }
  else
    {
      t = p_27;
      {
        ATerm r_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            LocalPopChoice(u_27);
          }
        else
          {
            t = r_27;
            {
              ATerm s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL;
              s_62 = t;
              if(match_cons(t, sym_CallT_3))
                {
                  t_62 = ATgetArgument(t, 0);
                  u_62 = ATgetArgument(t, 1);
                  v_62 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = s_62;
              t = r_5(t_62, u_62, v_62, t);
            }
          }
      }
    }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(l_7, _fail, default_usage_0_0, t);
  return(t);
}

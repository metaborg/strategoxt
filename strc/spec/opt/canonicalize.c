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
ATerm term_y_27;
ATerm term_j_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_e_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_w_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_x_25;
ATerm term_m_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_g_24;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_j_20;
ATerm term_c_20;
ATerm term_g_19;
ATerm term_t_18;
ATerm term_o_18;
ATerm term_c_18;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_s_13;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_k_10;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_g_8;
ATerm term_f_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_CallT_3, term_z_13, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_CallT_3, term_h_14, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_one", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_all", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_bagof", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_15);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__2, term_j_20, term_p_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__2, term_u_20, term_f_8);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym__2, term_d_21, term_e_21);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__2, term_u_23, term_f_8);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym__2, term_m_24, term_f_8);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym__2, term_c_23, term_f_8);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__2, term_e_27, term_f_8);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm y_111 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
static ATerm q_4 (ATerm g_80, ATerm f_80, ATerm t);
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
ATerm oncetd_1_0 (ATerm c_113 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm a_112 (ATerm), ATerm t);
ATerm CreateDef2_0_0 (ATerm t);
static ATerm r_24 (ATerm e_24, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm q_113 (ATerm), ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm Canon_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm y_5 (ATerm w_70, ATerm x_70, ATerm y_70, ATerm t);
ATerm genzip_4_0 (ATerm n_120 (ATerm), ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm a_119 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm c_43 (ATerm t_42, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm downup2_2_0 (ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm t);
static ATerm e_6 (ATerm v_46, ATerm w_46, ATerm t);
static ATerm f_6 (ATerm j_31, ATerm k_31, ATerm t);
static ATerm h_6 (ATerm b_118 (ATerm), ATerm y_174, ATerm n_31, ATerm t);
static ATerm g_6 (ATerm f_31, ATerm g_31, ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm i_134 (ATerm), ATerm t);
static ATerm u_48 (ATerm o_48, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_6 (ATerm l_31, ATerm t);
static ATerm j_6 (ATerm x_46, ATerm y_46, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_50 (ATerm e_49, ATerm t);
static ATerm i_50 (ATerm i_49, ATerm j_49, ATerm k_49, ATerm t);
static ATerm j_50 (ATerm u_49, ATerm v_49, ATerm w_49, ATerm t);
static ATerm k_6 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_118 (ATerm), ATerm t);
static ATerm d_6 (ATerm o_45, ATerm p_45, ATerm t);
ATerm debug_1_0 (ATerm z_117 (ATerm), ATerm t);
static ATerm x_3 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm r_132 (ATerm), ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_6 (ATerm d_55, ATerm e_55, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_6 (ATerm d_60, ATerm e_60, ATerm c_60, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_6 (ATerm q_49, ATerm r_49, ATerm t);
ATerm foldr_2_0 (ATerm n_124 (ATerm), ATerm o_124 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm q_132 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm need_help_1_0 (ATerm g_135 (ATerm), ATerm t);
ATerm map_1_0 (ATerm k_118 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm n_6 (ATerm u_61, ATerm v_61, ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_137 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm parse_options_1_0 (ATerm i_137 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm i_135 (ATerm), ATerm j_135 (ATerm), ATerm k_135 (ATerm), ATerm l_135 (ATerm), ATerm t);
static ATerm k_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
ATerm iowrap_3_0 (ATerm r_134 (ATerm), ATerm s_134 (ATerm), ATerm t_134 (ATerm), ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
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
  t = term_f_8;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_g_8;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_8), f_0), term_k_8);
  o_0 = t;
  t = SSL_printnl(m_0, o_0);
  t = term_m_8;
  j_0 = t;
  t = SSL_exit(j_0);
  t = b_0;
  return(t);
}
ATerm topdown_1_0 (ATerm y_111 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(y_111, t);
    return(t);
  }
  t = y_111(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm n_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm q_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(p_8);
      {
        ATerm r_0 = NULL,s_0 = NULL;
        r_0 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm v_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        s_0 = t;
        t = SSLgetAnnotations(r_0);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_8 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) w_8) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm y_8 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(y_8) != AT_LIST) || !(ATisEmpty(y_8))))
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
      t = n_8;
      {
        ATerm z_8 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm h_9 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) h_9) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm i_9 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(g_9);
            _fail(t);
          }
        else
          {
            t = z_8;
          }
      }
    }
  return(t);
}
static ATerm q_4 (ATerm g_80, ATerm f_80, ATerm t)
{
  t = g_80;
  t = topdown_1_0(h_0, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, g_80);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      e_1 = ATgetArgument(t, 0);
      j_1 = ATgetArgument(t, 1);
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
  t = j_1;
  if(match_cons(t, sym_Seq_2))
    {
      k_1 = ATgetArgument(t, 0);
      c_1 = ATgetArgument(t, 1);
      t = k_1;
      if(match_cons(t, sym_Build_1))
        {
          l_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_1;
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
          k_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_1;
      if(match_cons(t, sym_Var_1))
        {
          l_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_1;
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
  ATerm p_2 = NULL,q_2 = NULL,t_2 = NULL,u_2 = NULL,w_2 = NULL,y_2 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      t_2 = ATgetArgument(t, 0);
      w_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_2;
  if(match_cons(t, sym_Build_1))
    {
      u_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_2;
  if(match_cons(t, sym_Seq_2))
    {
      y_2 = ATgetArgument(t, 0);
      q_2 = ATgetArgument(t, 1);
      t = y_2;
      if(match_cons(t, sym_Match_1))
        {
          p_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_2;
      if((u_2 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_2), q_2);
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
      if((u_2 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, u_2);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm h_3 = NULL,j_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      o_3 = ATgetArgument(t, 0);
      q_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_3;
  if(match_cons(t, sym_Match_1))
    {
      p_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_3;
  if(match_cons(t, sym_Seq_2))
    {
      r_3 = ATgetArgument(t, 0);
      j_3 = ATgetArgument(t, 1);
      t = r_3;
      if(match_cons(t, sym_Match_1))
        {
          h_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_3;
      if((p_3 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_3), j_3);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          r_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_3;
      if((p_3 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, p_3);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm h_4 = NULL,n_4 = NULL,r_4 = NULL,t_4 = NULL,x_4 = NULL,y_4 = NULL,e_5 = NULL,f_5 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      t_4 = ATgetArgument(t, 0);
      x_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_4;
  if(match_cons(t, sym_Build_1))
    {
      ATerm k_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_4;
  if(match_cons(t, sym_Seq_2))
    {
      y_4 = ATgetArgument(t, 0);
      e_5 = ATgetArgument(t, 1);
      t = y_4;
      if(match_cons(t, sym_PrimT_3))
        {
          h_4 = ATgetArgument(t, 0);
          n_4 = ATgetArgument(t, 1);
          r_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, h_4, n_4, r_4), e_5);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          y_4 = ATgetArgument(t, 0);
          e_5 = ATgetArgument(t, 1);
          f_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, y_4, e_5, f_5);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,p_6 = NULL,s_6 = NULL,t_6 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      p_6 = ATgetArgument(t, 0);
      s_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6;
  if(match_cons(t, sym_Build_1))
    {
      ATerm l_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6;
  if(match_cons(t, sym_Seq_2))
    {
      t_6 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
      t = t_6;
      if(match_cons(t, sym_Build_1))
        {
          b_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_6), c_6);
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
      ATerm q_9 = ATgetArgument(t, 0);
      if(((ATgetType(q_9) != AT_LIST) || !(ATisEmpty(q_9))))
        _fail(t);
      {
        ATerm r_9 = ATgetArgument(t, 1);
        if(((ATgetType(r_9) != AT_LIST) || !(ATisEmpty(r_9))))
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
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_9 = ATgetArgument(t, 0);
      if(((ATgetType(v_9) == AT_LIST) && !(ATisEmpty(v_9))))
        {
          r_8 = ATgetFirst((ATermList) v_9);
          s_8 = (ATerm) ATgetNext((ATermList) v_9);
        }
      else
        _fail(t);
      {
        ATerm w_9 = ATgetArgument(t, 1);
        if(((ATgetType(w_9) == AT_LIST) && !(ATisEmpty(w_9))))
          {
            t_8 = ATgetFirst((ATermList) w_9);
            u_8 = (ATerm) ATgetNext((ATermList) w_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_8, t_8), (ATerm) ATmakeAppl(sym__2, s_8, u_8));
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL;
  if(match_cons(t, sym__2))
    {
      c_9 = ATgetArgument(t, 0);
      d_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_9), c_9);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL;
  if(match_cons(t, sym__2))
    {
      e_9 = ATgetArgument(t, 0);
      f_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_9), (ATerm) ATmakeAppl(sym_Match_1, f_9));
  return(t);
}
static ATerm w_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_9 = ATgetArgument(t, 0);
      if(((ATgetType(x_9) != AT_LIST) || !(ATisEmpty(x_9))))
        _fail(t);
      {
        ATerm z_9 = ATgetArgument(t, 1);
        if(((ATgetType(z_9) != AT_LIST) || !(ATisEmpty(z_9))))
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
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_10 = ATgetArgument(t, 0);
      if(((ATgetType(a_10) == AT_LIST) && !(ATisEmpty(a_10))))
        {
          m_9 = ATgetFirst((ATermList) a_10);
          n_9 = (ATerm) ATgetNext((ATermList) a_10);
        }
      else
        _fail(t);
      {
        ATerm b_10 = ATgetArgument(t, 1);
        if(((ATgetType(b_10) == AT_LIST) && !(ATisEmpty(b_10))))
          {
            o_9 = ATgetFirst((ATermList) b_10);
            p_9 = (ATerm) ATgetNext((ATermList) b_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_9, o_9), (ATerm) ATmakeAppl(sym__2, n_9, p_9));
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  if(match_cons(t, sym__2))
    {
      s_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_9), s_9);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm u_9 = NULL,y_9 = NULL;
  if(match_cons(t, sym__2))
    {
      u_9 = ATgetArgument(t, 0);
      y_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_9), (ATerm) ATmakeAppl(sym_Match_1, y_9));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL,i_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      r_7 = ATgetArgument(t, 0);
      v_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_7;
  if(match_cons(t, sym_Build_1))
    {
      s_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7;
  if(match_cons(t, sym_Op_2))
    {
      t_7 = ATgetArgument(t, 0);
      u_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_7;
  if(match_cons(t, sym_Seq_2))
    {
      h_8 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
      {
        ATerm o_8 = NULL;
        t = h_8;
        if(match_cons(t, sym_Match_1))
          {
            i_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_8;
        if(match_cons(t, sym_Op_2))
          {
            e_7 = ATgetArgument(t, 0);
            f_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_7;
        if((t_7 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, u_7, f_7);
        t = genzip_4_0(p_0, q_0, t_0, u_0, t);
        o_8 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, t_7, u_7)), i_7));
      }
    }
  else
    {
      ATerm j_9 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          h_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_8;
      if(match_cons(t, sym_Op_2))
        {
          i_8 = ATgetArgument(t, 0);
          j_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_8;
      if((t_7 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, u_7, j_8);
      t = genzip_4_0(w_0, x_0, y_0, z_0, t);
      j_9 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_9), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, t_7, u_7)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm h_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,s_11 = NULL,u_11 = NULL,v_11 = NULL;
  m_11 = t;
  if(match_cons(t, sym_Seq_2))
    {
      n_11 = ATgetArgument(t, 0);
      s_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11;
  if(match_cons(t, sym_Build_1))
    {
      o_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_11;
  if(match_cons(t, sym_Op_2))
    {
      p_11 = ATgetArgument(t, 0);
      {
        ATerm d_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = s_11;
  {
    ATerm e_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            u_11 = ATgetArgument(t, 0);
            {
              ATerm h_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_10);
        t = u_11;
        if(match_cons(t, sym_Match_1))
          {
            v_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_11;
        if(match_cons(t, sym_Op_2))
          {
            h_11 = ATgetArgument(t, 0);
            {
              ATerm i_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_11, h_11);
        {
          ATerm j_10 = t;
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
              t = j_10;
            }
        }
        t = term_k_10;
      }
    else
      {
        t = e_10;
        if(match_cons(t, sym_Match_1))
          {
            u_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_11;
        if(match_cons(t, sym_Op_2))
          {
            v_11 = ATgetArgument(t, 0);
            {
              ATerm l_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_11, v_11);
        {
          ATerm m_10 = t;
          if((PushChoice() == 0))
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
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_10;
            }
        }
        t = term_k_10;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm c_113 (ATerm), ATerm t)
{
  static ATerm b_12 (ATerm t)
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_113(t);
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        t = SRTS_one(b_12, t);
      }
    return(t);
  }
  t = b_12(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,l_13 = NULL,m_13 = NULL,q_13 = NULL,r_13 = NULL,t_13 = NULL,v_13 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  i_13 = t;
  if(match_cons(t, sym_Let_2))
    {
      j_13 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_14;
  if(match_cons(t, sym_Let_2))
    {
      d_14 = ATgetArgument(t, 0);
      f_14 = ATgetArgument(t, 1);
      {
        ATerm m_14 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, j_13, d_14);
        t = conc_0_0(t);
        m_14 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, m_14, f_14);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          d_14 = ATgetArgument(t, 0);
          f_14 = ATgetArgument(t, 1);
          g_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_13;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_13 = ATgetFirst((ATermList) t);
          v_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_13;
      if(match_cons(t, sym_SDefT_4))
        {
          m_13 = ATgetArgument(t, 0);
          q_13 = ATgetArgument(t, 1);
          r_13 = ATgetArgument(t, 2);
          t_13 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = q_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_14;
      if(match_cons(t, sym_SVar_1))
        {
          e_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_14;
      if((m_13 != t))
        {
          _fail(t);
        }
      t = t_13;
      {
        ATerm p_10 = t;
        if((PushChoice() == 0))
          {
            static ATerm a_1 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm q_10 = ATgetArgument(t, 0);
                  if(match_cons(q_10, sym_SVar_1))
                    {
                      if((m_13 != ATgetArgument(q_10, 0)))
                        {
                          _fail(ATgetArgument(q_10, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm r_10 = ATgetArgument(t, 1);
                    if(((ATgetType(r_10) != AT_LIST) || !(ATisEmpty(r_10))))
                      _fail(t);
                  }
                  {
                    ATerm s_10 = ATgetArgument(t, 2);
                    if(((ATgetType(s_10) != AT_LIST) || !(ATisEmpty(s_10))))
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
            t = p_10;
          }
      }
      t = t_13;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,i_15 = NULL,l_15 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      i_15 = ATgetArgument(t, 0);
      t = i_15;
      if(match_cons(t, sym_Seq_2))
        {
          g_15 = ATgetArgument(t, 0);
          a_15 = ATgetArgument(t, 1);
          t = g_15;
          if(match_cons(t, sym_Where_1))
            {
              z_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_15;
          if(match_cons(t, sym_Seq_2))
            {
              d_15 = ATgetArgument(t, 0);
              f_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_15;
          if(match_cons(t, sym_Build_1))
            {
              e_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, z_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_15), f_15)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              g_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, g_15);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          i_15 = ATgetArgument(t, 0);
          t = i_15;
          if(match_cons(t, sym_Test_1))
            {
              g_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, g_15);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              i_15 = ATgetArgument(t, 0);
              t = i_15;
              if(match_cons(t, sym_Not_1))
                {
                  g_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, g_15);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  i_15 = ATgetArgument(t, 0);
                  l_15 = ATgetArgument(t, 1);
                  t = l_15;
                  if((i_15 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      i_15 = ATgetArgument(t, 0);
                      l_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = l_15;
                  if((i_15 != t))
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
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,n_16 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      i_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
      t = i_16;
      if(match_cons(t, sym_LChoice_2))
        {
          j_16 = ATgetArgument(t, 0);
          k_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, j_16, (ATerm) ATmakeAppl(sym_LChoice_2, k_16, n_16));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          i_16 = ATgetArgument(t, 0);
          n_16 = ATgetArgument(t, 1);
          t = i_16;
          if(match_cons(t, sym_Seq_2))
            {
              j_16 = ATgetArgument(t, 0);
              k_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, j_16, (ATerm) ATmakeAppl(sym_Seq_2, k_16, n_16));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              i_16 = ATgetArgument(t, 0);
              n_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_16;
          if(match_cons(t, sym_Choice_2))
            {
              j_16 = ATgetArgument(t, 0);
              k_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, j_16, (ATerm) ATmakeAppl(sym_Choice_2, k_16, n_16));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,r_17 = NULL,s_17 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      r_17 = ATgetArgument(t, 0);
      s_17 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, r_17, s_17);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          r_17 = ATgetArgument(t, 0);
          t = r_17;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_17 = ATgetFirst((ATermList) t);
              o_17 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, n_17, (ATerm) ATmakeAppl(sym_LChoices_1, o_17));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_k_10;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              r_17 = ATgetArgument(t, 0);
              t = r_17;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_17 = ATgetFirst((ATermList) t);
                  o_17 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, n_17, (ATerm) ATmakeAppl(sym_Choices_1, o_17));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_k_10;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  r_17 = ATgetArgument(t, 0);
                  t = r_17;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      n_17 = ATgetFirst((ATermList) t);
                      o_17 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_17, (ATerm) ATmakeAppl(sym_Seqs_1, o_17));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_t_10;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      r_17 = ATgetArgument(t, 0);
                      s_17 = ATgetArgument(t, 1);
                      p_17 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, s_17, (ATerm) ATmakeAppl(sym_Op_2, term_u_10, (ATerm) ATinsert(ATinsert(ATempty, p_17), r_17)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          r_17 = ATgetArgument(t, 0);
                          s_17 = ATgetArgument(t, 1);
                          p_17 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, p_17)), r_17), (ATerm) ATmakeAppl(sym_Build_1, s_17)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              r_17 = ATgetArgument(t, 0);
                              s_17 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, r_17, (ATerm) ATmakeAppl(sym_Match_1, s_17));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  r_17 = ATgetArgument(t, 0);
                                  s_17 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_17), s_17);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      r_17 = ATgetArgument(t, 0);
                                      s_17 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_17), r_17);
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
  ATerm f_20 = NULL,g_20 = NULL,l_20 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      f_20 = ATgetArgument(t, 0);
      t = f_20;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_k_10;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          f_20 = ATgetArgument(t, 0);
          t = f_20;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_t_10;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              f_20 = ATgetArgument(t, 0);
              g_20 = ATgetArgument(t, 1);
              t = f_20;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_k_10;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  f_20 = ATgetArgument(t, 0);
                  g_20 = ATgetArgument(t, 1);
                  t = g_20;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_k_10;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      f_20 = ATgetArgument(t, 0);
                      g_20 = ATgetArgument(t, 1);
                      t = g_20;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_k_10;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          f_20 = ATgetArgument(t, 0);
                          t = f_20;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_k_10;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              f_20 = ATgetArgument(t, 0);
                              t = f_20;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_k_10;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  f_20 = ATgetArgument(t, 0);
                                  g_20 = ATgetArgument(t, 1);
                                  t = g_20;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_k_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      f_20 = ATgetArgument(t, 0);
                                      g_20 = ATgetArgument(t, 1);
                                      t = g_20;
                                      t = fetch_1_0(d_1, t);
                                      t = term_k_10;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          f_20 = ATgetArgument(t, 0);
                                          g_20 = ATgetArgument(t, 1);
                                          t = g_20;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = f_20;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = g_20;
                                                }
                                              else
                                                {
                                                  t = f_20;
                                                }
                                            }
                                          else
                                            {
                                              t = f_20;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = g_20;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              f_20 = ATgetArgument(t, 0);
                                              g_20 = ATgetArgument(t, 1);
                                              t = g_20;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = f_20;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = g_20;
                                                    }
                                                  else
                                                    {
                                                      t = f_20;
                                                    }
                                                }
                                              else
                                                {
                                                  t = f_20;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = g_20;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  f_20 = ATgetArgument(t, 0);
                                                  t = f_20;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_k_10;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      f_20 = ATgetArgument(t, 0);
                                                      g_20 = ATgetArgument(t, 1);
                                                      l_20 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = l_20;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_20, g_20);
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
  ATerm e_22 = NULL,g_22 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      g_22 = ATgetArgument(t, 0);
      t = g_22;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_t_10;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          g_22 = ATgetArgument(t, 0);
          t = g_22;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_k_10;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              g_22 = ATgetArgument(t, 0);
              e_22 = ATgetArgument(t, 1);
              t = e_22;
              if(match_cons(t, sym_Id_0))
                {
                  t = g_22;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = e_22;
                    }
                  else
                    {
                      t = g_22;
                    }
                }
              else
                {
                  t = g_22;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = e_22;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  g_22 = ATgetArgument(t, 0);
                  e_22 = ATgetArgument(t, 1);
                  t = g_22;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_t_10;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      g_22 = ATgetArgument(t, 0);
                      e_22 = ATgetArgument(t, 1);
                      t = e_22;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_t_10;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          g_22 = ATgetArgument(t, 0);
                          e_22 = ATgetArgument(t, 1);
                          t = e_22;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_t_10;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              g_22 = ATgetArgument(t, 0);
                              t = g_22;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_t_10;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  g_22 = ATgetArgument(t, 0);
                                  t = g_22;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_t_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      g_22 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = g_22;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_t_10;
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
  ATerm v_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(w_10);
    }
  else
    {
      t = v_10;
      {
        ATerm y_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(z_10);
          }
        else
          {
            t = y_10;
            {
              ATerm b_11 = t;
              int c_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(c_11);
                }
              else
                {
                  t = b_11;
                  {
                    ATerm e_11 = t;
                    int f_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(f_11);
                      }
                    else
                      {
                        t = e_11;
                        {
                          ATerm i_11 = t;
                          int l_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(l_11);
                            }
                          else
                            {
                              t = i_11;
                              {
                                ATerm r_11 = t;
                                int x_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm d_23 = NULL,e_23 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        d_23 = ATgetArgument(t, 0);
                                        e_23 = ATgetArgument(t, 1);
                                        t = d_23;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = e_23;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            d_23 = ATgetArgument(t, 0);
                                            e_23 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = d_23;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = e_23;
                                      }
                                    LocalPopChoice(x_11);
                                  }
                                else
                                  {
                                    t = r_11;
                                    {
                                      ATerm y_11 = t;
                                      int a_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(a_12);
                                        }
                                      else
                                        {
                                          t = y_11;
                                          {
                                            ATerm c_12 = t;
                                            int d_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(d_12);
                                              }
                                            else
                                              {
                                                t = c_12;
                                                {
                                                  ATerm k_12 = t;
                                                  int l_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(l_12);
                                                    }
                                                  else
                                                    {
                                                      t = k_12;
                                                      {
                                                        ATerm v_12 = t;
                                                        int w_12 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(w_12);
                                                          }
                                                        else
                                                          {
                                                            t = v_12;
                                                            {
                                                              ATerm x_12 = t;
                                                              int y_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(y_12);
                                                                }
                                                              else
                                                                {
                                                                  t = x_12;
                                                                  {
                                                                    ATerm z_12 = t;
                                                                    int a_13 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(a_13);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = z_12;
                                                                        {
                                                                          ATerm b_13 = t;
                                                                          int c_13 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(c_13);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_13;
                                                                              {
                                                                                ATerm d_13 = t;
                                                                                int e_13 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(e_13);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = d_13;
                                                                                    {
                                                                                      ATerm j_23 = NULL,n_23 = NULL,q_23 = NULL,r_23 = NULL;
                                                                                      n_23 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          q_23 = ATgetArgument(t, 0);
                                                                                          r_23 = ATgetArgument(t, 1);
                                                                                          t = q_23;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              j_23 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = n_23;
                                                                                          t = q_4(j_23, r_23, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              q_23 = ATgetArgument(t, 0);
                                                                                              r_23 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = q_23;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = r_23;
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
ATerm repeat_2_0 (ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm t)
{
  static ATerm x_23 (ATerm t)
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_110(t);
        t = x_23(t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        t = z_110(t);
      }
    return(t);
  }
  t = x_23(t);
  return(t);
}
ATerm downup_1_0 (ATerm a_112 (ATerm), ATerm t)
{
  t = a_112(t);
  {
    static ATerm h_1 (ATerm t)
    {
      t = downup_1_0(a_112, t);
      return(t);
    }
    t = SRTS_all(h_1, t);
  }
  t = a_112(t);
  return(t);
}
ATerm CreateDef2_0_0 (ATerm t)
{
  ATerm y_23 = NULL,a_24 = NULL;
  y_23 = t;
  t = new_0_0(t);
  a_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_24), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, a_24, (ATerm)ATempty, (ATerm)ATempty, y_23)));
  return(t);
}
static ATerm r_24 (ATerm e_24, ATerm t)
{
  ATerm f_24 = NULL;
  t = SSL_explode_term(e_24);
  if(match_cons(t, sym__2))
    {
      ATerm h_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_24;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
  l_24 = t;
  if(match_cons(t, sym__2))
    {
      j_24 = ATgetArgument(t, 0);
      k_24 = ATgetArgument(t, 1);
      {
        ATerm k_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm i_1 (ATerm t)
            {
              t = k_24;
              return(t);
            }
            t = j_24;
            t = at_end_1_0(i_1, t);
            LocalPopChoice(n_13);
          }
        else
          {
            t = k_13;
            t = r_24(l_24, t);
          }
      }
    }
  else
    {
      t = r_24(l_24, t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm q_113 (ATerm), ATerm t)
{
  static ATerm s_24 (ATerm t)
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_113(t);
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        t = SRTS_all(s_24, t);
      }
    return(t);
  }
  t = s_24(t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_13;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm g_11 = NULL,j_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_11 = ATgetFirst((ATermList) t);
      j_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_11, j_11);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm k_11 = NULL,q_11 = NULL,t_11 = NULL,w_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_13 = ATgetArgument(t, 0);
      if(match_cons(w_13, sym__2))
        {
          k_11 = ATgetArgument(w_13, 0);
          q_11 = ATgetArgument(w_13, 1);
        }
      else
        _fail(t);
      {
        ATerm x_13 = ATgetArgument(t, 1);
        if(match_cons(x_13, sym__2))
          {
            t_11 = ATgetArgument(x_13, 0);
            w_11 = ATgetArgument(x_13, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_11), k_11), (ATerm) ATinsert(CheckATermList(w_11), q_11));
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm z_11 = NULL;
  z_11 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = term_a_14;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = term_i_14;
        }
      else
        {
          t = z_11;
        }
    }
  {
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL;
        if(match_cons(t, sym_Let_2))
          {
            e_12 = ATgetArgument(t, 0);
            f_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_12;
        if(match_cons(t, sym_CallT_3))
          {
            g_12 = ATgetArgument(t, 0);
            i_12 = ATgetArgument(t, 1);
            j_12 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = g_12;
        if(match_cons(t, sym_SVar_1))
          {
            h_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_12), (ATerm)ATempty, (ATerm) ATempty), e_12);
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        {
          ATerm l_14 = t;
          int n_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_14 = t;
              if((PushChoice() == 0))
                {
                  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,h_2 = NULL,g_2 = NULL;
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
                  g_2 = t;
                  t = SSLsetAnnotations(g_2, q_12);
                  s_12 = t;
                  t = o_12;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = p_12;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_CallT_3, s_12, o_12, p_12);
                  h_2 = t;
                  t = SSLsetAnnotations(h_2, m_12);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = o_14;
                }
              t = CreateDef2_0_0(t);
              LocalPopChoice(n_14);
            }
          else
            {
              t = l_14;
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
static ATerm s_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_13;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_18 = ATgetFirst((ATermList) t);
      w_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_18, w_18);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm y_18 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_14 = ATgetArgument(t, 0);
      if(match_cons(p_14, sym__2))
        {
          y_18 = ATgetArgument(p_14, 0);
          c_19 = ATgetArgument(p_14, 1);
        }
      else
        _fail(t);
      {
        ATerm q_14 = ATgetArgument(t, 1);
        if(match_cons(q_14, sym__2))
          {
            d_19 = ATgetArgument(q_14, 0);
            e_19 = ATgetArgument(q_14, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_19), y_18), (ATerm) ATinsert(CheckATermList(e_19), c_19));
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm f_19 = NULL;
  f_19 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = term_a_14;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = term_i_14;
        }
      else
        {
          t = f_19;
        }
    }
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
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
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        {
          ATerm t_14 = t;
          int u_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_14 = t;
              if((PushChoice() == 0))
                {
                  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,l_2 = NULL,k_2 = NULL;
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
                  k_2 = t;
                  t = SSLsetAnnotations(k_2, u_19);
                  w_19 = t;
                  t = s_19;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = t_19;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_CallT_3, w_19, s_19, t_19);
                  l_2 = t;
                  t = SSLsetAnnotations(l_2, q_19);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = v_14;
                }
              t = CreateDef2_0_0(t);
              LocalPopChoice(u_14);
            }
          else
            {
              t = t_14;
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
  ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL;
  q_38 = t;
  if(match_cons(t, sym_Rec_2))
    {
      u_38 = ATgetArgument(t, 0);
      v_38 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, u_38, (ATerm)ATempty, (ATerm)ATempty, v_38)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_38), (ATerm)ATempty, (ATerm) ATempty));
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          u_38 = ATgetArgument(t, 0);
          v_38 = ATgetArgument(t, 1);
          w_38 = ATgetArgument(t, 2);
          j_38 = ATgetArgument(t, 3);
          {
            ATerm c_39 = NULL;
            t = v_38;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = w_38;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = j_38;
            if(match_cons(t, sym_Rec_2))
              {
                k_38 = ATgetArgument(t, 0);
                l_38 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_38;
            {
              static ATerm m_1 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm w_14 = ATgetArgument(t, 0);
                    if(match_cons(w_14, sym_SVar_1))
                      {
                        if((k_38 != ATgetArgument(w_14, 0)))
                          {
                            _fail(ATgetArgument(w_14, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm x_14 = ATgetArgument(t, 1);
                      if(((ATgetType(x_14) != AT_LIST) || !(ATisEmpty(x_14))))
                        _fail(t);
                    }
                    {
                      ATerm y_14 = ATgetArgument(t, 2);
                      if(((ATgetType(y_14) != AT_LIST) || !(ATisEmpty(y_14))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_38), (ATerm)ATempty, (ATerm) ATempty);
                return(t);
              }
              t = alltd_1_0(m_1, t);
            }
            c_39 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, u_38, (ATerm)ATempty, (ATerm)ATempty, c_39);
          }
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              u_38 = ATgetArgument(t, 0);
              v_38 = ATgetArgument(t, 1);
              t = v_38;
              if(match_cons(t, sym_Seq_2))
                {
                  o_38 = ATgetArgument(t, 0);
                  p_38 = ATgetArgument(t, 1);
                  t = u_38;
                  if(match_cons(t, sym_Where_1))
                    {
                      n_38 = ATgetArgument(t, 0);
                      t = o_38;
                      if(match_cons(t, sym_Build_1))
                        {
                          m_38 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_38, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_38), p_38));
                    }
                  else
                    {
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = v_38;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Build_1))
                    {
                      o_38 = ATgetArgument(t, 0);
                      t = u_38;
                      if(match_cons(t, sym_Where_1))
                        {
                          n_38 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_38, (ATerm) ATmakeAppl(sym_Build_1, o_38));
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = v_38;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Id_0))
                        {
                          t = u_38;
                          if(match_cons(t, sym_Id_0))
                            {
                              t = u_38;
                            }
                          else
                            {
                              t = u_38;
                            }
                        }
                      else
                        {
                          t = u_38;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = v_38;
                        }
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  u_38 = ATgetArgument(t, 0);
                  v_38 = ATgetArgument(t, 1);
                  t = v_38;
                  if(match_cons(t, sym_Scope_2))
                    {
                      o_38 = ATgetArgument(t, 0);
                      p_38 = ATgetArgument(t, 1);
                      t = u_38;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          ATerm b_15 = t;
                          int h_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_39 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, u_38, o_38);
                              t = conc_0_0(t);
                              r_39 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, r_39, p_38);
                              LocalPopChoice(h_15);
                            }
                          else
                            {
                              t = b_15;
                              t = v_38;
                            }
                        }
                      else
                        {
                          ATerm w_39 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, u_38, o_38);
                          t = conc_0_0(t);
                          w_39 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, w_39, p_38);
                        }
                    }
                  else
                    {
                      t = u_38;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = v_38;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Thread_1))
                    {
                      u_38 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_n_15, (ATerm)ATinsert(ATempty, u_38), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          u_38 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, term_q_15, (ATerm)ATinsert(ATempty, u_38), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              u_38 = ATgetArgument(t, 0);
                              t = (ATerm) ATmakeAppl(sym_CallT_3, term_s_15, (ATerm)ATinsert(ATempty, u_38), (ATerm) ATempty);
                            }
                          else
                            {
                              if(match_cons(t, sym_All_1))
                                {
                                  u_38 = ATgetArgument(t, 0);
                                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_u_15, (ATerm)ATinsert(ATempty, u_38), (ATerm) ATempty);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Bagof_1))
                                    {
                                      u_38 = ATgetArgument(t, 0);
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_w_15, (ATerm)ATinsert(ATempty, u_38), (ATerm) ATempty);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_PrimT_3))
                                        {
                                          u_38 = ATgetArgument(t, 0);
                                          v_38 = ATgetArgument(t, 1);
                                          w_38 = ATgetArgument(t, 2);
                                          {
                                            ATerm x_15 = t;
                                            int y_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm x_5 = NULL;
                                                t = v_38;
                                                {
                                                  static ATerm b_8 (ATerm t)
                                                  {
                                                    ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
                                                    y_7 = t;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        z_7 = ATgetFirst((ATermList) t);
                                                        a_8 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm z_15 = t;
                                                      int a_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_8 = NULL,a_9 = NULL,b_9 = NULL,e_2 = NULL;
                                                          t = SSLgetAnnotations(y_7);
                                                          x_8 = t;
                                                          t = z_7;
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_a_14;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_Fail_0)))
                                                                _fail(t);
                                                              t = term_i_14;
                                                            }
                                                          a_9 = t;
                                                          t = a_8;
                                                          {
                                                            ATerm b_16 = t;
                                                            int c_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = b_8(t);
                                                                LocalPopChoice(c_16);
                                                              }
                                                            else
                                                              {
                                                                t = b_16;
                                                              }
                                                          }
                                                          b_9 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(b_9), a_9);
                                                          e_2 = t;
                                                          t = SSLsetAnnotations(e_2, x_8);
                                                          LocalPopChoice(a_16);
                                                        }
                                                      else
                                                        {
                                                          t = z_15;
                                                          {
                                                            ATerm c_10 = NULL,f_10 = NULL,f_2 = NULL;
                                                            t = SSLgetAnnotations(y_7);
                                                            c_10 = t;
                                                            t = a_8;
                                                            t = b_8(t);
                                                            f_10 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(f_10), z_7);
                                                            f_2 = t;
                                                            t = SSLsetAnnotations(f_2, c_10);
                                                          }
                                                        }
                                                    }
                                                    return(t);
                                                  }
                                                  t = b_8(t);
                                                }
                                                x_5 = t;
                                                t = (ATerm) ATmakeAppl(sym_PrimT_3, u_38, x_5, w_38);
                                                LocalPopChoice(y_15);
                                              }
                                            else
                                              {
                                                t = x_15;
                                                {
                                                  ATerm x_10 = NULL,a_11 = NULL,d_11 = NULL;
                                                  t = v_38;
                                                  t = genzip_4_0(n_1, p_1, q_1, r_1, t);
                                                  if(match_cons(t, sym__2))
                                                    {
                                                      x_10 = ATgetArgument(t, 0);
                                                      a_11 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = a_11;
                                                  t = concat_0_0(t);
                                                  d_11 = t;
                                                  {
                                                    ATerm d_16 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                          _fail(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = d_16;
                                                      }
                                                  }
                                                  t = (ATerm) ATmakeAppl(sym_Let_2, d_11, (ATerm) ATmakeAppl(sym_PrimT_3, u_38, x_10, w_38));
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              u_38 = ATgetArgument(t, 0);
                                              v_38 = ATgetArgument(t, 1);
                                              w_38 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          {
                                            ATerm f_16 = t;
                                            int g_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm u_13 = NULL;
                                                t = v_38;
                                                {
                                                  static ATerm o_15 (ATerm t)
                                                  {
                                                    ATerm c_15 = NULL,j_15 = NULL,k_15 = NULL;
                                                    c_15 = t;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        j_15 = ATgetFirst((ATermList) t);
                                                        k_15 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm h_16 = t;
                                                      int o_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm e_16 = NULL,l_16 = NULL,m_16 = NULL,i_2 = NULL;
                                                          t = SSLgetAnnotations(c_15);
                                                          e_16 = t;
                                                          t = j_15;
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_a_14;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_Fail_0)))
                                                                _fail(t);
                                                              t = term_i_14;
                                                            }
                                                          l_16 = t;
                                                          t = k_15;
                                                          {
                                                            ATerm p_16 = t;
                                                            int q_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = o_15(t);
                                                                LocalPopChoice(q_16);
                                                              }
                                                            else
                                                              {
                                                                t = p_16;
                                                              }
                                                          }
                                                          m_16 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(m_16), l_16);
                                                          i_2 = t;
                                                          t = SSLsetAnnotations(i_2, e_16);
                                                          LocalPopChoice(o_16);
                                                        }
                                                      else
                                                        {
                                                          t = h_16;
                                                          {
                                                            ATerm h_17 = NULL,k_17 = NULL,j_2 = NULL;
                                                            t = SSLgetAnnotations(c_15);
                                                            h_17 = t;
                                                            t = k_15;
                                                            t = o_15(t);
                                                            k_17 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(k_17), j_15);
                                                            j_2 = t;
                                                            t = SSLsetAnnotations(j_2, h_17);
                                                          }
                                                        }
                                                    }
                                                    return(t);
                                                  }
                                                  t = o_15(t);
                                                }
                                                u_13 = t;
                                                t = (ATerm) ATmakeAppl(sym_CallT_3, u_38, u_13, w_38);
                                                LocalPopChoice(g_16);
                                              }
                                            else
                                              {
                                                t = f_16;
                                                {
                                                  ATerm q_18 = NULL,r_18 = NULL,u_18 = NULL;
                                                  t = v_38;
                                                  t = genzip_4_0(s_1, t_1, u_1, v_1, t);
                                                  if(match_cons(t, sym__2))
                                                    {
                                                      q_18 = ATgetArgument(t, 0);
                                                      r_18 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = r_18;
                                                  t = concat_0_0(t);
                                                  u_18 = t;
                                                  {
                                                    ATerm r_16 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                          _fail(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = r_16;
                                                      }
                                                  }
                                                  t = (ATerm) ATmakeAppl(sym_Let_2, u_18, (ATerm) ATmakeAppl(sym_CallT_3, u_38, q_18, w_38));
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
static ATerm w_1 (ATerm t)
{
  ATerm s_16 = t;
  if((PushChoice() == 0))
    {
      ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL,e_3 = NULL;
      z_40 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_40);
      x_40 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_40);
      e_3 = t;
      t = SSLsetAnnotations(e_3, x_40);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_16;
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_13;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_41 = ATgetFirst((ATermList) t);
      b_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_41, b_41);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL,f_41 = NULL,g_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_16 = ATgetArgument(t, 0);
      if(match_cons(t_16, sym__2))
        {
          c_41 = ATgetArgument(t_16, 0);
          d_41 = ATgetArgument(t_16, 1);
        }
      else
        _fail(t);
      {
        ATerm u_16 = ATgetArgument(t, 1);
        if(match_cons(u_16, sym__2))
          {
            f_41 = ATgetArgument(u_16, 0);
            g_41 = ATgetArgument(u_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_41), c_41), (ATerm) ATinsert(CheckATermList(g_41), d_41));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_13;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_41 = ATgetFirst((ATermList) t);
      i_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_41, i_41);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_16 = ATgetArgument(t, 0);
      if(match_cons(v_16, sym__2))
        {
          j_41 = ATgetArgument(v_16, 0);
          k_41 = ATgetArgument(v_16, 1);
        }
      else
        _fail(t);
      {
        ATerm w_16 = ATgetArgument(t, 1);
        if(match_cons(w_16, sym__2))
          {
            l_41 = ATgetArgument(w_16, 0);
            m_41 = ATgetArgument(w_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_41), j_41), (ATerm) ATinsert(CheckATermList(m_41), k_41));
  return(t);
}
static ATerm y_5 (ATerm w_70, ATerm x_70, ATerm y_70, ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,f_3 = NULL;
  t = y_70;
  t = fetch_1_0(w_1, t);
  t = y_70;
  t = genzip_4_0(x_1, y_1, z_1, LiftPrimArg_0_0, t);
  w_40 = t;
  if(match_cons(t, sym__2))
    {
      s_40 = ATgetArgument(t, 0);
      t_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_40);
  r_40 = t;
  t = s_40;
  t = concat_0_0(t);
  u_40 = t;
  t = t_40;
  t = genzip_4_0(a_2, b_2, c_2, _id, t);
  v_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_40, v_40);
  f_3 = t;
  t = SSLsetAnnotations(f_3, r_40);
  if(match_cons(t, sym__2))
    {
      o_40 = ATgetArgument(t, 0);
      {
        ATerm x_16 = ATgetArgument(t, 1);
        if(match_cons(x_16, sym__2))
          {
            p_40 = ATgetArgument(x_16, 0);
            q_40 = ATgetArgument(x_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, o_40, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_40), (ATerm) ATmakeAppl(sym_CallT_3, w_70, x_70, q_40)));
  return(t);
}
ATerm genzip_4_0 (ATerm n_120 (ATerm), ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm t)
{
  static ATerm u_41 (ATerm t)
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_120(t);
        LocalPopChoice(z_16);
      }
    else
      {
        t = y_16;
        {
          ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,k_3 = NULL;
          t = o_120(t);
          t_41 = t;
          if(match_cons(t, sym__2))
            {
              p_41 = ATgetArgument(t, 0);
              q_41 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_41);
          o_41 = t;
          t = p_41;
          t = q_120(t);
          r_41 = t;
          t = q_41;
          t = u_41(t);
          s_41 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_41, s_41);
          k_3 = t;
          t = SSLsetAnnotations(k_3, o_41);
          t = p_120(t);
        }
      }
    return(t);
  }
  t = u_41(t);
  return(t);
}
ATerm at_end_1_0 (ATerm a_119 (ATerm), ATerm t)
{
  static ATerm i_42 (ATerm t)
  {
    ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL;
    h_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_42 = ATgetFirst((ATermList) t);
        g_42 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm k_20 = NULL,v_20 = NULL,n_3 = NULL;
          t = SSLgetAnnotations(h_42);
          k_20 = t;
          t = g_42;
          t = i_42(t);
          v_20 = t;
          t = (ATerm) ATinsert(CheckATermList(v_20), f_42);
          n_3 = t;
          t = SSLsetAnnotations(n_3, k_20);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_42;
        t = a_119(t);
      }
    return(t);
  }
  t = i_42(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL;
  l_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_42;
    }
  else
    {
      static ATerm d_2 (ATerm t)
      {
        t = not_null(n_42);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_42 = ATgetFirst((ATermList) t);
          if(((n_42 != NULL) && (n_42 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_42;
      t = at_end_1_0(d_2, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm c_43 (ATerm t_42, ATerm t)
{
  ATerm v_42 = NULL;
  t = t_42;
  {
    ATerm a_17 = t;
    if((PushChoice() == 0))
      {
        ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL,u_3 = NULL;
        y_42 = t;
        if(match_cons(t, sym_Var_1))
          {
            x_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_42);
        w_42 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, x_42);
        u_3 = t;
        t = SSLsetAnnotations(u_3, w_42);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_17;
      }
  }
  t = new_0_0(t);
  v_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, v_42), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_42), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_42)))), (ATerm) ATmakeAppl(sym_Var_1, v_42)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL;
  z_42 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_43 = ATgetArgument(t, 0);
      {
        ATerm b_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_43(z_42, t);
            LocalPopChoice(c_17);
          }
        else
          {
            t = b_17;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_t_10, (ATerm) ATmakeAppl(sym_Var_1, a_43)));
          }
      }
    }
  else
    {
      t = c_43(z_42, t);
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm d_17 = t;
  if((PushChoice() == 0))
    {
      ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,y_3 = NULL;
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
      y_3 = t;
      t = SSLsetAnnotations(y_3, z_21);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_17;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_13;
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
static ATerm r_2 (ATerm t)
{
  ATerm i_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_17 = ATgetArgument(t, 0);
      if(match_cons(e_17, sym__2))
        {
          i_22 = ATgetArgument(e_17, 0);
          k_22 = ATgetArgument(e_17, 1);
        }
      else
        _fail(t);
      {
        ATerm f_17 = ATgetArgument(t, 1);
        if(match_cons(f_17, sym__2))
          {
            l_22 = ATgetArgument(f_17, 0);
            m_22 = ATgetArgument(f_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_22), i_22), (ATerm) ATinsert(CheckATermList(m_22), k_22));
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_13;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_22 = ATgetFirst((ATermList) t);
      s_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_22, s_22);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL,w_22 = NULL,x_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_17 = ATgetArgument(t, 0);
      if(match_cons(g_17, sym__2))
        {
          t_22 = ATgetArgument(g_17, 0);
          u_22 = ATgetArgument(g_17, 1);
        }
      else
        _fail(t);
      {
        ATerm i_17 = ATgetArgument(t, 1);
        if(match_cons(i_17, sym__2))
          {
            w_22 = ATgetArgument(i_17, 0);
            x_22 = ATgetArgument(i_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_22), t_22), (ATerm) ATinsert(CheckATermList(x_22), u_22));
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm j_17 = t;
  if((PushChoice() == 0))
    {
      ATerm n_24 = NULL,o_24 = NULL,q_24 = NULL,a_4 = NULL;
      q_24 = t;
      if(match_cons(t, sym_Var_1))
        {
          o_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_24);
      n_24 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, o_24);
      a_4 = t;
      t = SSLsetAnnotations(a_4, n_24);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_17;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_13;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_24 = ATgetFirst((ATermList) t);
      u_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_24, u_24);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_17 = ATgetArgument(t, 0);
      if(match_cons(l_17, sym__2))
        {
          v_24 = ATgetArgument(l_17, 0);
          w_24 = ATgetArgument(l_17, 1);
        }
      else
        _fail(t);
      {
        ATerm m_17 = ATgetArgument(t, 1);
        if(match_cons(m_17, sym__2))
          {
            x_24 = ATgetArgument(m_17, 0);
            y_24 = ATgetArgument(m_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_24), v_24), (ATerm) ATinsert(CheckATermList(y_24), w_24));
  return(t);
}
static ATerm d_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_13;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_24 = ATgetFirst((ATermList) t);
      a_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_24, a_25);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_17 = ATgetArgument(t, 0);
      if(match_cons(q_17, sym__2))
        {
          b_25 = ATgetArgument(q_17, 0);
          c_25 = ATgetArgument(q_17, 1);
        }
      else
        _fail(t);
      {
        ATerm t_17 = ATgetArgument(t, 1);
        if(match_cons(t_17, sym__2))
          {
            d_25 = ATgetArgument(t_17, 0);
            e_25 = ATgetArgument(t_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_25), b_25), (ATerm) ATinsert(CheckATermList(e_25), c_25));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL;
  v_45 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      w_45 = ATgetArgument(t, 0);
      x_45 = ATgetArgument(t, 1);
      u_45 = ATgetArgument(t, 2);
      {
        ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_3 = NULL;
        t = u_45;
        t = fetch_1_0(m_2, t);
        t = u_45;
        t = genzip_4_0(n_2, o_2, r_2, LiftPrimArg_0_0, t);
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
        t = genzip_4_0(s_2, v_2, x_2, _id, t);
        x_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_21, x_21);
        z_3 = t;
        t = SSLsetAnnotations(z_3, t_21);
        if(match_cons(t, sym__2))
          {
            q_21 = ATgetArgument(t, 0);
            {
              ATerm u_17 = ATgetArgument(t, 1);
              if(match_cons(u_17, sym__2))
                {
                  r_21 = ATgetArgument(u_17, 0);
                  s_21 = ATgetArgument(u_17, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, q_21, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_21), (ATerm) ATmakeAppl(sym_PrimT_3, w_45, x_45, s_21)));
      }
    }
  else
    {
      ATerm p_23 = NULL,s_23 = NULL,w_23 = NULL,z_23 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,h_24 = NULL,i_24 = NULL,b_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          w_45 = ATgetArgument(t, 0);
          x_45 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_45;
      t = fetch_1_0(z_2, t);
      t = x_45;
      t = genzip_4_0(a_3, b_3, c_3, LiftPrimArg_0_0, t);
      i_24 = t;
      if(match_cons(t, sym__2))
        {
          b_24 = ATgetArgument(t, 0);
          c_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_24);
      z_23 = t;
      t = b_24;
      t = concat_0_0(t);
      d_24 = t;
      t = c_24;
      t = genzip_4_0(d_3, g_3, i_3, _id, t);
      h_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_24, h_24);
      b_4 = t;
      t = SSLsetAnnotations(b_4, z_23);
      if(match_cons(t, sym__2))
        {
          p_23 = ATgetArgument(t, 0);
          {
            ATerm v_17 = ATgetArgument(t, 1);
            if(match_cons(v_17, sym__2))
              {
                s_23 = ATgetArgument(v_17, 0);
                w_23 = ATgetArgument(v_17, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, p_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_23), (ATerm) ATmakeAppl(sym_PrimT_3, w_45, (ATerm)ATempty, w_23)));
    }
  return(t);
}
ATerm downup2_2_0 (ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm t)
{
  t = d_112(t);
  {
    static ATerm l_3 (ATerm t)
    {
      t = downup2_2_0(d_112, e_112, t);
      return(t);
    }
    t = SRTS_all(l_3, t);
  }
  t = e_112(t);
  return(t);
}
static ATerm e_6 (ATerm v_46, ATerm w_46, ATerm t)
{
  ATerm a_46 = NULL;
  t = SSL_fputc(v_46, w_46);
  a_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_46);
  return(t);
}
static ATerm f_6 (ATerm j_31, ATerm k_31, ATerm t)
{
  ATerm b_46 = NULL;
  t = SSL_write_term_to_stream_text(j_31, k_31);
  b_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_46);
  return(t);
}
static ATerm h_6 (ATerm b_118 (ATerm), ATerm y_174, ATerm n_31, ATerm t)
{
  ATerm c_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_174, term_w_17);
  t = k_6(t);
  c_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_46, n_31);
  t = b_118(t);
  t = fclose_0_0(t);
  t = n_31;
  return(t);
}
static ATerm g_6 (ATerm f_31, ATerm g_31, ATerm t)
{
  ATerm d_46 = NULL;
  t = SSL_write_term_to_stream_baf(f_31, g_31);
  d_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_46);
  return(t);
}
static ATerm s_3 (ATerm t)
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
      ATerm x_17 = ATgetArgument(t, 0);
      if(match_cons(x_17, sym_Stream_1))
        {
          s_25 = ATgetArgument(x_17, 0);
        }
      else
        _fail(t);
      t_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(s_25, t_25, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_17 = ATgetArgument(t, 0);
      if(match_cons(y_17, sym_Stream_1))
        {
          h_26 = ATgetArgument(y_17, 0);
        }
      else
        _fail(t);
      i_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(h_26, i_26, t);
  e_26 = t;
  t = term_z_17;
  f_26 = t;
  t = e_26;
  if(match_cons(t, sym_Stream_1))
    {
      g_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_17, e_26);
  t = e_6(f_26, g_26, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,y_47 = NULL,z_47 = NULL,i_4 = NULL,g_4 = NULL;
  i_46 = t;
  if(match_cons(t, sym__2))
    {
      p_46 = ATgetArgument(t, 0);
      q_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_46);
  o_46 = t;
  t = p_46;
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm m_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((h_46 != NULL) && (h_46 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(m_3, t);
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        t = term_c_18;
        h_46 = t;
      }
  }
  r_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_46, q_46);
  g_4 = t;
  t = SSLsetAnnotations(g_4, o_46);
  t = i_46;
  if(match_cons(t, sym__2))
    {
      k_46 = ATgetArgument(t, 0);
      l_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_46);
  j_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_46, (ATerm) ATmakeAppl(sym__2, not_null(h_46), l_46));
  i_4 = t;
  t = SSLsetAnnotations(i_4, j_46);
  n_46 = t;
  if(match_cons(t, sym__2))
    {
      y_47 = ATgetArgument(t, 0);
      z_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,j_4 = NULL;
        t = SSLgetAnnotations(n_46);
        l_25 = t;
        t = y_47;
        t = fetch_1_0(s_3, t);
        o_25 = t;
        t = z_47;
        if(match_cons(t, sym__2))
          {
            q_25 = ATgetArgument(t, 0);
            r_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_6(t_3, q_25, r_25, t);
        p_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_25, p_25);
        j_4 = t;
        t = SSLsetAnnotations(j_4, l_25);
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        {
          ATerm y_25 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,k_4 = NULL;
          t = SSLgetAnnotations(n_46);
          y_25 = t;
          t = z_47;
          if(match_cons(t, sym__2))
            {
              c_26 = ATgetArgument(t, 0);
              d_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_6(v_3, c_26, d_26, t);
          b_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_47, b_26);
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
ATerm apply_strategy_1_0 (ATerm i_134 (ATerm), ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL;
  g_48 = t;
  t = dtime_0_0(t);
  t = g_48;
  t = i_134(t);
  f_48 = t;
  t = dtime_0_0(t);
  c_48 = t;
  t = f_48;
  if(match_cons(t, sym__2))
    {
      d_48 = ATgetArgument(t, 0);
      e_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_48), (ATerm) ATmakeAppl(sym_Runtime_1, c_48)), e_48);
  return(t);
}
static ATerm u_48 (ATerm o_48, ATerm t)
{
  t = SSL_fclose(o_48);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL;
  s_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_48 = ATgetArgument(t, 0);
      {
        ATerm f_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_48);
            LocalPopChoice(g_18);
          }
        else
          {
            t = f_18;
            t = u_48(s_48, t);
          }
      }
    }
  else
    {
      t = u_48(s_48, t);
    }
  return(t);
}
static ATerm i_6 (ATerm l_31, ATerm t)
{
  t = SSL_read_term_from_stream(l_31);
  return(t);
}
static ATerm j_6 (ATerm x_46, ATerm y_46, ATerm t)
{
  ATerm v_48 = NULL;
  t = SSL_fopen(x_46, y_46);
  v_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_48);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_48 = NULL;
  t = SSL_stdin_stream();
  w_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_48);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_48 = NULL;
  t = SSL_stdout_stream();
  x_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_48);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_48 = NULL;
  t = SSL_stderr_stream();
  y_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_48);
  return(t);
}
static ATerm h_50 (ATerm e_49, ATerm t)
{
  ATerm f_49 = NULL;
  t = SSL_explode_term(e_49);
  if(match_cons(t, sym__2))
    {
      ATerm h_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_18 = ATgetArgument(t, 1);
        if(((ATgetType(i_18) == AT_LIST) && !(ATisEmpty(i_18))))
          {
            f_49 = ATgetFirst((ATermList) i_18);
            {
              ATerm j_18 = (ATerm) ATgetNext((ATermList) i_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_49;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_49;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_49;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_49;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_50 (ATerm i_49, ATerm j_49, ATerm k_49, ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL,s_49 = NULL,v_4 = NULL;
  t = SSLgetAnnotations(k_49);
  n_49 = t;
  t = i_49;
  if(match_cons(t, sym_Path_1))
    {
      s_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_49, j_49);
  v_4 = t;
  t = SSLsetAnnotations(v_4, n_49);
  if(match_cons(t, sym__2))
    {
      l_49 = ATgetArgument(t, 0);
      m_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(l_49, m_49, t);
  return(t);
}
static ATerm j_50 (ATerm u_49, ATerm v_49, ATerm w_49, ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL,c_50 = NULL,w_4 = NULL;
  t = SSLgetAnnotations(w_49);
  z_49 = t;
  t = SSL_is_string(u_49);
  c_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_50, v_49);
  w_4 = t;
  t = SSLsetAnnotations(w_4, z_49);
  if(match_cons(t, sym__2))
    {
      x_49 = ATgetArgument(t, 0);
      y_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(x_49, y_49, t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL;
  e_50 = t;
  if(match_cons(t, sym__2))
    {
      f_50 = ATgetArgument(t, 0);
      g_50 = ATgetArgument(t, 1);
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_50(e_50, t);
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            {
              ATerm m_18 = t;
              int n_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_50(f_50, g_50, e_50, t);
                  LocalPopChoice(n_18);
                }
              else
                {
                  t = m_18;
                  t = j_50(f_50, g_50, e_50, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_50(e_50, t);
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_o_18;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL;
  ATerm p_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_50 = NULL;
      n_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_50, term_t_18);
      t = k_6(t);
      LocalPopChoice(s_18);
    }
  else
    {
      t = p_18;
      t = debug_1_0(w_3, t);
      _fail(t);
    }
  l_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(m_50, t);
  k_50 = t;
  t = l_50;
  t = fclose_0_0(t);
  t = k_50;
  return(t);
}
ATerm fetch_1_0 (ATerm u_118 (ATerm), ATerm t)
{
  static ATerm m_51 (ATerm t)
  {
    ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL;
    j_51 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_51 = ATgetFirst((ATermList) t);
        l_51 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_18 = t;
      int z_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_26 = NULL,x_26 = NULL,b_5 = NULL;
          t = SSLgetAnnotations(j_51);
          u_26 = t;
          t = k_51;
          t = u_118(t);
          x_26 = t;
          t = (ATerm) ATinsert(CheckATermList(l_51), x_26);
          b_5 = t;
          t = SSLsetAnnotations(b_5, u_26);
          LocalPopChoice(z_18);
        }
      else
        {
          t = x_18;
          {
            ATerm f_27 = NULL,i_27 = NULL,c_5 = NULL;
            t = SSLgetAnnotations(j_51);
            f_27 = t;
            t = l_51;
            t = m_51(t);
            i_27 = t;
            t = (ATerm) ATinsert(CheckATermList(i_27), k_51);
            c_5 = t;
            t = SSLsetAnnotations(c_5, f_27);
          }
        }
    }
    return(t);
  }
  t = m_51(t);
  return(t);
}
static ATerm d_6 (ATerm o_45, ATerm p_45, ATerm t)
{
  t = SSL_strcat(o_45, p_45);
  return(t);
}
ATerm debug_1_0 (ATerm z_117 (ATerm), ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL;
  p_51 = t;
  t = z_117(t);
  q_51 = t;
  t = term_g_8;
  r_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_51), q_51);
  s_51 = t;
  t = SSL_printnl(r_51, s_51);
  t = p_51;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_g_19;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_51 = NULL;
      z_51 = t;
      t = SSL_is_string(z_51);
      LocalPopChoice(o_19);
    }
  else
    {
      t = h_19;
      {
        ATerm p_19 = t;
        int z_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_3, t);
            LocalPopChoice(z_19);
          }
        else
          {
            t = p_19;
            {
              ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL;
              f_52 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_52 = ATgetArgument(t, 0);
                  t = g_52;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_52 = ATgetArgument(t, 0);
                      t = g_52;
                      {
                        ATerm a_20 = t;
                        int b_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(b_20);
                          }
                        else
                          {
                            t = a_20;
                            t = debug_1_0(c_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm l_52 = NULL,m_52 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          g_52 = ATgetArgument(t, 0);
                          h_52 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_52;
                      t = eval_config_0_0(t);
                      l_52 = t;
                      t = h_52;
                      t = eval_config_0_0(t);
                      m_52 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_52, m_52);
                      t = d_6(l_52, m_52, t);
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
  ATerm q_52 = NULL,r_52 = NULL;
  q_52 = t;
  t = term_c_20;
  r_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_20, q_52);
  t = n_6(r_52, q_52, t);
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_52 = NULL,t_52 = NULL;
        t = eval_config_0_0(t);
        s_52 = t;
        t = term_c_20;
        t_52 = t;
        t = SSL_table_put(t_52, q_52, s_52);
        t = s_52;
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm r_132 (ATerm), ATerm t)
{
  ATerm x_52 = NULL;
  x_52 = t;
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_52 = NULL;
        t = term_j_20;
        t = get_config_0_0(t);
        z_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_52, term_m_20);
        t = geq_0_0(t);
        t = x_52;
        t = r_132(t);
        LocalPopChoice(i_20);
      }
    else
      {
        t = h_20;
        t = x_52;
      }
  }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm c_53 = NULL;
  c_53 = t;
  if(match_string(t, "-k"))
    {
      t = c_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_53;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL;
  d_53 = t;
  t = SSL_string_to_int(d_53);
  e_53 = t;
  t = term_n_20;
  f_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_20, e_53);
  t = q_6(f_53, e_53, t);
  t = d_53;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_o_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_4, e_4, f_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm h_53 = NULL;
  h_53 = t;
  if(match_string(t, "-S"))
    {
      t = h_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_53;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL;
  t = term_j_20;
  i_53 = t;
  t = term_p_20;
  j_53 = t;
  t = term_q_20;
  t = q_6(i_53, j_53, t);
  t = term_r_20;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_s_20;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL;
  k_53 = t;
  t = SSL_string_to_int(k_53);
  l_53 = t;
  t = term_j_20;
  m_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_20, l_53);
  t = q_6(m_53, l_53, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_53);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_t_20;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL;
  t = term_u_20;
  n_53 = t;
  t = term_f_8;
  o_53 = t;
  t = term_w_20;
  t = q_6(n_53, o_53, t);
  t = term_x_20;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_y_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_4, m_4, o_4, t);
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_4, s_4, u_4, t);
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            t = Option_3_0(z_4, a_5, d_5, t);
          }
      }
    }
  return(t);
}
static ATerm q_6 (ATerm d_55, ATerm e_55, ATerm t)
{
  ATerm p_53 = NULL;
  t = term_c_20;
  p_53 = t;
  t = SSL_table_put(p_53, d_55, e_55);
  t = (ATerm) ATmakeAppl(sym__3, term_c_20, d_55, e_55);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL;
      t = term_f_8;
      t = e_0(t);
      u_53 = t;
      t = term_d_21;
      v_53 = t;
      t = term_e_21;
      w_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_21, term_e_21, u_53);
      t = o_6(v_53, w_53, u_53, t);
      _fail(t);
    }
  else
    {
      ATerm z_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_53 = ATgetFirst((ATermList) t);
          t_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_53;
      t = c_0(t);
      t = term_f_8;
      t = d_0(t);
      z_53 = t;
      t = (ATerm) ATinsert(CheckATermList(t_53), z_53);
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm b_54 = NULL;
  b_54 = t;
  if(match_string(t, "-o"))
    {
      t = b_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_54;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL;
  c_54 = t;
  t = term_f_21;
  d_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_21, c_54);
  t = q_6(d_54, c_54, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_54);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_g_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_5, h_5, i_5, t);
  return(t);
}
static ATerm o_6 (ATerm d_60, ATerm e_60, ATerm c_60, ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
  f_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_60, e_60);
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_21 = ATgetArgument(t, 0);
            ATerm k_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_60, e_60);
        t = n_6(d_60, e_60, t);
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        t = (ATerm) ATempty;
      }
  }
  g_54 = t;
  t = (ATerm) ATinsert(CheckATermList(g_54), c_60);
  h_54 = t;
  t = SSL_table_put(d_60, e_60, h_54);
  t = f_54;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL;
      t = term_f_8;
      t = n_0(t);
      s_54 = t;
      t = term_d_21;
      t_54 = t;
      t = term_e_21;
      u_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_21, term_e_21, s_54);
      t = o_6(t_54, u_54, s_54, t);
      _fail(t);
    }
  else
    {
      ATerm y_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_54 = ATgetFirst((ATermList) t);
          p_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_54;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_54 = ATgetFirst((ATermList) t);
          r_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_54;
      t = k_0(t);
      t = q_54;
      t = l_0(t);
      y_54 = t;
      t = (ATerm) ATinsert(CheckATermList(r_54), y_54);
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm a_55 = NULL;
  a_55 = t;
  if(match_string(t, "-i"))
    {
      t = a_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_55;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL;
  b_55 = t;
  t = term_l_21;
  c_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_21, b_55);
  t = q_6(c_55, b_55, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_55);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_m_21;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_5, k_5, l_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_8;
  t = whoami_0_0(t);
  f_55 = t;
  t = term_g_8;
  h_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_21), f_55);
  i_55 = t;
  t = SSL_printnl(h_55, i_55);
  t = term_m_8;
  g_55 = t;
  t = SSL_exit(g_55);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_21;
  t = get_config_0_0(t);
  return(t);
}
static ATerm l_6 (ATerm q_49, ATerm r_49, ATerm t)
{
  ATerm p_21 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_49, r_49);
      LocalPopChoice(f_22);
    }
  else
    {
      t = p_21;
      t = SSL_addr(q_49, r_49);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_124 (ATerm), ATerm o_124 (ATerm), ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL,r_55 = NULL;
  k_55 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_55;
      t = n_124(t);
    }
  else
    {
      ATerm u_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_55 = ATgetFirst((ATermList) t);
          r_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_55;
      t = foldr_2_0(n_124, o_124, t);
      u_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_55, u_55);
      t = o_124(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_p_20;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL;
  if(match_cons(t, sym__2))
    {
      z_27 = ATgetArgument(t, 0);
      a_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_6(z_27, a_28, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_55 = NULL,v_27 = NULL,w_27 = NULL;
  t = times_0_0(t);
  w_27 = t;
  t = SSL_explode_term(w_27);
  if(match_cons(t, sym__2))
    {
      ATerm h_22 = ATgetArgument(t, 0);
      v_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_27;
  t = foldr_2_0(n_5, o_5, t);
  x_55 = t;
  t = SSL_TicksToSeconds(x_55);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL;
  i_56 = t;
  if(match_cons(t, sym__2))
    {
      j_56 = ATgetArgument(t, 0);
      k_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_56;
        if((j_56 != t))
          {
            _fail(t);
          }
        t = i_56;
        LocalPopChoice(n_22);
      }
    else
      {
        t = j_22;
        t = (ATerm) ATmakeAppl(sym__2, j_56, k_56);
        {
          ATerm o_22 = t;
          int p_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_56, k_56);
              LocalPopChoice(p_22);
            }
          else
            {
              t = o_22;
              t = SSL_gtr(j_56, k_56);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_56, k_56);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_132 (ATerm), ATerm t)
{
  ATerm o_56 = NULL;
  o_56 = t;
  {
    ATerm q_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_56 = NULL;
        t = term_j_20;
        t = get_config_0_0(t);
        q_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_56, term_m_8);
        t = geq_0_0(t);
        t = o_56;
        t = q_132(t);
        LocalPopChoice(v_22);
      }
    else
      {
        t = q_22;
        t = o_56;
      }
  }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL,v_56 = NULL,a_57 = NULL;
  t = run_time_0_0(t);
  s_56 = t;
  t = term_f_8;
  t = whoami_0_0(t);
  t_56 = t;
  t = term_g_8;
  v_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_22), s_56), term_y_22), t_56);
  a_57 = t;
  t = SSL_printnl(v_56, a_57);
  t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_22), s_56), term_y_22), t_56));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_20;
  b_57 = t;
  t = SSL_exit(b_57);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL;
  k_57 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_57;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_57 = ATgetArgument(t, 0);
          {
            ATerm m_28 = NULL,m_5 = NULL;
            t = SSLgetAnnotations(k_57);
            m_28 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_57);
            m_5 = t;
            t = SSLsetAnnotations(m_5, m_28);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_57;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_135 (ATerm), ATerm t)
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_23;
      t = get_config_0_0(t);
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      t = fetch_1_0(q_5, t);
    }
  t = g_135(t);
  return(t);
}
ATerm map_1_0 (ATerm k_118 (ATerm), ATerm t)
{
  static ATerm a_58 (ATerm t)
  {
    ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL;
    x_57 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_57;
      }
    else
      {
        ATerm u_28 = NULL,x_28 = NULL,y_28 = NULL,z_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_57 = ATgetFirst((ATermList) t);
            z_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_57);
        u_28 = t;
        t = y_57;
        t = k_118(t);
        x_28 = t;
        t = z_57;
        t = a_58(t);
        y_28 = t;
        t = (ATerm) ATinsert(CheckATermList(y_28), x_28);
        z_5 = t;
        t = SSLsetAnnotations(z_5, u_28);
      }
    return(t);
  }
  t = a_58(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_58 = ATgetFirst((ATermList) t);
      e_58 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_58 = NULL,j_58 = NULL;
        static ATerm r_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_58)), not_null(j_58));
          return(t);
        }
        t = e_58;
        t = i_0(t);
        if(((i_58 != NULL) && (i_58 != t)))
          _fail(t);
        else
          i_58 = t;
        t = d_58;
        t = g_0(t);
        if(((j_58 != NULL) && (j_58 != t)))
          _fail(t);
        else
          j_58 = t;
        t = e_58;
        t = reverse_acc_2_0(g_0, r_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_8;
      t = i_0(t);
    }
  return(t);
}
static ATerm n_6 (ATerm u_61, ATerm v_61, ATerm t)
{
  t = SSL_table_get(u_61, v_61);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL,x_6 = NULL;
  p_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_58);
  n_58 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_58);
  x_6 = t;
  t = SSLsetAnnotations(x_6, n_58);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm r_58 = NULL;
  r_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_58), term_f_23);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL;
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_21;
      t = get_config_0_0(t);
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
      t = fetch_1_0(s_5, t);
    }
  t = term_i_23;
  t = echo_0_0(t);
  t = term_d_21;
  l_58 = t;
  t = term_e_21;
  m_58 = t;
  t = term_k_23;
  t = n_6(l_58, m_58, t);
  t = reverse_acc_2_0(_id, t_5, t);
  t = map_1_0(u_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL;
  t_58 = t;
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_58;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_23 = ATgetFirst((ATermList) t);
                ATerm t_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_58;
          }
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        t = (ATerm) ATinsert(ATempty, t_58);
      }
  }
  u_58 = t;
  t = term_c_18;
  v_58 = t;
  t = SSL_printnl(v_58, u_58);
  t = t_58;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_21;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL;
  t = term_u_23;
  z_58 = t;
  t = term_f_8;
  a_59 = t;
  t = term_v_23;
  t = q_6(z_58, a_59, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_g_24;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL;
  t = term_u_23;
  d_59 = t;
  t = term_f_8;
  e_59 = t;
  t = term_v_23;
  t = q_6(d_59, e_59, t);
  t = term_m_24;
  b_59 = t;
  t = term_f_8;
  c_59 = t;
  t = term_p_24;
  t = q_6(b_59, c_59, t);
  t = term_f_25;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_g_25;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_5, w_5, a_6, t);
      LocalPopChoice(i_25);
    }
  else
    {
      t = h_25;
      t = Option_3_0(m_6, r_6, u_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,z_6 = NULL;
  k_59 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_59 = ATgetFirst((ATermList) t);
      h_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_59);
  f_59 = t;
  t = g_59;
  t = w_89(t);
  i_59 = t;
  t = h_59;
  t = x_89(t);
  j_59 = t;
  t = (ATerm) ATinsert(CheckATermList(j_59), i_59);
  z_6 = t;
  t = SSLsetAnnotations(z_6, f_59);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_137 (ATerm), ATerm t)
{
  ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,z_59 = NULL,b_60 = NULL,b_7 = NULL;
  u_59 = t;
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_25;
        t = j_137(t);
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
      }
  }
  t = u_59;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_59 = ATgetFirst((ATermList) t);
      x_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_59);
  v_59 = t;
  t = term_o_21;
  b_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_21, w_59);
  t = q_6(b_60, w_59, t);
  t = x_59;
  {
    static ATerm o_60 (ATerm t)
    {
      ATerm n_25 = t;
      int u_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_25 = t;
          int w_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_60 = NULL;
              h_60 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_60;
              LocalPopChoice(w_25);
            }
          else
            {
              t = v_25;
              t = j_137(t);
              t = Cons_2_0(_id, o_60, t);
            }
          LocalPopChoice(u_25);
        }
      else
        {
          t = n_25;
          {
            ATerm k_60 = NULL,l_60 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_60 = ATgetFirst((ATermList) t);
                l_60 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_60), (ATerm) ATmakeAppl(sym_Undefined_1, k_60));
          }
        }
      return(t);
    }
    t = o_60(t);
  }
  z_59 = t;
  t = (ATerm) ATinsert(CheckATermList(z_59), (ATerm) ATmakeAppl(sym_Program_1, w_59));
  b_7 = t;
  t = SSLsetAnnotations(b_7, v_59);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm a_61 = NULL;
  a_61 = t;
  if(match_string(t, "--help"))
    {
      t = a_61;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_61;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_61;
        }
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm b_61 = NULL,c_61 = NULL;
  t = term_c_23;
  b_61 = t;
  t = term_f_8;
  c_61 = t;
  t = term_x_25;
  t = q_6(b_61, c_61, t);
  t = term_z_25;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_a_26;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_137 (ATerm), ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL;
  v_60 = t;
  t = term_d_21;
  x_60 = t;
  t = term_e_21;
  y_60 = t;
  t = (ATerm) ATempty;
  z_60 = t;
  t = SSL_table_put(x_60, y_60, z_60);
  t = v_60;
  {
    static ATerm v_6 (ATerm t)
    {
      ATerm j_26 = t;
      int k_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_137(t);
          LocalPopChoice(k_26);
        }
      else
        {
          t = j_26;
          {
            ATerm l_26 = t;
            int m_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_6, y_6, a_7, t);
                LocalPopChoice(m_26);
              }
            else
              {
                t = l_26;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_6, t);
  }
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_61 = NULL;
        j_61 = t;
        {
          ATerm p_26 = t;
          int q_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_29 = NULL;
              t = j_61;
              {
                ATerm r_26 = t;
                int s_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_c_23;
                    t = get_config_0_0(t);
                    LocalPopChoice(s_26);
                  }
                else
                  {
                    t = r_26;
                    t = fetch_1_0(c_7, t);
                  }
              }
              t = j_61;
              t = default_system_usage_0_0(t);
              t = term_p_20;
              f_29 = t;
              t = SSL_exit(f_29);
              LocalPopChoice(q_26);
            }
          else
            {
              t = p_26;
              {
                ATerm j_29 = NULL;
                t = term_u_23;
                t = get_config_0_0(t);
                t = j_61;
                t = default_system_about_0_0(t);
                t = term_p_20;
                j_29 = t;
                t = SSL_exit(j_29);
              }
            }
        }
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        {
          ATerm t_26 = t;
          int v_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL;
              static ATerm g_7 (ATerm t)
              {
                ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL,d_7 = NULL;
                p_61 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    o_61 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_61);
                n_61 = t;
                t = o_61;
                if(((t_60 != NULL) && (t_60 != t)))
                  _fail(t);
                else
                  t_60 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, o_61);
                d_7 = t;
                t = SSLsetAnnotations(d_7, n_61);
                return(t);
              }
              t = fetch_1_0(g_7, t);
              t = term_g_8;
              l_61 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_60)), term_w_26);
              m_61 = t;
              t = SSL_printnl(l_61, m_61);
              t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_60)), term_w_26));
              t = default_system_usage_0_0(t);
              t = term_m_8;
              k_61 = t;
              t = SSL_exit(k_61);
              LocalPopChoice(v_26);
            }
          else
            {
              t = t_26;
            }
        }
      }
  }
  u_60 = t;
  t = term_d_21;
  w_60 = t;
  t = SSL_table_destroy(w_60);
  t = u_60;
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_135 (ATerm), ATerm j_135 (ATerm), ATerm k_135 (ATerm), ATerm l_135 (ATerm), ATerm t)
{
  ATerm w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL;
  t = parse_options_1_0(i_135, t);
  w_61 = t;
  t = term_y_26;
  z_61 = t;
  t = SSL_table_create(z_61);
  t = term_y_26;
  x_61 = t;
  t = term_z_26;
  y_61 = t;
  t = SSL_table_put(x_61, y_61, w_61);
  t = w_61;
  t = k_135(t);
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_135, t);
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
        {
          ATerm c_27 = t;
          int d_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_135(t);
              t = report_success_0_0(t);
              LocalPopChoice(d_27);
            }
          else
            {
              t = c_27;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = if_verbose2_1_0(p_7, t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm a_62 = NULL,b_62 = NULL;
  t = term_e_27;
  a_62 = t;
  t = term_f_8;
  b_62 = t;
  t = term_g_27;
  t = q_6(a_62, b_62, t);
  t = term_h_27;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_j_27;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL;
  c_62 = t;
  t = term_o_21;
  t = get_config_0_0(t);
  d_62 = t;
  t = term_g_8;
  e_62 = t;
  t = (ATerm) ATinsert(ATempty, d_62);
  f_62 = t;
  t = SSL_printnl(e_62, f_62);
  t = c_62;
  return(t);
}
ATerm iowrap_3_0 (ATerm r_134 (ATerm), ATerm s_134 (ATerm), ATerm t_134 (ATerm), ATerm t)
{
  static ATerm j_7 (ATerm t)
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_134(t);
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        {
          ATerm m_27 = t;
          int n_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(n_27);
            }
          else
            {
              t = m_27;
              {
                ATerm o_27 = t;
                int p_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(p_27);
                  }
                else
                  {
                    t = o_27;
                    {
                      ATerm q_27 = t;
                      int r_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(m_7, n_7, o_7, t);
                          LocalPopChoice(r_27);
                        }
                      else
                        {
                          t = q_27;
                          {
                            ATerm s_27 = t;
                            int t_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(t_27);
                              }
                            else
                              {
                                t = s_27;
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
  static ATerm l_7 (ATerm t)
  {
    ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL;
    h_62 = t;
    {
      ATerm u_27 = t;
      int x_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm q_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_62 != NULL) && (g_62 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_7, t);
          LocalPopChoice(x_27);
        }
      else
        {
          t = u_27;
          t = term_y_27;
          g_62 = t;
        }
    }
    t = not_null(g_62);
    t = ReadFromFile_0_0(t);
    i_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_62, i_62);
    t = apply_strategy_1_0(r_134, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(j_7, t_134, k_7, l_7, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,h_7 = NULL;
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
  t = downup2_2_0(x_7, c_8, t);
  t = downup_1_0(e_8, t);
  q_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_62, q_62);
  h_7 = t;
  t = SSLsetAnnotations(h_7, n_62);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = repeat_2_0(d_8, _id, t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = repeat_2_0(Canon_0_0, _id, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Canon_0_0(t);
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      {
        ATerm d_28 = t;
        int e_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            LocalPopChoice(e_28);
          }
        else
          {
            t = d_28;
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
              t = y_5(t_62, u_62, v_62, t);
            }
          }
      }
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(w_7, _fail, default_usage_0_0, t);
  return(t);
}

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
void init_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  init_constant_terms();
}
ATerm term_w_27;
ATerm term_i_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_v_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_l_25;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_k_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_f_23;
ATerm term_e_23;
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
ATerm term_v_20;
ATerm term_u_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_c_20;
ATerm term_g_19;
ATerm term_s_18;
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
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_u_13;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_k_10;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_g_8;
void init_constant_terms (void)
{
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_stderr_0);
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
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_CallT_3, term_a_14, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_CallT_3, term_h_14, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_15);
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
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym__2, term_k_20, term_o_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym__2, term_u_20, term_g_8);
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
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym__2, term_d_21, term_e_21);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym__2, term_t_23, term_g_8);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym__2, term_y_23, term_g_8);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym__2, term_e_23, term_g_8);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__2, term_e_27, term_g_8);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm topdown_1_0 (ATerm h_107 (ATerm), ATerm);
ATerm o_0 (ATerm);
ATerm q_4 (ATerm n_77, ATerm m_77, ATerm);
ATerm MatchBuildIdemVar_0_0 (ATerm);
ATerm BuildMatchIdem_0_0 (ATerm);
ATerm MatchIdem_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildBuild_0_0 (ATerm);
ATerm q_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm l_108 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm h_1 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm j_106 (ATerm), ATerm);
ATerm downup_1_0 (ATerm j_107 (ATerm), ATerm);
ATerm CreateDef2_0_0 (ATerm);
ATerm t_24 (ATerm g_24, ATerm);
ATerm conc_0_0 (ATerm);
ATerm alltd_1_0 (ATerm z_108 (ATerm), ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm Canon_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm y_5 (ATerm d_68, ATerm e_68, ATerm f_68, ATerm);
ATerm genzip_4_0 (ATerm b_115 (ATerm), ATerm c_115 (ATerm), ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm o_113 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm w_42 (ATerm n_42, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm v_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm downup2_2_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm);
ATerm e_6 (ATerm z_47, ATerm a_48, ATerm);
ATerm f_6 (ATerm n_51, ATerm o_51, ATerm);
ATerm h_6 (ATerm m_125 (ATerm), ATerm a_433, ATerm r_51, ATerm);
ATerm g_6 (ATerm j_51, ATerm k_51, ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm o_128 (ATerm), ATerm);
ATerm r_48 (ATerm l_48, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm i_6 (ATerm p_51, ATerm);
ATerm j_6 (ATerm b_48, ATerm c_48, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm c_50 (ATerm b_49, ATerm);
ATerm d_50 (ATerm f_49, ATerm g_49, ATerm h_49, ATerm);
ATerm e_50 (ATerm p_49, ATerm q_49, ATerm r_49, ATerm);
ATerm k_6 (ATerm);
ATerm v_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm i_113 (ATerm), ATerm);
ATerm d_6 (ATerm c_43, ATerm d_43, ATerm);
ATerm debug_1_0 (ATerm k_125 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm c_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm x_126 (ATerm), ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm v_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm f_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm q_6 (ATerm q_52, ATerm r_52, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm o_6 (ATerm o_57, ATerm p_57, ATerm n_57, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm l_6 (ATerm n_45, ATerm o_45, ATerm);
ATerm foldr_2_0 (ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_126 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm q_5 (ATerm);
ATerm need_help_1_0 (ATerm m_129 (ATerm), ATerm);
ATerm map_1_0 (ATerm y_112 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm n_6 (ATerm f_59, ATerm g_59, ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm c_6 (ATerm);
ATerm p_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm p_131 (ATerm), ATerm);
ATerm w_6 (ATerm);
ATerm y_6 (ATerm);
ATerm a_7 (ATerm);
ATerm c_7 (ATerm);
ATerm parse_options_1_0 (ATerm o_131 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_129 (ATerm), ATerm p_129 (ATerm), ATerm q_129 (ATerm), ATerm r_129 (ATerm), ATerm);
ATerm l_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm iowrap_3_0 (ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm z_128 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,l_0 = NULL,m_0 = NULL,n_0 = NULL;
  b_0 = t;
  t = term_g_8;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_j_8;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_8), f_0), term_k_8);
  n_0 = t;
  t = SSL_printnl(m_0, n_0);
  t = term_m_8;
  l_0 = t;
  t = SSL_exit(l_0);
  t = b_0;
  return(t);
}
ATerm topdown_1_0 (ATerm h_107 (ATerm), ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(h_107, t);
    return(t);
  }
  t = h_107(t);
  t = SRTS_all(a_0, t);
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm v_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(q_8);
      {
        ATerm p_0 = NULL,r_0 = NULL;
        p_0 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm w_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        r_0 = t;
        t = SSLgetAnnotations(p_0);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_8 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) x_8) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm z_8 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(z_8) != AT_LIST) || !(ATisEmpty(z_8))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_0;
      }
    }
  else
    {
      t = p_8;
      {
        ATerm a_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm g_9 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) g_9) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm h_9 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_9);
            _fail(t);
          }
        else
          {
            t = a_9;
          }
      }
    }
  return(t);
}
ATerm q_4 (ATerm n_77, ATerm m_77, ATerm t)
{
  t = n_77;
  t = topdown_1_0(o_0, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, n_77);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm a_1 = NULL,b_1 = NULL,d_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,j_1 = NULL,k_1 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      d_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_1;
  if(match_cons(t, sym_Match_1))
    {
      e_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_1;
  if(match_cons(t, sym_Var_1))
    {
      f_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_1;
  if(match_cons(t, sym_Seq_2))
    {
      j_1 = ATgetArgument(t, 0);
      b_1 = ATgetArgument(t, 1);
      t = j_1;
      if(match_cons(t, sym_Build_1))
        {
          k_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_1;
      if(match_cons(t, sym_Var_1))
        {
          a_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_1;
      if((f_1 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_1)), b_1);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          j_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_1;
      if(match_cons(t, sym_Var_1))
        {
          k_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_1;
      if((f_1 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_1));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm n_2 = NULL,p_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,w_2 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      s_2 = ATgetArgument(t, 0);
      u_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_2;
  if(match_cons(t, sym_Build_1))
    {
      t_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_2;
  if(match_cons(t, sym_Seq_2))
    {
      w_2 = ATgetArgument(t, 0);
      p_2 = ATgetArgument(t, 1);
      t = w_2;
      if(match_cons(t, sym_Match_1))
        {
          n_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_2;
      if((t_2 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_2), p_2);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          w_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_2;
      if((t_2 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, t_2);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,m_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      m_3 = ATgetArgument(t, 0);
      p_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_3;
  if(match_cons(t, sym_Match_1))
    {
      o_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_3;
  if(match_cons(t, sym_Seq_2))
    {
      q_3 = ATgetArgument(t, 0);
      h_3 = ATgetArgument(t, 1);
      t = q_3;
      if(match_cons(t, sym_Match_1))
        {
          g_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_3;
      if((o_3 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_3), h_3);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          q_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_3;
      if((o_3 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, o_3);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm d_4 = NULL,h_4 = NULL,n_4 = NULL,s_4 = NULL,u_4 = NULL,x_4 = NULL,y_4 = NULL,e_5 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      s_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4;
  if(match_cons(t, sym_Build_1))
    {
      ATerm l_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_4;
  if(match_cons(t, sym_Seq_2))
    {
      x_4 = ATgetArgument(t, 0);
      y_4 = ATgetArgument(t, 1);
      t = x_4;
      if(match_cons(t, sym_PrimT_3))
        {
          d_4 = ATgetArgument(t, 0);
          h_4 = ATgetArgument(t, 1);
          n_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, d_4, h_4, n_4), y_4);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          x_4 = ATgetArgument(t, 0);
          y_4 = ATgetArgument(t, 1);
          e_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, x_4, y_4, e_5);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL,m_6 = NULL,r_6 = NULL,s_6 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      m_6 = ATgetArgument(t, 0);
      r_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6;
  if(match_cons(t, sym_Build_1))
    {
      ATerm q_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6;
  if(match_cons(t, sym_Seq_2))
    {
      s_6 = ATgetArgument(t, 0);
      b_6 = ATgetArgument(t, 1);
      t = s_6;
      if(match_cons(t, sym_Build_1))
        {
          a_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_6), b_6);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          s_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, s_6);
    }
  return(t);
}
ATerm q_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_9 = ATgetArgument(t, 0);
      if(((ATgetType(r_9) != AT_LIST) || !(ATisEmpty(r_9))))
        _fail(t);
      {
        ATerm v_9 = ATgetArgument(t, 1);
        if(((ATgetType(v_9) != AT_LIST) || !(ATisEmpty(v_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm o_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_9 = ATgetArgument(t, 0);
      if(((ATgetType(w_9) == AT_LIST) && !(ATisEmpty(w_9))))
        {
          o_8 = ATgetFirst((ATermList) w_9);
          r_8 = (ATerm) ATgetNext((ATermList) w_9);
        }
      else
        _fail(t);
      {
        ATerm x_9 = ATgetArgument(t, 1);
        if(((ATgetType(x_9) == AT_LIST) && !(ATisEmpty(x_9))))
          {
            s_8 = ATgetFirst((ATermList) x_9);
            t_8 = (ATerm) ATgetNext((ATermList) x_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_8, s_8), (ATerm) ATmakeAppl(sym__2, r_8, t_8));
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm u_8 = NULL,c_9 = NULL;
  if(match_cons(t, sym__2))
    {
      u_8 = ATgetArgument(t, 0);
      c_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_9), u_8);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL;
  if(match_cons(t, sym__2))
    {
      d_9 = ATgetArgument(t, 0);
      e_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_9), (ATerm) ATmakeAppl(sym_Match_1, e_9));
  return(t);
}
ATerm w_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      if(((ATgetType(y_9) != AT_LIST) || !(ATisEmpty(y_9))))
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
ATerm x_0 (ATerm t)
{
  ATerm j_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_10 = ATgetArgument(t, 0);
      if(((ATgetType(a_10) == AT_LIST) && !(ATisEmpty(a_10))))
        {
          j_9 = ATgetFirst((ATermList) a_10);
          m_9 = (ATerm) ATgetNext((ATermList) a_10);
        }
      else
        _fail(t);
      {
        ATerm b_10 = ATgetArgument(t, 1);
        if(((ATgetType(b_10) == AT_LIST) && !(ATisEmpty(b_10))))
          {
            n_9 = ATgetFirst((ATermList) b_10);
            o_9 = (ATerm) ATgetNext((ATermList) b_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_9, n_9), (ATerm) ATmakeAppl(sym__2, m_9, o_9));
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm p_9 = NULL,s_9 = NULL;
  if(match_cons(t, sym__2))
    {
      p_9 = ATgetArgument(t, 0);
      s_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_9), p_9);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      t_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_9), (ATerm) ATmakeAppl(sym_Match_1, u_9));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,k_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,h_8 = NULL,i_8 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      k_7 = ATgetArgument(t, 0);
      u_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7;
  if(match_cons(t, sym_Build_1))
    {
      r_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7;
  if(match_cons(t, sym_Op_2))
    {
      s_7 = ATgetArgument(t, 0);
      t_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7;
  if(match_cons(t, sym_Seq_2))
    {
      v_7 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
      {
        ATerm n_8 = NULL;
        t = v_7;
        if(match_cons(t, sym_Match_1))
          {
            h_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_8;
        if(match_cons(t, sym_Op_2))
          {
            d_7 = ATgetArgument(t, 0);
            e_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_7;
        if((s_7 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, t_7, e_7);
        t = genzip_4_0(q_0, s_0, t_0, u_0, t);
        n_8 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, s_7, t_7)), f_7));
      }
    }
  else
    {
      ATerm i_9 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          v_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_7;
      if(match_cons(t, sym_Op_2))
        {
          h_8 = ATgetArgument(t, 0);
          i_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_8;
      if((s_7 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, t_7, i_8);
      t = genzip_4_0(w_0, x_0, y_0, z_0, t);
      i_9 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_9), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, s_7, t_7)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm f_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,r_11 = NULL,s_11 = NULL,u_11 = NULL;
  l_11 = t;
  if(match_cons(t, sym_Seq_2))
    {
      m_11 = ATgetArgument(t, 0);
      r_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11;
  if(match_cons(t, sym_Build_1))
    {
      n_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11;
  if(match_cons(t, sym_Op_2))
    {
      o_11 = ATgetArgument(t, 0);
      {
        ATerm d_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_11;
  {
    ATerm e_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            s_11 = ATgetArgument(t, 0);
            {
              ATerm h_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_10);
        t = s_11;
        if(match_cons(t, sym_Match_1))
          {
            u_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_11;
        if(match_cons(t, sym_Op_2))
          {
            f_11 = ATgetArgument(t, 0);
            {
              ATerm i_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_11, f_11);
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
          t = term_k_10;
        }
      }
    else
      {
        t = e_10;
        if(match_cons(t, sym_Match_1))
          {
            s_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_11;
        if(match_cons(t, sym_Op_2))
          {
            u_11 = ATgetArgument(t, 0);
            {
              ATerm l_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_11, u_11);
        {
          ATerm m_10 = t;
          if((PushChoice() == 0))
            {
              ATerm p_1 = NULL;
              if(match_cons(t, sym__2))
                {
                  p_1 = ATgetArgument(t, 0);
                  if((p_1 != ATgetArgument(t, 1)))
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
          t = term_k_10;
        }
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm l_108 (ATerm), ATerm t)
{
  ATerm a_12 (ATerm t)
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_108(t);
        ;
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        t = SRTS_one(a_12, t);
      }
    return(t);
  }
  t = a_12(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm g_13 = NULL,i_13 = NULL,j_13 = NULL,l_13 = NULL,m_13 = NULL,q_13 = NULL,r_13 = NULL,t_13 = NULL,v_13 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL;
  g_13 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_13 = ATgetArgument(t, 0);
      v_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_13;
  if(match_cons(t, sym_Let_2))
    {
      c_14 = ATgetArgument(t, 0);
      e_14 = ATgetArgument(t, 1);
      {
        ATerm l_14 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, i_13, c_14);
        t = conc_0_0(t);
        l_14 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, l_14, e_14);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          c_14 = ATgetArgument(t, 0);
          e_14 = ATgetArgument(t, 1);
          f_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_13;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_13 = ATgetFirst((ATermList) t);
          t_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_13;
      if(match_cons(t, sym_SDefT_4))
        {
          l_13 = ATgetArgument(t, 0);
          m_13 = ATgetArgument(t, 1);
          q_13 = ATgetArgument(t, 2);
          r_13 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = m_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_14;
      if(match_cons(t, sym_SVar_1))
        {
          d_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_14;
      if((l_13 != t))
        {
          _fail(t);
        }
      t = r_13;
      {
        ATerm p_10 = t;
        if((PushChoice() == 0))
          {
            ATerm c_1 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm q_10 = ATgetArgument(t, 0);
                  if(match_cons(q_10, sym_SVar_1))
                    {
                      if((l_13 != ATgetArgument(q_10, 0)))
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
            t = oncetd_1_0(c_1, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_10;
          }
        t = r_13;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,h_15 = NULL,i_15 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      h_15 = ATgetArgument(t, 0);
      t = h_15;
      if(match_cons(t, sym_Seq_2))
        {
          f_15 = ATgetArgument(t, 0);
          z_14 = ATgetArgument(t, 1);
          t = f_15;
          if(match_cons(t, sym_Where_1))
            {
              y_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_14;
          if(match_cons(t, sym_Seq_2))
            {
              c_15 = ATgetArgument(t, 0);
              e_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_15;
          if(match_cons(t, sym_Build_1))
            {
              d_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, y_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_15), e_15)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              f_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, f_15);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          h_15 = ATgetArgument(t, 0);
          t = h_15;
          if(match_cons(t, sym_Test_1))
            {
              f_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, f_15);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              h_15 = ATgetArgument(t, 0);
              t = h_15;
              if(match_cons(t, sym_Not_1))
                {
                  f_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, f_15);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  h_15 = ATgetArgument(t, 0);
                  i_15 = ATgetArgument(t, 1);
                  t = i_15;
                  if((h_15 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      h_15 = ATgetArgument(t, 0);
                      i_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = i_15;
                  if((h_15 != t))
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
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL,m_16 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      h_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
      t = h_16;
      if(match_cons(t, sym_LChoice_2))
        {
          i_16 = ATgetArgument(t, 0);
          j_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, i_16, (ATerm) ATmakeAppl(sym_LChoice_2, j_16, m_16));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          h_16 = ATgetArgument(t, 0);
          m_16 = ATgetArgument(t, 1);
          t = h_16;
          if(match_cons(t, sym_Seq_2))
            {
              i_16 = ATgetArgument(t, 0);
              j_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, i_16, (ATerm) ATmakeAppl(sym_Seq_2, j_16, m_16));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              h_16 = ATgetArgument(t, 0);
              m_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_16;
          if(match_cons(t, sym_Choice_2))
            {
              i_16 = ATgetArgument(t, 0);
              j_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, i_16, (ATerm) ATmakeAppl(sym_Choice_2, j_16, m_16));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm i_17 = NULL,n_17 = NULL,o_17 = NULL,q_17 = NULL,r_17 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      q_17 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, q_17, r_17);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          q_17 = ATgetArgument(t, 0);
          t = q_17;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_17 = ATgetFirst((ATermList) t);
              n_17 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, i_17, (ATerm) ATmakeAppl(sym_LChoices_1, n_17));
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
              q_17 = ATgetArgument(t, 0);
              t = q_17;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_17 = ATgetFirst((ATermList) t);
                  n_17 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, i_17, (ATerm) ATmakeAppl(sym_Choices_1, n_17));
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
                  q_17 = ATgetArgument(t, 0);
                  t = q_17;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      i_17 = ATgetFirst((ATermList) t);
                      n_17 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_17, (ATerm) ATmakeAppl(sym_Seqs_1, n_17));
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
                      q_17 = ATgetArgument(t, 0);
                      r_17 = ATgetArgument(t, 1);
                      o_17 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, r_17, (ATerm) ATmakeAppl(sym_Op_2, term_u_10, (ATerm) ATinsert(ATinsert(ATempty, o_17), q_17)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          q_17 = ATgetArgument(t, 0);
                          r_17 = ATgetArgument(t, 1);
                          o_17 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, o_17)), q_17), (ATerm) ATmakeAppl(sym_Build_1, r_17)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              q_17 = ATgetArgument(t, 0);
                              r_17 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_17, (ATerm) ATmakeAppl(sym_Match_1, r_17));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  q_17 = ATgetArgument(t, 0);
                                  r_17 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_17), r_17);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      q_17 = ATgetArgument(t, 0);
                                      r_17 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_17), q_17);
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
ATerm h_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      e_20 = ATgetArgument(t, 0);
      t = e_20;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_k_10;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          e_20 = ATgetArgument(t, 0);
          t = e_20;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_t_10;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              e_20 = ATgetArgument(t, 0);
              f_20 = ATgetArgument(t, 1);
              t = e_20;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_k_10;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  e_20 = ATgetArgument(t, 0);
                  f_20 = ATgetArgument(t, 1);
                  t = f_20;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_k_10;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      e_20 = ATgetArgument(t, 0);
                      f_20 = ATgetArgument(t, 1);
                      t = f_20;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_k_10;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          e_20 = ATgetArgument(t, 0);
                          t = e_20;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_k_10;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              e_20 = ATgetArgument(t, 0);
                              t = e_20;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_k_10;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  e_20 = ATgetArgument(t, 0);
                                  f_20 = ATgetArgument(t, 1);
                                  t = f_20;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_k_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      e_20 = ATgetArgument(t, 0);
                                      f_20 = ATgetArgument(t, 1);
                                      t = f_20;
                                      t = fetch_1_0(h_1, t);
                                      t = term_k_10;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          e_20 = ATgetArgument(t, 0);
                                          f_20 = ATgetArgument(t, 1);
                                          t = f_20;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = e_20;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = f_20;
                                                }
                                              else
                                                {
                                                  t = e_20;
                                                }
                                            }
                                          else
                                            {
                                              t = e_20;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = f_20;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              e_20 = ATgetArgument(t, 0);
                                              f_20 = ATgetArgument(t, 1);
                                              t = f_20;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = e_20;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = f_20;
                                                    }
                                                  else
                                                    {
                                                      t = e_20;
                                                    }
                                                }
                                              else
                                                {
                                                  t = e_20;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = f_20;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  e_20 = ATgetArgument(t, 0);
                                                  t = e_20;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_k_10;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      e_20 = ATgetArgument(t, 0);
                                                      f_20 = ATgetArgument(t, 1);
                                                      g_20 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = g_20;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_20, f_20);
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
  ATerm d_22 = NULL,f_22 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      f_22 = ATgetArgument(t, 0);
      t = f_22;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_t_10;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          f_22 = ATgetArgument(t, 0);
          t = f_22;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_k_10;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              f_22 = ATgetArgument(t, 0);
              d_22 = ATgetArgument(t, 1);
              t = d_22;
              if(match_cons(t, sym_Id_0))
                {
                  t = f_22;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = d_22;
                    }
                  else
                    {
                      t = f_22;
                    }
                }
              else
                {
                  t = f_22;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = d_22;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  f_22 = ATgetArgument(t, 0);
                  d_22 = ATgetArgument(t, 1);
                  t = f_22;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_t_10;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      f_22 = ATgetArgument(t, 0);
                      d_22 = ATgetArgument(t, 1);
                      t = d_22;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_t_10;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          f_22 = ATgetArgument(t, 0);
                          d_22 = ATgetArgument(t, 1);
                          t = d_22;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_t_10;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              f_22 = ATgetArgument(t, 0);
                              t = f_22;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_t_10;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  f_22 = ATgetArgument(t, 0);
                                  t = f_22;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_t_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      f_22 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = f_22;
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
      ;
      LocalPopChoice(w_10);
    }
  else
    {
      t = v_10;
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(y_10);
          }
        else
          {
            t = x_10;
            {
              ATerm z_10 = t;
              int b_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(b_11);
                }
              else
                {
                  t = z_10;
                  {
                    ATerm c_11 = t;
                    int e_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(e_11);
                      }
                    else
                      {
                        t = c_11;
                        {
                          ATerm h_11 = t;
                          int i_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(i_11);
                            }
                          else
                            {
                              t = h_11;
                              {
                                ATerm p_11 = t;
                                int v_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_23 = NULL,d_23 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        c_23 = ATgetArgument(t, 0);
                                        d_23 = ATgetArgument(t, 1);
                                        t = c_23;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = d_23;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            c_23 = ATgetArgument(t, 0);
                                            d_23 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = c_23;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = d_23;
                                      }
                                    ;
                                    LocalPopChoice(v_11);
                                  }
                                else
                                  {
                                    t = p_11;
                                    {
                                      ATerm x_11 = t;
                                      int y_11 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(y_11);
                                        }
                                      else
                                        {
                                          t = x_11;
                                          {
                                            ATerm c_12 = t;
                                            int d_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                ;
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
                                                      ;
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
                                                            ;
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
                                                                  ;
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
                                                                        ;
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
                                                                              ;
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
                                                                                    ;
                                                                                    LocalPopChoice(e_13);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = d_13;
                                                                                    {
                                                                                      ATerm i_23 = NULL,j_23 = NULL,n_23 = NULL,q_23 = NULL;
                                                                                      j_23 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          n_23 = ATgetArgument(t, 0);
                                                                                          q_23 = ATgetArgument(t, 1);
                                                                                          t = n_23;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              i_23 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = j_23;
                                                                                          t = q_4(i_23, q_23, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              n_23 = ATgetArgument(t, 0);
                                                                                              q_23 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = n_23;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = q_23;
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
ATerm repeat_1_0 (ATerm j_106 (ATerm), ATerm t)
{
  ATerm a_24 (ATerm t)
  {
    ATerm f_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_106(t);
        t = a_24(t);
        ;
        LocalPopChoice(h_13);
      }
    else
      {
        t = f_13;
      }
    return(t);
  }
  t = a_24(t);
  return(t);
}
ATerm downup_1_0 (ATerm j_107 (ATerm), ATerm t)
{
  t = j_107(t);
  {
    ATerm i_1 (ATerm t)
    {
      t = downup_1_0(j_107, t);
      return(t);
    }
    t = SRTS_all(i_1, t);
    t = j_107(t);
  }
  return(t);
}
ATerm CreateDef2_0_0 (ATerm t)
{
  ATerm b_24 = NULL,d_24 = NULL;
  b_24 = t;
  t = new_0_0(t);
  d_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_24), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, d_24, (ATerm)ATempty, (ATerm)ATempty, b_24)));
  return(t);
}
ATerm t_24 (ATerm g_24, ATerm t)
{
  ATerm j_24 = NULL;
  t = SSL_explode_term(g_24);
  if(match_cons(t, sym__2))
    {
      ATerm k_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      j_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_24;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,p_24 = NULL;
  p_24 = t;
  if(match_cons(t, sym__2))
    {
      l_24 = ATgetArgument(t, 0);
      m_24 = ATgetArgument(t, 1);
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 (ATerm t)
            {
              t = m_24;
              return(t);
            }
            t = l_24;
            t = at_end_1_0(l_1, t);
            ;
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            t = t_24(p_24, t);
          }
      }
    }
  else
    {
      t = t_24(p_24, t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm a_25 (ATerm t)
  {
    ATerm p_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_108(t);
        ;
        LocalPopChoice(s_13);
      }
    else
      {
        t = p_13;
        t = SRTS_all(a_25, t);
      }
    return(t);
  }
  t = a_25(t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_13;
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_11 = ATgetFirst((ATermList) t);
      k_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_11, k_11);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm q_11 = NULL,t_11 = NULL,w_11 = NULL,z_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_13 = ATgetArgument(t, 0);
      if(match_cons(x_13, sym__2))
        {
          q_11 = ATgetArgument(x_13, 0);
          t_11 = ATgetArgument(x_13, 1);
        }
      else
        _fail(t);
      {
        ATerm y_13 = ATgetArgument(t, 1);
        if(match_cons(y_13, sym__2))
          {
            w_11 = ATgetArgument(y_13, 0);
            z_11 = ATgetArgument(y_13, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_11), q_11), (ATerm) ATinsert(CheckATermList(z_11), t_11));
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm b_12 = NULL;
  b_12 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = term_b_14;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = term_i_14;
        }
      else
        {
          t = b_12;
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
        ;
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        {
          ATerm m_14 = t;
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
              ;
              LocalPopChoice(n_14);
            }
          else
            {
              t = m_14;
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
ATerm s_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_13;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm w_18 = NULL,y_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_18 = ATgetFirst((ATermList) t);
      y_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_18, y_18);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_14 = ATgetArgument(t, 0);
      if(match_cons(p_14, sym__2))
        {
          b_19 = ATgetArgument(p_14, 0);
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_19), b_19), (ATerm) ATinsert(CheckATermList(e_19), c_19));
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm f_19 = NULL;
  f_19 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = term_b_14;
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
        ;
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
              ;
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
  ATerm d_38 = NULL,f_38 = NULL,g_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
  o_38 = t;
  if(match_cons(t, sym_Rec_2))
    {
      p_38 = ATgetArgument(t, 0);
      q_38 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, p_38, (ATerm)ATempty, (ATerm)ATempty, q_38)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_38), (ATerm)ATempty, (ATerm) ATempty));
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          p_38 = ATgetArgument(t, 0);
          q_38 = ATgetArgument(t, 1);
          r_38 = ATgetArgument(t, 2);
          d_38 = ATgetArgument(t, 3);
          {
            ATerm x_38 = NULL;
            t = q_38;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = r_38;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = d_38;
            if(match_cons(t, sym_Rec_2))
              {
                f_38 = ATgetArgument(t, 0);
                g_38 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = g_38;
            {
              ATerm m_1 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm w_14 = ATgetArgument(t, 0);
                    if(match_cons(w_14, sym_SVar_1))
                      {
                        if((f_38 != ATgetArgument(w_14, 0)))
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
                      ATerm a_15 = ATgetArgument(t, 2);
                      if(((ATgetType(a_15) != AT_LIST) || !(ATisEmpty(a_15))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_38), (ATerm)ATempty, (ATerm) ATempty);
                return(t);
              }
              t = alltd_1_0(m_1, t);
              x_38 = t;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, p_38, (ATerm)ATempty, (ATerm)ATempty, x_38);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              p_38 = ATgetArgument(t, 0);
              q_38 = ATgetArgument(t, 1);
              t = q_38;
              if(match_cons(t, sym_Seq_2))
                {
                  m_38 = ATgetArgument(t, 0);
                  n_38 = ATgetArgument(t, 1);
                  t = p_38;
                  if(match_cons(t, sym_Where_1))
                    {
                      l_38 = ATgetArgument(t, 0);
                      t = m_38;
                      if(match_cons(t, sym_Build_1))
                        {
                          k_38 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_38, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_38), n_38));
                    }
                  else
                    {
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = q_38;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Build_1))
                    {
                      m_38 = ATgetArgument(t, 0);
                      t = p_38;
                      if(match_cons(t, sym_Where_1))
                        {
                          l_38 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, l_38, (ATerm) ATmakeAppl(sym_Build_1, m_38));
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = q_38;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Id_0))
                        {
                          t = p_38;
                          if(match_cons(t, sym_Id_0))
                            {
                              t = p_38;
                            }
                          else
                            {
                              t = p_38;
                            }
                        }
                      else
                        {
                          t = p_38;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = q_38;
                        }
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  p_38 = ATgetArgument(t, 0);
                  q_38 = ATgetArgument(t, 1);
                  t = q_38;
                  if(match_cons(t, sym_Scope_2))
                    {
                      m_38 = ATgetArgument(t, 0);
                      n_38 = ATgetArgument(t, 1);
                      t = p_38;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          ATerm b_15 = t;
                          int g_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_39 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, p_38, m_38);
                              t = conc_0_0(t);
                              m_39 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_39, n_38);
                              ;
                              LocalPopChoice(g_15);
                            }
                          else
                            {
                              t = b_15;
                              t = q_38;
                            }
                        }
                      else
                        {
                          ATerm r_39 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, p_38, m_38);
                          t = conc_0_0(t);
                          r_39 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, r_39, n_38);
                        }
                    }
                  else
                    {
                      t = p_38;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = q_38;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Thread_1))
                    {
                      p_38 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_15, (ATerm)ATinsert(ATempty, p_38), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          p_38 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, term_q_15, (ATerm)ATinsert(ATempty, p_38), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              p_38 = ATgetArgument(t, 0);
                              t = (ATerm) ATmakeAppl(sym_CallT_3, term_s_15, (ATerm)ATinsert(ATempty, p_38), (ATerm) ATempty);
                            }
                          else
                            {
                              if(match_cons(t, sym_All_1))
                                {
                                  p_38 = ATgetArgument(t, 0);
                                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_u_15, (ATerm)ATinsert(ATempty, p_38), (ATerm) ATempty);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Bagof_1))
                                    {
                                      p_38 = ATgetArgument(t, 0);
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_w_15, (ATerm)ATinsert(ATempty, p_38), (ATerm) ATempty);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_PrimT_3))
                                        {
                                          p_38 = ATgetArgument(t, 0);
                                          q_38 = ATgetArgument(t, 1);
                                          r_38 = ATgetArgument(t, 2);
                                          {
                                            ATerm x_15 = t;
                                            int y_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm x_5 = NULL;
                                                t = q_38;
                                                {
                                                  ATerm c_8 (ATerm t)
                                                  {
                                                    ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
                                                    z_7 = t;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        a_8 = ATgetFirst((ATermList) t);
                                                        b_8 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm z_15 = t;
                                                      int a_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm y_8 = NULL,b_9 = NULL,k_9 = NULL,e_2 = NULL;
                                                          t = SSLgetAnnotations(z_7);
                                                          y_8 = t;
                                                          t = a_8;
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_b_14;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_Fail_0)))
                                                                _fail(t);
                                                              t = term_i_14;
                                                            }
                                                          b_9 = t;
                                                          t = b_8;
                                                          {
                                                            ATerm b_16 = t;
                                                            int c_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = c_8(t);
                                                                ;
                                                                LocalPopChoice(c_16);
                                                              }
                                                            else
                                                              {
                                                                t = b_16;
                                                              }
                                                            k_9 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(k_9), b_9);
                                                            e_2 = t;
                                                            t = SSLsetAnnotations(e_2, y_8);
                                                          }
                                                          ;
                                                          LocalPopChoice(a_16);
                                                        }
                                                      else
                                                        {
                                                          t = z_15;
                                                          {
                                                            ATerm c_10 = NULL,f_10 = NULL,f_2 = NULL;
                                                            t = SSLgetAnnotations(z_7);
                                                            c_10 = t;
                                                            t = b_8;
                                                            t = c_8(t);
                                                            f_10 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(f_10), a_8);
                                                            f_2 = t;
                                                            t = SSLsetAnnotations(f_2, c_10);
                                                          }
                                                        }
                                                    }
                                                    return(t);
                                                  }
                                                  t = c_8(t);
                                                  x_5 = t;
                                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, p_38, x_5, r_38);
                                                }
                                                ;
                                                LocalPopChoice(y_15);
                                              }
                                            else
                                              {
                                                t = x_15;
                                                {
                                                  ATerm a_11 = NULL,d_11 = NULL,g_11 = NULL;
                                                  t = q_38;
                                                  t = genzip_4_0(n_1, o_1, q_1, r_1, t);
                                                  if(match_cons(t, sym__2))
                                                    {
                                                      a_11 = ATgetArgument(t, 0);
                                                      d_11 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = d_11;
                                                  t = concat_0_0(t);
                                                  g_11 = t;
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
                                                    t = (ATerm) ATmakeAppl(sym_Let_2, g_11, (ATerm) ATmakeAppl(sym_PrimT_3, p_38, a_11, r_38));
                                                  }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              p_38 = ATgetArgument(t, 0);
                                              q_38 = ATgetArgument(t, 1);
                                              r_38 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          {
                                            ATerm f_16 = t;
                                            int g_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm w_13 = NULL;
                                                t = q_38;
                                                {
                                                  ATerm p_15 (ATerm t)
                                                  {
                                                    ATerm j_15 = NULL,n_15 = NULL,o_15 = NULL;
                                                    j_15 = t;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        n_15 = ATgetFirst((ATermList) t);
                                                        o_15 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm k_16 = t;
                                                      int n_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm e_16 = NULL,l_16 = NULL,s_16 = NULL,i_2 = NULL;
                                                          t = SSLgetAnnotations(j_15);
                                                          e_16 = t;
                                                          t = n_15;
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_b_14;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_Fail_0)))
                                                                _fail(t);
                                                              t = term_i_14;
                                                            }
                                                          l_16 = t;
                                                          t = o_15;
                                                          {
                                                            ATerm o_16 = t;
                                                            int p_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = p_15(t);
                                                                ;
                                                                LocalPopChoice(p_16);
                                                              }
                                                            else
                                                              {
                                                                t = o_16;
                                                              }
                                                            s_16 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(s_16), l_16);
                                                            i_2 = t;
                                                            t = SSLsetAnnotations(i_2, e_16);
                                                          }
                                                          ;
                                                          LocalPopChoice(n_16);
                                                        }
                                                      else
                                                        {
                                                          t = k_16;
                                                          {
                                                            ATerm h_17 = NULL,l_17 = NULL,j_2 = NULL;
                                                            t = SSLgetAnnotations(j_15);
                                                            h_17 = t;
                                                            t = o_15;
                                                            t = p_15(t);
                                                            l_17 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(l_17), n_15);
                                                            j_2 = t;
                                                            t = SSLsetAnnotations(j_2, h_17);
                                                          }
                                                        }
                                                    }
                                                    return(t);
                                                  }
                                                  t = p_15(t);
                                                  w_13 = t;
                                                  t = (ATerm) ATmakeAppl(sym_CallT_3, p_38, w_13, r_38);
                                                }
                                                ;
                                                LocalPopChoice(g_16);
                                              }
                                            else
                                              {
                                                t = f_16;
                                                {
                                                  ATerm r_18 = NULL,u_18 = NULL,v_18 = NULL;
                                                  t = q_38;
                                                  t = genzip_4_0(s_1, t_1, u_1, v_1, t);
                                                  if(match_cons(t, sym__2))
                                                    {
                                                      r_18 = ATgetArgument(t, 0);
                                                      u_18 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = u_18;
                                                  t = concat_0_0(t);
                                                  v_18 = t;
                                                  {
                                                    ATerm q_16 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                          _fail(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = q_16;
                                                      }
                                                    t = (ATerm) ATmakeAppl(sym_Let_2, v_18, (ATerm) ATmakeAppl(sym_CallT_3, p_38, r_18, r_38));
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
ATerm w_1 (ATerm t)
{
  ATerm r_16 = t;
  if((PushChoice() == 0))
    {
      ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL,e_3 = NULL;
      u_40 = t;
      if(match_cons(t, sym_Var_1))
        {
          t_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_40);
      s_40 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, t_40);
      e_3 = t;
      t = SSLsetAnnotations(e_3, s_40);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_16;
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_13;
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_40 = ATgetFirst((ATermList) t);
      w_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_16 = ATgetArgument(t, 0);
      if(match_cons(t_16, sym__2))
        {
          x_40 = ATgetArgument(t_16, 0);
          y_40 = ATgetArgument(t_16, 1);
        }
      else
        _fail(t);
      {
        ATerm u_16 = ATgetArgument(t, 1);
        if(match_cons(u_16, sym__2))
          {
            z_40 = ATgetArgument(u_16, 0);
            a_41 = ATgetArgument(u_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_40), x_40), (ATerm) ATinsert(CheckATermList(a_41), y_40));
  return(t);
}
ATerm a_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_13;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_41 = ATgetFirst((ATermList) t);
      c_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_41, c_41);
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_16 = ATgetArgument(t, 0);
      if(match_cons(v_16, sym__2))
        {
          d_41 = ATgetArgument(v_16, 0);
          e_41 = ATgetArgument(v_16, 1);
        }
      else
        _fail(t);
      {
        ATerm w_16 = ATgetArgument(t, 1);
        if(match_cons(w_16, sym__2))
          {
            f_41 = ATgetArgument(w_16, 0);
            g_41 = ATgetArgument(w_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_41), d_41), (ATerm) ATinsert(CheckATermList(g_41), e_41));
  return(t);
}
ATerm y_5 (ATerm d_68, ATerm e_68, ATerm f_68, ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,f_3 = NULL;
  t = f_68;
  t = fetch_1_0(w_1, t);
  t = f_68;
  t = genzip_4_0(x_1, y_1, z_1, LiftPrimArg_0_0, t);
  r_40 = t;
  if(match_cons(t, sym__2))
    {
      n_40 = ATgetArgument(t, 0);
      o_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_40);
  m_40 = t;
  t = n_40;
  t = concat_0_0(t);
  p_40 = t;
  t = o_40;
  t = genzip_4_0(a_2, b_2, c_2, _id, t);
  q_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_40, q_40);
  f_3 = t;
  t = SSLsetAnnotations(f_3, m_40);
  if(match_cons(t, sym__2))
    {
      j_40 = ATgetArgument(t, 0);
      {
        ATerm x_16 = ATgetArgument(t, 1);
        if(match_cons(x_16, sym__2))
          {
            k_40 = ATgetArgument(x_16, 0);
            l_40 = ATgetArgument(x_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, j_40, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, k_40), (ATerm) ATmakeAppl(sym_CallT_3, d_68, e_68, l_40)));
  return(t);
}
ATerm genzip_4_0 (ATerm b_115 (ATerm), ATerm c_115 (ATerm), ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm t)
{
  ATerm o_41 (ATerm t)
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_115(t);
        ;
        LocalPopChoice(z_16);
      }
    else
      {
        t = y_16;
        {
          ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,l_3 = NULL;
          t = c_115(t);
          n_41 = t;
          if(match_cons(t, sym__2))
            {
              j_41 = ATgetArgument(t, 0);
              k_41 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_41);
          i_41 = t;
          t = j_41;
          t = e_115(t);
          l_41 = t;
          t = k_41;
          t = o_41(t);
          m_41 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_41, m_41);
          l_3 = t;
          t = SSLsetAnnotations(l_3, i_41);
          t = d_115(t);
        }
      }
    return(t);
  }
  t = o_41(t);
  return(t);
}
ATerm at_end_1_0 (ATerm o_113 (ATerm), ATerm t)
{
  ATerm c_42 (ATerm t)
  {
    ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL;
    b_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_41 = ATgetFirst((ATermList) t);
        a_42 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_20 = NULL,w_20 = NULL,t_3 = NULL;
          t = SSLgetAnnotations(b_42);
          t_20 = t;
          t = a_42;
          t = c_42(t);
          w_20 = t;
          t = (ATerm) ATinsert(CheckATermList(w_20), z_41);
          t_3 = t;
          t = SSLsetAnnotations(t_3, t_20);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_42;
        t = o_113(t);
      }
    return(t);
  }
  t = c_42(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL;
  f_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_42;
    }
  else
    {
      ATerm d_2 (ATerm t)
      {
        t = not_null(h_42);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_42 = ATgetFirst((ATermList) t);
          if(((h_42 != NULL) && (h_42 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_42;
      t = at_end_1_0(d_2, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm w_42 (ATerm n_42, ATerm t)
{
  ATerm p_42 = NULL;
  t = n_42;
  {
    ATerm a_17 = t;
    if((PushChoice() == 0))
      {
        ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL,w_3 = NULL;
        s_42 = t;
        if(match_cons(t, sym_Var_1))
          {
            r_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_42);
        q_42 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, r_42);
        w_3 = t;
        t = SSLsetAnnotations(w_3, q_42);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_17;
      }
    t = new_0_0(t);
    p_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, p_42), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_42), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_42)))), (ATerm) ATmakeAppl(sym_Var_1, p_42)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL;
  t_42 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_42 = ATgetArgument(t, 0);
      {
        ATerm b_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_42(t_42, t);
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = b_17;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_t_10, (ATerm) ATmakeAppl(sym_Var_1, u_42)));
          }
      }
    }
  else
    {
      t = w_42(t_42, t);
    }
  return(t);
}
ATerm m_2 (ATerm t)
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
ATerm o_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_13;
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm c_22 = NULL,i_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_22 = ATgetFirst((ATermList) t);
      i_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_22, i_22);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,r_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_17 = ATgetArgument(t, 0);
      if(match_cons(e_17, sym__2))
        {
          k_22 = ATgetArgument(e_17, 0);
          l_22 = ATgetArgument(e_17, 1);
        }
      else
        _fail(t);
      {
        ATerm f_17 = ATgetArgument(t, 1);
        if(match_cons(f_17, sym__2))
          {
            m_22 = ATgetArgument(f_17, 0);
            r_22 = ATgetArgument(f_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_22), k_22), (ATerm) ATinsert(CheckATermList(r_22), l_22));
  return(t);
}
ATerm v_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_13;
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_22 = ATgetFirst((ATermList) t);
      t_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_22, t_22);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_17 = ATgetArgument(t, 0);
      if(match_cons(g_17, sym__2))
        {
          u_22 = ATgetArgument(g_17, 0);
          v_22 = ATgetArgument(g_17, 1);
        }
      else
        _fail(t);
      {
        ATerm j_17 = ATgetArgument(t, 1);
        if(match_cons(j_17, sym__2))
          {
            w_22 = ATgetArgument(j_17, 0);
            x_22 = ATgetArgument(j_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_22), u_22), (ATerm) ATinsert(CheckATermList(x_22), v_22));
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm k_17 = t;
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
      t = k_17;
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_13;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_24 = ATgetFirst((ATermList) t);
      v_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_24, v_24);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_17 = ATgetArgument(t, 0);
      if(match_cons(m_17, sym__2))
        {
          w_24 = ATgetArgument(m_17, 0);
          x_24 = ATgetArgument(m_17, 1);
        }
      else
        _fail(t);
      {
        ATerm p_17 = ATgetArgument(t, 1);
        if(match_cons(p_17, sym__2))
          {
            y_24 = ATgetArgument(p_17, 0);
            z_24 = ATgetArgument(p_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_24), w_24), (ATerm) ATinsert(CheckATermList(z_24), x_24));
  return(t);
}
ATerm d_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_13;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_25 = ATgetFirst((ATermList) t);
      c_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_25, c_25);
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      if(match_cons(s_17, sym__2))
        {
          d_25 = ATgetArgument(s_17, 0);
          e_25 = ATgetArgument(s_17, 1);
        }
      else
        _fail(t);
      {
        ATerm t_17 = ATgetArgument(t, 1);
        if(match_cons(t_17, sym__2))
          {
            f_25 = ATgetArgument(t_17, 0);
            g_25 = ATgetArgument(t_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_25), d_25), (ATerm) ATinsert(CheckATermList(g_25), e_25));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL;
  s_45 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      t_45 = ATgetArgument(t, 0);
      u_45 = ATgetArgument(t, 1);
      r_45 = ATgetArgument(t, 2);
      {
        ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_3 = NULL;
        t = r_45;
        t = fetch_1_0(m_2, t);
        t = r_45;
        t = genzip_4_0(o_2, q_2, r_2, LiftPrimArg_0_0, t);
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
        t = genzip_4_0(v_2, x_2, y_2, _id, t);
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, q_21, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_21), (ATerm) ATmakeAppl(sym_PrimT_3, t_45, u_45, s_21)));
      }
    }
  else
    {
      ATerm s_23 = NULL,v_23 = NULL,w_23 = NULL,z_23 = NULL,c_24 = NULL,e_24 = NULL,f_24 = NULL,h_24 = NULL,i_24 = NULL,b_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          t_45 = ATgetArgument(t, 0);
          u_45 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_45;
      t = fetch_1_0(z_2, t);
      t = u_45;
      t = genzip_4_0(a_3, b_3, c_3, LiftPrimArg_0_0, t);
      i_24 = t;
      if(match_cons(t, sym__2))
        {
          c_24 = ATgetArgument(t, 0);
          e_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_24);
      z_23 = t;
      t = c_24;
      t = concat_0_0(t);
      f_24 = t;
      t = e_24;
      t = genzip_4_0(d_3, i_3, j_3, _id, t);
      h_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_24, h_24);
      b_4 = t;
      t = SSLsetAnnotations(b_4, z_23);
      if(match_cons(t, sym__2))
        {
          s_23 = ATgetArgument(t, 0);
          {
            ATerm v_17 = ATgetArgument(t, 1);
            if(match_cons(v_17, sym__2))
              {
                v_23 = ATgetArgument(v_17, 0);
                w_23 = ATgetArgument(v_17, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, s_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_23), (ATerm) ATmakeAppl(sym_PrimT_3, t_45, (ATerm)ATempty, w_23)));
    }
  return(t);
}
ATerm downup2_2_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm t)
{
  t = m_107(t);
  {
    ATerm k_3 (ATerm t)
    {
      t = downup2_2_0(m_107, n_107, t);
      return(t);
    }
    t = SRTS_all(k_3, t);
    t = n_107(t);
  }
  return(t);
}
ATerm e_6 (ATerm z_47, ATerm a_48, ATerm t)
{
  ATerm x_45 = NULL;
  t = SSL_fputc(z_47, a_48);
  x_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_45);
  return(t);
}
ATerm f_6 (ATerm n_51, ATerm o_51, ATerm t)
{
  ATerm y_45 = NULL;
  t = SSL_write_term_to_stream_text(n_51, o_51);
  y_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_45);
  return(t);
}
ATerm h_6 (ATerm m_125 (ATerm), ATerm a_433, ATerm r_51, ATerm t)
{
  ATerm z_45 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_433, term_w_17);
  t = k_6(t);
  z_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_45, r_51);
  t = m_125(t);
  t = fclose_0_0(t);
  t = r_51;
  return(t);
}
ATerm g_6 (ATerm j_51, ATerm k_51, ATerm t)
{
  ATerm a_46 = NULL;
  t = SSL_write_term_to_stream_baf(j_51, k_51);
  a_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_46);
  return(t);
}
ATerm r_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_17 = ATgetArgument(t, 0);
      if(match_cons(x_17, sym_Stream_1))
        {
          u_25 = ATgetArgument(x_17, 0);
        }
      else
        _fail(t);
      v_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(u_25, v_25, t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_17 = ATgetArgument(t, 0);
      if(match_cons(y_17, sym_Stream_1))
        {
          j_26 = ATgetArgument(y_17, 0);
        }
      else
        _fail(t);
      k_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(j_26, k_26, t);
  g_26 = t;
  t = term_z_17;
  h_26 = t;
  t = g_26;
  if(match_cons(t, sym_Stream_1))
    {
      i_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_17, g_26);
  t = e_6(h_26, i_26, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_47 = NULL,q_47 = NULL,j_4 = NULL,i_4 = NULL;
  f_46 = t;
  if(match_cons(t, sym__2))
    {
      m_46 = ATgetArgument(t, 0);
      n_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_46);
  l_46 = t;
  t = m_46;
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((e_46 != NULL) && (e_46 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(n_3, t);
        ;
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        t = term_c_18;
        e_46 = t;
      }
    o_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_46, n_46);
    i_4 = t;
    t = SSLsetAnnotations(i_4, l_46);
    t = f_46;
    if(match_cons(t, sym__2))
      {
        h_46 = ATgetArgument(t, 0);
        i_46 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_46);
    g_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_46, (ATerm) ATmakeAppl(sym__2, not_null(e_46), i_46));
    j_4 = t;
    t = SSLsetAnnotations(j_4, g_46);
    k_46 = t;
    if(match_cons(t, sym__2))
      {
        p_47 = ATgetArgument(t, 0);
        q_47 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm d_18 = t;
      int e_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,k_4 = NULL;
          t = SSLgetAnnotations(k_46);
          n_25 = t;
          t = p_47;
          t = fetch_1_0(r_3, t);
          q_25 = t;
          t = q_47;
          if(match_cons(t, sym__2))
            {
              s_25 = ATgetArgument(t, 0);
              t_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_6(s_3, s_25, t_25, t);
          r_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_25, r_25);
          k_4 = t;
          t = SSLsetAnnotations(k_4, n_25);
          ;
          LocalPopChoice(e_18);
        }
      else
        {
          t = d_18;
          {
            ATerm a_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,l_4 = NULL;
            t = SSLgetAnnotations(k_46);
            a_26 = t;
            t = q_47;
            if(match_cons(t, sym__2))
              {
                e_26 = ATgetArgument(t, 0);
                f_26 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = h_6(u_3, e_26, f_26, t);
            d_26 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_47, d_26);
            l_4 = t;
            t = SSLsetAnnotations(l_4, a_26);
          }
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
ATerm apply_strategy_1_0 (ATerm o_128 (ATerm), ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL;
  x_47 = t;
  t = dtime_0_0(t);
  t = x_47;
  t = o_128(t);
  w_47 = t;
  t = dtime_0_0(t);
  t_47 = t;
  t = w_47;
  if(match_cons(t, sym__2))
    {
      u_47 = ATgetArgument(t, 0);
      v_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_47), (ATerm) ATmakeAppl(sym_Runtime_1, t_47)), v_47);
  return(t);
}
ATerm r_48 (ATerm l_48, ATerm t)
{
  t = SSL_fclose(l_48);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL;
  p_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_48 = ATgetArgument(t, 0);
      {
        ATerm f_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_48);
            ;
            LocalPopChoice(g_18);
          }
        else
          {
            t = f_18;
            t = r_48(p_48, t);
          }
      }
    }
  else
    {
      t = r_48(p_48, t);
    }
  return(t);
}
ATerm i_6 (ATerm p_51, ATerm t)
{
  t = SSL_read_term_from_stream(p_51);
  return(t);
}
ATerm j_6 (ATerm b_48, ATerm c_48, ATerm t)
{
  ATerm s_48 = NULL;
  t = SSL_fopen(b_48, c_48);
  s_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_48);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_48 = NULL;
  t = SSL_stdin_stream();
  t_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_48);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_48 = NULL;
  t = SSL_stdout_stream();
  u_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_48);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_48 = NULL;
  t = SSL_stderr_stream();
  v_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_48);
  return(t);
}
ATerm c_50 (ATerm b_49, ATerm t)
{
  ATerm c_49 = NULL;
  t = SSL_explode_term(b_49);
  if(match_cons(t, sym__2))
    {
      ATerm h_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_18 = ATgetArgument(t, 1);
        if(((ATgetType(i_18) == AT_LIST) && !(ATisEmpty(i_18))))
          {
            c_49 = ATgetFirst((ATermList) i_18);
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
  t = c_49;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_49;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_49;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_49;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm d_50 (ATerm f_49, ATerm g_49, ATerm h_49, ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL,n_49 = NULL,w_4 = NULL;
  t = SSLgetAnnotations(h_49);
  k_49 = t;
  t = f_49;
  if(match_cons(t, sym_Path_1))
    {
      n_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_49, g_49);
  w_4 = t;
  t = SSLsetAnnotations(w_4, k_49);
  if(match_cons(t, sym__2))
    {
      i_49 = ATgetArgument(t, 0);
      j_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(i_49, j_49, t);
  return(t);
}
ATerm e_50 (ATerm p_49, ATerm q_49, ATerm r_49, ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,x_49 = NULL,z_4 = NULL;
  t = SSLgetAnnotations(r_49);
  u_49 = t;
  t = SSL_is_string(p_49);
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_49, q_49);
  z_4 = t;
  t = SSLsetAnnotations(z_4, u_49);
  if(match_cons(t, sym__2))
    {
      s_49 = ATgetArgument(t, 0);
      t_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(s_49, t_49, t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL;
  z_49 = t;
  if(match_cons(t, sym__2))
    {
      a_50 = ATgetArgument(t, 0);
      b_50 = ATgetArgument(t, 1);
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_50(z_49, t);
            ;
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
                  t = d_50(a_50, b_50, z_49, t);
                  ;
                  LocalPopChoice(n_18);
                }
              else
                {
                  t = m_18;
                  t = e_50(a_50, b_50, z_49, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_50(z_49, t);
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_o_18;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL;
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_50 = NULL;
      i_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_50, term_s_18);
      t = k_6(t);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      t = debug_1_0(v_3, t);
      _fail(t);
    }
  g_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(h_50, t);
  f_50 = t;
  t = g_50;
  t = fclose_0_0(t);
  t = f_50;
  return(t);
}
ATerm fetch_1_0 (ATerm i_113 (ATerm), ATerm t)
{
  ATerm g_51 (ATerm t)
  {
    ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL;
    d_51 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_51 = ATgetFirst((ATermList) t);
        f_51 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_18 = t;
      int x_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_26 = NULL,z_26 = NULL,c_5 = NULL;
          t = SSLgetAnnotations(d_51);
          w_26 = t;
          t = e_51;
          t = i_113(t);
          z_26 = t;
          t = (ATerm) ATinsert(CheckATermList(f_51), z_26);
          c_5 = t;
          t = SSLsetAnnotations(c_5, w_26);
          ;
          LocalPopChoice(x_18);
        }
      else
        {
          t = t_18;
          {
            ATerm h_27 = NULL,k_27 = NULL,d_5 = NULL;
            t = SSLgetAnnotations(d_51);
            h_27 = t;
            t = f_51;
            t = g_51(t);
            k_27 = t;
            t = (ATerm) ATinsert(CheckATermList(k_27), e_51);
            d_5 = t;
            t = SSLsetAnnotations(d_5, h_27);
          }
        }
    }
    return(t);
  }
  t = g_51(t);
  return(t);
}
ATerm d_6 (ATerm c_43, ATerm d_43, ATerm t)
{
  t = SSL_strcat(c_43, d_43);
  return(t);
}
ATerm debug_1_0 (ATerm k_125 (ATerm), ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,s_51 = NULL,t_51 = NULL;
  l_51 = t;
  t = k_125(t);
  m_51 = t;
  t = term_j_8;
  s_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_51), m_51);
  t_51 = t;
  t = SSL_printnl(s_51, t_51);
  t = l_51;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
    }
  return(t);
}
ATerm c_4 (ATerm t)
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
      ATerm a_52 = NULL;
      a_52 = t;
      t = SSL_is_string(a_52);
      ;
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
            ;
            LocalPopChoice(z_19);
          }
        else
          {
            t = p_19;
            {
              ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
              g_52 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_52 = ATgetArgument(t, 0);
                  t = h_52;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_52 = ATgetArgument(t, 0);
                      t = h_52;
                      {
                        ATerm a_20 = t;
                        int b_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
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
                      ATerm m_52 = NULL,n_52 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_52 = ATgetArgument(t, 0);
                          i_52 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_52;
                      t = eval_config_0_0(t);
                      m_52 = t;
                      t = i_52;
                      t = eval_config_0_0(t);
                      n_52 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_52, n_52);
                      t = d_6(m_52, n_52, t);
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
  ATerm t_52 = NULL,u_52 = NULL;
  t_52 = t;
  t = term_c_20;
  u_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_20, t_52);
  t = n_6(u_52, t_52, t);
  {
    ATerm d_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_52 = NULL,w_52 = NULL;
        t = eval_config_0_0(t);
        v_52 = t;
        t = term_c_20;
        w_52 = t;
        t = SSL_table_put(w_52, t_52, v_52);
        t = v_52;
        ;
        LocalPopChoice(h_20);
      }
    else
      {
        t = d_20;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_126 (ATerm), ATerm t)
{
  ATerm f_53 = NULL;
  f_53 = t;
  {
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_53 = NULL;
        t = term_k_20;
        t = get_config_0_0(t);
        h_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_53, term_l_20);
        t = geq_0_0(t);
        t = f_53;
        t = x_126(t);
        ;
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
        t = f_53;
      }
  }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm k_53 = NULL;
  k_53 = t;
  if(match_string(t, "-k"))
    {
      t = k_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_53;
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL;
  l_53 = t;
  t = SSL_string_to_int(l_53);
  m_53 = t;
  t = term_m_20;
  n_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_20, m_53);
  t = q_6(n_53, m_53, t);
  t = l_53;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_n_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_4, f_4, g_4, t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm p_53 = NULL;
  p_53 = t;
  if(match_string(t, "-S"))
    {
      t = p_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_53;
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL;
  t = term_k_20;
  q_53 = t;
  t = term_o_20;
  r_53 = t;
  t = term_p_20;
  t = q_6(q_53, r_53, t);
  t = term_q_20;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_r_20;
  return(t);
}
ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL;
  s_53 = t;
  t = SSL_string_to_int(s_53);
  t_53 = t;
  t = term_k_20;
  u_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_20, t_53);
  t = q_6(u_53, t_53, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_53);
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_s_20;
  return(t);
}
ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL;
  t = term_u_20;
  v_53 = t;
  t = term_g_8;
  w_53 = t;
  t = term_v_20;
  t = q_6(v_53, w_53, t);
  t = term_x_20;
  return(t);
}
ATerm f_5 (ATerm t)
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
      t = Option_3_0(m_4, o_4, p_4, t);
      ;
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
            t = ArgOption_3_0(r_4, t_4, v_4, t);
            ;
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            t = Option_3_0(a_5, b_5, f_5, t);
          }
      }
    }
  return(t);
}
ATerm q_6 (ATerm q_52, ATerm r_52, ATerm t)
{
  ATerm x_53 = NULL;
  t = term_c_20;
  x_53 = t;
  t = SSL_table_put(x_53, q_52, r_52);
  t = (ATerm) ATmakeAppl(sym__3, term_c_20, q_52, r_52);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
      t = term_g_8;
      t = e_0(t);
      c_54 = t;
      t = term_d_21;
      d_54 = t;
      t = term_e_21;
      e_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_21, term_e_21, c_54);
      t = o_6(d_54, e_54, c_54, t);
      _fail(t);
    }
  else
    {
      ATerm l_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_54 = ATgetFirst((ATermList) t);
          b_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_54;
      t = c_0(t);
      t = term_g_8;
      t = d_0(t);
      l_54 = t;
      t = (ATerm) ATinsert(CheckATermList(b_54), l_54);
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm n_54 = NULL;
  n_54 = t;
  if(match_string(t, "-o"))
    {
      t = n_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_54;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL;
  o_54 = t;
  t = term_f_21;
  p_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_21, o_54);
  t = q_6(p_54, o_54, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_54);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_g_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_5, h_5, i_5, t);
  return(t);
}
ATerm o_6 (ATerm o_57, ATerm p_57, ATerm n_57, ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL;
  r_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_57, p_57);
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
        t = (ATerm) ATmakeAppl(sym__2, o_57, p_57);
        t = n_6(o_57, p_57, t);
        ;
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        t = (ATerm) ATempty;
      }
    s_54 = t;
    t = (ATerm) ATinsert(CheckATermList(s_54), n_57);
    t_54 = t;
    t = SSL_table_put(o_57, p_57, t_54);
    t = r_54;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL;
      t = term_g_8;
      t = k_0(t);
      e_55 = t;
      t = term_d_21;
      f_55 = t;
      t = term_e_21;
      g_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_21, term_e_21, e_55);
      t = o_6(f_55, g_55, e_55, t);
      _fail(t);
    }
  else
    {
      ATerm k_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_55 = ATgetFirst((ATermList) t);
          b_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_55 = ATgetFirst((ATermList) t);
          d_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_55;
      t = i_0(t);
      t = c_55;
      t = j_0(t);
      k_55 = t;
      t = (ATerm) ATinsert(CheckATermList(d_55), k_55);
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm m_55 = NULL;
  m_55 = t;
  if(match_string(t, "-i"))
    {
      t = m_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_55;
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL;
  n_55 = t;
  t = term_l_21;
  o_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_21, n_55);
  t = q_6(o_55, n_55, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_55);
  return(t);
}
ATerm l_5 (ATerm t)
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
  ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_8;
  t = whoami_0_0(t);
  p_55 = t;
  t = term_j_8;
  r_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_21), p_55);
  s_55 = t;
  t = SSL_printnl(r_55, s_55);
  t = term_m_8;
  q_55 = t;
  t = SSL_exit(q_55);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_21;
  t = get_config_0_0(t);
  return(t);
}
ATerm l_6 (ATerm n_45, ATerm o_45, ATerm t)
{
  ATerm p_21 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_45, o_45);
      ;
      LocalPopChoice(e_22);
    }
  else
    {
      t = p_21;
      t = SSL_addr(n_45, o_45);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL;
  u_55 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_55;
      t = b_119(t);
    }
  else
    {
      ATerm z_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_55 = ATgetFirst((ATermList) t);
          w_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_55;
      t = foldr_2_0(b_119, c_119, t);
      z_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_55, z_55);
      t = c_119(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_o_20;
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL;
  if(match_cons(t, sym__2))
    {
      b_28 = ATgetArgument(t, 0);
      c_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_6(b_28, c_28, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_56 = NULL,x_27 = NULL,y_27 = NULL;
  t = times_0_0(t);
  y_27 = t;
  t = SSL_explode_term(y_27);
  if(match_cons(t, sym__2))
    {
      ATerm g_22 = ATgetArgument(t, 0);
      x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_27;
  t = foldr_2_0(m_5, o_5, t);
  c_56 = t;
  t = SSL_TicksToSeconds(c_56);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL;
  n_56 = t;
  if(match_cons(t, sym__2))
    {
      o_56 = ATgetArgument(t, 0);
      p_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_56;
        if((o_56 != t))
          {
            _fail(t);
          }
        t = n_56;
        ;
        LocalPopChoice(j_22);
      }
    else
      {
        t = h_22;
        t = (ATerm) ATmakeAppl(sym__2, o_56, p_56);
        {
          ATerm n_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_56, p_56);
              ;
              LocalPopChoice(o_22);
            }
          else
            {
              t = n_22;
              t = SSL_gtr(o_56, p_56);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_56, p_56);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_126 (ATerm), ATerm t)
{
  ATerm t_56 = NULL;
  t_56 = t;
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_56 = NULL;
        t = term_k_20;
        t = get_config_0_0(t);
        v_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_56, term_m_8);
        t = geq_0_0(t);
        t = t_56;
        t = w_126(t);
        ;
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = t_56;
      }
  }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,f_57 = NULL,g_57 = NULL;
  t = run_time_0_0(t);
  c_57 = t;
  t = term_g_8;
  t = whoami_0_0(t);
  d_57 = t;
  t = term_j_8;
  f_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_22), c_57), term_y_22), d_57);
  g_57 = t;
  t = SSL_printnl(f_57, g_57);
  t = (ATerm) ATmakeAppl(sym__2, term_j_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_22), c_57), term_y_22), d_57));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_20;
  h_57 = t;
  t = SSL_exit(h_57);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL;
  u_57 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_57;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_57 = ATgetArgument(t, 0);
          {
            ATerm o_28 = NULL,n_5 = NULL;
            t = SSLgetAnnotations(u_57);
            o_28 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_57);
            n_5 = t;
            t = SSLsetAnnotations(n_5, o_28);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_57;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_129 (ATerm), ATerm t)
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      t = fetch_1_0(q_5, t);
    }
  t = m_129(t);
  return(t);
}
ATerm map_1_0 (ATerm y_112 (ATerm), ATerm t)
{
  ATerm k_58 (ATerm t)
  {
    ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL;
    h_58 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_58;
      }
    else
      {
        ATerm w_28 = NULL,z_28 = NULL,a_29 = NULL,z_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_58 = ATgetFirst((ATermList) t);
            j_58 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_58);
        w_28 = t;
        t = i_58;
        t = y_112(t);
        z_28 = t;
        t = j_58;
        t = k_58(t);
        a_29 = t;
        t = (ATerm) ATinsert(CheckATermList(a_29), z_28);
        z_5 = t;
        t = SSLsetAnnotations(z_5, w_28);
      }
    return(t);
  }
  t = k_58(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_58 = ATgetFirst((ATermList) t);
      o_58 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_58 = NULL,t_58 = NULL;
        ATerm r_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_58)), not_null(t_58));
          return(t);
        }
        t = o_58;
        t = h_0(t);
        if(((s_58 != NULL) && (s_58 != t)))
          _fail(t);
        else
          s_58 = t;
        t = n_58;
        t = g_0(t);
        if(((t_58 != NULL) && (t_58 != t)))
          _fail(t);
        else
          t_58 = t;
        t = o_58;
        t = reverse_acc_2_0(g_0, r_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_8;
      t = h_0(t);
    }
  return(t);
}
ATerm n_6 (ATerm f_59, ATerm g_59, ATerm t)
{
  t = SSL_table_get(f_59, g_59);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL,x_6 = NULL;
  z_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_58);
  x_58 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_58);
  x_6 = t;
  t = SSLsetAnnotations(x_6, x_58);
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm b_59 = NULL;
  b_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_59), term_f_23);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL;
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
      t = fetch_1_0(s_5, t);
    }
  t = term_k_23;
  t = echo_0_0(t);
  t = term_d_21;
  v_58 = t;
  t = term_e_21;
  w_58 = t;
  t = term_l_23;
  t = n_6(v_58, w_58, t);
  t = reverse_acc_2_0(_id, t_5, t);
  t = map_1_0(u_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL,h_59 = NULL;
  d_59 = t;
  {
    ATerm m_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_59;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_23 = ATgetFirst((ATermList) t);
                ATerm r_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_59;
          }
        ;
        LocalPopChoice(o_23);
      }
    else
      {
        t = m_23;
        t = (ATerm) ATinsert(ATempty, d_59);
      }
    e_59 = t;
    t = term_c_18;
    h_59 = t;
    t = SSL_printnl(h_59, e_59);
    t = d_59;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_21;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL;
  t = term_t_23;
  l_59 = t;
  t = term_g_8;
  m_59 = t;
  t = term_u_23;
  t = q_6(l_59, m_59, t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_x_23;
  return(t);
}
ATerm p_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL;
  t = term_t_23;
  p_59 = t;
  t = term_g_8;
  q_59 = t;
  t = term_u_23;
  t = q_6(p_59, q_59, t);
  t = term_y_23;
  n_59 = t;
  t = term_g_8;
  o_59 = t;
  t = term_k_24;
  t = q_6(n_59, o_59, t);
  t = term_r_24;
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_s_24;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_5, w_5, c_6, t);
      ;
      LocalPopChoice(i_25);
    }
  else
    {
      t = h_25;
      t = Option_3_0(p_6, t_6, u_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm t)
{
  ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,z_6 = NULL;
  w_59 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_59 = ATgetFirst((ATermList) t);
      t_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_59);
  r_59 = t;
  t = s_59;
  t = b_84(t);
  u_59 = t;
  t = t_59;
  t = c_84(t);
  v_59 = t;
  t = (ATerm) ATinsert(CheckATermList(v_59), u_59);
  z_6 = t;
  t = SSLsetAnnotations(z_6, r_59);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_131 (ATerm), ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL,g_60 = NULL,h_60 = NULL,b_7 = NULL;
  b_60 = t;
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_25;
        t = p_131(t);
        ;
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
      }
    t = b_60;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_60 = ATgetFirst((ATermList) t);
        e_60 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(b_60);
    c_60 = t;
    t = term_o_21;
    h_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_o_21, d_60);
    t = q_6(h_60, d_60, t);
    t = e_60;
    {
      ATerm r_60 (ATerm t)
      {
        ATerm m_25 = t;
        int o_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_25 = t;
            int w_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_60 = NULL;
                k_60 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_60;
                ;
                LocalPopChoice(w_25);
              }
            else
              {
                t = p_25;
                t = p_131(t);
                t = Cons_2_0(_id, r_60, t);
              }
            ;
            LocalPopChoice(o_25);
          }
        else
          {
            t = m_25;
            {
              ATerm n_60 = NULL,o_60 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_60 = ATgetFirst((ATermList) t);
                  o_60 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_60), (ATerm) ATmakeAppl(sym_Undefined_1, n_60));
            }
          }
        return(t);
      }
      t = r_60(t);
      g_60 = t;
      t = (ATerm) ATinsert(CheckATermList(g_60), (ATerm) ATmakeAppl(sym_Program_1, d_60));
      b_7 = t;
      t = SSLsetAnnotations(b_7, c_60);
    }
  }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm d_61 = NULL;
  d_61 = t;
  if(match_string(t, "--help"))
    {
      t = d_61;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_61;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_61;
        }
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL;
  t = term_e_23;
  e_61 = t;
  t = term_g_8;
  f_61 = t;
  t = term_x_25;
  t = q_6(e_61, f_61, t);
  t = term_y_25;
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm c_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_131 (ATerm), ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL;
  y_60 = t;
  t = term_d_21;
  a_61 = t;
  t = term_e_21;
  b_61 = t;
  t = (ATerm) ATempty;
  c_61 = t;
  t = SSL_table_put(a_61, b_61, c_61);
  t = y_60;
  {
    ATerm v_6 (ATerm t)
    {
      ATerm b_26 = t;
      int c_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_131(t);
          ;
          LocalPopChoice(c_26);
        }
      else
        {
          t = b_26;
          {
            ATerm l_26 = t;
            int m_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_6, y_6, a_7, t);
                ;
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
    {
      ATerm n_26 = t;
      int o_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_61 = NULL;
          m_61 = t;
          {
            ATerm p_26 = t;
            int q_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_29 = NULL;
                t = m_61;
                {
                  ATerm r_26 = t;
                  int s_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_e_23;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(s_26);
                    }
                  else
                    {
                      t = r_26;
                      t = fetch_1_0(c_7, t);
                    }
                  t = m_61;
                  t = default_system_usage_0_0(t);
                  t = term_o_20;
                  h_29 = t;
                  t = SSL_exit(h_29);
                }
                ;
                LocalPopChoice(q_26);
              }
            else
              {
                t = p_26;
                {
                  ATerm l_29 = NULL;
                  t = term_t_23;
                  t = get_config_0_0(t);
                  t = m_61;
                  t = default_system_about_0_0(t);
                  t = term_o_20;
                  l_29 = t;
                  t = SSL_exit(l_29);
                }
              }
          }
          ;
          LocalPopChoice(o_26);
        }
      else
        {
          t = n_26;
          {
            ATerm t_26 = t;
            int u_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL;
                ATerm h_7 (ATerm t)
                {
                  ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL,g_7 = NULL;
                  s_61 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      r_61 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_61);
                  q_61 = t;
                  t = r_61;
                  if(((w_60 != NULL) && (w_60 != t)))
                    _fail(t);
                  else
                    w_60 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, r_61);
                  g_7 = t;
                  t = SSLsetAnnotations(g_7, q_61);
                  return(t);
                }
                t = fetch_1_0(h_7, t);
                t = term_j_8;
                o_61 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_60)), term_v_26);
                p_61 = t;
                t = SSL_printnl(o_61, p_61);
                t = (ATerm) ATmakeAppl(sym__2, term_j_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_60)), term_v_26));
                t = default_system_usage_0_0(t);
                t = term_m_8;
                n_61 = t;
                t = SSL_exit(n_61);
                ;
                LocalPopChoice(u_26);
              }
            else
              {
                t = t_26;
              }
          }
        }
      x_60 = t;
      t = term_d_21;
      z_60 = t;
      t = SSL_table_destroy(z_60);
      t = x_60;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_129 (ATerm), ATerm p_129 (ATerm), ATerm q_129 (ATerm), ATerm r_129 (ATerm), ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL;
  t = parse_options_1_0(o_129, t);
  x_61 = t;
  t = term_x_26;
  a_62 = t;
  t = SSL_table_create(a_62);
  t = term_x_26;
  y_61 = t;
  t = term_y_26;
  z_61 = t;
  t = SSL_table_put(y_61, z_61, x_61);
  t = x_61;
  t = q_129(t);
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_129, t);
        ;
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
              t = r_129(t);
              t = report_success_0_0(t);
              ;
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
ATerm l_7 (ATerm t)
{
  t = if_verbose2_1_0(q_7, t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL;
  t = term_e_27;
  b_62 = t;
  t = term_g_8;
  c_62 = t;
  t = term_f_27;
  t = q_6(b_62, c_62, t);
  t = term_g_27;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_i_27;
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL;
  d_62 = t;
  t = term_o_21;
  t = get_config_0_0(t);
  e_62 = t;
  t = term_j_8;
  f_62 = t;
  t = (ATerm) ATinsert(ATempty, e_62);
  g_62 = t;
  t = SSL_printnl(f_62, g_62);
  t = d_62;
  return(t);
}
ATerm iowrap_3_0 (ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm z_128 (ATerm), ATerm t)
{
  ATerm i_7 (ATerm t)
  {
    ATerm j_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_128(t);
        ;
        LocalPopChoice(l_27);
      }
    else
      {
        t = j_27;
        {
          ATerm m_27 = t;
          int n_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
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
                    ;
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
                          t = Option_3_0(n_7, o_7, p_7, t);
                          ;
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
                                ;
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
  ATerm m_7 (ATerm t)
  {
    ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL;
    i_62 = t;
    {
      ATerm u_27 = t;
      int v_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((h_62 != NULL) && (h_62 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_7, t);
          ;
          LocalPopChoice(v_27);
        }
      else
        {
          t = u_27;
          t = term_w_27;
          h_62 = t;
        }
      t = not_null(h_62);
      t = ReadFromFile_0_0(t);
      j_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_62, j_62);
      t = apply_strategy_1_0(x_128, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(i_7, z_128, l_7, m_7, t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,j_7 = NULL;
  p_62 = t;
  if(match_cons(t, sym__2))
    {
      m_62 = ATgetArgument(t, 0);
      n_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_62);
  l_62 = t;
  t = n_62;
  t = downup2_2_0(y_7, d_8, t);
  t = downup_1_0(f_8, t);
  o_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_62, o_62);
  j_7 = t;
  t = SSLsetAnnotations(j_7, l_62);
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = repeat_1_0(e_8, t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = repeat_1_0(Canon_0_0, t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Canon_0_0(t);
      ;
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
      {
        ATerm d_28 = t;
        int e_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(e_28);
          }
        else
          {
            t = d_28;
            {
              ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL;
              q_62 = t;
              if(match_cons(t, sym_CallT_3))
                {
                  r_62 = ATgetArgument(t, 0);
                  s_62 = ATgetArgument(t, 1);
                  t_62 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = q_62;
              t = y_5(r_62, s_62, t_62, t);
            }
          }
      }
    }
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(x_7, _fail, default_usage_0_0, t);
  return(t);
}

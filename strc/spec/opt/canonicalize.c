#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_As_2;
Symbol sym_App_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_AM_2;
Symbol sym_Choice_2;
Symbol sym_Thread_1;
Symbol sym_All_1;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
Symbol sym_Prim_2;
Symbol sym_Bagof_1;
Symbol sym_Test_1;
Symbol sym_Where_1;
Symbol sym_Not_1;
Symbol sym_Rec_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_LChoice_2;
Symbol sym_Seq_2;
Symbol sym_BA_2;
Symbol sym_Scope_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_Let_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_SDefT_4;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Some_1;
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
Symbol sym_Hashtable_1;
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
Symbol sym_As_2;
Symbol sym_App_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_AM_2;
Symbol sym_Choice_2;
Symbol sym_Thread_1;
Symbol sym_All_1;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
Symbol sym_Prim_2;
Symbol sym_Bagof_1;
Symbol sym_Test_1;
Symbol sym_Where_1;
Symbol sym_Not_1;
Symbol sym_Rec_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_LChoice_2;
Symbol sym_Seq_2;
Symbol sym_BA_2;
Symbol sym_Scope_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_Let_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_SDefT_4;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Cong_2;
static void init_module_constructors (void)
{
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
}
ATerm term_a_27;
ATerm term_l_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_z_25;
ATerm term_w_25;
ATerm term_o_25;
ATerm term_m_25;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_q_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_b_23;
ATerm term_w_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_q_22;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_p_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_t_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_o_17;
ATerm term_l_17;
ATerm term_h_17;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_q_9;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_CallT_3, term_h_13, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_CallT_3, term_l_13, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_one", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_all", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_bagof", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_15);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym__2, term_x_18, term_y_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym__2, term_x_18, term_f_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_j_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_d_20, term_k_7);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, term_t_21, term_k_7);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__2, term_s_22, term_k_7);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym__2, term_g_23, term_k_7);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym__3, term_n_20, term_o_20, (ATerm) ATempty);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_x_18, term_g_23);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym__2, term_x_18, term_t_21);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__2, term_z_25, term_k_7);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm r_139 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm m_4 (ATerm r_105, ATerm q_105, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm v_140 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm r_138 (ATerm), ATerm s_138 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm t_139 (ATerm), ATerm t);
ATerm CreateDef2_0_0 (ATerm t);
static ATerm n_25 (ATerm w_24, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm j_141 (ATerm), ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm Canon_0_0 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm u_5 (ATerm b_92, ATerm c_92, ATerm d_92, ATerm t);
ATerm genzip_4_0 (ATerm h_148 (ATerm), ATerm i_148 (ATerm), ATerm j_148 (ATerm), ATerm k_148 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm u_146 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm u_43 (ATerm l_43, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm downup2_2_0 (ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm t);
static ATerm z_5 (ATerm i_50, ATerm j_50, ATerm t);
static ATerm a_6 (ATerm w_33, ATerm x_33, ATerm t);
static ATerm c_6 (ATerm u_145 (ATerm), ATerm a_205, ATerm c_34, ATerm t);
static ATerm b_6 (ATerm s_33, ATerm t_33, ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm r_163 (ATerm), ATerm t);
static ATerm f_49 (ATerm z_48, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_6 (ATerm y_33, ATerm t);
static ATerm e_6 (ATerm m_48, ATerm n_48, ATerm t);
static ATerm f_6 (ATerm k_50, ATerm l_50, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm w_50 (ATerm p_49, ATerm t);
static ATerm x_50 (ATerm t_49, ATerm u_49, ATerm v_49, ATerm t);
static ATerm y_50 (ATerm d_50, ATerm e_50, ATerm f_50, ATerm t);
static ATerm g_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm n_146 (ATerm), ATerm t);
static ATerm l_6 (ATerm l_57, ATerm m_57, ATerm t);
ATerm if_verbose2_1_0 (ATerm a_162 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_6 (ATerm j_69, ATerm k_69, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_6 (ATerm s_55, ATerm t_55, ATerm r_55, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_6 (ATerm b_54, ATerm c_54, ATerm t);
ATerm foldr_2_0 (ATerm c_153 (ATerm), ATerm d_153 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm z_161 (ATerm), ATerm t);
static ATerm i_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm p_6 (ATerm k_60, ATerm l_60, ATerm m_60, ATerm t);
static ATerm q_6 (ATerm n_60, ATerm o_60, ATerm t);
ATerm lookup_table_0_1 (ATerm e_57, ATerm t);
ATerm new_hashtable_0_2 (ATerm s_60, ATerm t_60, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm j_6 (ATerm p_60, ATerm q_60, ATerm t);
static ATerm k_6 (ATerm u_60, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm v_116 (ATerm), ATerm w_116 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm x_166 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm parse_options_3_0 (ATerm u_166 (ATerm), ATerm v_166 (ATerm), ATerm w_166 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm x_164 (ATerm), ATerm y_164 (ATerm), ATerm z_164 (ATerm), ATerm a_165 (ATerm), ATerm b_165 (ATerm), ATerm t);
static ATerm t_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm iowrap_3_0 (ATerm a_164 (ATerm), ATerm b_164 (ATerm), ATerm c_164 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL,g_0 = NULL,i_0 = NULL;
  b_0 = t;
  t = term_k_7;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_l_7;
  g_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_7), c_0), term_m_7);
  i_0 = t;
  t = SSL_printnl(g_0, i_0);
  t = term_o_7;
  e_0 = t;
  t = SSL_exit(e_0);
  t = b_0;
  return(t);
}
ATerm topdown_1_0 (ATerm r_139 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(r_139, t);
    return(t);
  }
  t = r_139(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm x_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(q_7);
      {
        ATerm k_0 = NULL,p_0 = NULL;
        k_0 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm y_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        p_0 = t;
        t = SSLgetAnnotations(k_0);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_7 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) z_7) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm a_8 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(a_8) != AT_LIST) || !(ATisEmpty(a_8))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = p_0;
      }
    }
  else
    {
      t = p_7;
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm d_8 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) d_8) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm e_8 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(c_8);
            _fail(t);
          }
        else
          {
            t = b_8;
          }
      }
    }
  return(t);
}
static ATerm m_4 (ATerm r_105, ATerm q_105, ATerm t)
{
  t = r_105;
  t = topdown_1_0(j_0, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, r_105);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,o_1 = NULL,x_1 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_1 = ATgetArgument(t, 0);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_1;
  if(match_cons(t, sym_Match_1))
    {
      c_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_1;
  if(match_cons(t, sym_Var_1))
    {
      d_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_1;
  if(match_cons(t, sym_Seq_2))
    {
      o_1 = ATgetArgument(t, 0);
      z_0 = ATgetArgument(t, 1);
      t = o_1;
      if(match_cons(t, sym_Build_1))
        {
          x_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_1;
      if(match_cons(t, sym_Var_1))
        {
          y_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_0;
      if((d_1 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_1)), z_0);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          o_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_1;
      if(match_cons(t, sym_Var_1))
        {
          x_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_1;
      if((d_1 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_1));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,r_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      r_2 = ATgetArgument(t, 0);
      u_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_2;
  if(match_cons(t, sym_Build_1))
    {
      t_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_2;
  if(match_cons(t, sym_Seq_2))
    {
      v_2 = ATgetArgument(t, 0);
      p_2 = ATgetArgument(t, 1);
      t = v_2;
      if(match_cons(t, sym_Match_1))
        {
          o_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_2;
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
          v_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_2;
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
  ATerm l_3 = NULL,m_3 = NULL,q_3 = NULL,r_3 = NULL,z_3 = NULL,a_4 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      q_3 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_3;
  if(match_cons(t, sym_Match_1))
    {
      r_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_3;
  if(match_cons(t, sym_Seq_2))
    {
      a_4 = ATgetArgument(t, 0);
      m_3 = ATgetArgument(t, 1);
      t = a_4;
      if(match_cons(t, sym_Match_1))
        {
          l_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_3;
      if((r_3 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_3), m_3);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          a_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_4;
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
  ATerm u_4 = NULL,a_5 = NULL,b_5 = NULL,e_5 = NULL,g_5 = NULL,h_5 = NULL,k_5 = NULL,l_5 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      e_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_5;
  if(match_cons(t, sym_Build_1))
    {
      ATerm f_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_5;
  if(match_cons(t, sym_Seq_2))
    {
      h_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
      t = h_5;
      if(match_cons(t, sym_PrimT_3))
        {
          u_4 = ATgetArgument(t, 0);
          a_5 = ATgetArgument(t, 1);
          b_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, u_4, a_5, b_5), k_5);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          h_5 = ATgetArgument(t, 0);
          k_5 = ATgetArgument(t, 1);
          l_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, h_5, k_5, l_5);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm u_6 = NULL,v_6 = NULL,x_6 = NULL,z_6 = NULL,a_7 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      x_6 = ATgetArgument(t, 0);
      z_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6;
  if(match_cons(t, sym_Build_1))
    {
      ATerm i_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_6;
  if(match_cons(t, sym_Seq_2))
    {
      a_7 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
      t = a_7;
      if(match_cons(t, sym_Build_1))
        {
          u_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_6), v_6);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          a_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, a_7);
    }
  return(t);
}
static ATerm n_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_8 = ATgetArgument(t, 0);
      if(((ATgetType(p_8) != AT_LIST) || !(ATisEmpty(p_8))))
        _fail(t);
      {
        ATerm q_8 = ATgetArgument(t, 1);
        if(((ATgetType(q_8) != AT_LIST) || !(ATisEmpty(q_8))))
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
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_8 = ATgetArgument(t, 0);
      if(((ATgetType(t_8) == AT_LIST) && !(ATisEmpty(t_8))))
        {
          f_9 = ATgetFirst((ATermList) t_8);
          g_9 = (ATerm) ATgetNext((ATermList) t_8);
        }
      else
        _fail(t);
      {
        ATerm u_8 = ATgetArgument(t, 1);
        if(((ATgetType(u_8) == AT_LIST) && !(ATisEmpty(u_8))))
          {
            h_9 = ATgetFirst((ATermList) u_8);
            i_9 = (ATerm) ATgetNext((ATermList) u_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_9, h_9), (ATerm) ATmakeAppl(sym__2, g_9, i_9));
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm j_9 = NULL,m_9 = NULL;
  if(match_cons(t, sym__2))
    {
      j_9 = ATgetArgument(t, 0);
      m_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_9), j_9);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL;
  if(match_cons(t, sym__2))
    {
      n_9 = ATgetArgument(t, 0);
      o_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_9), (ATerm) ATmakeAppl(sym_Match_1, o_9));
  return(t);
}
static ATerm u_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_8 = ATgetArgument(t, 0);
      if(((ATgetType(x_8) != AT_LIST) || !(ATisEmpty(x_8))))
        _fail(t);
      {
        ATerm y_8 = ATgetArgument(t, 1);
        if(((ATgetType(y_8) != AT_LIST) || !(ATisEmpty(y_8))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm y_9 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_8 = ATgetArgument(t, 0);
      if(((ATgetType(z_8) == AT_LIST) && !(ATisEmpty(z_8))))
        {
          y_9 = ATgetFirst((ATermList) z_8);
          b_10 = (ATerm) ATgetNext((ATermList) z_8);
        }
      else
        _fail(t);
      {
        ATerm a_9 = ATgetArgument(t, 1);
        if(((ATgetType(a_9) == AT_LIST) && !(ATisEmpty(a_9))))
          {
            c_10 = ATgetFirst((ATermList) a_9);
            d_10 = (ATerm) ATgetNext((ATermList) a_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_9, c_10), (ATerm) ATmakeAppl(sym__2, b_10, d_10));
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_10), e_10);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm g_10 = NULL,j_10 = NULL;
  if(match_cons(t, sym__2))
    {
      g_10 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_10), (ATerm) ATmakeAppl(sym_Match_1, j_10));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,h_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,r_8 = NULL,s_8 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      j_8 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8;
  if(match_cons(t, sym_Build_1))
    {
      k_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_8;
  if(match_cons(t, sym_Op_2))
    {
      l_8 = ATgetArgument(t, 0);
      m_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_8;
  if(match_cons(t, sym_Seq_2))
    {
      o_8 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
      {
        ATerm e_9 = NULL;
        t = o_8;
        if(match_cons(t, sym_Match_1))
          {
            r_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_8;
        if(match_cons(t, sym_Op_2))
          {
            u_7 = ATgetArgument(t, 0);
            v_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_7;
        if((l_8 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, m_8, v_7);
        t = genzip_4_0(n_0, q_0, r_0, s_0, t);
        e_9 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, e_9), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, l_8, m_8)), h_8));
      }
    }
  else
    {
      ATerm u_9 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          o_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_8;
      if(match_cons(t, sym_Op_2))
        {
          r_8 = ATgetArgument(t, 0);
          s_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_8;
      if((l_8 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, m_8, s_8);
      t = genzip_4_0(u_0, v_0, w_0, x_0, t);
      u_9 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_9), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, l_8, m_8)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm r_11 = NULL,v_11 = NULL,x_11 = NULL,y_11 = NULL,a_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
  v_11 = t;
  if(match_cons(t, sym_Seq_2))
    {
      x_11 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11;
  if(match_cons(t, sym_Build_1))
    {
      y_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_11;
  if(match_cons(t, sym_Op_2))
    {
      a_12 = ATgetArgument(t, 0);
      {
        ATerm b_9 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = e_12;
  {
    ATerm c_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            f_12 = ATgetArgument(t, 0);
            {
              ATerm k_9 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_9);
        t = f_12;
        if(match_cons(t, sym_Match_1))
          {
            g_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_12;
        if(match_cons(t, sym_Op_2))
          {
            r_11 = ATgetArgument(t, 0);
            {
              ATerm l_9 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_12, r_11);
        {
          ATerm p_9 = t;
          if((PushChoice() == 0))
            {
              ATerm t_0 = NULL;
              if(match_cons(t, sym__2))
                {
                  t_0 = ATgetArgument(t, 0);
                  if((t_0 != ATgetArgument(t, 1)))
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
              t = p_9;
            }
        }
        t = term_q_9;
      }
    else
      {
        t = c_9;
        if(match_cons(t, sym_Match_1))
          {
            f_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_12;
        if(match_cons(t, sym_Op_2))
          {
            g_12 = ATgetArgument(t, 0);
            {
              ATerm r_9 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_12, g_12);
        {
          ATerm s_9 = t;
          if((PushChoice() == 0))
            {
              ATerm j_1 = NULL;
              if(match_cons(t, sym__2))
                {
                  j_1 = ATgetArgument(t, 0);
                  if((j_1 != ATgetArgument(t, 1)))
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
              t = s_9;
            }
        }
        t = term_q_9;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm v_140 (ATerm), ATerm t)
{
  static ATerm p_12 (ATerm t);
  static ATerm p_12 (ATerm t)
  {
    ATerm t_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_140(t);
        LocalPopChoice(v_9);
      }
    else
      {
        t = t_9;
        t = SRTS_one(p_12, t);
      }
    return(t);
  }
  t = p_12(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm v_13 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,s_14 = NULL,t_14 = NULL;
  v_13 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_14 = ATgetArgument(t, 0);
      l_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_14;
  if(match_cons(t, sym_Let_2))
    {
      m_14 = ATgetArgument(t, 0);
      s_14 = ATgetArgument(t, 1);
      {
        ATerm x_14 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, c_14, m_14);
        t = conc_0_0(t);
        x_14 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, x_14, s_14);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          m_14 = ATgetArgument(t, 0);
          s_14 = ATgetArgument(t, 1);
          t_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_14;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_14 = ATgetFirst((ATermList) t);
          k_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_14;
      if(match_cons(t, sym_SDefT_4))
        {
          e_14 = ATgetArgument(t, 0);
          f_14 = ATgetArgument(t, 1);
          g_14 = ATgetArgument(t, 2);
          h_14 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = f_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_14;
      if(match_cons(t, sym_SVar_1))
        {
          n_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_14;
      if((e_14 != t))
        {
          _fail(t);
        }
      t = h_14;
      {
        ATerm x_9 = t;
        if((PushChoice() == 0))
          {
            static ATerm a_1 (ATerm t);
            static ATerm a_1 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm z_9 = ATgetArgument(t, 0);
                  if(match_cons(z_9, sym_SVar_1))
                    {
                      if((e_14 != ATgetArgument(z_9, 0)))
                        {
                          _fail(ATgetArgument(z_9, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm h_10 = ATgetArgument(t, 1);
                    if(((ATgetType(h_10) != AT_LIST) || !(ATisEmpty(h_10))))
                      _fail(t);
                  }
                  {
                    ATerm i_10 = ATgetArgument(t, 2);
                    if(((ATgetType(i_10) != AT_LIST) || !(ATisEmpty(i_10))))
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
            t = x_9;
          }
      }
      t = h_14;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm i_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,r_15 = NULL,u_15 = NULL,w_15 = NULL,x_15 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      w_15 = ATgetArgument(t, 0);
      t = w_15;
      if(match_cons(t, sym_Seq_2))
        {
          u_15 = ATgetArgument(t, 0);
          l_15 = ATgetArgument(t, 1);
          t = u_15;
          if(match_cons(t, sym_Where_1))
            {
              i_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_15;
          if(match_cons(t, sym_Seq_2))
            {
              m_15 = ATgetArgument(t, 0);
              r_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_15;
          if(match_cons(t, sym_Build_1))
            {
              n_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, i_15, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_15), r_15)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              u_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, u_15);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          w_15 = ATgetArgument(t, 0);
          t = w_15;
          if(match_cons(t, sym_Test_1))
            {
              u_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, u_15);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              w_15 = ATgetArgument(t, 0);
              t = w_15;
              if(match_cons(t, sym_Not_1))
                {
                  u_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, u_15);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  w_15 = ATgetArgument(t, 0);
                  x_15 = ATgetArgument(t, 1);
                  t = x_15;
                  if((w_15 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      w_15 = ATgetArgument(t, 0);
                      x_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = x_15;
                  if((w_15 != t))
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
  ATerm r_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      r_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
      t = r_16;
      if(match_cons(t, sym_LChoice_2))
        {
          v_16 = ATgetArgument(t, 0);
          w_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, v_16, (ATerm) ATmakeAppl(sym_LChoice_2, w_16, x_16));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          r_16 = ATgetArgument(t, 0);
          x_16 = ATgetArgument(t, 1);
          t = r_16;
          if(match_cons(t, sym_Seq_2))
            {
              v_16 = ATgetArgument(t, 0);
              w_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, v_16, (ATerm) ATmakeAppl(sym_Seq_2, w_16, x_16));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              r_16 = ATgetArgument(t, 0);
              x_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_16;
          if(match_cons(t, sym_Choice_2))
            {
              v_16 = ATgetArgument(t, 0);
              w_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, v_16, (ATerm) ATmakeAppl(sym_Choice_2, w_16, x_16));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm u_17 = NULL,a_18 = NULL,b_18 = NULL,d_18 = NULL,i_18 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      d_18 = ATgetArgument(t, 0);
      i_18 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, d_18, i_18);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          d_18 = ATgetArgument(t, 0);
          t = d_18;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_17 = ATgetFirst((ATermList) t);
              a_18 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, u_17, (ATerm) ATmakeAppl(sym_LChoices_1, a_18));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_q_9;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              d_18 = ATgetArgument(t, 0);
              t = d_18;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_17 = ATgetFirst((ATermList) t);
                  a_18 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, u_17, (ATerm) ATmakeAppl(sym_Choices_1, a_18));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_q_9;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  d_18 = ATgetArgument(t, 0);
                  t = d_18;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      u_17 = ATgetFirst((ATermList) t);
                      a_18 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_17, (ATerm) ATmakeAppl(sym_Seqs_1, a_18));
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
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      d_18 = ATgetArgument(t, 0);
                      i_18 = ATgetArgument(t, 1);
                      b_18 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, i_18, (ATerm) ATmakeAppl(sym_Op_2, term_l_10, (ATerm) ATinsert(ATinsert(ATempty, b_18), d_18)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          d_18 = ATgetArgument(t, 0);
                          i_18 = ATgetArgument(t, 1);
                          b_18 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, b_18)), d_18), (ATerm) ATmakeAppl(sym_Build_1, i_18)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              d_18 = ATgetArgument(t, 0);
                              i_18 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_18, (ATerm) ATmakeAppl(sym_Match_1, i_18));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  d_18 = ATgetArgument(t, 0);
                                  i_18 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_18), i_18);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      d_18 = ATgetArgument(t, 0);
                                      i_18 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_18), d_18);
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
static ATerm f_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      q_20 = ATgetArgument(t, 0);
      t = q_20;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_q_9;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          q_20 = ATgetArgument(t, 0);
          t = q_20;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_k_10;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              q_20 = ATgetArgument(t, 0);
              r_20 = ATgetArgument(t, 1);
              t = q_20;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_q_9;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  q_20 = ATgetArgument(t, 0);
                  r_20 = ATgetArgument(t, 1);
                  t = r_20;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_q_9;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      q_20 = ATgetArgument(t, 0);
                      r_20 = ATgetArgument(t, 1);
                      t = r_20;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_q_9;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          q_20 = ATgetArgument(t, 0);
                          t = q_20;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_q_9;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              q_20 = ATgetArgument(t, 0);
                              t = q_20;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_q_9;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  q_20 = ATgetArgument(t, 0);
                                  r_20 = ATgetArgument(t, 1);
                                  t = r_20;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_q_9;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      q_20 = ATgetArgument(t, 0);
                                      r_20 = ATgetArgument(t, 1);
                                      t = r_20;
                                      t = fetch_1_0(f_1, t);
                                      t = term_q_9;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          q_20 = ATgetArgument(t, 0);
                                          r_20 = ATgetArgument(t, 1);
                                          t = r_20;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = q_20;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = r_20;
                                                }
                                              else
                                                {
                                                  t = q_20;
                                                }
                                            }
                                          else
                                            {
                                              t = q_20;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = r_20;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              q_20 = ATgetArgument(t, 0);
                                              r_20 = ATgetArgument(t, 1);
                                              t = r_20;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = q_20;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = r_20;
                                                    }
                                                  else
                                                    {
                                                      t = q_20;
                                                    }
                                                }
                                              else
                                                {
                                                  t = q_20;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = r_20;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  q_20 = ATgetArgument(t, 0);
                                                  t = q_20;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_q_9;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      q_20 = ATgetArgument(t, 0);
                                                      r_20 = ATgetArgument(t, 1);
                                                      s_20 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = s_20;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_20, r_20);
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
  ATerm p_22 = NULL,v_22 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      v_22 = ATgetArgument(t, 0);
      t = v_22;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_k_10;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          v_22 = ATgetArgument(t, 0);
          t = v_22;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_q_9;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              v_22 = ATgetArgument(t, 0);
              p_22 = ATgetArgument(t, 1);
              t = p_22;
              if(match_cons(t, sym_Id_0))
                {
                  t = v_22;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = p_22;
                    }
                  else
                    {
                      t = v_22;
                    }
                }
              else
                {
                  t = v_22;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = p_22;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  v_22 = ATgetArgument(t, 0);
                  p_22 = ATgetArgument(t, 1);
                  t = v_22;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_k_10;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      v_22 = ATgetArgument(t, 0);
                      p_22 = ATgetArgument(t, 1);
                      t = p_22;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_k_10;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          v_22 = ATgetArgument(t, 0);
                          p_22 = ATgetArgument(t, 1);
                          t = p_22;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_k_10;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              v_22 = ATgetArgument(t, 0);
                              t = v_22;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_k_10;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  v_22 = ATgetArgument(t, 0);
                                  t = v_22;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_k_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      v_22 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = v_22;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_k_10;
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
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            {
              ATerm q_10 = t;
              int r_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(r_10);
                }
              else
                {
                  t = q_10;
                  {
                    ATerm s_10 = t;
                    int z_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(z_10);
                      }
                    else
                      {
                        t = s_10;
                        {
                          ATerm b_11 = t;
                          int c_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
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
                                    ATerm r_23 = NULL,s_23 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        r_23 = ATgetArgument(t, 0);
                                        s_23 = ATgetArgument(t, 1);
                                        t = r_23;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = s_23;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            r_23 = ATgetArgument(t, 0);
                                            s_23 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = r_23;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = s_23;
                                      }
                                    LocalPopChoice(f_11);
                                  }
                                else
                                  {
                                    t = e_11;
                                    {
                                      ATerm h_11 = t;
                                      int i_11 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(i_11);
                                        }
                                      else
                                        {
                                          t = h_11;
                                          {
                                            ATerm k_11 = t;
                                            int l_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(l_11);
                                              }
                                            else
                                              {
                                                t = k_11;
                                                {
                                                  ATerm m_11 = t;
                                                  int n_11 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(n_11);
                                                    }
                                                  else
                                                    {
                                                      t = m_11;
                                                      {
                                                        ATerm o_11 = t;
                                                        int p_11 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(p_11);
                                                          }
                                                        else
                                                          {
                                                            t = o_11;
                                                            {
                                                              ATerm q_11 = t;
                                                              int s_11 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(s_11);
                                                                }
                                                              else
                                                                {
                                                                  t = q_11;
                                                                  {
                                                                    ATerm u_11 = t;
                                                                    int b_12 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(b_12);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = u_11;
                                                                        {
                                                                          ATerm h_12 = t;
                                                                          int j_12 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(j_12);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_12;
                                                                              {
                                                                                ATerm k_12 = t;
                                                                                int n_12 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(n_12);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = k_12;
                                                                                    {
                                                                                      ATerm x_23 = NULL,a_24 = NULL,b_24 = NULL,i_24 = NULL;
                                                                                      a_24 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          b_24 = ATgetArgument(t, 0);
                                                                                          i_24 = ATgetArgument(t, 1);
                                                                                          t = b_24;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              x_23 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = a_24;
                                                                                          t = m_4(x_23, i_24, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              b_24 = ATgetArgument(t, 0);
                                                                                              i_24 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = b_24;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = i_24;
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
ATerm repeat_2_0 (ATerm r_138 (ATerm), ATerm s_138 (ATerm), ATerm t)
{
  static ATerm r_24 (ATerm t);
  static ATerm r_24 (ATerm t)
  {
    ATerm o_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_138(t);
        t = r_24(t);
        LocalPopChoice(x_12);
      }
    else
      {
        t = o_12;
        t = s_138(t);
      }
    return(t);
  }
  t = r_24(t);
  return(t);
}
ATerm downup_1_0 (ATerm t_139 (ATerm), ATerm t)
{
  t = t_139(t);
  {
    static ATerm g_1 (ATerm t);
    static ATerm g_1 (ATerm t)
    {
      t = downup_1_0(t_139, t);
      return(t);
    }
    t = SRTS_all(g_1, t);
  }
  t = t_139(t);
  return(t);
}
ATerm CreateDef2_0_0 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL;
  s_24 = t;
  t = new_0_0(t);
  t_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, t_24), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, t_24, (ATerm)ATempty, (ATerm)ATempty, s_24)));
  return(t);
}
static ATerm n_25 (ATerm w_24, ATerm t)
{
  ATerm x_24 = NULL;
  t = SSL_explode_term(w_24);
  if(match_cons(t, sym__2))
    {
      ATerm y_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_24;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,h_25 = NULL;
  h_25 = t;
  if(match_cons(t, sym__2))
    {
      z_24 = ATgetArgument(t, 0);
      a_25 = ATgetArgument(t, 1);
      {
        ATerm z_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm h_1 (ATerm t);
            static ATerm h_1 (ATerm t)
            {
              t = a_25;
              return(t);
            }
            t = z_24;
            t = at_end_1_0(h_1, t);
            LocalPopChoice(a_13);
          }
        else
          {
            t = z_12;
            t = n_25(h_25, t);
          }
      }
    }
  else
    {
      t = n_25(h_25, t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm j_141 (ATerm), ATerm t)
{
  static ATerm t_25 (ATerm t);
  static ATerm t_25 (ATerm t)
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_141(t);
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
        t = SRTS_all(t_25, t);
      }
    return(t);
  }
  t = t_25(t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_13;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_10 = ATgetFirst((ATermList) t);
      x_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_10, x_10);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm y_10 = NULL,a_11 = NULL,d_11 = NULL,g_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      if(match_cons(e_13, sym__2))
        {
          y_10 = ATgetArgument(e_13, 0);
          a_11 = ATgetArgument(e_13, 1);
        }
      else
        _fail(t);
      {
        ATerm f_13 = ATgetArgument(t, 1);
        if(match_cons(f_13, sym__2))
          {
            d_11 = ATgetArgument(f_13, 0);
            g_11 = ATgetArgument(f_13, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_11), y_10), (ATerm) ATinsert(CheckATermList(g_11), a_11));
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm j_11 = NULL;
  j_11 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = term_i_13;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = term_m_13;
        }
      else
        {
          t = j_11;
        }
    }
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_11 = NULL,w_11 = NULL,z_11 = NULL,c_12 = NULL,d_12 = NULL,i_12 = NULL;
        if(match_cons(t, sym_Let_2))
          {
            t_11 = ATgetArgument(t, 0);
            w_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_11;
        if(match_cons(t, sym_CallT_3))
          {
            z_11 = ATgetArgument(t, 0);
            d_12 = ATgetArgument(t, 1);
            i_12 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = z_11;
        if(match_cons(t, sym_SVar_1))
          {
            c_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_12), (ATerm)ATempty, (ATerm) ATempty), t_11);
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        {
          ATerm p_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_13 = t;
              if((PushChoice() == 0))
                {
                  ATerm l_12 = NULL,m_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,c_2 = NULL,b_2 = NULL;
                  v_12 = t;
                  if(match_cons(t, sym_CallT_3))
                    {
                      m_12 = ATgetArgument(t, 0);
                      q_12 = ATgetArgument(t, 1);
                      r_12 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_12);
                  l_12 = t;
                  t = m_12;
                  if(match_cons(t, sym_SVar_1))
                    {
                      t_12 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_12);
                  s_12 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, t_12);
                  b_2 = t;
                  t = SSLsetAnnotations(b_2, s_12);
                  u_12 = t;
                  t = q_12;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = r_12;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_CallT_3, u_12, q_12, r_12);
                  c_2 = t;
                  t = SSLsetAnnotations(c_2, l_12);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = r_13;
                }
              t = CreateDef2_0_0(t);
              LocalPopChoice(q_13);
            }
          else
            {
              t = p_13;
              {
                ATerm w_12 = NULL;
                w_12 = t;
                t = (ATerm) ATmakeAppl(sym__2, w_12, (ATerm) ATempty);
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
  t = term_d_13;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_18 = ATgetFirst((ATermList) t);
      h_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_18, h_18);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,u_18 = NULL,v_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_13 = ATgetArgument(t, 0);
      if(match_cons(s_13, sym__2))
        {
          q_18 = ATgetArgument(s_13, 0);
          r_18 = ATgetArgument(s_13, 1);
        }
      else
        _fail(t);
      {
        ATerm t_13 = ATgetArgument(t, 1);
        if(match_cons(t_13, sym__2))
          {
            u_18 = ATgetArgument(t_13, 0);
            v_18 = ATgetArgument(t_13, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_18), q_18), (ATerm) ATinsert(CheckATermList(v_18), r_18));
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm w_18 = NULL;
  w_18 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = term_i_13;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = term_m_13;
        }
      else
        {
          t = w_18;
        }
    }
  {
    ATerm u_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
        if(match_cons(t, sym_Let_2))
          {
            k_19 = ATgetArgument(t, 0);
            l_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_19;
        if(match_cons(t, sym_CallT_3))
          {
            m_19 = ATgetArgument(t, 0);
            o_19 = ATgetArgument(t, 1);
            p_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = m_19;
        if(match_cons(t, sym_SVar_1))
          {
            n_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = o_19;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_19;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_19), (ATerm)ATempty, (ATerm) ATempty), k_19);
        LocalPopChoice(w_13);
      }
    else
      {
        t = u_13;
        {
          ATerm x_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_13 = t;
              if((PushChoice() == 0))
                {
                  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,j_2 = NULL,i_2 = NULL;
                  z_19 = t;
                  if(match_cons(t, sym_CallT_3))
                    {
                      t_19 = ATgetArgument(t, 0);
                      u_19 = ATgetArgument(t, 1);
                      v_19 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_19);
                  s_19 = t;
                  t = t_19;
                  if(match_cons(t, sym_SVar_1))
                    {
                      x_19 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_19);
                  w_19 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, x_19);
                  i_2 = t;
                  t = SSLsetAnnotations(i_2, w_19);
                  y_19 = t;
                  t = u_19;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_19;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_CallT_3, y_19, u_19, v_19);
                  j_2 = t;
                  t = SSLsetAnnotations(j_2, s_19);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = z_13;
                }
              t = CreateDef2_0_0(t);
              LocalPopChoice(y_13);
            }
          else
            {
              t = x_13;
              {
                ATerm a_20 = NULL;
                a_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_20, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
ATerm Canon_0_0 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL;
  w_38 = t;
  if(match_cons(t, sym_Rec_2))
    {
      x_38 = ATgetArgument(t, 0);
      y_38 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, x_38, (ATerm)ATempty, (ATerm)ATempty, y_38)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_38), (ATerm)ATempty, (ATerm) ATempty));
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          x_38 = ATgetArgument(t, 0);
          y_38 = ATgetArgument(t, 1);
          z_38 = ATgetArgument(t, 2);
          p_38 = ATgetArgument(t, 3);
          {
            ATerm f_39 = NULL;
            t = y_38;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = z_38;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = p_38;
            if(match_cons(t, sym_Rec_2))
              {
                q_38 = ATgetArgument(t, 0);
                r_38 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_38;
            {
              static ATerm i_1 (ATerm t);
              static ATerm i_1 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm a_14 = ATgetArgument(t, 0);
                    if(match_cons(a_14, sym_SVar_1))
                      {
                        if((q_38 != ATgetArgument(a_14, 0)))
                          {
                            _fail(ATgetArgument(a_14, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm b_14 = ATgetArgument(t, 1);
                      if(((ATgetType(b_14) != AT_LIST) || !(ATisEmpty(b_14))))
                        _fail(t);
                    }
                    {
                      ATerm i_14 = ATgetArgument(t, 2);
                      if(((ATgetType(i_14) != AT_LIST) || !(ATisEmpty(i_14))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_38), (ATerm)ATempty, (ATerm) ATempty);
                return(t);
              }
              t = alltd_1_0(i_1, t);
            }
            f_39 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, x_38, (ATerm)ATempty, (ATerm)ATempty, f_39);
          }
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              x_38 = ATgetArgument(t, 0);
              y_38 = ATgetArgument(t, 1);
              t = y_38;
              if(match_cons(t, sym_Seq_2))
                {
                  u_38 = ATgetArgument(t, 0);
                  v_38 = ATgetArgument(t, 1);
                  t = x_38;
                  if(match_cons(t, sym_Where_1))
                    {
                      t_38 = ATgetArgument(t, 0);
                      t = u_38;
                      if(match_cons(t, sym_Build_1))
                        {
                          s_38 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_38, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_38), v_38));
                    }
                  else
                    {
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = y_38;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Build_1))
                    {
                      u_38 = ATgetArgument(t, 0);
                      t = x_38;
                      if(match_cons(t, sym_Where_1))
                        {
                          t_38 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_38, (ATerm) ATmakeAppl(sym_Build_1, u_38));
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = y_38;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Id_0))
                        {
                          t = x_38;
                          if(match_cons(t, sym_Id_0))
                            {
                              t = x_38;
                            }
                          else
                            {
                              t = x_38;
                            }
                        }
                      else
                        {
                          t = x_38;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = y_38;
                        }
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  x_38 = ATgetArgument(t, 0);
                  y_38 = ATgetArgument(t, 1);
                  t = y_38;
                  if(match_cons(t, sym_Scope_2))
                    {
                      u_38 = ATgetArgument(t, 0);
                      v_38 = ATgetArgument(t, 1);
                      t = x_38;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          ATerm j_14 = t;
                          int o_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_40 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, x_38, u_38);
                              t = conc_0_0(t);
                              f_40 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_40, v_38);
                              LocalPopChoice(o_14);
                            }
                          else
                            {
                              t = j_14;
                              t = y_38;
                            }
                        }
                      else
                        {
                          ATerm k_40 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, x_38, u_38);
                          t = conc_0_0(t);
                          k_40 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, k_40, v_38);
                        }
                    }
                  else
                    {
                      t = x_38;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = y_38;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Thread_1))
                    {
                      x_38 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_q_14, (ATerm)ATinsert(ATempty, x_38), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          x_38 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, term_u_14, (ATerm)ATinsert(ATempty, x_38), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              x_38 = ATgetArgument(t, 0);
                              t = (ATerm) ATmakeAppl(sym_CallT_3, term_w_14, (ATerm)ATinsert(ATempty, x_38), (ATerm) ATempty);
                            }
                          else
                            {
                              if(match_cons(t, sym_All_1))
                                {
                                  x_38 = ATgetArgument(t, 0);
                                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_z_14, (ATerm)ATinsert(ATempty, x_38), (ATerm) ATempty);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Bagof_1))
                                    {
                                      x_38 = ATgetArgument(t, 0);
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_b_15, (ATerm)ATinsert(ATempty, x_38), (ATerm) ATempty);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_PrimT_3))
                                        {
                                          x_38 = ATgetArgument(t, 0);
                                          y_38 = ATgetArgument(t, 1);
                                          z_38 = ATgetArgument(t, 2);
                                          {
                                            ATerm g_15 = t;
                                            int h_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm o_5 = NULL;
                                                t = y_38;
                                                {
                                                  static ATerm w_7 (ATerm t);
                                                  static ATerm w_7 (ATerm t)
                                                  {
                                                    ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
                                                    r_7 = t;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        s_7 = ATgetFirst((ATermList) t);
                                                        t_7 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm j_15 = t;
                                                      int k_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm g_8 = NULL,v_8 = NULL,w_8 = NULL,z_1 = NULL;
                                                          t = SSLgetAnnotations(r_7);
                                                          g_8 = t;
                                                          t = s_7;
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_i_13;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_Fail_0)))
                                                                _fail(t);
                                                              t = term_m_13;
                                                            }
                                                          v_8 = t;
                                                          t = t_7;
                                                          {
                                                            ATerm o_15 = t;
                                                            int p_15 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = w_7(t);
                                                                LocalPopChoice(p_15);
                                                              }
                                                            else
                                                              {
                                                                t = o_15;
                                                              }
                                                          }
                                                          w_8 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(w_8), v_8);
                                                          z_1 = t;
                                                          t = SSLsetAnnotations(z_1, g_8);
                                                          LocalPopChoice(k_15);
                                                        }
                                                      else
                                                        {
                                                          t = j_15;
                                                          {
                                                            ATerm w_9 = NULL,a_10 = NULL,a_2 = NULL;
                                                            t = SSLgetAnnotations(r_7);
                                                            w_9 = t;
                                                            t = t_7;
                                                            t = w_7(t);
                                                            a_10 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(a_10), s_7);
                                                            a_2 = t;
                                                            t = SSLsetAnnotations(a_2, w_9);
                                                          }
                                                        }
                                                    }
                                                    return(t);
                                                  }
                                                  t = w_7(t);
                                                }
                                                o_5 = t;
                                                t = (ATerm) ATmakeAppl(sym_PrimT_3, x_38, o_5, z_38);
                                                LocalPopChoice(h_15);
                                              }
                                            else
                                              {
                                                t = g_15;
                                                {
                                                  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
                                                  t = y_38;
                                                  t = genzip_4_0(k_1, l_1, m_1, n_1, t);
                                                  if(match_cons(t, sym__2))
                                                    {
                                                      t_10 = ATgetArgument(t, 0);
                                                      u_10 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = u_10;
                                                  t = concat_0_0(t);
                                                  v_10 = t;
                                                  {
                                                    ATerm q_15 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                          _fail(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = q_15;
                                                      }
                                                  }
                                                  t = (ATerm) ATmakeAppl(sym_Let_2, v_10, (ATerm) ATmakeAppl(sym_PrimT_3, x_38, t_10, z_38));
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              x_38 = ATgetArgument(t, 0);
                                              y_38 = ATgetArgument(t, 1);
                                              z_38 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          {
                                            ATerm s_15 = t;
                                            int t_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm k_13 = NULL;
                                                t = y_38;
                                                {
                                                  static ATerm f_15 (ATerm t);
                                                  static ATerm f_15 (ATerm t)
                                                  {
                                                    ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
                                                    c_15 = t;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        d_15 = ATgetFirst((ATermList) t);
                                                        e_15 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm v_15 = t;
                                                      int z_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm y_15 = NULL,b_16 = NULL,k_16 = NULL,d_2 = NULL;
                                                          t = SSLgetAnnotations(c_15);
                                                          y_15 = t;
                                                          t = d_15;
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_i_13;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_Fail_0)))
                                                                _fail(t);
                                                              t = term_m_13;
                                                            }
                                                          b_16 = t;
                                                          t = e_15;
                                                          {
                                                            ATerm a_16 = t;
                                                            int c_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = f_15(t);
                                                                LocalPopChoice(c_16);
                                                              }
                                                            else
                                                              {
                                                                t = a_16;
                                                              }
                                                          }
                                                          k_16 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(k_16), b_16);
                                                          d_2 = t;
                                                          t = SSLsetAnnotations(d_2, y_15);
                                                          LocalPopChoice(z_15);
                                                        }
                                                      else
                                                        {
                                                          t = v_15;
                                                          {
                                                            ATerm c_17 = NULL,j_17 = NULL,f_2 = NULL;
                                                            t = SSLgetAnnotations(c_15);
                                                            c_17 = t;
                                                            t = e_15;
                                                            t = f_15(t);
                                                            j_17 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(j_17), d_15);
                                                            f_2 = t;
                                                            t = SSLsetAnnotations(f_2, c_17);
                                                          }
                                                        }
                                                    }
                                                    return(t);
                                                  }
                                                  t = f_15(t);
                                                }
                                                k_13 = t;
                                                t = (ATerm) ATmakeAppl(sym_CallT_3, x_38, k_13, z_38);
                                                LocalPopChoice(t_15);
                                              }
                                            else
                                              {
                                                t = s_15;
                                                {
                                                  ATerm z_17 = NULL,e_18 = NULL,f_18 = NULL;
                                                  t = y_38;
                                                  t = genzip_4_0(p_1, q_1, r_1, s_1, t);
                                                  if(match_cons(t, sym__2))
                                                    {
                                                      z_17 = ATgetArgument(t, 0);
                                                      e_18 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = e_18;
                                                  t = concat_0_0(t);
                                                  f_18 = t;
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
                                                  t = (ATerm) ATmakeAppl(sym_Let_2, f_18, (ATerm) ATmakeAppl(sym_CallT_3, x_38, z_17, z_38));
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
static ATerm t_1 (ATerm t)
{
  ATerm e_16 = t;
  if((PushChoice() == 0))
    {
      ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,c_3 = NULL;
      s_41 = t;
      if(match_cons(t, sym_Var_1))
        {
          r_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_41);
      q_41 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, r_41);
      c_3 = t;
      t = SSLsetAnnotations(c_3, q_41);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_16;
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_13;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_41 = ATgetFirst((ATermList) t);
      u_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_41, u_41);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_16 = ATgetArgument(t, 0);
      if(match_cons(f_16, sym__2))
        {
          v_41 = ATgetArgument(f_16, 0);
          w_41 = ATgetArgument(f_16, 1);
        }
      else
        _fail(t);
      {
        ATerm g_16 = ATgetArgument(t, 1);
        if(match_cons(g_16, sym__2))
          {
            x_41 = ATgetArgument(g_16, 0);
            y_41 = ATgetArgument(g_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_41), v_41), (ATerm) ATinsert(CheckATermList(y_41), w_41));
  return(t);
}
static ATerm y_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_13;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_41 = ATgetFirst((ATermList) t);
      a_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_41, a_42);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_16 = ATgetArgument(t, 0);
      if(match_cons(h_16, sym__2))
        {
          b_42 = ATgetArgument(h_16, 0);
          c_42 = ATgetArgument(h_16, 1);
        }
      else
        _fail(t);
      {
        ATerm i_16 = ATgetArgument(t, 1);
        if(match_cons(i_16, sym__2))
          {
            d_42 = ATgetArgument(i_16, 0);
            e_42 = ATgetArgument(i_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_42), b_42), (ATerm) ATinsert(CheckATermList(e_42), c_42));
  return(t);
}
static ATerm u_5 (ATerm b_92, ATerm c_92, ATerm d_92, ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,d_3 = NULL;
  t = d_92;
  t = fetch_1_0(t_1, t);
  t = d_92;
  t = genzip_4_0(u_1, v_1, w_1, LiftPrimArg_0_0, t);
  p_41 = t;
  if(match_cons(t, sym__2))
    {
      l_41 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_41);
  k_41 = t;
  t = l_41;
  t = concat_0_0(t);
  n_41 = t;
  t = m_41;
  t = genzip_4_0(y_1, e_2, g_2, _id, t);
  o_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_41, o_41);
  d_3 = t;
  t = SSLsetAnnotations(d_3, k_41);
  if(match_cons(t, sym__2))
    {
      h_41 = ATgetArgument(t, 0);
      {
        ATerm j_16 = ATgetArgument(t, 1);
        if(match_cons(j_16, sym__2))
          {
            i_41 = ATgetArgument(j_16, 0);
            j_41 = ATgetArgument(j_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, h_41, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_41), (ATerm) ATmakeAppl(sym_CallT_3, b_92, c_92, j_41)));
  return(t);
}
ATerm genzip_4_0 (ATerm h_148 (ATerm), ATerm i_148 (ATerm), ATerm j_148 (ATerm), ATerm k_148 (ATerm), ATerm t)
{
  static ATerm m_42 (ATerm t);
  static ATerm m_42 (ATerm t)
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_148(t);
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
        {
          ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,g_3 = NULL;
          t = i_148(t);
          l_42 = t;
          if(match_cons(t, sym__2))
            {
              h_42 = ATgetArgument(t, 0);
              i_42 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_42);
          g_42 = t;
          t = h_42;
          t = k_148(t);
          j_42 = t;
          t = i_42;
          t = m_42(t);
          k_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_42, k_42);
          g_3 = t;
          t = SSLsetAnnotations(g_3, g_42);
          t = j_148(t);
        }
      }
    return(t);
  }
  t = m_42(t);
  return(t);
}
ATerm at_end_1_0 (ATerm u_146 (ATerm), ATerm t)
{
  static ATerm a_43 (ATerm t);
  static ATerm a_43 (ATerm t)
  {
    ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
    z_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_42 = ATgetFirst((ATermList) t);
        y_42 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_20 = NULL,m_20 = NULL,i_3 = NULL;
          t = SSLgetAnnotations(z_42);
          j_20 = t;
          t = y_42;
          t = a_43(t);
          m_20 = t;
          t = (ATerm) ATinsert(CheckATermList(m_20), x_42);
          i_3 = t;
          t = SSLsetAnnotations(i_3, j_20);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_42;
        t = u_146(t);
      }
    return(t);
  }
  t = a_43(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL;
  d_43 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_43;
    }
  else
    {
      static ATerm h_2 (ATerm t);
      static ATerm h_2 (ATerm t)
      {
        t = not_null(f_43);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_43 = ATgetFirst((ATermList) t);
          if(((f_43 != NULL) && (f_43 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_43;
      t = at_end_1_0(h_2, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm u_43 (ATerm l_43, ATerm t)
{
  ATerm n_43 = NULL;
  t = l_43;
  {
    ATerm n_16 = t;
    if((PushChoice() == 0))
      {
        ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL,k_3 = NULL;
        q_43 = t;
        if(match_cons(t, sym_Var_1))
          {
            p_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_43);
        o_43 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, p_43);
        k_3 = t;
        t = SSLsetAnnotations(k_3, o_43);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_16;
      }
  }
  t = new_0_0(t);
  n_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, n_43), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_43), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_43)))), (ATerm) ATmakeAppl(sym_Var_1, n_43)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL;
  r_43 = t;
  if(match_cons(t, sym_Var_1))
    {
      s_43 = ATgetArgument(t, 0);
      {
        ATerm o_16 = t;
        int p_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_43(r_43, t);
            LocalPopChoice(p_16);
          }
        else
          {
            t = o_16;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_k_10, (ATerm) ATmakeAppl(sym_Var_1, s_43)));
          }
      }
    }
  else
    {
      t = u_43(r_43, t);
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm q_16 = t;
  if((PushChoice() == 0))
    {
      ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL,p_3 = NULL;
      d_22 = t;
      if(match_cons(t, sym_Var_1))
        {
          c_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_22);
      b_22 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, c_22);
      p_3 = t;
      t = SSLsetAnnotations(p_3, b_22);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_16;
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_13;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_22 = ATgetFirst((ATermList) t);
      f_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_22, f_22);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_16 = ATgetArgument(t, 0);
      if(match_cons(s_16, sym__2))
        {
          g_22 = ATgetArgument(s_16, 0);
          h_22 = ATgetArgument(s_16, 1);
        }
      else
        _fail(t);
      {
        ATerm t_16 = ATgetArgument(t, 1);
        if(match_cons(t_16, sym__2))
          {
            i_22 = ATgetArgument(t_16, 0);
            j_22 = ATgetArgument(t_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_22), g_22), (ATerm) ATinsert(CheckATermList(j_22), h_22));
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_13;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_22 = ATgetFirst((ATermList) t);
      l_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_22, l_22);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,r_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      if(match_cons(u_16, sym__2))
        {
          m_22 = ATgetArgument(u_16, 0);
          n_22 = ATgetArgument(u_16, 1);
        }
      else
        _fail(t);
      {
        ATerm y_16 = ATgetArgument(t, 1);
        if(match_cons(y_16, sym__2))
          {
            o_22 = ATgetArgument(y_16, 0);
            r_22 = ATgetArgument(y_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_22), m_22), (ATerm) ATinsert(CheckATermList(r_22), n_22));
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm z_16 = t;
  if((PushChoice() == 0))
    {
      ATerm z_23 = NULL,c_24 = NULL,d_24 = NULL,t_3 = NULL;
      d_24 = t;
      if(match_cons(t, sym_Var_1))
        {
          c_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_24);
      z_23 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, c_24);
      t_3 = t;
      t = SSLsetAnnotations(t_3, z_23);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_16;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_13;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_24 = ATgetFirst((ATermList) t);
      f_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_24, f_24);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,l_24 = NULL,m_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_17 = ATgetArgument(t, 0);
      if(match_cons(a_17, sym__2))
        {
          g_24 = ATgetArgument(a_17, 0);
          h_24 = ATgetArgument(a_17, 1);
        }
      else
        _fail(t);
      {
        ATerm b_17 = ATgetArgument(t, 1);
        if(match_cons(b_17, sym__2))
          {
            l_24 = ATgetArgument(b_17, 0);
            m_24 = ATgetArgument(b_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_24), g_24), (ATerm) ATinsert(CheckATermList(m_24), h_24));
  return(t);
}
static ATerm b_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_13;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_24 = ATgetFirst((ATermList) t);
      o_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_24, o_24);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm p_24 = NULL,u_24 = NULL,v_24 = NULL,b_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_17 = ATgetArgument(t, 0);
      if(match_cons(d_17, sym__2))
        {
          p_24 = ATgetArgument(d_17, 0);
          u_24 = ATgetArgument(d_17, 1);
        }
      else
        _fail(t);
      {
        ATerm e_17 = ATgetArgument(t, 1);
        if(match_cons(e_17, sym__2))
          {
            v_24 = ATgetArgument(e_17, 0);
            b_25 = ATgetArgument(e_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_24), p_24), (ATerm) ATinsert(CheckATermList(b_25), u_24));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL;
  l_46 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      m_46 = ATgetArgument(t, 0);
      n_46 = ATgetArgument(t, 1);
      k_46 = ATgetArgument(t, 2);
      {
        ATerm o_21 = NULL,q_21 = NULL,r_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,s_3 = NULL;
        t = k_46;
        t = fetch_1_0(k_2, t);
        t = k_46;
        t = genzip_4_0(l_2, m_2, n_2, LiftPrimArg_0_0, t);
        a_22 = t;
        if(match_cons(t, sym__2))
          {
            w_21 = ATgetArgument(t, 0);
            x_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_22);
        v_21 = t;
        t = w_21;
        t = concat_0_0(t);
        y_21 = t;
        t = x_21;
        t = genzip_4_0(q_2, s_2, w_2, _id, t);
        z_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_21, z_21);
        s_3 = t;
        t = SSLsetAnnotations(s_3, v_21);
        if(match_cons(t, sym__2))
          {
            o_21 = ATgetArgument(t, 0);
            {
              ATerm f_17 = ATgetArgument(t, 1);
              if(match_cons(f_17, sym__2))
                {
                  q_21 = ATgetArgument(f_17, 0);
                  r_21 = ATgetArgument(f_17, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, o_21, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_21), (ATerm) ATmakeAppl(sym_PrimT_3, m_46, n_46, r_21)));
      }
    }
  else
    {
      ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,t_23 = NULL,u_23 = NULL,y_23 = NULL,u_3 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          m_46 = ATgetArgument(t, 0);
          n_46 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_46;
      t = fetch_1_0(x_2, t);
      t = n_46;
      t = genzip_4_0(y_2, z_2, a_3, LiftPrimArg_0_0, t);
      y_23 = t;
      if(match_cons(t, sym__2))
        {
          o_23 = ATgetArgument(t, 0);
          p_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_23);
      n_23 = t;
      t = o_23;
      t = concat_0_0(t);
      t_23 = t;
      t = p_23;
      t = genzip_4_0(b_3, e_3, f_3, _id, t);
      u_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_23, u_23);
      u_3 = t;
      t = SSLsetAnnotations(u_3, n_23);
      if(match_cons(t, sym__2))
        {
          k_23 = ATgetArgument(t, 0);
          {
            ATerm g_17 = ATgetArgument(t, 1);
            if(match_cons(g_17, sym__2))
              {
                l_23 = ATgetArgument(g_17, 0);
                m_23 = ATgetArgument(g_17, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, k_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_23), (ATerm) ATmakeAppl(sym_PrimT_3, m_46, (ATerm)ATempty, m_23)));
    }
  return(t);
}
ATerm downup2_2_0 (ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm t)
{
  t = w_139(t);
  {
    static ATerm h_3 (ATerm t);
    static ATerm h_3 (ATerm t)
    {
      t = downup2_2_0(w_139, x_139, t);
      return(t);
    }
    t = SRTS_all(h_3, t);
  }
  t = x_139(t);
  return(t);
}
static ATerm z_5 (ATerm i_50, ATerm j_50, ATerm t)
{
  ATerm q_46 = NULL;
  t = SSL_fputc(i_50, j_50);
  q_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_46);
  return(t);
}
static ATerm a_6 (ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm r_46 = NULL;
  t = SSL_write_term_to_stream_text(w_33, x_33);
  r_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_46);
  return(t);
}
static ATerm c_6 (ATerm u_145 (ATerm), ATerm a_205, ATerm c_34, ATerm t)
{
  ATerm s_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_205, term_h_17);
  t = g_6(t);
  s_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_46, c_34);
  t = u_145(t);
  t = fclose_0_0(t);
  t = c_34;
  return(t);
}
static ATerm b_6 (ATerm s_33, ATerm t_33, ATerm t)
{
  ATerm t_46 = NULL;
  t = SSL_write_term_to_stream_baf(s_33, t_33);
  t_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_46);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_17 = ATgetArgument(t, 0);
      if(match_cons(i_17, sym_Stream_1))
        {
          u_25 = ATgetArgument(i_17, 0);
        }
      else
        _fail(t);
      v_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(u_25, v_25, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_17 = ATgetArgument(t, 0);
      if(match_cons(k_17, sym_Stream_1))
        {
          j_26 = ATgetArgument(k_17, 0);
        }
      else
        _fail(t);
      k_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(j_26, k_26, t);
  g_26 = t;
  t = term_l_17;
  h_26 = t;
  t = g_26;
  if(match_cons(t, sym_Stream_1))
    {
      i_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_l_17, g_26);
  t = z_5(h_26, i_26, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,h_48 = NULL,i_48 = NULL,d_4 = NULL,c_4 = NULL;
  y_46 = t;
  if(match_cons(t, sym__2))
    {
      f_47 = ATgetArgument(t, 0);
      g_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_46);
  e_47 = t;
  t = f_47;
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_3 (ATerm t);
        static ATerm j_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((x_46 != NULL) && (x_46 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(j_3, t);
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        t = term_o_17;
        x_46 = t;
      }
  }
  h_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_47, g_47);
  c_4 = t;
  t = SSLsetAnnotations(c_4, e_47);
  t = y_46;
  if(match_cons(t, sym__2))
    {
      a_47 = ATgetArgument(t, 0);
      b_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_46);
  z_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_47, (ATerm) ATmakeAppl(sym__2, not_null(x_46), b_47));
  d_4 = t;
  t = SSLsetAnnotations(d_4, z_46);
  d_47 = t;
  if(match_cons(t, sym__2))
    {
      h_48 = ATgetArgument(t, 0);
      i_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,e_4 = NULL;
        t = SSLgetAnnotations(d_47);
        k_25 = t;
        t = h_48;
        t = fetch_1_0(n_3, t);
        p_25 = t;
        t = i_48;
        if(match_cons(t, sym__2))
          {
            r_25 = ATgetArgument(t, 0);
            s_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_6(o_3, r_25, s_25, t);
        q_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_25, q_25);
        e_4 = t;
        t = SSLsetAnnotations(e_4, k_25);
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        {
          ATerm a_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,f_4 = NULL;
          t = SSLgetAnnotations(d_47);
          a_26 = t;
          t = i_48;
          if(match_cons(t, sym__2))
            {
              e_26 = ATgetArgument(t, 0);
              f_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_6(v_3, e_26, f_26, t);
          d_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_48, d_26);
          f_4 = t;
          t = SSLsetAnnotations(f_4, a_26);
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
ATerm apply_strategy_1_0 (ATerm r_163 (ATerm), ATerm t)
{
  ATerm l_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL;
  r_48 = t;
  t = dtime_0_0(t);
  t = r_48;
  t = r_163(t);
  q_48 = t;
  t = dtime_0_0(t);
  l_48 = t;
  t = q_48;
  if(match_cons(t, sym__2))
    {
      o_48 = ATgetArgument(t, 0);
      p_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_48), (ATerm) ATmakeAppl(sym_Runtime_1, l_48)), p_48);
  return(t);
}
static ATerm f_49 (ATerm z_48, ATerm t)
{
  t = SSL_fclose(z_48);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL;
  d_49 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_49 = ATgetArgument(t, 0);
      {
        ATerm r_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_49);
            LocalPopChoice(s_17);
          }
        else
          {
            t = r_17;
            t = f_49(d_49, t);
          }
      }
    }
  else
    {
      t = f_49(d_49, t);
    }
  return(t);
}
static ATerm d_6 (ATerm y_33, ATerm t)
{
  t = SSL_read_term_from_stream(y_33);
  return(t);
}
static ATerm e_6 (ATerm m_48, ATerm n_48, ATerm t)
{
  t = SSL_strcat(m_48, n_48);
  return(t);
}
static ATerm f_6 (ATerm k_50, ATerm l_50, ATerm t)
{
  ATerm g_49 = NULL;
  t = SSL_fopen(k_50, l_50);
  g_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_49);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_49 = NULL;
  t = SSL_stdin_stream();
  h_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_49);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_49 = NULL;
  t = SSL_stdout_stream();
  i_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_49);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_49 = NULL;
  t = SSL_stderr_stream();
  j_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_49);
  return(t);
}
static ATerm w_50 (ATerm p_49, ATerm t)
{
  ATerm q_49 = NULL;
  t = SSL_explode_term(p_49);
  if(match_cons(t, sym__2))
    {
      ATerm t_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_17 = ATgetArgument(t, 1);
        if(((ATgetType(v_17) == AT_LIST) && !(ATisEmpty(v_17))))
          {
            q_49 = ATgetFirst((ATermList) v_17);
            {
              ATerm w_17 = (ATerm) ATgetNext((ATermList) v_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_49;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_49;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_49;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_49;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm x_50 (ATerm t_49, ATerm u_49, ATerm v_49, ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL,b_50 = NULL,l_4 = NULL;
  t = SSLgetAnnotations(v_49);
  y_49 = t;
  t = t_49;
  if(match_cons(t, sym_Path_1))
    {
      b_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_50, u_49);
  l_4 = t;
  t = SSLsetAnnotations(l_4, y_49);
  if(match_cons(t, sym__2))
    {
      w_49 = ATgetArgument(t, 0);
      x_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(w_49, x_49, t);
  return(t);
}
static ATerm y_50 (ATerm d_50, ATerm e_50, ATerm f_50, ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,o_50 = NULL,r_50 = NULL,o_4 = NULL;
  t = SSLgetAnnotations(f_50);
  o_50 = t;
  t = SSL_is_string(d_50);
  r_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_50, e_50);
  o_4 = t;
  t = SSLsetAnnotations(o_4, o_50);
  if(match_cons(t, sym__2))
    {
      g_50 = ATgetArgument(t, 0);
      h_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(g_50, h_50, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL;
  t_50 = t;
  if(match_cons(t, sym__2))
    {
      u_50 = ATgetArgument(t, 0);
      v_50 = ATgetArgument(t, 1);
      {
        ATerm x_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_50(t_50, t);
            LocalPopChoice(y_17);
          }
        else
          {
            t = x_17;
            {
              ATerm c_18 = t;
              int j_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_50(u_50, v_50, t_50, t);
                  LocalPopChoice(j_18);
                }
              else
                {
                  t = c_18;
                  t = y_50(u_50, v_50, t_50, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_50(t_50, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL,h_51 = NULL;
  h_51 = t;
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_51, term_m_18);
        t = g_6(t);
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        {
          ATerm v_26 = NULL,w_26 = NULL;
          t = term_n_18;
          w_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_18, h_51);
          t = e_6(w_26, h_51, t);
          v_26 = t;
          t = SSL_perror(v_26);
          _fail(t);
        }
      }
  }
  b_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(c_51, t);
  a_51 = t;
  t = b_51;
  t = fclose_0_0(t);
  t = a_51;
  return(t);
}
ATerm fetch_1_0 (ATerm n_146 (ATerm), ATerm t)
{
  static ATerm h_52 (ATerm t);
  static ATerm h_52 (ATerm t)
  {
    ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
    e_52 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_52 = ATgetFirst((ATermList) t);
        g_52 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_18 = t;
      int p_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_27 = NULL,e_27 = NULL,r_4 = NULL;
          t = SSLgetAnnotations(e_52);
          b_27 = t;
          t = f_52;
          t = n_146(t);
          e_27 = t;
          t = (ATerm) ATinsert(CheckATermList(g_52), e_27);
          r_4 = t;
          t = SSLsetAnnotations(r_4, b_27);
          LocalPopChoice(p_18);
        }
      else
        {
          t = o_18;
          {
            ATerm m_27 = NULL,p_27 = NULL,s_4 = NULL;
            t = SSLgetAnnotations(e_52);
            m_27 = t;
            t = g_52;
            t = h_52(t);
            p_27 = t;
            t = (ATerm) ATinsert(CheckATermList(p_27), f_52);
            s_4 = t;
            t = SSLsetAnnotations(s_4, m_27);
          }
        }
    }
    return(t);
  }
  t = h_52(t);
  return(t);
}
static ATerm l_6 (ATerm l_57, ATerm m_57, ATerm t)
{
  ATerm k_52 = NULL;
  t = lookup_table_0_1(l_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_6(m_57, k_52, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_162 (ATerm), ATerm t)
{
  ATerm n_52 = NULL;
  n_52 = t;
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL;
        t = term_x_18;
        q_52 = t;
        t = term_y_18;
        r_52 = t;
        t = term_z_18;
        t = l_6(q_52, r_52, t);
        p_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_52, term_a_19);
        t = geq_0_0(t);
        t = n_52;
        t = a_162(t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = n_52;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL;
  u_52 = t;
  {
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_52;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_19 = ATgetFirst((ATermList) t);
                ATerm e_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_52;
          }
        LocalPopChoice(c_19);
      }
    else
      {
        t = b_19;
        t = (ATerm) ATinsert(ATempty, u_52);
      }
  }
  v_52 = t;
  t = term_o_17;
  w_52 = t;
  t = SSL_printnl(w_52, v_52);
  t = u_52;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL;
  t = term_x_18;
  a_53 = t;
  t = term_f_19;
  b_53 = t;
  t = term_g_19;
  t = l_6(a_53, b_53, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm d_53 = NULL;
  d_53 = t;
  if(match_string(t, "-k"))
    {
      t = d_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_53;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
  e_53 = t;
  t = SSL_string_to_int(e_53);
  f_53 = t;
  t = term_h_19;
  g_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_19, f_53);
  t = o_6(g_53, f_53, t);
  t = e_53;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_i_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_3, x_3, y_3, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm i_53 = NULL;
  i_53 = t;
  if(match_string(t, "-S"))
    {
      t = i_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_53;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL;
  t = term_y_18;
  j_53 = t;
  t = term_j_19;
  k_53 = t;
  t = term_q_19;
  t = o_6(j_53, k_53, t);
  t = term_r_19;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL;
  l_53 = t;
  t = SSL_string_to_int(l_53);
  m_53 = t;
  t = term_y_18;
  n_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_18, m_53);
  t = o_6(n_53, m_53, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_53);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_c_20;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL;
  t = term_d_20;
  o_53 = t;
  t = term_k_7;
  p_53 = t;
  t = term_e_20;
  t = o_6(o_53, p_53, t);
  t = term_f_20;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_g_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_4, g_4, h_4, t);
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      {
        ATerm k_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_4, j_4, k_4, t);
            LocalPopChoice(l_20);
          }
        else
          {
            t = k_20;
            t = Option_3_0(n_4, p_4, q_4, t);
          }
      }
    }
  return(t);
}
static ATerm o_6 (ATerm j_69, ATerm k_69, ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL;
  t = term_x_18;
  q_53 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_18, j_69, k_69);
  t = lookup_table_0_1(q_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(j_69, k_69, r_53, t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_18, j_69, k_69);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
      t = term_k_7;
      t = h_0(t);
      x_53 = t;
      t = term_n_20;
      y_53 = t;
      t = term_o_20;
      z_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_20, term_o_20, x_53);
      t = m_6(y_53, z_53, x_53, t);
      _fail(t);
    }
  else
    {
      ATerm e_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_53 = ATgetFirst((ATermList) t);
          w_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_53;
      t = d_0(t);
      t = term_k_7;
      t = f_0(t);
      e_54 = t;
      t = (ATerm) ATinsert(CheckATermList(w_53), e_54);
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm g_54 = NULL;
  g_54 = t;
  if(match_string(t, "-o"))
    {
      t = g_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_54;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL;
  h_54 = t;
  t = term_p_20;
  i_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_20, h_54);
  t = o_6(i_54, h_54, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_54);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_t_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_4, v_4, x_4, t);
  return(t);
}
static ATerm m_6 (ATerm s_55, ATerm t_55, ATerm r_55, ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL;
  k_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_55, t_55);
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
        t = (ATerm) ATmakeAppl(sym__2, s_55, t_55);
        t = l_6(s_55, t_55, t);
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
        t = (ATerm) ATempty;
      }
  }
  l_54 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_55, t_55, (ATerm) ATinsert(CheckATermList(l_54), r_55));
  t = lookup_table_0_1(s_55, t);
  o_54 = t;
  t = (ATerm) ATinsert(CheckATermList(l_54), r_55);
  m_54 = t;
  t = o_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(t_55, m_54, n_54, t);
  t = k_54;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL;
      t = term_k_7;
      t = o_0(t);
      z_54 = t;
      t = term_n_20;
      a_55 = t;
      t = term_o_20;
      b_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_20, term_o_20, z_54);
      t = m_6(a_55, b_55, z_54, t);
      _fail(t);
    }
  else
    {
      ATerm f_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_54 = ATgetFirst((ATermList) t);
          w_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_54;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_54 = ATgetFirst((ATermList) t);
          y_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_54;
      t = l_0(t);
      t = x_54;
      t = m_0(t);
      f_55 = t;
      t = (ATerm) ATinsert(CheckATermList(y_54), f_55);
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm i_55 = NULL;
  i_55 = t;
  if(match_string(t, "-i"))
    {
      t = i_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_55;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL;
  j_55 = t;
  t = term_y_20;
  k_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_20, j_55);
  t = o_6(k_55, j_55, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_55);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_4, z_4, c_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_7;
  t = whoami_0_0(t);
  l_55 = t;
  t = term_l_7;
  n_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_21), l_55);
  o_55 = t;
  t = SSL_printnl(n_55, o_55);
  t = term_o_7;
  m_55 = t;
  t = SSL_exit(m_55);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL;
  t = term_x_18;
  p_55 = t;
  t = term_f_19;
  q_55 = t;
  t = term_g_19;
  t = l_6(p_55, q_55, t);
  return(t);
}
static ATerm h_6 (ATerm b_54, ATerm c_54, ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_54, c_54);
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      t = SSL_addr(b_54, c_54);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_153 (ATerm), ATerm d_153 (ATerm), ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
  v_55 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_55;
      t = c_153(t);
    }
  else
    {
      ATerm a_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_55 = ATgetFirst((ATermList) t);
          x_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_55;
      t = foldr_2_0(c_153, d_153, t);
      a_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_55, a_56);
      t = d_153(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_j_19;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL;
  if(match_cons(t, sym__2))
    {
      y_27 = ATgetArgument(t, 0);
      z_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(y_27, z_27, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_56 = NULL,u_27 = NULL,v_27 = NULL;
  t = times_0_0(t);
  v_27 = t;
  t = SSL_explode_term(v_27);
  if(match_cons(t, sym__2))
    {
      ATerm d_21 = ATgetArgument(t, 0);
      u_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_27;
  t = foldr_2_0(d_5, f_5, t);
  d_56 = t;
  t = SSL_TicksToSeconds(d_56);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL;
  o_56 = t;
  if(match_cons(t, sym__2))
    {
      p_56 = ATgetArgument(t, 0);
      q_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_56;
        if((p_56 != t))
          {
            _fail(t);
          }
        t = o_56;
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
        {
          ATerm g_21 = t;
          int h_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_56, q_56);
              LocalPopChoice(h_21);
            }
          else
            {
              t = g_21;
              t = SSL_gtr(p_56, q_56);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_161 (ATerm), ATerm t)
{
  ATerm u_56 = NULL;
  u_56 = t;
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
        t = term_x_18;
        x_56 = t;
        t = term_y_18;
        y_56 = t;
        t = term_z_18;
        t = l_6(x_56, y_56, t);
        w_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_56, term_o_7);
        t = geq_0_0(t);
        t = u_56;
        t = z_161(t);
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        t = u_56;
      }
  }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL,d_57 = NULL,i_57 = NULL;
  t = run_time_0_0(t);
  a_57 = t;
  t = term_k_7;
  t = whoami_0_0(t);
  b_57 = t;
  t = term_l_7;
  d_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_21), a_57), term_k_21), b_57);
  i_57 = t;
  t = SSL_printnl(d_57, i_57);
  t = (ATerm) ATmakeAppl(sym__2, term_l_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_21), a_57), term_k_21), b_57));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_19;
  j_57 = t;
  t = SSL_exit(j_57);
  return(t);
}
static ATerm p_6 (ATerm k_60, ATerm l_60, ATerm m_60, ATerm t)
{
  ATerm k_57 = NULL;
  t = SSL_hashtable_put(m_60, k_60, l_60);
  k_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_57);
  return(t);
}
static ATerm q_6 (ATerm n_60, ATerm o_60, ATerm t)
{
  t = SSL_hashtable_get(o_60, n_60);
  return(t);
}
ATerm lookup_table_0_1 (ATerm e_57, ATerm t)
{
  ATerm v_57 = NULL;
  t = table_hashtable_0_0(t);
  v_57 = t;
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_28 = NULL;
        t = v_57;
        if(match_cons(t, sym_Hashtable_1))
          {
            k_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_6(e_57, k_28, t);
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
        {
          ATerm p_28 = NULL;
          t = e_57;
          t = table_create_0_0(t);
          t = v_57;
          if(match_cons(t, sym_Hashtable_1))
            {
              p_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_6(e_57, p_28, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm s_60, ATerm t_60, ATerm t)
{
  ATerm y_57 = NULL;
  t = SSL_hashtable_create(s_60, t_60);
  y_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_57);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL,d_58 = NULL,e_58 = NULL;
  z_57 = t;
  t = term_p_21;
  d_58 = t;
  t = term_s_21;
  e_58 = t;
  t = z_57;
  t = new_hashtable_0_2(d_58, e_58, t);
  a_58 = t;
  t = z_57;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(z_57, a_58, b_58, t);
  t = z_57;
  return(t);
}
static ATerm j_6 (ATerm p_60, ATerm q_60, ATerm t)
{
  ATerm f_58 = NULL;
  t = SSL_hashtable_remove(q_60, p_60);
  f_58 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_58);
  return(t);
}
static ATerm k_6 (ATerm u_60, ATerm t)
{
  ATerm g_58 = NULL;
  t = SSL_hashtable_destroy(u_60);
  g_58 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_58);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm h_58 = NULL;
  t = SSL_table_hashtable();
  h_58 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_58);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL;
  i_58 = t;
  t = table_hashtable_0_0(t);
  j_58 = t;
  t = lookup_table_0_1(i_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(l_58, t);
  t = j_58;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(i_58, k_58, t);
  t = i_58;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL;
  t = term_t_21;
  m_58 = t;
  t = term_k_7;
  n_58 = t;
  t = term_u_21;
  t = o_6(m_58, n_58, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_q_22;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL;
  t = term_t_21;
  q_58 = t;
  t = term_k_7;
  r_58 = t;
  t = term_u_21;
  t = o_6(q_58, r_58, t);
  t = term_s_22;
  o_58 = t;
  t = term_k_7;
  p_58 = t;
  t = term_t_22;
  t = o_6(o_58, p_58, t);
  t = term_u_22;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_w_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_5, m_5, n_5, t);
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      t = Option_3_0(q_5, r_5, s_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_116 (ATerm), ATerm w_116 (ATerm), ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,w_4 = NULL;
  x_58 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_58 = ATgetFirst((ATermList) t);
      u_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_58);
  s_58 = t;
  t = t_58;
  t = v_116(t);
  v_58 = t;
  t = u_58;
  t = w_116(t);
  w_58 = t;
  t = (ATerm) ATinsert(CheckATermList(w_58), v_58);
  w_4 = t;
  t = SSLsetAnnotations(w_4, s_58);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_166 (ATerm), ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,h_59 = NULL,i_59 = NULL,p_5 = NULL;
  c_59 = t;
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_23;
        t = x_166(t);
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
      }
  }
  t = c_59;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_59 = ATgetFirst((ATermList) t);
      f_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_59);
  d_59 = t;
  t = term_f_19;
  i_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_19, e_59);
  t = o_6(i_59, e_59, t);
  t = f_59;
  {
    static ATerm s_59 (ATerm t);
    static ATerm s_59 (ATerm t)
    {
      ATerm c_23 = t;
      int d_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_23 = t;
          int f_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_59 = NULL;
              l_59 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_59;
              LocalPopChoice(f_23);
            }
          else
            {
              t = e_23;
              t = x_166(t);
              t = Cons_2_0(_id, s_59, t);
            }
          LocalPopChoice(d_23);
        }
      else
        {
          t = c_23;
          {
            ATerm o_59 = NULL,p_59 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_59 = ATgetFirst((ATermList) t);
                p_59 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(p_59), (ATerm) ATmakeAppl(sym_Undefined_1, o_59));
          }
        }
      return(t);
    }
    t = s_59(t);
  }
  h_59 = t;
  t = (ATerm) ATinsert(CheckATermList(h_59), (ATerm) ATmakeAppl(sym_Program_1, e_59));
  p_5 = t;
  t = SSLsetAnnotations(p_5, d_59);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm f_60 = NULL;
  f_60 = t;
  if(match_string(t, "--help"))
    {
      t = f_60;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_60;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_60;
        }
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm g_60 = NULL,h_60 = NULL;
  t = term_g_23;
  g_60 = t;
  t = term_k_7;
  h_60 = t;
  t = term_h_23;
  t = o_6(g_60, h_60, t);
  t = term_i_23;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_j_23;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm u_166 (ATerm), ATerm v_166 (ATerm), ATerm w_166 (ATerm), ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL;
  z_59 = t;
  t = term_n_20;
  a_60 = t;
  t = term_q_23;
  t = lookup_table_0_1(a_60, t);
  e_60 = t;
  t = term_o_20;
  b_60 = t;
  t = (ATerm) ATempty;
  c_60 = t;
  t = e_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(b_60, c_60, d_60, t);
  t = z_59;
  {
    static ATerm t_5 (ATerm t);
    static ATerm t_5 (ATerm t)
    {
      ATerm v_23 = t;
      int w_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_166(t);
          LocalPopChoice(w_23);
        }
      else
        {
          t = v_23;
          {
            ATerm j_24 = t;
            int k_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_5, x_5, y_5, t);
                LocalPopChoice(k_24);
              }
            else
              {
                t = j_24;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_5, t);
  }
  {
    ATerm q_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_61 = NULL;
        c_61 = t;
        {
          ATerm c_25 = t;
          int d_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_28 = NULL;
              t = c_61;
              {
                ATerm e_25 = t;
                int f_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_28 = NULL,v_28 = NULL;
                    t = term_x_18;
                    u_28 = t;
                    t = term_g_23;
                    v_28 = t;
                    t = term_g_25;
                    t = l_6(u_28, v_28, t);
                    LocalPopChoice(f_25);
                  }
                else
                  {
                    t = e_25;
                    t = fetch_1_0(i_6, t);
                  }
              }
              t = c_61;
              t = v_166(t);
              t = term_j_19;
              t_28 = t;
              t = SSL_exit(t_28);
              LocalPopChoice(d_25);
            }
          else
            {
              t = c_25;
              {
                ATerm k_29 = NULL,o_29 = NULL,p_29 = NULL;
                t = term_x_18;
                o_29 = t;
                t = term_t_21;
                p_29 = t;
                t = term_i_25;
                t = l_6(o_29, p_29, t);
                t = c_61;
                t = w_166(t);
                t = term_j_19;
                k_29 = t;
                t = SSL_exit(k_29);
              }
            }
        }
        LocalPopChoice(y_24);
      }
    else
      {
        t = q_24;
        {
          ATerm j_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL;
              static ATerm n_6 (ATerm t);
              static ATerm n_6 (ATerm t)
              {
                ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL,v_5 = NULL;
                i_61 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    h_61 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(i_61);
                g_61 = t;
                t = h_61;
                if(((x_59 != NULL) && (x_59 != t)))
                  _fail(t);
                else
                  x_59 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, h_61);
                v_5 = t;
                t = SSLsetAnnotations(v_5, g_61);
                return(t);
              }
              t = fetch_1_0(n_6, t);
              t = term_l_7;
              e_61 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_59)), term_m_25);
              f_61 = t;
              t = SSL_printnl(e_61, f_61);
              t = (ATerm) ATmakeAppl(sym__2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_59)), term_m_25));
              t = v_166(t);
              t = term_o_7;
              d_61 = t;
              t = SSL_exit(d_61);
              LocalPopChoice(l_25);
            }
          else
            {
              t = j_25;
            }
        }
      }
  }
  y_59 = t;
  t = term_n_20;
  t = table_destroy_0_0(t);
  t = y_59;
  return(t);
}
ATerm option_wrap_5_0 (ATerm x_164 (ATerm), ATerm y_164 (ATerm), ATerm z_164 (ATerm), ATerm a_165 (ATerm), ATerm b_165 (ATerm), ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL;
  t = parse_options_3_0(x_164, y_164, z_164, t);
  n_61 = t;
  t = term_o_25;
  t = table_create_0_0(t);
  t = term_o_25;
  o_61 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_25, term_w_25, n_61);
  t = lookup_table_0_1(o_61, t);
  r_61 = t;
  t = term_w_25;
  p_61 = t;
  t = r_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(p_61, n_61, q_61, t);
  t = n_61;
  t = a_165(t);
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_165(t);
        t = report_success_0_0(t);
        LocalPopChoice(y_25);
      }
    else
      {
        t = x_25;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = if_verbose2_1_0(d_7, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm s_61 = NULL,t_61 = NULL;
  t = term_z_25;
  s_61 = t;
  t = term_k_7;
  t_61 = t;
  t = term_b_26;
  t = o_6(s_61, t_61, t);
  t = term_c_26;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_l_26;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL;
  u_61 = t;
  t = term_x_18;
  y_61 = t;
  t = term_f_19;
  z_61 = t;
  t = term_g_19;
  t = l_6(y_61, z_61, t);
  v_61 = t;
  t = term_l_7;
  w_61 = t;
  t = (ATerm) ATinsert(ATempty, v_61);
  x_61 = t;
  t = SSL_printnl(w_61, x_61);
  t = u_61;
  return(t);
}
ATerm iowrap_3_0 (ATerm a_164 (ATerm), ATerm b_164 (ATerm), ATerm c_164 (ATerm), ATerm t)
{
  static ATerm s_6 (ATerm t);
  static ATerm w_6 (ATerm t);
  static ATerm s_6 (ATerm t)
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_164(t);
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        {
          ATerm o_26 = t;
          int p_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
                    LocalPopChoice(r_26);
                  }
                else
                  {
                    t = q_26;
                    {
                      ATerm s_26 = t;
                      int t_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(y_6, b_7, c_7, t);
                          LocalPopChoice(t_26);
                        }
                      else
                        {
                          t = s_26;
                          {
                            ATerm u_26 = t;
                            int x_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(x_26);
                              }
                            else
                              {
                                t = u_26;
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
  static ATerm w_6 (ATerm t)
  {
    ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL;
    b_62 = t;
    {
      ATerm y_26 = t;
      int z_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm e_7 (ATerm t);
          static ATerm e_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((a_62 != NULL) && (a_62 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_7, t);
          LocalPopChoice(z_26);
        }
      else
        {
          t = y_26;
          t = term_a_27;
          a_62 = t;
        }
    }
    t = not_null(a_62);
    t = ReadFromFile_0_0(t);
    c_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_62, c_62);
    t = apply_strategy_1_0(a_164, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(s_6, c_164, default_system_about_0_0, t_6, w_6, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,r_6 = NULL;
  l_62 = t;
  if(match_cons(t, sym__2))
    {
      i_62 = ATgetArgument(t, 0);
      j_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_62);
  h_62 = t;
  t = j_62;
  t = downup2_2_0(g_7, h_7, t);
  t = downup_1_0(j_7, t);
  k_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_62, k_62);
  r_6 = t;
  t = SSLsetAnnotations(r_6, h_62);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = repeat_2_0(i_7, _id, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = repeat_2_0(Canon_0_0, _id, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm c_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Canon_0_0(t);
      LocalPopChoice(d_27);
    }
  else
    {
      t = c_27;
      {
        ATerm f_27 = t;
        int g_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            LocalPopChoice(g_27);
          }
        else
          {
            t = f_27;
            {
              ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL;
              m_62 = t;
              if(match_cons(t, sym_CallT_3))
                {
                  n_62 = ATgetArgument(t, 0);
                  o_62 = ATgetArgument(t, 1);
                  p_62 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = m_62;
              t = u_5(n_62, o_62, p_62, t);
            }
          }
      }
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(f_7, _fail, default_usage_0_0, t);
  return(t);
}

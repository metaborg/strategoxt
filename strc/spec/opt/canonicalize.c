#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_As_2;
static Symbol sym_App_2;
static Symbol sym_Op_2;
static Symbol sym_Wld_0;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_SVar_1;
static Symbol sym_AM_2;
static Symbol sym_Choice_2;
static Symbol sym_Thread_1;
static Symbol sym_All_1;
static Symbol sym_One_1;
static Symbol sym_Some_1;
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
static Symbol sym_Prim_2;
static Symbol sym_Bagof_1;
static Symbol sym_Test_1;
static Symbol sym_Where_1;
static Symbol sym_Not_1;
static Symbol sym_Rec_2;
static Symbol sym_GuardedLChoice_3;
static Symbol sym_LChoice_2;
static Symbol sym_Seq_2;
static Symbol sym_BA_2;
static Symbol sym_Scope_2;
static Symbol sym_Build_1;
static Symbol sym_Match_1;
static Symbol sym_CallT_3;
static Symbol sym_Let_2;
static Symbol sym_Id_0;
static Symbol sym_Fail_0;
static Symbol sym_SDefT_4;
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
static Symbol sym_Some_1;
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
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_Id_1;
static Symbol sym_Undefined_0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_As_2;
static Symbol sym_App_2;
static Symbol sym_Op_2;
static Symbol sym_Wld_0;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_SVar_1;
static Symbol sym_AM_2;
static Symbol sym_Choice_2;
static Symbol sym_Thread_1;
static Symbol sym_All_1;
static Symbol sym_One_1;
static Symbol sym_Some_1;
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
static Symbol sym_Prim_2;
static Symbol sym_Bagof_1;
static Symbol sym_Test_1;
static Symbol sym_Where_1;
static Symbol sym_Not_1;
static Symbol sym_Rec_2;
static Symbol sym_GuardedLChoice_3;
static Symbol sym_LChoice_2;
static Symbol sym_Seq_2;
static Symbol sym_BA_2;
static Symbol sym_Scope_2;
static Symbol sym_Build_1;
static Symbol sym_Match_1;
static Symbol sym_CallT_3;
static Symbol sym_Let_2;
static Symbol sym_Id_0;
static Symbol sym_Fail_0;
static Symbol sym_SDefT_4;
static Symbol sym_InfixApp_3;
static Symbol sym_MA_2;
static Symbol sym_BAM_3;
static Symbol sym_Seqs_1;
static Symbol sym_Choices_1;
static Symbol sym_LChoices_1;
static Symbol sym_Lets_2;
static Symbol sym_Cong_2;
static void init_module_constructors (void)
{
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
static ATerm term_d_27;
static ATerm term_c_27;
static ATerm term_a_27;
static ATerm term_o_26;
static ATerm term_n_26;
static ATerm term_m_26;
static ATerm term_f_26;
static ATerm term_e_26;
static ATerm term_o_25;
static ATerm term_n_25;
static ATerm term_m_25;
static ATerm term_l_25;
static ATerm term_k_25;
static ATerm term_f_25;
static ATerm term_v_23;
static ATerm term_s_23;
static ATerm term_q_23;
static ATerm term_p_23;
static ATerm term_o_23;
static ATerm term_n_23;
static ATerm term_k_23;
static ATerm term_f_23;
static ATerm term_c_23;
static ATerm term_z_22;
static ATerm term_y_22;
static ATerm term_r_22;
static ATerm term_n_21;
static ATerm term_m_21;
static ATerm term_l_21;
static ATerm term_k_21;
static ATerm term_f_21;
static ATerm term_z_20;
static ATerm term_y_20;
static ATerm term_x_20;
static ATerm term_w_20;
static ATerm term_v_20;
static ATerm term_u_20;
static ATerm term_t_20;
static ATerm term_s_20;
static ATerm term_r_20;
static ATerm term_q_20;
static ATerm term_p_20;
static ATerm term_o_20;
static ATerm term_e_20;
static ATerm term_d_20;
static ATerm term_c_20;
static ATerm term_b_20;
static ATerm term_z_19;
static ATerm term_v_18;
static ATerm term_u_18;
static ATerm term_p_18;
static ATerm term_o_18;
static ATerm term_n_18;
static ATerm term_m_18;
static ATerm term_l_18;
static ATerm term_i_18;
static ATerm term_h_18;
static ATerm term_o_17;
static ATerm term_n_17;
static ATerm term_g_17;
static ATerm term_f_17;
static ATerm term_e_17;
static ATerm term_d_17;
static ATerm term_a_17;
static ATerm term_x_16;
static ATerm term_s_14;
static ATerm term_r_14;
static ATerm term_q_14;
static ATerm term_o_14;
static ATerm term_n_14;
static ATerm term_m_14;
static ATerm term_l_14;
static ATerm term_k_14;
static ATerm term_i_14;
static ATerm term_h_14;
static ATerm term_c_13;
static ATerm term_b_13;
static ATerm term_a_13;
static ATerm term_z_12;
static ATerm term_y_12;
static ATerm term_x_12;
static ATerm term_l_12;
static ATerm term_a_10;
static ATerm term_z_9;
static ATerm term_h_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_CallT_3, term_y_12, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_13);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_CallT_3, term_b_13, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_one", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_all", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_bagof", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_14);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym__2, term_d_17, term_e_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym__2, term_d_17, term_n_17);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym__2, term_d_17, term_l_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym__2, term_d_17, term_o_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym__2, term_b_20, term_c_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym__2, term_q_20, term_r_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_u_18);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_d_17, term_q_20);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym__2, term_k_23, term_u_18);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym__2, term_p_23, term_u_18);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_u_18);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym__3, term_b_20, term_c_20, (ATerm) ATempty);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym__2, term_d_17, term_k_25);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym__2, term_d_17, term_k_23);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym__2, term_n_17, term_u_18);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm topdown_1_0 (ATerm m_151 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm q_4 (ATerm t_116, ATerm s_116, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm q_152 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm m_150 (ATerm), ATerm n_150 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm o_151 (ATerm), ATerm t);
ATerm CreateDef2_0_0 (ATerm t);
static ATerm t_24 (ATerm z_23, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm e_153 (ATerm), ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm Canon_0_0 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm y_5 (ATerm z_102, ATerm a_103, ATerm b_103, ATerm t);
ATerm genzip_4_0 (ATerm z_159 (ATerm), ATerm a_160 (ATerm), ATerm b_160 (ATerm), ATerm c_160 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm m_158 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm b_43 (ATerm s_42, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm downup2_2_0 (ATerm r_151 (ATerm), ATerm s_151 (ATerm), ATerm t);
static ATerm c_6 (ATerm t_50, ATerm v_50, ATerm t);
static ATerm d_6 (ATerm m_34, ATerm n_34, ATerm t);
static ATerm f_6 (ATerm p_157 (ATerm), ATerm f_220, ATerm s_34, ATerm t);
static ATerm e_6 (ATerm i_34, ATerm j_34, ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm output_1_0 (ATerm i_178 (ATerm), ATerm t);
static ATerm b_47 (ATerm v_46, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_6 (ATerm o_34, ATerm t);
static ATerm h_6 (ATerm p_48, ATerm q_48, ATerm t);
static ATerm i_6 (ATerm w_50, ATerm y_50, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_48 (ATerm l_47, ATerm t);
static ATerm n_48 (ATerm p_47, ATerm q_47, ATerm r_47, ATerm t);
static ATerm o_48 (ATerm z_47, ATerm a_48, ATerm b_48, ATerm t);
static ATerm j_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm j_178 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm x_157 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm default_system_usage_2_0 (ATerm h_180 (ATerm), ATerm i_180 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm s_6 (ATerm j_71, ATerm k_71, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_6 (ATerm o_56, ATerm q_56, ATerm n_56, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_6 (ATerm v_54, ATerm w_54, ATerm t);
ATerm foldr_2_0 (ATerm u_164 (ATerm), ATerm v_164 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_175 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm t_6 (ATerm e_61, ATerm f_61, ATerm g_61, ATerm t);
ATerm lookup_table_0_1 (ATerm b_58, ATerm t);
ATerm new_hashtable_0_2 (ATerm m_61, ATerm n_61, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm m_6 (ATerm j_61, ATerm k_61, ATerm t);
static ATerm n_6 (ATerm o_61, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_158 (ATerm), ATerm t);
static ATerm u_6 (ATerm h_61, ATerm i_61, ATerm t);
static ATerm p_6 (ATerm i_58, ATerm j_58, ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm c_180 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm parse_options_3_0 (ATerm z_179 (ATerm), ATerm a_180 (ATerm), ATerm b_180 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm c_178 (ATerm), ATerm d_178 (ATerm), ATerm e_178 (ATerm), ATerm f_178 (ATerm), ATerm g_178 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm topdown_1_0 (ATerm m_151 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(m_151, t);
    return(t);
  }
  t = m_151(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm g_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm n_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(k_7);
      {
        ATerm c_0 = NULL,e_0 = NULL;
        c_0 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm o_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        e_0 = t;
        t = SSLgetAnnotations(c_0);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_7 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) q_7) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_7 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(s_7) != AT_LIST) || !(ATisEmpty(s_7))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_0;
      }
    }
  else
    {
      t = g_7;
      {
        ATerm t_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm v_7 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) v_7) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm w_7 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(u_7);
            _fail(t);
          }
        else
          {
            t = t_7;
          }
      }
    }
  return(t);
}
static ATerm q_4 (ATerm t_116, ATerm s_116, ATerm t)
{
  t = t_116;
  t = topdown_1_0(b_0, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, t_116);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,f_1 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      a_1 = ATgetArgument(t, 0);
      d_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_1;
  if(match_cons(t, sym_Match_1))
    {
      b_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_1;
  if(match_cons(t, sym_Var_1))
    {
      c_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_1;
  if(match_cons(t, sym_Seq_2))
    {
      e_1 = ATgetArgument(t, 0);
      y_0 = ATgetArgument(t, 1);
      t = e_1;
      if(match_cons(t, sym_Build_1))
        {
          f_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_1;
      if(match_cons(t, sym_Var_1))
        {
          x_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_0;
      if((c_1 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_1)), y_0);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
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
      t = f_1;
      if((c_1 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_1));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,b_2 = NULL,c_2 = NULL,h_2 = NULL,l_2 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_2 = ATgetArgument(t, 0);
      h_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_2;
  if(match_cons(t, sym_Build_1))
    {
      c_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_2;
  if(match_cons(t, sym_Seq_2))
    {
      l_2 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
      t = l_2;
      if(match_cons(t, sym_Match_1))
        {
          o_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_1;
      if((c_2 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_2), p_1);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          l_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_2;
      if((c_2 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, c_2);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_3 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_3;
  if(match_cons(t, sym_Match_1))
    {
      c_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_3;
  if(match_cons(t, sym_Seq_2))
    {
      e_3 = ATgetArgument(t, 0);
      y_2 = ATgetArgument(t, 1);
      t = e_3;
      if(match_cons(t, sym_Match_1))
        {
          x_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_2;
      if((c_3 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_3), y_2);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          e_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_3;
      if((c_3 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, c_3);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,g_4 = NULL,k_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      k_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_4;
  if(match_cons(t, sym_Build_1))
    {
      ATerm c_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_4;
  if(match_cons(t, sym_Seq_2))
    {
      v_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
      t = v_4;
      if(match_cons(t, sym_PrimT_3))
        {
          w_3 = ATgetArgument(t, 0);
          x_3 = ATgetArgument(t, 1);
          g_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, w_3, x_3, g_4), w_4);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          v_4 = ATgetArgument(t, 0);
          w_4 = ATgetArgument(t, 1);
          x_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, v_4, w_4, x_4);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL,o_6 = NULL,v_6 = NULL,w_6 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      o_6 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6;
  if(match_cons(t, sym_Build_1))
    {
      ATerm g_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_6;
  if(match_cons(t, sym_Seq_2))
    {
      w_6 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
      t = w_6;
      if(match_cons(t, sym_Build_1))
        {
          z_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_5), a_6);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          w_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, w_6);
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_8 = ATgetArgument(t, 0);
      if(((ATgetType(h_8) != AT_LIST) || !(ATisEmpty(h_8))))
        _fail(t);
      {
        ATerm i_8 = ATgetArgument(t, 1);
        if(((ATgetType(i_8) != AT_LIST) || !(ATisEmpty(i_8))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_8 = ATgetArgument(t, 0);
      if(((ATgetType(j_8) == AT_LIST) && !(ATisEmpty(j_8))))
        {
          p_8 = ATgetFirst((ATermList) j_8);
          q_8 = (ATerm) ATgetNext((ATermList) j_8);
        }
      else
        _fail(t);
      {
        ATerm k_8 = ATgetArgument(t, 1);
        if(((ATgetType(k_8) == AT_LIST) && !(ATisEmpty(k_8))))
          {
            r_8 = ATgetFirst((ATermList) k_8);
            s_8 = (ATerm) ATgetNext((ATermList) k_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_8, r_8), (ATerm) ATmakeAppl(sym__2, q_8, s_8));
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL;
  if(match_cons(t, sym__2))
    {
      v_8 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_8), v_8);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL;
  if(match_cons(t, sym__2))
    {
      x_8 = ATgetArgument(t, 0);
      y_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_8), (ATerm) ATmakeAppl(sym_Match_1, y_8));
  return(t);
}
static ATerm s_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_8 = ATgetArgument(t, 0);
      if(((ATgetType(l_8) != AT_LIST) || !(ATisEmpty(l_8))))
        _fail(t);
      {
        ATerm m_8 = ATgetArgument(t, 1);
        if(((ATgetType(m_8) != AT_LIST) || !(ATisEmpty(m_8))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_8 = ATgetArgument(t, 0);
      if(((ATgetType(n_8) == AT_LIST) && !(ATisEmpty(n_8))))
        {
          k_9 = ATgetFirst((ATermList) n_8);
          l_9 = (ATerm) ATgetNext((ATermList) n_8);
        }
      else
        _fail(t);
      {
        ATerm t_8 = ATgetArgument(t, 1);
        if(((ATgetType(t_8) == AT_LIST) && !(ATisEmpty(t_8))))
          {
            m_9 = ATgetFirst((ATermList) t_8);
            n_9 = (ATerm) ATgetNext((ATermList) t_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_9, m_9), (ATerm) ATmakeAppl(sym__2, l_9, n_9));
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL;
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_9), q_9);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  if(match_cons(t, sym__2))
    {
      s_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_9), (ATerm) ATmakeAppl(sym_Match_1, t_9));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL,l_7 = NULL,m_7 = NULL,p_7 = NULL,r_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      l_7 = ATgetArgument(t, 0);
      y_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7;
  if(match_cons(t, sym_Build_1))
    {
      m_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_7;
  if(match_cons(t, sym_Op_2))
    {
      p_7 = ATgetArgument(t, 0);
      r_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7;
  if(match_cons(t, sym_Seq_2))
    {
      z_7 = ATgetArgument(t, 0);
      j_7 = ATgetArgument(t, 1);
      {
        ATerm o_8 = NULL;
        t = z_7;
        if(match_cons(t, sym_Match_1))
          {
            a_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_8;
        if(match_cons(t, sym_Op_2))
          {
            h_7 = ATgetArgument(t, 0);
            i_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_7;
        if((p_7 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, r_7, i_7);
        t = genzip_4_0(h_0, i_0, k_0, m_0, t);
        o_8 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, p_7, r_7)), j_7));
      }
    }
  else
    {
      ATerm j_9 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          z_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_7;
      if(match_cons(t, sym_Op_2))
        {
          a_8 = ATgetArgument(t, 0);
          b_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_8;
      if((p_7 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, r_7, b_8);
      t = genzip_4_0(s_0, t_0, u_0, v_0, t);
      j_9 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_9), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, p_7, r_7)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm g_11 = NULL,l_11 = NULL,m_11 = NULL,p_11 = NULL,q_11 = NULL,s_11 = NULL,t_11 = NULL,v_11 = NULL;
  l_11 = t;
  if(match_cons(t, sym_Seq_2))
    {
      m_11 = ATgetArgument(t, 0);
      s_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11;
  if(match_cons(t, sym_Build_1))
    {
      p_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11;
  if(match_cons(t, sym_Op_2))
    {
      q_11 = ATgetArgument(t, 0);
      {
        ATerm u_8 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = s_11;
  {
    ATerm z_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            t_11 = ATgetArgument(t, 0);
            {
              ATerm c_9 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(a_9);
        t = t_11;
        if(match_cons(t, sym_Match_1))
          {
            v_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_11;
        if(match_cons(t, sym_Op_2))
          {
            g_11 = ATgetArgument(t, 0);
            {
              ATerm d_9 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_11, g_11);
        {
          ATerm g_9 = t;
          if((PushChoice() == 0))
            {
              ATerm q_0 = NULL;
              if(match_cons(t, sym__2))
                {
                  q_0 = ATgetArgument(t, 0);
                  if((q_0 != ATgetArgument(t, 1)))
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
              t = g_9;
            }
        }
        t = term_h_9;
      }
    else
      {
        t = z_8;
        if(match_cons(t, sym_Match_1))
          {
            t_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_11;
        if(match_cons(t, sym_Op_2))
          {
            v_11 = ATgetArgument(t, 0);
            {
              ATerm i_9 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_11, v_11);
        {
          ATerm o_9 = t;
          if((PushChoice() == 0))
            {
              ATerm m_1 = NULL;
              if(match_cons(t, sym__2))
                {
                  m_1 = ATgetArgument(t, 0);
                  if((m_1 != ATgetArgument(t, 1)))
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
              t = o_9;
            }
        }
        t = term_h_9;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm q_152 (ATerm), ATerm t)
{
  static ATerm b_12 (ATerm t);
  static ATerm b_12 (ATerm t)
  {
    ATerm p_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_152(t);
        LocalPopChoice(u_9);
      }
    else
      {
        t = p_9;
        t = SRTS_one(b_12, t);
      }
    return(t);
  }
  t = b_12(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,m_13 = NULL,n_13 = NULL,p_13 = NULL,q_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,a_14 = NULL,c_14 = NULL,j_14 = NULL;
  j_13 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_13 = ATgetArgument(t, 0);
      w_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_13;
  if(match_cons(t, sym_Let_2))
    {
      x_13 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
      {
        ATerm p_14 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, k_13, x_13);
        t = conc_0_0(t);
        p_14 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, p_14, c_14);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          x_13 = ATgetArgument(t, 0);
          c_14 = ATgetArgument(t, 1);
          j_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_13;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_13 = ATgetFirst((ATermList) t);
          v_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_13;
      if(match_cons(t, sym_SDefT_4))
        {
          n_13 = ATgetArgument(t, 0);
          p_13 = ATgetArgument(t, 1);
          q_13 = ATgetArgument(t, 2);
          u_13 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = p_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_13;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_13;
      if(match_cons(t, sym_SVar_1))
        {
          a_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_14;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_14;
      if((n_13 != t))
        {
          _fail(t);
        }
      t = u_13;
      {
        ATerm v_9 = t;
        if((PushChoice() == 0))
          {
            static ATerm w_0 (ATerm t);
            static ATerm w_0 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm w_9 = ATgetArgument(t, 0);
                  if(match_cons(w_9, sym_SVar_1))
                    {
                      if((n_13 != ATgetArgument(w_9, 0)))
                        {
                          _fail(ATgetArgument(w_9, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm x_9 = ATgetArgument(t, 1);
                    if(((ATgetType(x_9) != AT_LIST) || !(ATisEmpty(x_9))))
                      _fail(t);
                  }
                  {
                    ATerm y_9 = ATgetArgument(t, 2);
                    if(((ATgetType(y_9) != AT_LIST) || !(ATisEmpty(y_9))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(w_0, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = v_9;
          }
      }
      t = u_13;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,l_15 = NULL,m_15 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      l_15 = ATgetArgument(t, 0);
      t = l_15;
      if(match_cons(t, sym_Seq_2))
        {
          j_15 = ATgetArgument(t, 0);
          d_15 = ATgetArgument(t, 1);
          t = j_15;
          if(match_cons(t, sym_Where_1))
            {
              c_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_15;
          if(match_cons(t, sym_Seq_2))
            {
              e_15 = ATgetArgument(t, 0);
              i_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_15;
          if(match_cons(t, sym_Build_1))
            {
              h_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, c_15, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_15), i_15)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              j_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, j_15);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          l_15 = ATgetArgument(t, 0);
          t = l_15;
          if(match_cons(t, sym_Test_1))
            {
              j_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, j_15);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              l_15 = ATgetArgument(t, 0);
              t = l_15;
              if(match_cons(t, sym_Not_1))
                {
                  j_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, j_15);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  l_15 = ATgetArgument(t, 0);
                  m_15 = ATgetArgument(t, 1);
                  t = m_15;
                  if((l_15 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      l_15 = ATgetArgument(t, 0);
                      m_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = m_15;
                  if((l_15 != t))
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
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      j_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
      t = j_16;
      if(match_cons(t, sym_LChoice_2))
        {
          k_16 = ATgetArgument(t, 0);
          l_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, k_16, (ATerm) ATmakeAppl(sym_LChoice_2, l_16, m_16));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          j_16 = ATgetArgument(t, 0);
          m_16 = ATgetArgument(t, 1);
          t = j_16;
          if(match_cons(t, sym_Seq_2))
            {
              k_16 = ATgetArgument(t, 0);
              l_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, k_16, (ATerm) ATmakeAppl(sym_Seq_2, l_16, m_16));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              j_16 = ATgetArgument(t, 0);
              m_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_16;
          if(match_cons(t, sym_Choice_2))
            {
              k_16 = ATgetArgument(t, 0);
              l_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, k_16, (ATerm) ATmakeAppl(sym_Choice_2, l_16, m_16));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,r_17 = NULL,t_17 = NULL,u_17 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      t_17 = ATgetArgument(t, 0);
      u_17 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, t_17, u_17);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          t_17 = ATgetArgument(t, 0);
          t = t_17;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_17 = ATgetFirst((ATermList) t);
              m_17 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, l_17, (ATerm) ATmakeAppl(sym_LChoices_1, m_17));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_h_9;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              t_17 = ATgetArgument(t, 0);
              t = t_17;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_17 = ATgetFirst((ATermList) t);
                  m_17 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, l_17, (ATerm) ATmakeAppl(sym_Choices_1, m_17));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_h_9;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  t_17 = ATgetArgument(t, 0);
                  t = t_17;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      l_17 = ATgetFirst((ATermList) t);
                      m_17 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_17, (ATerm) ATmakeAppl(sym_Seqs_1, m_17));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_z_9;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      t_17 = ATgetArgument(t, 0);
                      u_17 = ATgetArgument(t, 1);
                      r_17 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, u_17, (ATerm) ATmakeAppl(sym_Op_2, term_a_10, (ATerm) ATinsert(ATinsert(ATempty, r_17), t_17)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          t_17 = ATgetArgument(t, 0);
                          u_17 = ATgetArgument(t, 1);
                          r_17 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, r_17)), t_17), (ATerm) ATmakeAppl(sym_Build_1, u_17)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              t_17 = ATgetArgument(t, 0);
                              u_17 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_17, (ATerm) ATmakeAppl(sym_Match_1, u_17));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  t_17 = ATgetArgument(t, 0);
                                  u_17 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_17), u_17);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      t_17 = ATgetArgument(t, 0);
                                      u_17 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_17), t_17);
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
static ATerm z_0 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm a_20 = NULL,h_20 = NULL,i_20 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      a_20 = ATgetArgument(t, 0);
      t = a_20;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_h_9;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          a_20 = ATgetArgument(t, 0);
          t = a_20;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_z_9;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              a_20 = ATgetArgument(t, 0);
              h_20 = ATgetArgument(t, 1);
              t = a_20;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_h_9;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  a_20 = ATgetArgument(t, 0);
                  h_20 = ATgetArgument(t, 1);
                  t = h_20;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_h_9;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      a_20 = ATgetArgument(t, 0);
                      h_20 = ATgetArgument(t, 1);
                      t = h_20;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_h_9;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          a_20 = ATgetArgument(t, 0);
                          t = a_20;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_h_9;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              a_20 = ATgetArgument(t, 0);
                              t = a_20;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_h_9;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  a_20 = ATgetArgument(t, 0);
                                  h_20 = ATgetArgument(t, 1);
                                  t = h_20;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_h_9;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      a_20 = ATgetArgument(t, 0);
                                      h_20 = ATgetArgument(t, 1);
                                      t = h_20;
                                      t = fetch_1_0(z_0, t);
                                      t = term_h_9;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          a_20 = ATgetArgument(t, 0);
                                          h_20 = ATgetArgument(t, 1);
                                          t = h_20;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = a_20;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = h_20;
                                                }
                                              else
                                                {
                                                  t = a_20;
                                                }
                                            }
                                          else
                                            {
                                              t = a_20;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = h_20;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              a_20 = ATgetArgument(t, 0);
                                              h_20 = ATgetArgument(t, 1);
                                              t = h_20;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = a_20;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = h_20;
                                                    }
                                                  else
                                                    {
                                                      t = a_20;
                                                    }
                                                }
                                              else
                                                {
                                                  t = a_20;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = h_20;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  a_20 = ATgetArgument(t, 0);
                                                  t = a_20;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_h_9;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      a_20 = ATgetArgument(t, 0);
                                                      h_20 = ATgetArgument(t, 1);
                                                      i_20 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = i_20;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_20, h_20);
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
      t = term_z_9;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          g_22 = ATgetArgument(t, 0);
          t = g_22;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_h_9;
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
                  t = term_z_9;
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
                      t = term_z_9;
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
                          t = term_z_9;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              g_22 = ATgetArgument(t, 0);
                              t = g_22;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_z_9;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  g_22 = ATgetArgument(t, 0);
                                  t = g_22;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_z_9;
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
                                  t = term_z_9;
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
  ATerm b_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(d_10);
    }
  else
    {
      t = b_10;
      {
        ATerm e_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(g_10);
          }
        else
          {
            t = e_10;
            {
              ATerm h_10 = t;
              int i_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(i_10);
                }
              else
                {
                  t = h_10;
                  {
                    ATerm j_10 = t;
                    int k_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(k_10);
                      }
                    else
                      {
                        t = j_10;
                        {
                          ATerm l_10 = t;
                          int m_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(m_10);
                            }
                          else
                            {
                              t = l_10;
                              {
                                ATerm n_10 = t;
                                int o_10 = stack_ptr;
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
                                    LocalPopChoice(o_10);
                                  }
                                else
                                  {
                                    t = n_10;
                                    {
                                      ATerm p_10 = t;
                                      int q_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(q_10);
                                        }
                                      else
                                        {
                                          t = p_10;
                                          {
                                            ATerm r_10 = t;
                                            int s_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(s_10);
                                              }
                                            else
                                              {
                                                t = r_10;
                                                {
                                                  ATerm t_10 = t;
                                                  int u_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(u_10);
                                                    }
                                                  else
                                                    {
                                                      t = t_10;
                                                      {
                                                        ATerm v_10 = t;
                                                        int w_10 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
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
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(y_10);
                                                                }
                                                              else
                                                                {
                                                                  t = x_10;
                                                                  {
                                                                    ATerm a_11 = t;
                                                                    int c_11 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(c_11);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_11;
                                                                        {
                                                                          ATerm d_11 = t;
                                                                          int f_11 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(f_11);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = d_11;
                                                                              {
                                                                                ATerm i_11 = t;
                                                                                int j_11 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(j_11);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = i_11;
                                                                                    {
                                                                                      ATerm h_23 = NULL,i_23 = NULL,l_23 = NULL,m_23 = NULL;
                                                                                      i_23 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          l_23 = ATgetArgument(t, 0);
                                                                                          m_23 = ATgetArgument(t, 1);
                                                                                          t = l_23;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              h_23 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = i_23;
                                                                                          t = q_4(h_23, m_23, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              l_23 = ATgetArgument(t, 0);
                                                                                              m_23 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = l_23;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = m_23;
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
ATerm repeat_2_0 (ATerm m_150 (ATerm), ATerm n_150 (ATerm), ATerm t)
{
  static ATerm r_23 (ATerm t);
  static ATerm r_23 (ATerm t)
  {
    ATerm r_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_150(t);
        t = r_23(t);
        LocalPopChoice(w_11);
      }
    else
      {
        t = r_11;
        t = n_150(t);
      }
    return(t);
  }
  t = r_23(t);
  return(t);
}
ATerm downup_1_0 (ATerm o_151 (ATerm), ATerm t)
{
  t = o_151(t);
  {
    static ATerm g_1 (ATerm t);
    static ATerm g_1 (ATerm t)
    {
      t = downup_1_0(o_151, t);
      return(t);
    }
    t = SRTS_all(g_1, t);
  }
  t = o_151(t);
  return(t);
}
ATerm CreateDef2_0_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL;
  t_23 = t;
  t = new_0_0(t);
  u_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_23), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, u_23, (ATerm)ATempty, (ATerm)ATempty, t_23)));
  return(t);
}
static ATerm t_24 (ATerm z_23, ATerm t)
{
  ATerm a_24 = NULL;
  t = SSL_explode_term(z_23);
  if(match_cons(t, sym__2))
    {
      ATerm y_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_24;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_24 = NULL,h_24 = NULL,i_24 = NULL;
  i_24 = t;
  if(match_cons(t, sym__2))
    {
      f_24 = ATgetArgument(t, 0);
      h_24 = ATgetArgument(t, 1);
      {
        ATerm z_11 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm h_1 (ATerm t);
            static ATerm h_1 (ATerm t)
            {
              t = h_24;
              return(t);
            }
            t = f_24;
            t = at_end_1_0(h_1, t);
            LocalPopChoice(c_12);
          }
        else
          {
            t = z_11;
            t = t_24(i_24, t);
          }
      }
    }
  else
    {
      t = t_24(i_24, t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm e_153 (ATerm), ATerm t)
{
  static ATerm u_24 (ATerm t);
  static ATerm u_24 (ATerm t)
  {
    ATerm d_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_153(t);
        LocalPopChoice(k_12);
      }
    else
      {
        t = d_12;
        t = SRTS_all(u_24, t);
      }
    return(t);
  }
  t = u_24(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_12;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm h_11 = NULL,k_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_11 = ATgetFirst((ATermList) t);
      k_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_11, k_11);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,u_11 = NULL,x_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_12 = ATgetArgument(t, 0);
      if(match_cons(v_12, sym__2))
        {
          n_11 = ATgetArgument(v_12, 0);
          o_11 = ATgetArgument(v_12, 1);
        }
      else
        _fail(t);
      {
        ATerm w_12 = ATgetArgument(t, 1);
        if(match_cons(w_12, sym__2))
          {
            u_11 = ATgetArgument(w_12, 0);
            x_11 = ATgetArgument(w_12, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_11), n_11), (ATerm) ATinsert(CheckATermList(x_11), o_11));
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm a_12 = NULL;
  a_12 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = term_z_12;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = term_c_13;
        }
      else
        {
          t = a_12;
        }
    }
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
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
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        {
          ATerm f_13 = t;
          int g_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_13 = t;
              if((PushChoice() == 0))
                {
                  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,i_2 = NULL,g_2 = NULL;
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
                  i_2 = t;
                  t = SSLsetAnnotations(i_2, m_12);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = h_13;
                }
              t = CreateDef2_0_0(t);
              LocalPopChoice(g_13);
            }
          else
            {
              t = f_13;
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
static ATerm q_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_12;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_18 = ATgetFirst((ATermList) t);
      a_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_18, a_19);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_13 = ATgetArgument(t, 0);
      if(match_cons(i_13, sym__2))
        {
          b_19 = ATgetArgument(i_13, 0);
          c_19 = ATgetArgument(i_13, 1);
        }
      else
        _fail(t);
      {
        ATerm l_13 = ATgetArgument(t, 1);
        if(match_cons(l_13, sym__2))
          {
            d_19 = ATgetArgument(l_13, 0);
            e_19 = ATgetArgument(l_13, 1);
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
static ATerm t_1 (ATerm t)
{
  ATerm f_19 = NULL;
  f_19 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = term_z_12;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = term_c_13;
        }
      else
        {
          t = f_19;
        }
    }
  {
    ATerm o_13 = t;
    int r_13 = stack_ptr;
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
        LocalPopChoice(r_13);
      }
    else
      {
        t = o_13;
        {
          ATerm s_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_13 = t;
              if((PushChoice() == 0))
                {
                  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,p_2 = NULL,m_2 = NULL;
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
                  m_2 = t;
                  t = SSLsetAnnotations(m_2, u_19);
                  w_19 = t;
                  t = s_19;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = t_19;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_CallT_3, w_19, s_19, t_19);
                  p_2 = t;
                  t = SSLsetAnnotations(p_2, q_19);
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
              t = s_13;
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
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL;
  m_38 = t;
  if(match_cons(t, sym_Rec_2))
    {
      n_38 = ATgetArgument(t, 0);
      o_38 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, n_38, (ATerm)ATempty, (ATerm)ATempty, o_38)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_38), (ATerm)ATempty, (ATerm) ATempty));
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          n_38 = ATgetArgument(t, 0);
          o_38 = ATgetArgument(t, 1);
          p_38 = ATgetArgument(t, 2);
          f_38 = ATgetArgument(t, 3);
          {
            ATerm v_38 = NULL;
            t = o_38;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = p_38;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = f_38;
            if(match_cons(t, sym_Rec_2))
              {
                g_38 = ATgetArgument(t, 0);
                h_38 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = h_38;
            {
              static ATerm i_1 (ATerm t);
              static ATerm i_1 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm b_14 = ATgetArgument(t, 0);
                    if(match_cons(b_14, sym_SVar_1))
                      {
                        if((g_38 != ATgetArgument(b_14, 0)))
                          {
                            _fail(ATgetArgument(b_14, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm d_14 = ATgetArgument(t, 1);
                      if(((ATgetType(d_14) != AT_LIST) || !(ATisEmpty(d_14))))
                        _fail(t);
                    }
                    {
                      ATerm e_14 = ATgetArgument(t, 2);
                      if(((ATgetType(e_14) != AT_LIST) || !(ATisEmpty(e_14))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_38), (ATerm)ATempty, (ATerm) ATempty);
                return(t);
              }
              t = alltd_1_0(i_1, t);
            }
            v_38 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, n_38, (ATerm)ATempty, (ATerm)ATempty, v_38);
          }
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              n_38 = ATgetArgument(t, 0);
              o_38 = ATgetArgument(t, 1);
              t = o_38;
              if(match_cons(t, sym_Seq_2))
                {
                  k_38 = ATgetArgument(t, 0);
                  l_38 = ATgetArgument(t, 1);
                  t = n_38;
                  if(match_cons(t, sym_Where_1))
                    {
                      j_38 = ATgetArgument(t, 0);
                      t = k_38;
                      if(match_cons(t, sym_Build_1))
                        {
                          i_38 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_38, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_38), l_38));
                    }
                  else
                    {
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = o_38;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Build_1))
                    {
                      k_38 = ATgetArgument(t, 0);
                      t = n_38;
                      if(match_cons(t, sym_Where_1))
                        {
                          j_38 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_38, (ATerm) ATmakeAppl(sym_Build_1, k_38));
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = o_38;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Id_0))
                        {
                          t = n_38;
                          if(match_cons(t, sym_Id_0))
                            {
                              t = n_38;
                            }
                          else
                            {
                              t = n_38;
                            }
                        }
                      else
                        {
                          t = n_38;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = o_38;
                        }
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  n_38 = ATgetArgument(t, 0);
                  o_38 = ATgetArgument(t, 1);
                  t = o_38;
                  if(match_cons(t, sym_Scope_2))
                    {
                      k_38 = ATgetArgument(t, 0);
                      l_38 = ATgetArgument(t, 1);
                      t = n_38;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          ATerm f_14 = t;
                          int g_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm k_39 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, n_38, k_38);
                              t = conc_0_0(t);
                              k_39 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, k_39, l_38);
                              LocalPopChoice(g_14);
                            }
                          else
                            {
                              t = f_14;
                              t = o_38;
                            }
                        }
                      else
                        {
                          ATerm p_39 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, n_38, k_38);
                          t = conc_0_0(t);
                          p_39 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, p_39, l_38);
                        }
                    }
                  else
                    {
                      t = n_38;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = o_38;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Thread_1))
                    {
                      n_38 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_i_14, (ATerm)ATinsert(ATempty, n_38), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          n_38 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_14, (ATerm)ATinsert(ATempty, n_38), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              n_38 = ATgetArgument(t, 0);
                              t = (ATerm) ATmakeAppl(sym_CallT_3, term_n_14, (ATerm)ATinsert(ATempty, n_38), (ATerm) ATempty);
                            }
                          else
                            {
                              if(match_cons(t, sym_All_1))
                                {
                                  n_38 = ATgetArgument(t, 0);
                                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_q_14, (ATerm)ATinsert(ATempty, n_38), (ATerm) ATempty);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Bagof_1))
                                    {
                                      n_38 = ATgetArgument(t, 0);
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_s_14, (ATerm)ATinsert(ATempty, n_38), (ATerm) ATempty);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_PrimT_3))
                                        {
                                          n_38 = ATgetArgument(t, 0);
                                          o_38 = ATgetArgument(t, 1);
                                          p_38 = ATgetArgument(t, 2);
                                          {
                                            ATerm t_14 = t;
                                            int u_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm t_5 = NULL;
                                                t = o_38;
                                                {
                                                  static ATerm f_8 (ATerm t);
                                                  static ATerm f_8 (ATerm t)
                                                  {
                                                    ATerm x_7 = NULL,d_8 = NULL,e_8 = NULL;
                                                    x_7 = t;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        d_8 = ATgetFirst((ATermList) t);
                                                        e_8 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm v_14 = t;
                                                      int w_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_9 = NULL,e_9 = NULL,f_9 = NULL,n_0 = NULL;
                                                          t = SSLgetAnnotations(x_7);
                                                          b_9 = t;
                                                          t = d_8;
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_z_12;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_Fail_0)))
                                                                _fail(t);
                                                              t = term_c_13;
                                                            }
                                                          e_9 = t;
                                                          t = e_8;
                                                          {
                                                            ATerm x_14 = t;
                                                            int y_14 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = f_8(t);
                                                                LocalPopChoice(y_14);
                                                              }
                                                            else
                                                              {
                                                                t = x_14;
                                                              }
                                                          }
                                                          f_9 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(f_9), e_9);
                                                          n_0 = t;
                                                          t = SSLsetAnnotations(n_0, b_9);
                                                          LocalPopChoice(w_14);
                                                        }
                                                      else
                                                        {
                                                          t = v_14;
                                                          {
                                                            ATerm c_10 = NULL,f_10 = NULL,f_2 = NULL;
                                                            t = SSLgetAnnotations(x_7);
                                                            c_10 = t;
                                                            t = e_8;
                                                            t = f_8(t);
                                                            f_10 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(f_10), d_8);
                                                            f_2 = t;
                                                            t = SSLsetAnnotations(f_2, c_10);
                                                          }
                                                        }
                                                    }
                                                    return(t);
                                                  }
                                                  t = f_8(t);
                                                }
                                                t_5 = t;
                                                t = (ATerm) ATmakeAppl(sym_PrimT_3, n_38, t_5, p_38);
                                                LocalPopChoice(u_14);
                                              }
                                            else
                                              {
                                                t = t_14;
                                                {
                                                  ATerm z_10 = NULL,b_11 = NULL,e_11 = NULL;
                                                  t = o_38;
                                                  t = genzip_4_0(j_1, k_1, l_1, n_1, t);
                                                  if(match_cons(t, sym__2))
                                                    {
                                                      z_10 = ATgetArgument(t, 0);
                                                      b_11 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = b_11;
                                                  t = concat_0_0(t);
                                                  e_11 = t;
                                                  {
                                                    ATerm z_14 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                          _fail(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = z_14;
                                                      }
                                                  }
                                                  t = (ATerm) ATmakeAppl(sym_Let_2, e_11, (ATerm) ATmakeAppl(sym_PrimT_3, n_38, z_10, p_38));
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              n_38 = ATgetArgument(t, 0);
                                              o_38 = ATgetArgument(t, 1);
                                              p_38 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          {
                                            ATerm k_15 = t;
                                            int n_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm t_13 = NULL;
                                                t = o_38;
                                                {
                                                  static ATerm g_15 (ATerm t);
                                                  static ATerm g_15 (ATerm t)
                                                  {
                                                    ATerm a_15 = NULL,b_15 = NULL,f_15 = NULL;
                                                    a_15 = t;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        b_15 = ATgetFirst((ATermList) t);
                                                        f_15 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm o_15 = t;
                                                      int p_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm e_16 = NULL,h_16 = NULL,o_16 = NULL,j_2 = NULL;
                                                          t = SSLgetAnnotations(a_15);
                                                          e_16 = t;
                                                          t = b_15;
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_z_12;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_Fail_0)))
                                                                _fail(t);
                                                              t = term_c_13;
                                                            }
                                                          h_16 = t;
                                                          t = f_15;
                                                          {
                                                            ATerm q_15 = t;
                                                            int r_15 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = g_15(t);
                                                                LocalPopChoice(r_15);
                                                              }
                                                            else
                                                              {
                                                                t = q_15;
                                                              }
                                                          }
                                                          o_16 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(o_16), h_16);
                                                          j_2 = t;
                                                          t = SSLsetAnnotations(j_2, e_16);
                                                          LocalPopChoice(p_15);
                                                        }
                                                      else
                                                        {
                                                          t = o_15;
                                                          {
                                                            ATerm h_17 = NULL,k_17 = NULL,k_2 = NULL;
                                                            t = SSLgetAnnotations(a_15);
                                                            h_17 = t;
                                                            t = f_15;
                                                            t = g_15(t);
                                                            k_17 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(k_17), b_15);
                                                            k_2 = t;
                                                            t = SSLsetAnnotations(k_2, h_17);
                                                          }
                                                        }
                                                    }
                                                    return(t);
                                                  }
                                                  t = g_15(t);
                                                }
                                                t_13 = t;
                                                t = (ATerm) ATmakeAppl(sym_CallT_3, n_38, t_13, p_38);
                                                LocalPopChoice(n_15);
                                              }
                                            else
                                              {
                                                t = k_15;
                                                {
                                                  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
                                                  t = o_38;
                                                  t = genzip_4_0(q_1, r_1, s_1, t_1, t);
                                                  if(match_cons(t, sym__2))
                                                    {
                                                      w_18 = ATgetArgument(t, 0);
                                                      x_18 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = x_18;
                                                  t = concat_0_0(t);
                                                  y_18 = t;
                                                  {
                                                    ATerm s_15 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                          _fail(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = s_15;
                                                      }
                                                  }
                                                  t = (ATerm) ATmakeAppl(sym_Let_2, y_18, (ATerm) ATmakeAppl(sym_CallT_3, n_38, w_18, p_38));
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
  ATerm t_15 = t;
  if((PushChoice() == 0))
    {
      ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,h_3 = NULL;
      x_40 = t;
      if(match_cons(t, sym_Var_1))
        {
          w_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_40);
      v_40 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, w_40);
      h_3 = t;
      t = SSLsetAnnotations(h_3, v_40);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_15;
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_12;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_40 = ATgetFirst((ATermList) t);
      z_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_40, z_40);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_15 = ATgetArgument(t, 0);
      if(match_cons(u_15, sym__2))
        {
          a_41 = ATgetArgument(u_15, 0);
          b_41 = ATgetArgument(u_15, 1);
        }
      else
        _fail(t);
      {
        ATerm v_15 = ATgetArgument(t, 1);
        if(match_cons(v_15, sym__2))
          {
            c_41 = ATgetArgument(v_15, 0);
            d_41 = ATgetArgument(v_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_41), a_41), (ATerm) ATinsert(CheckATermList(d_41), b_41));
  return(t);
}
static ATerm y_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_12;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_41 = ATgetFirst((ATermList) t);
      f_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_41, f_41);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_15 = ATgetArgument(t, 0);
      if(match_cons(w_15, sym__2))
        {
          g_41 = ATgetArgument(w_15, 0);
          h_41 = ATgetArgument(w_15, 1);
        }
      else
        _fail(t);
      {
        ATerm x_15 = ATgetArgument(t, 1);
        if(match_cons(x_15, sym__2))
          {
            i_41 = ATgetArgument(x_15, 0);
            j_41 = ATgetArgument(x_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_41), g_41), (ATerm) ATinsert(CheckATermList(j_41), h_41));
  return(t);
}
static ATerm y_5 (ATerm z_102, ATerm a_103, ATerm b_103, ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,j_3 = NULL;
  t = b_103;
  t = fetch_1_0(u_1, t);
  t = b_103;
  t = genzip_4_0(v_1, w_1, x_1, LiftPrimArg_0_0, t);
  u_40 = t;
  if(match_cons(t, sym__2))
    {
      q_40 = ATgetArgument(t, 0);
      r_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_40);
  p_40 = t;
  t = q_40;
  t = concat_0_0(t);
  s_40 = t;
  t = r_40;
  t = genzip_4_0(y_1, z_1, a_2, _id, t);
  t_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_40, t_40);
  j_3 = t;
  t = SSLsetAnnotations(j_3, p_40);
  if(match_cons(t, sym__2))
    {
      m_40 = ATgetArgument(t, 0);
      {
        ATerm y_15 = ATgetArgument(t, 1);
        if(match_cons(y_15, sym__2))
          {
            n_40 = ATgetArgument(y_15, 0);
            o_40 = ATgetArgument(y_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, m_40, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_40), (ATerm) ATmakeAppl(sym_CallT_3, z_102, a_103, o_40)));
  return(t);
}
ATerm genzip_4_0 (ATerm z_159 (ATerm), ATerm a_160 (ATerm), ATerm b_160 (ATerm), ATerm c_160 (ATerm), ATerm t)
{
  static ATerm t_41 (ATerm t);
  static ATerm t_41 (ATerm t)
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_159(t);
        LocalPopChoice(a_16);
      }
    else
      {
        t = z_15;
        {
          ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,r_41 = NULL,s_41 = NULL,n_3 = NULL;
          t = a_160(t);
          s_41 = t;
          if(match_cons(t, sym__2))
            {
              m_41 = ATgetArgument(t, 0);
              n_41 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_41);
          l_41 = t;
          t = m_41;
          t = c_160(t);
          o_41 = t;
          t = n_41;
          t = t_41(t);
          r_41 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_41, r_41);
          n_3 = t;
          t = SSLsetAnnotations(n_3, l_41);
          t = b_160(t);
        }
      }
    return(t);
  }
  t = t_41(t);
  return(t);
}
ATerm at_end_1_0 (ATerm m_158 (ATerm), ATerm t)
{
  static ATerm h_42 (ATerm t);
  static ATerm h_42 (ATerm t)
  {
    ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL;
    g_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_42 = ATgetFirst((ATermList) t);
        f_42 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_20 = NULL,a_21 = NULL,p_3 = NULL;
          t = SSLgetAnnotations(g_42);
          n_20 = t;
          t = f_42;
          t = h_42(t);
          a_21 = t;
          t = (ATerm) ATinsert(CheckATermList(a_21), e_42);
          p_3 = t;
          t = SSLsetAnnotations(p_3, n_20);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_42;
        t = m_158(t);
      }
    return(t);
  }
  t = h_42(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL;
  k_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_42;
    }
  else
    {
      static ATerm d_2 (ATerm t);
      static ATerm d_2 (ATerm t)
      {
        t = not_null(m_42);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_42 = ATgetFirst((ATermList) t);
          if(((m_42 != NULL) && (m_42 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_42;
      t = at_end_1_0(d_2, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm b_43 (ATerm s_42, ATerm t)
{
  ATerm u_42 = NULL;
  t = s_42;
  {
    ATerm b_16 = t;
    if((PushChoice() == 0))
      {
        ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,r_3 = NULL;
        x_42 = t;
        if(match_cons(t, sym_Var_1))
          {
            w_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_42);
        v_42 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, w_42);
        r_3 = t;
        t = SSLsetAnnotations(r_3, v_42);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_16;
      }
  }
  t = new_0_0(t);
  u_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, u_42), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_42), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_42)))), (ATerm) ATmakeAppl(sym_Var_1, u_42)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL;
  y_42 = t;
  if(match_cons(t, sym_Var_1))
    {
      z_42 = ATgetArgument(t, 0);
      {
        ATerm c_16 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_43(y_42, t);
            LocalPopChoice(d_16);
          }
        else
          {
            t = c_16;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATmakeAppl(sym_Var_1, z_42)));
          }
      }
    }
  else
    {
      t = b_43(y_42, t);
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm f_16 = t;
  if((PushChoice() == 0))
    {
      ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,t_3 = NULL;
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
      t_3 = t;
      t = SSLsetAnnotations(t_3, z_21);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_16;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_12;
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
static ATerm q_2 (ATerm t)
{
  ATerm m_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_16 = ATgetArgument(t, 0);
      if(match_cons(g_16, sym__2))
        {
          m_22 = ATgetArgument(g_16, 0);
          o_22 = ATgetArgument(g_16, 1);
        }
      else
        _fail(t);
      {
        ATerm i_16 = ATgetArgument(t, 1);
        if(match_cons(i_16, sym__2))
          {
            p_22 = ATgetArgument(i_16, 0);
            q_22 = ATgetArgument(i_16, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_22), m_22), (ATerm) ATinsert(CheckATermList(q_22), o_22));
  return(t);
}
static ATerm r_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_12;
  return(t);
}
static ATerm s_2 (ATerm t)
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
static ATerm t_2 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_16 = ATgetArgument(t, 0);
      if(match_cons(n_16, sym__2))
        {
          u_22 = ATgetArgument(n_16, 0);
          v_22 = ATgetArgument(n_16, 1);
        }
      else
        _fail(t);
      {
        ATerm p_16 = ATgetArgument(t, 1);
        if(match_cons(p_16, sym__2))
          {
            w_22 = ATgetArgument(p_16, 0);
            x_22 = ATgetArgument(p_16, 1);
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
static ATerm u_2 (ATerm t)
{
  ATerm q_16 = t;
  if((PushChoice() == 0))
    {
      ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,v_3 = NULL;
      p_24 = t;
      if(match_cons(t, sym_Var_1))
        {
          o_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_24);
      n_24 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, o_24);
      v_3 = t;
      t = SSLsetAnnotations(v_3, n_24);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_16;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_12;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_24 = ATgetFirst((ATermList) t);
      r_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_24, r_24);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_16 = ATgetArgument(t, 0);
      if(match_cons(r_16, sym__2))
        {
          v_24 = ATgetArgument(r_16, 0);
          w_24 = ATgetArgument(r_16, 1);
        }
      else
        _fail(t);
      {
        ATerm s_16 = ATgetArgument(t, 1);
        if(match_cons(s_16, sym__2))
          {
            x_24 = ATgetArgument(s_16, 0);
            y_24 = ATgetArgument(s_16, 1);
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
static ATerm a_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_12;
  return(t);
}
static ATerm f_3 (ATerm t)
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
static ATerm g_3 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_16 = ATgetArgument(t, 0);
      if(match_cons(t_16, sym__2))
        {
          b_25 = ATgetArgument(t_16, 0);
          c_25 = ATgetArgument(t_16, 1);
        }
      else
        _fail(t);
      {
        ATerm u_16 = ATgetArgument(t, 1);
        if(match_cons(u_16, sym__2))
          {
            d_25 = ATgetArgument(u_16, 0);
            e_25 = ATgetArgument(u_16, 1);
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
  ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL;
  s_45 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      t_45 = ATgetArgument(t, 0);
      u_45 = ATgetArgument(t, 1);
      r_45 = ATgetArgument(t, 2);
      {
        ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,u_3 = NULL;
        t = r_45;
        t = fetch_1_0(e_2, t);
        t = r_45;
        t = genzip_4_0(n_2, o_2, q_2, LiftPrimArg_0_0, t);
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
        t = genzip_4_0(r_2, s_2, t_2, _id, t);
        x_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_21, x_21);
        u_3 = t;
        t = SSLsetAnnotations(u_3, t_21);
        if(match_cons(t, sym__2))
          {
            q_21 = ATgetArgument(t, 0);
            {
              ATerm v_16 = ATgetArgument(t, 1);
              if(match_cons(v_16, sym__2))
                {
                  r_21 = ATgetArgument(v_16, 0);
                  s_21 = ATgetArgument(v_16, 1);
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
      ATerm x_23 = NULL,y_23 = NULL,b_24 = NULL,c_24 = NULL,e_24 = NULL,g_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,y_3 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          t_45 = ATgetArgument(t, 0);
          u_45 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_45;
      t = fetch_1_0(u_2, t);
      t = u_45;
      t = genzip_4_0(v_2, w_2, z_2, LiftPrimArg_0_0, t);
      m_24 = t;
      if(match_cons(t, sym__2))
        {
          e_24 = ATgetArgument(t, 0);
          g_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_24);
      c_24 = t;
      t = e_24;
      t = concat_0_0(t);
      k_24 = t;
      t = g_24;
      t = genzip_4_0(a_3, f_3, g_3, _id, t);
      l_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_24, l_24);
      y_3 = t;
      t = SSLsetAnnotations(y_3, c_24);
      if(match_cons(t, sym__2))
        {
          x_23 = ATgetArgument(t, 0);
          {
            ATerm w_16 = ATgetArgument(t, 1);
            if(match_cons(w_16, sym__2))
              {
                y_23 = ATgetArgument(w_16, 0);
                b_24 = ATgetArgument(w_16, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, x_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_23), (ATerm) ATmakeAppl(sym_PrimT_3, t_45, (ATerm)ATempty, b_24)));
    }
  return(t);
}
ATerm downup2_2_0 (ATerm r_151 (ATerm), ATerm s_151 (ATerm), ATerm t)
{
  t = r_151(t);
  {
    static ATerm i_3 (ATerm t);
    static ATerm i_3 (ATerm t)
    {
      t = downup2_2_0(r_151, s_151, t);
      return(t);
    }
    t = SRTS_all(i_3, t);
  }
  t = s_151(t);
  return(t);
}
static ATerm c_6 (ATerm t_50, ATerm v_50, ATerm t)
{
  ATerm x_45 = NULL;
  t = SSL_fputc(t_50, v_50);
  x_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_45);
  return(t);
}
static ATerm d_6 (ATerm m_34, ATerm n_34, ATerm t)
{
  ATerm y_45 = NULL;
  t = SSL_write_term_to_stream_text(m_34, n_34);
  y_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_45);
  return(t);
}
static ATerm f_6 (ATerm p_157 (ATerm), ATerm f_220, ATerm s_34, ATerm t)
{
  ATerm z_45 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_220, term_x_16);
  t = j_6(t);
  z_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_45, s_34);
  t = p_157(t);
  t = fclose_0_0(t);
  t = s_34;
  return(t);
}
static ATerm e_6 (ATerm i_34, ATerm j_34, ATerm t)
{
  ATerm a_46 = NULL;
  t = SSL_write_term_to_stream_baf(i_34, j_34);
  a_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_46);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_16 = ATgetArgument(t, 0);
      if(match_cons(y_16, sym_Stream_1))
        {
          h_46 = ATgetArgument(y_16, 0);
        }
      else
        _fail(t);
      i_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(h_46, i_46, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_16 = ATgetArgument(t, 0);
      if(match_cons(z_16, sym_Stream_1))
        {
          m_46 = ATgetArgument(z_16, 0);
        }
      else
        _fail(t);
      n_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(m_46, n_46, t);
  j_46 = t;
  t = term_a_17;
  k_46 = t;
  t = j_46;
  if(match_cons(t, sym_Stream_1))
    {
      l_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_17, j_46);
  t = c_6(k_46, l_46, t);
  return(t);
}
ATerm output_1_0 (ATerm i_178 (ATerm), ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL;
  t = i_178(t);
  c_46 = t;
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_46 = NULL,e_46 = NULL;
        t = term_d_17;
        d_46 = t;
        t = term_e_17;
        e_46 = t;
        t = term_f_17;
        t = p_6(d_46, e_46, t);
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        t = term_g_17;
      }
  }
  b_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_46, c_46);
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_46 = NULL,g_46 = NULL;
        t = term_d_17;
        f_46 = t;
        t = term_n_17;
        g_46 = t;
        t = term_o_17;
        t = p_6(f_46, g_46, t);
        t = (ATerm) ATmakeAppl(sym__2, b_46, c_46);
        LocalPopChoice(j_17);
        if(match_cons(t, sym__2))
          {
            ATerm p_17 = ATgetArgument(t, 0);
            ATerm q_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_6(k_3, b_46, c_46, t);
      }
    else
      {
        t = i_17;
        if(match_cons(t, sym__2))
          {
            ATerm s_17 = ATgetArgument(t, 0);
            ATerm v_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_6(l_3, b_46, c_46, t);
      }
  }
  return(t);
}
static ATerm b_47 (ATerm v_46, ATerm t)
{
  t = SSL_fclose(v_46);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL;
  z_46 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_46 = ATgetArgument(t, 0);
      {
        ATerm w_17 = t;
        int x_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_46);
            LocalPopChoice(x_17);
          }
        else
          {
            t = w_17;
            t = b_47(z_46, t);
          }
      }
    }
  else
    {
      t = b_47(z_46, t);
    }
  return(t);
}
static ATerm g_6 (ATerm o_34, ATerm t)
{
  t = SSL_read_term_from_stream(o_34);
  return(t);
}
static ATerm h_6 (ATerm p_48, ATerm q_48, ATerm t)
{
  t = SSL_strcat(p_48, q_48);
  return(t);
}
static ATerm i_6 (ATerm w_50, ATerm y_50, ATerm t)
{
  ATerm c_47 = NULL;
  t = SSL_fopen(w_50, y_50);
  c_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_47);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_47 = NULL;
  t = SSL_stdin_stream();
  d_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_47);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_47 = NULL;
  t = SSL_stdout_stream();
  e_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_47);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_47 = NULL;
  t = SSL_stderr_stream();
  f_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_47);
  return(t);
}
static ATerm m_48 (ATerm l_47, ATerm t)
{
  ATerm m_47 = NULL;
  t = SSL_explode_term(l_47);
  if(match_cons(t, sym__2))
    {
      ATerm y_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_17 = ATgetArgument(t, 1);
        if(((ATgetType(z_17) == AT_LIST) && !(ATisEmpty(z_17))))
          {
            m_47 = ATgetFirst((ATermList) z_17);
            {
              ATerm a_18 = (ATerm) ATgetNext((ATermList) z_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_47;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_47;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_47;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_47;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_48 (ATerm p_47, ATerm q_47, ATerm r_47, ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,x_47 = NULL,d_4 = NULL;
  t = SSLgetAnnotations(r_47);
  u_47 = t;
  t = p_47;
  if(match_cons(t, sym_Path_1))
    {
      x_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_47, q_47);
  d_4 = t;
  t = SSLsetAnnotations(d_4, u_47);
  if(match_cons(t, sym__2))
    {
      s_47 = ATgetArgument(t, 0);
      t_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(s_47, t_47, t);
  return(t);
}
static ATerm o_48 (ATerm z_47, ATerm a_48, ATerm b_48, ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL,h_48 = NULL,e_4 = NULL;
  t = SSLgetAnnotations(b_48);
  e_48 = t;
  t = SSL_is_string(z_47);
  h_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_48, a_48);
  e_4 = t;
  t = SSLsetAnnotations(e_4, e_48);
  if(match_cons(t, sym__2))
    {
      c_48 = ATgetArgument(t, 0);
      d_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(c_48, d_48, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL;
  j_48 = t;
  if(match_cons(t, sym__2))
    {
      k_48 = ATgetArgument(t, 0);
      l_48 = ATgetArgument(t, 1);
      {
        ATerm b_18 = t;
        int c_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_48(j_48, t);
            LocalPopChoice(c_18);
          }
        else
          {
            t = b_18;
            {
              ATerm d_18 = t;
              int e_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_48(k_48, l_48, j_48, t);
                  LocalPopChoice(e_18);
                }
              else
                {
                  t = d_18;
                  t = o_48(k_48, l_48, j_48, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_48(j_48, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,z_48 = NULL;
  z_48 = t;
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_48, term_h_18);
        t = j_6(t);
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        {
          ATerm r_25 = NULL,s_25 = NULL;
          t = term_i_18;
          s_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_18, z_48);
          t = h_6(s_25, z_48, t);
          r_25 = t;
          t = SSL_perror(r_25);
          _fail(t);
        }
      }
  }
  t_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_6(u_48, t);
  s_48 = t;
  t = t_48;
  t = fclose_0_0(t);
  t = s_48;
  return(t);
}
ATerm input_1_0 (ATerm j_178 (ATerm), ATerm t)
{
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_49 = NULL,d_49 = NULL;
      t = term_d_17;
      c_49 = t;
      t = term_l_18;
      d_49 = t;
      t = term_m_18;
      t = p_6(c_49, d_49, t);
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
      t = term_n_18;
    }
  t = ReadFromFile_0_0(t);
  t = j_178(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL;
  t = term_d_17;
  e_49 = t;
  t = term_o_18;
  f_49 = t;
  t = term_p_18;
  t = p_6(e_49, f_49, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL;
  h_49 = t;
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_49;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_18 = ATgetFirst((ATermList) t);
                ATerm t_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_49;
          }
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        t = (ATerm) ATinsert(ATempty, h_49);
      }
  }
  i_49 = t;
  t = term_g_17;
  j_49 = t;
  t = SSL_printnl(j_49, i_49);
  t = h_49;
  return(t);
}
ATerm map_1_0 (ATerm x_157 (ATerm), ATerm t)
{
  static ATerm b_50 (ATerm t);
  static ATerm b_50 (ATerm t)
  {
    ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL;
    y_49 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_49;
      }
    else
      {
        ATerm x_25 = NULL,a_26 = NULL,b_26 = NULL,j_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_49 = ATgetFirst((ATermList) t);
            a_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_49);
        x_25 = t;
        t = z_49;
        t = x_157(t);
        a_26 = t;
        t = a_50;
        t = b_50(t);
        b_26 = t;
        t = (ATerm) ATinsert(CheckATermList(b_26), a_26);
        j_4 = t;
        t = SSLsetAnnotations(j_4, x_25);
      }
    return(t);
  }
  t = b_50(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_50 = ATgetFirst((ATermList) t);
      f_50 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_50 = NULL,k_50 = NULL;
        static ATerm m_3 (ATerm t);
        static ATerm m_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_50)), not_null(k_50));
          return(t);
        }
        t = f_50;
        t = r_0(t);
        if(((j_50 != NULL) && (j_50 != t)))
          _fail(t);
        else
          j_50 = t;
        t = e_50;
        t = p_0(t);
        if(((k_50 != NULL) && (k_50 != t)))
          _fail(t);
        else
          k_50 = t;
        t = f_50;
        t = reverse_acc_2_0(p_0, m_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_18;
      t = r_0(t);
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm u_50 = NULL,x_50 = NULL,a_51 = NULL,m_4 = NULL;
  a_51 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_51);
  u_50 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_50);
  m_4 = t;
  t = SSLsetAnnotations(m_4, u_50);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm f_51 = NULL;
  f_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_51), term_v_18);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm h_180 (ATerm), ATerm i_180 (ATerm), ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL;
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_50 = NULL,s_50 = NULL;
      t = term_d_17;
      r_50 = t;
      t = term_o_18;
      s_50 = t;
      t = term_p_18;
      t = p_6(r_50, s_50, t);
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
      t = fetch_1_0(o_3, t);
    }
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_180(t);
        t = echo_0_0(t);
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
      }
  }
  t = term_z_19;
  t = echo_0_0(t);
  t = term_b_20;
  p_50 = t;
  t = term_c_20;
  q_50 = t;
  t = term_d_20;
  t = p_6(p_50, q_50, t);
  t = reverse_acc_2_0(_id, q_3, t);
  t = map_1_0(s_3, t);
  t = term_e_20;
  t = echo_0_0(t);
  {
    ATerm f_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_180(t);
        {
          ATerm j_20 = t;
          int k_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_51 = NULL;
              g_51 = t;
              t = SSL_is_string(g_51);
              t = g_51;
              LocalPopChoice(k_20);
              {
                ATerm h_51 = NULL;
                h_51 = t;
                t = (ATerm) ATinsert(ATempty, h_51);
              }
            }
          else
            {
              t = j_20;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(g_20);
      }
    else
      {
        t = f_20;
      }
  }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL,o_4 = NULL;
  q_51 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_51);
  o_51 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_51);
  o_4 = t;
  t = SSLsetAnnotations(o_4, o_51);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_51 = NULL;
  l_51 = t;
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_51 = NULL,n_51 = NULL;
        t = term_d_17;
        m_51 = t;
        t = term_o_18;
        n_51 = t;
        t = term_p_18;
        t = p_6(m_51, n_51, t);
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = fetch_1_0(z_3, t);
      }
  }
  t = l_51;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm s_51 = NULL;
  s_51 = t;
  if(match_string(t, "-k"))
    {
      t = s_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_51;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL;
  t_51 = t;
  t = SSL_string_to_int(t_51);
  u_51 = t;
  t = term_o_20;
  v_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_20, u_51);
  t = s_6(v_51, u_51, t);
  t = t_51;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_p_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_4, b_4, c_4, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm x_51 = NULL;
  x_51 = t;
  if(match_string(t, "-S"))
    {
      t = x_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_51;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL;
  t = term_q_20;
  y_51 = t;
  t = term_r_20;
  z_51 = t;
  t = term_s_20;
  t = s_6(y_51, z_51, t);
  t = term_t_20;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_u_20;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL;
  a_52 = t;
  t = SSL_string_to_int(a_52);
  b_52 = t;
  t = term_q_20;
  c_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_20, b_52);
  t = s_6(c_52, b_52, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_52);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_v_20;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm d_52 = NULL,f_52 = NULL;
  t = term_w_20;
  d_52 = t;
  t = term_u_18;
  f_52 = t;
  t = term_x_20;
  t = s_6(d_52, f_52, t);
  t = term_y_20;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_4, h_4, i_4, t);
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_4, n_4, p_4, t);
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            t = Option_3_0(r_4, y_4, z_4, t);
          }
      }
    }
  return(t);
}
static ATerm s_6 (ATerm j_71, ATerm k_71, ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL;
  t = term_d_17;
  g_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_17, j_71, k_71);
  t = lookup_table_0_1(g_52, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(j_71, k_71, h_52, t);
  t = (ATerm) ATmakeAppl(sym__3, term_d_17, j_71, k_71);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
      t = term_u_18;
      t = g_0(t);
      n_52 = t;
      t = term_b_20;
      o_52 = t;
      t = term_c_20;
      p_52 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_20, term_c_20, n_52);
      t = q_6(o_52, p_52, n_52, t);
      _fail(t);
    }
  else
    {
      ATerm s_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_52 = ATgetFirst((ATermList) t);
          m_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_52;
      t = d_0(t);
      t = term_u_18;
      t = f_0(t);
      s_52 = t;
      t = (ATerm) ATinsert(CheckATermList(m_52), s_52);
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm u_52 = NULL;
  u_52 = t;
  if(match_string(t, "-o"))
    {
      t = u_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_52;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL;
  v_52 = t;
  t = term_e_17;
  w_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_17, v_52);
  t = s_6(w_52, v_52, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_52);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_f_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, b_5, d_5, t);
  return(t);
}
static ATerm q_6 (ATerm o_56, ATerm q_56, ATerm n_56, ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL;
  y_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_56, q_56);
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_21 = ATgetArgument(t, 0);
            ATerm j_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_56, q_56);
        t = p_6(o_56, q_56, t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = (ATerm) ATempty;
      }
  }
  z_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_56, q_56, (ATerm) ATinsert(CheckATermList(z_52), n_56));
  t = lookup_table_0_1(o_56, t);
  c_53 = t;
  t = (ATerm) ATinsert(CheckATermList(z_52), n_56);
  a_53 = t;
  t = c_53;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(q_56, a_53, b_53, t);
  t = y_52;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL;
      t = term_u_18;
      t = o_0(t);
      n_53 = t;
      t = term_b_20;
      o_53 = t;
      t = term_c_20;
      p_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_20, term_c_20, n_53);
      t = q_6(o_53, p_53, n_53, t);
      _fail(t);
    }
  else
    {
      ATerm t_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_53 = ATgetFirst((ATermList) t);
          k_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_53;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_53 = ATgetFirst((ATermList) t);
          m_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_53;
      t = j_0(t);
      t = l_53;
      t = l_0(t);
      t_53 = t;
      t = (ATerm) ATinsert(CheckATermList(m_53), t_53);
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm v_53 = NULL;
  v_53 = t;
  if(match_string(t, "-i"))
    {
      t = v_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_53;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL;
  w_53 = t;
  t = term_l_18;
  x_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_18, w_53);
  t = s_6(x_53, w_53, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_53);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_k_21;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_5, h_5, i_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_18;
  t = whoami_0_0(t);
  y_53 = t;
  t = term_l_21;
  a_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_21), y_53);
  b_54 = t;
  t = SSL_printnl(a_54, b_54);
  t = term_n_21;
  z_53 = t;
  t = SSL_exit(z_53);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL;
  t = term_d_17;
  c_54 = t;
  t = term_o_18;
  d_54 = t;
  t = term_p_18;
  t = p_6(c_54, d_54, t);
  return(t);
}
static ATerm k_6 (ATerm v_54, ATerm w_54, ATerm t)
{
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_54, w_54);
      LocalPopChoice(p_21);
    }
  else
    {
      t = o_21;
      t = SSL_addr(v_54, w_54);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_164 (ATerm), ATerm v_164 (ATerm), ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
  f_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_54;
      t = u_164(t);
    }
  else
    {
      ATerm k_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_54 = ATgetFirst((ATermList) t);
          h_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_54;
      t = foldr_2_0(u_164, v_164, t);
      k_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_54, k_54);
      t = v_164(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_r_20;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL;
  if(match_cons(t, sym__2))
    {
      k_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(k_26, l_26, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_54 = NULL,g_26 = NULL,h_26 = NULL;
  t = times_0_0(t);
  h_26 = t;
  t = SSL_explode_term(h_26);
  if(match_cons(t, sym__2))
    {
      ATerm f_22 = ATgetArgument(t, 0);
      g_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_26;
  t = foldr_2_0(j_5, k_5, t);
  n_54 = t;
  t = SSL_TicksToSeconds(n_54);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL;
  a_55 = t;
  if(match_cons(t, sym__2))
    {
      b_55 = ATgetArgument(t, 0);
      c_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_55;
        if((b_55 != t))
          {
            _fail(t);
          }
        t = a_55;
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        t = (ATerm) ATmakeAppl(sym__2, b_55, c_55);
        {
          ATerm j_22 = t;
          int k_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_55, c_55);
              LocalPopChoice(k_22);
            }
          else
            {
              t = j_22;
              t = SSL_gtr(b_55, c_55);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_55, c_55);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_175 (ATerm), ATerm t)
{
  ATerm g_55 = NULL;
  g_55 = t;
  {
    ATerm l_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL;
        t = term_d_17;
        j_55 = t;
        t = term_q_20;
        k_55 = t;
        t = term_r_22;
        t = p_6(j_55, k_55, t);
        i_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_55, term_n_21);
        t = geq_0_0(t);
        t = g_55;
        t = e_175(t);
        LocalPopChoice(n_22);
      }
    else
      {
        t = l_22;
        t = g_55;
      }
  }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL,p_55 = NULL,q_55 = NULL;
  t = run_time_0_0(t);
  m_55 = t;
  t = term_u_18;
  t = whoami_0_0(t);
  n_55 = t;
  t = term_l_21;
  p_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_22), m_55), term_y_22), n_55);
  q_55 = t;
  t = SSL_printnl(p_55, q_55);
  t = (ATerm) ATmakeAppl(sym__2, term_l_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_22), m_55), term_y_22), n_55));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_20;
  r_55 = t;
  t = SSL_exit(r_55);
  return(t);
}
static ATerm t_6 (ATerm e_61, ATerm f_61, ATerm g_61, ATerm t)
{
  ATerm s_55 = NULL;
  t = SSL_hashtable_put(g_61, e_61, f_61);
  s_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_55);
  return(t);
}
ATerm lookup_table_0_1 (ATerm b_58, ATerm t)
{
  ATerm c_56 = NULL;
  t = table_hashtable_0_0(t);
  c_56 = t;
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_26 = NULL;
        t = c_56;
        if(match_cons(t, sym_Hashtable_1))
          {
            w_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_6(b_58, w_26, t);
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        {
          ATerm b_27 = NULL;
          t = b_58;
          t = table_create_0_0(t);
          t = c_56;
          if(match_cons(t, sym_Hashtable_1))
            {
              b_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_6(b_58, b_27, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_61, ATerm n_61, ATerm t)
{
  ATerm f_56 = NULL;
  t = SSL_hashtable_create(m_61, n_61);
  f_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_56);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL,k_56 = NULL,l_56 = NULL;
  g_56 = t;
  t = term_c_23;
  k_56 = t;
  t = term_f_23;
  l_56 = t;
  t = g_56;
  t = new_hashtable_0_2(k_56, l_56, t);
  h_56 = t;
  t = g_56;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(g_56, h_56, i_56, t);
  t = g_56;
  return(t);
}
static ATerm m_6 (ATerm j_61, ATerm k_61, ATerm t)
{
  ATerm m_56 = NULL;
  t = SSL_hashtable_remove(k_61, j_61);
  m_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_56);
  return(t);
}
static ATerm n_6 (ATerm o_61, ATerm t)
{
  ATerm p_56 = NULL;
  t = SSL_hashtable_destroy(o_61);
  p_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_56);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm r_56 = NULL;
  t = SSL_table_hashtable();
  r_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_56);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL;
  s_56 = t;
  t = table_hashtable_0_0(t);
  t_56 = t;
  t = lookup_table_0_1(s_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(v_56, t);
  t = t_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(s_56, u_56, t);
  t = s_56;
  return(t);
}
ATerm fetch_1_0 (ATerm f_158 (ATerm), ATerm t)
{
  static ATerm s_57 (ATerm t);
  static ATerm s_57 (ATerm t)
  {
    ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL;
    p_57 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_57 = ATgetFirst((ATermList) t);
        r_57 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_23 = t;
      int j_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_27 = NULL,j_27 = NULL,s_4 = NULL;
          t = SSLgetAnnotations(p_57);
          g_27 = t;
          t = q_57;
          t = f_158(t);
          j_27 = t;
          t = (ATerm) ATinsert(CheckATermList(r_57), j_27);
          s_4 = t;
          t = SSLsetAnnotations(s_4, g_27);
          LocalPopChoice(j_23);
        }
      else
        {
          t = g_23;
          {
            ATerm r_27 = NULL,u_27 = NULL,t_4 = NULL;
            t = SSLgetAnnotations(p_57);
            r_27 = t;
            t = r_57;
            t = s_57(t);
            u_27 = t;
            t = (ATerm) ATinsert(CheckATermList(u_27), q_57);
            t_4 = t;
            t = SSLsetAnnotations(t_4, r_27);
          }
        }
    }
    return(t);
  }
  t = s_57(t);
  return(t);
}
static ATerm u_6 (ATerm h_61, ATerm i_61, ATerm t)
{
  t = SSL_hashtable_get(i_61, h_61);
  return(t);
}
static ATerm p_6 (ATerm i_58, ATerm j_58, ATerm t)
{
  ATerm v_57 = NULL;
  t = lookup_table_0_1(i_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_6(j_58, v_57, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL;
  t = term_k_23;
  x_57 = t;
  t = term_u_18;
  y_57 = t;
  t = term_n_23;
  t = s_6(x_57, y_57, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_o_23;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL,f_58 = NULL,g_58 = NULL;
  t = term_k_23;
  f_58 = t;
  t = term_u_18;
  g_58 = t;
  t = term_n_23;
  t = s_6(f_58, g_58, t);
  t = term_p_23;
  z_57 = t;
  t = term_u_18;
  a_58 = t;
  t = term_q_23;
  t = s_6(z_57, a_58, t);
  t = term_s_23;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_v_23;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_23 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_5, n_5, o_5, t);
      LocalPopChoice(d_24);
    }
  else
    {
      t = w_23;
      t = Option_3_0(p_5, q_5, r_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t)
{
  ATerm h_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,c_5 = NULL;
  o_58 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_58 = ATgetFirst((ATermList) t);
      l_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_58);
  h_58 = t;
  t = k_58;
  t = r_118(t);
  m_58 = t;
  t = l_58;
  t = s_118(t);
  n_58 = t;
  t = (ATerm) ATinsert(CheckATermList(n_58), m_58);
  c_5 = t;
  t = SSLsetAnnotations(c_5, h_58);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_180 (ATerm), ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,y_58 = NULL,z_58 = NULL,e_5 = NULL;
  t_58 = t;
  {
    ATerm j_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_25;
        t = c_180(t);
        LocalPopChoice(s_24);
      }
    else
      {
        t = j_24;
      }
  }
  t = t_58;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_58 = ATgetFirst((ATermList) t);
      w_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_58);
  u_58 = t;
  t = term_o_18;
  z_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_18, v_58);
  t = s_6(z_58, v_58, t);
  t = w_58;
  {
    static ATerm j_59 (ATerm t);
    static ATerm j_59 (ATerm t)
    {
      ATerm g_25 = t;
      int h_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_25 = t;
          int j_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_59 = NULL;
              c_59 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_59;
              LocalPopChoice(j_25);
            }
          else
            {
              t = i_25;
              t = c_180(t);
              t = Cons_2_0(_id, j_59, t);
            }
          LocalPopChoice(h_25);
        }
      else
        {
          t = g_25;
          {
            ATerm f_59 = NULL,g_59 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_59 = ATgetFirst((ATermList) t);
                g_59 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_59), (ATerm) ATmakeAppl(sym_Undefined_1, f_59));
          }
        }
      return(t);
    }
    t = j_59(t);
  }
  y_58 = t;
  t = (ATerm) ATinsert(CheckATermList(y_58), (ATerm) ATmakeAppl(sym_Program_1, v_58));
  e_5 = t;
  t = SSLsetAnnotations(e_5, u_58);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm w_59 = NULL;
  w_59 = t;
  if(match_string(t, "--help"))
    {
      t = w_59;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_59;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_59;
        }
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL;
  t = term_k_25;
  x_59 = t;
  t = term_u_18;
  y_59 = t;
  t = term_l_25;
  t = s_6(x_59, y_59, t);
  t = term_m_25;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_n_25;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm z_179 (ATerm), ATerm a_180 (ATerm), ATerm b_180 (ATerm), ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL;
  q_59 = t;
  t = term_b_20;
  r_59 = t;
  t = term_o_25;
  t = lookup_table_0_1(r_59, t);
  v_59 = t;
  t = term_c_20;
  s_59 = t;
  t = (ATerm) ATempty;
  t_59 = t;
  t = v_59;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(s_59, t_59, u_59, t);
  t = q_59;
  {
    static ATerm s_5 (ATerm t);
    static ATerm s_5 (ATerm t)
    {
      ATerm p_25 = t;
      int q_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_179(t);
          LocalPopChoice(q_25);
        }
      else
        {
          t = p_25;
          {
            ATerm t_25 = t;
            int u_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_5, v_5, w_5, t);
                LocalPopChoice(u_25);
              }
            else
              {
                t = t_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_5, t);
  }
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_60 = NULL;
        j_60 = t;
        {
          ATerm y_25 = t;
          int z_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_28 = NULL;
              t = j_60;
              {
                ATerm c_26 = t;
                int d_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_28 = NULL,h_28 = NULL;
                    t = term_d_17;
                    d_28 = t;
                    t = term_k_25;
                    h_28 = t;
                    t = term_e_26;
                    t = p_6(d_28, h_28, t);
                    LocalPopChoice(d_26);
                  }
                else
                  {
                    t = c_26;
                    t = fetch_1_0(x_5, t);
                  }
              }
              t = j_60;
              t = a_180(t);
              t = term_r_20;
              c_28 = t;
              t = SSL_exit(c_28);
              LocalPopChoice(z_25);
            }
          else
            {
              t = y_25;
              {
                ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
                t = term_d_17;
                o_28 = t;
                t = term_k_23;
                p_28 = t;
                t = term_f_26;
                t = p_6(o_28, p_28, t);
                t = j_60;
                t = b_180(t);
                t = term_r_20;
                n_28 = t;
                t = SSL_exit(n_28);
              }
            }
        }
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        {
          ATerm i_26 = t;
          int j_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL;
              static ATerm b_6 (ATerm t);
              static ATerm b_6 (ATerm t)
              {
                ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL,g_5 = NULL;
                p_60 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    o_60 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_60);
                n_60 = t;
                t = o_60;
                if(((o_59 != NULL) && (o_59 != t)))
                  _fail(t);
                else
                  o_59 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, o_60);
                g_5 = t;
                t = SSLsetAnnotations(g_5, n_60);
                return(t);
              }
              t = fetch_1_0(b_6, t);
              t = term_l_21;
              l_60 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_59)), term_m_26);
              m_60 = t;
              t = SSL_printnl(l_60, m_60);
              t = (ATerm) ATmakeAppl(sym__2, term_l_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_59)), term_m_26));
              t = a_180(t);
              t = term_n_21;
              k_60 = t;
              t = SSL_exit(k_60);
              LocalPopChoice(j_26);
            }
          else
            {
              t = i_26;
            }
        }
      }
  }
  p_59 = t;
  t = term_b_20;
  t = table_destroy_0_0(t);
  t = p_59;
  return(t);
}
ATerm option_wrap_5_0 (ATerm c_178 (ATerm), ATerm d_178 (ATerm), ATerm e_178 (ATerm), ATerm f_178 (ATerm), ATerm g_178 (ATerm), ATerm t)
{
  ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL;
  t = parse_options_3_0(c_178, d_178, e_178, t);
  u_60 = t;
  t = term_n_26;
  t = table_create_0_0(t);
  t = term_n_26;
  v_60 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_26, term_o_26, u_60);
  t = lookup_table_0_1(v_60, t);
  y_60 = t;
  t = term_o_26;
  w_60 = t;
  t = y_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(w_60, u_60, x_60, t);
  t = u_60;
  t = f_178(t);
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_178(t);
        t = report_success_0_0(t);
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(s_26);
    }
  else
    {
      t = r_26;
      {
        ATerm t_26 = t;
        int u_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(u_26);
          }
        else
          {
            t = t_26;
            {
              ATerm v_26 = t;
              int x_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(x_6, y_6, z_6, t);
                  LocalPopChoice(x_26);
                }
              else
                {
                  t = v_26;
                  {
                    ATerm y_26 = t;
                    int z_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(z_26);
                      }
                    else
                      {
                        t = y_26;
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
static ATerm r_6 (ATerm t)
{
  t = input_1_0(a_7, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm l_61 = NULL,p_61 = NULL;
  t = term_n_17;
  l_61 = t;
  t = term_u_18;
  p_61 = t;
  t = term_a_27;
  t = s_6(l_61, p_61, t);
  t = term_c_27;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_d_27;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = output_1_0(b_7, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = downup2_2_0(c_7, d_7, t);
  t = downup_1_0(f_7, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = repeat_2_0(e_7, _id, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = repeat_2_0(Canon_0_0, _id, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Canon_0_0(t);
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      {
        ATerm h_27 = t;
        int i_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            LocalPopChoice(i_27);
          }
        else
          {
            t = h_27;
            {
              ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL;
              r_61 = t;
              if(match_cons(t, sym_CallT_3))
                {
                  s_61 = ATgetArgument(t, 0);
                  t_61 = ATgetArgument(t, 1);
                  u_61 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = r_61;
              t = y_5(s_61, t_61, u_61, t);
            }
          }
      }
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(l_6, default_system_usage_0_0, default_system_about_0_0, _id, r_6, t);
  return(t);
}

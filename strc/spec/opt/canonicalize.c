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
ATerm term_d_28;
ATerm term_i_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_y_26;
ATerm term_v_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_o_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_w_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_h_23;
ATerm term_d_23;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_g_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_x_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_c_19;
ATerm term_z_18;
ATerm term_w_18;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_q_14;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_o_10;
ATerm term_z_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_p_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_d_8;
ATerm term_c_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_l_8);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym__2, term_u_8, term_v_8);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_CallT_3, term_x_14, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_CallT_3, term_b_15, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_thread", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_some", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_one", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_16);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_all", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS_bagof", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_16);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_x_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym__2, term_x_20, term_n_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym__2, term_s_21, term_c_8);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym__2, term_m_23, term_c_8);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_w_23, term_c_8);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym__2, term_t_24, term_c_8);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__3, term_u_8, term_v_8, (ATerm) ATempty);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_t_24);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_m_23);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym__2, term_y_26, term_c_8);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm map_1_0 (ATerm q_147 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm g_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm p_168 (ATerm), ATerm q_168 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm e_141 (ATerm), ATerm t);
static ATerm a_1 (ATerm t);
static ATerm u_4 (ATerm e_107, ATerm d_107, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm i_142 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm e_140 (ATerm), ATerm f_140 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm g_141 (ATerm), ATerm t);
ATerm CreateDef2_0_0 (ATerm t);
static ATerm z_28 (ATerm p_28, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm w_142 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm Canon_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm c_6 (ATerm o_93, ATerm p_93, ATerm q_93, ATerm t);
ATerm genzip_4_0 (ATerm u_149 (ATerm), ATerm v_149 (ATerm), ATerm w_149 (ATerm), ATerm x_149 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm h_148 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm f_46 (ATerm w_45, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm downup2_2_0 (ATerm j_141 (ATerm), ATerm k_141 (ATerm), ATerm t);
static ATerm h_6 (ATerm i_50, ATerm j_50, ATerm t);
static ATerm i_6 (ATerm w_33, ATerm x_33, ATerm t);
static ATerm k_6 (ATerm h_147 (ATerm), ATerm l_207, ATerm c_34, ATerm t);
static ATerm j_6 (ATerm s_33, ATerm t_33, ATerm t);
static ATerm x_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm e_165 (ATerm), ATerm t);
static ATerm x_51 (ATerm r_51, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_6 (ATerm y_33, ATerm t);
static ATerm m_6 (ATerm j_48, ATerm k_48, ATerm t);
static ATerm n_6 (ATerm k_50, ATerm l_50, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_53 (ATerm h_52, ATerm t);
static ATerm j_53 (ATerm l_52, ATerm m_52, ATerm n_52, ATerm t);
static ATerm k_53 (ATerm v_52, ATerm w_52, ATerm x_52, ATerm t);
static ATerm o_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_148 (ATerm), ATerm t);
static ATerm t_6 (ATerm l_57, ATerm m_57, ATerm t);
ATerm if_verbose2_1_0 (ATerm n_163 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm w_6 (ATerm j_69, ATerm k_69, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm u_6 (ATerm s_55, ATerm t_55, ATerm r_55, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm p_6 (ATerm b_54, ATerm c_54, ATerm t);
ATerm foldr_2_0 (ATerm p_154 (ATerm), ATerm q_154 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm m_163 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_6 (ATerm k_60, ATerm l_60, ATerm m_60, ATerm t);
static ATerm y_6 (ATerm n_60, ATerm o_60, ATerm t);
ATerm lookup_table_0_1 (ATerm e_57, ATerm t);
ATerm new_hashtable_0_2 (ATerm s_60, ATerm t_60, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm r_6 (ATerm p_60, ATerm q_60, ATerm t);
static ATerm s_6 (ATerm u_60, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_118 (ATerm), ATerm j_118 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_168 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm parse_options_3_0 (ATerm h_168 (ATerm), ATerm i_168 (ATerm), ATerm j_168 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm k_166 (ATerm), ATerm l_166 (ATerm), ATerm m_166 (ATerm), ATerm n_166 (ATerm), ATerm o_166 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm iowrap_3_0 (ATerm n_165 (ATerm), ATerm o_165 (ATerm), ATerm p_165 (ATerm), ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm map_1_0 (ATerm q_147 (ATerm), ATerm t)
{
  static ATerm y_0 (ATerm t);
  static ATerm y_0 (ATerm t)
  {
    ATerm v_0 = NULL,w_0 = NULL,x_0 = NULL;
    v_0 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_0;
      }
    else
      {
        ATerm n_0 = NULL,j_1 = NULL,k_1 = NULL,e_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_0 = ATgetFirst((ATermList) t);
            x_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_0);
        n_0 = t;
        t = w_0;
        t = q_147(t);
        j_1 = t;
        t = x_0;
        t = y_0(t);
        k_1 = t;
        t = (ATerm) ATinsert(CheckATermList(k_1), j_1);
        e_0 = t;
        t = SSLsetAnnotations(e_0, n_0);
      }
    return(t);
  }
  t = y_0(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_1 = ATgetFirst((ATermList) t);
      c_1 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_1 = NULL,h_1 = NULL;
        static ATerm a_0 (ATerm t);
        static ATerm a_0 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_1)), not_null(h_1));
          return(t);
        }
        t = c_1;
        t = q_0(t);
        if(((g_1 != NULL) && (g_1 != t)))
          _fail(t);
        else
          g_1 = t;
        t = b_1;
        t = p_0(t);
        if(((h_1 != NULL) && (h_1 != t)))
          _fail(t);
        else
          h_1 = t;
        t = c_1;
        t = reverse_acc_2_0(p_0, a_0, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_8;
      t = q_0(t);
    }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL,i_0 = NULL;
  m_2 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_2);
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_2);
  i_0 = t;
  t = SSLsetAnnotations(i_0, k_2);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_0 (ATerm t)
{
  ATerm s_2 = NULL;
  s_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_2), term_d_8);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm p_168 (ATerm), ATerm q_168 (ATerm), ATerm t)
{
  ATerm u_1 = NULL,w_1 = NULL;
  ATerm h_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_2 = NULL,j_2 = NULL;
      t = term_k_8;
      f_2 = t;
      t = term_l_8;
      j_2 = t;
      t = term_m_8;
      t = t_6(f_2, j_2, t);
      LocalPopChoice(j_8);
    }
  else
    {
      t = h_8;
      t = fetch_1_0(b_0, t);
    }
  {
    ATerm n_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_168(t);
        t = echo_0_0(t);
        LocalPopChoice(o_8);
      }
    else
      {
        t = n_8;
      }
  }
  t = term_p_8;
  t = echo_0_0(t);
  t = term_u_8;
  u_1 = t;
  t = term_v_8;
  w_1 = t;
  t = term_w_8;
  t = t_6(u_1, w_1, t);
  t = reverse_acc_2_0(_id, c_0, t);
  t = map_1_0(g_0, t);
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_2 = NULL;
        t = q_168(t);
        t_2 = t;
        t = (ATerm) ATinsert(CheckATermList(t_2), term_z_8);
        t = echo_0_0(t);
        LocalPopChoice(y_8);
      }
    else
      {
        t = x_8;
      }
  }
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL,k_0 = NULL;
  d_3 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_3);
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_3);
  k_0 = t;
  t = SSLsetAnnotations(k_0, b_3);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_2 = NULL;
  x_2 = t;
  {
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_2 = NULL,z_2 = NULL;
        t = term_k_8;
        y_2 = t;
        t = term_l_8;
        z_2 = t;
        t = term_m_8;
        t = t_6(y_2, z_2, t);
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        t = fetch_1_0(j_0, t);
      }
  }
  t = x_2;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
ATerm topdown_1_0 (ATerm e_141 (ATerm), ATerm t)
{
  static ATerm r_0 (ATerm t);
  static ATerm r_0 (ATerm t)
  {
    t = topdown_1_0(e_141, t);
    return(t);
  }
  t = e_141(t);
  t = SRTS_all(r_0, t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm e_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(d_9);
      {
        ATerm g_3 = NULL,h_3 = NULL;
        g_3 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm j_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        h_3 = t;
        t = SSLgetAnnotations(g_3);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_9 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) k_9) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_9 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(l_9) != AT_LIST) || !(ATisEmpty(l_9))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = h_3;
      }
    }
  else
    {
      t = c_9;
      {
        ATerm m_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm r_9 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) r_9) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm s_9 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(p_9);
            _fail(t);
          }
        else
          {
            t = m_9;
          }
      }
    }
  return(t);
}
static ATerm u_4 (ATerm e_107, ATerm d_107, ATerm t)
{
  t = e_107;
  t = topdown_1_0(a_1, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, e_107);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,c_4 = NULL,d_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      c_4 = ATgetArgument(t, 0);
      h_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_4;
  if(match_cons(t, sym_Match_1))
    {
      d_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_4;
  if(match_cons(t, sym_Var_1))
    {
      g_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_4;
  if(match_cons(t, sym_Seq_2))
    {
      i_4 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
      t = i_4;
      if(match_cons(t, sym_Build_1))
        {
          j_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_4;
      if(match_cons(t, sym_Var_1))
        {
          y_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_3;
      if((g_4 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_4)), z_3);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          i_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_4;
      if(match_cons(t, sym_Var_1))
        {
          j_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_4;
      if((g_4 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_4));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm q_5 = NULL,u_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,e_6 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      y_5 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5;
  if(match_cons(t, sym_Build_1))
    {
      z_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6;
  if(match_cons(t, sym_Seq_2))
    {
      e_6 = ATgetArgument(t, 0);
      u_5 = ATgetArgument(t, 1);
      t = e_6;
      if(match_cons(t, sym_Match_1))
        {
          q_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_5;
      if((z_5 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_5), u_5);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          e_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_6;
      if((z_5 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, z_5);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm i_7 = NULL,l_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,w_7 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      s_7 = ATgetArgument(t, 0);
      u_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7;
  if(match_cons(t, sym_Match_1))
    {
      t_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7;
  if(match_cons(t, sym_Seq_2))
    {
      w_7 = ATgetArgument(t, 0);
      l_7 = ATgetArgument(t, 1);
      t = w_7;
      if(match_cons(t, sym_Match_1))
        {
          i_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_7;
      if((t_7 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_7), l_7);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          w_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_7;
      if((t_7 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, t_7);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,i_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      i_8 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8;
  if(match_cons(t, sym_Build_1))
    {
      ATerm t_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_8;
  if(match_cons(t, sym_Seq_2))
    {
      r_8 = ATgetArgument(t, 0);
      s_8 = ATgetArgument(t, 1);
      t = r_8;
      if(match_cons(t, sym_PrimT_3))
        {
          e_8 = ATgetArgument(t, 0);
          f_8 = ATgetArgument(t, 1);
          g_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, e_8, f_8, g_8), s_8);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          r_8 = ATgetArgument(t, 0);
          s_8 = ATgetArgument(t, 1);
          t_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, r_8, s_8, t_8);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,q_9 = NULL,u_9 = NULL,v_9 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      q_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_9;
  if(match_cons(t, sym_Build_1))
    {
      ATerm w_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9;
  if(match_cons(t, sym_Seq_2))
    {
      v_9 = ATgetArgument(t, 0);
      o_9 = ATgetArgument(t, 1);
      t = v_9;
      if(match_cons(t, sym_Build_1))
        {
          n_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_9), o_9);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          v_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, v_9);
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_9 = ATgetArgument(t, 0);
      if(((ATgetType(x_9) != AT_LIST) || !(ATisEmpty(x_9))))
        _fail(t);
      {
        ATerm y_9 = ATgetArgument(t, 1);
        if(((ATgetType(y_9) != AT_LIST) || !(ATisEmpty(y_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_9 = ATgetArgument(t, 0);
      if(((ATgetType(z_9) == AT_LIST) && !(ATisEmpty(z_9))))
        {
          u_11 = ATgetFirst((ATermList) z_9);
          v_11 = (ATerm) ATgetNext((ATermList) z_9);
        }
      else
        _fail(t);
      {
        ATerm a_10 = ATgetArgument(t, 1);
        if(((ATgetType(a_10) == AT_LIST) && !(ATisEmpty(a_10))))
          {
            w_11 = ATgetFirst((ATermList) a_10);
            x_11 = (ATerm) ATgetNext((ATermList) a_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_11, w_11), (ATerm) ATmakeAppl(sym__2, v_11, x_11));
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL;
  if(match_cons(t, sym__2))
    {
      z_11 = ATgetArgument(t, 0);
      a_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_12), z_11);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL;
  if(match_cons(t, sym__2))
    {
      c_12 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_12), (ATerm) ATmakeAppl(sym_Match_1, d_12));
  return(t);
}
static ATerm l_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_10 = ATgetArgument(t, 0);
      if(((ATgetType(b_10) != AT_LIST) || !(ATisEmpty(b_10))))
        _fail(t);
      {
        ATerm d_10 = ATgetArgument(t, 1);
        if(((ATgetType(d_10) != AT_LIST) || !(ATisEmpty(d_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_10 = ATgetArgument(t, 0);
      if(((ATgetType(e_10) == AT_LIST) && !(ATisEmpty(e_10))))
        {
          m_12 = ATgetFirst((ATermList) e_10);
          n_12 = (ATerm) ATgetNext((ATermList) e_10);
        }
      else
        _fail(t);
      {
        ATerm h_10 = ATgetArgument(t, 1);
        if(((ATgetType(h_10) == AT_LIST) && !(ATisEmpty(h_10))))
          {
            o_12 = ATgetFirst((ATermList) h_10);
            p_12 = (ATerm) ATgetNext((ATermList) h_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_12, o_12), (ATerm) ATmakeAppl(sym__2, n_12, p_12));
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm t_12 = NULL,w_12 = NULL;
  if(match_cons(t, sym__2))
    {
      t_12 = ATgetArgument(t, 0);
      w_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_12), t_12);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL;
  if(match_cons(t, sym__2))
    {
      x_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_12), (ATerm) ATmakeAppl(sym_Match_1, y_12));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL,v_10 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,g_11 = NULL,h_11 = NULL,j_11 = NULL,k_11 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      v_10 = ATgetArgument(t, 0);
      g_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_10;
  if(match_cons(t, sym_Build_1))
    {
      c_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11;
  if(match_cons(t, sym_Op_2))
    {
      d_11 = ATgetArgument(t, 0);
      e_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_11;
  if(match_cons(t, sym_Seq_2))
    {
      h_11 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
      {
        ATerm t_11 = NULL;
        t = h_11;
        if(match_cons(t, sym_Match_1))
          {
            j_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_11;
        if(match_cons(t, sym_Op_2))
          {
            r_10 = ATgetArgument(t, 0);
            s_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_10;
        if((d_11 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, e_11, s_10);
        t = genzip_4_0(d_1, e_1, f_1, i_1, t);
        t_11 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_11), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, d_11, e_11)), t_10));
      }
    }
  else
    {
      ATerm j_12 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          h_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_11;
      if(match_cons(t, sym_Op_2))
        {
          j_11 = ATgetArgument(t, 0);
          k_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_11;
      if((d_11 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, e_11, k_11);
      t = genzip_4_0(l_1, m_1, n_1, o_1, t);
      j_12 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_12), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, d_11, e_11)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm h_14 = NULL,k_14 = NULL,l_14 = NULL,o_14 = NULL,s_14 = NULL,u_14 = NULL,v_14 = NULL,a_15 = NULL;
  k_14 = t;
  if(match_cons(t, sym_Seq_2))
    {
      l_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_14;
  if(match_cons(t, sym_Build_1))
    {
      o_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_14;
  if(match_cons(t, sym_Op_2))
    {
      s_14 = ATgetArgument(t, 0);
      {
        ATerm i_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = u_14;
  {
    ATerm j_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            v_14 = ATgetArgument(t, 0);
            {
              ATerm l_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_10);
        t = v_14;
        if(match_cons(t, sym_Match_1))
          {
            a_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_15;
        if(match_cons(t, sym_Op_2))
          {
            h_14 = ATgetArgument(t, 0);
            {
              ATerm m_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_14, h_14);
        {
          ATerm n_10 = t;
          if((PushChoice() == 0))
            {
              ATerm v_1 = NULL;
              if(match_cons(t, sym__2))
                {
                  v_1 = ATgetArgument(t, 0);
                  if((v_1 != ATgetArgument(t, 1)))
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
              t = n_10;
            }
        }
        t = term_o_10;
      }
    else
      {
        t = j_10;
        if(match_cons(t, sym_Match_1))
          {
            v_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_14;
        if(match_cons(t, sym_Op_2))
          {
            a_15 = ATgetArgument(t, 0);
            {
              ATerm p_10 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_14, a_15);
        {
          ATerm q_10 = t;
          if((PushChoice() == 0))
            {
              ATerm g_2 = NULL;
              if(match_cons(t, sym__2))
                {
                  g_2 = ATgetArgument(t, 0);
                  if((g_2 != ATgetArgument(t, 1)))
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
              t = q_10;
            }
        }
        t = term_o_10;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm i_142 (ATerm), ATerm t)
{
  static ATerm e_15 (ATerm t);
  static ATerm e_15 (ATerm t)
  {
    ATerm u_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_142(t);
        LocalPopChoice(x_10);
      }
    else
      {
        t = u_10;
        t = SRTS_one(e_15, t);
      }
    return(t);
  }
  t = e_15(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL;
  m_16 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_16 = ATgetArgument(t, 0);
      w_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_16;
  if(match_cons(t, sym_Let_2))
    {
      x_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
      {
        ATerm h_17 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, n_16, x_16);
        t = conc_0_0(t);
        h_17 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, h_17, z_16);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          x_16 = ATgetArgument(t, 0);
          z_16 = ATgetArgument(t, 1);
          a_17 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_16;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_16 = ATgetFirst((ATermList) t);
          v_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_16;
      if(match_cons(t, sym_SDefT_4))
        {
          p_16 = ATgetArgument(t, 0);
          q_16 = ATgetArgument(t, 1);
          r_16 = ATgetArgument(t, 2);
          s_16 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = q_16;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_16;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_16;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_16;
      if(match_cons(t, sym_SVar_1))
        {
          y_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_16;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_17;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_16;
      if((p_16 != t))
        {
          _fail(t);
        }
      t = s_16;
      {
        ATerm y_10 = t;
        if((PushChoice() == 0))
          {
            static ATerm p_1 (ATerm t);
            static ATerm p_1 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm a_11 = ATgetArgument(t, 0);
                  if(match_cons(a_11, sym_SVar_1))
                    {
                      if((p_16 != ATgetArgument(a_11, 0)))
                        {
                          _fail(ATgetArgument(a_11, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm b_11 = ATgetArgument(t, 1);
                    if(((ATgetType(b_11) != AT_LIST) || !(ATisEmpty(b_11))))
                      _fail(t);
                  }
                  {
                    ATerm f_11 = ATgetArgument(t, 2);
                    if(((ATgetType(f_11) != AT_LIST) || !(ATisEmpty(f_11))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(p_1, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_10;
          }
      }
      t = s_16;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,i_18 = NULL,k_18 = NULL,l_18 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      k_18 = ATgetArgument(t, 0);
      t = k_18;
      if(match_cons(t, sym_Seq_2))
        {
          i_18 = ATgetArgument(t, 0);
          z_17 = ATgetArgument(t, 1);
          t = i_18;
          if(match_cons(t, sym_Where_1))
            {
              y_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_17;
          if(match_cons(t, sym_Seq_2))
            {
              a_18 = ATgetArgument(t, 0);
              c_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_18;
          if(match_cons(t, sym_Build_1))
            {
              b_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, y_17, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_18), c_18)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              i_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, i_18);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          k_18 = ATgetArgument(t, 0);
          t = k_18;
          if(match_cons(t, sym_Test_1))
            {
              i_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, i_18);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              k_18 = ATgetArgument(t, 0);
              t = k_18;
              if(match_cons(t, sym_Not_1))
                {
                  i_18 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, i_18);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  k_18 = ATgetArgument(t, 0);
                  l_18 = ATgetArgument(t, 1);
                  t = l_18;
                  if((k_18 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      k_18 = ATgetArgument(t, 0);
                      l_18 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = l_18;
                  if((k_18 != t))
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
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      f_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
      t = f_19;
      if(match_cons(t, sym_LChoice_2))
        {
          g_19 = ATgetArgument(t, 0);
          h_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, g_19, (ATerm) ATmakeAppl(sym_LChoice_2, h_19, i_19));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          f_19 = ATgetArgument(t, 0);
          i_19 = ATgetArgument(t, 1);
          t = f_19;
          if(match_cons(t, sym_Seq_2))
            {
              g_19 = ATgetArgument(t, 0);
              h_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, g_19, (ATerm) ATmakeAppl(sym_Seq_2, h_19, i_19));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              f_19 = ATgetArgument(t, 0);
              i_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_19;
          if(match_cons(t, sym_Choice_2))
            {
              g_19 = ATgetArgument(t, 0);
              h_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, g_19, (ATerm) ATmakeAppl(sym_Choice_2, h_19, i_19));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,y_20 = NULL,z_20 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      y_20 = ATgetArgument(t, 0);
      z_20 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, y_20, z_20);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          y_20 = ATgetArgument(t, 0);
          t = y_20;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_20 = ATgetFirst((ATermList) t);
              v_20 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, u_20, (ATerm) ATmakeAppl(sym_LChoices_1, v_20));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_o_10;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              y_20 = ATgetArgument(t, 0);
              t = y_20;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_20 = ATgetFirst((ATermList) t);
                  v_20 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, u_20, (ATerm) ATmakeAppl(sym_Choices_1, v_20));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_o_10;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  y_20 = ATgetArgument(t, 0);
                  t = y_20;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      u_20 = ATgetFirst((ATermList) t);
                      v_20 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_20, (ATerm) ATmakeAppl(sym_Seqs_1, v_20));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_i_11;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      y_20 = ATgetArgument(t, 0);
                      z_20 = ATgetArgument(t, 1);
                      w_20 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, z_20, (ATerm) ATmakeAppl(sym_Op_2, term_l_11, (ATerm) ATinsert(ATinsert(ATempty, w_20), y_20)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          y_20 = ATgetArgument(t, 0);
                          z_20 = ATgetArgument(t, 1);
                          w_20 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, w_20)), y_20), (ATerm) ATmakeAppl(sym_Build_1, z_20)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              y_20 = ATgetArgument(t, 0);
                              z_20 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_20, (ATerm) ATmakeAppl(sym_Match_1, z_20));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  y_20 = ATgetArgument(t, 0);
                                  z_20 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_20), z_20);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      y_20 = ATgetArgument(t, 0);
                                      z_20 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_20), y_20);
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
static ATerm q_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      e_23 = ATgetArgument(t, 0);
      t = e_23;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_o_10;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          e_23 = ATgetArgument(t, 0);
          t = e_23;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_i_11;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              e_23 = ATgetArgument(t, 0);
              f_23 = ATgetArgument(t, 1);
              t = e_23;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_o_10;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  e_23 = ATgetArgument(t, 0);
                  f_23 = ATgetArgument(t, 1);
                  t = f_23;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_o_10;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      e_23 = ATgetArgument(t, 0);
                      f_23 = ATgetArgument(t, 1);
                      t = f_23;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_o_10;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          e_23 = ATgetArgument(t, 0);
                          t = e_23;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_o_10;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              e_23 = ATgetArgument(t, 0);
                              t = e_23;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_o_10;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  e_23 = ATgetArgument(t, 0);
                                  f_23 = ATgetArgument(t, 1);
                                  t = f_23;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_o_10;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      e_23 = ATgetArgument(t, 0);
                                      f_23 = ATgetArgument(t, 1);
                                      t = f_23;
                                      t = fetch_1_0(q_1, t);
                                      t = term_o_10;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          e_23 = ATgetArgument(t, 0);
                                          f_23 = ATgetArgument(t, 1);
                                          t = f_23;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = e_23;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = f_23;
                                                }
                                              else
                                                {
                                                  t = e_23;
                                                }
                                            }
                                          else
                                            {
                                              t = e_23;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = f_23;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              e_23 = ATgetArgument(t, 0);
                                              f_23 = ATgetArgument(t, 1);
                                              t = f_23;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = e_23;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = f_23;
                                                    }
                                                  else
                                                    {
                                                      t = e_23;
                                                    }
                                                }
                                              else
                                                {
                                                  t = e_23;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = f_23;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  e_23 = ATgetArgument(t, 0);
                                                  t = e_23;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_o_10;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      e_23 = ATgetArgument(t, 0);
                                                      f_23 = ATgetArgument(t, 1);
                                                      g_23 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = g_23;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_23, f_23);
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
  ATerm n_25 = NULL,p_25 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      p_25 = ATgetArgument(t, 0);
      t = p_25;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_i_11;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          p_25 = ATgetArgument(t, 0);
          t = p_25;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_o_10;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              p_25 = ATgetArgument(t, 0);
              n_25 = ATgetArgument(t, 1);
              t = n_25;
              if(match_cons(t, sym_Id_0))
                {
                  t = p_25;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = n_25;
                    }
                  else
                    {
                      t = p_25;
                    }
                }
              else
                {
                  t = p_25;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = n_25;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  p_25 = ATgetArgument(t, 0);
                  n_25 = ATgetArgument(t, 1);
                  t = p_25;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_i_11;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      p_25 = ATgetArgument(t, 0);
                      n_25 = ATgetArgument(t, 1);
                      t = n_25;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_i_11;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          p_25 = ATgetArgument(t, 0);
                          n_25 = ATgetArgument(t, 1);
                          t = n_25;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_i_11;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              p_25 = ATgetArgument(t, 0);
                              t = p_25;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_i_11;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  p_25 = ATgetArgument(t, 0);
                                  t = p_25;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_i_11;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      p_25 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = p_25;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_i_11;
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
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
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
            t = ElimFail_0_0(t);
            LocalPopChoice(p_11);
          }
        else
          {
            t = o_11;
            {
              ATerm q_11 = t;
              int r_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(r_11);
                }
              else
                {
                  t = q_11;
                  {
                    ATerm s_11 = t;
                    int y_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(y_11);
                      }
                    else
                      {
                        t = s_11;
                        {
                          ATerm b_12 = t;
                          int e_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(e_12);
                            }
                          else
                            {
                              t = b_12;
                              {
                                ATerm f_12 = t;
                                int g_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm l_27 = NULL,m_27 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        l_27 = ATgetArgument(t, 0);
                                        m_27 = ATgetArgument(t, 1);
                                        t = l_27;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = m_27;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            l_27 = ATgetArgument(t, 0);
                                            m_27 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = l_27;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = m_27;
                                      }
                                    LocalPopChoice(g_12);
                                  }
                                else
                                  {
                                    t = f_12;
                                    {
                                      ATerm i_12 = t;
                                      int b_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(b_13);
                                        }
                                      else
                                        {
                                          t = i_12;
                                          {
                                            ATerm c_13 = t;
                                            int j_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(j_13);
                                              }
                                            else
                                              {
                                                t = c_13;
                                                {
                                                  ATerm k_13 = t;
                                                  int n_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(n_13);
                                                    }
                                                  else
                                                    {
                                                      t = k_13;
                                                      {
                                                        ATerm o_13 = t;
                                                        int q_13 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(q_13);
                                                          }
                                                        else
                                                          {
                                                            t = o_13;
                                                            {
                                                              ATerm r_13 = t;
                                                              int t_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(t_13);
                                                                }
                                                              else
                                                                {
                                                                  t = r_13;
                                                                  {
                                                                    ATerm u_13 = t;
                                                                    int y_13 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(y_13);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = u_13;
                                                                        {
                                                                          ATerm z_13 = t;
                                                                          int a_14 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(a_14);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_13;
                                                                              {
                                                                                ATerm b_14 = t;
                                                                                int e_14 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(e_14);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_14;
                                                                                    {
                                                                                      ATerm p_27 = NULL,q_27 = NULL,s_27 = NULL,u_27 = NULL;
                                                                                      q_27 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          s_27 = ATgetArgument(t, 0);
                                                                                          u_27 = ATgetArgument(t, 1);
                                                                                          t = s_27;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              p_27 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = q_27;
                                                                                          t = u_4(p_27, u_27, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              s_27 = ATgetArgument(t, 0);
                                                                                              u_27 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = s_27;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = u_27;
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
ATerm repeat_2_0 (ATerm e_140 (ATerm), ATerm f_140 (ATerm), ATerm t)
{
  static ATerm f_28 (ATerm t);
  static ATerm f_28 (ATerm t)
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_140(t);
        t = f_28(t);
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
        t = f_140(t);
      }
    return(t);
  }
  t = f_28(t);
  return(t);
}
ATerm downup_1_0 (ATerm g_141 (ATerm), ATerm t)
{
  t = g_141(t);
  {
    static ATerm r_1 (ATerm t);
    static ATerm r_1 (ATerm t)
    {
      t = downup_1_0(g_141, t);
      return(t);
    }
    t = SRTS_all(r_1, t);
  }
  t = g_141(t);
  return(t);
}
ATerm CreateDef2_0_0 (ATerm t)
{
  ATerm h_28 = NULL,l_28 = NULL;
  h_28 = t;
  t = new_0_0(t);
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_28), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, l_28, (ATerm)ATempty, (ATerm)ATempty, h_28)));
  return(t);
}
static ATerm z_28 (ATerm p_28, ATerm t)
{
  ATerm q_28 = NULL;
  t = SSL_explode_term(p_28);
  if(match_cons(t, sym__2))
    {
      ATerm i_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_28;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_28 = NULL,v_28 = NULL,w_28 = NULL;
  w_28 = t;
  if(match_cons(t, sym__2))
    {
      t_28 = ATgetArgument(t, 0);
      v_28 = ATgetArgument(t, 1);
      {
        ATerm j_14 = t;
        int m_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_1 (ATerm t);
            static ATerm s_1 (ATerm t)
            {
              t = v_28;
              return(t);
            }
            t = t_28;
            t = at_end_1_0(s_1, t);
            LocalPopChoice(m_14);
          }
        else
          {
            t = j_14;
            t = z_28(w_28, t);
          }
      }
    }
  else
    {
      t = z_28(w_28, t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm w_142 (ATerm), ATerm t)
{
  static ATerm a_29 (ATerm t);
  static ATerm a_29 (ATerm t)
  {
    ATerm n_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_142(t);
        LocalPopChoice(p_14);
      }
    else
      {
        t = n_14;
        t = SRTS_all(a_29, t);
      }
    return(t);
  }
  t = a_29(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_14;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_12 = ATgetFirst((ATermList) t);
      r_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_12, r_12);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm s_12 = NULL,u_12 = NULL,v_12 = NULL,z_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_14 = ATgetArgument(t, 0);
      if(match_cons(r_14, sym__2))
        {
          s_12 = ATgetArgument(r_14, 0);
          u_12 = ATgetArgument(r_14, 1);
        }
      else
        _fail(t);
      {
        ATerm t_14 = ATgetArgument(t, 1);
        if(match_cons(t_14, sym__2))
          {
            v_12 = ATgetArgument(t_14, 0);
            z_12 = ATgetArgument(t_14, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_12), s_12), (ATerm) ATinsert(CheckATermList(z_12), u_12));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm a_13 = NULL;
  a_13 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = term_y_14;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = term_c_15;
        }
      else
        {
          t = a_13;
        }
    }
  {
    ATerm d_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
        if(match_cons(t, sym_Let_2))
          {
            d_13 = ATgetArgument(t, 0);
            e_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_13;
        if(match_cons(t, sym_CallT_3))
          {
            f_13 = ATgetArgument(t, 0);
            h_13 = ATgetArgument(t, 1);
            i_13 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = f_13;
        if(match_cons(t, sym_SVar_1))
          {
            g_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_13), (ATerm)ATempty, (ATerm) ATempty), d_13);
        LocalPopChoice(f_15);
      }
    else
      {
        t = d_15;
        {
          ATerm g_15 = t;
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_15 = t;
              if((PushChoice() == 0))
                {
                  ATerm l_13 = NULL,m_13 = NULL,p_13 = NULL,s_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,c_14 = NULL,z_0 = NULL,u_0 = NULL;
                  c_14 = t;
                  if(match_cons(t, sym_CallT_3))
                    {
                      m_13 = ATgetArgument(t, 0);
                      p_13 = ATgetArgument(t, 1);
                      s_13 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(c_14);
                  l_13 = t;
                  t = m_13;
                  if(match_cons(t, sym_SVar_1))
                    {
                      w_13 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_13);
                  v_13 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, w_13);
                  u_0 = t;
                  t = SSLsetAnnotations(u_0, v_13);
                  x_13 = t;
                  t = p_13;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = s_13;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_CallT_3, x_13, p_13, s_13);
                  z_0 = t;
                  t = SSLsetAnnotations(z_0, l_13);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = j_15;
                }
              t = CreateDef2_0_0(t);
              LocalPopChoice(i_15);
            }
          else
            {
              t = g_15;
              {
                ATerm d_14 = NULL;
                d_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, d_14, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_14;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm u_19 = NULL,w_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_19 = ATgetFirst((ATermList) t);
      w_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_19, w_19);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_15 = ATgetArgument(t, 0);
      if(match_cons(k_15, sym__2))
        {
          x_19 = ATgetArgument(k_15, 0);
          y_19 = ATgetArgument(k_15, 1);
        }
      else
        _fail(t);
      {
        ATerm l_15 = ATgetArgument(t, 1);
        if(match_cons(l_15, sym__2))
          {
            z_19 = ATgetArgument(l_15, 0);
            a_20 = ATgetArgument(l_15, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_19), x_19), (ATerm) ATinsert(CheckATermList(a_20), y_19));
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm b_20 = NULL;
  b_20 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = term_y_14;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = term_c_15;
        }
      else
        {
          t = b_20;
        }
    }
  {
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,m_20 = NULL,n_20 = NULL;
        if(match_cons(t, sym_Let_2))
          {
            g_20 = ATgetArgument(t, 0);
            i_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_20;
        if(match_cons(t, sym_CallT_3))
          {
            j_20 = ATgetArgument(t, 0);
            m_20 = ATgetArgument(t, 1);
            n_20 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = j_20;
        if(match_cons(t, sym_SVar_1))
          {
            k_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_20;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_20;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_20), (ATerm)ATempty, (ATerm) ATempty), g_20);
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
        {
          ATerm o_15 = t;
          int p_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_15 = t;
              if((PushChoice() == 0))
                {
                  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,e_21 = NULL,f_21 = NULL,k_21 = NULL,l_21 = NULL,r_3 = NULL,q_3 = NULL;
                  l_21 = t;
                  if(match_cons(t, sym_CallT_3))
                    {
                      r_20 = ATgetArgument(t, 0);
                      s_20 = ATgetArgument(t, 1);
                      t_20 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_21);
                  q_20 = t;
                  t = r_20;
                  if(match_cons(t, sym_SVar_1))
                    {
                      f_21 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_20);
                  e_21 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, f_21);
                  q_3 = t;
                  t = SSLsetAnnotations(q_3, e_21);
                  k_21 = t;
                  t = s_20;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = t_20;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_CallT_3, k_21, s_20, t_20);
                  r_3 = t;
                  t = SSLsetAnnotations(r_3, q_20);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = q_15;
                }
              t = CreateDef2_0_0(t);
              LocalPopChoice(p_15);
            }
          else
            {
              t = o_15;
              {
                ATerm m_21 = NULL;
                m_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_21, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
ATerm Canon_0_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
  x_41 = t;
  if(match_cons(t, sym_Rec_2))
    {
      y_41 = ATgetArgument(t, 0);
      z_41 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, y_41, (ATerm)ATempty, (ATerm)ATempty, z_41)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_41), (ATerm)ATempty, (ATerm) ATempty));
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          y_41 = ATgetArgument(t, 0);
          z_41 = ATgetArgument(t, 1);
          a_42 = ATgetArgument(t, 2);
          n_41 = ATgetArgument(t, 3);
          {
            ATerm g_42 = NULL;
            t = z_41;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = a_42;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = n_41;
            if(match_cons(t, sym_Rec_2))
              {
                o_41 = ATgetArgument(t, 0);
                p_41 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_41;
            {
              static ATerm t_1 (ATerm t);
              static ATerm t_1 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm r_15 = ATgetArgument(t, 0);
                    if(match_cons(r_15, sym_SVar_1))
                      {
                        if((o_41 != ATgetArgument(r_15, 0)))
                          {
                            _fail(ATgetArgument(r_15, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm s_15 = ATgetArgument(t, 1);
                      if(((ATgetType(s_15) != AT_LIST) || !(ATisEmpty(s_15))))
                        _fail(t);
                    }
                    {
                      ATerm t_15 = ATgetArgument(t, 2);
                      if(((ATgetType(t_15) != AT_LIST) || !(ATisEmpty(t_15))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_41), (ATerm)ATempty, (ATerm) ATempty);
                return(t);
              }
              t = alltd_1_0(t_1, t);
            }
            g_42 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, y_41, (ATerm)ATempty, (ATerm)ATempty, g_42);
          }
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              y_41 = ATgetArgument(t, 0);
              z_41 = ATgetArgument(t, 1);
              t = z_41;
              if(match_cons(t, sym_Seq_2))
                {
                  s_41 = ATgetArgument(t, 0);
                  t_41 = ATgetArgument(t, 1);
                  t = y_41;
                  if(match_cons(t, sym_Where_1))
                    {
                      r_41 = ATgetArgument(t, 0);
                      t = s_41;
                      if(match_cons(t, sym_Build_1))
                        {
                          q_41 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, r_41, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_41), t_41));
                    }
                  else
                    {
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = z_41;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Build_1))
                    {
                      s_41 = ATgetArgument(t, 0);
                      t = y_41;
                      if(match_cons(t, sym_Where_1))
                        {
                          r_41 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_41, (ATerm) ATmakeAppl(sym_Build_1, s_41));
                        }
                      else
                        {
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = z_41;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Id_0))
                        {
                          t = y_41;
                          if(match_cons(t, sym_Id_0))
                            {
                              t = y_41;
                            }
                          else
                            {
                              t = y_41;
                            }
                        }
                      else
                        {
                          t = y_41;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = z_41;
                        }
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  y_41 = ATgetArgument(t, 0);
                  z_41 = ATgetArgument(t, 1);
                  t = z_41;
                  if(match_cons(t, sym_Scope_2))
                    {
                      s_41 = ATgetArgument(t, 0);
                      t_41 = ATgetArgument(t, 1);
                      t = y_41;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          ATerm u_15 = t;
                          int v_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm v_42 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, y_41, s_41);
                              t = conc_0_0(t);
                              v_42 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_42, t_41);
                              LocalPopChoice(v_15);
                            }
                          else
                            {
                              t = u_15;
                              t = z_41;
                            }
                        }
                      else
                        {
                          ATerm a_43 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, y_41, s_41);
                          t = conc_0_0(t);
                          a_43 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, a_43, t_41);
                        }
                    }
                  else
                    {
                      t = y_41;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = z_41;
                    }
                }
              else
                {
                  if(match_cons(t, sym_Thread_1))
                    {
                      y_41 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_x_15, (ATerm)ATinsert(ATempty, y_41), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          y_41 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, term_z_15, (ATerm)ATinsert(ATempty, y_41), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              y_41 = ATgetArgument(t, 0);
                              t = (ATerm) ATmakeAppl(sym_CallT_3, term_b_16, (ATerm)ATinsert(ATempty, y_41), (ATerm) ATempty);
                            }
                          else
                            {
                              if(match_cons(t, sym_All_1))
                                {
                                  y_41 = ATgetArgument(t, 0);
                                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_d_16, (ATerm)ATinsert(ATempty, y_41), (ATerm) ATempty);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Bagof_1))
                                    {
                                      y_41 = ATgetArgument(t, 0);
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_f_16, (ATerm)ATinsert(ATempty, y_41), (ATerm) ATempty);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_PrimT_3))
                                        {
                                          y_41 = ATgetArgument(t, 0);
                                          z_41 = ATgetArgument(t, 1);
                                          a_42 = ATgetArgument(t, 2);
                                          {
                                            ATerm k_16 = t;
                                            int l_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm k_7 = NULL;
                                                t = z_41;
                                                {
                                                  static ATerm i_9 (ATerm t);
                                                  static ATerm i_9 (ATerm t)
                                                  {
                                                    ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
                                                    f_9 = t;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        g_9 = ATgetFirst((ATermList) t);
                                                        h_9 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm t_16 = t;
                                                      int u_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm c_10 = NULL,f_10 = NULL,g_10 = NULL,s_0 = NULL;
                                                          t = SSLgetAnnotations(f_9);
                                                          c_10 = t;
                                                          t = g_9;
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_y_14;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_Fail_0)))
                                                                _fail(t);
                                                              t = term_c_15;
                                                            }
                                                          f_10 = t;
                                                          t = h_9;
                                                          {
                                                            ATerm b_17 = t;
                                                            int c_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = i_9(t);
                                                                LocalPopChoice(c_17);
                                                              }
                                                            else
                                                              {
                                                                t = b_17;
                                                              }
                                                          }
                                                          g_10 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(g_10), f_10);
                                                          s_0 = t;
                                                          t = SSLsetAnnotations(s_0, c_10);
                                                          LocalPopChoice(u_16);
                                                        }
                                                      else
                                                        {
                                                          t = t_16;
                                                          {
                                                            ATerm w_10 = NULL,z_10 = NULL,t_0 = NULL;
                                                            t = SSLgetAnnotations(f_9);
                                                            w_10 = t;
                                                            t = h_9;
                                                            t = i_9(t);
                                                            z_10 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(z_10), g_9);
                                                            t_0 = t;
                                                            t = SSLsetAnnotations(t_0, w_10);
                                                          }
                                                        }
                                                    }
                                                    return(t);
                                                  }
                                                  t = i_9(t);
                                                }
                                                k_7 = t;
                                                t = (ATerm) ATmakeAppl(sym_PrimT_3, y_41, k_7, a_42);
                                                LocalPopChoice(l_16);
                                              }
                                            else
                                              {
                                                t = k_16;
                                                {
                                                  ATerm h_12 = NULL,k_12 = NULL,l_12 = NULL;
                                                  t = z_41;
                                                  t = genzip_4_0(x_1, y_1, z_1, a_2, t);
                                                  if(match_cons(t, sym__2))
                                                    {
                                                      h_12 = ATgetArgument(t, 0);
                                                      k_12 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = k_12;
                                                  t = concat_0_0(t);
                                                  l_12 = t;
                                                  {
                                                    ATerm d_17 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                          _fail(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = d_17;
                                                      }
                                                  }
                                                  t = (ATerm) ATmakeAppl(sym_Let_2, l_12, (ATerm) ATmakeAppl(sym_PrimT_3, y_41, h_12, a_42));
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              y_41 = ATgetArgument(t, 0);
                                              z_41 = ATgetArgument(t, 1);
                                              a_42 = ATgetArgument(t, 2);
                                            }
                                          else
                                            _fail(t);
                                          {
                                            ATerm e_17 = t;
                                            int f_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm h_15 = NULL;
                                                t = z_41;
                                                {
                                                  static ATerm j_16 (ATerm t);
                                                  static ATerm j_16 (ATerm t)
                                                  {
                                                    ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
                                                    g_16 = t;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        h_16 = ATgetFirst((ATermList) t);
                                                        i_16 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    {
                                                      ATerm g_17 = t;
                                                      int i_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm n_17 = NULL,q_17 = NULL,r_17 = NULL,o_3 = NULL;
                                                          t = SSLgetAnnotations(g_16);
                                                          n_17 = t;
                                                          t = h_16;
                                                          if(match_cons(t, sym_Id_0))
                                                            {
                                                              t = term_y_14;
                                                            }
                                                          else
                                                            {
                                                              if(!(match_cons(t, sym_Fail_0)))
                                                                _fail(t);
                                                              t = term_c_15;
                                                            }
                                                          q_17 = t;
                                                          t = i_16;
                                                          {
                                                            ATerm j_17 = t;
                                                            int k_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = j_16(t);
                                                                LocalPopChoice(k_17);
                                                              }
                                                            else
                                                              {
                                                                t = j_17;
                                                              }
                                                          }
                                                          r_17 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(r_17), q_17);
                                                          o_3 = t;
                                                          t = SSLsetAnnotations(o_3, n_17);
                                                          LocalPopChoice(i_17);
                                                        }
                                                      else
                                                        {
                                                          t = g_17;
                                                          {
                                                            ATerm h_18 = NULL,o_18 = NULL,p_3 = NULL;
                                                            t = SSLgetAnnotations(g_16);
                                                            h_18 = t;
                                                            t = i_16;
                                                            t = j_16(t);
                                                            o_18 = t;
                                                            t = (ATerm) ATinsert(CheckATermList(o_18), h_16);
                                                            p_3 = t;
                                                            t = SSLsetAnnotations(p_3, h_18);
                                                          }
                                                        }
                                                    }
                                                    return(t);
                                                  }
                                                  t = j_16(t);
                                                }
                                                h_15 = t;
                                                t = (ATerm) ATmakeAppl(sym_CallT_3, y_41, h_15, a_42);
                                                LocalPopChoice(f_17);
                                              }
                                            else
                                              {
                                                t = e_17;
                                                {
                                                  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
                                                  t = z_41;
                                                  t = genzip_4_0(b_2, c_2, d_2, e_2, t);
                                                  if(match_cons(t, sym__2))
                                                    {
                                                      q_19 = ATgetArgument(t, 0);
                                                      r_19 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = r_19;
                                                  t = concat_0_0(t);
                                                  s_19 = t;
                                                  {
                                                    ATerm l_17 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                          _fail(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = l_17;
                                                      }
                                                  }
                                                  t = (ATerm) ATmakeAppl(sym_Let_2, s_19, (ATerm) ATmakeAppl(sym_CallT_3, y_41, q_19, a_42));
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
static ATerm h_2 (ATerm t)
{
  ATerm m_17 = t;
  if((PushChoice() == 0))
    {
      ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL,f_4 = NULL;
      d_44 = t;
      if(match_cons(t, sym_Var_1))
        {
          c_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_44);
      b_44 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, c_44);
      f_4 = t;
      t = SSLsetAnnotations(f_4, b_44);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_17;
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_14;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_44 = ATgetFirst((ATermList) t);
      f_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_44, f_44);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_17 = ATgetArgument(t, 0);
      if(match_cons(o_17, sym__2))
        {
          g_44 = ATgetArgument(o_17, 0);
          h_44 = ATgetArgument(o_17, 1);
        }
      else
        _fail(t);
      {
        ATerm p_17 = ATgetArgument(t, 1);
        if(match_cons(p_17, sym__2))
          {
            i_44 = ATgetArgument(p_17, 0);
            j_44 = ATgetArgument(p_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_44), g_44), (ATerm) ATinsert(CheckATermList(j_44), h_44));
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_14;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_44 = ATgetFirst((ATermList) t);
      l_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_44, l_44);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      if(match_cons(s_17, sym__2))
        {
          m_44 = ATgetArgument(s_17, 0);
          n_44 = ATgetArgument(s_17, 1);
        }
      else
        _fail(t);
      {
        ATerm t_17 = ATgetArgument(t, 1);
        if(match_cons(t_17, sym__2))
          {
            o_44 = ATgetArgument(t_17, 0);
            p_44 = ATgetArgument(t_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_44), m_44), (ATerm) ATinsert(CheckATermList(p_44), n_44));
  return(t);
}
static ATerm c_6 (ATerm o_93, ATerm p_93, ATerm q_93, ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,k_4 = NULL;
  t = q_93;
  t = fetch_1_0(h_2, t);
  t = q_93;
  t = genzip_4_0(i_2, n_2, o_2, LiftPrimArg_0_0, t);
  a_44 = t;
  if(match_cons(t, sym__2))
    {
      w_43 = ATgetArgument(t, 0);
      x_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_44);
  v_43 = t;
  t = w_43;
  t = concat_0_0(t);
  y_43 = t;
  t = x_43;
  t = genzip_4_0(p_2, q_2, r_2, _id, t);
  z_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_43, z_43);
  k_4 = t;
  t = SSLsetAnnotations(k_4, v_43);
  if(match_cons(t, sym__2))
    {
      s_43 = ATgetArgument(t, 0);
      {
        ATerm u_17 = ATgetArgument(t, 1);
        if(match_cons(u_17, sym__2))
          {
            t_43 = ATgetArgument(u_17, 0);
            u_43 = ATgetArgument(u_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, s_43, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_43), (ATerm) ATmakeAppl(sym_CallT_3, o_93, p_93, u_43)));
  return(t);
}
ATerm genzip_4_0 (ATerm u_149 (ATerm), ATerm v_149 (ATerm), ATerm w_149 (ATerm), ATerm x_149 (ATerm), ATerm t)
{
  static ATerm x_44 (ATerm t);
  static ATerm x_44 (ATerm t)
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_149(t);
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
        {
          ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,n_4 = NULL;
          t = v_149(t);
          w_44 = t;
          if(match_cons(t, sym__2))
            {
              s_44 = ATgetArgument(t, 0);
              t_44 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_44);
          r_44 = t;
          t = s_44;
          t = x_149(t);
          u_44 = t;
          t = t_44;
          t = x_44(t);
          v_44 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_44, v_44);
          n_4 = t;
          t = SSLsetAnnotations(n_4, r_44);
          t = w_149(t);
        }
      }
    return(t);
  }
  t = x_44(t);
  return(t);
}
ATerm at_end_1_0 (ATerm h_148 (ATerm), ATerm t)
{
  static ATerm l_45 (ATerm t);
  static ATerm l_45 (ATerm t)
  {
    ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL;
    k_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_45 = ATgetFirst((ATermList) t);
        j_45 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_22 = NULL,k_22 = NULL,q_4 = NULL;
          t = SSLgetAnnotations(k_45);
          h_22 = t;
          t = j_45;
          t = l_45(t);
          k_22 = t;
          t = (ATerm) ATinsert(CheckATermList(k_22), i_45);
          q_4 = t;
          t = SSLsetAnnotations(q_4, h_22);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_45;
        t = h_148(t);
      }
    return(t);
  }
  t = l_45(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL;
  o_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_45;
    }
  else
    {
      static ATerm u_2 (ATerm t);
      static ATerm u_2 (ATerm t)
      {
        t = not_null(q_45);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_45 = ATgetFirst((ATermList) t);
          if(((q_45 != NULL) && (q_45 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_45;
      t = at_end_1_0(u_2, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm f_46 (ATerm w_45, ATerm t)
{
  ATerm y_45 = NULL;
  t = w_45;
  {
    ATerm x_17 = t;
    if((PushChoice() == 0))
      {
        ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL,v_4 = NULL;
        b_46 = t;
        if(match_cons(t, sym_Var_1))
          {
            a_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_46);
        z_45 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, a_46);
        v_4 = t;
        t = SSLsetAnnotations(v_4, z_45);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_17;
      }
  }
  t = new_0_0(t);
  y_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, y_45), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_45), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_45)))), (ATerm) ATmakeAppl(sym_Var_1, y_45)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL;
  c_46 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_46 = ATgetArgument(t, 0);
      {
        ATerm d_18 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_46(c_46, t);
            LocalPopChoice(e_18);
          }
        else
          {
            t = d_18;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_i_11, (ATerm) ATmakeAppl(sym_Var_1, d_46)));
          }
      }
    }
  else
    {
      t = f_46(c_46, t);
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm f_18 = t;
  if((PushChoice() == 0))
    {
      ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,x_4 = NULL;
      t_23 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_23);
      r_23 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, s_23);
      x_4 = t;
      t = SSLsetAnnotations(x_4, r_23);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_18;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_14;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_23 = ATgetFirst((ATermList) t);
      v_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_23, v_23);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm x_23 = NULL,b_24 = NULL,c_24 = NULL,e_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_18 = ATgetArgument(t, 0);
      if(match_cons(g_18, sym__2))
        {
          x_23 = ATgetArgument(g_18, 0);
          b_24 = ATgetArgument(g_18, 1);
        }
      else
        _fail(t);
      {
        ATerm j_18 = ATgetArgument(t, 1);
        if(match_cons(j_18, sym__2))
          {
            c_24 = ATgetArgument(j_18, 0);
            e_24 = ATgetArgument(j_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_24), x_23), (ATerm) ATinsert(CheckATermList(e_24), b_24));
  return(t);
}
static ATerm f_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_14;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_24 = ATgetFirst((ATermList) t);
      h_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_24, h_24);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,l_24 = NULL,n_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_18 = ATgetArgument(t, 0);
      if(match_cons(m_18, sym__2))
        {
          i_24 = ATgetArgument(m_18, 0);
          j_24 = ATgetArgument(m_18, 1);
        }
      else
        _fail(t);
      {
        ATerm n_18 = ATgetArgument(t, 1);
        if(match_cons(n_18, sym__2))
          {
            l_24 = ATgetArgument(n_18, 0);
            n_24 = ATgetArgument(n_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_24), i_24), (ATerm) ATinsert(CheckATermList(n_24), j_24));
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm p_18 = t;
  if((PushChoice() == 0))
    {
      ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,z_4 = NULL;
      j_25 = t;
      if(match_cons(t, sym_Var_1))
        {
          i_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_25);
      h_25 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, i_25);
      z_4 = t;
      t = SSLsetAnnotations(z_4, h_25);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_18;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_14;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_25 = ATgetFirst((ATermList) t);
      l_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_25, l_25);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm m_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_18 = ATgetArgument(t, 0);
      if(match_cons(q_18, sym__2))
        {
          m_25 = ATgetArgument(q_18, 0);
          u_25 = ATgetArgument(q_18, 1);
        }
      else
        _fail(t);
      {
        ATerm r_18 = ATgetArgument(t, 1);
        if(match_cons(r_18, sym__2))
          {
            v_25 = ATgetArgument(r_18, 0);
            w_25 = ATgetArgument(r_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_25), m_25), (ATerm) ATinsert(CheckATermList(w_25), u_25));
  return(t);
}
static ATerm s_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_14;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_25 = ATgetFirst((ATermList) t);
      y_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_25, y_25);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_18 = ATgetArgument(t, 0);
      if(match_cons(s_18, sym__2))
        {
          z_25 = ATgetArgument(s_18, 0);
          a_26 = ATgetArgument(s_18, 1);
        }
      else
        _fail(t);
      {
        ATerm t_18 = ATgetArgument(t, 1);
        if(match_cons(t_18, sym__2))
          {
            b_26 = ATgetArgument(t_18, 0);
            c_26 = ATgetArgument(t_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_26), z_25), (ATerm) ATinsert(CheckATermList(c_26), a_26));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL;
  y_48 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      z_48 = ATgetArgument(t, 0);
      a_49 = ATgetArgument(t, 1);
      x_48 = ATgetArgument(t, 2);
      {
        ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,p_23 = NULL,q_23 = NULL,y_4 = NULL;
        t = x_48;
        t = fetch_1_0(v_2, t);
        t = x_48;
        t = genzip_4_0(w_2, a_3, e_3, LiftPrimArg_0_0, t);
        q_23 = t;
        if(match_cons(t, sym__2))
          {
            a_23 = ATgetArgument(t, 0);
            b_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_23);
        z_22 = t;
        t = a_23;
        t = concat_0_0(t);
        c_23 = t;
        t = b_23;
        t = genzip_4_0(f_3, i_3, j_3, _id, t);
        p_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_23, p_23);
        y_4 = t;
        t = SSLsetAnnotations(y_4, z_22);
        if(match_cons(t, sym__2))
          {
            w_22 = ATgetArgument(t, 0);
            {
              ATerm u_18 = ATgetArgument(t, 1);
              if(match_cons(u_18, sym__2))
                {
                  x_22 = ATgetArgument(u_18, 0);
                  y_22 = ATgetArgument(u_18, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_22), (ATerm) ATmakeAppl(sym_PrimT_3, z_48, a_49, y_22)));
      }
    }
  else
    {
      ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,a_5 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          z_48 = ATgetArgument(t, 0);
          a_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_49;
      t = fetch_1_0(k_3, t);
      t = a_49;
      t = genzip_4_0(l_3, m_3, n_3, LiftPrimArg_0_0, t);
      g_25 = t;
      if(match_cons(t, sym__2))
        {
          c_25 = ATgetArgument(t, 0);
          d_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_25);
      b_25 = t;
      t = c_25;
      t = concat_0_0(t);
      e_25 = t;
      t = d_25;
      t = genzip_4_0(s_3, t_3, u_3, _id, t);
      f_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_25, f_25);
      a_5 = t;
      t = SSLsetAnnotations(a_5, b_25);
      if(match_cons(t, sym__2))
        {
          y_24 = ATgetArgument(t, 0);
          {
            ATerm v_18 = ATgetArgument(t, 1);
            if(match_cons(v_18, sym__2))
              {
                z_24 = ATgetArgument(v_18, 0);
                a_25 = ATgetArgument(v_18, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, y_24, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, z_24), (ATerm) ATmakeAppl(sym_PrimT_3, z_48, (ATerm)ATempty, a_25)));
    }
  return(t);
}
ATerm downup2_2_0 (ATerm j_141 (ATerm), ATerm k_141 (ATerm), ATerm t)
{
  t = j_141(t);
  {
    static ATerm v_3 (ATerm t);
    static ATerm v_3 (ATerm t)
    {
      t = downup2_2_0(j_141, k_141, t);
      return(t);
    }
    t = SRTS_all(v_3, t);
  }
  t = k_141(t);
  return(t);
}
static ATerm h_6 (ATerm i_50, ATerm j_50, ATerm t)
{
  ATerm d_49 = NULL;
  t = SSL_fputc(i_50, j_50);
  d_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_49);
  return(t);
}
static ATerm i_6 (ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm e_49 = NULL;
  t = SSL_write_term_to_stream_text(w_33, x_33);
  e_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_49);
  return(t);
}
static ATerm k_6 (ATerm h_147 (ATerm), ATerm l_207, ATerm c_34, ATerm t)
{
  ATerm f_49 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_207, term_w_18);
  t = o_6(t);
  f_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_49, c_34);
  t = h_147(t);
  t = fclose_0_0(t);
  t = c_34;
  return(t);
}
static ATerm j_6 (ATerm s_33, ATerm t_33, ATerm t)
{
  ATerm g_49 = NULL;
  t = SSL_write_term_to_stream_baf(s_33, t_33);
  g_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_49);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_18 = ATgetArgument(t, 0);
      if(match_cons(x_18, sym_Stream_1))
        {
          t_26 = ATgetArgument(x_18, 0);
        }
      else
        _fail(t);
      u_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(t_26, u_26, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,j_27 = NULL,k_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_18 = ATgetArgument(t, 0);
      if(match_cons(y_18, sym_Stream_1))
        {
          j_27 = ATgetArgument(y_18, 0);
        }
      else
        _fail(t);
      k_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(j_27, k_27, t);
  f_27 = t;
  t = term_z_18;
  g_27 = t;
  t = f_27;
  if(match_cons(t, sym_Stream_1))
    {
      h_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_18, f_27);
  t = h_6(g_27, h_27, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,a_51 = NULL,b_51 = NULL,g_5 = NULL,f_5 = NULL;
  l_49 = t;
  if(match_cons(t, sym__2))
    {
      s_49 = ATgetArgument(t, 0);
      t_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_49);
  r_49 = t;
  t = s_49;
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm w_3 (ATerm t);
        static ATerm w_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((k_49 != NULL) && (k_49 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(w_3, t);
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = term_c_19;
        k_49 = t;
      }
  }
  u_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_49, t_49);
  f_5 = t;
  t = SSLsetAnnotations(f_5, r_49);
  t = l_49;
  if(match_cons(t, sym__2))
    {
      n_49 = ATgetArgument(t, 0);
      o_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_49);
  m_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_49, (ATerm) ATmakeAppl(sym__2, not_null(k_49), o_49));
  g_5 = t;
  t = SSLsetAnnotations(g_5, m_49);
  q_49 = t;
  if(match_cons(t, sym__2))
    {
      a_51 = ATgetArgument(t, 0);
      b_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,h_5 = NULL;
        t = SSLgetAnnotations(q_49);
        m_26 = t;
        t = a_51;
        t = fetch_1_0(x_3, t);
        p_26 = t;
        t = b_51;
        if(match_cons(t, sym__2))
          {
            r_26 = ATgetArgument(t, 0);
            s_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_6(a_4, r_26, s_26, t);
        q_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_26, q_26);
        h_5 = t;
        t = SSLsetAnnotations(h_5, m_26);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        {
          ATerm z_26 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,i_5 = NULL;
          t = SSLgetAnnotations(q_49);
          z_26 = t;
          t = b_51;
          if(match_cons(t, sym__2))
            {
              d_27 = ATgetArgument(t, 0);
              e_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_6(b_4, d_27, e_27, t);
          c_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_51, c_27);
          i_5 = t;
          t = SSLsetAnnotations(i_5, z_26);
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
ATerm apply_strategy_1_0 (ATerm e_165 (ATerm), ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL;
  i_51 = t;
  t = dtime_0_0(t);
  t = i_51;
  t = e_165(t);
  h_51 = t;
  t = dtime_0_0(t);
  e_51 = t;
  t = h_51;
  if(match_cons(t, sym__2))
    {
      f_51 = ATgetArgument(t, 0);
      g_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_51), (ATerm) ATmakeAppl(sym_Runtime_1, e_51)), g_51);
  return(t);
}
static ATerm x_51 (ATerm r_51, ATerm t)
{
  t = SSL_fclose(r_51);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL;
  v_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_51 = ATgetArgument(t, 0);
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_51);
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            t = x_51(v_51, t);
          }
      }
    }
  else
    {
      t = x_51(v_51, t);
    }
  return(t);
}
static ATerm l_6 (ATerm y_33, ATerm t)
{
  t = SSL_read_term_from_stream(y_33);
  return(t);
}
static ATerm m_6 (ATerm j_48, ATerm k_48, ATerm t)
{
  t = SSL_strcat(j_48, k_48);
  return(t);
}
static ATerm n_6 (ATerm k_50, ATerm l_50, ATerm t)
{
  ATerm y_51 = NULL;
  t = SSL_fopen(k_50, l_50);
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_51);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_51 = NULL;
  t = SSL_stdin_stream();
  z_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_51);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_52 = NULL;
  t = SSL_stdout_stream();
  a_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_52);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_52 = NULL;
  t = SSL_stderr_stream();
  b_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_52);
  return(t);
}
static ATerm i_53 (ATerm h_52, ATerm t)
{
  ATerm i_52 = NULL;
  t = SSL_explode_term(h_52);
  if(match_cons(t, sym__2))
    {
      ATerm l_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_19 = ATgetArgument(t, 1);
        if(((ATgetType(m_19) == AT_LIST) && !(ATisEmpty(m_19))))
          {
            i_52 = ATgetFirst((ATermList) m_19);
            {
              ATerm n_19 = (ATerm) ATgetNext((ATermList) m_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_52;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_52;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_52;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_52;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_53 (ATerm l_52, ATerm m_52, ATerm n_52, ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL,t_52 = NULL,n_5 = NULL;
  t = SSLgetAnnotations(n_52);
  q_52 = t;
  t = l_52;
  if(match_cons(t, sym_Path_1))
    {
      t_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_52, m_52);
  n_5 = t;
  t = SSLsetAnnotations(n_5, q_52);
  if(match_cons(t, sym__2))
    {
      o_52 = ATgetArgument(t, 0);
      p_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(o_52, p_52, t);
  return(t);
}
static ATerm k_53 (ATerm v_52, ATerm w_52, ATerm x_52, ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL,d_53 = NULL,o_5 = NULL;
  t = SSLgetAnnotations(x_52);
  a_53 = t;
  t = SSL_is_string(v_52);
  d_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_53, w_52);
  o_5 = t;
  t = SSLsetAnnotations(o_5, a_53);
  if(match_cons(t, sym__2))
    {
      y_52 = ATgetArgument(t, 0);
      z_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(y_52, z_52, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL;
  f_53 = t;
  if(match_cons(t, sym__2))
    {
      g_53 = ATgetArgument(t, 0);
      h_53 = ATgetArgument(t, 1);
      {
        ATerm o_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_53(f_53, t);
            LocalPopChoice(p_19);
          }
        else
          {
            t = o_19;
            {
              ATerm t_19 = t;
              int v_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_53(g_53, h_53, f_53, t);
                  LocalPopChoice(v_19);
                }
              else
                {
                  t = t_19;
                  t = k_53(g_53, h_53, f_53, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_53(f_53, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL,t_53 = NULL;
  t_53 = t;
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_53, term_e_20);
        t = o_6(t);
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        {
          ATerm i_28 = NULL,j_28 = NULL;
          t = term_f_20;
          j_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_20, t_53);
          t = m_6(j_28, t_53, t);
          i_28 = t;
          t = SSL_perror(i_28);
          _fail(t);
        }
      }
  }
  n_53 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(o_53, t);
  m_53 = t;
  t = n_53;
  t = fclose_0_0(t);
  t = m_53;
  return(t);
}
ATerm fetch_1_0 (ATerm a_148 (ATerm), ATerm t)
{
  static ATerm u_54 (ATerm t);
  static ATerm u_54 (ATerm t)
  {
    ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL;
    r_54 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_54 = ATgetFirst((ATermList) t);
        t_54 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_20 = t;
      int l_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_28 = NULL,c_29 = NULL,s_5 = NULL;
          t = SSLgetAnnotations(r_54);
          s_28 = t;
          t = s_54;
          t = a_148(t);
          c_29 = t;
          t = (ATerm) ATinsert(CheckATermList(t_54), c_29);
          s_5 = t;
          t = SSLsetAnnotations(s_5, s_28);
          LocalPopChoice(l_20);
        }
      else
        {
          t = h_20;
          {
            ATerm k_29 = NULL,n_29 = NULL,t_5 = NULL;
            t = SSLgetAnnotations(r_54);
            k_29 = t;
            t = t_54;
            t = u_54(t);
            n_29 = t;
            t = (ATerm) ATinsert(CheckATermList(n_29), s_54);
            t_5 = t;
            t = SSLsetAnnotations(t_5, k_29);
          }
        }
    }
    return(t);
  }
  t = u_54(t);
  return(t);
}
static ATerm t_6 (ATerm l_57, ATerm m_57, ATerm t)
{
  ATerm x_54 = NULL;
  t = lookup_table_0_1(l_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6(m_57, x_54, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_163 (ATerm), ATerm t)
{
  ATerm a_55 = NULL;
  a_55 = t;
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL;
        t = term_k_8;
        d_55 = t;
        t = term_x_20;
        e_55 = t;
        t = term_a_21;
        t = t_6(d_55, e_55, t);
        c_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_55, term_b_21);
        t = geq_0_0(t);
        t = a_55;
        t = n_163(t);
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
        t = a_55;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL;
  i_55 = t;
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_55;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_21 = ATgetFirst((ATermList) t);
                ATerm h_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_55;
          }
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        t = (ATerm) ATinsert(ATempty, i_55);
      }
  }
  j_55 = t;
  t = term_c_19;
  k_55 = t;
  t = SSL_printnl(k_55, j_55);
  t = i_55;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm o_55 = NULL,p_55 = NULL;
  t = term_k_8;
  o_55 = t;
  t = term_l_8;
  p_55 = t;
  t = term_m_8;
  t = t_6(o_55, p_55, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm u_55 = NULL;
  u_55 = t;
  if(match_string(t, "-k"))
    {
      t = u_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_55;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
  v_55 = t;
  t = SSL_string_to_int(v_55);
  w_55 = t;
  t = term_i_21;
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_21, w_55);
  t = w_6(x_55, w_55, t);
  t = v_55;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_4, l_4, m_4, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm z_55 = NULL;
  z_55 = t;
  if(match_string(t, "-S"))
    {
      t = z_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_55;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL;
  t = term_x_20;
  a_56 = t;
  t = term_n_21;
  b_56 = t;
  t = term_o_21;
  t = w_6(a_56, b_56, t);
  t = term_p_21;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_q_21;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL;
  c_56 = t;
  t = SSL_string_to_int(c_56);
  d_56 = t;
  t = term_x_20;
  e_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_20, d_56);
  t = w_6(e_56, d_56, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_56);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_r_21;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL;
  t = term_s_21;
  f_56 = t;
  t = term_c_8;
  g_56 = t;
  t = term_t_21;
  t = w_6(f_56, g_56, t);
  t = term_u_21;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_4, p_4, r_4, t);
      LocalPopChoice(x_21);
    }
  else
    {
      t = w_21;
      {
        ATerm y_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_4, t_4, w_4, t);
            LocalPopChoice(z_21);
          }
        else
          {
            t = y_21;
            t = Option_3_0(b_5, c_5, d_5, t);
          }
      }
    }
  return(t);
}
static ATerm w_6 (ATerm j_69, ATerm k_69, ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL;
  t = term_k_8;
  h_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_8, j_69, k_69);
  t = lookup_table_0_1(h_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(j_69, k_69, i_56, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_8, j_69, k_69);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL;
      t = term_c_8;
      t = h_0(t);
      o_56 = t;
      t = term_u_8;
      p_56 = t;
      t = term_v_8;
      q_56 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_8, term_v_8, o_56);
      t = u_6(p_56, q_56, o_56, t);
      _fail(t);
    }
  else
    {
      ATerm t_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_56 = ATgetFirst((ATermList) t);
          n_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_56;
      t = d_0(t);
      t = term_c_8;
      t = f_0(t);
      t_56 = t;
      t = (ATerm) ATinsert(CheckATermList(n_56), t_56);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm v_56 = NULL;
  v_56 = t;
  if(match_string(t, "-o"))
    {
      t = v_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_56;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL;
  w_56 = t;
  t = term_a_22;
  x_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_22, w_56);
  t = w_6(x_56, w_56, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_56);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_b_22;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_5, j_5, k_5, t);
  return(t);
}
static ATerm u_6 (ATerm s_55, ATerm t_55, ATerm r_55, ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL;
  z_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_55, t_55);
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_22 = ATgetArgument(t, 0);
            ATerm f_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_55, t_55);
        t = t_6(s_55, t_55, t);
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        t = (ATerm) ATempty;
      }
  }
  a_57 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_55, t_55, (ATerm) ATinsert(CheckATermList(a_57), r_55));
  t = lookup_table_0_1(s_55, t);
  d_57 = t;
  t = (ATerm) ATinsert(CheckATermList(a_57), r_55);
  b_57 = t;
  t = d_57;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(t_55, b_57, c_57, t);
  t = z_56;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL;
      t = term_c_8;
      t = o_0(t);
      u_57 = t;
      t = term_u_8;
      v_57 = t;
      t = term_v_8;
      w_57 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_8, term_v_8, u_57);
      t = u_6(v_57, w_57, u_57, t);
      _fail(t);
    }
  else
    {
      ATerm a_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_57 = ATgetFirst((ATermList) t);
          r_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_57;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_57 = ATgetFirst((ATermList) t);
          t_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_57;
      t = l_0(t);
      t = s_57;
      t = m_0(t);
      a_58 = t;
      t = (ATerm) ATinsert(CheckATermList(t_57), a_58);
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm c_58 = NULL;
  c_58 = t;
  if(match_string(t, "-i"))
    {
      t = c_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_58;
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL;
  d_58 = t;
  t = term_g_22;
  e_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_22, d_58);
  t = w_6(e_58, d_58, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_58);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_i_22;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_5, m_5, p_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_8;
  t = whoami_0_0(t);
  f_58 = t;
  t = term_j_22;
  h_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_22), f_58);
  i_58 = t;
  t = SSL_printnl(h_58, i_58);
  t = term_m_22;
  g_58 = t;
  t = SSL_exit(g_58);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL;
  t = term_k_8;
  j_58 = t;
  t = term_l_8;
  k_58 = t;
  t = term_m_8;
  t = t_6(j_58, k_58, t);
  return(t);
}
static ATerm p_6 (ATerm b_54, ATerm c_54, ATerm t)
{
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_54, c_54);
      LocalPopChoice(o_22);
    }
  else
    {
      t = n_22;
      t = SSL_addr(b_54, c_54);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_154 (ATerm), ATerm q_154 (ATerm), ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL;
  m_58 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_58;
      t = p_154(t);
    }
  else
    {
      ATerm r_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_58 = ATgetFirst((ATermList) t);
          o_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_58;
      t = foldr_2_0(p_154, q_154, t);
      r_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_58, r_58);
      t = q_154(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_n_21;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL;
  if(match_cons(t, sym__2))
    {
      w_29 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(w_29, x_29, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_58 = NULL,s_29 = NULL,t_29 = NULL;
  t = times_0_0(t);
  t_29 = t;
  t = SSL_explode_term(t_29);
  if(match_cons(t, sym__2))
    {
      ATerm p_22 = ATgetArgument(t, 0);
      s_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_29;
  t = foldr_2_0(r_5, v_5, t);
  u_58 = t;
  t = SSL_TicksToSeconds(u_58);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL;
  f_59 = t;
  if(match_cons(t, sym__2))
    {
      g_59 = ATgetArgument(t, 0);
      h_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_59;
        if((g_59 != t))
          {
            _fail(t);
          }
        t = f_59;
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        t = (ATerm) ATmakeAppl(sym__2, g_59, h_59);
        {
          ATerm s_22 = t;
          int t_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_59, h_59);
              LocalPopChoice(t_22);
            }
          else
            {
              t = s_22;
              t = SSL_gtr(g_59, h_59);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_59, h_59);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_163 (ATerm), ATerm t)
{
  ATerm l_59 = NULL;
  l_59 = t;
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL;
        t = term_k_8;
        o_59 = t;
        t = term_x_20;
        p_59 = t;
        t = term_a_21;
        t = t_6(o_59, p_59, t);
        n_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_59, term_m_22);
        t = geq_0_0(t);
        t = l_59;
        t = m_163(t);
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        t = l_59;
      }
  }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm r_59 = NULL,s_59 = NULL,u_59 = NULL,v_59 = NULL;
  t = run_time_0_0(t);
  r_59 = t;
  t = term_c_8;
  t = whoami_0_0(t);
  s_59 = t;
  t = term_j_22;
  u_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_23), r_59), term_d_23), s_59);
  v_59 = t;
  t = SSL_printnl(u_59, v_59);
  t = (ATerm) ATmakeAppl(sym__2, term_j_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_23), r_59), term_d_23), s_59));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_59 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_21;
  w_59 = t;
  t = SSL_exit(w_59);
  return(t);
}
static ATerm x_6 (ATerm k_60, ATerm l_60, ATerm m_60, ATerm t)
{
  ATerm x_59 = NULL;
  t = SSL_hashtable_put(m_60, k_60, l_60);
  x_59 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_59);
  return(t);
}
static ATerm y_6 (ATerm n_60, ATerm o_60, ATerm t)
{
  t = SSL_hashtable_get(o_60, n_60);
  return(t);
}
ATerm lookup_table_0_1 (ATerm e_57, ATerm t)
{
  ATerm g_60 = NULL;
  t = table_hashtable_0_0(t);
  g_60 = t;
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_30 = NULL;
        t = g_60;
        if(match_cons(t, sym_Hashtable_1))
          {
            i_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_6(e_57, i_30, t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        {
          ATerm n_30 = NULL;
          t = e_57;
          t = table_create_0_0(t);
          t = g_60;
          if(match_cons(t, sym_Hashtable_1))
            {
              n_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_6(e_57, n_30, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm s_60, ATerm t_60, ATerm t)
{
  ATerm j_60 = NULL;
  t = SSL_hashtable_create(s_60, t_60);
  j_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_60);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm r_60 = NULL,v_60 = NULL,w_60 = NULL,y_60 = NULL,z_60 = NULL;
  r_60 = t;
  t = term_k_23;
  y_60 = t;
  t = term_l_23;
  z_60 = t;
  t = r_60;
  t = new_hashtable_0_2(y_60, z_60, t);
  v_60 = t;
  t = r_60;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(r_60, v_60, w_60, t);
  t = r_60;
  return(t);
}
static ATerm r_6 (ATerm p_60, ATerm q_60, ATerm t)
{
  ATerm a_61 = NULL;
  t = SSL_hashtable_remove(q_60, p_60);
  a_61 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_61);
  return(t);
}
static ATerm s_6 (ATerm u_60, ATerm t)
{
  ATerm b_61 = NULL;
  t = SSL_hashtable_destroy(u_60);
  b_61 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_61);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm c_61 = NULL;
  t = SSL_table_hashtable();
  c_61 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_61);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL;
  d_61 = t;
  t = table_hashtable_0_0(t);
  e_61 = t;
  t = lookup_table_0_1(d_61, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(g_61, t);
  t = e_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(d_61, f_61, t);
  t = d_61;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm h_61 = NULL,i_61 = NULL;
  t = term_m_23;
  h_61 = t;
  t = term_c_8;
  i_61 = t;
  t = term_n_23;
  t = w_6(h_61, i_61, t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_o_23;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL;
  t = term_m_23;
  l_61 = t;
  t = term_c_8;
  m_61 = t;
  t = term_n_23;
  t = w_6(l_61, m_61, t);
  t = term_w_23;
  j_61 = t;
  t = term_c_8;
  k_61 = t;
  t = term_y_23;
  t = w_6(j_61, k_61, t);
  t = term_z_23;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_a_24;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_5, d_6, f_6, t);
      LocalPopChoice(f_24);
    }
  else
    {
      t = d_24;
      t = Option_3_0(q_6, z_6, a_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_118 (ATerm), ATerm j_118 (ATerm), ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,b_6 = NULL;
  s_61 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_61 = ATgetFirst((ATermList) t);
      p_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_61);
  n_61 = t;
  t = o_61;
  t = i_118(t);
  q_61 = t;
  t = p_61;
  t = j_118(t);
  r_61 = t;
  t = (ATerm) ATinsert(CheckATermList(r_61), q_61);
  b_6 = t;
  t = SSLsetAnnotations(b_6, n_61);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_168 (ATerm), ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL,c_62 = NULL,d_62 = NULL,g_6 = NULL;
  x_61 = t;
  {
    ATerm k_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_24;
        t = k_168(t);
        LocalPopChoice(m_24);
      }
    else
      {
        t = k_24;
      }
  }
  t = x_61;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_61 = ATgetFirst((ATermList) t);
      a_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_61);
  y_61 = t;
  t = term_l_8;
  d_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_8, z_61);
  t = w_6(d_62, z_61, t);
  t = a_62;
  {
    static ATerm n_62 (ATerm t);
    static ATerm n_62 (ATerm t)
    {
      ATerm p_24 = t;
      int q_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_24 = t;
          int s_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_62 = NULL;
              g_62 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_62;
              LocalPopChoice(s_24);
            }
          else
            {
              t = r_24;
              t = k_168(t);
              t = Cons_2_0(_id, n_62, t);
            }
          LocalPopChoice(q_24);
        }
      else
        {
          t = p_24;
          {
            ATerm j_62 = NULL,k_62 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_62 = ATgetFirst((ATermList) t);
                k_62 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_62), (ATerm) ATmakeAppl(sym_Undefined_1, j_62));
          }
        }
      return(t);
    }
    t = n_62(t);
  }
  c_62 = t;
  t = (ATerm) ATinsert(CheckATermList(c_62), (ATerm) ATmakeAppl(sym_Program_1, z_61));
  g_6 = t;
  t = SSLsetAnnotations(g_6, y_61);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm a_63 = NULL;
  a_63 = t;
  if(match_string(t, "--help"))
    {
      t = a_63;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_63;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_63;
        }
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL;
  t = term_t_24;
  b_63 = t;
  t = term_c_8;
  c_63 = t;
  t = term_u_24;
  t = w_6(b_63, c_63, t);
  t = term_v_24;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_w_24;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm h_168 (ATerm), ATerm i_168 (ATerm), ATerm j_168 (ATerm), ATerm t)
{
  ATerm s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL;
  u_62 = t;
  t = term_u_8;
  v_62 = t;
  t = term_x_24;
  t = lookup_table_0_1(v_62, t);
  z_62 = t;
  t = term_v_8;
  w_62 = t;
  t = (ATerm) ATempty;
  x_62 = t;
  t = z_62;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(w_62, x_62, y_62, t);
  t = u_62;
  {
    static ATerm b_7 (ATerm t);
    static ATerm b_7 (ATerm t)
    {
      ATerm o_25 = t;
      int q_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_168(t);
          LocalPopChoice(q_25);
        }
      else
        {
          t = o_25;
          {
            ATerm r_25 = t;
            int s_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_7, d_7, e_7, t);
                LocalPopChoice(s_25);
              }
            else
              {
                t = r_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_7, t);
  }
  {
    ATerm t_25 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_63 = NULL;
        n_63 = t;
        {
          ATerm e_26 = t;
          int f_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_30 = NULL;
              t = n_63;
              {
                ATerm g_26 = t;
                int h_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_30 = NULL,t_30 = NULL;
                    t = term_k_8;
                    s_30 = t;
                    t = term_t_24;
                    t_30 = t;
                    t = term_i_26;
                    t = t_6(s_30, t_30, t);
                    LocalPopChoice(h_26);
                  }
                else
                  {
                    t = g_26;
                    t = fetch_1_0(f_7, t);
                  }
              }
              t = n_63;
              t = i_168(t);
              t = term_n_21;
              r_30 = t;
              t = SSL_exit(r_30);
              LocalPopChoice(f_26);
            }
          else
            {
              t = e_26;
              {
                ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL;
                t = term_k_8;
                y_30 = t;
                t = term_m_23;
                z_30 = t;
                t = term_j_26;
                t = t_6(y_30, z_30, t);
                t = n_63;
                t = j_168(t);
                t = term_n_21;
                x_30 = t;
                t = SSL_exit(x_30);
              }
            }
        }
        LocalPopChoice(d_26);
      }
    else
      {
        t = t_25;
        {
          ATerm k_26 = t;
          int l_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_63 = NULL,p_63 = NULL,q_63 = NULL;
              static ATerm g_7 (ATerm t);
              static ATerm g_7 (ATerm t)
              {
                ATerm r_63 = NULL,s_63 = NULL,t_63 = NULL,v_6 = NULL;
                t_63 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_63 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_63);
                r_63 = t;
                t = s_63;
                if(((s_62 != NULL) && (s_62 != t)))
                  _fail(t);
                else
                  s_62 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_63);
                v_6 = t;
                t = SSLsetAnnotations(v_6, r_63);
                return(t);
              }
              t = fetch_1_0(g_7, t);
              t = term_j_22;
              p_63 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_62)), term_n_26);
              q_63 = t;
              t = SSL_printnl(p_63, q_63);
              t = (ATerm) ATmakeAppl(sym__2, term_j_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_62)), term_n_26));
              t = i_168(t);
              t = term_m_22;
              o_63 = t;
              t = SSL_exit(o_63);
              LocalPopChoice(l_26);
            }
          else
            {
              t = k_26;
            }
        }
      }
  }
  t_62 = t;
  t = term_u_8;
  t = table_destroy_0_0(t);
  t = t_62;
  return(t);
}
ATerm option_wrap_5_0 (ATerm k_166 (ATerm), ATerm l_166 (ATerm), ATerm m_166 (ATerm), ATerm n_166 (ATerm), ATerm o_166 (ATerm), ATerm t)
{
  ATerm y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL;
  t = parse_options_3_0(k_166, l_166, m_166, t);
  y_63 = t;
  t = term_o_26;
  t = table_create_0_0(t);
  t = term_o_26;
  z_63 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_26, term_v_26, y_63);
  t = lookup_table_0_1(z_63, t);
  c_64 = t;
  t = term_v_26;
  a_64 = t;
  t = c_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(a_64, y_63, b_64, t);
  t = y_63;
  t = n_166(t);
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_166(t);
        t = report_success_0_0(t);
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = if_verbose2_1_0(r_7, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm d_64 = NULL,e_64 = NULL;
  t = term_y_26;
  d_64 = t;
  t = term_c_8;
  e_64 = t;
  t = term_a_27;
  t = w_6(d_64, e_64, t);
  t = term_b_27;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_i_27;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL;
  f_64 = t;
  t = term_k_8;
  j_64 = t;
  t = term_l_8;
  k_64 = t;
  t = term_m_8;
  t = t_6(j_64, k_64, t);
  g_64 = t;
  t = term_j_22;
  h_64 = t;
  t = (ATerm) ATinsert(ATempty, g_64);
  i_64 = t;
  t = SSL_printnl(h_64, i_64);
  t = f_64;
  return(t);
}
ATerm iowrap_3_0 (ATerm n_165 (ATerm), ATerm o_165 (ATerm), ATerm p_165 (ATerm), ATerm t)
{
  static ATerm h_7 (ATerm t);
  static ATerm m_7 (ATerm t);
  static ATerm h_7 (ATerm t)
  {
    ATerm n_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_165(t);
        LocalPopChoice(o_27);
      }
    else
      {
        t = n_27;
        {
          ATerm r_27 = t;
          int t_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(t_27);
            }
          else
            {
              t = r_27;
              {
                ATerm v_27 = t;
                int w_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(w_27);
                  }
                else
                  {
                    t = v_27;
                    {
                      ATerm x_27 = t;
                      int y_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(o_7, p_7, q_7, t);
                          LocalPopChoice(y_27);
                        }
                      else
                        {
                          t = x_27;
                          {
                            ATerm z_27 = t;
                            int a_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(a_28);
                              }
                            else
                              {
                                t = z_27;
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
  static ATerm m_7 (ATerm t)
  {
    ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL;
    m_64 = t;
    {
      ATerm b_28 = t;
      int c_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm v_7 (ATerm t);
          static ATerm v_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((l_64 != NULL) && (l_64 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_64 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_7, t);
          LocalPopChoice(c_28);
        }
      else
        {
          t = b_28;
          t = term_d_28;
          l_64 = t;
        }
    }
    t = not_null(l_64);
    t = ReadFromFile_0_0(t);
    n_64 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_64, n_64);
    t = apply_strategy_1_0(n_165, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(h_7, p_165, default_system_about_0_0, j_7, m_7, t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,n_7 = NULL;
  w_64 = t;
  if(match_cons(t, sym__2))
    {
      t_64 = ATgetArgument(t, 0);
      u_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_64);
  s_64 = t;
  t = u_64;
  t = downup2_2_0(y_7, z_7, t);
  t = downup_1_0(b_8, t);
  v_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_64, v_64);
  n_7 = t;
  t = SSLsetAnnotations(n_7, s_64);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = repeat_2_0(a_8, _id, t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = repeat_2_0(Canon_0_0, _id, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm e_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Canon_0_0(t);
      LocalPopChoice(g_28);
    }
  else
    {
      t = e_28;
      {
        ATerm k_28 = t;
        int m_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            LocalPopChoice(m_28);
          }
        else
          {
            t = k_28;
            {
              ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL;
              x_64 = t;
              if(match_cons(t, sym_CallT_3))
                {
                  y_64 = ATgetArgument(t, 0);
                  z_64 = ATgetArgument(t, 1);
                  a_65 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = x_64;
              t = c_6(y_64, z_64, a_65, t);
            }
          }
      }
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(x_7, _fail, default_system_usage_0_0, t);
  return(t);
}

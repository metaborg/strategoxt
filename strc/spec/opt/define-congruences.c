#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_As_2;
static Symbol sym_RootApp_1;
static Symbol sym_App_2;
static Symbol sym_Anno_2;
static Symbol sym_Explode_2;
static Symbol sym_Op_2;
static Symbol sym_Wld_0;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_SVar_1;
static Symbol sym_AM_2;
static Symbol sym_Choice_2;
static Symbol sym_All_1;
static Symbol sym_One_1;
static Symbol sym_Some_1;
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
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
static Symbol sym_Call_2;
static Symbol sym_Let_2;
static Symbol sym_Id_0;
static Symbol sym_Fail_0;
static Symbol sym_SDefT_4;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_As_2;
static Symbol sym_RootApp_1;
static Symbol sym_App_2;
static Symbol sym_Anno_2;
static Symbol sym_Explode_2;
static Symbol sym_Op_2;
static Symbol sym_Wld_0;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_SVar_1;
static Symbol sym_AM_2;
static Symbol sym_Choice_2;
static Symbol sym_All_1;
static Symbol sym_One_1;
static Symbol sym_Some_1;
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
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
static Symbol sym_Call_2;
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
static Symbol sym_Some_1;
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
static Symbol sym_Var_1;
static Symbol sym_Path_1;
static Symbol sym_Undefined_0;
static Symbol sym_Hashtable_1;
static Symbol sym_Anno_2;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_Cong_2;
static void init_module_constructors (void)
{
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
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
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
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
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
}
static ATerm term_s_34;
static ATerm term_r_34;
static ATerm term_p_34;
static ATerm term_d_34;
static ATerm term_c_34;
static ATerm term_b_34;
static ATerm term_y_33;
static ATerm term_x_33;
static ATerm term_l_33;
static ATerm term_k_33;
static ATerm term_j_33;
static ATerm term_i_33;
static ATerm term_g_33;
static ATerm term_b_33;
static ATerm term_w_32;
static ATerm term_v_32;
static ATerm term_u_32;
static ATerm term_t_32;
static ATerm term_s_32;
static ATerm term_r_32;
static ATerm term_q_32;
static ATerm term_n_32;
static ATerm term_m_32;
static ATerm term_i_32;
static ATerm term_h_32;
static ATerm term_g_32;
static ATerm term_w_31;
static ATerm term_v_31;
static ATerm term_u_31;
static ATerm term_t_31;
static ATerm term_n_31;
static ATerm term_i_31;
static ATerm term_h_31;
static ATerm term_g_31;
static ATerm term_f_31;
static ATerm term_e_31;
static ATerm term_d_31;
static ATerm term_c_31;
static ATerm term_b_31;
static ATerm term_a_31;
static ATerm term_z_30;
static ATerm term_y_30;
static ATerm term_x_30;
static ATerm term_q_30;
static ATerm term_p_30;
static ATerm term_o_30;
static ATerm term_m_30;
static ATerm term_l_30;
static ATerm term_g_30;
static ATerm term_f_30;
static ATerm term_a_30;
static ATerm term_z_29;
static ATerm term_y_29;
static ATerm term_x_29;
static ATerm term_v_29;
static ATerm term_s_29;
static ATerm term_r_29;
static ATerm term_b_29;
static ATerm term_a_29;
static ATerm term_x_28;
static ATerm term_w_28;
static ATerm term_v_28;
static ATerm term_u_28;
static ATerm term_r_28;
static ATerm term_o_28;
static ATerm term_h_28;
static ATerm term_d_28;
static ATerm term_e_27;
static ATerm term_f_23;
static ATerm term_r_6;
static ATerm term_j_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym__2, term_u_28, term_v_28);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__2, term_u_28, term_a_29);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym__2, term_u_28, term_v_29);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym__2, term_u_28, term_z_29);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym__2, term_m_30, term_o_30);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym__2, term_z_30, term_a_31);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_31);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym__2, term_f_31, term_f_30);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_u_28, term_z_30);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym__2, term_q_32, term_f_30);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_t_32, term_f_30);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym__2, term_g_33, term_f_30);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym__3, term_m_30, term_o_30, (ATerm) ATempty);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym__2, term_u_28, term_g_33);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym__2, term_u_28, term_q_32);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym__2, term_a_29, term_f_30);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm simplify_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm a_137 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
static ATerm g_5 (ATerm n_108, ATerm m_108, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm e_138 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm v_11 (ATerm o_107, ATerm u_107, ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm a_160 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm d_73 (ATerm v_72, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm r_141 (ATerm), ATerm s_141 (ATerm), ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm z_11 (ATerm z_107, ATerm h_108, ATerm g_108, ATerm t);
ATerm pat_td_1_0 (ATerm v_134 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm MatchingCongruence_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm b_147 (ATerm), ATerm c_147 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm b_137 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm define_congruences_0_0 (ATerm t);
ATerm map_1_0 (ATerm l_159 (ATerm), ATerm t);
static ATerm a_12 (ATerm w_47, ATerm x_47, ATerm t);
static ATerm b_12 (ATerm k_53, ATerm l_53, ATerm t);
static ATerm d_12 (ATerm s_151 (ATerm), ATerm i_490, ATerm q_53, ATerm t);
static ATerm c_12 (ATerm g_53, ATerm h_53, ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm output_1_0 (ATerm l_169 (ATerm), ATerm t);
static ATerm z_81 (ATerm r_81, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_12 (ATerm m_53, ATerm t);
static ATerm f_12 (ATerm c_46, ATerm d_46, ATerm t);
static ATerm g_12 (ATerm y_47, ATerm z_47, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_83 (ATerm j_82, ATerm t);
static ATerm n_83 (ATerm n_82, ATerm o_82, ATerm p_82, ATerm t);
static ATerm o_83 (ATerm x_82, ATerm y_82, ATerm z_82, ATerm t);
static ATerm h_12 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm m_169 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm default_system_usage_2_0 (ATerm k_171 (ATerm), ATerm l_171 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_12 (ATerm a_52, ATerm b_52, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_12 (ATerm l_57, ATerm m_57, ATerm k_57, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_12 (ATerm t_54, ATerm u_54, ATerm t);
ATerm foldr_2_0 (ATerm r_161 (ATerm), ATerm s_161 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_149 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_12 (ATerm a_62, ATerm b_62, ATerm c_62, ATerm t);
ATerm lookup_table_0_1 (ATerm x_58, ATerm t);
ATerm new_hashtable_0_2 (ATerm i_62, ATerm j_62, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm k_12 (ATerm f_62, ATerm g_62, ATerm t);
static ATerm l_12 (ATerm k_62, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm t_159 (ATerm), ATerm t);
static ATerm s_12 (ATerm d_62, ATerm e_62, ATerm t);
static ATerm n_12 (ATerm e_59, ATerm f_59, ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm f_171 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm parse_options_3_0 (ATerm c_171 (ATerm), ATerm d_171 (ATerm), ATerm e_171 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm f_169 (ATerm), ATerm g_169 (ATerm), ATerm h_169 (ATerm), ATerm i_169 (ATerm), ATerm j_169 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_5 = ATgetArgument(t, 0);
      if(((ATgetType(h_5) != AT_LIST) || !(ATisEmpty(h_5))))
        _fail(t);
      {
        ATerm i_5 = ATgetArgument(t, 1);
        if(((ATgetType(i_5) != AT_LIST) || !(ATisEmpty(i_5))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_5 = ATgetArgument(t, 0);
      if(((ATgetType(k_5) == AT_LIST) && !(ATisEmpty(k_5))))
        {
          o_15 = ATgetFirst((ATermList) k_5);
          p_15 = (ATerm) ATgetNext((ATermList) k_5);
        }
      else
        _fail(t);
      {
        ATerm l_5 = ATgetArgument(t, 1);
        if(((ATgetType(l_5) == AT_LIST) && !(ATisEmpty(l_5))))
          {
            q_15 = ATgetFirst((ATermList) l_5);
            r_15 = (ATerm) ATgetNext((ATermList) l_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_15, q_15), (ATerm) ATmakeAppl(sym__2, p_15, r_15));
  return(t);
}
static ATerm e_0 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  if(match_cons(t, sym__2))
    {
      s_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_15), s_15);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm u_15 = NULL,x_15 = NULL;
  if(match_cons(t, sym__2))
    {
      u_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_15), (ATerm) ATmakeAppl(sym_Match_1, x_15));
  return(t);
}
static ATerm k_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_5 = ATgetArgument(t, 0);
      if(((ATgetType(m_5) != AT_LIST) || !(ATisEmpty(m_5))))
        _fail(t);
      {
        ATerm n_5 = ATgetArgument(t, 1);
        if(((ATgetType(n_5) != AT_LIST) || !(ATisEmpty(n_5))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_5 = ATgetArgument(t, 0);
      if(((ATgetType(o_5) == AT_LIST) && !(ATisEmpty(o_5))))
        {
          t_23 = ATgetFirst((ATermList) o_5);
          u_23 = (ATerm) ATgetNext((ATermList) o_5);
        }
      else
        _fail(t);
      {
        ATerm t_5 = ATgetArgument(t, 1);
        if(((ATgetType(t_5) == AT_LIST) && !(ATisEmpty(t_5))))
          {
            v_23 = ATgetFirst((ATermList) t_5);
            w_23 = (ATerm) ATgetNext((ATermList) t_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_23, v_23), (ATerm) ATmakeAppl(sym__2, u_23, w_23));
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm y_23 = NULL,d_24 = NULL;
  if(match_cons(t, sym__2))
    {
      y_23 = ATgetArgument(t, 0);
      d_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_24), y_23);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm f_24 = NULL,k_24 = NULL;
  if(match_cons(t, sym__2))
    {
      f_24 = ATgetArgument(t, 0);
      k_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_24), (ATerm) ATmakeAppl(sym_Match_1, k_24));
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm v_5 = t;
  int w_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm x_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(w_5);
      {
        ATerm d_42 = NULL,e_42 = NULL;
        d_42 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm y_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        e_42 = t;
        t = SSLgetAnnotations(d_42);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_5 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) z_5) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm a_6 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(a_6) != AT_LIST) || !(ATisEmpty(a_6))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_42;
      }
    }
  else
    {
      t = v_5;
      {
        ATerm c_6 = t;
        int d_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm f_6 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) f_6) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm g_6 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(d_6);
            _fail(t);
          }
        else
          {
            t = c_6;
          }
      }
    }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL,u_5 = NULL,s_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,f_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,y_8 = NULL,a_9 = NULL;
    a_9 = t;
    if(match_cons(t, sym_Test_1))
      {
        y_8 = ATgetArgument(t, 0);
        t = y_8;
        if(match_cons(t, sym_Id_0))
          {
            ATerm h_6 = t;
            int i_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_j_6;
                t = a_0(t);
                LocalPopChoice(i_6);
              }
            else
              {
                t = h_6;
                {
                  ATerm k_6 = t;
                  int l_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_9 = NULL,u_9 = NULL,f_10 = NULL,o_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL;
                      t = a_9;
                      t = new_0_0(t);
                      s_9 = t;
                      t = bottomup_1_0(a_0, t);
                      y_10 = t;
                      t = (ATerm) ATempty;
                      t = a_0(t);
                      z_10 = t;
                      t = (ATerm) ATinsert(CheckATermList(z_10), y_10);
                      t = a_0(t);
                      u_9 = t;
                      t = s_9;
                      t = bottomup_1_0(a_0, t);
                      x_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, x_10);
                      t = a_0(t);
                      w_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, w_10);
                      t = a_0(t);
                      o_10 = t;
                      t = y_8;
                      t = bottomup_1_0(a_0, t);
                      s_10 = t;
                      t = s_9;
                      t = bottomup_1_0(a_0, t);
                      v_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, v_10);
                      t = a_0(t);
                      u_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, u_10);
                      t = a_0(t);
                      t_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_10, t_10);
                      t = a_0(t);
                      r_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_10, r_10);
                      t = a_0(t);
                      f_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, u_9, f_10);
                      t = a_0(t);
                      LocalPopChoice(l_6);
                    }
                  else
                    {
                      t = k_6;
                      t = a_9;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm n_6 = t;
                int o_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_r_6;
                    t = a_0(t);
                    LocalPopChoice(o_6);
                  }
                else
                  {
                    t = n_6;
                    {
                      ATerm s_6 = t;
                      int t_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
                          t = a_9;
                          t = new_0_0(t);
                          c_11 = t;
                          t = bottomup_1_0(a_0, t);
                          n_11 = t;
                          t = (ATerm) ATempty;
                          t = a_0(t);
                          o_11 = t;
                          t = (ATerm) ATinsert(CheckATermList(o_11), n_11);
                          t = a_0(t);
                          d_11 = t;
                          t = c_11;
                          t = bottomup_1_0(a_0, t);
                          m_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, m_11);
                          t = a_0(t);
                          l_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, l_11);
                          t = a_0(t);
                          f_11 = t;
                          t = y_8;
                          t = bottomup_1_0(a_0, t);
                          h_11 = t;
                          t = c_11;
                          t = bottomup_1_0(a_0, t);
                          k_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, k_11);
                          t = a_0(t);
                          j_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, j_11);
                          t = a_0(t);
                          i_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_11, i_11);
                          t = a_0(t);
                          g_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_11, g_11);
                          t = a_0(t);
                          e_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, d_11, e_11);
                          t = a_0(t);
                          LocalPopChoice(t_6);
                        }
                      else
                        {
                          t = s_6;
                          t = a_9;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    t_8 = ATgetArgument(t, 0);
                    {
                      ATerm u_6 = t;
                      int v_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, t_8);
                          t = a_0(t);
                          LocalPopChoice(v_6);
                        }
                      else
                        {
                          t = u_6;
                          {
                            ATerm w_6 = t;
                            int x_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,j_12 = NULL,m_12 = NULL,p_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
                                t = a_9;
                                t = new_0_0(t);
                                s_11 = t;
                                t = bottomup_1_0(a_0, t);
                                v_12 = t;
                                t = (ATerm) ATempty;
                                t = a_0(t);
                                w_12 = t;
                                t = (ATerm) ATinsert(CheckATermList(w_12), v_12);
                                t = a_0(t);
                                t_11 = t;
                                t = s_11;
                                t = bottomup_1_0(a_0, t);
                                u_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, u_12);
                                t = a_0(t);
                                t_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, t_12);
                                t = a_0(t);
                                w_11 = t;
                                t = y_8;
                                t = bottomup_1_0(a_0, t);
                                y_11 = t;
                                t = s_11;
                                t = bottomup_1_0(a_0, t);
                                p_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, p_12);
                                t = a_0(t);
                                m_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, m_12);
                                t = a_0(t);
                                j_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, j_12);
                                t = a_0(t);
                                x_11 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                t = a_0(t);
                                u_11 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, u_11);
                                t = a_0(t);
                                LocalPopChoice(x_6);
                              }
                            else
                              {
                                t = w_6;
                                t = a_9;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm y_6 = t;
                    int z_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL;
                        t = a_9;
                        t = new_0_0(t);
                        z_12 = t;
                        t = bottomup_1_0(a_0, t);
                        k_13 = t;
                        t = (ATerm) ATempty;
                        t = a_0(t);
                        l_13 = t;
                        t = (ATerm) ATinsert(CheckATermList(l_13), k_13);
                        t = a_0(t);
                        a_13 = t;
                        t = z_12;
                        t = bottomup_1_0(a_0, t);
                        j_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, j_13);
                        t = a_0(t);
                        i_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, i_13);
                        t = a_0(t);
                        c_13 = t;
                        t = y_8;
                        t = bottomup_1_0(a_0, t);
                        e_13 = t;
                        t = z_12;
                        t = bottomup_1_0(a_0, t);
                        h_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, h_13);
                        t = a_0(t);
                        g_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, g_13);
                        t = a_0(t);
                        f_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_13, f_13);
                        t = a_0(t);
                        d_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, c_13, d_13);
                        t = a_0(t);
                        b_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, a_13, b_13);
                        t = a_0(t);
                        LocalPopChoice(z_6);
                      }
                    else
                      {
                        t = y_6;
                        t = a_9;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            y_8 = ATgetArgument(t, 0);
            t = y_8;
            if(match_cons(t, sym_Id_0))
              {
                ATerm a_7 = t;
                int b_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_r_6;
                    t = a_0(t);
                    LocalPopChoice(b_7);
                  }
                else
                  {
                    t = a_7;
                    t = a_9;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm c_7 = t;
                    int f_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_j_6;
                        t = a_0(t);
                        LocalPopChoice(f_7);
                      }
                    else
                      {
                        t = c_7;
                        t = a_9;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        t_8 = ATgetArgument(t, 0);
                        {
                          ATerm i_7 = t;
                          int m_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, t_8);
                              t = a_0(t);
                              LocalPopChoice(m_7);
                            }
                          else
                            {
                              t = i_7;
                              t = a_9;
                            }
                        }
                      }
                    else
                      {
                        t = a_9;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                y_8 = ATgetArgument(t, 0);
                v_8 = ATgetArgument(t, 1);
                t = v_8;
                if(match_cons(t, sym_Id_0))
                  {
                    t = y_8;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = v_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = y_8;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                t_8 = ATgetArgument(t, 0);
                                u_8 = ATgetArgument(t, 1);
                                t = y_8;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    t_8 = ATgetArgument(t, 0);
                                    u_8 = ATgetArgument(t, 1);
                                    t = y_8;
                                  }
                                else
                                  {
                                    t = y_8;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        n_8 = ATgetArgument(t, 0);
                        s_8 = ATgetArgument(t, 1);
                        t = n_8;
                        if(match_cons(t, sym_Match_1))
                          {
                            m_8 = ATgetArgument(t, 0);
                            t = m_8;
                            if(match_cons(t, sym_Op_2))
                              {
                                f_8 = ATgetArgument(t, 0);
                                w_7 = ATgetArgument(t, 1);
                                t = y_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = v_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm n_7 = t;
                                        int o_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_r_6;
                                            t = a_0(t);
                                            LocalPopChoice(o_7);
                                          }
                                        else
                                          {
                                            t = n_7;
                                            t = a_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            t_8 = ATgetArgument(t, 0);
                                            u_8 = ATgetArgument(t, 1);
                                            {
                                              ATerm p_7 = t;
                                              int q_7 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm b_15 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                  t = a_0(t);
                                                  b_15 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, b_15);
                                                  t = a_0(t);
                                                  LocalPopChoice(q_7);
                                                }
                                              else
                                                {
                                                  t = p_7;
                                                  t = a_9;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                t = t_8;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    l_8 = ATgetArgument(t, 0);
                                                    x_7 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm r_7 = t;
                                                      int t_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, l_8, f_8);
                                                          {
                                                            ATerm u_7 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm h_0 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    h_0 = ATgetArgument(t, 0);
                                                                    if((h_0 != ATgetArgument(t, 1)))
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
                                                                t = u_7;
                                                              }
                                                          }
                                                          t = term_r_6;
                                                          t = bottomup_1_0(a_0, t);
                                                          LocalPopChoice(t_7);
                                                        }
                                                      else
                                                        {
                                                          t = r_7;
                                                          {
                                                            ATerm y_7 = t;
                                                            int z_7 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm n_15 = NULL;
                                                                t = f_8;
                                                                if((l_8 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, x_7, w_7);
                                                                t = genzip_4_0(b_0, c_0, e_0, i_0, t);
                                                                n_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, l_8, x_7)), s_8));
                                                                t = bottomup_1_0(a_0, t);
                                                                LocalPopChoice(z_7);
                                                              }
                                                            else
                                                              {
                                                                t = y_7;
                                                                {
                                                                  ATerm e_8 = t;
                                                                  int g_8 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm a_16 = NULL;
                                                                      t = m_8;
                                                                      if((t_8 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                                      t = a_0(t);
                                                                      a_16 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_16, s_8);
                                                                      t = a_0(t);
                                                                      LocalPopChoice(g_8);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = e_8;
                                                                      t = a_9;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm h_8 = t;
                                                    int i_8 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm e_16 = NULL;
                                                        t = m_8;
                                                        if((t_8 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                        t = a_0(t);
                                                        e_16 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_16, s_8);
                                                        t = a_0(t);
                                                        LocalPopChoice(i_8);
                                                      }
                                                    else
                                                      {
                                                        t = h_8;
                                                        t = a_9;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm k_8 = t;
                                                      int o_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_16 = NULL;
                                                          t = m_8;
                                                          if((t_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, t_8);
                                                          t = a_0(t);
                                                          o_16 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_16, s_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(o_8);
                                                        }
                                                      else
                                                        {
                                                          t = k_8;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_8 = t;
                                                          int q_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_16 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                              t = a_0(t);
                                                              t_16 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, t_16);
                                                              t = a_0(t);
                                                              LocalPopChoice(q_8);
                                                            }
                                                          else
                                                            {
                                                              t = p_8;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = y_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = v_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm w_8 = t;
                                        int x_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_r_6;
                                            t = a_0(t);
                                            LocalPopChoice(x_8);
                                          }
                                        else
                                          {
                                            t = w_8;
                                            t = a_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            t_8 = ATgetArgument(t, 0);
                                            u_8 = ATgetArgument(t, 1);
                                            {
                                              ATerm b_9 = t;
                                              int c_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm k_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                  t = a_0(t);
                                                  k_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, k_17);
                                                  t = a_0(t);
                                                  LocalPopChoice(c_9);
                                                }
                                              else
                                                {
                                                  t = b_9;
                                                  t = a_9;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                {
                                                  ATerm d_9 = t;
                                                  int e_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_17 = NULL;
                                                      t = m_8;
                                                      if((t_8 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, t_8);
                                                      t = a_0(t);
                                                      o_17 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_17, s_8);
                                                      t = a_0(t);
                                                      LocalPopChoice(e_9);
                                                    }
                                                  else
                                                    {
                                                      t = d_9;
                                                      t = a_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm f_9 = t;
                                                      int g_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm u_17 = NULL;
                                                          t = m_8;
                                                          if((t_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                          t = a_0(t);
                                                          u_17 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_17, s_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(g_9);
                                                        }
                                                      else
                                                        {
                                                          t = f_9;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_9 = t;
                                                          int i_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_18 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                              t = a_0(t);
                                                              b_18 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, b_18);
                                                              t = a_0(t);
                                                              LocalPopChoice(i_9);
                                                            }
                                                          else
                                                            {
                                                              t = h_9;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Build_1))
                              {
                                m_8 = ATgetArgument(t, 0);
                                t = m_8;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    f_8 = ATgetArgument(t, 0);
                                    t = y_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm k_9 = t;
                                            int l_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_r_6;
                                                t = a_0(t);
                                                LocalPopChoice(l_9);
                                              }
                                            else
                                              {
                                                t = k_9;
                                                t = a_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                u_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm n_9 = t;
                                                  int o_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm k_18 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                      t = a_0(t);
                                                      k_18 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, k_18);
                                                      t = a_0(t);
                                                      LocalPopChoice(o_9);
                                                    }
                                                  else
                                                    {
                                                      t = n_9;
                                                      t = a_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm p_9 = t;
                                                int q_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm r_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(q_9);
                                                    {
                                                      ATerm t_9 = t;
                                                      int y_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm r_18 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_8);
                                                          t = a_0(t);
                                                          r_18 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_18, s_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(y_9);
                                                        }
                                                      else
                                                        {
                                                          t = t_9;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = p_9;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        t = t_8;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            l_8 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm z_9 = t;
                                                              int a_10 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_18 = NULL,e_19 = NULL;
                                                                  t = f_8;
                                                                  if((l_8 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, l_8);
                                                                  t = a_0(t);
                                                                  e_19 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, e_19);
                                                                  t = a_0(t);
                                                                  y_18 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_18, s_8);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(a_10);
                                                                }
                                                              else
                                                                {
                                                                  t = z_9;
                                                                  t = a_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = a_9;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            t_8 = ATgetArgument(t, 0);
                                                            u_8 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm e_10 = t;
                                                              int g_10 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_19 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                                  t = a_0(t);
                                                                  m_19 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, m_19);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(g_10);
                                                                }
                                                              else
                                                                {
                                                                  t = e_10;
                                                                  t = a_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = a_9;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = y_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm h_10 = t;
                                            int i_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_r_6;
                                                t = a_0(t);
                                                LocalPopChoice(i_10);
                                              }
                                            else
                                              {
                                                t = h_10;
                                                t = a_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                u_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm j_10 = t;
                                                  int k_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm z_19 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                      t = a_0(t);
                                                      z_19 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, z_19);
                                                      t = a_0(t);
                                                      LocalPopChoice(k_10);
                                                    }
                                                  else
                                                    {
                                                      t = j_10;
                                                      t = a_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm m_10 = t;
                                                int n_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm p_10 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_10);
                                                    {
                                                      ATerm q_10 = t;
                                                      int a_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm f_20 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_8);
                                                          t = a_0(t);
                                                          f_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_20, s_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(a_11);
                                                        }
                                                      else
                                                        {
                                                          t = q_10;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = m_10;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_11 = t;
                                                          int p_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm m_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                              t = a_0(t);
                                                              m_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, m_20);
                                                              t = a_0(t);
                                                              LocalPopChoice(p_11);
                                                            }
                                                          else
                                                            {
                                                              t = b_11;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_PrimT_3))
                                  {
                                    m_8 = ATgetArgument(t, 0);
                                    a_8 = ATgetArgument(t, 1);
                                    b_8 = ATgetArgument(t, 2);
                                    t = y_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm q_11 = t;
                                            int r_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_r_6;
                                                t = a_0(t);
                                                LocalPopChoice(r_11);
                                              }
                                            else
                                              {
                                                t = q_11;
                                                t = a_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                u_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm x_12 = t;
                                                  int y_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm g_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                      t = a_0(t);
                                                      g_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, g_21);
                                                      t = a_0(t);
                                                      LocalPopChoice(y_12);
                                                    }
                                                  else
                                                    {
                                                      t = x_12;
                                                      t = a_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm m_13 = t;
                                                int n_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm o_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_13);
                                                    {
                                                      ATerm p_13 = t;
                                                      int q_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, m_8, a_8, b_8);
                                                          t = a_0(t);
                                                          p_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_21, s_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(q_13);
                                                        }
                                                      else
                                                        {
                                                          t = p_13;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = m_13;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_13 = t;
                                                          int s_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_21 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                              t = a_0(t);
                                                              w_21 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, w_21);
                                                              t = a_0(t);
                                                              LocalPopChoice(s_13);
                                                            }
                                                          else
                                                            {
                                                              t = r_13;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = y_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm t_13 = t;
                                            int u_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_r_6;
                                                t = a_0(t);
                                                LocalPopChoice(u_13);
                                              }
                                            else
                                              {
                                                t = t_13;
                                                t = a_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                u_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm v_13 = t;
                                                  int w_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm n_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                      t = a_0(t);
                                                      n_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, n_22);
                                                      t = a_0(t);
                                                      LocalPopChoice(w_13);
                                                    }
                                                  else
                                                    {
                                                      t = v_13;
                                                      t = a_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    u_8 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm x_13 = t;
                                                      int y_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm s_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                          t = a_0(t);
                                                          s_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, s_22);
                                                          t = a_0(t);
                                                          LocalPopChoice(y_13);
                                                        }
                                                      else
                                                        {
                                                          t = x_13;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = a_9;
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            n_8 = ATgetArgument(t, 0);
                            t = n_8;
                            if(match_cons(t, sym_Op_2))
                              {
                                m_8 = ATgetArgument(t, 0);
                                a_8 = ATgetArgument(t, 1);
                                t = y_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = v_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm z_13 = t;
                                        int a_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_r_6;
                                            t = a_0(t);
                                            LocalPopChoice(a_14);
                                          }
                                        else
                                          {
                                            t = z_13;
                                            t = a_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            t_8 = ATgetArgument(t, 0);
                                            u_8 = ATgetArgument(t, 1);
                                            {
                                              ATerm b_14 = t;
                                              int c_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm l_23 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                  t = a_0(t);
                                                  l_23 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, l_23);
                                                  t = a_0(t);
                                                  LocalPopChoice(c_14);
                                                }
                                              else
                                                {
                                                  t = b_14;
                                                  t = a_9;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                t = t_8;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    l_8 = ATgetArgument(t, 0);
                                                    x_7 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm d_14 = t;
                                                      int e_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, l_8, m_8);
                                                          {
                                                            ATerm f_14 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_0 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    u_0 = ATgetArgument(t, 0);
                                                                    if((u_0 != ATgetArgument(t, 1)))
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
                                                                t = f_14;
                                                              }
                                                          }
                                                          t = term_r_6;
                                                          t = bottomup_1_0(a_0, t);
                                                          LocalPopChoice(e_14);
                                                        }
                                                      else
                                                        {
                                                          t = d_14;
                                                          {
                                                            ATerm g_14 = t;
                                                            int i_14 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm s_23 = NULL;
                                                                t = m_8;
                                                                if((l_8 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, x_7, a_8);
                                                                t = genzip_4_0(k_0, m_0, q_0, s_0, t);
                                                                s_23 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_23), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, l_8, x_7)));
                                                                t = bottomup_1_0(a_0, t);
                                                                LocalPopChoice(i_14);
                                                              }
                                                            else
                                                              {
                                                                t = g_14;
                                                                {
                                                                  ATerm j_14 = t;
                                                                  int k_14 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = n_8;
                                                                      if((t_8 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                                      t = a_0(t);
                                                                      LocalPopChoice(k_14);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = j_14;
                                                                      t = a_9;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm l_14 = t;
                                                    int m_14 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = n_8;
                                                        if((t_8 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                        t = a_0(t);
                                                        LocalPopChoice(m_14);
                                                      }
                                                    else
                                                      {
                                                        t = l_14;
                                                        t = a_9;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm n_14 = t;
                                                      int o_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = n_8;
                                                          if((t_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, t_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(o_14);
                                                        }
                                                      else
                                                        {
                                                          t = n_14;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_14 = t;
                                                          int r_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_25 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                              t = a_0(t);
                                                              y_25 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, y_25);
                                                              t = a_0(t);
                                                              LocalPopChoice(r_14);
                                                            }
                                                          else
                                                            {
                                                              t = q_14;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = y_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = v_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm s_14 = t;
                                        int t_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_r_6;
                                            t = a_0(t);
                                            LocalPopChoice(t_14);
                                          }
                                        else
                                          {
                                            t = s_14;
                                            t = a_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            t_8 = ATgetArgument(t, 0);
                                            u_8 = ATgetArgument(t, 1);
                                            {
                                              ATerm u_14 = t;
                                              int v_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm n_26 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                  t = a_0(t);
                                                  n_26 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, n_26);
                                                  t = a_0(t);
                                                  LocalPopChoice(v_14);
                                                }
                                              else
                                                {
                                                  t = u_14;
                                                  t = a_9;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                {
                                                  ATerm w_14 = t;
                                                  int x_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = n_8;
                                                      if((t_8 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, t_8);
                                                      t = a_0(t);
                                                      LocalPopChoice(x_14);
                                                    }
                                                  else
                                                    {
                                                      t = w_14;
                                                      t = a_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm y_14 = t;
                                                      int z_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = n_8;
                                                          if((t_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(z_14);
                                                        }
                                                      else
                                                        {
                                                          t = y_14;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_15 = t;
                                                          int c_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                              t = a_0(t);
                                                              d_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, d_27);
                                                              t = a_0(t);
                                                              LocalPopChoice(c_15);
                                                            }
                                                          else
                                                            {
                                                              t = a_15;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Build_1))
                              {
                                n_8 = ATgetArgument(t, 0);
                                t = n_8;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    m_8 = ATgetArgument(t, 0);
                                    t = y_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm d_15 = t;
                                            int e_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_r_6;
                                                t = a_0(t);
                                                LocalPopChoice(e_15);
                                              }
                                            else
                                              {
                                                t = d_15;
                                                t = a_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                u_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm f_15 = t;
                                                  int h_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_27 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                      t = a_0(t);
                                                      o_27 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, o_27);
                                                      t = a_0(t);
                                                      LocalPopChoice(h_15);
                                                    }
                                                  else
                                                    {
                                                      t = f_15;
                                                      t = a_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm j_15 = t;
                                                int m_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm v_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(m_15);
                                                    {
                                                      ATerm w_15 = t;
                                                      int y_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, n_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(y_15);
                                                        }
                                                      else
                                                        {
                                                          t = w_15;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = j_15;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        t = t_8;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            l_8 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm z_15 = t;
                                                              int b_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm t_27 = NULL;
                                                                  t = m_8;
                                                                  if((l_8 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, l_8);
                                                                  t = a_0(t);
                                                                  t_27 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, t_27);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(b_16);
                                                                }
                                                              else
                                                                {
                                                                  t = z_15;
                                                                  t = a_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = a_9;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            t_8 = ATgetArgument(t, 0);
                                                            u_8 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm c_16 = t;
                                                              int d_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm f_28 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                                  t = a_0(t);
                                                                  f_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, f_28);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(d_16);
                                                                }
                                                              else
                                                                {
                                                                  t = c_16;
                                                                  t = a_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = a_9;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = y_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm f_16 = t;
                                            int g_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_r_6;
                                                t = a_0(t);
                                                LocalPopChoice(g_16);
                                              }
                                            else
                                              {
                                                t = f_16;
                                                t = a_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                u_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm i_16 = t;
                                                  int k_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                      t = a_0(t);
                                                      w_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, w_29);
                                                      t = a_0(t);
                                                      LocalPopChoice(k_16);
                                                    }
                                                  else
                                                    {
                                                      t = i_16;
                                                      t = a_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm m_16 = t;
                                                int n_16 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm p_16 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_16);
                                                    {
                                                      ATerm q_16 = t;
                                                      int r_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, n_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(r_16);
                                                        }
                                                      else
                                                        {
                                                          t = q_16;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = m_16;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_16 = t;
                                                          int u_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                              t = a_0(t);
                                                              n_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, n_30);
                                                              t = a_0(t);
                                                              LocalPopChoice(u_16);
                                                            }
                                                          else
                                                            {
                                                              t = s_16;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_PrimT_3))
                                  {
                                    n_8 = ATgetArgument(t, 0);
                                    s_8 = ATgetArgument(t, 1);
                                    c_8 = ATgetArgument(t, 2);
                                    t = y_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = v_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm v_16 = t;
                                            int y_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_r_6;
                                                t = a_0(t);
                                                LocalPopChoice(y_16);
                                              }
                                            else
                                              {
                                                t = v_16;
                                                t = a_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                u_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm z_16 = t;
                                                  int a_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_31 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                      t = a_0(t);
                                                      r_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, r_31);
                                                      t = a_0(t);
                                                      LocalPopChoice(a_17);
                                                    }
                                                  else
                                                    {
                                                      t = z_16;
                                                      t = a_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm b_17 = t;
                                                int c_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm g_17 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(c_17);
                                                    {
                                                      ATerm h_17 = t;
                                                      int i_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, n_8, s_8, c_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(i_17);
                                                        }
                                                      else
                                                        {
                                                          t = h_17;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = b_17;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_17 = t;
                                                          int l_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm l_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                              t = a_0(t);
                                                              l_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, l_32);
                                                              t = a_0(t);
                                                              LocalPopChoice(l_17);
                                                            }
                                                          else
                                                            {
                                                              t = j_17;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Let_2))
                                      {
                                        n_8 = ATgetArgument(t, 0);
                                        s_8 = ATgetArgument(t, 1);
                                        t = y_8;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = v_8;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm m_17 = t;
                                                int n_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_r_6;
                                                    t = a_0(t);
                                                    LocalPopChoice(n_17);
                                                  }
                                                else
                                                  {
                                                    t = m_17;
                                                    {
                                                      ATerm p_17 = t;
                                                      int q_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm h_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, s_8);
                                                          t = a_0(t);
                                                          h_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, n_8, h_33);
                                                          t = a_0(t);
                                                          LocalPopChoice(q_17);
                                                        }
                                                      else
                                                        {
                                                          t = p_17;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    u_8 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm r_17 = t;
                                                      int s_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm s_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                          t = a_0(t);
                                                          s_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, s_33);
                                                          t = a_0(t);
                                                          LocalPopChoice(s_17);
                                                        }
                                                      else
                                                        {
                                                          t = r_17;
                                                          {
                                                            ATerm t_17 = t;
                                                            int v_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm e_34 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, s_8);
                                                                t = a_0(t);
                                                                e_34 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, n_8, e_34);
                                                                t = a_0(t);
                                                                LocalPopChoice(v_17);
                                                              }
                                                            else
                                                              {
                                                                t = t_17;
                                                                t = a_9;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_17 = t;
                                                          int x_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, s_8);
                                                              t = a_0(t);
                                                              q_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, n_8, q_34);
                                                              t = a_0(t);
                                                              LocalPopChoice(x_17);
                                                            }
                                                          else
                                                            {
                                                              t = w_17;
                                                              {
                                                                ATerm y_17 = t;
                                                                int z_17 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm z_34 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                                    t = a_0(t);
                                                                    z_34 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, z_34);
                                                                    t = a_0(t);
                                                                    LocalPopChoice(z_17);
                                                                  }
                                                                else
                                                                  {
                                                                    t = y_17;
                                                                    t = a_9;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm a_18 = t;
                                                        int c_18 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm o_35 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, s_8);
                                                            t = a_0(t);
                                                            o_35 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, n_8, o_35);
                                                            t = a_0(t);
                                                            LocalPopChoice(c_18);
                                                          }
                                                        else
                                                          {
                                                            t = a_18;
                                                            t = a_9;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            n_8 = ATgetArgument(t, 0);
                                            s_8 = ATgetArgument(t, 1);
                                            t = y_8;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = v_8;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm d_18 = t;
                                                    int e_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_r_6;
                                                        t = a_0(t);
                                                        LocalPopChoice(e_18);
                                                      }
                                                    else
                                                      {
                                                        t = d_18;
                                                        {
                                                          ATerm f_18 = t;
                                                          int g_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm k_36 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, s_8);
                                                              t = a_0(t);
                                                              k_36 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, n_8, k_36);
                                                              t = a_0(t);
                                                              LocalPopChoice(g_18);
                                                            }
                                                          else
                                                            {
                                                              t = f_18;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_18 = t;
                                                          int i_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm s_36 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                              t = a_0(t);
                                                              s_36 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, s_36);
                                                              t = a_0(t);
                                                              LocalPopChoice(i_18);
                                                            }
                                                          else
                                                            {
                                                              t = h_18;
                                                              {
                                                                ATerm j_18 = t;
                                                                int l_18 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm z_36 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, s_8);
                                                                    t = a_0(t);
                                                                    z_36 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, n_8, z_36);
                                                                    t = a_0(t);
                                                                    LocalPopChoice(l_18);
                                                                  }
                                                                else
                                                                  {
                                                                    t = j_18;
                                                                    t = a_9;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            t_8 = ATgetArgument(t, 0);
                                                            u_8 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm m_18 = t;
                                                              int n_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm h_37 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, s_8);
                                                                  t = a_0(t);
                                                                  h_37 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, n_8, h_37);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(n_18);
                                                                }
                                                              else
                                                                {
                                                                  t = m_18;
                                                                  {
                                                                    ATerm o_18 = t;
                                                                    int p_18 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm s_37 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                                        t = a_0(t);
                                                                        s_37 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, s_37);
                                                                        t = a_0(t);
                                                                        LocalPopChoice(p_18);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = o_18;
                                                                        t = a_9;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm q_18 = t;
                                                            int s_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm e_38 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, s_8);
                                                                t = a_0(t);
                                                                e_38 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, n_8, e_38);
                                                                t = a_0(t);
                                                                LocalPopChoice(s_18);
                                                              }
                                                            else
                                                              {
                                                                t = q_18;
                                                                t = a_9;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = y_8;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = v_8;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm t_18 = t;
                                                    int u_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_r_6;
                                                        t = a_0(t);
                                                        LocalPopChoice(u_18);
                                                      }
                                                    else
                                                      {
                                                        t = t_18;
                                                        t = a_9;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm v_18 = t;
                                                          int w_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_38 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                              t = a_0(t);
                                                              o_38 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, o_38);
                                                              t = a_0(t);
                                                              LocalPopChoice(w_18);
                                                            }
                                                          else
                                                            {
                                                              t = v_18;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            t_8 = ATgetArgument(t, 0);
                                                            u_8 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm x_18 = t;
                                                              int z_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm c_39 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, v_8);
                                                                  t = a_0(t);
                                                                  c_39 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, c_39);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(z_18);
                                                                }
                                                              else
                                                                {
                                                                  t = x_18;
                                                                  t = a_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = a_9;
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
            else
              {
                if(match_cons(t, sym_LChoice_2))
                  {
                    y_8 = ATgetArgument(t, 0);
                    v_8 = ATgetArgument(t, 1);
                    t = v_8;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = y_8;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm a_19 = t;
                            int b_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_j_6;
                                t = a_0(t);
                                LocalPopChoice(b_19);
                              }
                            else
                              {
                                t = a_19;
                                t = y_8;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = v_8;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    t_8 = ATgetArgument(t, 0);
                                    u_8 = ATgetArgument(t, 1);
                                    t = y_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        t_8 = ATgetArgument(t, 0);
                                        t = y_8;
                                      }
                                    else
                                      {
                                        t = y_8;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = y_8;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm c_19 = t;
                            int d_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_j_6;
                                t = a_0(t);
                                LocalPopChoice(d_19);
                              }
                            else
                              {
                                t = c_19;
                                {
                                  ATerm f_19 = t;
                                  int g_19 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = v_8;
                                      if((y_8 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(g_19);
                                    }
                                  else
                                    {
                                      t = f_19;
                                      t = a_9;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = v_8;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    t_8 = ATgetArgument(t, 0);
                                    u_8 = ATgetArgument(t, 1);
                                    {
                                      ATerm h_19 = t;
                                      int i_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_41 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, u_8, v_8);
                                          t = a_0(t);
                                          q_41 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, t_8, q_41);
                                          t = a_0(t);
                                          LocalPopChoice(i_19);
                                        }
                                      else
                                        {
                                          t = h_19;
                                          {
                                            ATerm j_19 = t;
                                            int k_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = v_8;
                                                if((y_8 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(k_19);
                                              }
                                            else
                                              {
                                                t = j_19;
                                                t = a_9;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        t_8 = ATgetArgument(t, 0);
                                        {
                                          ATerm l_19 = t;
                                          int n_19 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = v_8;
                                              if((y_8 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(n_19);
                                            }
                                          else
                                            {
                                              t = l_19;
                                              {
                                                ATerm o_19 = t;
                                                int p_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = t_8;
                                                    t = topdown_1_0(t_0, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, t_8);
                                                    t = bottomup_1_0(a_0, t);
                                                    LocalPopChoice(p_19);
                                                  }
                                                else
                                                  {
                                                    t = o_19;
                                                    t = a_9;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm q_19 = t;
                                        int r_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = v_8;
                                            if((y_8 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(r_19);
                                          }
                                        else
                                          {
                                            t = q_19;
                                            t = a_9;
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        y_8 = ATgetArgument(t, 0);
                        v_8 = ATgetArgument(t, 1);
                        t = v_8;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = y_8;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm s_19 = t;
                                int t_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_j_6;
                                    t = a_0(t);
                                    LocalPopChoice(t_19);
                                  }
                                else
                                  {
                                    t = s_19;
                                    t = v_8;
                                  }
                              }
                            else
                              {
                                ATerm u_19 = t;
                                int v_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_j_6;
                                    t = a_0(t);
                                    LocalPopChoice(v_19);
                                  }
                                else
                                  {
                                    t = u_19;
                                    t = a_9;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = y_8;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm w_19 = t;
                                    int x_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_r_6;
                                        t = a_0(t);
                                        LocalPopChoice(x_19);
                                      }
                                    else
                                      {
                                        t = w_19;
                                        t = v_8;
                                      }
                                  }
                                else
                                  {
                                    ATerm y_19 = t;
                                    int a_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_r_6;
                                        t = a_0(t);
                                        LocalPopChoice(a_20);
                                      }
                                    else
                                      {
                                        t = y_19;
                                        t = a_9;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    n_8 = ATgetArgument(t, 0);
                                    s_8 = ATgetArgument(t, 1);
                                    t = y_8;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = v_8;
                                      }
                                    else
                                      {
                                        ATerm b_20 = t;
                                        int c_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm z_43 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, y_8, n_8);
                                            t = conc_0_0(t);
                                            z_43 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, z_43, s_8);
                                            t = bottomup_1_0(a_0, t);
                                            LocalPopChoice(c_20);
                                          }
                                        else
                                          {
                                            t = b_20;
                                            t = a_9;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = y_8;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = v_8;
                                      }
                                    else
                                      {
                                        t = a_9;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm d_20 = t;
                        int e_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm g_20 = ATgetArgument(t, 0);
                                v_8 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(e_20);
                            t = v_8;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm h_20 = t;
                                int i_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_j_6;
                                    t = a_0(t);
                                    LocalPopChoice(i_20);
                                  }
                                else
                                  {
                                    t = h_20;
                                    t = a_9;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm j_20 = t;
                                    int k_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_r_6;
                                        t = a_0(t);
                                        LocalPopChoice(k_20);
                                      }
                                    else
                                      {
                                        t = j_20;
                                        t = a_9;
                                      }
                                  }
                                else
                                  {
                                    t = a_9;
                                  }
                              }
                          }
                        else
                          {
                            t = d_20;
                            if(match_cons(t, sym_All_1))
                              {
                                y_8 = ATgetArgument(t, 0);
                                t = y_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm l_20 = t;
                                    int n_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_j_6;
                                        t = a_0(t);
                                        LocalPopChoice(n_20);
                                      }
                                    else
                                      {
                                        t = l_20;
                                        t = a_9;
                                      }
                                  }
                                else
                                  {
                                    t = a_9;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    y_8 = ATgetArgument(t, 0);
                                    t = y_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm o_20 = t;
                                        int p_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_j_6;
                                            t = a_0(t);
                                            LocalPopChoice(p_20);
                                          }
                                        else
                                          {
                                            t = o_20;
                                            {
                                              ATerm q_20 = t;
                                              int r_20 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL;
                                                  t = a_9;
                                                  t = new_0_0(t);
                                                  u_44 = t;
                                                  t = bottomup_1_0(a_0, t);
                                                  f_45 = t;
                                                  t = (ATerm) ATempty;
                                                  t = a_0(t);
                                                  g_45 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(g_45), f_45);
                                                  t = a_0(t);
                                                  v_44 = t;
                                                  t = u_44;
                                                  t = bottomup_1_0(a_0, t);
                                                  e_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, e_45);
                                                  t = a_0(t);
                                                  d_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, d_45);
                                                  t = a_0(t);
                                                  x_44 = t;
                                                  t = y_8;
                                                  t = bottomup_1_0(a_0, t);
                                                  z_44 = t;
                                                  t = u_44;
                                                  t = bottomup_1_0(a_0, t);
                                                  c_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, c_45);
                                                  t = a_0(t);
                                                  b_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, b_45);
                                                  t = a_0(t);
                                                  a_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_44, a_45);
                                                  t = a_0(t);
                                                  y_44 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_44, y_44);
                                                  t = a_0(t);
                                                  w_44 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, v_44, w_44);
                                                  t = a_0(t);
                                                  LocalPopChoice(r_20);
                                                }
                                              else
                                                {
                                                  t = q_20;
                                                  t = a_9;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm s_20 = t;
                                            int t_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_r_6;
                                                t = a_0(t);
                                                LocalPopChoice(t_20);
                                              }
                                            else
                                              {
                                                t = s_20;
                                                {
                                                  ATerm u_20 = t;
                                                  int v_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,x_45 = NULL;
                                                      t = a_9;
                                                      t = new_0_0(t);
                                                      j_45 = t;
                                                      t = bottomup_1_0(a_0, t);
                                                      u_45 = t;
                                                      t = (ATerm) ATempty;
                                                      t = a_0(t);
                                                      x_45 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(x_45), u_45);
                                                      t = a_0(t);
                                                      k_45 = t;
                                                      t = j_45;
                                                      t = bottomup_1_0(a_0, t);
                                                      t_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, t_45);
                                                      t = a_0(t);
                                                      s_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, s_45);
                                                      t = a_0(t);
                                                      m_45 = t;
                                                      t = y_8;
                                                      t = bottomup_1_0(a_0, t);
                                                      o_45 = t;
                                                      t = j_45;
                                                      t = bottomup_1_0(a_0, t);
                                                      r_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, r_45);
                                                      t = a_0(t);
                                                      q_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, q_45);
                                                      t = a_0(t);
                                                      p_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_45, p_45);
                                                      t = a_0(t);
                                                      n_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_45, n_45);
                                                      t = a_0(t);
                                                      l_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, k_45, l_45);
                                                      t = a_0(t);
                                                      LocalPopChoice(v_20);
                                                    }
                                                  else
                                                    {
                                                      t = u_20;
                                                      t = a_9;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                u_8 = ATgetArgument(t, 1);
                                                t = u_8;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    r_5 = ATgetArgument(t, 0);
                                                    u_5 = ATgetArgument(t, 1);
                                                    t = r_5;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        s_5 = ATgetArgument(t, 0);
                                                        t = t_8;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            l_8 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm w_20 = t;
                                                              int x_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, s_5);
                                                                  t = a_0(t);
                                                                  h_46 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_46, u_5);
                                                                  t = a_0(t);
                                                                  g_46 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, l_8, g_46);
                                                                  t = a_0(t);
                                                                  f_46 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, f_46);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(x_20);
                                                                }
                                                              else
                                                                {
                                                                  t = w_20;
                                                                  {
                                                                    ATerm y_20 = t;
                                                                    int z_20 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL;
                                                                        t = a_9;
                                                                        t = new_0_0(t);
                                                                        j_46 = t;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        u_46 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = a_0(t);
                                                                        v_46 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(v_46), u_46);
                                                                        t = a_0(t);
                                                                        k_46 = t;
                                                                        t = j_46;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        t_46 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, t_46);
                                                                        t = a_0(t);
                                                                        s_46 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, s_46);
                                                                        t = a_0(t);
                                                                        m_46 = t;
                                                                        t = y_8;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        o_46 = t;
                                                                        t = j_46;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        r_46 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, r_46);
                                                                        t = a_0(t);
                                                                        q_46 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, q_46);
                                                                        t = a_0(t);
                                                                        p_46 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, o_46, p_46);
                                                                        t = a_0(t);
                                                                        n_46 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, m_46, n_46);
                                                                        t = a_0(t);
                                                                        l_46 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, k_46, l_46);
                                                                        t = a_0(t);
                                                                        LocalPopChoice(z_20);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_20;
                                                                        t = a_9;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm a_21 = t;
                                                            int b_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL;
                                                                t = a_9;
                                                                t = new_0_0(t);
                                                                y_46 = t;
                                                                t = bottomup_1_0(a_0, t);
                                                                j_47 = t;
                                                                t = (ATerm) ATempty;
                                                                t = a_0(t);
                                                                k_47 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(k_47), j_47);
                                                                t = a_0(t);
                                                                z_46 = t;
                                                                t = y_46;
                                                                t = bottomup_1_0(a_0, t);
                                                                i_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, i_47);
                                                                t = a_0(t);
                                                                h_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, h_47);
                                                                t = a_0(t);
                                                                b_47 = t;
                                                                t = y_8;
                                                                t = bottomup_1_0(a_0, t);
                                                                d_47 = t;
                                                                t = y_46;
                                                                t = bottomup_1_0(a_0, t);
                                                                g_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, g_47);
                                                                t = a_0(t);
                                                                f_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, f_47);
                                                                t = a_0(t);
                                                                e_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, d_47, e_47);
                                                                t = a_0(t);
                                                                c_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, b_47, c_47);
                                                                t = a_0(t);
                                                                a_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, z_46, a_47);
                                                                t = a_0(t);
                                                                LocalPopChoice(b_21);
                                                              }
                                                            else
                                                              {
                                                                t = a_21;
                                                                t = a_9;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = t_8;
                                                        {
                                                          ATerm c_21 = t;
                                                          int d_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL;
                                                              t = a_9;
                                                              t = new_0_0(t);
                                                              o_47 = t;
                                                              t = bottomup_1_0(a_0, t);
                                                              f_48 = t;
                                                              t = (ATerm) ATempty;
                                                              t = a_0(t);
                                                              g_48 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(g_48), f_48);
                                                              t = a_0(t);
                                                              p_47 = t;
                                                              t = o_47;
                                                              t = bottomup_1_0(a_0, t);
                                                              e_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, e_48);
                                                              t = a_0(t);
                                                              d_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, d_48);
                                                              t = a_0(t);
                                                              r_47 = t;
                                                              t = y_8;
                                                              t = bottomup_1_0(a_0, t);
                                                              t_47 = t;
                                                              t = o_47;
                                                              t = bottomup_1_0(a_0, t);
                                                              c_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, c_48);
                                                              t = a_0(t);
                                                              v_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, v_47);
                                                              t = a_0(t);
                                                              u_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_47, u_47);
                                                              t = a_0(t);
                                                              s_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, r_47, s_47);
                                                              t = a_0(t);
                                                              q_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, p_47, q_47);
                                                              t = a_0(t);
                                                              LocalPopChoice(d_21);
                                                            }
                                                          else
                                                            {
                                                              t = c_21;
                                                              t = a_9;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = t_8;
                                                    {
                                                      ATerm e_21 = t;
                                                      int f_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL;
                                                          t = a_9;
                                                          t = new_0_0(t);
                                                          j_48 = t;
                                                          t = bottomup_1_0(a_0, t);
                                                          u_48 = t;
                                                          t = (ATerm) ATempty;
                                                          t = a_0(t);
                                                          v_48 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(v_48), u_48);
                                                          t = a_0(t);
                                                          k_48 = t;
                                                          t = j_48;
                                                          t = bottomup_1_0(a_0, t);
                                                          t_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, t_48);
                                                          t = a_0(t);
                                                          s_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, s_48);
                                                          t = a_0(t);
                                                          m_48 = t;
                                                          t = y_8;
                                                          t = bottomup_1_0(a_0, t);
                                                          o_48 = t;
                                                          t = j_48;
                                                          t = bottomup_1_0(a_0, t);
                                                          r_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, r_48);
                                                          t = a_0(t);
                                                          q_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, q_48);
                                                          t = a_0(t);
                                                          p_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_48, p_48);
                                                          t = a_0(t);
                                                          n_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_48, n_48);
                                                          t = a_0(t);
                                                          l_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, k_48, l_48);
                                                          t = a_0(t);
                                                          LocalPopChoice(f_21);
                                                        }
                                                      else
                                                        {
                                                          t = e_21;
                                                          t = a_9;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm h_21 = t;
                                                      int i_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, t_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(i_21);
                                                        }
                                                      else
                                                        {
                                                          t = h_21;
                                                          {
                                                            ATerm j_21 = t;
                                                            int k_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm z_48 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL;
                                                                t = a_9;
                                                                t = new_0_0(t);
                                                                z_48 = t;
                                                                t = bottomup_1_0(a_0, t);
                                                                l_49 = t;
                                                                t = (ATerm) ATempty;
                                                                t = a_0(t);
                                                                m_49 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(m_49), l_49);
                                                                t = a_0(t);
                                                                b_49 = t;
                                                                t = z_48;
                                                                t = bottomup_1_0(a_0, t);
                                                                k_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, k_49);
                                                                t = a_0(t);
                                                                j_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, j_49);
                                                                t = a_0(t);
                                                                d_49 = t;
                                                                t = y_8;
                                                                t = bottomup_1_0(a_0, t);
                                                                f_49 = t;
                                                                t = z_48;
                                                                t = bottomup_1_0(a_0, t);
                                                                i_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, i_49);
                                                                t = a_0(t);
                                                                h_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, h_49);
                                                                t = a_0(t);
                                                                g_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, f_49, g_49);
                                                                t = a_0(t);
                                                                e_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, d_49, e_49);
                                                                t = a_0(t);
                                                                c_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, b_49, c_49);
                                                                t = a_0(t);
                                                                LocalPopChoice(k_21);
                                                              }
                                                            else
                                                              {
                                                                t = j_21;
                                                                t = a_9;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm l_21 = t;
                                                    int m_21 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL;
                                                        t = a_9;
                                                        t = new_0_0(t);
                                                        p_49 = t;
                                                        t = bottomup_1_0(a_0, t);
                                                        a_50 = t;
                                                        t = (ATerm) ATempty;
                                                        t = a_0(t);
                                                        b_50 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(b_50), a_50);
                                                        t = a_0(t);
                                                        q_49 = t;
                                                        t = p_49;
                                                        t = bottomup_1_0(a_0, t);
                                                        z_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, z_49);
                                                        t = a_0(t);
                                                        y_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, y_49);
                                                        t = a_0(t);
                                                        s_49 = t;
                                                        t = y_8;
                                                        t = bottomup_1_0(a_0, t);
                                                        u_49 = t;
                                                        t = p_49;
                                                        t = bottomup_1_0(a_0, t);
                                                        x_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, x_49);
                                                        t = a_0(t);
                                                        w_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, w_49);
                                                        t = a_0(t);
                                                        v_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_49, v_49);
                                                        t = a_0(t);
                                                        t_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, s_49, t_49);
                                                        t = a_0(t);
                                                        r_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, q_49, r_49);
                                                        t = a_0(t);
                                                        LocalPopChoice(m_21);
                                                      }
                                                    else
                                                      {
                                                        t = l_21;
                                                        t = a_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Match_1))
                                      {
                                        y_8 = ATgetArgument(t, 0);
                                        t = y_8;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm n_21 = t;
                                            int o_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_j_6;
                                                t = a_0(t);
                                                LocalPopChoice(o_21);
                                              }
                                            else
                                              {
                                                t = n_21;
                                                t = a_9;
                                              }
                                          }
                                        else
                                          {
                                            t = a_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            y_8 = ATgetArgument(t, 0);
                                            t = y_8;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm q_21 = t;
                                                int r_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_r_6;
                                                    t = a_0(t);
                                                    LocalPopChoice(r_21);
                                                  }
                                                else
                                                  {
                                                    t = q_21;
                                                    t = a_9;
                                                  }
                                              }
                                            else
                                              {
                                                t = a_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                y_8 = ATgetArgument(t, 0);
                                                t = y_8;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm s_21 = t;
                                                    int t_21 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_r_6;
                                                        t = a_0(t);
                                                        LocalPopChoice(t_21);
                                                      }
                                                    else
                                                      {
                                                        t = s_21;
                                                        t = a_9;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = a_9;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm u_21 = t;
                                                int v_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm x_21 = ATgetArgument(t, 0);
                                                        v_8 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(v_21);
                                                    t = v_8;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm y_21 = t;
                                                        int z_21 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_r_6;
                                                            t = a_0(t);
                                                            LocalPopChoice(z_21);
                                                          }
                                                        else
                                                          {
                                                            t = y_21;
                                                            t = a_9;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = a_9;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = u_21;
                                                    {
                                                      ATerm a_22 = t;
                                                      int b_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm c_22 = ATgetArgument(t, 0);
                                                              v_8 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(b_22);
                                                          {
                                                            ATerm d_22 = t;
                                                            int e_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = v_8;
                                                                t = fetch_1_0(v_0, t);
                                                                t = term_r_6;
                                                                t = bottomup_1_0(a_0, t);
                                                                LocalPopChoice(e_22);
                                                              }
                                                            else
                                                              {
                                                                t = d_22;
                                                                t = a_9;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = a_22;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              y_8 = ATgetArgument(t, 0);
                                                              v_8 = ATgetArgument(t, 1);
                                                              t = v_8;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = y_8;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = v_8;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          t_8 = ATgetArgument(t, 0);
                                                                          u_8 = ATgetArgument(t, 1);
                                                                          t = y_8;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = y_8;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = y_8;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = v_8;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          t_8 = ATgetArgument(t, 0);
                                                                          u_8 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm f_22 = t;
                                                                            int g_22 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm i_51 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, u_8, v_8);
                                                                                t = a_0(t);
                                                                                i_51 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, t_8, i_51);
                                                                                t = a_0(t);
                                                                                LocalPopChoice(g_22);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = f_22;
                                                                                {
                                                                                  ATerm h_22 = t;
                                                                                  int i_22 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = v_8;
                                                                                      if((y_8 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(i_22);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = h_22;
                                                                                      t = a_9;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm j_22 = t;
                                                                          int k_22 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = v_8;
                                                                              if((y_8 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(k_22);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = j_22;
                                                                              t = a_9;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  y_8 = ATgetArgument(t, 0);
                                                                  v_8 = ATgetArgument(t, 1);
                                                                  q_5 = ATgetArgument(t, 2);
                                                                  t = q_5;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm l_22 = t;
                                                                      int m_22 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, v_8);
                                                                          t = a_0(t);
                                                                          LocalPopChoice(m_22);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = l_22;
                                                                          t = a_9;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = a_9;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      y_8 = ATgetArgument(t, 0);
                                                                      v_8 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm o_22 = t;
                                                                        int p_22 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, y_8, v_8);
                                                                            t = a_0(t);
                                                                            LocalPopChoice(p_22);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = o_22;
                                                                            t = a_9;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          y_8 = ATgetArgument(t, 0);
                                                                          t = y_8;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              t_8 = ATgetFirst((ATermList) t);
                                                                              u_8 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm q_22 = t;
                                                                                int r_22 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm x_51 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, u_8);
                                                                                    t = a_0(t);
                                                                                    x_51 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, t_8, x_51);
                                                                                    t = a_0(t);
                                                                                    LocalPopChoice(r_22);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_22;
                                                                                    t = a_9;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm t_22 = t;
                                                                                  int u_22 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_r_6;
                                                                                      t = a_0(t);
                                                                                      LocalPopChoice(u_22);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = t_22;
                                                                                      t = a_9;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = a_9;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              y_8 = ATgetArgument(t, 0);
                                                                              t = y_8;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  t_8 = ATgetFirst((ATermList) t);
                                                                                  u_8 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm v_22 = t;
                                                                                    int w_22 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm f_52 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, u_8);
                                                                                        t = a_0(t);
                                                                                        f_52 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, t_8, f_52);
                                                                                        t = a_0(t);
                                                                                        LocalPopChoice(w_22);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = v_22;
                                                                                        t = a_9;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm x_22 = t;
                                                                                      int y_22 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_r_6;
                                                                                          t = a_0(t);
                                                                                          LocalPopChoice(y_22);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = x_22;
                                                                                          t = a_9;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = a_9;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  y_8 = ATgetArgument(t, 0);
                                                                                  t = y_8;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      t_8 = ATgetFirst((ATermList) t);
                                                                                      u_8 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm z_22 = t;
                                                                                        int a_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm l_52 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, u_8);
                                                                                            t = a_0(t);
                                                                                            l_52 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, l_52);
                                                                                            t = a_0(t);
                                                                                            LocalPopChoice(a_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = z_22;
                                                                                            t = a_9;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm b_23 = t;
                                                                                          int c_23 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_j_6;
                                                                                              t = a_0(t);
                                                                                              LocalPopChoice(c_23);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = b_23;
                                                                                              t = a_9;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = a_9;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      y_8 = ATgetArgument(t, 0);
                                                                                      v_8 = ATgetArgument(t, 1);
                                                                                      q_5 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm d_23 = t;
                                                                                        int e_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL;
                                                                                            t = term_f_23;
                                                                                            t = bottomup_1_0(a_0, t);
                                                                                            t_52 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = a_0(t);
                                                                                            w_52 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(w_52), q_5);
                                                                                            t = a_0(t);
                                                                                            v_52 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(v_52), y_8);
                                                                                            t = a_0(t);
                                                                                            u_52 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, t_52, u_52);
                                                                                            t = a_0(t);
                                                                                            s_52 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, v_8, s_52);
                                                                                            t = a_0(t);
                                                                                            LocalPopChoice(e_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = d_23;
                                                                                            t = a_9;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          y_8 = ATgetArgument(t, 0);
                                                                                          v_8 = ATgetArgument(t, 1);
                                                                                          q_5 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm g_23 = t;
                                                                                            int h_23 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL,i_53 = NULL,j_53 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, v_8);
                                                                                                t = a_0(t);
                                                                                                d_53 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, q_5);
                                                                                                t = a_0(t);
                                                                                                i_53 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = a_0(t);
                                                                                                j_53 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(j_53), i_53);
                                                                                                t = a_0(t);
                                                                                                f_53 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(f_53), y_8);
                                                                                                t = a_0(t);
                                                                                                e_53 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(e_53), d_53);
                                                                                                t = a_0(t);
                                                                                                c_53 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, c_53);
                                                                                                t = a_0(t);
                                                                                                LocalPopChoice(h_23);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = g_23;
                                                                                                t = a_9;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              y_8 = ATgetArgument(t, 0);
                                                                                              v_8 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm i_23 = t;
                                                                                                int j_23 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm s_53 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, v_8);
                                                                                                    t = a_0(t);
                                                                                                    s_53 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, s_53);
                                                                                                    t = a_0(t);
                                                                                                    LocalPopChoice(j_23);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = i_23;
                                                                                                    t = a_9;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  y_8 = ATgetArgument(t, 0);
                                                                                                  v_8 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm k_23 = t;
                                                                                                    int m_23 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm w_53 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, y_8);
                                                                                                        t = a_0(t);
                                                                                                        w_53 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_53, v_8);
                                                                                                        t = a_0(t);
                                                                                                        LocalPopChoice(m_23);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = k_23;
                                                                                                        t = a_9;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      y_8 = ATgetArgument(t, 0);
                                                                                                      v_8 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm n_23 = t;
                                                                                                        int o_23 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm a_54 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, v_8);
                                                                                                            t = a_0(t);
                                                                                                            a_54 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, a_54, y_8);
                                                                                                            t = a_0(t);
                                                                                                            LocalPopChoice(o_23);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = n_23;
                                                                                                            t = a_9;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          y_8 = ATgetArgument(t, 0);
                                                                                                          v_8 = ATgetArgument(t, 1);
                                                                                                          t = v_8;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              n_8 = ATgetArgument(t, 0);
                                                                                                              s_8 = ATgetArgument(t, 1);
                                                                                                              t = y_8;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = v_8;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm p_23 = t;
                                                                                                                  int q_23 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm l_54 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, y_8, n_8);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      l_54 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, l_54, s_8);
                                                                                                                      t = bottomup_1_0(a_0, t);
                                                                                                                      LocalPopChoice(q_23);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = p_23;
                                                                                                                      t = a_9;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  n_8 = ATgetArgument(t, 0);
                                                                                                                  s_8 = ATgetArgument(t, 1);
                                                                                                                  c_8 = ATgetArgument(t, 2);
                                                                                                                  t = c_8;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = s_8;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = n_8;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              m_8 = ATgetArgument(t, 0);
                                                                                                                              t = y_8;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = v_8;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      t_8 = ATgetFirst((ATermList) t);
                                                                                                                                      u_8 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = u_8;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = t_8;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              l_8 = ATgetArgument(t, 0);
                                                                                                                                              x_7 = ATgetArgument(t, 1);
                                                                                                                                              s_7 = ATgetArgument(t, 2);
                                                                                                                                              v_7 = ATgetArgument(t, 3);
                                                                                                                                              t = s_7;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = x_7;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm r_23 = t;
                                                                                                                                                      int x_23 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = m_8;
                                                                                                                                                          if((l_8 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = v_7;
                                                                                                                                                          {
                                                                                                                                                            ATerm z_23 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm w_0 (ATerm t);
                                                                                                                                                                static ATerm w_0 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm a_24 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(a_24, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((l_8 != ATgetArgument(a_24, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(a_24, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm b_24 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(b_24) != AT_LIST) || !(ATisEmpty(b_24))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm c_24 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(c_24) != AT_LIST) || !(ATisEmpty(c_24))))
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
                                                                                                                                                                t = z_23;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = v_7;
                                                                                                                                                          t = bottomup_1_0(a_0, t);
                                                                                                                                                          LocalPopChoice(x_23);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = r_23;
                                                                                                                                                          t = a_9;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = a_9;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = a_9;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = a_9;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = a_9;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = a_9;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = y_8;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = v_8;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = a_9;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = y_8;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = v_8;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = a_9;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = y_8;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = v_8;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = a_9;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = y_8;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = v_8;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = a_9;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              y_8 = ATgetArgument(t, 0);
                                                                                                              v_8 = ATgetArgument(t, 1);
                                                                                                              t = y_8;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = v_8;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = a_9;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = a_9;
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
  t = bottomup_1_0(a_0, t);
  return(t);
}
ATerm topdown_1_0 (ATerm a_137 (ATerm), ATerm t)
{
  static ATerm x_0 (ATerm t);
  static ATerm x_0 (ATerm t)
  {
    t = topdown_1_0(a_137, t);
    return(t);
  }
  t = a_137(t);
  t = SRTS_all(x_0, t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm e_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm h_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(g_24);
      {
        ATerm v_55 = NULL,w_55 = NULL;
        v_55 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm i_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        w_55 = t;
        t = SSLgetAnnotations(v_55);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_24 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) j_24) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_24 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(l_24) != AT_LIST) || !(ATisEmpty(l_24))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_55;
      }
    }
  else
    {
      t = e_24;
      {
        ATerm m_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm o_24 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) o_24) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm p_24 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(n_24);
            _fail(t);
          }
        else
          {
            t = m_24;
          }
      }
    }
  return(t);
}
static ATerm g_5 (ATerm n_108, ATerm m_108, ATerm t)
{
  t = n_108;
  t = topdown_1_0(y_0, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, n_108);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      j_56 = ATgetArgument(t, 0);
      m_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_56;
  if(match_cons(t, sym_Match_1))
    {
      k_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_56;
  if(match_cons(t, sym_Var_1))
    {
      l_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_56;
  if(match_cons(t, sym_Seq_2))
    {
      n_56 = ATgetArgument(t, 0);
      h_56 = ATgetArgument(t, 1);
      t = n_56;
      if(match_cons(t, sym_Build_1))
        {
          o_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_56;
      if(match_cons(t, sym_Var_1))
        {
          g_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_56;
      if((l_56 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_56)), h_56);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          n_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_56;
      if(match_cons(t, sym_Var_1))
        {
          o_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_56;
      if((l_56 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_56));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      z_56 = ATgetArgument(t, 0);
      b_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_56;
  if(match_cons(t, sym_Build_1))
    {
      a_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_57;
  if(match_cons(t, sym_Seq_2))
    {
      c_57 = ATgetArgument(t, 0);
      x_56 = ATgetArgument(t, 1);
      t = c_57;
      if(match_cons(t, sym_Match_1))
        {
          w_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_56;
      if((a_57 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_57), x_56);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          c_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_57;
      if((a_57 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, a_57);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm n_57 = NULL,o_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      q_57 = ATgetArgument(t, 0);
      s_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_57;
  if(match_cons(t, sym_Match_1))
    {
      r_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_57;
  if(match_cons(t, sym_Seq_2))
    {
      t_57 = ATgetArgument(t, 0);
      o_57 = ATgetArgument(t, 1);
      t = t_57;
      if(match_cons(t, sym_Match_1))
        {
          n_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_57;
      if((r_57 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_57), o_57);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          t_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_57;
      if((r_57 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, r_57);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,f_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      f_58 = ATgetArgument(t, 0);
      h_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_58;
  if(match_cons(t, sym_Build_1))
    {
      ATerm q_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_58;
  if(match_cons(t, sym_Seq_2))
    {
      i_58 = ATgetArgument(t, 0);
      j_58 = ATgetArgument(t, 1);
      t = i_58;
      if(match_cons(t, sym_PrimT_3))
        {
          b_58 = ATgetArgument(t, 0);
          c_58 = ATgetArgument(t, 1);
          d_58 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, b_58, c_58, d_58), j_58);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          i_58 = ATgetArgument(t, 0);
          j_58 = ATgetArgument(t, 1);
          k_58 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, i_58, j_58, k_58);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm w_58 = NULL,b_59 = NULL,d_59 = NULL,h_59 = NULL,i_59 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      d_59 = ATgetArgument(t, 0);
      h_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_59;
  if(match_cons(t, sym_Build_1))
    {
      ATerm r_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_59;
  if(match_cons(t, sym_Seq_2))
    {
      i_59 = ATgetArgument(t, 0);
      b_59 = ATgetArgument(t, 1);
      t = i_59;
      if(match_cons(t, sym_Build_1))
        {
          w_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_58), b_59);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          i_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, i_59);
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_24 = ATgetArgument(t, 0);
      if(((ATgetType(s_24) != AT_LIST) || !(ATisEmpty(s_24))))
        _fail(t);
      {
        ATerm t_24 = ATgetArgument(t, 1);
        if(((ATgetType(t_24) != AT_LIST) || !(ATisEmpty(t_24))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_24 = ATgetArgument(t, 0);
      if(((ATgetType(u_24) == AT_LIST) && !(ATisEmpty(u_24))))
        {
          k_60 = ATgetFirst((ATermList) u_24);
          l_60 = (ATerm) ATgetNext((ATermList) u_24);
        }
      else
        _fail(t);
      {
        ATerm v_24 = ATgetArgument(t, 1);
        if(((ATgetType(v_24) == AT_LIST) && !(ATisEmpty(v_24))))
          {
            m_60 = ATgetFirst((ATermList) v_24);
            n_60 = (ATerm) ATgetNext((ATermList) v_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_60, m_60), (ATerm) ATmakeAppl(sym__2, l_60, n_60));
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm o_60 = NULL,p_60 = NULL;
  if(match_cons(t, sym__2))
    {
      o_60 = ATgetArgument(t, 0);
      p_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_60), o_60);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL;
  if(match_cons(t, sym__2))
    {
      q_60 = ATgetArgument(t, 0);
      r_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_60), (ATerm) ATmakeAppl(sym_Match_1, r_60));
  return(t);
}
static ATerm d_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_24 = ATgetArgument(t, 0);
      if(((ATgetType(w_24) != AT_LIST) || !(ATisEmpty(w_24))))
        _fail(t);
      {
        ATerm x_24 = ATgetArgument(t, 1);
        if(((ATgetType(x_24) != AT_LIST) || !(ATisEmpty(x_24))))
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
  ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_24 = ATgetArgument(t, 0);
      if(((ATgetType(y_24) == AT_LIST) && !(ATisEmpty(y_24))))
        {
          w_60 = ATgetFirst((ATermList) y_24);
          x_60 = (ATerm) ATgetNext((ATermList) y_24);
        }
      else
        _fail(t);
      {
        ATerm z_24 = ATgetArgument(t, 1);
        if(((ATgetType(z_24) == AT_LIST) && !(ATisEmpty(z_24))))
          {
            y_60 = ATgetFirst((ATermList) z_24);
            z_60 = (ATerm) ATgetNext((ATermList) z_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_60, y_60), (ATerm) ATmakeAppl(sym__2, x_60, z_60));
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm a_61 = NULL,b_61 = NULL;
  if(match_cons(t, sym__2))
    {
      a_61 = ATgetArgument(t, 0);
      b_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_61), a_61);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm c_61 = NULL,d_61 = NULL;
  if(match_cons(t, sym__2))
    {
      c_61 = ATgetArgument(t, 0);
      d_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_61), (ATerm) ATmakeAppl(sym_Match_1, d_61));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      x_59 = ATgetArgument(t, 0);
      b_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_59;
  if(match_cons(t, sym_Build_1))
    {
      y_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_59;
  if(match_cons(t, sym_Op_2))
    {
      z_59 = ATgetArgument(t, 0);
      a_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_60;
  if(match_cons(t, sym_Seq_2))
    {
      c_60 = ATgetArgument(t, 0);
      v_59 = ATgetArgument(t, 1);
      {
        ATerm j_60 = NULL;
        t = c_60;
        if(match_cons(t, sym_Match_1))
          {
            d_60 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_60;
        if(match_cons(t, sym_Op_2))
          {
            t_59 = ATgetArgument(t, 0);
            u_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_59;
        if((z_59 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, a_60, u_59);
        t = genzip_4_0(z_0, a_1, b_1, c_1, t);
        j_60 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_60), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, z_59, a_60)), v_59));
      }
    }
  else
    {
      ATerm v_60 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          c_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_60;
      if(match_cons(t, sym_Op_2))
        {
          d_60 = ATgetArgument(t, 0);
          e_60 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_60;
      if((z_59 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, a_60, e_60);
      t = genzip_4_0(d_1, e_1, f_1, g_1, t);
      v_60 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_60), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, z_59, a_60)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm z_61 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL;
  m_62 = t;
  if(match_cons(t, sym_Seq_2))
    {
      n_62 = ATgetArgument(t, 0);
      r_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_62;
  if(match_cons(t, sym_Build_1))
    {
      o_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_62;
  if(match_cons(t, sym_Op_2))
    {
      p_62 = ATgetArgument(t, 0);
      {
        ATerm a_25 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_62;
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            s_62 = ATgetArgument(t, 0);
            {
              ATerm d_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_25);
        t = s_62;
        if(match_cons(t, sym_Match_1))
          {
            t_62 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_62;
        if(match_cons(t, sym_Op_2))
          {
            z_61 = ATgetArgument(t, 0);
            {
              ATerm e_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_62, z_61);
        {
          ATerm f_25 = t;
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
              t = f_25;
            }
        }
        t = term_r_6;
      }
    else
      {
        t = b_25;
        if(match_cons(t, sym_Match_1))
          {
            s_62 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_62;
        if(match_cons(t, sym_Op_2))
          {
            t_62 = ATgetArgument(t, 0);
            {
              ATerm g_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_62, t_62);
        {
          ATerm h_25 = t;
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
              t = h_25;
            }
        }
        t = term_r_6;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm e_138 (ATerm), ATerm t)
{
  static ATerm x_62 (ATerm t);
  static ATerm x_62 (ATerm t)
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_138(t);
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        t = SRTS_one(x_62, t);
      }
    return(t);
  }
  t = x_62(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL;
  q_63 = t;
  if(match_cons(t, sym_Let_2))
    {
      r_63 = ATgetArgument(t, 0);
      y_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_63;
  if(match_cons(t, sym_Let_2))
    {
      z_63 = ATgetArgument(t, 0);
      b_64 = ATgetArgument(t, 1);
      {
        ATerm g_64 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, r_63, z_63);
        t = conc_0_0(t);
        g_64 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, g_64, b_64);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          z_63 = ATgetArgument(t, 0);
          b_64 = ATgetArgument(t, 1);
          c_64 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = r_63;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_63 = ATgetFirst((ATermList) t);
          x_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_63;
      if(match_cons(t, sym_SDefT_4))
        {
          t_63 = ATgetArgument(t, 0);
          u_63 = ATgetArgument(t, 1);
          v_63 = ATgetArgument(t, 2);
          w_63 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = u_63;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_63;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_63;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_63;
      if(match_cons(t, sym_SVar_1))
        {
          a_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_64;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_64;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_64;
      if((t_63 != t))
        {
          _fail(t);
        }
      t = w_63;
      {
        ATerm k_25 = t;
        if((PushChoice() == 0))
          {
            static ATerm h_1 (ATerm t);
            static ATerm h_1 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm l_25 = ATgetArgument(t, 0);
                  if(match_cons(l_25, sym_SVar_1))
                    {
                      if((t_63 != ATgetArgument(l_25, 0)))
                        {
                          _fail(ATgetArgument(l_25, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm m_25 = ATgetArgument(t, 1);
                    if(((ATgetType(m_25) != AT_LIST) || !(ATisEmpty(m_25))))
                      _fail(t);
                  }
                  {
                    ATerm n_25 = ATgetArgument(t, 2);
                    if(((ATgetType(n_25) != AT_LIST) || !(ATisEmpty(n_25))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(h_1, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = k_25;
          }
      }
      t = w_63;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,w_64 = NULL,x_64 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      w_64 = ATgetArgument(t, 0);
      t = w_64;
      if(match_cons(t, sym_Seq_2))
        {
          u_64 = ATgetArgument(t, 0);
          q_64 = ATgetArgument(t, 1);
          t = u_64;
          if(match_cons(t, sym_Where_1))
            {
              p_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_64;
          if(match_cons(t, sym_Seq_2))
            {
              r_64 = ATgetArgument(t, 0);
              t_64 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_64;
          if(match_cons(t, sym_Build_1))
            {
              s_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, p_64, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_64), t_64)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              u_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, u_64);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          w_64 = ATgetArgument(t, 0);
          t = w_64;
          if(match_cons(t, sym_Test_1))
            {
              u_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, u_64);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              w_64 = ATgetArgument(t, 0);
              t = w_64;
              if(match_cons(t, sym_Not_1))
                {
                  u_64 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, u_64);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  w_64 = ATgetArgument(t, 0);
                  x_64 = ATgetArgument(t, 1);
                  t = x_64;
                  if((w_64 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      w_64 = ATgetArgument(t, 0);
                      x_64 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = x_64;
                  if((w_64 != t))
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
  ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      l_65 = ATgetArgument(t, 0);
      o_65 = ATgetArgument(t, 1);
      t = l_65;
      if(match_cons(t, sym_LChoice_2))
        {
          m_65 = ATgetArgument(t, 0);
          n_65 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, m_65, (ATerm) ATmakeAppl(sym_LChoice_2, n_65, o_65));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          l_65 = ATgetArgument(t, 0);
          o_65 = ATgetArgument(t, 1);
          t = l_65;
          if(match_cons(t, sym_Seq_2))
            {
              m_65 = ATgetArgument(t, 0);
              n_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, m_65, (ATerm) ATmakeAppl(sym_Seq_2, n_65, o_65));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              l_65 = ATgetArgument(t, 0);
              o_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_65;
          if(match_cons(t, sym_Choice_2))
            {
              m_65 = ATgetArgument(t, 0);
              n_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, m_65, (ATerm) ATmakeAppl(sym_Choice_2, n_65, o_65));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL,g_66 = NULL,h_66 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      g_66 = ATgetArgument(t, 0);
      h_66 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, g_66, h_66);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          g_66 = ATgetArgument(t, 0);
          t = g_66;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_66 = ATgetFirst((ATermList) t);
              d_66 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, c_66, (ATerm) ATmakeAppl(sym_LChoices_1, d_66));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_r_6;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              g_66 = ATgetArgument(t, 0);
              t = g_66;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_66 = ATgetFirst((ATermList) t);
                  d_66 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, c_66, (ATerm) ATmakeAppl(sym_Choices_1, d_66));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_r_6;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  g_66 = ATgetArgument(t, 0);
                  t = g_66;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      c_66 = ATgetFirst((ATermList) t);
                      d_66 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_66, (ATerm) ATmakeAppl(sym_Seqs_1, d_66));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_j_6;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      g_66 = ATgetArgument(t, 0);
                      h_66 = ATgetArgument(t, 1);
                      e_66 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, h_66, (ATerm) ATmakeAppl(sym_Op_2, term_f_23, (ATerm) ATinsert(ATinsert(ATempty, e_66), g_66)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          g_66 = ATgetArgument(t, 0);
                          h_66 = ATgetArgument(t, 1);
                          e_66 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, e_66)), g_66), (ATerm) ATmakeAppl(sym_Build_1, h_66)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              g_66 = ATgetArgument(t, 0);
                              h_66 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_66, (ATerm) ATmakeAppl(sym_Match_1, h_66));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  g_66 = ATgetArgument(t, 0);
                                  h_66 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_66), h_66);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      g_66 = ATgetArgument(t, 0);
                                      h_66 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_66), g_66);
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
static ATerm i_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      u_67 = ATgetArgument(t, 0);
      t = u_67;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_r_6;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          u_67 = ATgetArgument(t, 0);
          t = u_67;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_j_6;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              u_67 = ATgetArgument(t, 0);
              v_67 = ATgetArgument(t, 1);
              t = u_67;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_r_6;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  u_67 = ATgetArgument(t, 0);
                  v_67 = ATgetArgument(t, 1);
                  t = v_67;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_r_6;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      u_67 = ATgetArgument(t, 0);
                      v_67 = ATgetArgument(t, 1);
                      t = v_67;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_r_6;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          u_67 = ATgetArgument(t, 0);
                          t = u_67;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_r_6;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              u_67 = ATgetArgument(t, 0);
                              t = u_67;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_r_6;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  u_67 = ATgetArgument(t, 0);
                                  v_67 = ATgetArgument(t, 1);
                                  t = v_67;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_r_6;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      u_67 = ATgetArgument(t, 0);
                                      v_67 = ATgetArgument(t, 1);
                                      t = v_67;
                                      t = fetch_1_0(i_1, t);
                                      t = term_r_6;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          u_67 = ATgetArgument(t, 0);
                                          v_67 = ATgetArgument(t, 1);
                                          t = v_67;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = u_67;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = v_67;
                                                }
                                              else
                                                {
                                                  t = u_67;
                                                }
                                            }
                                          else
                                            {
                                              t = u_67;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = v_67;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              u_67 = ATgetArgument(t, 0);
                                              v_67 = ATgetArgument(t, 1);
                                              t = v_67;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = u_67;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = v_67;
                                                    }
                                                  else
                                                    {
                                                      t = u_67;
                                                    }
                                                }
                                              else
                                                {
                                                  t = u_67;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = v_67;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  u_67 = ATgetArgument(t, 0);
                                                  t = u_67;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_r_6;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      u_67 = ATgetArgument(t, 0);
                                                      v_67 = ATgetArgument(t, 1);
                                                      w_67 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = w_67;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_67, v_67);
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
  ATerm z_68 = NULL,b_69 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      b_69 = ATgetArgument(t, 0);
      t = b_69;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_j_6;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          b_69 = ATgetArgument(t, 0);
          t = b_69;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_r_6;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              b_69 = ATgetArgument(t, 0);
              z_68 = ATgetArgument(t, 1);
              t = z_68;
              if(match_cons(t, sym_Id_0))
                {
                  t = b_69;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = z_68;
                    }
                  else
                    {
                      t = b_69;
                    }
                }
              else
                {
                  t = b_69;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = z_68;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  b_69 = ATgetArgument(t, 0);
                  z_68 = ATgetArgument(t, 1);
                  t = b_69;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_j_6;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      b_69 = ATgetArgument(t, 0);
                      z_68 = ATgetArgument(t, 1);
                      t = z_68;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_j_6;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          b_69 = ATgetArgument(t, 0);
                          z_68 = ATgetArgument(t, 1);
                          t = z_68;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_j_6;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              b_69 = ATgetArgument(t, 0);
                              t = b_69;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_j_6;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  b_69 = ATgetArgument(t, 0);
                                  t = b_69;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_j_6;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      b_69 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = b_69;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_j_6;
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
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(p_25);
    }
  else
    {
      t = o_25;
      {
        ATerm q_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(r_25);
          }
        else
          {
            t = q_25;
            {
              ATerm s_25 = t;
              int t_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(t_25);
                }
              else
                {
                  t = s_25;
                  {
                    ATerm u_25 = t;
                    int v_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(v_25);
                      }
                    else
                      {
                        t = u_25;
                        {
                          ATerm w_25 = t;
                          int x_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(x_25);
                            }
                          else
                            {
                              t = w_25;
                              {
                                ATerm z_25 = t;
                                int a_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm q_69 = NULL,r_69 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        q_69 = ATgetArgument(t, 0);
                                        r_69 = ATgetArgument(t, 1);
                                        t = q_69;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = r_69;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            q_69 = ATgetArgument(t, 0);
                                            r_69 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = q_69;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = r_69;
                                      }
                                    LocalPopChoice(a_26);
                                  }
                                else
                                  {
                                    t = z_25;
                                    {
                                      ATerm b_26 = t;
                                      int c_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(c_26);
                                        }
                                      else
                                        {
                                          t = b_26;
                                          {
                                            ATerm d_26 = t;
                                            int e_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(e_26);
                                              }
                                            else
                                              {
                                                t = d_26;
                                                {
                                                  ATerm f_26 = t;
                                                  int g_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(g_26);
                                                    }
                                                  else
                                                    {
                                                      t = f_26;
                                                      {
                                                        ATerm h_26 = t;
                                                        int i_26 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(i_26);
                                                          }
                                                        else
                                                          {
                                                            t = h_26;
                                                            {
                                                              ATerm j_26 = t;
                                                              int k_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
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
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(m_26);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = l_26;
                                                                        {
                                                                          ATerm o_26 = t;
                                                                          int p_26 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
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
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(r_26);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_26;
                                                                                    {
                                                                                      ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL,x_69 = NULL;
                                                                                      v_69 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          w_69 = ATgetArgument(t, 0);
                                                                                          x_69 = ATgetArgument(t, 1);
                                                                                          t = w_69;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              u_69 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = v_69;
                                                                                          t = g_5(u_69, x_69, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              w_69 = ATgetArgument(t, 0);
                                                                                              x_69 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = w_69;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = x_69;
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
static ATerm j_1 (ATerm t)
{
  ATerm n_70 = NULL;
  n_70 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_70);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm o_70 = NULL;
  o_70 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_70);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_26 = ATgetArgument(t, 0);
      if(((ATgetType(s_26) != AT_LIST) || !(ATisEmpty(s_26))))
        _fail(t);
      {
        ATerm t_26 = ATgetArgument(t, 1);
        if(((ATgetType(t_26) != AT_LIST) || !(ATisEmpty(t_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_26 = ATgetArgument(t, 0);
      if(((ATgetType(u_26) == AT_LIST) && !(ATisEmpty(u_26))))
        {
          p_70 = ATgetFirst((ATermList) u_26);
          q_70 = (ATerm) ATgetNext((ATermList) u_26);
        }
      else
        _fail(t);
      {
        ATerm v_26 = ATgetArgument(t, 1);
        if(((ATgetType(v_26) == AT_LIST) && !(ATisEmpty(v_26))))
          {
            r_70 = ATgetFirst((ATermList) v_26);
            s_70 = (ATerm) ATgetNext((ATermList) v_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_70, r_70), (ATerm) ATmakeAppl(sym__2, q_70, s_70));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm t_70 = NULL,u_70 = NULL;
  if(match_cons(t, sym__2))
    {
      t_70 = ATgetArgument(t, 0);
      u_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_70), t_70);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_26 = ATgetArgument(t, 0);
      if(((ATgetType(w_26) != AT_LIST) || !(ATisEmpty(w_26))))
        _fail(t);
      {
        ATerm x_26 = ATgetArgument(t, 1);
        if(((ATgetType(x_26) != AT_LIST) || !(ATisEmpty(x_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_26 = ATgetArgument(t, 0);
      if(((ATgetType(y_26) == AT_LIST) && !(ATisEmpty(y_26))))
        {
          w_70 = ATgetFirst((ATermList) y_26);
          x_70 = (ATerm) ATgetNext((ATermList) y_26);
        }
      else
        _fail(t);
      {
        ATerm z_26 = ATgetArgument(t, 1);
        if(((ATgetType(z_26) == AT_LIST) && !(ATisEmpty(z_26))))
          {
            y_70 = ATgetFirst((ATermList) z_26);
            z_70 = (ATerm) ATgetNext((ATermList) z_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_70, y_70), (ATerm) ATmakeAppl(sym__2, x_70, z_70));
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL;
  if(match_cons(t, sym__2))
    {
      a_71 = ATgetArgument(t, 0);
      b_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_71), a_71);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm c_71 = NULL,d_71 = NULL,e_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_27 = ATgetArgument(t, 0);
      if(match_cons(a_27, sym__2))
        {
          c_71 = ATgetArgument(a_27, 0);
          d_71 = ATgetArgument(a_27, 1);
        }
      else
        _fail(t);
      e_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, c_71)), (ATerm) ATmakeAppl(sym_Seq_2, e_71, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_71))));
  return(t);
}
static ATerm v_11 (ATerm o_107, ATerm u_107, ATerm t)
{
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,m_70 = NULL;
  t = u_107;
  t = map_1_0(new_0_0, t);
  f_70 = t;
  t = map_1_0(j_1, t);
  c_70 = t;
  t = new_0_0(t);
  d_70 = t;
  t = u_107;
  t = map_1_0(new_0_0, t);
  g_70 = t;
  t = map_1_0(k_1, t);
  e_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_70, g_70);
  t = genzip_4_0(l_1, n_1, o_1, _id, t);
  m_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_70, u_107);
  t = genzip_4_0(p_1, q_1, r_1, s_1, t);
  h_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_70, g_70);
  t = conc_0_0(t);
  i_70 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, o_107, c_70), (ATerm) ATmakeAppl(sym_Var_1, d_70)));
  t = Mapp2_0_0(t);
  j_70 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, o_107, e_70), (ATerm) ATmakeAppl(sym_Var_1, d_70)));
  t = Bapp_0_0(t);
  k_70 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(i_70), d_70), (ATerm) ATmakeAppl(sym_Seq_2, j_70, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, h_70), k_70)));
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm g_71 = NULL,h_71 = NULL;
  g_71 = t;
  if(match_cons(t, sym_Build_1))
    {
      h_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_71 = NULL,j_71 = NULL,l_71 = NULL,m_71 = NULL;
        t = g_71;
        t = new_0_0(t);
        l_71 = t;
        t = h_71;
        {
          static ATerm t_1 (ATerm t);
          static ATerm t_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((i_71 != NULL) && (i_71 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_71 = ATgetArgument(t, 0);
                if(((j_71 != NULL) && (j_71 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  j_71 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, l_71);
            return(t);
          }
          t = pat_td_1_0(t_1, t);
        }
        m_71 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_71), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_27, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_71)), not_null(i_71))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_71)))), (ATerm) ATmakeAppl(sym_Build_1, m_71)));
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        {
          ATerm f_27 = t;
          int g_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_71 = NULL,p_71 = NULL,q_71 = NULL;
              t = g_71;
              t = new_0_0(t);
              p_71 = t;
              t = h_71;
              {
                static ATerm u_1 (ATerm t);
                static ATerm u_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((n_71 != NULL) && (n_71 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        n_71 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, p_71);
                  return(t);
                }
                t = pat_td_1_0(u_1, t);
              }
              q_71 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_71), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_71), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_71)))), (ATerm) ATmakeAppl(sym_Build_1, q_71)));
              LocalPopChoice(g_27);
            }
          else
            {
              t = f_27;
              {
                ATerm r_71 = NULL,s_71 = NULL,u_71 = NULL,v_71 = NULL;
                t = g_71;
                t = new_0_0(t);
                u_71 = t;
                t = h_71;
                {
                  static ATerm w_1 (ATerm t);
                  static ATerm w_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((r_71 != NULL) && (r_71 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          r_71 = ATgetArgument(t, 0);
                        if(((s_71 != NULL) && (s_71 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          s_71 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, u_71);
                    return(t);
                  }
                  t = pat_td_1_0(w_1, t);
                }
                v_71 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_71), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(r_71), not_null(s_71), (ATerm) ATmakeAppl(sym_Var_1, u_71))), (ATerm) ATmakeAppl(sym_Build_1, v_71)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm a_160 (ATerm), ATerm t)
{
  static ATerm q_72 (ATerm t);
  static ATerm q_72 (ATerm t)
  {
    ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL;
    p_72 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_72 = ATgetFirst((ATermList) t);
        o_72 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_2 = NULL,p_2 = NULL,n_0 = NULL;
          t = SSLgetAnnotations(p_72);
          m_2 = t;
          t = o_72;
          t = q_72(t);
          p_2 = t;
          t = (ATerm) ATinsert(CheckATermList(p_2), n_72);
          n_0 = t;
          t = SSLsetAnnotations(n_0, m_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_72;
        t = a_160(t);
      }
    return(t);
  }
  t = q_72(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL;
  x_71 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_71;
    }
  else
    {
      static ATerm x_1 (ATerm t);
      static ATerm x_1 (ATerm t)
      {
        t = not_null(z_71);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_71 = ATgetFirst((ATermList) t);
          if(((z_71 != NULL) && (z_71 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_71;
      t = at_end_1_0(x_1, t);
    }
  return(t);
}
static ATerm d_73 (ATerm v_72, ATerm t)
{
  ATerm w_72 = NULL;
  t = SSL_explode_term(v_72);
  if(match_cons(t, sym__2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_72;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL;
  a_73 = t;
  if(match_cons(t, sym__2))
    {
      y_72 = ATgetArgument(t, 0);
      z_72 = ATgetArgument(t, 1);
      {
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm y_1 (ATerm t);
            static ATerm y_1 (ATerm t)
            {
              t = z_72;
              return(t);
            }
            t = y_72;
            t = at_end_1_0(y_1, t);
            LocalPopChoice(j_27);
          }
        else
          {
            t = i_27;
            t = d_73(a_73, t);
          }
      }
    }
  else
    {
      t = d_73(a_73, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm r_141 (ATerm), ATerm s_141 (ATerm), ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t)
{
  static ATerm k_73 (ATerm t);
  static ATerm k_73 (ATerm t)
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_141(t);
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        {
          ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,t_4 = NULL;
          t = s_141(t);
          j_73 = t;
          if(match_cons(t, sym__2))
            {
              f_73 = ATgetArgument(t, 0);
              g_73 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_73);
          e_73 = t;
          t = f_73;
          t = u_141(t);
          h_73 = t;
          t = g_73;
          t = k_73(t);
          i_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_73, i_73);
          t_4 = t;
          t = SSLsetAnnotations(t_4, e_73);
          t = t_141(t);
        }
      }
    return(t);
  }
  t = k_73(t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm y_73 = NULL;
  y_73 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_73);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm z_73 = NULL;
  z_73 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_73);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_27 = ATgetArgument(t, 0);
      if(((ATgetType(m_27) != AT_LIST) || !(ATisEmpty(m_27))))
        _fail(t);
      {
        ATerm n_27 = ATgetArgument(t, 1);
        if(((ATgetType(n_27) != AT_LIST) || !(ATisEmpty(n_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_27 = ATgetArgument(t, 0);
      if(((ATgetType(p_27) == AT_LIST) && !(ATisEmpty(p_27))))
        {
          a_74 = ATgetFirst((ATermList) p_27);
          b_74 = (ATerm) ATgetNext((ATermList) p_27);
        }
      else
        _fail(t);
      {
        ATerm q_27 = ATgetArgument(t, 1);
        if(((ATgetType(q_27) == AT_LIST) && !(ATisEmpty(q_27))))
          {
            c_74 = ATgetFirst((ATermList) q_27);
            d_74 = (ATerm) ATgetNext((ATermList) q_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_74, c_74), (ATerm) ATmakeAppl(sym__2, b_74, d_74));
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm e_74 = NULL,f_74 = NULL;
  if(match_cons(t, sym__2))
    {
      e_74 = ATgetArgument(t, 0);
      f_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_74), e_74);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_27 = ATgetArgument(t, 0);
      if(((ATgetType(r_27) != AT_LIST) || !(ATisEmpty(r_27))))
        _fail(t);
      {
        ATerm s_27 = ATgetArgument(t, 1);
        if(((ATgetType(s_27) != AT_LIST) || !(ATisEmpty(s_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_27 = ATgetArgument(t, 0);
      if(((ATgetType(u_27) == AT_LIST) && !(ATisEmpty(u_27))))
        {
          h_74 = ATgetFirst((ATermList) u_27);
          i_74 = (ATerm) ATgetNext((ATermList) u_27);
        }
      else
        _fail(t);
      {
        ATerm v_27 = ATgetArgument(t, 1);
        if(((ATgetType(v_27) == AT_LIST) && !(ATisEmpty(v_27))))
          {
            j_74 = ATgetFirst((ATermList) v_27);
            k_74 = (ATerm) ATgetNext((ATermList) v_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_74, j_74), (ATerm) ATmakeAppl(sym__2, i_74, k_74));
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm l_74 = NULL,m_74 = NULL;
  if(match_cons(t, sym__2))
    {
      l_74 = ATgetArgument(t, 0);
      m_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_74), l_74);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm n_74 = NULL,o_74 = NULL,p_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_27 = ATgetArgument(t, 0);
      if(match_cons(w_27, sym__2))
        {
          n_74 = ATgetArgument(w_27, 0);
          o_74 = ATgetArgument(w_27, 1);
        }
      else
        _fail(t);
      p_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, n_74)), (ATerm) ATmakeAppl(sym_Seq_2, p_74, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_74))));
  return(t);
}
static ATerm z_11 (ATerm z_107, ATerm h_108, ATerm g_108, ATerm t)
{
  ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,x_73 = NULL;
  t = (ATerm) ATinsert(CheckATermList(h_108), g_108);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_73 = ATgetFirst((ATermList) t);
      q_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(z_1, t);
  n_73 = t;
  t = (ATerm) ATinsert(CheckATermList(h_108), g_108);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_73 = ATgetFirst((ATermList) t);
      r_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(a_2, t);
  p_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_73, r_73);
  t = genzip_4_0(b_2, c_2, d_2, _id, t);
  x_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_73, (ATerm) ATinsert(CheckATermList(h_108), g_108));
  t = genzip_4_0(e_2, f_2, g_2, h_2, t);
  s_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_73, r_73);
  t = conc_0_0(t);
  t_73 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, z_107, n_73), (ATerm) ATmakeAppl(sym_Var_1, m_73)));
  t = Mapp2_0_0(t);
  u_73 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, z_107, p_73), (ATerm) ATmakeAppl(sym_Var_1, o_73)));
  t = Bapp_0_0(t);
  v_73 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(t_73), o_73), m_73), (ATerm) ATmakeAppl(sym_Seq_2, u_73, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_73), v_73)));
  return(t);
}
ATerm pat_td_1_0 (ATerm v_134 (ATerm), ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_134(t);
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      {
        ATerm z_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL;
        a_77 = t;
        if(match_cons(t, sym_Op_2))
          {
            b_77 = ATgetArgument(t, 0);
            c_77 = ATgetArgument(t, 1);
            {
              ATerm x_2 = NULL,a_3 = NULL,y_4 = NULL;
              t = SSLgetAnnotations(a_77);
              x_2 = t;
              t = c_77;
              {
                static ATerm i_2 (ATerm t);
                static ATerm i_2 (ATerm t)
                {
                  t = pat_td_1_0(v_134, t);
                  return(t);
                }
                t = fetch_1_0(i_2, t);
              }
              a_3 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, b_77, a_3);
              y_4 = t;
              t = SSLsetAnnotations(y_4, x_2);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                b_77 = ATgetArgument(t, 0);
                c_77 = ATgetArgument(t, 1);
                {
                  ATerm z_27 = t;
                  int a_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_3 = NULL,l_3 = NULL,z_4 = NULL;
                      t = SSLgetAnnotations(a_77);
                      i_3 = t;
                      t = c_77;
                      t = pat_td_1_0(v_134, t);
                      l_3 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, b_77, l_3);
                      z_4 = t;
                      t = SSLsetAnnotations(z_4, i_3);
                      LocalPopChoice(a_28);
                    }
                  else
                    {
                      t = z_27;
                      {
                        ATerm t_3 = NULL,w_3 = NULL,b_5 = NULL;
                        t = SSLgetAnnotations(a_77);
                        t_3 = t;
                        t = b_77;
                        t = pat_td_1_0(v_134, t);
                        w_3 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, w_3, c_77);
                        b_5 = t;
                        t = SSLsetAnnotations(b_5, t_3);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    b_77 = ATgetArgument(t, 0);
                    c_77 = ATgetArgument(t, 1);
                    z_76 = ATgetArgument(t, 2);
                    {
                      ATerm f_4 = NULL,j_4 = NULL,c_5 = NULL;
                      t = SSLgetAnnotations(a_77);
                      f_4 = t;
                      t = z_76;
                      {
                        static ATerm j_2 (ATerm t);
                        static ATerm j_2 (ATerm t)
                        {
                          t = pat_td_1_0(v_134, t);
                          return(t);
                        }
                        t = fetch_1_0(j_2, t);
                      }
                      j_4 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, b_77, c_77, j_4);
                      c_5 = t;
                      t = SSLsetAnnotations(c_5, f_4);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        b_77 = ATgetArgument(t, 0);
                        c_77 = ATgetArgument(t, 1);
                        z_76 = ATgetArgument(t, 2);
                        {
                          ATerm v_4 = NULL,j_5 = NULL,d_5 = NULL;
                          t = SSLgetAnnotations(a_77);
                          v_4 = t;
                          t = z_76;
                          {
                            static ATerm k_2 (ATerm t);
                            static ATerm k_2 (ATerm t)
                            {
                              t = pat_td_1_0(v_134, t);
                              return(t);
                            }
                            t = fetch_1_0(k_2, t);
                          }
                          j_5 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, b_77, c_77, j_5);
                          d_5 = t;
                          t = SSLsetAnnotations(d_5, v_4);
                        }
                      }
                    else
                      {
                        ATerm b_6 = NULL,e_6 = NULL,e_5 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            b_77 = ATgetArgument(t, 0);
                            c_77 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(a_77);
                        b_6 = t;
                        t = c_77;
                        t = pat_td_1_0(v_134, t);
                        e_6 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, b_77, e_6);
                        e_5 = t;
                        t = SSLsetAnnotations(e_5, b_6);
                      }
                  }
              }
          }
      }
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL;
  k_77 = t;
  if(match_cons(t, sym_Match_1))
    {
      l_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL;
        t = k_77;
        t = new_0_0(t);
        p_77 = t;
        t = l_77;
        {
          static ATerm l_2 (ATerm t);
          static ATerm l_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((n_77 != NULL) && (n_77 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_77 = ATgetArgument(t, 0);
                if(((o_77 != NULL) && (o_77 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  o_77 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, p_77), n_77);
            return(t);
          }
          t = pat_td_1_0(l_2, t);
        }
        q_77 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_77), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_77), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_d_28, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, p_77))), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_77))))));
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
        {
          ATerm e_28 = t;
          int g_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_77 = NULL,t_77 = NULL,u_77 = NULL;
              t = k_77;
              t = new_0_0(t);
              t_77 = t;
              t = l_77;
              {
                static ATerm n_2 (ATerm t);
                static ATerm n_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((s_77 != NULL) && (s_77 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        s_77 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, t_77);
                  return(t);
                }
                t = pat_td_1_0(n_2, t);
              }
              u_77 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_77), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, u_77), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, t_77)), not_null(s_77))));
              LocalPopChoice(g_28);
            }
          else
            {
              t = e_28;
              {
                ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL;
                t = k_77;
                t = new_0_0(t);
                y_77 = t;
                t = l_77;
                {
                  static ATerm o_2 (ATerm t);
                  static ATerm o_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((x_77 != NULL) && (x_77 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          x_77 = ATgetArgument(t, 0);
                        if(((w_77 != NULL) && (w_77 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          w_77 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, y_77);
                    return(t);
                  }
                  t = pat_td_1_0(o_2, t);
                }
                z_77 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_77), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_77), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, y_77)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_77)), not_null(x_77)))));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm r_78 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      r_78 = ATgetArgument(t, 0);
      t = r_78;
    }
  else
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_h_28;
    }
  return(t);
}
ATerm MatchingCongruence_0_0 (ATerm t)
{
  ATerm f_78 = NULL,g_78 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      f_78 = ATgetArgument(t, 0);
      g_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_78;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, f_78, (ATerm) ATempty));
    }
  else
    {
      ATerm q_78 = NULL;
      t = g_78;
      t = map_1_0(q_2, t);
      q_78 = t;
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, f_78, q_78));
      t = Mapp2_0_0(t);
    }
  return(t);
}
ATerm repeat_2_0 (ATerm b_147 (ATerm), ATerm c_147 (ATerm), ATerm t)
{
  static ATerm u_78 (ATerm t);
  static ATerm u_78 (ATerm t)
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_147(t);
        t = u_78(t);
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
        t = c_147(t);
      }
    return(t);
  }
  t = u_78(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm b_137 (ATerm), ATerm t)
{
  static ATerm r_2 (ATerm t);
  static ATerm r_2 (ATerm t)
  {
    t = bottomup_1_0(b_137, t);
    return(t);
  }
  t = SRTS_all(r_2, t);
  t = b_137(t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = repeat_2_0(t_2, _id, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_28 = t;
      int n_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MatchingCongruence_0_0(t);
          LocalPopChoice(n_28);
        }
      else
        {
          t = m_28;
          {
            ATerm e_79 = NULL,f_79 = NULL,g_79 = NULL,h_79 = NULL,i_79 = NULL,j_79 = NULL,k_79 = NULL,l_79 = NULL,m_79 = NULL,n_79 = NULL;
            l_79 = t;
            if(match_cons(t, sym_Call_2))
              {
                m_79 = ATgetArgument(t, 0);
                n_79 = ATgetArgument(t, 1);
                t = m_79;
                if(match_cons(t, sym_SVar_1))
                  {
                    e_79 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = e_79;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
                  _fail(t);
                t = n_79;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_79 = ATgetFirst((ATermList) t);
                    i_79 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = f_79;
                if(match_cons(t, sym_Cong_2))
                  {
                    g_79 = ATgetArgument(t, 0);
                    h_79 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_79;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    j_79 = ATgetFirst((ATermList) t);
                    k_79 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = k_79;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_79;
                t = z_11(g_79, h_79, j_79, t);
              }
            else
              {
                if(match_cons(t, sym_Cong_2))
                  {
                    m_79 = ATgetArgument(t, 0);
                    n_79 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_79;
                t = v_11(m_79, n_79, t);
              }
          }
        }
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm define_congruences_0_0 (ATerm t)
{
  t = bottomup_1_0(s_2, t);
  t = simplify_0_0(t);
  return(t);
}
ATerm map_1_0 (ATerm l_159 (ATerm), ATerm t)
{
  static ATerm i_80 (ATerm t);
  static ATerm i_80 (ATerm t)
  {
    ATerm f_80 = NULL,g_80 = NULL,h_80 = NULL;
    f_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_80;
      }
    else
      {
        ATerm m_6 = NULL,p_6 = NULL,q_6 = NULL,p_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_80 = ATgetFirst((ATermList) t);
            h_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_80);
        m_6 = t;
        t = g_80;
        t = l_159(t);
        p_6 = t;
        t = h_80;
        t = i_80(t);
        q_6 = t;
        t = (ATerm) ATinsert(CheckATermList(q_6), p_6);
        p_5 = t;
        t = SSLsetAnnotations(p_5, m_6);
      }
    return(t);
  }
  t = i_80(t);
  return(t);
}
static ATerm a_12 (ATerm w_47, ATerm x_47, ATerm t)
{
  ATerm k_80 = NULL;
  t = SSL_fputc(w_47, x_47);
  k_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_80);
  return(t);
}
static ATerm b_12 (ATerm k_53, ATerm l_53, ATerm t)
{
  ATerm l_80 = NULL;
  t = SSL_write_term_to_stream_text(k_53, l_53);
  l_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_80);
  return(t);
}
static ATerm d_12 (ATerm s_151 (ATerm), ATerm i_490, ATerm q_53, ATerm t)
{
  ATerm m_80 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_490, term_o_28);
  t = h_12(t);
  m_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_80, q_53);
  t = s_151(t);
  t = fclose_0_0(t);
  t = q_53;
  return(t);
}
static ATerm c_12 (ATerm g_53, ATerm h_53, ATerm t)
{
  ATerm n_80 = NULL;
  t = SSL_write_term_to_stream_baf(g_53, h_53);
  n_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_80);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm z_80 = NULL,a_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_28 = ATgetArgument(t, 0);
      if(match_cons(p_28, sym_Stream_1))
        {
          z_80 = ATgetArgument(p_28, 0);
        }
      else
        _fail(t);
      a_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_12(z_80, a_81, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_28 = ATgetArgument(t, 0);
      if(match_cons(q_28, sym_Stream_1))
        {
          e_81 = ATgetArgument(q_28, 0);
        }
      else
        _fail(t);
      f_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_12(e_81, f_81, t);
  b_81 = t;
  t = term_r_28;
  c_81 = t;
  t = b_81;
  if(match_cons(t, sym_Stream_1))
    {
      d_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_r_28, b_81);
  t = a_12(c_81, d_81, t);
  return(t);
}
ATerm output_1_0 (ATerm l_169 (ATerm), ATerm t)
{
  ATerm o_80 = NULL,p_80 = NULL;
  t = l_169(t);
  p_80 = t;
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_80 = NULL,w_80 = NULL;
        t = term_u_28;
        q_80 = t;
        t = term_v_28;
        w_80 = t;
        t = term_w_28;
        t = n_12(q_80, w_80, t);
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        t = term_x_28;
      }
  }
  o_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_80, p_80);
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_80 = NULL,y_80 = NULL;
        t = term_u_28;
        x_80 = t;
        t = term_a_29;
        y_80 = t;
        t = term_b_29;
        t = n_12(x_80, y_80, t);
        t = (ATerm) ATmakeAppl(sym__2, o_80, p_80);
        LocalPopChoice(z_28);
        if(match_cons(t, sym__2))
          {
            ATerm c_29 = ATgetArgument(t, 0);
            ATerm d_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_12(u_2, o_80, p_80, t);
      }
    else
      {
        t = y_28;
        if(match_cons(t, sym__2))
          {
            ATerm e_29 = ATgetArgument(t, 0);
            ATerm f_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_12(v_2, o_80, p_80, t);
      }
  }
  return(t);
}
static ATerm z_81 (ATerm r_81, ATerm t)
{
  t = SSL_fclose(r_81);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_81 = NULL,v_81 = NULL;
  v_81 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_81 = ATgetArgument(t, 0);
      {
        ATerm g_29 = t;
        int h_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_81);
            LocalPopChoice(h_29);
          }
        else
          {
            t = g_29;
            t = z_81(v_81, t);
          }
      }
    }
  else
    {
      t = z_81(v_81, t);
    }
  return(t);
}
static ATerm e_12 (ATerm m_53, ATerm t)
{
  t = SSL_read_term_from_stream(m_53);
  return(t);
}
static ATerm f_12 (ATerm c_46, ATerm d_46, ATerm t)
{
  t = SSL_strcat(c_46, d_46);
  return(t);
}
static ATerm g_12 (ATerm y_47, ATerm z_47, ATerm t)
{
  ATerm a_82 = NULL;
  t = SSL_fopen(y_47, z_47);
  a_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_82);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_82 = NULL;
  t = SSL_stdin_stream();
  b_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_82);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_82 = NULL;
  t = SSL_stdout_stream();
  c_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_82);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_82 = NULL;
  t = SSL_stderr_stream();
  d_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_82);
  return(t);
}
static ATerm m_83 (ATerm j_82, ATerm t)
{
  ATerm k_82 = NULL;
  t = SSL_explode_term(j_82);
  if(match_cons(t, sym__2))
    {
      ATerm i_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_29 = ATgetArgument(t, 1);
        if(((ATgetType(j_29) == AT_LIST) && !(ATisEmpty(j_29))))
          {
            k_82 = ATgetFirst((ATermList) j_29);
            {
              ATerm k_29 = (ATerm) ATgetNext((ATermList) j_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_82;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_82;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_82;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_82;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_83 (ATerm n_82, ATerm o_82, ATerm p_82, ATerm t)
{
  ATerm q_82 = NULL,r_82 = NULL,s_82 = NULL,v_82 = NULL,j_7 = NULL;
  t = SSLgetAnnotations(p_82);
  s_82 = t;
  t = n_82;
  if(match_cons(t, sym_Path_1))
    {
      v_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_82, o_82);
  j_7 = t;
  t = SSLsetAnnotations(j_7, s_82);
  if(match_cons(t, sym__2))
    {
      q_82 = ATgetArgument(t, 0);
      r_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12(q_82, r_82, t);
  return(t);
}
static ATerm o_83 (ATerm x_82, ATerm y_82, ATerm z_82, ATerm t)
{
  ATerm a_83 = NULL,b_83 = NULL,c_83 = NULL,g_83 = NULL,p_14 = NULL;
  t = SSLgetAnnotations(z_82);
  c_83 = t;
  t = SSL_is_string(x_82);
  g_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_83, y_82);
  p_14 = t;
  t = SSLsetAnnotations(p_14, c_83);
  if(match_cons(t, sym__2))
    {
      a_83 = ATgetArgument(t, 0);
      b_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12(a_83, b_83, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm j_83 = NULL,k_83 = NULL,l_83 = NULL;
  j_83 = t;
  if(match_cons(t, sym__2))
    {
      k_83 = ATgetArgument(t, 0);
      l_83 = ATgetArgument(t, 1);
      {
        ATerm l_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_83(j_83, t);
            LocalPopChoice(m_29);
          }
        else
          {
            t = l_29;
            {
              ATerm n_29 = t;
              int o_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_83(k_83, l_83, j_83, t);
                  LocalPopChoice(o_29);
                }
              else
                {
                  t = n_29;
                  t = o_83(k_83, l_83, j_83, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_83(j_83, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_83 = NULL,r_83 = NULL,s_83 = NULL,x_83 = NULL;
  x_83 = t;
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_83, term_r_29);
        t = h_12(t);
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
        {
          ATerm d_7 = NULL,e_7 = NULL;
          t = term_s_29;
          e_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_29, x_83);
          t = f_12(e_7, x_83, t);
          d_7 = t;
          t = SSL_perror(d_7);
          _fail(t);
        }
      }
  }
  r_83 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_12(s_83, t);
  q_83 = t;
  t = r_83;
  t = fclose_0_0(t);
  t = q_83;
  return(t);
}
ATerm input_1_0 (ATerm m_169 (ATerm), ATerm t)
{
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_84 = NULL,b_84 = NULL;
      t = term_u_28;
      a_84 = t;
      t = term_v_29;
      b_84 = t;
      t = term_x_29;
      t = n_12(a_84, b_84, t);
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      t = term_y_29;
    }
  t = ReadFromFile_0_0(t);
  t = m_169(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_84 = NULL,d_84 = NULL;
  t = term_u_28;
  c_84 = t;
  t = term_z_29;
  d_84 = t;
  t = term_a_30;
  t = n_12(c_84, d_84, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_84 = NULL,g_84 = NULL,h_84 = NULL;
  f_84 = t;
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_84;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_30 = ATgetFirst((ATermList) t);
                ATerm e_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_84;
          }
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        t = (ATerm) ATinsert(ATempty, f_84);
      }
  }
  g_84 = t;
  t = term_x_28;
  h_84 = t;
  t = SSL_printnl(h_84, g_84);
  t = f_84;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm m_84 = NULL,n_84 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_84 = ATgetFirst((ATermList) t);
      n_84 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_84 = NULL,s_84 = NULL;
        static ATerm w_2 (ATerm t);
        static ATerm w_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_84)), not_null(s_84));
          return(t);
        }
        t = n_84;
        t = r_0(t);
        if(((r_84 != NULL) && (r_84 != t)))
          _fail(t);
        else
          r_84 = t;
        t = m_84;
        t = p_0(t);
        if(((s_84 != NULL) && (s_84 != t)))
          _fail(t);
        else
          s_84 = t;
        t = n_84;
        t = reverse_acc_2_0(p_0, w_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_30;
      t = r_0(t);
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm b_85 = NULL,c_85 = NULL,d_85 = NULL,g_15 = NULL;
  d_85 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_85);
  b_85 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_85);
  g_15 = t;
  t = SSLsetAnnotations(g_15, b_85);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm h_85 = NULL;
  h_85 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_85), term_g_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm k_171 (ATerm), ATerm l_171 (ATerm), ATerm t)
{
  ATerm x_84 = NULL,y_84 = NULL;
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_84 = NULL,a_85 = NULL;
      t = term_u_28;
      z_84 = t;
      t = term_z_29;
      a_85 = t;
      t = term_a_30;
      t = n_12(z_84, a_85, t);
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      t = fetch_1_0(y_2, t);
    }
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_171(t);
        t = echo_0_0(t);
        LocalPopChoice(k_30);
      }
    else
      {
        t = j_30;
      }
  }
  t = term_l_30;
  t = echo_0_0(t);
  t = term_m_30;
  x_84 = t;
  t = term_o_30;
  y_84 = t;
  t = term_p_30;
  t = n_12(x_84, y_84, t);
  t = reverse_acc_2_0(_id, z_2, t);
  t = map_1_0(b_3, t);
  t = term_q_30;
  t = echo_0_0(t);
  {
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_171(t);
        {
          ATerm t_30 = t;
          int u_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_85 = NULL;
              i_85 = t;
              t = SSL_is_string(i_85);
              t = i_85;
              LocalPopChoice(u_30);
              {
                ATerm j_85 = NULL;
                j_85 = t;
                t = (ATerm) ATinsert(ATempty, j_85);
              }
            }
          else
            {
              t = t_30;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
      }
  }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm q_85 = NULL,r_85 = NULL,s_85 = NULL,i_15 = NULL;
  s_85 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_85);
  q_85 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_85);
  i_15 = t;
  t = SSLsetAnnotations(i_15, q_85);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_85 = NULL;
  n_85 = t;
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_85 = NULL,p_85 = NULL;
        t = term_u_28;
        o_85 = t;
        t = term_z_29;
        p_85 = t;
        t = term_a_30;
        t = n_12(o_85, p_85, t);
        LocalPopChoice(w_30);
      }
    else
      {
        t = v_30;
        t = fetch_1_0(c_3, t);
      }
  }
  t = n_85;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm u_85 = NULL;
  u_85 = t;
  if(match_string(t, "-k"))
    {
      t = u_85;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_85;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm v_85 = NULL,w_85 = NULL,x_85 = NULL;
  v_85 = t;
  t = SSL_string_to_int(v_85);
  w_85 = t;
  t = term_x_30;
  x_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_30, w_85);
  t = q_12(x_85, w_85, t);
  t = v_85;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_y_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_3, e_3, f_3, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm z_85 = NULL;
  z_85 = t;
  if(match_string(t, "-S"))
    {
      t = z_85;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_85;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm a_86 = NULL,b_86 = NULL;
  t = term_z_30;
  a_86 = t;
  t = term_a_31;
  b_86 = t;
  t = term_b_31;
  t = q_12(a_86, b_86, t);
  t = term_c_31;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_d_31;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm c_86 = NULL,d_86 = NULL,e_86 = NULL;
  c_86 = t;
  t = SSL_string_to_int(c_86);
  d_86 = t;
  t = term_z_30;
  e_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_30, d_86);
  t = q_12(e_86, d_86, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_86);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_e_31;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm f_86 = NULL,g_86 = NULL;
  t = term_f_31;
  f_86 = t;
  t = term_f_30;
  g_86 = t;
  t = term_g_31;
  t = q_12(f_86, g_86, t);
  t = term_h_31;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_i_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_3, h_3, j_3, t);
      LocalPopChoice(k_31);
    }
  else
    {
      t = j_31;
      {
        ATerm l_31 = t;
        int m_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_3, m_3, n_3, t);
            LocalPopChoice(m_31);
          }
        else
          {
            t = l_31;
            t = Option_3_0(o_3, p_3, q_3, t);
          }
      }
    }
  return(t);
}
static ATerm q_12 (ATerm a_52, ATerm b_52, ATerm t)
{
  ATerm h_86 = NULL,i_86 = NULL;
  t = term_u_28;
  h_86 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_28, a_52, b_52);
  t = lookup_table_0_1(h_86, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(a_52, b_52, i_86, t);
  t = (ATerm) ATmakeAppl(sym__3, term_u_28, a_52, b_52);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm m_86 = NULL,n_86 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_86 = NULL,p_86 = NULL,q_86 = NULL;
      t = term_f_30;
      t = g_0(t);
      o_86 = t;
      t = term_m_30;
      p_86 = t;
      t = term_o_30;
      q_86 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_30, term_o_30, o_86);
      t = o_12(p_86, q_86, o_86, t);
      _fail(t);
    }
  else
    {
      ATerm t_86 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_86 = ATgetFirst((ATermList) t);
          n_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_86;
      t = d_0(t);
      t = term_f_30;
      t = f_0(t);
      t_86 = t;
      t = (ATerm) ATinsert(CheckATermList(n_86), t_86);
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm v_86 = NULL;
  v_86 = t;
  if(match_string(t, "-o"))
    {
      t = v_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_86;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm w_86 = NULL,x_86 = NULL;
  w_86 = t;
  t = term_v_28;
  x_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_28, w_86);
  t = q_12(x_86, w_86, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_86);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_n_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_3, s_3, u_3, t);
  return(t);
}
static ATerm o_12 (ATerm l_57, ATerm m_57, ATerm k_57, ATerm t)
{
  ATerm z_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL,d_87 = NULL;
  z_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_57, m_57);
  {
    ATerm o_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_31 = ATgetArgument(t, 0);
            ATerm s_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_57, m_57);
        t = n_12(l_57, m_57, t);
        LocalPopChoice(p_31);
      }
    else
      {
        t = o_31;
        t = (ATerm) ATempty;
      }
  }
  a_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_57, m_57, (ATerm) ATinsert(CheckATermList(a_87), k_57));
  t = lookup_table_0_1(l_57, t);
  d_87 = t;
  t = (ATerm) ATinsert(CheckATermList(a_87), k_57);
  b_87 = t;
  t = d_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(m_57, b_87, c_87, t);
  t = z_86;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm k_87 = NULL,l_87 = NULL,m_87 = NULL,n_87 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_87 = NULL,q_87 = NULL,r_87 = NULL;
      t = term_f_30;
      t = o_0(t);
      o_87 = t;
      t = term_m_30;
      q_87 = t;
      t = term_o_30;
      r_87 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_30, term_o_30, o_87);
      t = o_12(q_87, r_87, o_87, t);
      _fail(t);
    }
  else
    {
      ATerm v_87 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_87 = ATgetFirst((ATermList) t);
          l_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_87;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_87 = ATgetFirst((ATermList) t);
          n_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_87;
      t = j_0(t);
      t = m_87;
      t = l_0(t);
      v_87 = t;
      t = (ATerm) ATinsert(CheckATermList(n_87), v_87);
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm x_87 = NULL;
  x_87 = t;
  if(match_string(t, "-i"))
    {
      t = x_87;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_87;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm y_87 = NULL,z_87 = NULL;
  y_87 = t;
  t = term_v_29;
  z_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_29, y_87);
  t = q_12(z_87, y_87, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_87);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_t_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_3, x_3, y_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_88 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_30;
  t = whoami_0_0(t);
  a_88 = t;
  t = term_u_31;
  c_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_31), a_88);
  d_88 = t;
  t = SSL_printnl(c_88, d_88);
  t = term_w_31;
  b_88 = t;
  t = SSL_exit(b_88);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm e_88 = NULL,f_88 = NULL;
  t = term_u_28;
  e_88 = t;
  t = term_z_29;
  f_88 = t;
  t = term_a_30;
  t = n_12(e_88, f_88, t);
  return(t);
}
static ATerm i_12 (ATerm t_54, ATerm u_54, ATerm t)
{
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_54, u_54);
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
      t = SSL_addr(t_54, u_54);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_161 (ATerm), ATerm s_161 (ATerm), ATerm t)
{
  ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL;
  h_88 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_88;
      t = r_161(t);
    }
  else
    {
      ATerm m_88 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_88 = ATgetFirst((ATermList) t);
          j_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_88;
      t = foldr_2_0(r_161, s_161, t);
      m_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_88, m_88);
      t = s_161(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_a_31;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL;
  if(match_cons(t, sym__2))
    {
      k_7 = ATgetArgument(t, 0);
      l_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(k_7, l_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_88 = NULL,g_7 = NULL,h_7 = NULL;
  t = times_0_0(t);
  h_7 = t;
  t = SSL_explode_term(h_7);
  if(match_cons(t, sym__2))
    {
      ATerm z_31 = ATgetArgument(t, 0);
      g_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7;
  t = foldr_2_0(z_3, a_4, t);
  p_88 = t;
  t = SSL_TicksToSeconds(p_88);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_89 = NULL,b_89 = NULL,c_89 = NULL;
  a_89 = t;
  if(match_cons(t, sym__2))
    {
      b_89 = ATgetArgument(t, 0);
      c_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_32 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_89;
        if((b_89 != t))
          {
            _fail(t);
          }
        t = a_89;
        LocalPopChoice(b_32);
      }
    else
      {
        t = a_32;
        t = (ATerm) ATmakeAppl(sym__2, b_89, c_89);
        {
          ATerm c_32 = t;
          int d_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_89, c_89);
              LocalPopChoice(d_32);
            }
          else
            {
              t = c_32;
              t = SSL_gtr(b_89, c_89);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_89, c_89);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_149 (ATerm), ATerm t)
{
  ATerm g_89 = NULL;
  g_89 = t;
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_89 = NULL,j_89 = NULL,k_89 = NULL;
        t = term_u_28;
        j_89 = t;
        t = term_z_30;
        k_89 = t;
        t = term_g_32;
        t = n_12(j_89, k_89, t);
        i_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_89, term_w_31);
        t = geq_0_0(t);
        t = g_89;
        t = n_149(t);
        LocalPopChoice(f_32);
      }
    else
      {
        t = e_32;
        t = g_89;
      }
  }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm m_89 = NULL,n_89 = NULL,p_89 = NULL,q_89 = NULL;
  t = run_time_0_0(t);
  m_89 = t;
  t = term_f_30;
  t = whoami_0_0(t);
  n_89 = t;
  t = term_u_31;
  p_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_32), m_89), term_h_32), n_89);
  q_89 = t;
  t = SSL_printnl(p_89, q_89);
  t = (ATerm) ATmakeAppl(sym__2, term_u_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_32), m_89), term_h_32), n_89));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_89 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_31;
  r_89 = t;
  t = SSL_exit(r_89);
  return(t);
}
static ATerm r_12 (ATerm a_62, ATerm b_62, ATerm c_62, ATerm t)
{
  ATerm s_89 = NULL;
  t = SSL_hashtable_put(c_62, a_62, b_62);
  s_89 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_89);
  return(t);
}
ATerm lookup_table_0_1 (ATerm x_58, ATerm t)
{
  ATerm b_90 = NULL;
  t = table_hashtable_0_0(t);
  b_90 = t;
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_8 = NULL;
        t = b_90;
        if(match_cons(t, sym_Hashtable_1))
          {
            d_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_12(x_58, d_8, t);
        LocalPopChoice(k_32);
      }
    else
      {
        t = j_32;
        {
          ATerm j_8 = NULL;
          t = x_58;
          t = table_create_0_0(t);
          t = b_90;
          if(match_cons(t, sym_Hashtable_1))
            {
              j_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_12(x_58, j_8, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm i_62, ATerm j_62, ATerm t)
{
  ATerm e_90 = NULL;
  t = SSL_hashtable_create(i_62, j_62);
  e_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_90);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm f_90 = NULL,g_90 = NULL,h_90 = NULL,j_90 = NULL,k_90 = NULL;
  f_90 = t;
  t = term_m_32;
  j_90 = t;
  t = term_n_32;
  k_90 = t;
  t = f_90;
  t = new_hashtable_0_2(j_90, k_90, t);
  g_90 = t;
  t = f_90;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(f_90, g_90, h_90, t);
  t = f_90;
  return(t);
}
static ATerm k_12 (ATerm f_62, ATerm g_62, ATerm t)
{
  ATerm l_90 = NULL;
  t = SSL_hashtable_remove(g_62, f_62);
  l_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_90);
  return(t);
}
static ATerm l_12 (ATerm k_62, ATerm t)
{
  ATerm m_90 = NULL;
  t = SSL_hashtable_destroy(k_62);
  m_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_90);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm n_90 = NULL;
  t = SSL_table_hashtable();
  n_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_90);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm o_90 = NULL,p_90 = NULL,q_90 = NULL,r_90 = NULL;
  o_90 = t;
  t = table_hashtable_0_0(t);
  p_90 = t;
  t = lookup_table_0_1(o_90, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_12(r_90, t);
  t = p_90;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_12(o_90, q_90, t);
  t = o_90;
  return(t);
}
ATerm fetch_1_0 (ATerm t_159 (ATerm), ATerm t)
{
  static ATerm v_91 (ATerm t);
  static ATerm v_91 (ATerm t)
  {
    ATerm m_91 = NULL,n_91 = NULL,u_91 = NULL;
    m_91 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_91 = ATgetFirst((ATermList) t);
        u_91 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_32 = t;
      int p_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_8 = NULL,z_8 = NULL,k_15 = NULL;
          t = SSLgetAnnotations(m_91);
          r_8 = t;
          t = n_91;
          t = t_159(t);
          z_8 = t;
          t = (ATerm) ATinsert(CheckATermList(u_91), z_8);
          k_15 = t;
          t = SSLsetAnnotations(k_15, r_8);
          LocalPopChoice(p_32);
        }
      else
        {
          t = o_32;
          {
            ATerm j_9 = NULL,m_9 = NULL,l_15 = NULL;
            t = SSLgetAnnotations(m_91);
            j_9 = t;
            t = u_91;
            t = v_91(t);
            m_9 = t;
            t = (ATerm) ATinsert(CheckATermList(m_9), n_91);
            l_15 = t;
            t = SSLsetAnnotations(l_15, j_9);
          }
        }
    }
    return(t);
  }
  t = v_91(t);
  return(t);
}
static ATerm s_12 (ATerm d_62, ATerm e_62, ATerm t)
{
  t = SSL_hashtable_get(e_62, d_62);
  return(t);
}
static ATerm n_12 (ATerm e_59, ATerm f_59, ATerm t)
{
  ATerm y_91 = NULL;
  t = lookup_table_0_1(e_59, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_12(f_59, y_91, t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm a_92 = NULL,b_92 = NULL;
  t = term_q_32;
  a_92 = t;
  t = term_f_30;
  b_92 = t;
  t = term_r_32;
  t = q_12(a_92, b_92, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_s_32;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm c_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL;
  t = term_q_32;
  e_92 = t;
  t = term_f_30;
  f_92 = t;
  t = term_r_32;
  t = q_12(e_92, f_92, t);
  t = term_t_32;
  c_92 = t;
  t = term_f_30;
  d_92 = t;
  t = term_u_32;
  t = q_12(c_92, d_92, t);
  t = term_v_32;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_w_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_4, d_4, e_4, t);
      LocalPopChoice(y_32);
    }
  else
    {
      t = x_32;
      t = Option_3_0(g_4, h_4, i_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm t)
{
  ATerm g_92 = NULL,h_92 = NULL,i_92 = NULL,j_92 = NULL,l_92 = NULL,m_92 = NULL,h_16 = NULL;
  m_92 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_92 = ATgetFirst((ATermList) t);
      i_92 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_92);
  g_92 = t;
  t = h_92;
  t = l_110(t);
  j_92 = t;
  t = i_92;
  t = m_110(t);
  l_92 = t;
  t = (ATerm) ATinsert(CheckATermList(l_92), j_92);
  h_16 = t;
  t = SSLsetAnnotations(h_16, g_92);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_171 (ATerm), ATerm t)
{
  ATerm r_92 = NULL,s_92 = NULL,t_92 = NULL,u_92 = NULL,w_92 = NULL,x_92 = NULL,j_16 = NULL;
  r_92 = t;
  {
    ATerm z_32 = t;
    int a_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_33;
        t = f_171(t);
        LocalPopChoice(a_33);
      }
    else
      {
        t = z_32;
      }
  }
  t = r_92;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_92 = ATgetFirst((ATermList) t);
      u_92 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_92);
  s_92 = t;
  t = term_z_29;
  x_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_29, t_92);
  t = q_12(x_92, t_92, t);
  t = u_92;
  {
    static ATerm h_93 (ATerm t);
    static ATerm h_93 (ATerm t)
    {
      ATerm c_33 = t;
      int d_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_33 = t;
          int f_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_93 = NULL;
              a_93 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_93;
              LocalPopChoice(f_33);
            }
          else
            {
              t = e_33;
              t = f_171(t);
              t = Cons_2_0(_id, h_93, t);
            }
          LocalPopChoice(d_33);
        }
      else
        {
          t = c_33;
          {
            ATerm d_93 = NULL,e_93 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_93 = ATgetFirst((ATermList) t);
                e_93 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(e_93), (ATerm) ATmakeAppl(sym_Undefined_1, d_93));
          }
        }
      return(t);
    }
    t = h_93(t);
  }
  w_92 = t;
  t = (ATerm) ATinsert(CheckATermList(w_92), (ATerm) ATmakeAppl(sym_Program_1, t_92));
  j_16 = t;
  t = SSLsetAnnotations(j_16, s_92);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm u_93 = NULL;
  u_93 = t;
  if(match_string(t, "--help"))
    {
      t = u_93;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_93;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_93;
        }
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm v_93 = NULL,w_93 = NULL;
  t = term_g_33;
  v_93 = t;
  t = term_f_30;
  w_93 = t;
  t = term_i_33;
  t = q_12(v_93, w_93, t);
  t = term_j_33;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_k_33;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm c_171 (ATerm), ATerm d_171 (ATerm), ATerm e_171 (ATerm), ATerm t)
{
  ATerm m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL,t_93 = NULL;
  o_93 = t;
  t = term_m_30;
  p_93 = t;
  t = term_l_33;
  t = lookup_table_0_1(p_93, t);
  t_93 = t;
  t = term_o_30;
  q_93 = t;
  t = (ATerm) ATempty;
  r_93 = t;
  t = t_93;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(q_93, r_93, s_93, t);
  t = o_93;
  {
    static ATerm k_4 (ATerm t);
    static ATerm k_4 (ATerm t)
    {
      ATerm m_33 = t;
      int n_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_171(t);
          LocalPopChoice(n_33);
        }
      else
        {
          t = m_33;
          {
            ATerm o_33 = t;
            int p_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_4, m_4, n_4, t);
                LocalPopChoice(p_33);
              }
            else
              {
                t = o_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_4, t);
  }
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_94 = NULL;
        j_94 = t;
        {
          ATerm t_33 = t;
          int u_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_9 = NULL;
              t = j_94;
              {
                ATerm v_33 = t;
                int w_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_9 = NULL,x_9 = NULL;
                    t = term_u_28;
                    w_9 = t;
                    t = term_g_33;
                    x_9 = t;
                    t = term_x_33;
                    t = n_12(w_9, x_9, t);
                    LocalPopChoice(w_33);
                  }
                else
                  {
                    t = v_33;
                    t = fetch_1_0(o_4, t);
                  }
              }
              t = j_94;
              t = d_171(t);
              t = term_a_31;
              v_9 = t;
              t = SSL_exit(v_9);
              LocalPopChoice(u_33);
            }
          else
            {
              t = t_33;
              {
                ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL;
                t = term_u_28;
                c_10 = t;
                t = term_q_32;
                d_10 = t;
                t = term_y_33;
                t = n_12(c_10, d_10, t);
                t = j_94;
                t = e_171(t);
                t = term_a_31;
                b_10 = t;
                t = SSL_exit(b_10);
              }
            }
        }
        LocalPopChoice(r_33);
      }
    else
      {
        t = q_33;
        {
          ATerm z_33 = t;
          int a_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_94 = NULL,l_94 = NULL,m_94 = NULL;
              static ATerm p_4 (ATerm t);
              static ATerm p_4 (ATerm t)
              {
                ATerm n_94 = NULL,o_94 = NULL,p_94 = NULL,l_16 = NULL;
                p_94 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    o_94 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_94);
                n_94 = t;
                t = o_94;
                if(((m_93 != NULL) && (m_93 != t)))
                  _fail(t);
                else
                  m_93 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, o_94);
                l_16 = t;
                t = SSLsetAnnotations(l_16, n_94);
                return(t);
              }
              t = fetch_1_0(p_4, t);
              t = term_u_31;
              l_94 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_93)), term_b_34);
              m_94 = t;
              t = SSL_printnl(l_94, m_94);
              t = (ATerm) ATmakeAppl(sym__2, term_u_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_93)), term_b_34));
              t = d_171(t);
              t = term_w_31;
              k_94 = t;
              t = SSL_exit(k_94);
              LocalPopChoice(a_34);
            }
          else
            {
              t = z_33;
            }
        }
      }
  }
  n_93 = t;
  t = term_m_30;
  t = table_destroy_0_0(t);
  t = n_93;
  return(t);
}
ATerm option_wrap_5_0 (ATerm f_169 (ATerm), ATerm g_169 (ATerm), ATerm h_169 (ATerm), ATerm i_169 (ATerm), ATerm j_169 (ATerm), ATerm t)
{
  ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL,z_94 = NULL;
  t = parse_options_3_0(f_169, g_169, h_169, t);
  v_94 = t;
  t = term_c_34;
  t = table_create_0_0(t);
  t = term_c_34;
  w_94 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_34, term_d_34, v_94);
  t = lookup_table_0_1(w_94, t);
  z_94 = t;
  t = term_d_34;
  x_94 = t;
  t = z_94;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(x_94, v_94, y_94, t);
  t = v_94;
  t = i_169(t);
  {
    ATerm f_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_169(t);
        t = report_success_0_0(t);
        LocalPopChoice(g_34);
      }
    else
      {
        t = f_34;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(i_34);
    }
  else
    {
      t = h_34;
      {
        ATerm j_34 = t;
        int k_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(k_34);
          }
        else
          {
            t = j_34;
            {
              ATerm l_34 = t;
              int m_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(s_4, u_4, w_4, t);
                  LocalPopChoice(m_34);
                }
              else
                {
                  t = l_34;
                  {
                    ATerm n_34 = t;
                    int o_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(o_34);
                      }
                    else
                      {
                        t = n_34;
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
static ATerm r_4 (ATerm t)
{
  t = input_1_0(x_4, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm e_95 = NULL,f_95 = NULL;
  t = term_a_29;
  e_95 = t;
  t = term_f_30;
  f_95 = t;
  t = term_p_34;
  t = q_12(e_95, f_95, t);
  t = term_r_34;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_s_34;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = output_1_0(a_5, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,m_95 = NULL,n_95 = NULL,p_95 = NULL,q_95 = NULL,s_95 = NULL,t_95 = NULL,v_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL,f_17 = NULL,e_17 = NULL,d_17 = NULL,x_16 = NULL;
  z_95 = t;
  if(match_cons(t, sym_Specification_1))
    {
      i_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_95);
  h_95 = t;
  t = i_95;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_95 = ATgetFirst((ATermList) t);
      m_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_95);
  j_95 = t;
  t = m_95;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_95 = ATgetFirst((ATermList) t);
      s_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_95);
  p_95 = t;
  t = q_95;
  if(match_cons(t, sym_Strategies_1))
    {
      w_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_95);
  v_95 = t;
  t = w_95;
  t = map_1_0(f_5, t);
  x_95 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, x_95);
  x_16 = t;
  t = SSLsetAnnotations(x_16, v_95);
  y_95 = t;
  t = s_95;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_95), y_95);
  d_17 = t;
  t = SSLsetAnnotations(d_17, p_95);
  t_95 = t;
  t = (ATerm) ATinsert(CheckATermList(t_95), k_95);
  e_17 = t;
  t = SSLsetAnnotations(e_17, j_95);
  n_95 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, n_95);
  f_17 = t;
  t = SSLsetAnnotations(f_17, h_95);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm m_96 = NULL,n_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL;
  q_96 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      m_96 = ATgetArgument(t, 0);
      n_96 = ATgetArgument(t, 1);
      o_96 = ATgetArgument(t, 2);
      p_96 = ATgetArgument(t, 3);
      {
        ATerm t_34 = t;
        int u_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_10 = NULL,h_14 = NULL,w_16 = NULL;
            t = SSLgetAnnotations(q_96);
            l_10 = t;
            t = p_96;
            t = define_congruences_0_0(t);
            h_14 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, m_96, n_96, o_96, h_14);
            w_16 = t;
            t = SSLsetAnnotations(w_16, l_10);
            LocalPopChoice(u_34);
          }
        else
          {
            t = t_34;
            t = q_96;
          }
      }
    }
  else
    {
      t = q_96;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(q_4, default_system_usage_0_0, default_system_about_0_0, _id, r_4, t);
  return(t);
}

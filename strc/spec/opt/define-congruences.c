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
static ATerm term_p_34;
static ATerm term_o_34;
static ATerm term_n_34;
static ATerm term_b_34;
static ATerm term_a_34;
static ATerm term_z_33;
static ATerm term_w_33;
static ATerm term_v_33;
static ATerm term_j_33;
static ATerm term_i_33;
static ATerm term_h_33;
static ATerm term_f_33;
static ATerm term_e_33;
static ATerm term_z_32;
static ATerm term_u_32;
static ATerm term_t_32;
static ATerm term_s_32;
static ATerm term_r_32;
static ATerm term_q_32;
static ATerm term_p_32;
static ATerm term_o_32;
static ATerm term_l_32;
static ATerm term_j_32;
static ATerm term_g_32;
static ATerm term_f_32;
static ATerm term_e_32;
static ATerm term_u_31;
static ATerm term_t_31;
static ATerm term_s_31;
static ATerm term_r_31;
static ATerm term_l_31;
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
static ATerm term_w_30;
static ATerm term_v_30;
static ATerm term_s_30;
static ATerm term_o_30;
static ATerm term_n_30;
static ATerm term_m_30;
static ATerm term_l_30;
static ATerm term_g_30;
static ATerm term_f_30;
static ATerm term_a_30;
static ATerm term_z_29;
static ATerm term_y_29;
static ATerm term_x_29;
static ATerm term_w_29;
static ATerm term_t_29;
static ATerm term_s_29;
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
static ATerm term_q_6;
static ATerm term_i_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_Fail_0);
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
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym__2, term_u_28, term_w_29);
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
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym__2, term_m_30, term_n_30);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym__2, term_x_30, term_y_30);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_30);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__2, term_d_31, term_f_30);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_u_28, term_x_30);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym__2, term_o_32, term_f_30);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym__2, term_r_32, term_f_30);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym__2, term_e_33, term_f_30);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym__3, term_m_30, term_n_30, (ATerm) ATempty);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_u_28, term_e_33);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym__2, term_u_28, term_o_32);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym__2, term_a_29, term_f_30);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
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
ATerm topdown_1_0 (ATerm j_136 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
static ATerm f_5 (ATerm w_107, ATerm v_107, ATerm t);
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
ATerm oncetd_1_0 (ATerm n_137 (ATerm), ATerm t);
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
static ATerm u_11 (ATerm x_106, ATerm d_107, ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm j_159 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm c_73 (ATerm u_72, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm a_141 (ATerm), ATerm b_141 (ATerm), ATerm c_141 (ATerm), ATerm d_141 (ATerm), ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm y_11 (ATerm i_107, ATerm q_107, ATerm p_107, ATerm t);
ATerm pat_td_1_0 (ATerm e_134 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm MatchingCongruence_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm k_146 (ATerm), ATerm l_146 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm k_136 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm define_congruences_0_0 (ATerm t);
ATerm map_1_0 (ATerm u_158 (ATerm), ATerm t);
static ATerm z_11 (ATerm w_47, ATerm x_47, ATerm t);
static ATerm a_12 (ATerm f_53, ATerm g_53, ATerm t);
static ATerm c_12 (ATerm b_151 (ATerm), ATerm b_486, ATerm l_53, ATerm t);
static ATerm b_12 (ATerm b_53, ATerm c_53, ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm output_1_0 (ATerm u_168 (ATerm), ATerm t);
static ATerm y_81 (ATerm q_81, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_12 (ATerm h_53, ATerm t);
static ATerm e_12 (ATerm c_46, ATerm d_46, ATerm t);
static ATerm f_12 (ATerm y_47, ATerm z_47, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm l_83 (ATerm i_82, ATerm t);
static ATerm m_83 (ATerm m_82, ATerm n_82, ATerm o_82, ATerm t);
static ATerm n_83 (ATerm w_82, ATerm x_82, ATerm y_82, ATerm t);
static ATerm g_12 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm v_168 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm default_system_usage_2_0 (ATerm t_170 (ATerm), ATerm u_170 (ATerm), ATerm t);
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
static ATerm p_12 (ATerm v_51, ATerm w_51, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_12 (ATerm g_57, ATerm h_57, ATerm f_57, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_12 (ATerm o_54, ATerm p_54, ATerm t);
ATerm foldr_2_0 (ATerm a_161 (ATerm), ATerm b_161 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_148 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_12 (ATerm v_61, ATerm w_61, ATerm x_61, ATerm t);
ATerm lookup_table_0_1 (ATerm s_58, ATerm t);
ATerm new_hashtable_0_2 (ATerm d_62, ATerm e_62, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm j_12 (ATerm a_62, ATerm b_62, ATerm t);
static ATerm k_12 (ATerm f_62, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_159 (ATerm), ATerm t);
static ATerm r_12 (ATerm y_61, ATerm z_61, ATerm t);
static ATerm m_12 (ATerm z_58, ATerm a_59, ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm o_170 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm parse_options_3_0 (ATerm l_170 (ATerm), ATerm m_170 (ATerm), ATerm n_170 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm o_168 (ATerm), ATerm p_168 (ATerm), ATerm q_168 (ATerm), ATerm r_168 (ATerm), ATerm s_168 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm g_5 (ATerm t);
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
        ATerm j_5 = ATgetArgument(t, 1);
        if(((ATgetType(j_5) != AT_LIST) || !(ATisEmpty(j_5))))
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
  ATerm w_15 = NULL,x_15 = NULL;
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_15), (ATerm) ATmakeAppl(sym_Match_1, x_15));
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
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_5 = ATgetArgument(t, 0);
      if(((ATgetType(o_5) == AT_LIST) && !(ATisEmpty(o_5))))
        {
          s_23 = ATgetFirst((ATermList) o_5);
          t_23 = (ATerm) ATgetNext((ATermList) o_5);
        }
      else
        _fail(t);
      {
        ATerm s_5 = ATgetArgument(t, 1);
        if(((ATgetType(s_5) == AT_LIST) && !(ATisEmpty(s_5))))
          {
            u_23 = ATgetFirst((ATermList) s_5);
            v_23 = (ATerm) ATgetNext((ATermList) s_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_23, u_23), (ATerm) ATmakeAppl(sym__2, t_23, v_23));
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
  ATerm u_5 = t;
  int v_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm w_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(v_5);
      {
        ATerm b_42 = NULL,c_42 = NULL;
        b_42 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm x_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        c_42 = t;
        t = SSLgetAnnotations(b_42);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_5 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) y_5) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm z_5 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(z_5) != AT_LIST) || !(ATisEmpty(z_5))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = c_42;
      }
    }
  else
    {
      t = u_5;
      {
        ATerm b_6 = t;
        int c_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm e_6 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) e_6) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm f_6 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(c_6);
            _fail(t);
          }
        else
          {
            t = b_6;
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
    ATerm q_5 = NULL,r_5 = NULL,t_5 = NULL,r_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,e_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,x_8 = NULL,z_8 = NULL,e_9 = NULL;
    e_9 = t;
    if(match_cons(t, sym_Test_1))
      {
        z_8 = ATgetArgument(t, 0);
        t = z_8;
        if(match_cons(t, sym_Id_0))
          {
            ATerm g_6 = t;
            int h_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_i_6;
                t = a_0(t);
                LocalPopChoice(h_6);
              }
            else
              {
                t = g_6;
                {
                  ATerm j_6 = t;
                  int k_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_9 = NULL,e_10 = NULL,n_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL;
                      t = e_9;
                      t = new_0_0(t);
                      t_9 = t;
                      t = bottomup_1_0(a_0, t);
                      y_10 = t;
                      t = (ATerm) ATempty;
                      t = a_0(t);
                      z_10 = t;
                      t = (ATerm) ATinsert(CheckATermList(z_10), y_10);
                      t = a_0(t);
                      e_10 = t;
                      t = t_9;
                      t = bottomup_1_0(a_0, t);
                      x_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, x_10);
                      t = a_0(t);
                      w_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, w_10);
                      t = a_0(t);
                      q_10 = t;
                      t = z_8;
                      t = bottomup_1_0(a_0, t);
                      s_10 = t;
                      t = t_9;
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
                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_10, r_10);
                      t = a_0(t);
                      n_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, e_10, n_10);
                      t = a_0(t);
                      LocalPopChoice(k_6);
                    }
                  else
                    {
                      t = j_6;
                      t = e_9;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm m_6 = t;
                int n_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_q_6;
                    t = a_0(t);
                    LocalPopChoice(n_6);
                  }
                else
                  {
                    t = m_6;
                    {
                      ATerm r_6 = t;
                      int s_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
                          t = e_9;
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
                          t = z_8;
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
                          LocalPopChoice(s_6);
                        }
                      else
                        {
                          t = r_6;
                          t = e_9;
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
                      ATerm t_6 = t;
                      int u_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, t_8);
                          t = a_0(t);
                          LocalPopChoice(u_6);
                        }
                      else
                        {
                          t = t_6;
                          {
                            ATerm v_6 = t;
                            int w_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm s_11 = NULL,t_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,i_12 = NULL,l_12 = NULL,o_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
                                t = e_9;
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
                                t = z_8;
                                t = bottomup_1_0(a_0, t);
                                i_12 = t;
                                t = s_11;
                                t = bottomup_1_0(a_0, t);
                                s_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, s_12);
                                t = a_0(t);
                                o_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, o_12);
                                t = a_0(t);
                                l_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, l_12);
                                t = a_0(t);
                                x_11 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, w_11, x_11);
                                t = a_0(t);
                                v_11 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, t_11, v_11);
                                t = a_0(t);
                                LocalPopChoice(w_6);
                              }
                            else
                              {
                                t = v_6;
                                t = e_9;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm x_6 = t;
                    int y_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL;
                        t = e_9;
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
                        t = z_8;
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
                        LocalPopChoice(y_6);
                      }
                    else
                      {
                        t = x_6;
                        t = e_9;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            z_8 = ATgetArgument(t, 0);
            t = z_8;
            if(match_cons(t, sym_Id_0))
              {
                ATerm z_6 = t;
                int a_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_q_6;
                    t = a_0(t);
                    LocalPopChoice(a_7);
                  }
                else
                  {
                    t = z_6;
                    t = e_9;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm b_7 = t;
                    int e_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_i_6;
                        t = a_0(t);
                        LocalPopChoice(e_7);
                      }
                    else
                      {
                        t = b_7;
                        t = e_9;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        t_8 = ATgetArgument(t, 0);
                        {
                          ATerm h_7 = t;
                          int l_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, t_8);
                              t = a_0(t);
                              LocalPopChoice(l_7);
                            }
                          else
                            {
                              t = h_7;
                              t = e_9;
                            }
                        }
                      }
                    else
                      {
                        t = e_9;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                z_8 = ATgetArgument(t, 0);
                x_8 = ATgetArgument(t, 1);
                t = x_8;
                if(match_cons(t, sym_Id_0))
                  {
                    t = z_8;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = x_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = z_8;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                t_8 = ATgetArgument(t, 0);
                                u_8 = ATgetArgument(t, 1);
                                t = z_8;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    t_8 = ATgetArgument(t, 0);
                                    u_8 = ATgetArgument(t, 1);
                                    t = z_8;
                                  }
                                else
                                  {
                                    t = z_8;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        r_8 = ATgetArgument(t, 0);
                        s_8 = ATgetArgument(t, 1);
                        t = r_8;
                        if(match_cons(t, sym_Match_1))
                          {
                            m_8 = ATgetArgument(t, 0);
                            t = m_8;
                            if(match_cons(t, sym_Op_2))
                              {
                                k_8 = ATgetArgument(t, 0);
                                w_7 = ATgetArgument(t, 1);
                                t = z_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = x_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm m_7 = t;
                                        int n_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_q_6;
                                            t = a_0(t);
                                            LocalPopChoice(n_7);
                                          }
                                        else
                                          {
                                            t = m_7;
                                            t = e_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            t_8 = ATgetArgument(t, 0);
                                            u_8 = ATgetArgument(t, 1);
                                            {
                                              ATerm o_7 = t;
                                              int p_7 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm b_15 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                  t = a_0(t);
                                                  b_15 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, b_15);
                                                  t = a_0(t);
                                                  LocalPopChoice(p_7);
                                                }
                                              else
                                                {
                                                  t = o_7;
                                                  t = e_9;
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
                                                    z_7 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm q_7 = t;
                                                      int s_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, l_8, k_8);
                                                          {
                                                            ATerm t_7 = t;
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
                                                                t = t_7;
                                                              }
                                                          }
                                                          t = term_q_6;
                                                          t = bottomup_1_0(a_0, t);
                                                          LocalPopChoice(s_7);
                                                        }
                                                      else
                                                        {
                                                          t = q_7;
                                                          {
                                                            ATerm x_7 = t;
                                                            int y_7 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm n_15 = NULL;
                                                                t = k_8;
                                                                if((l_8 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, z_7, w_7);
                                                                t = genzip_4_0(b_0, c_0, e_0, i_0, t);
                                                                n_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, l_8, z_7)), s_8));
                                                                t = bottomup_1_0(a_0, t);
                                                                LocalPopChoice(y_7);
                                                              }
                                                            else
                                                              {
                                                                t = x_7;
                                                                {
                                                                  ATerm d_8 = t;
                                                                  int f_8 = stack_ptr;
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
                                                                      LocalPopChoice(f_8);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = d_8;
                                                                      t = e_9;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm g_8 = t;
                                                    int h_8 = stack_ptr;
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
                                                        LocalPopChoice(h_8);
                                                      }
                                                    else
                                                      {
                                                        t = g_8;
                                                        t = e_9;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    t_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm j_8 = t;
                                                      int n_8 = stack_ptr;
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
                                                          LocalPopChoice(n_8);
                                                        }
                                                      else
                                                        {
                                                          t = j_8;
                                                          t = e_9;
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
                                                          ATerm o_8 = t;
                                                          int p_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_16 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                              t = a_0(t);
                                                              t_16 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, t_16);
                                                              t = a_0(t);
                                                              LocalPopChoice(p_8);
                                                            }
                                                          else
                                                            {
                                                              t = o_8;
                                                              t = e_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = z_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = x_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm v_8 = t;
                                        int w_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_q_6;
                                            t = a_0(t);
                                            LocalPopChoice(w_8);
                                          }
                                        else
                                          {
                                            t = v_8;
                                            t = e_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            t_8 = ATgetArgument(t, 0);
                                            u_8 = ATgetArgument(t, 1);
                                            {
                                              ATerm a_9 = t;
                                              int b_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm k_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                  t = a_0(t);
                                                  k_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, k_17);
                                                  t = a_0(t);
                                                  LocalPopChoice(b_9);
                                                }
                                              else
                                                {
                                                  t = a_9;
                                                  t = e_9;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                {
                                                  ATerm c_9 = t;
                                                  int d_9 = stack_ptr;
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
                                                      LocalPopChoice(d_9);
                                                    }
                                                  else
                                                    {
                                                      t = c_9;
                                                      t = e_9;
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
                                                          t = e_9;
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
                                                          int j_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_18 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                              t = a_0(t);
                                                              b_18 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, b_18);
                                                              t = a_0(t);
                                                              LocalPopChoice(j_9);
                                                            }
                                                          else
                                                            {
                                                              t = h_9;
                                                              t = e_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_9;
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
                                    k_8 = ATgetArgument(t, 0);
                                    t = z_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = x_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm k_9 = t;
                                            int m_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_6;
                                                t = a_0(t);
                                                LocalPopChoice(m_9);
                                              }
                                            else
                                              {
                                                t = k_9;
                                                t = e_9;
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
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                      t = a_0(t);
                                                      k_18 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, k_18);
                                                      t = a_0(t);
                                                      LocalPopChoice(o_9);
                                                    }
                                                  else
                                                    {
                                                      t = n_9;
                                                      t = e_9;
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
                                                      ATerm s_9 = t;
                                                      int x_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm r_18 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_8);
                                                          t = a_0(t);
                                                          r_18 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_18, s_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(x_9);
                                                        }
                                                      else
                                                        {
                                                          t = s_9;
                                                          t = e_9;
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
                                                              ATerm y_9 = t;
                                                              int z_9 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm x_18 = NULL,e_19 = NULL;
                                                                  t = k_8;
                                                                  if((l_8 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, l_8);
                                                                  t = a_0(t);
                                                                  e_19 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, e_19);
                                                                  t = a_0(t);
                                                                  x_18 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_18, s_8);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(z_9);
                                                                }
                                                              else
                                                                {
                                                                  t = y_9;
                                                                  t = e_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = e_9;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            t_8 = ATgetArgument(t, 0);
                                                            u_8 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm d_10 = t;
                                                              int f_10 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm n_19 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                                  t = a_0(t);
                                                                  n_19 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, n_19);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(f_10);
                                                                }
                                                              else
                                                                {
                                                                  t = d_10;
                                                                  t = e_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = e_9;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = z_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = x_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm g_10 = t;
                                            int h_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_6;
                                                t = a_0(t);
                                                LocalPopChoice(h_10);
                                              }
                                            else
                                              {
                                                t = g_10;
                                                t = e_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                u_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm i_10 = t;
                                                  int j_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm z_19 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                      t = a_0(t);
                                                      z_19 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, z_19);
                                                      t = a_0(t);
                                                      LocalPopChoice(j_10);
                                                    }
                                                  else
                                                    {
                                                      t = i_10;
                                                      t = e_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm l_10 = t;
                                                int m_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm o_10 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(m_10);
                                                    {
                                                      ATerm p_10 = t;
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
                                                          t = p_10;
                                                          t = e_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = l_10;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        t_8 = ATgetArgument(t, 0);
                                                        u_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_11 = t;
                                                          int p_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                              t = a_0(t);
                                                              n_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, n_20);
                                                              t = a_0(t);
                                                              LocalPopChoice(p_11);
                                                            }
                                                          else
                                                            {
                                                              t = b_11;
                                                              t = e_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_9;
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
                                    t = z_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = x_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm q_11 = t;
                                            int r_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_6;
                                                t = a_0(t);
                                                LocalPopChoice(r_11);
                                              }
                                            else
                                              {
                                                t = q_11;
                                                t = e_9;
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
                                                      ATerm f_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                      t = a_0(t);
                                                      f_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, f_21);
                                                      t = a_0(t);
                                                      LocalPopChoice(y_12);
                                                    }
                                                  else
                                                    {
                                                      t = x_12;
                                                      t = e_9;
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
                                                          ATerm o_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, m_8, a_8, b_8);
                                                          t = a_0(t);
                                                          o_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_21, s_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(q_13);
                                                        }
                                                      else
                                                        {
                                                          t = p_13;
                                                          t = e_9;
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
                                                              ATerm v_21 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                              t = a_0(t);
                                                              v_21 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, v_21);
                                                              t = a_0(t);
                                                              LocalPopChoice(s_13);
                                                            }
                                                          else
                                                            {
                                                              t = r_13;
                                                              t = e_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = z_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = x_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm t_13 = t;
                                            int u_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_6;
                                                t = a_0(t);
                                                LocalPopChoice(u_13);
                                              }
                                            else
                                              {
                                                t = t_13;
                                                t = e_9;
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
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                      t = a_0(t);
                                                      n_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, n_22);
                                                      t = a_0(t);
                                                      LocalPopChoice(w_13);
                                                    }
                                                  else
                                                    {
                                                      t = v_13;
                                                      t = e_9;
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
                                                          ATerm u_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                          t = a_0(t);
                                                          u_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, u_22);
                                                          t = a_0(t);
                                                          LocalPopChoice(y_13);
                                                        }
                                                      else
                                                        {
                                                          t = x_13;
                                                          t = e_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = e_9;
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
                            r_8 = ATgetArgument(t, 0);
                            t = r_8;
                            if(match_cons(t, sym_Op_2))
                              {
                                m_8 = ATgetArgument(t, 0);
                                a_8 = ATgetArgument(t, 1);
                                t = z_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = x_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm z_13 = t;
                                        int a_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_q_6;
                                            t = a_0(t);
                                            LocalPopChoice(a_14);
                                          }
                                        else
                                          {
                                            t = z_13;
                                            t = e_9;
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
                                                  ATerm k_23 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                  t = a_0(t);
                                                  k_23 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, k_23);
                                                  t = a_0(t);
                                                  LocalPopChoice(c_14);
                                                }
                                              else
                                                {
                                                  t = b_14;
                                                  t = e_9;
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
                                                    z_7 = ATgetArgument(t, 1);
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
                                                          t = term_q_6;
                                                          t = bottomup_1_0(a_0, t);
                                                          LocalPopChoice(e_14);
                                                        }
                                                      else
                                                        {
                                                          t = d_14;
                                                          {
                                                            ATerm h_14 = t;
                                                            int i_14 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm r_23 = NULL;
                                                                t = m_8;
                                                                if((l_8 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, z_7, a_8);
                                                                t = genzip_4_0(k_0, m_0, q_0, s_0, t);
                                                                r_23 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_23), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, l_8, z_7)));
                                                                t = bottomup_1_0(a_0, t);
                                                                LocalPopChoice(i_14);
                                                              }
                                                            else
                                                              {
                                                                t = h_14;
                                                                {
                                                                  ATerm j_14 = t;
                                                                  int k_14 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = r_8;
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
                                                                      t = e_9;
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
                                                        t = r_8;
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
                                                        t = e_9;
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
                                                      int p_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = r_8;
                                                          if((t_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, t_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(p_14);
                                                        }
                                                      else
                                                        {
                                                          t = n_14;
                                                          t = e_9;
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
                                                              ATerm c_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                              t = a_0(t);
                                                              c_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, c_26);
                                                              t = a_0(t);
                                                              LocalPopChoice(r_14);
                                                            }
                                                          else
                                                            {
                                                              t = q_14;
                                                              t = e_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = z_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = x_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm s_14 = t;
                                        int t_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_q_6;
                                            t = a_0(t);
                                            LocalPopChoice(t_14);
                                          }
                                        else
                                          {
                                            t = s_14;
                                            t = e_9;
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
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                  t = a_0(t);
                                                  n_26 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, n_26);
                                                  t = a_0(t);
                                                  LocalPopChoice(v_14);
                                                }
                                              else
                                                {
                                                  t = u_14;
                                                  t = e_9;
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
                                                      t = r_8;
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
                                                      t = e_9;
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
                                                          t = r_8;
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
                                                          t = e_9;
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
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                              t = a_0(t);
                                                              d_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, d_27);
                                                              t = a_0(t);
                                                              LocalPopChoice(c_15);
                                                            }
                                                          else
                                                            {
                                                              t = a_15;
                                                              t = e_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_9;
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
                                r_8 = ATgetArgument(t, 0);
                                t = r_8;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    m_8 = ATgetArgument(t, 0);
                                    t = z_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = x_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm d_15 = t;
                                            int e_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_6;
                                                t = a_0(t);
                                                LocalPopChoice(e_15);
                                              }
                                            else
                                              {
                                                t = d_15;
                                                t = e_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                u_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm g_15 = t;
                                                  int i_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_27 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                      t = a_0(t);
                                                      o_27 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, o_27);
                                                      t = a_0(t);
                                                      LocalPopChoice(i_15);
                                                    }
                                                  else
                                                    {
                                                      t = g_15;
                                                      t = e_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm l_15 = t;
                                                int m_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm u_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(m_15);
                                                    {
                                                      ATerm v_15 = t;
                                                      int y_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(y_15);
                                                        }
                                                      else
                                                        {
                                                          t = v_15;
                                                          t = e_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = l_15;
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
                                                                  t = e_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = e_9;
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
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                                  t = a_0(t);
                                                                  f_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, f_28);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(d_16);
                                                                }
                                                              else
                                                                {
                                                                  t = c_16;
                                                                  t = e_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = e_9;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = z_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = x_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm f_16 = t;
                                            int h_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_6;
                                                t = a_0(t);
                                                LocalPopChoice(h_16);
                                              }
                                            else
                                              {
                                                t = f_16;
                                                t = e_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                t_8 = ATgetArgument(t, 0);
                                                u_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm j_16 = t;
                                                  int l_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                      t = a_0(t);
                                                      q_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, q_29);
                                                      t = a_0(t);
                                                      LocalPopChoice(l_16);
                                                    }
                                                  else
                                                    {
                                                      t = j_16;
                                                      t = e_9;
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
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(r_16);
                                                        }
                                                      else
                                                        {
                                                          t = q_16;
                                                          t = e_9;
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
                                                              ATerm p_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                              t = a_0(t);
                                                              p_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, p_30);
                                                              t = a_0(t);
                                                              LocalPopChoice(u_16);
                                                            }
                                                          else
                                                            {
                                                              t = s_16;
                                                              t = e_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_9;
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
                                    r_8 = ATgetArgument(t, 0);
                                    s_8 = ATgetArgument(t, 1);
                                    e_8 = ATgetArgument(t, 2);
                                    t = z_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = x_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm x_16 = t;
                                            int y_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_6;
                                                t = a_0(t);
                                                LocalPopChoice(y_16);
                                              }
                                            else
                                              {
                                                t = x_16;
                                                t = e_9;
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
                                                      ATerm q_31 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                      t = a_0(t);
                                                      q_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, q_31);
                                                      t = a_0(t);
                                                      LocalPopChoice(a_17);
                                                    }
                                                  else
                                                    {
                                                      t = z_16;
                                                      t = e_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm b_17 = t;
                                                int f_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm g_17 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(f_17);
                                                    {
                                                      ATerm h_17 = t;
                                                      int i_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, r_8, s_8, e_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(i_17);
                                                        }
                                                      else
                                                        {
                                                          t = h_17;
                                                          t = e_9;
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
                                                              ATerm k_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                              t = a_0(t);
                                                              k_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, k_32);
                                                              t = a_0(t);
                                                              LocalPopChoice(l_17);
                                                            }
                                                          else
                                                            {
                                                              t = j_17;
                                                              t = e_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = e_9;
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
                                        r_8 = ATgetArgument(t, 0);
                                        s_8 = ATgetArgument(t, 1);
                                        t = z_8;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = x_8;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm m_17 = t;
                                                int n_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_q_6;
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
                                                          ATerm g_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_8, s_8);
                                                          t = a_0(t);
                                                          g_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, r_8, g_33);
                                                          t = a_0(t);
                                                          LocalPopChoice(q_17);
                                                        }
                                                      else
                                                        {
                                                          t = p_17;
                                                          t = e_9;
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
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
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
                                                                ATerm g_34 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, z_8, s_8);
                                                                t = a_0(t);
                                                                g_34 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, r_8, g_34);
                                                                t = a_0(t);
                                                                LocalPopChoice(v_17);
                                                              }
                                                            else
                                                              {
                                                                t = t_17;
                                                                t = e_9;
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
                                                              ATerm s_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_8, s_8);
                                                              t = a_0(t);
                                                              s_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, r_8, s_34);
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
                                                                    ATerm b_35 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                                    t = a_0(t);
                                                                    b_35 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, b_35);
                                                                    t = a_0(t);
                                                                    LocalPopChoice(z_17);
                                                                  }
                                                                else
                                                                  {
                                                                    t = y_17;
                                                                    t = e_9;
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
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, z_8, s_8);
                                                            t = a_0(t);
                                                            o_35 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, r_8, o_35);
                                                            t = a_0(t);
                                                            LocalPopChoice(c_18);
                                                          }
                                                        else
                                                          {
                                                            t = a_18;
                                                            t = e_9;
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
                                            r_8 = ATgetArgument(t, 0);
                                            s_8 = ATgetArgument(t, 1);
                                            t = z_8;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = x_8;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm d_18 = t;
                                                    int e_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_q_6;
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
                                                              ATerm j_36 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_8, s_8);
                                                              t = a_0(t);
                                                              j_36 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, r_8, j_36);
                                                              t = a_0(t);
                                                              LocalPopChoice(g_18);
                                                            }
                                                          else
                                                            {
                                                              t = f_18;
                                                              t = e_9;
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
                                                              ATerm q_36 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                              t = a_0(t);
                                                              q_36 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, q_36);
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
                                                                    ATerm x_36 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, z_8, s_8);
                                                                    t = a_0(t);
                                                                    x_36 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, r_8, x_36);
                                                                    t = a_0(t);
                                                                    LocalPopChoice(l_18);
                                                                  }
                                                                else
                                                                  {
                                                                    t = j_18;
                                                                    t = e_9;
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
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_8, s_8);
                                                                  t = a_0(t);
                                                                  h_37 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, r_8, h_37);
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
                                                                        ATerm r_37 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                                        t = a_0(t);
                                                                        r_37 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, r_37);
                                                                        t = a_0(t);
                                                                        LocalPopChoice(p_18);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = o_18;
                                                                        t = e_9;
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
                                                                ATerm d_38 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, z_8, s_8);
                                                                t = a_0(t);
                                                                d_38 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, r_8, d_38);
                                                                t = a_0(t);
                                                                LocalPopChoice(s_18);
                                                              }
                                                            else
                                                              {
                                                                t = q_18;
                                                                t = e_9;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = z_8;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = x_8;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm t_18 = t;
                                                    int u_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_q_6;
                                                        t = a_0(t);
                                                        LocalPopChoice(u_18);
                                                      }
                                                    else
                                                      {
                                                        t = t_18;
                                                        t = e_9;
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
                                                              ATerm q_38 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                              t = a_0(t);
                                                              q_38 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, q_38);
                                                              t = a_0(t);
                                                              LocalPopChoice(w_18);
                                                            }
                                                          else
                                                            {
                                                              t = v_18;
                                                              t = e_9;
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
                                                              ATerm y_18 = t;
                                                              int z_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm b_39 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, x_8);
                                                                  t = a_0(t);
                                                                  b_39 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, t_8, b_39);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(z_18);
                                                                }
                                                              else
                                                                {
                                                                  t = y_18;
                                                                  t = e_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = e_9;
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
                    z_8 = ATgetArgument(t, 0);
                    x_8 = ATgetArgument(t, 1);
                    t = x_8;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = z_8;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm a_19 = t;
                            int b_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_i_6;
                                t = a_0(t);
                                LocalPopChoice(b_19);
                              }
                            else
                              {
                                t = a_19;
                                t = z_8;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = x_8;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    t_8 = ATgetArgument(t, 0);
                                    u_8 = ATgetArgument(t, 1);
                                    t = z_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        t_8 = ATgetArgument(t, 0);
                                        t = z_8;
                                      }
                                    else
                                      {
                                        t = z_8;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = z_8;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm c_19 = t;
                            int d_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_i_6;
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
                                      t = x_8;
                                      if((z_8 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(g_19);
                                    }
                                  else
                                    {
                                      t = f_19;
                                      t = e_9;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = x_8;
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
                                          ATerm o_41 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, u_8, x_8);
                                          t = a_0(t);
                                          o_41 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, t_8, o_41);
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
                                                t = x_8;
                                                if((z_8 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(k_19);
                                              }
                                            else
                                              {
                                                t = j_19;
                                                t = e_9;
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
                                          int m_19 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = x_8;
                                              if((z_8 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(m_19);
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
                                                    t = e_9;
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
                                            t = x_8;
                                            if((z_8 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(r_19);
                                          }
                                        else
                                          {
                                            t = q_19;
                                            t = e_9;
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
                        z_8 = ATgetArgument(t, 0);
                        x_8 = ATgetArgument(t, 1);
                        t = x_8;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = z_8;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm s_19 = t;
                                int t_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_i_6;
                                    t = a_0(t);
                                    LocalPopChoice(t_19);
                                  }
                                else
                                  {
                                    t = s_19;
                                    t = x_8;
                                  }
                              }
                            else
                              {
                                ATerm u_19 = t;
                                int v_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_i_6;
                                    t = a_0(t);
                                    LocalPopChoice(v_19);
                                  }
                                else
                                  {
                                    t = u_19;
                                    t = e_9;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = z_8;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm w_19 = t;
                                    int x_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_q_6;
                                        t = a_0(t);
                                        LocalPopChoice(x_19);
                                      }
                                    else
                                      {
                                        t = w_19;
                                        t = x_8;
                                      }
                                  }
                                else
                                  {
                                    ATerm y_19 = t;
                                    int a_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_q_6;
                                        t = a_0(t);
                                        LocalPopChoice(a_20);
                                      }
                                    else
                                      {
                                        t = y_19;
                                        t = e_9;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    r_8 = ATgetArgument(t, 0);
                                    s_8 = ATgetArgument(t, 1);
                                    t = z_8;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = x_8;
                                      }
                                    else
                                      {
                                        ATerm b_20 = t;
                                        int c_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm a_44 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, z_8, r_8);
                                            t = conc_0_0(t);
                                            a_44 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, a_44, s_8);
                                            t = bottomup_1_0(a_0, t);
                                            LocalPopChoice(c_20);
                                          }
                                        else
                                          {
                                            t = b_20;
                                            t = e_9;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = z_8;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = x_8;
                                      }
                                    else
                                      {
                                        t = e_9;
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
                                x_8 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(e_20);
                            t = x_8;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm h_20 = t;
                                int i_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_i_6;
                                    t = a_0(t);
                                    LocalPopChoice(i_20);
                                  }
                                else
                                  {
                                    t = h_20;
                                    t = e_9;
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
                                        t = term_q_6;
                                        t = a_0(t);
                                        LocalPopChoice(k_20);
                                      }
                                    else
                                      {
                                        t = j_20;
                                        t = e_9;
                                      }
                                  }
                                else
                                  {
                                    t = e_9;
                                  }
                              }
                          }
                        else
                          {
                            t = d_20;
                            if(match_cons(t, sym_All_1))
                              {
                                z_8 = ATgetArgument(t, 0);
                                t = z_8;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm l_20 = t;
                                    int m_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_i_6;
                                        t = a_0(t);
                                        LocalPopChoice(m_20);
                                      }
                                    else
                                      {
                                        t = l_20;
                                        t = e_9;
                                      }
                                  }
                                else
                                  {
                                    t = e_9;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    z_8 = ATgetArgument(t, 0);
                                    t = z_8;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm o_20 = t;
                                        int p_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_i_6;
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
                                                  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL;
                                                  t = e_9;
                                                  t = new_0_0(t);
                                                  t_44 = t;
                                                  t = bottomup_1_0(a_0, t);
                                                  e_45 = t;
                                                  t = (ATerm) ATempty;
                                                  t = a_0(t);
                                                  f_45 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(f_45), e_45);
                                                  t = a_0(t);
                                                  u_44 = t;
                                                  t = t_44;
                                                  t = bottomup_1_0(a_0, t);
                                                  d_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, d_45);
                                                  t = a_0(t);
                                                  c_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, c_45);
                                                  t = a_0(t);
                                                  w_44 = t;
                                                  t = z_8;
                                                  t = bottomup_1_0(a_0, t);
                                                  y_44 = t;
                                                  t = t_44;
                                                  t = bottomup_1_0(a_0, t);
                                                  b_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, b_45);
                                                  t = a_0(t);
                                                  a_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, a_45);
                                                  t = a_0(t);
                                                  z_44 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_44, z_44);
                                                  t = a_0(t);
                                                  x_44 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_44, x_44);
                                                  t = a_0(t);
                                                  v_44 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, u_44, v_44);
                                                  t = a_0(t);
                                                  LocalPopChoice(r_20);
                                                }
                                              else
                                                {
                                                  t = q_20;
                                                  t = e_9;
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
                                                t = term_q_6;
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
                                                      ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL;
                                                      t = e_9;
                                                      t = new_0_0(t);
                                                      i_45 = t;
                                                      t = bottomup_1_0(a_0, t);
                                                      v_45 = t;
                                                      t = (ATerm) ATempty;
                                                      t = a_0(t);
                                                      w_45 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(w_45), v_45);
                                                      t = a_0(t);
                                                      j_45 = t;
                                                      t = i_45;
                                                      t = bottomup_1_0(a_0, t);
                                                      u_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, u_45);
                                                      t = a_0(t);
                                                      r_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, r_45);
                                                      t = a_0(t);
                                                      l_45 = t;
                                                      t = z_8;
                                                      t = bottomup_1_0(a_0, t);
                                                      n_45 = t;
                                                      t = i_45;
                                                      t = bottomup_1_0(a_0, t);
                                                      q_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, q_45);
                                                      t = a_0(t);
                                                      p_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, p_45);
                                                      t = a_0(t);
                                                      o_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_45, o_45);
                                                      t = a_0(t);
                                                      m_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_45, m_45);
                                                      t = a_0(t);
                                                      k_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, j_45, k_45);
                                                      t = a_0(t);
                                                      LocalPopChoice(v_20);
                                                    }
                                                  else
                                                    {
                                                      t = u_20;
                                                      t = e_9;
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
                                                    r_7 = ATgetArgument(t, 1);
                                                    t = r_5;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        t_5 = ATgetArgument(t, 0);
                                                        t = t_8;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            l_8 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm w_20 = t;
                                                              int x_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, t_5);
                                                                  t = a_0(t);
                                                                  g_46 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_46, r_7);
                                                                  t = a_0(t);
                                                                  f_46 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, l_8, f_46);
                                                                  t = a_0(t);
                                                                  e_46 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, e_46);
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
                                                                        ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
                                                                        t = e_9;
                                                                        t = new_0_0(t);
                                                                        i_46 = t;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        t_46 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = a_0(t);
                                                                        u_46 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(u_46), t_46);
                                                                        t = a_0(t);
                                                                        j_46 = t;
                                                                        t = i_46;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        s_46 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, s_46);
                                                                        t = a_0(t);
                                                                        r_46 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, r_46);
                                                                        t = a_0(t);
                                                                        l_46 = t;
                                                                        t = z_8;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        n_46 = t;
                                                                        t = i_46;
                                                                        t = bottomup_1_0(a_0, t);
                                                                        q_46 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, q_46);
                                                                        t = a_0(t);
                                                                        p_46 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, p_46);
                                                                        t = a_0(t);
                                                                        o_46 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_46, o_46);
                                                                        t = a_0(t);
                                                                        m_46 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, l_46, m_46);
                                                                        t = a_0(t);
                                                                        k_46 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, j_46, k_46);
                                                                        t = a_0(t);
                                                                        LocalPopChoice(z_20);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_20;
                                                                        t = e_9;
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
                                                                ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL;
                                                                t = e_9;
                                                                t = new_0_0(t);
                                                                x_46 = t;
                                                                t = bottomup_1_0(a_0, t);
                                                                i_47 = t;
                                                                t = (ATerm) ATempty;
                                                                t = a_0(t);
                                                                j_47 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(j_47), i_47);
                                                                t = a_0(t);
                                                                y_46 = t;
                                                                t = x_46;
                                                                t = bottomup_1_0(a_0, t);
                                                                h_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, h_47);
                                                                t = a_0(t);
                                                                g_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, g_47);
                                                                t = a_0(t);
                                                                a_47 = t;
                                                                t = z_8;
                                                                t = bottomup_1_0(a_0, t);
                                                                c_47 = t;
                                                                t = x_46;
                                                                t = bottomup_1_0(a_0, t);
                                                                f_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, f_47);
                                                                t = a_0(t);
                                                                e_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, e_47);
                                                                t = a_0(t);
                                                                d_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, c_47, d_47);
                                                                t = a_0(t);
                                                                b_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, a_47, b_47);
                                                                t = a_0(t);
                                                                z_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, y_46, z_46);
                                                                t = a_0(t);
                                                                LocalPopChoice(b_21);
                                                              }
                                                            else
                                                              {
                                                                t = a_21;
                                                                t = e_9;
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
                                                              ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL;
                                                              t = e_9;
                                                              t = new_0_0(t);
                                                              n_47 = t;
                                                              t = bottomup_1_0(a_0, t);
                                                              e_48 = t;
                                                              t = (ATerm) ATempty;
                                                              t = a_0(t);
                                                              f_48 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(f_48), e_48);
                                                              t = a_0(t);
                                                              o_47 = t;
                                                              t = n_47;
                                                              t = bottomup_1_0(a_0, t);
                                                              d_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, d_48);
                                                              t = a_0(t);
                                                              c_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, c_48);
                                                              t = a_0(t);
                                                              q_47 = t;
                                                              t = z_8;
                                                              t = bottomup_1_0(a_0, t);
                                                              s_47 = t;
                                                              t = n_47;
                                                              t = bottomup_1_0(a_0, t);
                                                              v_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, v_47);
                                                              t = a_0(t);
                                                              u_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, u_47);
                                                              t = a_0(t);
                                                              t_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, s_47, t_47);
                                                              t = a_0(t);
                                                              r_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_47, r_47);
                                                              t = a_0(t);
                                                              p_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, o_47, p_47);
                                                              t = a_0(t);
                                                              LocalPopChoice(d_21);
                                                            }
                                                          else
                                                            {
                                                              t = c_21;
                                                              t = e_9;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = t_8;
                                                    {
                                                      ATerm e_21 = t;
                                                      int g_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL;
                                                          t = e_9;
                                                          t = new_0_0(t);
                                                          i_48 = t;
                                                          t = bottomup_1_0(a_0, t);
                                                          t_48 = t;
                                                          t = (ATerm) ATempty;
                                                          t = a_0(t);
                                                          u_48 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(u_48), t_48);
                                                          t = a_0(t);
                                                          j_48 = t;
                                                          t = i_48;
                                                          t = bottomup_1_0(a_0, t);
                                                          s_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, s_48);
                                                          t = a_0(t);
                                                          r_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, r_48);
                                                          t = a_0(t);
                                                          l_48 = t;
                                                          t = z_8;
                                                          t = bottomup_1_0(a_0, t);
                                                          n_48 = t;
                                                          t = i_48;
                                                          t = bottomup_1_0(a_0, t);
                                                          q_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, q_48);
                                                          t = a_0(t);
                                                          p_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, p_48);
                                                          t = a_0(t);
                                                          o_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_48, o_48);
                                                          t = a_0(t);
                                                          m_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, l_48, m_48);
                                                          t = a_0(t);
                                                          k_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, j_48, k_48);
                                                          t = a_0(t);
                                                          LocalPopChoice(g_21);
                                                        }
                                                      else
                                                        {
                                                          t = e_21;
                                                          t = e_9;
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
                                                                ATerm y_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL;
                                                                t = e_9;
                                                                t = new_0_0(t);
                                                                y_48 = t;
                                                                t = bottomup_1_0(a_0, t);
                                                                k_49 = t;
                                                                t = (ATerm) ATempty;
                                                                t = a_0(t);
                                                                l_49 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(l_49), k_49);
                                                                t = a_0(t);
                                                                a_49 = t;
                                                                t = y_48;
                                                                t = bottomup_1_0(a_0, t);
                                                                j_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, j_49);
                                                                t = a_0(t);
                                                                i_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, i_49);
                                                                t = a_0(t);
                                                                c_49 = t;
                                                                t = z_8;
                                                                t = bottomup_1_0(a_0, t);
                                                                e_49 = t;
                                                                t = y_48;
                                                                t = bottomup_1_0(a_0, t);
                                                                h_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, h_49);
                                                                t = a_0(t);
                                                                g_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, g_49);
                                                                t = a_0(t);
                                                                f_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, e_49, f_49);
                                                                t = a_0(t);
                                                                d_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, c_49, d_49);
                                                                t = a_0(t);
                                                                b_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, a_49, b_49);
                                                                t = a_0(t);
                                                                LocalPopChoice(k_21);
                                                              }
                                                            else
                                                              {
                                                                t = j_21;
                                                                t = e_9;
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
                                                        ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL;
                                                        t = e_9;
                                                        t = new_0_0(t);
                                                        o_49 = t;
                                                        t = bottomup_1_0(a_0, t);
                                                        z_49 = t;
                                                        t = (ATerm) ATempty;
                                                        t = a_0(t);
                                                        a_50 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(a_50), z_49);
                                                        t = a_0(t);
                                                        p_49 = t;
                                                        t = o_49;
                                                        t = bottomup_1_0(a_0, t);
                                                        y_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, y_49);
                                                        t = a_0(t);
                                                        x_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, x_49);
                                                        t = a_0(t);
                                                        r_49 = t;
                                                        t = z_8;
                                                        t = bottomup_1_0(a_0, t);
                                                        t_49 = t;
                                                        t = o_49;
                                                        t = bottomup_1_0(a_0, t);
                                                        w_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, w_49);
                                                        t = a_0(t);
                                                        v_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, v_49);
                                                        t = a_0(t);
                                                        u_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_49, u_49);
                                                        t = a_0(t);
                                                        s_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, r_49, s_49);
                                                        t = a_0(t);
                                                        q_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, p_49, q_49);
                                                        t = a_0(t);
                                                        LocalPopChoice(m_21);
                                                      }
                                                    else
                                                      {
                                                        t = l_21;
                                                        t = e_9;
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
                                        z_8 = ATgetArgument(t, 0);
                                        t = z_8;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm n_21 = t;
                                            int p_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_i_6;
                                                t = a_0(t);
                                                LocalPopChoice(p_21);
                                              }
                                            else
                                              {
                                                t = n_21;
                                                t = e_9;
                                              }
                                          }
                                        else
                                          {
                                            t = e_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            z_8 = ATgetArgument(t, 0);
                                            t = z_8;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm q_21 = t;
                                                int r_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_q_6;
                                                    t = a_0(t);
                                                    LocalPopChoice(r_21);
                                                  }
                                                else
                                                  {
                                                    t = q_21;
                                                    t = e_9;
                                                  }
                                              }
                                            else
                                              {
                                                t = e_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                z_8 = ATgetArgument(t, 0);
                                                t = z_8;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm s_21 = t;
                                                    int t_21 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_q_6;
                                                        t = a_0(t);
                                                        LocalPopChoice(t_21);
                                                      }
                                                    else
                                                      {
                                                        t = s_21;
                                                        t = e_9;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = e_9;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm u_21 = t;
                                                int w_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm x_21 = ATgetArgument(t, 0);
                                                        x_8 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(w_21);
                                                    t = x_8;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm y_21 = t;
                                                        int z_21 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_q_6;
                                                            t = a_0(t);
                                                            LocalPopChoice(z_21);
                                                          }
                                                        else
                                                          {
                                                            t = y_21;
                                                            t = e_9;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = e_9;
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
                                                              x_8 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(b_22);
                                                          {
                                                            ATerm d_22 = t;
                                                            int e_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = x_8;
                                                                t = fetch_1_0(v_0, t);
                                                                t = term_q_6;
                                                                t = bottomup_1_0(a_0, t);
                                                                LocalPopChoice(e_22);
                                                              }
                                                            else
                                                              {
                                                                t = d_22;
                                                                t = e_9;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = a_22;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              z_8 = ATgetArgument(t, 0);
                                                              x_8 = ATgetArgument(t, 1);
                                                              t = x_8;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = z_8;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = x_8;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          t_8 = ATgetArgument(t, 0);
                                                                          u_8 = ATgetArgument(t, 1);
                                                                          t = z_8;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = z_8;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = z_8;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = x_8;
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
                                                                                ATerm h_51 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, u_8, x_8);
                                                                                t = a_0(t);
                                                                                h_51 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, t_8, h_51);
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
                                                                                      t = x_8;
                                                                                      if((z_8 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(i_22);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = h_22;
                                                                                      t = e_9;
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
                                                                              t = x_8;
                                                                              if((z_8 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(k_22);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = j_22;
                                                                              t = e_9;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  z_8 = ATgetArgument(t, 0);
                                                                  x_8 = ATgetArgument(t, 1);
                                                                  q_5 = ATgetArgument(t, 2);
                                                                  t = q_5;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm l_22 = t;
                                                                      int m_22 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_8, x_8);
                                                                          t = a_0(t);
                                                                          LocalPopChoice(m_22);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = l_22;
                                                                          t = e_9;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = e_9;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      z_8 = ATgetArgument(t, 0);
                                                                      x_8 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm o_22 = t;
                                                                        int p_22 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, z_8, x_8);
                                                                            t = a_0(t);
                                                                            LocalPopChoice(p_22);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = o_22;
                                                                            t = e_9;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          z_8 = ATgetArgument(t, 0);
                                                                          t = z_8;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              t_8 = ATgetFirst((ATermList) t);
                                                                              u_8 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm q_22 = t;
                                                                                int r_22 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm y_51 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, u_8);
                                                                                    t = a_0(t);
                                                                                    y_51 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, t_8, y_51);
                                                                                    t = a_0(t);
                                                                                    LocalPopChoice(r_22);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_22;
                                                                                    t = e_9;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm s_22 = t;
                                                                                  int t_22 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_q_6;
                                                                                      t = a_0(t);
                                                                                      LocalPopChoice(t_22);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = s_22;
                                                                                      t = e_9;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = e_9;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              z_8 = ATgetArgument(t, 0);
                                                                              t = z_8;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  t_8 = ATgetFirst((ATermList) t);
                                                                                  u_8 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm v_22 = t;
                                                                                    int w_22 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm e_52 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, u_8);
                                                                                        t = a_0(t);
                                                                                        e_52 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, t_8, e_52);
                                                                                        t = a_0(t);
                                                                                        LocalPopChoice(w_22);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = v_22;
                                                                                        t = e_9;
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
                                                                                          t = term_q_6;
                                                                                          t = a_0(t);
                                                                                          LocalPopChoice(y_22);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = x_22;
                                                                                          t = e_9;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = e_9;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  z_8 = ATgetArgument(t, 0);
                                                                                  t = z_8;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      t_8 = ATgetFirst((ATermList) t);
                                                                                      u_8 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm z_22 = t;
                                                                                        int a_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm k_52 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, u_8);
                                                                                            t = a_0(t);
                                                                                            k_52 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, t_8, k_52);
                                                                                            t = a_0(t);
                                                                                            LocalPopChoice(a_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = z_22;
                                                                                            t = e_9;
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
                                                                                              t = term_i_6;
                                                                                              t = a_0(t);
                                                                                              LocalPopChoice(c_23);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = b_23;
                                                                                              t = e_9;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = e_9;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      z_8 = ATgetArgument(t, 0);
                                                                                      x_8 = ATgetArgument(t, 1);
                                                                                      q_5 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm d_23 = t;
                                                                                        int e_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL;
                                                                                            t = term_f_23;
                                                                                            t = bottomup_1_0(a_0, t);
                                                                                            s_52 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = a_0(t);
                                                                                            v_52 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(v_52), q_5);
                                                                                            t = a_0(t);
                                                                                            u_52 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(u_52), z_8);
                                                                                            t = a_0(t);
                                                                                            t_52 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, s_52, t_52);
                                                                                            t = a_0(t);
                                                                                            r_52 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, x_8, r_52);
                                                                                            t = a_0(t);
                                                                                            LocalPopChoice(e_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = d_23;
                                                                                            t = e_9;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          z_8 = ATgetArgument(t, 0);
                                                                                          x_8 = ATgetArgument(t, 1);
                                                                                          q_5 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm g_23 = t;
                                                                                            int h_23 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm d_53 = NULL,e_53 = NULL,i_53 = NULL,j_53 = NULL,m_53 = NULL,n_53 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, x_8);
                                                                                                t = a_0(t);
                                                                                                e_53 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, q_5);
                                                                                                t = a_0(t);
                                                                                                m_53 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = a_0(t);
                                                                                                n_53 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(n_53), m_53);
                                                                                                t = a_0(t);
                                                                                                j_53 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(j_53), z_8);
                                                                                                t = a_0(t);
                                                                                                i_53 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(i_53), e_53);
                                                                                                t = a_0(t);
                                                                                                d_53 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, d_53);
                                                                                                t = a_0(t);
                                                                                                LocalPopChoice(h_23);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = g_23;
                                                                                                t = e_9;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              z_8 = ATgetArgument(t, 0);
                                                                                              x_8 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm i_23 = t;
                                                                                                int j_23 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm r_53 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, x_8);
                                                                                                    t = a_0(t);
                                                                                                    r_53 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, z_8, r_53);
                                                                                                    t = a_0(t);
                                                                                                    LocalPopChoice(j_23);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = i_23;
                                                                                                    t = e_9;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  z_8 = ATgetArgument(t, 0);
                                                                                                  x_8 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm l_23 = t;
                                                                                                    int m_23 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm v_53 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, z_8);
                                                                                                        t = a_0(t);
                                                                                                        v_53 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, v_53, x_8);
                                                                                                        t = a_0(t);
                                                                                                        LocalPopChoice(m_23);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = l_23;
                                                                                                        t = e_9;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      z_8 = ATgetArgument(t, 0);
                                                                                                      x_8 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm n_23 = t;
                                                                                                        int o_23 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm z_53 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, x_8);
                                                                                                            t = a_0(t);
                                                                                                            z_53 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, z_53, z_8);
                                                                                                            t = a_0(t);
                                                                                                            LocalPopChoice(o_23);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = n_23;
                                                                                                            t = e_9;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          z_8 = ATgetArgument(t, 0);
                                                                                                          x_8 = ATgetArgument(t, 1);
                                                                                                          t = x_8;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              r_8 = ATgetArgument(t, 0);
                                                                                                              s_8 = ATgetArgument(t, 1);
                                                                                                              t = z_8;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = x_8;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm p_23 = t;
                                                                                                                  int q_23 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm k_54 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, z_8, r_8);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      k_54 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, k_54, s_8);
                                                                                                                      t = bottomup_1_0(a_0, t);
                                                                                                                      LocalPopChoice(q_23);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = p_23;
                                                                                                                      t = e_9;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  r_8 = ATgetArgument(t, 0);
                                                                                                                  s_8 = ATgetArgument(t, 1);
                                                                                                                  e_8 = ATgetArgument(t, 2);
                                                                                                                  t = e_8;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = s_8;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = r_8;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              m_8 = ATgetArgument(t, 0);
                                                                                                                              t = z_8;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = x_8;
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
                                                                                                                                              z_7 = ATgetArgument(t, 1);
                                                                                                                                              u_7 = ATgetArgument(t, 2);
                                                                                                                                              v_7 = ATgetArgument(t, 3);
                                                                                                                                              t = u_7;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = z_7;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm w_23 = t;
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
                                                                                                                                                          t = w_23;
                                                                                                                                                          t = e_9;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = e_9;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = e_9;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = e_9;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = e_9;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = e_9;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = z_8;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = x_8;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = e_9;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = z_8;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = x_8;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = e_9;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = z_8;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = x_8;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = e_9;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = z_8;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = x_8;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = e_9;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              z_8 = ATgetArgument(t, 0);
                                                                                                              x_8 = ATgetArgument(t, 1);
                                                                                                              t = z_8;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = x_8;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = e_9;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = e_9;
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
ATerm topdown_1_0 (ATerm j_136 (ATerm), ATerm t)
{
  static ATerm x_0 (ATerm t);
  static ATerm x_0 (ATerm t)
  {
    t = topdown_1_0(j_136, t);
    return(t);
  }
  t = j_136(t);
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
static ATerm f_5 (ATerm w_107, ATerm v_107, ATerm t)
{
  t = w_107;
  t = topdown_1_0(y_0, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, w_107);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      i_56 = ATgetArgument(t, 0);
      l_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_56;
  if(match_cons(t, sym_Match_1))
    {
      j_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_56;
  if(match_cons(t, sym_Var_1))
    {
      k_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_56;
  if(match_cons(t, sym_Seq_2))
    {
      m_56 = ATgetArgument(t, 0);
      g_56 = ATgetArgument(t, 1);
      t = m_56;
      if(match_cons(t, sym_Build_1))
        {
          n_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_56;
      if(match_cons(t, sym_Var_1))
        {
          f_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_56;
      if((k_56 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_56)), g_56);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          m_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_56;
      if(match_cons(t, sym_Var_1))
        {
          n_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_56;
      if((k_56 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_56));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      y_56 = ATgetArgument(t, 0);
      a_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_56;
  if(match_cons(t, sym_Build_1))
    {
      z_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_57;
  if(match_cons(t, sym_Seq_2))
    {
      b_57 = ATgetArgument(t, 0);
      w_56 = ATgetArgument(t, 1);
      t = b_57;
      if(match_cons(t, sym_Match_1))
        {
          v_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_56;
      if((z_56 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_56), w_56);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          b_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_57;
      if((z_56 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, z_56);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm m_57 = NULL,n_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      p_57 = ATgetArgument(t, 0);
      r_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_57;
  if(match_cons(t, sym_Match_1))
    {
      q_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_57;
  if(match_cons(t, sym_Seq_2))
    {
      s_57 = ATgetArgument(t, 0);
      n_57 = ATgetArgument(t, 1);
      t = s_57;
      if(match_cons(t, sym_Match_1))
        {
          m_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_57;
      if((q_57 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_57), n_57);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          s_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_57;
      if((q_57 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, q_57);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL,e_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      e_58 = ATgetArgument(t, 0);
      g_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_58;
  if(match_cons(t, sym_Build_1))
    {
      ATerm q_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_58;
  if(match_cons(t, sym_Seq_2))
    {
      h_58 = ATgetArgument(t, 0);
      i_58 = ATgetArgument(t, 1);
      t = h_58;
      if(match_cons(t, sym_PrimT_3))
        {
          a_58 = ATgetArgument(t, 0);
          b_58 = ATgetArgument(t, 1);
          c_58 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, a_58, b_58, c_58), i_58);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          h_58 = ATgetArgument(t, 0);
          i_58 = ATgetArgument(t, 1);
          j_58 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, h_58, i_58, j_58);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,e_59 = NULL,g_59 = NULL,h_59 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      e_59 = ATgetArgument(t, 0);
      g_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_59;
  if(match_cons(t, sym_Build_1))
    {
      ATerm r_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_59;
  if(match_cons(t, sym_Seq_2))
    {
      h_59 = ATgetArgument(t, 0);
      c_59 = ATgetArgument(t, 1);
      t = h_59;
      if(match_cons(t, sym_Build_1))
        {
          b_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_59), c_59);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          h_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, h_59);
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
  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_24 = ATgetArgument(t, 0);
      if(((ATgetType(u_24) == AT_LIST) && !(ATisEmpty(u_24))))
        {
          j_60 = ATgetFirst((ATermList) u_24);
          k_60 = (ATerm) ATgetNext((ATermList) u_24);
        }
      else
        _fail(t);
      {
        ATerm v_24 = ATgetArgument(t, 1);
        if(((ATgetType(v_24) == AT_LIST) && !(ATisEmpty(v_24))))
          {
            l_60 = ATgetFirst((ATermList) v_24);
            m_60 = (ATerm) ATgetNext((ATermList) v_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_60, l_60), (ATerm) ATmakeAppl(sym__2, k_60, m_60));
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL;
  if(match_cons(t, sym__2))
    {
      n_60 = ATgetArgument(t, 0);
      o_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_60), n_60);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL;
  if(match_cons(t, sym__2))
    {
      p_60 = ATgetArgument(t, 0);
      q_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_60), (ATerm) ATmakeAppl(sym_Match_1, q_60));
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
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_24 = ATgetArgument(t, 0);
      if(((ATgetType(y_24) == AT_LIST) && !(ATisEmpty(y_24))))
        {
          v_60 = ATgetFirst((ATermList) y_24);
          w_60 = (ATerm) ATgetNext((ATermList) y_24);
        }
      else
        _fail(t);
      {
        ATerm z_24 = ATgetArgument(t, 1);
        if(((ATgetType(z_24) == AT_LIST) && !(ATisEmpty(z_24))))
          {
            x_60 = ATgetFirst((ATermList) z_24);
            y_60 = (ATerm) ATgetNext((ATermList) z_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_60, x_60), (ATerm) ATmakeAppl(sym__2, w_60, y_60));
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL;
  if(match_cons(t, sym__2))
    {
      z_60 = ATgetArgument(t, 0);
      a_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_61), z_60);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm b_61 = NULL,c_61 = NULL;
  if(match_cons(t, sym__2))
    {
      b_61 = ATgetArgument(t, 0);
      c_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_61), (ATerm) ATmakeAppl(sym_Match_1, c_61));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      w_59 = ATgetArgument(t, 0);
      a_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_59;
  if(match_cons(t, sym_Build_1))
    {
      x_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_59;
  if(match_cons(t, sym_Op_2))
    {
      y_59 = ATgetArgument(t, 0);
      z_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_60;
  if(match_cons(t, sym_Seq_2))
    {
      b_60 = ATgetArgument(t, 0);
      u_59 = ATgetArgument(t, 1);
      {
        ATerm i_60 = NULL;
        t = b_60;
        if(match_cons(t, sym_Match_1))
          {
            c_60 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_60;
        if(match_cons(t, sym_Op_2))
          {
            s_59 = ATgetArgument(t, 0);
            t_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_59;
        if((y_59 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, z_59, t_59);
        t = genzip_4_0(z_0, a_1, b_1, c_1, t);
        i_60 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_60), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, y_59, z_59)), u_59));
      }
    }
  else
    {
      ATerm u_60 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          b_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_60;
      if(match_cons(t, sym_Op_2))
        {
          c_60 = ATgetArgument(t, 0);
          d_60 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_60;
      if((y_59 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, z_59, d_60);
      t = genzip_4_0(d_1, e_1, f_1, g_1, t);
      u_60 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_60), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, y_59, z_59)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm i_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL;
  l_62 = t;
  if(match_cons(t, sym_Seq_2))
    {
      m_62 = ATgetArgument(t, 0);
      q_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_62;
  if(match_cons(t, sym_Build_1))
    {
      n_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_62;
  if(match_cons(t, sym_Op_2))
    {
      o_62 = ATgetArgument(t, 0);
      {
        ATerm a_25 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = q_62;
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            r_62 = ATgetArgument(t, 0);
            {
              ATerm d_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_25);
        t = r_62;
        if(match_cons(t, sym_Match_1))
          {
            s_62 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_62;
        if(match_cons(t, sym_Op_2))
          {
            i_62 = ATgetArgument(t, 0);
            {
              ATerm e_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_62, i_62);
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
        t = term_q_6;
      }
    else
      {
        t = b_25;
        if(match_cons(t, sym_Match_1))
          {
            r_62 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_62;
        if(match_cons(t, sym_Op_2))
          {
            s_62 = ATgetArgument(t, 0);
            {
              ATerm g_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_62, s_62);
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
        t = term_q_6;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm n_137 (ATerm), ATerm t)
{
  static ATerm w_62 (ATerm t);
  static ATerm w_62 (ATerm t)
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_137(t);
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        t = SRTS_one(w_62, t);
      }
    return(t);
  }
  t = w_62(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL;
  p_63 = t;
  if(match_cons(t, sym_Let_2))
    {
      q_63 = ATgetArgument(t, 0);
      x_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_63;
  if(match_cons(t, sym_Let_2))
    {
      y_63 = ATgetArgument(t, 0);
      a_64 = ATgetArgument(t, 1);
      {
        ATerm f_64 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, q_63, y_63);
        t = conc_0_0(t);
        f_64 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, f_64, a_64);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          y_63 = ATgetArgument(t, 0);
          a_64 = ATgetArgument(t, 1);
          b_64 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = q_63;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_63 = ATgetFirst((ATermList) t);
          w_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_63;
      if(match_cons(t, sym_SDefT_4))
        {
          s_63 = ATgetArgument(t, 0);
          t_63 = ATgetArgument(t, 1);
          u_63 = ATgetArgument(t, 2);
          v_63 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = t_63;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_63;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_63;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_63;
      if(match_cons(t, sym_SVar_1))
        {
          z_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_64;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_64;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_63;
      if((s_63 != t))
        {
          _fail(t);
        }
      t = v_63;
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
                      if((s_63 != ATgetArgument(l_25, 0)))
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
      t = v_63;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,v_64 = NULL,w_64 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      v_64 = ATgetArgument(t, 0);
      t = v_64;
      if(match_cons(t, sym_Seq_2))
        {
          t_64 = ATgetArgument(t, 0);
          p_64 = ATgetArgument(t, 1);
          t = t_64;
          if(match_cons(t, sym_Where_1))
            {
              o_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_64;
          if(match_cons(t, sym_Seq_2))
            {
              q_64 = ATgetArgument(t, 0);
              s_64 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_64;
          if(match_cons(t, sym_Build_1))
            {
              r_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, o_64, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_64), s_64)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              t_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, t_64);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          v_64 = ATgetArgument(t, 0);
          t = v_64;
          if(match_cons(t, sym_Test_1))
            {
              t_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, t_64);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              v_64 = ATgetArgument(t, 0);
              t = v_64;
              if(match_cons(t, sym_Not_1))
                {
                  t_64 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, t_64);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  v_64 = ATgetArgument(t, 0);
                  w_64 = ATgetArgument(t, 1);
                  t = w_64;
                  if((v_64 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      v_64 = ATgetArgument(t, 0);
                      w_64 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = w_64;
                  if((v_64 != t))
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
  ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      k_65 = ATgetArgument(t, 0);
      n_65 = ATgetArgument(t, 1);
      t = k_65;
      if(match_cons(t, sym_LChoice_2))
        {
          l_65 = ATgetArgument(t, 0);
          m_65 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, l_65, (ATerm) ATmakeAppl(sym_LChoice_2, m_65, n_65));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          k_65 = ATgetArgument(t, 0);
          n_65 = ATgetArgument(t, 1);
          t = k_65;
          if(match_cons(t, sym_Seq_2))
            {
              l_65 = ATgetArgument(t, 0);
              m_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, l_65, (ATerm) ATmakeAppl(sym_Seq_2, m_65, n_65));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              k_65 = ATgetArgument(t, 0);
              n_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_65;
          if(match_cons(t, sym_Choice_2))
            {
              l_65 = ATgetArgument(t, 0);
              m_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, l_65, (ATerm) ATmakeAppl(sym_Choice_2, m_65, n_65));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL,f_66 = NULL,g_66 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      f_66 = ATgetArgument(t, 0);
      g_66 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, f_66, g_66);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          f_66 = ATgetArgument(t, 0);
          t = f_66;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_66 = ATgetFirst((ATermList) t);
              c_66 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, b_66, (ATerm) ATmakeAppl(sym_LChoices_1, c_66));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_q_6;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              f_66 = ATgetArgument(t, 0);
              t = f_66;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_66 = ATgetFirst((ATermList) t);
                  c_66 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, b_66, (ATerm) ATmakeAppl(sym_Choices_1, c_66));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_q_6;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  f_66 = ATgetArgument(t, 0);
                  t = f_66;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      b_66 = ATgetFirst((ATermList) t);
                      c_66 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_66, (ATerm) ATmakeAppl(sym_Seqs_1, c_66));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_i_6;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      f_66 = ATgetArgument(t, 0);
                      g_66 = ATgetArgument(t, 1);
                      d_66 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, g_66, (ATerm) ATmakeAppl(sym_Op_2, term_f_23, (ATerm) ATinsert(ATinsert(ATempty, d_66), f_66)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          f_66 = ATgetArgument(t, 0);
                          g_66 = ATgetArgument(t, 1);
                          d_66 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, d_66)), f_66), (ATerm) ATmakeAppl(sym_Build_1, g_66)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              f_66 = ATgetArgument(t, 0);
                              g_66 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_66, (ATerm) ATmakeAppl(sym_Match_1, g_66));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  f_66 = ATgetArgument(t, 0);
                                  g_66 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_66), g_66);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      f_66 = ATgetArgument(t, 0);
                                      g_66 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_66), f_66);
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
  ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      t_67 = ATgetArgument(t, 0);
      t = t_67;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_q_6;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          t_67 = ATgetArgument(t, 0);
          t = t_67;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_i_6;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              t_67 = ATgetArgument(t, 0);
              u_67 = ATgetArgument(t, 1);
              t = t_67;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_q_6;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  t_67 = ATgetArgument(t, 0);
                  u_67 = ATgetArgument(t, 1);
                  t = u_67;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_q_6;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      t_67 = ATgetArgument(t, 0);
                      u_67 = ATgetArgument(t, 1);
                      t = u_67;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_q_6;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          t_67 = ATgetArgument(t, 0);
                          t = t_67;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_q_6;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              t_67 = ATgetArgument(t, 0);
                              t = t_67;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_q_6;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  t_67 = ATgetArgument(t, 0);
                                  u_67 = ATgetArgument(t, 1);
                                  t = u_67;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_q_6;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      t_67 = ATgetArgument(t, 0);
                                      u_67 = ATgetArgument(t, 1);
                                      t = u_67;
                                      t = fetch_1_0(i_1, t);
                                      t = term_q_6;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          t_67 = ATgetArgument(t, 0);
                                          u_67 = ATgetArgument(t, 1);
                                          t = u_67;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = t_67;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = u_67;
                                                }
                                              else
                                                {
                                                  t = t_67;
                                                }
                                            }
                                          else
                                            {
                                              t = t_67;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = u_67;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              t_67 = ATgetArgument(t, 0);
                                              u_67 = ATgetArgument(t, 1);
                                              t = u_67;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = t_67;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = u_67;
                                                    }
                                                  else
                                                    {
                                                      t = t_67;
                                                    }
                                                }
                                              else
                                                {
                                                  t = t_67;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = u_67;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  t_67 = ATgetArgument(t, 0);
                                                  t = t_67;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_q_6;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      t_67 = ATgetArgument(t, 0);
                                                      u_67 = ATgetArgument(t, 1);
                                                      v_67 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = v_67;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_67, u_67);
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
  ATerm y_68 = NULL,a_69 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      a_69 = ATgetArgument(t, 0);
      t = a_69;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_i_6;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          a_69 = ATgetArgument(t, 0);
          t = a_69;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_q_6;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              a_69 = ATgetArgument(t, 0);
              y_68 = ATgetArgument(t, 1);
              t = y_68;
              if(match_cons(t, sym_Id_0))
                {
                  t = a_69;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = y_68;
                    }
                  else
                    {
                      t = a_69;
                    }
                }
              else
                {
                  t = a_69;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = y_68;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  a_69 = ATgetArgument(t, 0);
                  y_68 = ATgetArgument(t, 1);
                  t = a_69;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_i_6;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      a_69 = ATgetArgument(t, 0);
                      y_68 = ATgetArgument(t, 1);
                      t = y_68;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_i_6;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          a_69 = ATgetArgument(t, 0);
                          y_68 = ATgetArgument(t, 1);
                          t = y_68;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_i_6;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              a_69 = ATgetArgument(t, 0);
                              t = a_69;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_i_6;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  a_69 = ATgetArgument(t, 0);
                                  t = a_69;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_i_6;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      a_69 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = a_69;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_i_6;
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
                                ATerm y_25 = t;
                                int z_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_69 = NULL,q_69 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        p_69 = ATgetArgument(t, 0);
                                        q_69 = ATgetArgument(t, 1);
                                        t = p_69;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = q_69;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            p_69 = ATgetArgument(t, 0);
                                            q_69 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = p_69;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = q_69;
                                      }
                                    LocalPopChoice(z_25);
                                  }
                                else
                                  {
                                    t = y_25;
                                    {
                                      ATerm a_26 = t;
                                      int b_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(b_26);
                                        }
                                      else
                                        {
                                          t = a_26;
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
                                                                                      ATerm t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL;
                                                                                      u_69 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          v_69 = ATgetArgument(t, 0);
                                                                                          w_69 = ATgetArgument(t, 1);
                                                                                          t = v_69;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              t_69 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = u_69;
                                                                                          t = f_5(t_69, w_69, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              v_69 = ATgetArgument(t, 0);
                                                                                              w_69 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = v_69;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = w_69;
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
  ATerm m_70 = NULL;
  m_70 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_70);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm n_70 = NULL;
  n_70 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_70);
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
  ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_26 = ATgetArgument(t, 0);
      if(((ATgetType(u_26) == AT_LIST) && !(ATisEmpty(u_26))))
        {
          o_70 = ATgetFirst((ATermList) u_26);
          p_70 = (ATerm) ATgetNext((ATermList) u_26);
        }
      else
        _fail(t);
      {
        ATerm v_26 = ATgetArgument(t, 1);
        if(((ATgetType(v_26) == AT_LIST) && !(ATisEmpty(v_26))))
          {
            q_70 = ATgetFirst((ATermList) v_26);
            r_70 = (ATerm) ATgetNext((ATermList) v_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_70, q_70), (ATerm) ATmakeAppl(sym__2, p_70, r_70));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL;
  if(match_cons(t, sym__2))
    {
      s_70 = ATgetArgument(t, 0);
      t_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_70), s_70);
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
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_26 = ATgetArgument(t, 0);
      if(((ATgetType(y_26) == AT_LIST) && !(ATisEmpty(y_26))))
        {
          v_70 = ATgetFirst((ATermList) y_26);
          w_70 = (ATerm) ATgetNext((ATermList) y_26);
        }
      else
        _fail(t);
      {
        ATerm z_26 = ATgetArgument(t, 1);
        if(((ATgetType(z_26) == AT_LIST) && !(ATisEmpty(z_26))))
          {
            x_70 = ATgetFirst((ATermList) z_26);
            y_70 = (ATerm) ATgetNext((ATermList) z_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_70, x_70), (ATerm) ATmakeAppl(sym__2, w_70, y_70));
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm z_70 = NULL,a_71 = NULL;
  if(match_cons(t, sym__2))
    {
      z_70 = ATgetArgument(t, 0);
      a_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_71), z_70);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm b_71 = NULL,c_71 = NULL,d_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_27 = ATgetArgument(t, 0);
      if(match_cons(a_27, sym__2))
        {
          b_71 = ATgetArgument(a_27, 0);
          c_71 = ATgetArgument(a_27, 1);
        }
      else
        _fail(t);
      d_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, b_71)), (ATerm) ATmakeAppl(sym_Seq_2, d_71, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_71))));
  return(t);
}
static ATerm u_11 (ATerm x_106, ATerm d_107, ATerm t)
{
  ATerm b_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,l_70 = NULL;
  t = d_107;
  t = map_1_0(new_0_0, t);
  e_70 = t;
  t = map_1_0(j_1, t);
  b_70 = t;
  t = new_0_0(t);
  c_70 = t;
  t = d_107;
  t = map_1_0(new_0_0, t);
  f_70 = t;
  t = map_1_0(k_1, t);
  d_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_70, f_70);
  t = genzip_4_0(l_1, n_1, o_1, _id, t);
  l_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_70, d_107);
  t = genzip_4_0(p_1, q_1, r_1, s_1, t);
  g_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_70, f_70);
  t = conc_0_0(t);
  h_70 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, x_106, b_70), (ATerm) ATmakeAppl(sym_Var_1, c_70)));
  t = Mapp2_0_0(t);
  i_70 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, x_106, d_70), (ATerm) ATmakeAppl(sym_Var_1, c_70)));
  t = Bapp_0_0(t);
  j_70 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(h_70), c_70), (ATerm) ATmakeAppl(sym_Seq_2, i_70, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_70), j_70)));
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm f_71 = NULL,g_71 = NULL;
  f_71 = t;
  if(match_cons(t, sym_Build_1))
    {
      g_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_71 = NULL,i_71 = NULL,k_71 = NULL,l_71 = NULL;
        t = f_71;
        t = new_0_0(t);
        k_71 = t;
        t = g_71;
        {
          static ATerm t_1 (ATerm t);
          static ATerm t_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((h_71 != NULL) && (h_71 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_71 = ATgetArgument(t, 0);
                if(((i_71 != NULL) && (i_71 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  i_71 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, k_71);
            return(t);
          }
          t = pat_td_1_0(t_1, t);
        }
        l_71 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_71), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_27, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_71)), not_null(h_71))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_71)))), (ATerm) ATmakeAppl(sym_Build_1, l_71)));
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
              ATerm m_71 = NULL,o_71 = NULL,p_71 = NULL;
              t = f_71;
              t = new_0_0(t);
              o_71 = t;
              t = g_71;
              {
                static ATerm u_1 (ATerm t);
                static ATerm u_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((m_71 != NULL) && (m_71 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        m_71 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, o_71);
                  return(t);
                }
                t = pat_td_1_0(u_1, t);
              }
              p_71 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_71), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_71), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_71)))), (ATerm) ATmakeAppl(sym_Build_1, p_71)));
              LocalPopChoice(g_27);
            }
          else
            {
              t = f_27;
              {
                ATerm q_71 = NULL,r_71 = NULL,t_71 = NULL,u_71 = NULL;
                t = f_71;
                t = new_0_0(t);
                t_71 = t;
                t = g_71;
                {
                  static ATerm w_1 (ATerm t);
                  static ATerm w_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((q_71 != NULL) && (q_71 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          q_71 = ATgetArgument(t, 0);
                        if(((r_71 != NULL) && (r_71 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_71 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, t_71);
                    return(t);
                  }
                  t = pat_td_1_0(w_1, t);
                }
                u_71 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_71), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(q_71), not_null(r_71), (ATerm) ATmakeAppl(sym_Var_1, t_71))), (ATerm) ATmakeAppl(sym_Build_1, u_71)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm j_159 (ATerm), ATerm t)
{
  static ATerm p_72 (ATerm t);
  static ATerm p_72 (ATerm t)
  {
    ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL;
    o_72 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_72 = ATgetFirst((ATermList) t);
        n_72 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_2 = NULL,p_2 = NULL,n_0 = NULL;
          t = SSLgetAnnotations(o_72);
          m_2 = t;
          t = n_72;
          t = p_72(t);
          p_2 = t;
          t = (ATerm) ATinsert(CheckATermList(p_2), m_72);
          n_0 = t;
          t = SSLsetAnnotations(n_0, m_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_72;
        t = j_159(t);
      }
    return(t);
  }
  t = p_72(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL;
  w_71 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_71;
    }
  else
    {
      static ATerm x_1 (ATerm t);
      static ATerm x_1 (ATerm t)
      {
        t = not_null(y_71);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_71 = ATgetFirst((ATermList) t);
          if(((y_71 != NULL) && (y_71 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_71;
      t = at_end_1_0(x_1, t);
    }
  return(t);
}
static ATerm c_73 (ATerm u_72, ATerm t)
{
  ATerm v_72 = NULL;
  t = SSL_explode_term(u_72);
  if(match_cons(t, sym__2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      v_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_72;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_72 = NULL,y_72 = NULL,z_72 = NULL;
  z_72 = t;
  if(match_cons(t, sym__2))
    {
      x_72 = ATgetArgument(t, 0);
      y_72 = ATgetArgument(t, 1);
      {
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm y_1 (ATerm t);
            static ATerm y_1 (ATerm t)
            {
              t = y_72;
              return(t);
            }
            t = x_72;
            t = at_end_1_0(y_1, t);
            LocalPopChoice(j_27);
          }
        else
          {
            t = i_27;
            t = c_73(z_72, t);
          }
      }
    }
  else
    {
      t = c_73(z_72, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm a_141 (ATerm), ATerm b_141 (ATerm), ATerm c_141 (ATerm), ATerm d_141 (ATerm), ATerm t)
{
  static ATerm j_73 (ATerm t);
  static ATerm j_73 (ATerm t)
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_141(t);
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        {
          ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,v_4 = NULL;
          t = b_141(t);
          i_73 = t;
          if(match_cons(t, sym__2))
            {
              e_73 = ATgetArgument(t, 0);
              f_73 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_73);
          d_73 = t;
          t = e_73;
          t = d_141(t);
          g_73 = t;
          t = f_73;
          t = j_73(t);
          h_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_73, h_73);
          v_4 = t;
          t = SSLsetAnnotations(v_4, d_73);
          t = c_141(t);
        }
      }
    return(t);
  }
  t = j_73(t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm x_73 = NULL;
  x_73 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_73);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm y_73 = NULL;
  y_73 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_73);
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
  ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_27 = ATgetArgument(t, 0);
      if(((ATgetType(p_27) == AT_LIST) && !(ATisEmpty(p_27))))
        {
          z_73 = ATgetFirst((ATermList) p_27);
          a_74 = (ATerm) ATgetNext((ATermList) p_27);
        }
      else
        _fail(t);
      {
        ATerm q_27 = ATgetArgument(t, 1);
        if(((ATgetType(q_27) == AT_LIST) && !(ATisEmpty(q_27))))
          {
            b_74 = ATgetFirst((ATermList) q_27);
            c_74 = (ATerm) ATgetNext((ATermList) q_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_73, b_74), (ATerm) ATmakeAppl(sym__2, a_74, c_74));
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL;
  if(match_cons(t, sym__2))
    {
      d_74 = ATgetArgument(t, 0);
      e_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_74), d_74);
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
  ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_27 = ATgetArgument(t, 0);
      if(((ATgetType(u_27) == AT_LIST) && !(ATisEmpty(u_27))))
        {
          g_74 = ATgetFirst((ATermList) u_27);
          h_74 = (ATerm) ATgetNext((ATermList) u_27);
        }
      else
        _fail(t);
      {
        ATerm v_27 = ATgetArgument(t, 1);
        if(((ATgetType(v_27) == AT_LIST) && !(ATisEmpty(v_27))))
          {
            i_74 = ATgetFirst((ATermList) v_27);
            j_74 = (ATerm) ATgetNext((ATermList) v_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_74, i_74), (ATerm) ATmakeAppl(sym__2, h_74, j_74));
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm k_74 = NULL,l_74 = NULL;
  if(match_cons(t, sym__2))
    {
      k_74 = ATgetArgument(t, 0);
      l_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_74), k_74);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_27 = ATgetArgument(t, 0);
      if(match_cons(w_27, sym__2))
        {
          m_74 = ATgetArgument(w_27, 0);
          n_74 = ATgetArgument(w_27, 1);
        }
      else
        _fail(t);
      o_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, m_74)), (ATerm) ATmakeAppl(sym_Seq_2, o_74, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_74))));
  return(t);
}
static ATerm y_11 (ATerm i_107, ATerm q_107, ATerm p_107, ATerm t)
{
  ATerm l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL,w_73 = NULL;
  t = (ATerm) ATinsert(CheckATermList(q_107), p_107);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_73 = ATgetFirst((ATermList) t);
      p_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(z_1, t);
  m_73 = t;
  t = (ATerm) ATinsert(CheckATermList(q_107), p_107);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_73 = ATgetFirst((ATermList) t);
      q_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(a_2, t);
  o_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_73, q_73);
  t = genzip_4_0(b_2, c_2, d_2, _id, t);
  w_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_73, (ATerm) ATinsert(CheckATermList(q_107), p_107));
  t = genzip_4_0(e_2, f_2, g_2, h_2, t);
  r_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_73, q_73);
  t = conc_0_0(t);
  s_73 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, i_107, m_73), (ATerm) ATmakeAppl(sym_Var_1, l_73)));
  t = Mapp2_0_0(t);
  t_73 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, i_107, o_73), (ATerm) ATmakeAppl(sym_Var_1, n_73)));
  t = Bapp_0_0(t);
  u_73 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(s_73), n_73), l_73), (ATerm) ATmakeAppl(sym_Seq_2, t_73, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_73), u_73)));
  return(t);
}
ATerm pat_td_1_0 (ATerm e_134 (ATerm), ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_134(t);
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      {
        ATerm y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL;
        z_76 = t;
        if(match_cons(t, sym_Op_2))
          {
            a_77 = ATgetArgument(t, 0);
            b_77 = ATgetArgument(t, 1);
            {
              ATerm x_2 = NULL,a_3 = NULL,y_4 = NULL;
              t = SSLgetAnnotations(z_76);
              x_2 = t;
              t = b_77;
              {
                static ATerm i_2 (ATerm t);
                static ATerm i_2 (ATerm t)
                {
                  t = pat_td_1_0(e_134, t);
                  return(t);
                }
                t = fetch_1_0(i_2, t);
              }
              a_3 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, a_77, a_3);
              y_4 = t;
              t = SSLsetAnnotations(y_4, x_2);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                a_77 = ATgetArgument(t, 0);
                b_77 = ATgetArgument(t, 1);
                {
                  ATerm z_27 = t;
                  int a_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_3 = NULL,l_3 = NULL,a_5 = NULL;
                      t = SSLgetAnnotations(z_76);
                      i_3 = t;
                      t = b_77;
                      t = pat_td_1_0(e_134, t);
                      l_3 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, a_77, l_3);
                      a_5 = t;
                      t = SSLsetAnnotations(a_5, i_3);
                      LocalPopChoice(a_28);
                    }
                  else
                    {
                      t = z_27;
                      {
                        ATerm t_3 = NULL,w_3 = NULL,b_5 = NULL;
                        t = SSLgetAnnotations(z_76);
                        t_3 = t;
                        t = a_77;
                        t = pat_td_1_0(e_134, t);
                        w_3 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, w_3, b_77);
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
                    a_77 = ATgetArgument(t, 0);
                    b_77 = ATgetArgument(t, 1);
                    y_76 = ATgetArgument(t, 2);
                    {
                      ATerm f_4 = NULL,j_4 = NULL,c_5 = NULL;
                      t = SSLgetAnnotations(z_76);
                      f_4 = t;
                      t = y_76;
                      {
                        static ATerm j_2 (ATerm t);
                        static ATerm j_2 (ATerm t)
                        {
                          t = pat_td_1_0(e_134, t);
                          return(t);
                        }
                        t = fetch_1_0(j_2, t);
                      }
                      j_4 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, a_77, b_77, j_4);
                      c_5 = t;
                      t = SSLsetAnnotations(c_5, f_4);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        a_77 = ATgetArgument(t, 0);
                        b_77 = ATgetArgument(t, 1);
                        y_76 = ATgetArgument(t, 2);
                        {
                          ATerm u_4 = NULL,i_5 = NULL,d_5 = NULL;
                          t = SSLgetAnnotations(z_76);
                          u_4 = t;
                          t = y_76;
                          {
                            static ATerm k_2 (ATerm t);
                            static ATerm k_2 (ATerm t)
                            {
                              t = pat_td_1_0(e_134, t);
                              return(t);
                            }
                            t = fetch_1_0(k_2, t);
                          }
                          i_5 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, a_77, b_77, i_5);
                          d_5 = t;
                          t = SSLsetAnnotations(d_5, u_4);
                        }
                      }
                    else
                      {
                        ATerm a_6 = NULL,d_6 = NULL,e_5 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            a_77 = ATgetArgument(t, 0);
                            b_77 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(z_76);
                        a_6 = t;
                        t = b_77;
                        t = pat_td_1_0(e_134, t);
                        d_6 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, a_77, d_6);
                        e_5 = t;
                        t = SSLsetAnnotations(e_5, a_6);
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
  ATerm j_77 = NULL,k_77 = NULL;
  j_77 = t;
  if(match_cons(t, sym_Match_1))
    {
      k_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL;
        t = j_77;
        t = new_0_0(t);
        o_77 = t;
        t = k_77;
        {
          static ATerm l_2 (ATerm t);
          static ATerm l_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((m_77 != NULL) && (m_77 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_77 = ATgetArgument(t, 0);
                if(((n_77 != NULL) && (n_77 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  n_77 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, o_77), m_77);
            return(t);
          }
          t = pat_td_1_0(l_2, t);
        }
        p_77 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_77), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_77), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_d_28, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_77))), (ATerm) ATmakeAppl(sym_Match_1, not_null(n_77))))));
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
              ATerm r_77 = NULL,s_77 = NULL,t_77 = NULL;
              t = j_77;
              t = new_0_0(t);
              s_77 = t;
              t = k_77;
              {
                static ATerm n_2 (ATerm t);
                static ATerm n_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((r_77 != NULL) && (r_77 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        r_77 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, s_77);
                  return(t);
                }
                t = pat_td_1_0(n_2, t);
              }
              t_77 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_77), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_77), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, s_77)), not_null(r_77))));
              LocalPopChoice(g_28);
            }
          else
            {
              t = e_28;
              {
                ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL;
                t = j_77;
                t = new_0_0(t);
                x_77 = t;
                t = k_77;
                {
                  static ATerm o_2 (ATerm t);
                  static ATerm o_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((w_77 != NULL) && (w_77 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          w_77 = ATgetArgument(t, 0);
                        if(((v_77 != NULL) && (v_77 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          v_77 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, x_77);
                    return(t);
                  }
                  t = pat_td_1_0(o_2, t);
                }
                y_77 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_77), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_77), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, x_77)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_77)), not_null(w_77)))));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm q_78 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      q_78 = ATgetArgument(t, 0);
      t = q_78;
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
  ATerm e_78 = NULL,f_78 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      e_78 = ATgetArgument(t, 0);
      f_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_78;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, e_78, (ATerm) ATempty));
    }
  else
    {
      ATerm p_78 = NULL;
      t = f_78;
      t = map_1_0(q_2, t);
      p_78 = t;
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, e_78, p_78));
      t = Mapp2_0_0(t);
    }
  return(t);
}
ATerm repeat_2_0 (ATerm k_146 (ATerm), ATerm l_146 (ATerm), ATerm t)
{
  static ATerm t_78 (ATerm t);
  static ATerm t_78 (ATerm t)
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_146(t);
        t = t_78(t);
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
        t = l_146(t);
      }
    return(t);
  }
  t = t_78(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm k_136 (ATerm), ATerm t)
{
  static ATerm r_2 (ATerm t);
  static ATerm r_2 (ATerm t)
  {
    t = bottomup_1_0(k_136, t);
    return(t);
  }
  t = SRTS_all(r_2, t);
  t = k_136(t);
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
            ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL,h_79 = NULL,i_79 = NULL,j_79 = NULL,k_79 = NULL,l_79 = NULL,m_79 = NULL;
            k_79 = t;
            if(match_cons(t, sym_Call_2))
              {
                l_79 = ATgetArgument(t, 0);
                m_79 = ATgetArgument(t, 1);
                t = l_79;
                if(match_cons(t, sym_SVar_1))
                  {
                    d_79 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = d_79;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
                  _fail(t);
                t = m_79;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_79 = ATgetFirst((ATermList) t);
                    h_79 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = e_79;
                if(match_cons(t, sym_Cong_2))
                  {
                    f_79 = ATgetArgument(t, 0);
                    g_79 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = h_79;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    i_79 = ATgetFirst((ATermList) t);
                    j_79 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = j_79;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_79;
                t = y_11(f_79, g_79, i_79, t);
              }
            else
              {
                if(match_cons(t, sym_Cong_2))
                  {
                    l_79 = ATgetArgument(t, 0);
                    m_79 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_79;
                t = u_11(l_79, m_79, t);
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
ATerm map_1_0 (ATerm u_158 (ATerm), ATerm t)
{
  static ATerm h_80 (ATerm t);
  static ATerm h_80 (ATerm t)
  {
    ATerm e_80 = NULL,f_80 = NULL,g_80 = NULL;
    e_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_80;
      }
    else
      {
        ATerm l_6 = NULL,o_6 = NULL,p_6 = NULL,p_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_80 = ATgetFirst((ATermList) t);
            g_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_80);
        l_6 = t;
        t = f_80;
        t = u_158(t);
        o_6 = t;
        t = g_80;
        t = h_80(t);
        p_6 = t;
        t = (ATerm) ATinsert(CheckATermList(p_6), o_6);
        p_5 = t;
        t = SSLsetAnnotations(p_5, l_6);
      }
    return(t);
  }
  t = h_80(t);
  return(t);
}
static ATerm z_11 (ATerm w_47, ATerm x_47, ATerm t)
{
  ATerm j_80 = NULL;
  t = SSL_fputc(w_47, x_47);
  j_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_80);
  return(t);
}
static ATerm a_12 (ATerm f_53, ATerm g_53, ATerm t)
{
  ATerm k_80 = NULL;
  t = SSL_write_term_to_stream_text(f_53, g_53);
  k_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_80);
  return(t);
}
static ATerm c_12 (ATerm b_151 (ATerm), ATerm b_486, ATerm l_53, ATerm t)
{
  ATerm l_80 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_486, term_o_28);
  t = g_12(t);
  l_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_80, l_53);
  t = b_151(t);
  t = fclose_0_0(t);
  t = l_53;
  return(t);
}
static ATerm b_12 (ATerm b_53, ATerm c_53, ATerm t)
{
  ATerm r_80 = NULL;
  t = SSL_write_term_to_stream_baf(b_53, c_53);
  r_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_80);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm y_80 = NULL,z_80 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_28 = ATgetArgument(t, 0);
      if(match_cons(p_28, sym_Stream_1))
        {
          y_80 = ATgetArgument(p_28, 0);
        }
      else
        _fail(t);
      z_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_12(y_80, z_80, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm a_81 = NULL,b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_28 = ATgetArgument(t, 0);
      if(match_cons(q_28, sym_Stream_1))
        {
          d_81 = ATgetArgument(q_28, 0);
        }
      else
        _fail(t);
      e_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12(d_81, e_81, t);
  a_81 = t;
  t = term_r_28;
  b_81 = t;
  t = a_81;
  if(match_cons(t, sym_Stream_1))
    {
      c_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_r_28, a_81);
  t = z_11(b_81, c_81, t);
  return(t);
}
ATerm output_1_0 (ATerm u_168 (ATerm), ATerm t)
{
  ATerm s_80 = NULL,t_80 = NULL;
  t = u_168(t);
  t_80 = t;
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_80 = NULL,v_80 = NULL;
        t = term_u_28;
        u_80 = t;
        t = term_v_28;
        v_80 = t;
        t = term_w_28;
        t = m_12(u_80, v_80, t);
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        t = term_x_28;
      }
  }
  s_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_80, t_80);
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_80 = NULL,x_80 = NULL;
        t = term_u_28;
        w_80 = t;
        t = term_a_29;
        x_80 = t;
        t = term_b_29;
        t = m_12(w_80, x_80, t);
        t = (ATerm) ATmakeAppl(sym__2, s_80, t_80);
        LocalPopChoice(z_28);
        if(match_cons(t, sym__2))
          {
            ATerm c_29 = ATgetArgument(t, 0);
            ATerm d_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_12(u_2, s_80, t_80, t);
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
        t = c_12(v_2, s_80, t_80, t);
      }
  }
  return(t);
}
static ATerm y_81 (ATerm q_81, ATerm t)
{
  t = SSL_fclose(q_81);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_81 = NULL,w_81 = NULL;
  w_81 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_81 = ATgetArgument(t, 0);
      {
        ATerm g_29 = t;
        int h_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_81);
            LocalPopChoice(h_29);
          }
        else
          {
            t = g_29;
            t = y_81(w_81, t);
          }
      }
    }
  else
    {
      t = y_81(w_81, t);
    }
  return(t);
}
static ATerm d_12 (ATerm h_53, ATerm t)
{
  t = SSL_read_term_from_stream(h_53);
  return(t);
}
static ATerm e_12 (ATerm c_46, ATerm d_46, ATerm t)
{
  t = SSL_strcat(c_46, d_46);
  return(t);
}
static ATerm f_12 (ATerm y_47, ATerm z_47, ATerm t)
{
  ATerm z_81 = NULL;
  t = SSL_fopen(y_47, z_47);
  z_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_81);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_82 = NULL;
  t = SSL_stdin_stream();
  a_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_82);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_82 = NULL;
  t = SSL_stdout_stream();
  b_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_82);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_82 = NULL;
  t = SSL_stderr_stream();
  c_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_82);
  return(t);
}
static ATerm l_83 (ATerm i_82, ATerm t)
{
  ATerm j_82 = NULL;
  t = SSL_explode_term(i_82);
  if(match_cons(t, sym__2))
    {
      ATerm i_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_29 = ATgetArgument(t, 1);
        if(((ATgetType(j_29) == AT_LIST) && !(ATisEmpty(j_29))))
          {
            j_82 = ATgetFirst((ATermList) j_29);
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
  t = j_82;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_82;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_82;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_82;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_83 (ATerm m_82, ATerm n_82, ATerm o_82, ATerm t)
{
  ATerm p_82 = NULL,q_82 = NULL,r_82 = NULL,u_82 = NULL,i_7 = NULL;
  t = SSLgetAnnotations(o_82);
  r_82 = t;
  t = m_82;
  if(match_cons(t, sym_Path_1))
    {
      u_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_82, n_82);
  i_7 = t;
  t = SSLsetAnnotations(i_7, r_82);
  if(match_cons(t, sym__2))
    {
      p_82 = ATgetArgument(t, 0);
      q_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_12(p_82, q_82, t);
  return(t);
}
static ATerm n_83 (ATerm w_82, ATerm x_82, ATerm y_82, ATerm t)
{
  ATerm z_82 = NULL,a_83 = NULL,b_83 = NULL,g_83 = NULL,o_14 = NULL;
  t = SSLgetAnnotations(y_82);
  b_83 = t;
  t = SSL_is_string(w_82);
  g_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_83, x_82);
  o_14 = t;
  t = SSLsetAnnotations(o_14, b_83);
  if(match_cons(t, sym__2))
    {
      z_82 = ATgetArgument(t, 0);
      a_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_12(z_82, a_83, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm i_83 = NULL,j_83 = NULL,k_83 = NULL;
  i_83 = t;
  if(match_cons(t, sym__2))
    {
      j_83 = ATgetArgument(t, 0);
      k_83 = ATgetArgument(t, 1);
      {
        ATerm l_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_83(i_83, t);
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
                  t = m_83(j_83, k_83, i_83, t);
                  LocalPopChoice(o_29);
                }
              else
                {
                  t = n_29;
                  t = n_83(j_83, k_83, i_83, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_83(i_83, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_83 = NULL,q_83 = NULL,r_83 = NULL,w_83 = NULL;
  w_83 = t;
  {
    ATerm p_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_83, term_s_29);
        t = g_12(t);
        LocalPopChoice(r_29);
      }
    else
      {
        t = p_29;
        {
          ATerm c_7 = NULL,d_7 = NULL;
          t = term_t_29;
          d_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_29, w_83);
          t = e_12(d_7, w_83, t);
          c_7 = t;
          t = SSL_perror(c_7);
          _fail(t);
        }
      }
  }
  q_83 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_12(r_83, t);
  p_83 = t;
  t = q_83;
  t = fclose_0_0(t);
  t = p_83;
  return(t);
}
ATerm input_1_0 (ATerm v_168 (ATerm), ATerm t)
{
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_83 = NULL,a_84 = NULL;
      t = term_u_28;
      z_83 = t;
      t = term_w_29;
      a_84 = t;
      t = term_x_29;
      t = m_12(z_83, a_84, t);
      LocalPopChoice(v_29);
    }
  else
    {
      t = u_29;
      t = term_y_29;
    }
  t = ReadFromFile_0_0(t);
  t = v_168(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm b_84 = NULL,c_84 = NULL;
  t = term_u_28;
  b_84 = t;
  t = term_z_29;
  c_84 = t;
  t = term_a_30;
  t = m_12(b_84, c_84, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_84 = NULL,f_84 = NULL,g_84 = NULL;
  e_84 = t;
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_84;
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
            t = e_84;
          }
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        t = (ATerm) ATinsert(ATempty, e_84);
      }
  }
  f_84 = t;
  t = term_x_28;
  g_84 = t;
  t = SSL_printnl(g_84, f_84);
  t = e_84;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm l_84 = NULL,m_84 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_84 = ATgetFirst((ATermList) t);
      m_84 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_84 = NULL,r_84 = NULL;
        static ATerm w_2 (ATerm t);
        static ATerm w_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_84)), not_null(r_84));
          return(t);
        }
        t = m_84;
        t = r_0(t);
        if(((q_84 != NULL) && (q_84 != t)))
          _fail(t);
        else
          q_84 = t;
        t = l_84;
        t = p_0(t);
        if(((r_84 != NULL) && (r_84 != t)))
          _fail(t);
        else
          r_84 = t;
        t = m_84;
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
  ATerm z_84 = NULL,a_85 = NULL,b_85 = NULL,f_15 = NULL;
  b_85 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_85);
  z_84 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_85);
  f_15 = t;
  t = SSLsetAnnotations(f_15, z_84);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm f_85 = NULL;
  f_85 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_85), term_g_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm t_170 (ATerm), ATerm u_170 (ATerm), ATerm t)
{
  ATerm v_84 = NULL,w_84 = NULL;
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_84 = NULL,y_84 = NULL;
      t = term_u_28;
      x_84 = t;
      t = term_z_29;
      y_84 = t;
      t = term_a_30;
      t = m_12(x_84, y_84, t);
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
        t = t_170(t);
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
  v_84 = t;
  t = term_n_30;
  w_84 = t;
  t = term_o_30;
  t = m_12(v_84, w_84, t);
  t = reverse_acc_2_0(_id, z_2, t);
  t = map_1_0(b_3, t);
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_85 = NULL;
        t = u_170(t);
        g_85 = t;
        t = (ATerm) ATinsert(CheckATermList(g_85), term_s_30);
        t = echo_0_0(t);
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
      }
  }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm m_85 = NULL,n_85 = NULL,o_85 = NULL,h_15 = NULL;
  o_85 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_85);
  m_85 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_85);
  h_15 = t;
  t = SSLsetAnnotations(h_15, m_85);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_85 = NULL;
  j_85 = t;
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_85 = NULL,l_85 = NULL;
        t = term_u_28;
        k_85 = t;
        t = term_z_29;
        l_85 = t;
        t = term_a_30;
        t = m_12(k_85, l_85, t);
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
        t = fetch_1_0(c_3, t);
      }
  }
  t = j_85;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm q_85 = NULL;
  q_85 = t;
  if(match_string(t, "-k"))
    {
      t = q_85;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_85;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL;
  r_85 = t;
  t = SSL_string_to_int(r_85);
  s_85 = t;
  t = term_v_30;
  t_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_30, s_85);
  t = p_12(t_85, s_85, t);
  t = r_85;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_w_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_3, e_3, f_3, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm v_85 = NULL;
  v_85 = t;
  if(match_string(t, "-S"))
    {
      t = v_85;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_85;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm w_85 = NULL,x_85 = NULL;
  t = term_x_30;
  w_85 = t;
  t = term_y_30;
  x_85 = t;
  t = term_z_30;
  t = p_12(w_85, x_85, t);
  t = term_a_31;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_b_31;
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
  ATerm y_85 = NULL,z_85 = NULL,a_86 = NULL;
  y_85 = t;
  t = SSL_string_to_int(y_85);
  z_85 = t;
  t = term_x_30;
  a_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_30, z_85);
  t = p_12(a_86, z_85, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_85);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_c_31;
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
  ATerm b_86 = NULL,c_86 = NULL;
  t = term_d_31;
  b_86 = t;
  t = term_f_30;
  c_86 = t;
  t = term_e_31;
  t = p_12(b_86, c_86, t);
  t = term_f_31;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_g_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_3, h_3, j_3, t);
      LocalPopChoice(i_31);
    }
  else
    {
      t = h_31;
      {
        ATerm j_31 = t;
        int k_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_3, m_3, n_3, t);
            LocalPopChoice(k_31);
          }
        else
          {
            t = j_31;
            t = Option_3_0(o_3, p_3, q_3, t);
          }
      }
    }
  return(t);
}
static ATerm p_12 (ATerm v_51, ATerm w_51, ATerm t)
{
  ATerm d_86 = NULL,e_86 = NULL;
  t = term_u_28;
  d_86 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_28, v_51, w_51);
  t = lookup_table_0_1(d_86, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_12(v_51, w_51, e_86, t);
  t = (ATerm) ATmakeAppl(sym__3, term_u_28, v_51, w_51);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm i_86 = NULL,j_86 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_86 = NULL,l_86 = NULL,m_86 = NULL;
      t = term_f_30;
      t = g_0(t);
      k_86 = t;
      t = term_m_30;
      l_86 = t;
      t = term_n_30;
      m_86 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_30, term_n_30, k_86);
      t = n_12(l_86, m_86, k_86, t);
      _fail(t);
    }
  else
    {
      ATerm p_86 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_86 = ATgetFirst((ATermList) t);
          j_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_86;
      t = d_0(t);
      t = term_f_30;
      t = f_0(t);
      p_86 = t;
      t = (ATerm) ATinsert(CheckATermList(j_86), p_86);
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm r_86 = NULL;
  r_86 = t;
  if(match_string(t, "-o"))
    {
      t = r_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_86;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm s_86 = NULL,t_86 = NULL;
  s_86 = t;
  t = term_v_28;
  t_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_28, s_86);
  t = p_12(t_86, s_86, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_86);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_l_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_3, s_3, u_3, t);
  return(t);
}
static ATerm n_12 (ATerm g_57, ATerm h_57, ATerm f_57, ATerm t)
{
  ATerm v_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL;
  v_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_57, h_57);
  {
    ATerm m_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_31 = ATgetArgument(t, 0);
            ATerm p_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_57, h_57);
        t = m_12(g_57, h_57, t);
        LocalPopChoice(n_31);
      }
    else
      {
        t = m_31;
        t = (ATerm) ATempty;
      }
  }
  w_86 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_57, h_57, (ATerm) ATinsert(CheckATermList(w_86), f_57));
  t = lookup_table_0_1(g_57, t);
  z_86 = t;
  t = (ATerm) ATinsert(CheckATermList(w_86), f_57);
  x_86 = t;
  t = z_86;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_12(h_57, x_86, y_86, t);
  t = v_86;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm g_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_87 = NULL,l_87 = NULL,m_87 = NULL;
      t = term_f_30;
      t = o_0(t);
      k_87 = t;
      t = term_m_30;
      l_87 = t;
      t = term_n_30;
      m_87 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_30, term_n_30, k_87);
      t = n_12(l_87, m_87, k_87, t);
      _fail(t);
    }
  else
    {
      ATerm r_87 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_87 = ATgetFirst((ATermList) t);
          h_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_87;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_87 = ATgetFirst((ATermList) t);
          j_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_87;
      t = j_0(t);
      t = i_87;
      t = l_0(t);
      r_87 = t;
      t = (ATerm) ATinsert(CheckATermList(j_87), r_87);
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm t_87 = NULL;
  t_87 = t;
  if(match_string(t, "-i"))
    {
      t = t_87;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_87;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm u_87 = NULL,v_87 = NULL;
  u_87 = t;
  t = term_w_29;
  v_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_29, u_87);
  t = p_12(v_87, u_87, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_87);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_3, x_3, y_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_30;
  t = whoami_0_0(t);
  w_87 = t;
  t = term_s_31;
  y_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_31), w_87);
  z_87 = t;
  t = SSL_printnl(y_87, z_87);
  t = term_u_31;
  x_87 = t;
  t = SSL_exit(x_87);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm a_88 = NULL,b_88 = NULL;
  t = term_u_28;
  a_88 = t;
  t = term_z_29;
  b_88 = t;
  t = term_a_30;
  t = m_12(a_88, b_88, t);
  return(t);
}
static ATerm h_12 (ATerm o_54, ATerm p_54, ATerm t)
{
  ATerm v_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(o_54, p_54);
      LocalPopChoice(w_31);
    }
  else
    {
      t = v_31;
      t = SSL_addr(o_54, p_54);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_161 (ATerm), ATerm b_161 (ATerm), ATerm t)
{
  ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL;
  d_88 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_88;
      t = a_161(t);
    }
  else
    {
      ATerm i_88 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_88 = ATgetFirst((ATermList) t);
          f_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_88;
      t = foldr_2_0(a_161, b_161, t);
      i_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_88, i_88);
      t = b_161(t);
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
  t = term_y_30;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL;
  if(match_cons(t, sym__2))
    {
      j_7 = ATgetArgument(t, 0);
      k_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(j_7, k_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_88 = NULL,f_7 = NULL,g_7 = NULL;
  t = times_0_0(t);
  g_7 = t;
  t = SSL_explode_term(g_7);
  if(match_cons(t, sym__2))
    {
      ATerm x_31 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7;
  t = foldr_2_0(z_3, a_4, t);
  l_88 = t;
  t = SSL_TicksToSeconds(l_88);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL;
  w_88 = t;
  if(match_cons(t, sym__2))
    {
      x_88 = ATgetArgument(t, 0);
      y_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_88;
        if((x_88 != t))
          {
            _fail(t);
          }
        t = w_88;
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
        t = (ATerm) ATmakeAppl(sym__2, x_88, y_88);
        {
          ATerm a_32 = t;
          int b_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_88, y_88);
              LocalPopChoice(b_32);
            }
          else
            {
              t = a_32;
              t = SSL_gtr(x_88, y_88);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_88, y_88);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_148 (ATerm), ATerm t)
{
  ATerm c_89 = NULL;
  c_89 = t;
  {
    ATerm c_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_89 = NULL,f_89 = NULL,g_89 = NULL;
        t = term_u_28;
        f_89 = t;
        t = term_x_30;
        g_89 = t;
        t = term_e_32;
        t = m_12(f_89, g_89, t);
        e_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_89, term_u_31);
        t = geq_0_0(t);
        t = c_89;
        t = w_148(t);
        LocalPopChoice(d_32);
      }
    else
      {
        t = c_32;
        t = c_89;
      }
  }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm i_89 = NULL,j_89 = NULL,l_89 = NULL,m_89 = NULL;
  t = run_time_0_0(t);
  i_89 = t;
  t = term_f_30;
  t = whoami_0_0(t);
  j_89 = t;
  t = term_s_31;
  l_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_32), i_89), term_f_32), j_89);
  m_89 = t;
  t = SSL_printnl(l_89, m_89);
  t = (ATerm) ATmakeAppl(sym__2, term_s_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_32), i_89), term_f_32), j_89));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_89 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_30;
  n_89 = t;
  t = SSL_exit(n_89);
  return(t);
}
static ATerm q_12 (ATerm v_61, ATerm w_61, ATerm x_61, ATerm t)
{
  ATerm o_89 = NULL;
  t = SSL_hashtable_put(x_61, v_61, w_61);
  o_89 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_89);
  return(t);
}
ATerm lookup_table_0_1 (ATerm s_58, ATerm t)
{
  ATerm x_89 = NULL;
  t = table_hashtable_0_0(t);
  x_89 = t;
  {
    ATerm h_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_8 = NULL;
        t = x_89;
        if(match_cons(t, sym_Hashtable_1))
          {
            c_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_12(s_58, c_8, t);
        LocalPopChoice(i_32);
      }
    else
      {
        t = h_32;
        {
          ATerm i_8 = NULL;
          t = s_58;
          t = table_create_0_0(t);
          t = x_89;
          if(match_cons(t, sym_Hashtable_1))
            {
              i_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_12(s_58, i_8, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm d_62, ATerm e_62, ATerm t)
{
  ATerm a_90 = NULL;
  t = SSL_hashtable_create(d_62, e_62);
  a_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_90);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL,f_90 = NULL,g_90 = NULL;
  b_90 = t;
  t = term_j_32;
  f_90 = t;
  t = term_l_32;
  g_90 = t;
  t = b_90;
  t = new_hashtable_0_2(f_90, g_90, t);
  c_90 = t;
  t = b_90;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_12(b_90, c_90, d_90, t);
  t = b_90;
  return(t);
}
static ATerm j_12 (ATerm a_62, ATerm b_62, ATerm t)
{
  ATerm h_90 = NULL;
  t = SSL_hashtable_remove(b_62, a_62);
  h_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_90);
  return(t);
}
static ATerm k_12 (ATerm f_62, ATerm t)
{
  ATerm i_90 = NULL;
  t = SSL_hashtable_destroy(f_62);
  i_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_90);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm j_90 = NULL;
  t = SSL_table_hashtable();
  j_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_90);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm k_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL;
  k_90 = t;
  t = table_hashtable_0_0(t);
  l_90 = t;
  t = lookup_table_0_1(k_90, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_12(n_90, t);
  t = l_90;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_12(k_90, m_90, t);
  t = k_90;
  return(t);
}
ATerm fetch_1_0 (ATerm c_159 (ATerm), ATerm t)
{
  static ATerm q_91 (ATerm t);
  static ATerm q_91 (ATerm t)
  {
    ATerm n_91 = NULL,o_91 = NULL,p_91 = NULL;
    n_91 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_91 = ATgetFirst((ATermList) t);
        p_91 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_32 = t;
      int n_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_8 = NULL,y_8 = NULL,j_15 = NULL;
          t = SSLgetAnnotations(n_91);
          q_8 = t;
          t = o_91;
          t = c_159(t);
          y_8 = t;
          t = (ATerm) ATinsert(CheckATermList(p_91), y_8);
          j_15 = t;
          t = SSLsetAnnotations(j_15, q_8);
          LocalPopChoice(n_32);
        }
      else
        {
          t = m_32;
          {
            ATerm i_9 = NULL,l_9 = NULL,k_15 = NULL;
            t = SSLgetAnnotations(n_91);
            i_9 = t;
            t = p_91;
            t = q_91(t);
            l_9 = t;
            t = (ATerm) ATinsert(CheckATermList(l_9), o_91);
            k_15 = t;
            t = SSLsetAnnotations(k_15, i_9);
          }
        }
    }
    return(t);
  }
  t = q_91(t);
  return(t);
}
static ATerm r_12 (ATerm y_61, ATerm z_61, ATerm t)
{
  t = SSL_hashtable_get(z_61, y_61);
  return(t);
}
static ATerm m_12 (ATerm z_58, ATerm a_59, ATerm t)
{
  ATerm u_91 = NULL;
  t = lookup_table_0_1(z_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(a_59, u_91, t);
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
  ATerm w_91 = NULL,x_91 = NULL;
  t = term_o_32;
  w_91 = t;
  t = term_f_30;
  x_91 = t;
  t = term_p_32;
  t = p_12(w_91, x_91, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_q_32;
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
  ATerm y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL;
  t = term_o_32;
  a_92 = t;
  t = term_f_30;
  b_92 = t;
  t = term_p_32;
  t = p_12(a_92, b_92, t);
  t = term_r_32;
  y_91 = t;
  t = term_f_30;
  z_91 = t;
  t = term_s_32;
  t = p_12(y_91, z_91, t);
  t = term_t_32;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_4, d_4, e_4, t);
      LocalPopChoice(w_32);
    }
  else
    {
      t = v_32;
      t = Option_3_0(g_4, h_4, i_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm t)
{
  ATerm c_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL,g_16 = NULL;
  h_92 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_92 = ATgetFirst((ATermList) t);
      e_92 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_92);
  c_92 = t;
  t = d_92;
  t = u_109(t);
  f_92 = t;
  t = e_92;
  t = v_109(t);
  g_92 = t;
  t = (ATerm) ATinsert(CheckATermList(g_92), f_92);
  g_16 = t;
  t = SSLsetAnnotations(g_16, c_92);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_170 (ATerm), ATerm t)
{
  ATerm n_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL,s_92 = NULL,t_92 = NULL,i_16 = NULL;
  n_92 = t;
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_32;
        t = o_170(t);
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
      }
  }
  t = n_92;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_92 = ATgetFirst((ATermList) t);
      q_92 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_92);
  o_92 = t;
  t = term_z_29;
  t_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_29, p_92);
  t = p_12(t_92, p_92, t);
  t = q_92;
  {
    static ATerm d_93 (ATerm t);
    static ATerm d_93 (ATerm t)
    {
      ATerm a_33 = t;
      int b_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_33 = t;
          int d_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_92 = NULL;
              w_92 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_92;
              LocalPopChoice(d_33);
            }
          else
            {
              t = c_33;
              t = o_170(t);
              t = Cons_2_0(_id, d_93, t);
            }
          LocalPopChoice(b_33);
        }
      else
        {
          t = a_33;
          {
            ATerm z_92 = NULL,a_93 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_92 = ATgetFirst((ATermList) t);
                a_93 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(a_93), (ATerm) ATmakeAppl(sym_Undefined_1, z_92));
          }
        }
      return(t);
    }
    t = d_93(t);
  }
  s_92 = t;
  t = (ATerm) ATinsert(CheckATermList(s_92), (ATerm) ATmakeAppl(sym_Program_1, p_92));
  i_16 = t;
  t = SSLsetAnnotations(i_16, o_92);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm q_93 = NULL;
  q_93 = t;
  if(match_string(t, "--help"))
    {
      t = q_93;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_93;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_93;
        }
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm r_93 = NULL,s_93 = NULL;
  t = term_e_33;
  r_93 = t;
  t = term_f_30;
  s_93 = t;
  t = term_f_33;
  t = p_12(r_93, s_93, t);
  t = term_h_33;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_i_33;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm l_170 (ATerm), ATerm m_170 (ATerm), ATerm n_170 (ATerm), ATerm t)
{
  ATerm i_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL;
  k_93 = t;
  t = term_m_30;
  l_93 = t;
  t = term_j_33;
  t = lookup_table_0_1(l_93, t);
  p_93 = t;
  t = term_n_30;
  m_93 = t;
  t = (ATerm) ATempty;
  n_93 = t;
  t = p_93;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_12(m_93, n_93, o_93, t);
  t = k_93;
  {
    static ATerm k_4 (ATerm t);
    static ATerm k_4 (ATerm t)
    {
      ATerm k_33 = t;
      int l_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_170(t);
          LocalPopChoice(l_33);
        }
      else
        {
          t = k_33;
          {
            ATerm m_33 = t;
            int n_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_4, m_4, n_4, t);
                LocalPopChoice(n_33);
              }
            else
              {
                t = m_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_4, t);
  }
  {
    ATerm o_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_94 = NULL;
        f_94 = t;
        {
          ATerm q_33 = t;
          int r_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_9 = NULL;
              t = f_94;
              {
                ATerm t_33 = t;
                int u_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_9 = NULL,w_9 = NULL;
                    t = term_u_28;
                    v_9 = t;
                    t = term_e_33;
                    w_9 = t;
                    t = term_v_33;
                    t = m_12(v_9, w_9, t);
                    LocalPopChoice(u_33);
                  }
                else
                  {
                    t = t_33;
                    t = fetch_1_0(o_4, t);
                  }
              }
              t = f_94;
              t = m_170(t);
              t = term_y_30;
              u_9 = t;
              t = SSL_exit(u_9);
              LocalPopChoice(r_33);
            }
          else
            {
              t = q_33;
              {
                ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL;
                t = term_u_28;
                b_10 = t;
                t = term_o_32;
                c_10 = t;
                t = term_w_33;
                t = m_12(b_10, c_10, t);
                t = f_94;
                t = n_170(t);
                t = term_y_30;
                a_10 = t;
                t = SSL_exit(a_10);
              }
            }
        }
        LocalPopChoice(p_33);
      }
    else
      {
        t = o_33;
        {
          ATerm x_33 = t;
          int y_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_94 = NULL,h_94 = NULL,i_94 = NULL;
              static ATerm p_4 (ATerm t);
              static ATerm p_4 (ATerm t)
              {
                ATerm j_94 = NULL,k_94 = NULL,l_94 = NULL,k_16 = NULL;
                l_94 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    k_94 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_94);
                j_94 = t;
                t = k_94;
                if(((i_93 != NULL) && (i_93 != t)))
                  _fail(t);
                else
                  i_93 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, k_94);
                k_16 = t;
                t = SSLsetAnnotations(k_16, j_94);
                return(t);
              }
              t = fetch_1_0(p_4, t);
              t = term_s_31;
              h_94 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_93)), term_z_33);
              i_94 = t;
              t = SSL_printnl(h_94, i_94);
              t = (ATerm) ATmakeAppl(sym__2, term_s_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_93)), term_z_33));
              t = m_170(t);
              t = term_u_31;
              g_94 = t;
              t = SSL_exit(g_94);
              LocalPopChoice(y_33);
            }
          else
            {
              t = x_33;
            }
        }
      }
  }
  j_93 = t;
  t = term_m_30;
  t = table_destroy_0_0(t);
  t = j_93;
  return(t);
}
ATerm option_wrap_5_0 (ATerm o_168 (ATerm), ATerm p_168 (ATerm), ATerm q_168 (ATerm), ATerm r_168 (ATerm), ATerm s_168 (ATerm), ATerm t)
{
  ATerm r_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL;
  t = parse_options_3_0(o_168, p_168, q_168, t);
  r_94 = t;
  t = term_a_34;
  t = table_create_0_0(t);
  t = term_a_34;
  s_94 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_34, term_b_34, r_94);
  t = lookup_table_0_1(s_94, t);
  v_94 = t;
  t = term_b_34;
  t_94 = t;
  t = v_94;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_12(t_94, r_94, u_94, t);
  t = r_94;
  t = r_168(t);
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_168(t);
        t = report_success_0_0(t);
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      {
        ATerm h_34 = t;
        int i_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(s_4, t_4, w_4, t);
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
                        t = verbose_option_0_0(t);
                        LocalPopChoice(m_34);
                      }
                    else
                      {
                        t = l_34;
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
static ATerm t_4 (ATerm t)
{
  ATerm a_95 = NULL,b_95 = NULL;
  t = term_a_29;
  a_95 = t;
  t = term_f_30;
  b_95 = t;
  t = term_n_34;
  t = p_12(a_95, b_95, t);
  t = term_o_34;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_p_34;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = output_1_0(z_4, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm d_95 = NULL,e_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,l_95 = NULL,m_95 = NULL,o_95 = NULL,p_95 = NULL,r_95 = NULL,s_95 = NULL,u_95 = NULL,v_95 = NULL,e_17 = NULL,d_17 = NULL,c_17 = NULL,w_16 = NULL;
  v_95 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_95);
  d_95 = t;
  t = e_95;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_95 = ATgetFirst((ATermList) t);
      h_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_95);
  f_95 = t;
  t = h_95;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_95 = ATgetFirst((ATermList) t);
      m_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_95);
  j_95 = t;
  t = l_95;
  if(match_cons(t, sym_Strategies_1))
    {
      r_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_95);
  p_95 = t;
  t = r_95;
  t = map_1_0(g_5, t);
  s_95 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, s_95);
  w_16 = t;
  t = SSLsetAnnotations(w_16, p_95);
  u_95 = t;
  t = m_95;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_95), u_95);
  c_17 = t;
  t = SSLsetAnnotations(c_17, j_95);
  o_95 = t;
  t = (ATerm) ATinsert(CheckATermList(o_95), g_95);
  d_17 = t;
  t = SSLsetAnnotations(d_17, f_95);
  i_95 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, i_95);
  e_17 = t;
  t = SSLsetAnnotations(e_17, d_95);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm i_96 = NULL,j_96 = NULL,k_96 = NULL,l_96 = NULL,m_96 = NULL;
  m_96 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      i_96 = ATgetArgument(t, 0);
      j_96 = ATgetArgument(t, 1);
      k_96 = ATgetArgument(t, 2);
      l_96 = ATgetArgument(t, 3);
      {
        ATerm q_34 = t;
        int r_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_10 = NULL,g_14 = NULL,v_16 = NULL;
            t = SSLgetAnnotations(m_96);
            k_10 = t;
            t = l_96;
            t = define_congruences_0_0(t);
            g_14 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, i_96, j_96, k_96, g_14);
            v_16 = t;
            t = SSLsetAnnotations(v_16, k_10);
            LocalPopChoice(r_34);
          }
        else
          {
            t = q_34;
            t = m_96;
          }
      }
    }
  else
    {
      t = m_96;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(q_4, default_system_usage_0_0, default_system_about_0_0, _id, r_4, t);
  return(t);
}

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_Some_1;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_As_2;
Symbol sym_RootApp_1;
Symbol sym_App_2;
Symbol sym_Anno_2;
Symbol sym_Explode_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_AM_2;
Symbol sym_Choice_2;
Symbol sym_All_1;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
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
Symbol sym_Call_2;
Symbol sym_Let_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_SDefT_4;
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_Some_1;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_As_2;
Symbol sym_RootApp_1;
Symbol sym_App_2;
Symbol sym_Anno_2;
Symbol sym_Explode_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_AM_2;
Symbol sym_Choice_2;
Symbol sym_All_1;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
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
Symbol sym_Call_2;
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
Symbol sym_Some_1;
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
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Undefined_0;
Symbol sym_Hashtable_1;
Symbol sym_Anno_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Cong_2;
static void init_module_constructors (void)
{
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
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
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
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
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_z_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_l_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_r_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_g_30;
ATerm term_e_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_q_28;
ATerm term_n_28;
ATerm term_g_28;
ATerm term_d_28;
ATerm term_d_27;
ATerm term_f_23;
ATerm term_o_6;
ATerm term_g_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_u_28);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_a_29);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_v_29);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_y_29);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym__0);
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
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym__2, term_w_30, term_x_30);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_30);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__2, term_c_31, term_e_30);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_w_30);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym__2, term_o_32, term_e_30);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym__2, term_r_32, term_e_30);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym__2, term_e_33, term_e_30);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym__3, term_m_30, term_n_30, (ATerm) ATempty);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_e_33);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_o_32);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym__2, term_a_29, term_e_30);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm c_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm simplify_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm n_129 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
static ATerm f_5 (ATerm n_101, ATerm m_101, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm r_130 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm u_11 (ATerm o_100, ATerm u_100, ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm s_151 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm d_73 (ATerm v_72, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm e_134 (ATerm), ATerm f_134 (ATerm), ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm y_11 (ATerm z_100, ATerm h_101, ATerm g_101, ATerm t);
ATerm pat_td_1_0 (ATerm i_127 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm MatchingCongruence_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm k_139 (ATerm), ATerm l_139 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm o_129 (ATerm), ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm define_congruences_0_0 (ATerm t);
ATerm map_1_0 (ATerm b_151 (ATerm), ATerm t);
static ATerm z_11 (ATerm f_47, ATerm g_47, ATerm t);
static ATerm a_12 (ATerm o_52, ATerm p_52, ATerm t);
static ATerm c_12 (ATerm b_144 (ATerm), ATerm b_475, ATerm u_52, ATerm t);
static ATerm b_12 (ATerm k_52, ATerm l_52, ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm output_1_0 (ATerm p_160 (ATerm), ATerm t);
static ATerm a_82 (ATerm u_81, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_12 (ATerm q_52, ATerm t);
static ATerm e_12 (ATerm l_45, ATerm m_45, ATerm t);
static ATerm f_12 (ATerm h_47, ATerm j_47, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_83 (ATerm k_82, ATerm t);
static ATerm n_83 (ATerm o_82, ATerm p_82, ATerm q_82, ATerm t);
static ATerm o_83 (ATerm y_82, ATerm z_82, ATerm a_83, ATerm t);
static ATerm g_12 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm q_160 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm default_system_usage_2_0 (ATerm o_162 (ATerm), ATerm p_162 (ATerm), ATerm t);
static ATerm b_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_12 (ATerm e_51, ATerm f_51, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_12 (ATerm p_56, ATerm q_56, ATerm o_56, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_12 (ATerm x_53, ATerm y_53, ATerm t);
ATerm foldr_2_0 (ATerm j_153 (ATerm), ATerm k_153 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_141 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_12 (ATerm a_61, ATerm b_61, ATerm c_61, ATerm t);
ATerm lookup_table_0_1 (ATerm b_58, ATerm t);
ATerm new_hashtable_0_2 (ATerm i_61, ATerm j_61, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm j_12 (ATerm f_61, ATerm g_61, ATerm t);
static ATerm k_12 (ATerm k_61, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_151 (ATerm), ATerm t);
static ATerm r_12 (ATerm d_61, ATerm e_61, ATerm t);
static ATerm m_12 (ATerm i_58, ATerm j_58, ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_162 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm parse_options_3_0 (ATerm g_162 (ATerm), ATerm h_162 (ATerm), ATerm i_162 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm j_160 (ATerm), ATerm k_160 (ATerm), ATerm l_160 (ATerm), ATerm m_160 (ATerm), ATerm n_160 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm c_0 (ATerm t)
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
static ATerm e_0 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_5 = ATgetArgument(t, 0);
      if(((ATgetType(j_5) == AT_LIST) && !(ATisEmpty(j_5))))
        {
          p_15 = ATgetFirst((ATermList) j_5);
          q_15 = (ATerm) ATgetNext((ATermList) j_5);
        }
      else
        _fail(t);
      {
        ATerm l_5 = ATgetArgument(t, 1);
        if(((ATgetType(l_5) == AT_LIST) && !(ATisEmpty(l_5))))
          {
            r_15 = ATgetFirst((ATermList) l_5);
            s_15 = (ATerm) ATgetNext((ATermList) l_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_15, r_15), (ATerm) ATmakeAppl(sym__2, q_15, s_15));
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm t_15 = NULL,w_15 = NULL;
  if(match_cons(t, sym__2))
    {
      t_15 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_15), t_15);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL;
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_15), (ATerm) ATmakeAppl(sym_Match_1, y_15));
  return(t);
}
static ATerm n_0 (ATerm t)
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
static ATerm p_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,y_23 = NULL;
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
        ATerm p_5 = ATgetArgument(t, 1);
        if(((ATgetType(p_5) == AT_LIST) && !(ATisEmpty(p_5))))
          {
            v_23 = ATgetFirst((ATermList) p_5);
            y_23 = (ATerm) ATgetNext((ATermList) p_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_23, v_23), (ATerm) ATmakeAppl(sym__2, u_23, y_23));
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm d_24 = NULL,f_24 = NULL;
  if(match_cons(t, sym__2))
    {
      d_24 = ATgetArgument(t, 0);
      f_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_24), d_24);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL;
  if(match_cons(t, sym__2))
    {
      t_24 = ATgetArgument(t, 0);
      u_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_24), (ATerm) ATmakeAppl(sym_Match_1, u_24));
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm q_5 = t;
  int s_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm u_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(s_5);
      {
        ATerm c_42 = NULL,h_42 = NULL;
        c_42 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm v_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        h_42 = t;
        t = SSLgetAnnotations(c_42);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_5 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) w_5) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm x_5 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(x_5) != AT_LIST) || !(ATisEmpty(x_5))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = h_42;
      }
    }
  else
    {
      t = q_5;
      {
        ATerm z_5 = t;
        int a_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm c_6 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) c_6) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm d_6 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(a_6);
            _fail(t);
          }
        else
          {
            t = z_5;
          }
      }
    }
  return(t);
}
static ATerm u_0 (ATerm t)
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
    ATerm r_5 = NULL,t_5 = NULL,r_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,e_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,x_8 = NULL,z_8 = NULL,e_9 = NULL,r_9 = NULL;
    r_9 = t;
    if(match_cons(t, sym_Test_1))
      {
        e_9 = ATgetArgument(t, 0);
        t = e_9;
        if(match_cons(t, sym_Id_0))
          {
            ATerm e_6 = t;
            int f_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_g_6;
                t = a_0(t);
                LocalPopChoice(f_6);
              }
            else
              {
                t = e_6;
                {
                  ATerm h_6 = t;
                  int i_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_10 = NULL,n_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL;
                      t = r_9;
                      t = new_0_0(t);
                      e_10 = t;
                      t = bottomup_1_0(a_0, t);
                      z_10 = t;
                      t = (ATerm) ATempty;
                      t = a_0(t);
                      a_11 = t;
                      t = (ATerm) ATinsert(CheckATermList(a_11), z_10);
                      t = a_0(t);
                      n_10 = t;
                      t = e_10;
                      t = bottomup_1_0(a_0, t);
                      y_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, y_10);
                      t = a_0(t);
                      x_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, x_10);
                      t = a_0(t);
                      r_10 = t;
                      t = e_9;
                      t = bottomup_1_0(a_0, t);
                      t_10 = t;
                      t = e_10;
                      t = bottomup_1_0(a_0, t);
                      w_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, w_10);
                      t = a_0(t);
                      v_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, v_10);
                      t = a_0(t);
                      u_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_10, u_10);
                      t = a_0(t);
                      s_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, r_10, s_10);
                      t = a_0(t);
                      q_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, n_10, q_10);
                      t = a_0(t);
                      LocalPopChoice(i_6);
                    }
                  else
                    {
                      t = h_6;
                      t = r_9;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm k_6 = t;
                int l_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_o_6;
                    t = a_0(t);
                    LocalPopChoice(l_6);
                  }
                else
                  {
                    t = k_6;
                    {
                      ATerm p_6 = t;
                      int q_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL;
                          t = r_9;
                          t = new_0_0(t);
                          d_11 = t;
                          t = bottomup_1_0(a_0, t);
                          o_11 = t;
                          t = (ATerm) ATempty;
                          t = a_0(t);
                          p_11 = t;
                          t = (ATerm) ATinsert(CheckATermList(p_11), o_11);
                          t = a_0(t);
                          e_11 = t;
                          t = d_11;
                          t = bottomup_1_0(a_0, t);
                          n_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, n_11);
                          t = a_0(t);
                          m_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, m_11);
                          t = a_0(t);
                          g_11 = t;
                          t = e_9;
                          t = bottomup_1_0(a_0, t);
                          i_11 = t;
                          t = d_11;
                          t = bottomup_1_0(a_0, t);
                          l_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, l_11);
                          t = a_0(t);
                          k_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, k_11);
                          t = a_0(t);
                          j_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_11, j_11);
                          t = a_0(t);
                          h_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_11, h_11);
                          t = a_0(t);
                          f_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, e_11, f_11);
                          t = a_0(t);
                          LocalPopChoice(q_6);
                        }
                      else
                        {
                          t = p_6;
                          t = r_9;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    u_8 = ATgetArgument(t, 0);
                    {
                      ATerm r_6 = t;
                      int s_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, u_8);
                          t = a_0(t);
                          LocalPopChoice(s_6);
                        }
                      else
                        {
                          t = r_6;
                          {
                            ATerm t_6 = t;
                            int u_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm t_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,i_12 = NULL,l_12 = NULL,o_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
                                t = r_9;
                                t = new_0_0(t);
                                t_11 = t;
                                t = bottomup_1_0(a_0, t);
                                w_12 = t;
                                t = (ATerm) ATempty;
                                t = a_0(t);
                                x_12 = t;
                                t = (ATerm) ATinsert(CheckATermList(x_12), w_12);
                                t = a_0(t);
                                v_11 = t;
                                t = t_11;
                                t = bottomup_1_0(a_0, t);
                                v_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, v_12);
                                t = a_0(t);
                                u_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, u_12);
                                t = a_0(t);
                                x_11 = t;
                                t = e_9;
                                t = bottomup_1_0(a_0, t);
                                l_12 = t;
                                t = t_11;
                                t = bottomup_1_0(a_0, t);
                                t_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, t_12);
                                t = a_0(t);
                                s_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, s_12);
                                t = a_0(t);
                                o_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, l_12, o_12);
                                t = a_0(t);
                                i_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, x_11, i_12);
                                t = a_0(t);
                                w_11 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, v_11, w_11);
                                t = a_0(t);
                                LocalPopChoice(u_6);
                              }
                            else
                              {
                                t = t_6;
                                t = r_9;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm v_6 = t;
                    int w_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
                        t = r_9;
                        t = new_0_0(t);
                        a_13 = t;
                        t = bottomup_1_0(a_0, t);
                        l_13 = t;
                        t = (ATerm) ATempty;
                        t = a_0(t);
                        m_13 = t;
                        t = (ATerm) ATinsert(CheckATermList(m_13), l_13);
                        t = a_0(t);
                        b_13 = t;
                        t = a_13;
                        t = bottomup_1_0(a_0, t);
                        k_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, k_13);
                        t = a_0(t);
                        j_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, j_13);
                        t = a_0(t);
                        d_13 = t;
                        t = e_9;
                        t = bottomup_1_0(a_0, t);
                        f_13 = t;
                        t = a_13;
                        t = bottomup_1_0(a_0, t);
                        i_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, i_13);
                        t = a_0(t);
                        h_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, h_13);
                        t = a_0(t);
                        g_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_13, g_13);
                        t = a_0(t);
                        e_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_13, e_13);
                        t = a_0(t);
                        c_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, b_13, c_13);
                        t = a_0(t);
                        LocalPopChoice(w_6);
                      }
                    else
                      {
                        t = v_6;
                        t = r_9;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            e_9 = ATgetArgument(t, 0);
            t = e_9;
            if(match_cons(t, sym_Id_0))
              {
                ATerm x_6 = t;
                int y_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_o_6;
                    t = a_0(t);
                    LocalPopChoice(y_6);
                  }
                else
                  {
                    t = x_6;
                    t = r_9;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm z_6 = t;
                    int c_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_g_6;
                        t = a_0(t);
                        LocalPopChoice(c_7);
                      }
                    else
                      {
                        t = z_6;
                        t = r_9;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        u_8 = ATgetArgument(t, 0);
                        {
                          ATerm g_7 = t;
                          int j_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, u_8);
                              t = a_0(t);
                              LocalPopChoice(j_7);
                            }
                          else
                            {
                              t = g_7;
                              t = r_9;
                            }
                        }
                      }
                    else
                      {
                        t = r_9;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                e_9 = ATgetArgument(t, 0);
                z_8 = ATgetArgument(t, 1);
                t = z_8;
                if(match_cons(t, sym_Id_0))
                  {
                    t = e_9;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = z_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = e_9;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                u_8 = ATgetArgument(t, 0);
                                x_8 = ATgetArgument(t, 1);
                                t = e_9;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    u_8 = ATgetArgument(t, 0);
                                    x_8 = ATgetArgument(t, 1);
                                    t = e_9;
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
                    if(match_cons(t, sym_Seq_2))
                      {
                        s_8 = ATgetArgument(t, 0);
                        t_8 = ATgetArgument(t, 1);
                        t = s_8;
                        if(match_cons(t, sym_Match_1))
                          {
                            r_8 = ATgetArgument(t, 0);
                            t = r_8;
                            if(match_cons(t, sym_Op_2))
                              {
                                l_8 = ATgetArgument(t, 0);
                                z_7 = ATgetArgument(t, 1);
                                t = e_9;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm k_7 = t;
                                        int l_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_o_6;
                                            t = a_0(t);
                                            LocalPopChoice(l_7);
                                          }
                                        else
                                          {
                                            t = k_7;
                                            t = r_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            u_8 = ATgetArgument(t, 0);
                                            x_8 = ATgetArgument(t, 1);
                                            {
                                              ATerm m_7 = t;
                                              int n_7 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm c_15 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                  t = a_0(t);
                                                  c_15 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, c_15);
                                                  t = a_0(t);
                                                  LocalPopChoice(n_7);
                                                }
                                              else
                                                {
                                                  t = m_7;
                                                  t = r_9;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                u_8 = ATgetArgument(t, 0);
                                                t = u_8;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    m_8 = ATgetArgument(t, 0);
                                                    a_8 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm o_7 = t;
                                                      int p_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, m_8, l_8);
                                                          {
                                                            ATerm q_7 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm i_0 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    i_0 = ATgetArgument(t, 0);
                                                                    if((i_0 != ATgetArgument(t, 1)))
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
                                                                t = q_7;
                                                              }
                                                          }
                                                          t = term_o_6;
                                                          t = bottomup_1_0(a_0, t);
                                                          LocalPopChoice(p_7);
                                                        }
                                                      else
                                                        {
                                                          t = o_7;
                                                          {
                                                            ATerm s_7 = t;
                                                            int t_7 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_15 = NULL;
                                                                t = l_8;
                                                                if((m_8 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, a_8, z_7);
                                                                t = genzip_4_0(c_0, e_0, f_0, k_0, t);
                                                                o_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, m_8, a_8)), t_8));
                                                                t = bottomup_1_0(a_0, t);
                                                                LocalPopChoice(t_7);
                                                              }
                                                            else
                                                              {
                                                                t = s_7;
                                                                {
                                                                  ATerm y_7 = t;
                                                                  int c_8 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm b_16 = NULL;
                                                                      t = r_8;
                                                                      if((u_8 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, u_8);
                                                                      t = a_0(t);
                                                                      b_16 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_16, t_8);
                                                                      t = a_0(t);
                                                                      LocalPopChoice(c_8);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = y_7;
                                                                      t = r_9;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm d_8 = t;
                                                    int f_8 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm f_16 = NULL;
                                                        t = r_8;
                                                        if((u_8 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, u_8);
                                                        t = a_0(t);
                                                        f_16 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_16, t_8);
                                                        t = a_0(t);
                                                        LocalPopChoice(f_8);
                                                      }
                                                    else
                                                      {
                                                        t = d_8;
                                                        t = r_9;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    u_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm h_8 = t;
                                                      int i_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_16 = NULL;
                                                          t = r_8;
                                                          if((u_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, u_8);
                                                          t = a_0(t);
                                                          p_16 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_16, t_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(i_8);
                                                        }
                                                      else
                                                        {
                                                          t = h_8;
                                                          t = r_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_8 = ATgetArgument(t, 0);
                                                        x_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_8 = t;
                                                          int n_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_16 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                              t = a_0(t);
                                                              u_16 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_8, u_16);
                                                              t = a_0(t);
                                                              LocalPopChoice(n_8);
                                                            }
                                                          else
                                                            {
                                                              t = j_8;
                                                              t = r_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = r_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = e_9;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm p_8 = t;
                                        int q_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_o_6;
                                            t = a_0(t);
                                            LocalPopChoice(q_8);
                                          }
                                        else
                                          {
                                            t = p_8;
                                            t = r_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            u_8 = ATgetArgument(t, 0);
                                            x_8 = ATgetArgument(t, 1);
                                            {
                                              ATerm w_8 = t;
                                              int y_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm l_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                  t = a_0(t);
                                                  l_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, l_17);
                                                  t = a_0(t);
                                                  LocalPopChoice(y_8);
                                                }
                                              else
                                                {
                                                  t = w_8;
                                                  t = r_9;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                u_8 = ATgetArgument(t, 0);
                                                {
                                                  ATerm a_9 = t;
                                                  int b_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_17 = NULL;
                                                      t = r_8;
                                                      if((u_8 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, u_8);
                                                      t = a_0(t);
                                                      p_17 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_17, t_8);
                                                      t = a_0(t);
                                                      LocalPopChoice(b_9);
                                                    }
                                                  else
                                                    {
                                                      t = a_9;
                                                      t = r_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    u_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm c_9 = t;
                                                      int d_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm v_17 = NULL;
                                                          t = r_8;
                                                          if((u_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, u_8);
                                                          t = a_0(t);
                                                          v_17 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_17, t_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(d_9);
                                                        }
                                                      else
                                                        {
                                                          t = c_9;
                                                          t = r_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_8 = ATgetArgument(t, 0);
                                                        x_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_9 = t;
                                                          int h_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm c_18 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                              t = a_0(t);
                                                              c_18 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_8, c_18);
                                                              t = a_0(t);
                                                              LocalPopChoice(h_9);
                                                            }
                                                          else
                                                            {
                                                              t = f_9;
                                                              t = r_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = r_9;
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
                                    l_8 = ATgetArgument(t, 0);
                                    t = e_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm i_9 = t;
                                            int k_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_6;
                                                t = a_0(t);
                                                LocalPopChoice(k_9);
                                              }
                                            else
                                              {
                                                t = i_9;
                                                t = r_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                u_8 = ATgetArgument(t, 0);
                                                x_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm l_9 = t;
                                                  int m_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm l_18 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                      t = a_0(t);
                                                      l_18 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, l_18);
                                                      t = a_0(t);
                                                      LocalPopChoice(m_9);
                                                    }
                                                  else
                                                    {
                                                      t = l_9;
                                                      t = r_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm n_9 = t;
                                                int o_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm p_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(o_9);
                                                    {
                                                      ATerm t_9 = t;
                                                      int v_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm u_18 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_8);
                                                          t = a_0(t);
                                                          u_18 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_18, t_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(v_9);
                                                        }
                                                      else
                                                        {
                                                          t = t_9;
                                                          t = r_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = n_9;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        u_8 = ATgetArgument(t, 0);
                                                        t = u_8;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            m_8 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm w_9 = t;
                                                              int x_9 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_19 = NULL,f_19 = NULL;
                                                                  t = l_8;
                                                                  if((m_8 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, m_8);
                                                                  t = a_0(t);
                                                                  f_19 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, f_19);
                                                                  t = a_0(t);
                                                                  e_19 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_19, t_8);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(x_9);
                                                                }
                                                              else
                                                                {
                                                                  t = w_9;
                                                                  t = r_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = r_9;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            u_8 = ATgetArgument(t, 0);
                                                            x_8 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm b_10 = t;
                                                              int c_10 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm o_19 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                                  t = a_0(t);
                                                                  o_19 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, u_8, o_19);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(c_10);
                                                                }
                                                              else
                                                                {
                                                                  t = b_10;
                                                                  t = r_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = r_9;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = e_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm d_10 = t;
                                            int f_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_6;
                                                t = a_0(t);
                                                LocalPopChoice(f_10);
                                              }
                                            else
                                              {
                                                t = d_10;
                                                t = r_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                u_8 = ATgetArgument(t, 0);
                                                x_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm g_10 = t;
                                                  int h_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm b_20 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                      t = a_0(t);
                                                      b_20 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, b_20);
                                                      t = a_0(t);
                                                      LocalPopChoice(h_10);
                                                    }
                                                  else
                                                    {
                                                      t = g_10;
                                                      t = r_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm j_10 = t;
                                                int k_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm l_10 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(k_10);
                                                    {
                                                      ATerm m_10 = t;
                                                      int p_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm h_20 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_8);
                                                          t = a_0(t);
                                                          h_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_20, t_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(p_10);
                                                        }
                                                      else
                                                        {
                                                          t = m_10;
                                                          t = r_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = j_10;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_8 = ATgetArgument(t, 0);
                                                        x_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_11 = t;
                                                          int c_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                              t = a_0(t);
                                                              p_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_8, p_20);
                                                              t = a_0(t);
                                                              LocalPopChoice(c_11);
                                                            }
                                                          else
                                                            {
                                                              t = b_11;
                                                              t = r_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = r_9;
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
                                    b_8 = ATgetArgument(t, 1);
                                    e_8 = ATgetArgument(t, 2);
                                    t = e_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm q_11 = t;
                                            int r_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_6;
                                                t = a_0(t);
                                                LocalPopChoice(r_11);
                                              }
                                            else
                                              {
                                                t = q_11;
                                                t = r_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                u_8 = ATgetArgument(t, 0);
                                                x_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm s_11 = t;
                                                  int y_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm h_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                      t = a_0(t);
                                                      h_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, h_21);
                                                      t = a_0(t);
                                                      LocalPopChoice(y_12);
                                                    }
                                                  else
                                                    {
                                                      t = s_11;
                                                      t = r_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm z_12 = t;
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
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, r_8, b_8, e_8);
                                                          t = a_0(t);
                                                          p_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_21, t_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(q_13);
                                                        }
                                                      else
                                                        {
                                                          t = p_13;
                                                          t = r_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = z_12;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_8 = ATgetArgument(t, 0);
                                                        x_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_13 = t;
                                                          int s_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_21 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                              t = a_0(t);
                                                              x_21 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_8, x_21);
                                                              t = a_0(t);
                                                              LocalPopChoice(s_13);
                                                            }
                                                          else
                                                            {
                                                              t = r_13;
                                                              t = r_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = r_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = e_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm t_13 = t;
                                            int u_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_6;
                                                t = a_0(t);
                                                LocalPopChoice(u_13);
                                              }
                                            else
                                              {
                                                t = t_13;
                                                t = r_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                u_8 = ATgetArgument(t, 0);
                                                x_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm v_13 = t;
                                                  int w_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                      t = a_0(t);
                                                      o_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, o_22);
                                                      t = a_0(t);
                                                      LocalPopChoice(w_13);
                                                    }
                                                  else
                                                    {
                                                      t = v_13;
                                                      t = r_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    u_8 = ATgetArgument(t, 0);
                                                    x_8 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm x_13 = t;
                                                      int y_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm v_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                          t = a_0(t);
                                                          v_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, u_8, v_22);
                                                          t = a_0(t);
                                                          LocalPopChoice(y_13);
                                                        }
                                                      else
                                                        {
                                                          t = x_13;
                                                          t = r_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = r_9;
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
                            s_8 = ATgetArgument(t, 0);
                            t = s_8;
                            if(match_cons(t, sym_Op_2))
                              {
                                r_8 = ATgetArgument(t, 0);
                                b_8 = ATgetArgument(t, 1);
                                t = e_9;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm z_13 = t;
                                        int a_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_o_6;
                                            t = a_0(t);
                                            LocalPopChoice(a_14);
                                          }
                                        else
                                          {
                                            t = z_13;
                                            t = r_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            u_8 = ATgetArgument(t, 0);
                                            x_8 = ATgetArgument(t, 1);
                                            {
                                              ATerm b_14 = t;
                                              int c_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm l_23 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                  t = a_0(t);
                                                  l_23 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, l_23);
                                                  t = a_0(t);
                                                  LocalPopChoice(c_14);
                                                }
                                              else
                                                {
                                                  t = b_14;
                                                  t = r_9;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                u_8 = ATgetArgument(t, 0);
                                                t = u_8;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    m_8 = ATgetArgument(t, 0);
                                                    a_8 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm d_14 = t;
                                                      int e_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, m_8, r_8);
                                                          {
                                                            ATerm f_14 = t;
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
                                                                t = f_14;
                                                              }
                                                          }
                                                          t = term_o_6;
                                                          t = bottomup_1_0(a_0, t);
                                                          LocalPopChoice(e_14);
                                                        }
                                                      else
                                                        {
                                                          t = d_14;
                                                          {
                                                            ATerm g_14 = t;
                                                            int h_14 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm s_23 = NULL;
                                                                t = r_8;
                                                                if((m_8 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, a_8, b_8);
                                                                t = genzip_4_0(n_0, p_0, q_0, r_0, t);
                                                                s_23 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_23), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, m_8, a_8)));
                                                                t = bottomup_1_0(a_0, t);
                                                                LocalPopChoice(h_14);
                                                              }
                                                            else
                                                              {
                                                                t = g_14;
                                                                {
                                                                  ATerm i_14 = t;
                                                                  int j_14 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = s_8;
                                                                      if((u_8 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, u_8);
                                                                      t = a_0(t);
                                                                      LocalPopChoice(j_14);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = i_14;
                                                                      t = r_9;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm k_14 = t;
                                                    int l_14 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = s_8;
                                                        if((u_8 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, u_8);
                                                        t = a_0(t);
                                                        LocalPopChoice(l_14);
                                                      }
                                                    else
                                                      {
                                                        t = k_14;
                                                        t = r_9;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    u_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm o_14 = t;
                                                      int p_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = s_8;
                                                          if((u_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, u_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(p_14);
                                                        }
                                                      else
                                                        {
                                                          t = o_14;
                                                          t = r_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_8 = ATgetArgument(t, 0);
                                                        x_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_14 = t;
                                                          int r_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                              t = a_0(t);
                                                              d_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_8, d_26);
                                                              t = a_0(t);
                                                              LocalPopChoice(r_14);
                                                            }
                                                          else
                                                            {
                                                              t = q_14;
                                                              t = r_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = r_9;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = e_9;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_8;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm s_14 = t;
                                        int t_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_o_6;
                                            t = a_0(t);
                                            LocalPopChoice(t_14);
                                          }
                                        else
                                          {
                                            t = s_14;
                                            t = r_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            u_8 = ATgetArgument(t, 0);
                                            x_8 = ATgetArgument(t, 1);
                                            {
                                              ATerm u_14 = t;
                                              int v_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm o_26 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                  t = a_0(t);
                                                  o_26 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, o_26);
                                                  t = a_0(t);
                                                  LocalPopChoice(v_14);
                                                }
                                              else
                                                {
                                                  t = u_14;
                                                  t = r_9;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                u_8 = ATgetArgument(t, 0);
                                                {
                                                  ATerm w_14 = t;
                                                  int x_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = s_8;
                                                      if((u_8 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, u_8);
                                                      t = a_0(t);
                                                      LocalPopChoice(x_14);
                                                    }
                                                  else
                                                    {
                                                      t = w_14;
                                                      t = r_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    u_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm y_14 = t;
                                                      int a_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = s_8;
                                                          if((u_8 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, u_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(a_15);
                                                        }
                                                      else
                                                        {
                                                          t = y_14;
                                                          t = r_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_8 = ATgetArgument(t, 0);
                                                        x_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_15 = t;
                                                          int d_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm e_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                              t = a_0(t);
                                                              e_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_8, e_27);
                                                              t = a_0(t);
                                                              LocalPopChoice(d_15);
                                                            }
                                                          else
                                                            {
                                                              t = b_15;
                                                              t = r_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = r_9;
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
                                s_8 = ATgetArgument(t, 0);
                                t = s_8;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    r_8 = ATgetArgument(t, 0);
                                    t = e_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm e_15 = t;
                                            int f_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_6;
                                                t = a_0(t);
                                                LocalPopChoice(f_15);
                                              }
                                            else
                                              {
                                                t = e_15;
                                                t = r_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                u_8 = ATgetArgument(t, 0);
                                                x_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm h_15 = t;
                                                  int k_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_27 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                      t = a_0(t);
                                                      p_27 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, p_27);
                                                      t = a_0(t);
                                                      LocalPopChoice(k_15);
                                                    }
                                                  else
                                                    {
                                                      t = h_15;
                                                      t = r_9;
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
                                                        ATerm n_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(m_15);
                                                    {
                                                      ATerm u_15 = t;
                                                      int z_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(z_15);
                                                        }
                                                      else
                                                        {
                                                          t = u_15;
                                                          t = r_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = l_15;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        u_8 = ATgetArgument(t, 0);
                                                        t = u_8;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            m_8 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm a_16 = t;
                                                              int c_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm u_27 = NULL;
                                                                  t = r_8;
                                                                  if((m_8 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, m_8);
                                                                  t = a_0(t);
                                                                  u_27 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, u_27);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(c_16);
                                                                }
                                                              else
                                                                {
                                                                  t = a_16;
                                                                  t = r_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = r_9;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            u_8 = ATgetArgument(t, 0);
                                                            x_8 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm d_16 = t;
                                                              int e_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_28 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                                  t = a_0(t);
                                                                  y_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, u_8, y_28);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(e_16);
                                                                }
                                                              else
                                                                {
                                                                  t = d_16;
                                                                  t = r_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = r_9;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = e_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm g_16 = t;
                                            int i_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_6;
                                                t = a_0(t);
                                                LocalPopChoice(i_16);
                                              }
                                            else
                                              {
                                                t = g_16;
                                                t = r_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                u_8 = ATgetArgument(t, 0);
                                                x_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm k_16 = t;
                                                  int m_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm f_30 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                      t = a_0(t);
                                                      f_30 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, f_30);
                                                      t = a_0(t);
                                                      LocalPopChoice(m_16);
                                                    }
                                                  else
                                                    {
                                                      t = k_16;
                                                      t = r_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm n_16 = t;
                                                int o_16 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm q_16 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(o_16);
                                                    {
                                                      ATerm r_16 = t;
                                                      int s_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(s_16);
                                                        }
                                                      else
                                                        {
                                                          t = r_16;
                                                          t = r_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = n_16;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_8 = ATgetArgument(t, 0);
                                                        x_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_16 = t;
                                                          int x_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                              t = a_0(t);
                                                              d_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_8, d_31);
                                                              t = a_0(t);
                                                              LocalPopChoice(x_16);
                                                            }
                                                          else
                                                            {
                                                              t = t_16;
                                                              t = r_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = r_9;
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
                                    s_8 = ATgetArgument(t, 0);
                                    t_8 = ATgetArgument(t, 1);
                                    k_8 = ATgetArgument(t, 2);
                                    t = e_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_8;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm y_16 = t;
                                            int z_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_o_6;
                                                t = a_0(t);
                                                LocalPopChoice(z_16);
                                              }
                                            else
                                              {
                                                t = y_16;
                                                t = r_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                u_8 = ATgetArgument(t, 0);
                                                x_8 = ATgetArgument(t, 1);
                                                {
                                                  ATerm a_17 = t;
                                                  int b_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm z_31 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                      t = a_0(t);
                                                      z_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, z_31);
                                                      t = a_0(t);
                                                      LocalPopChoice(b_17);
                                                    }
                                                  else
                                                    {
                                                      t = a_17;
                                                      t = r_9;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm e_17 = t;
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
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, s_8, t_8, k_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(i_17);
                                                        }
                                                      else
                                                        {
                                                          t = h_17;
                                                          t = r_9;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = e_17;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_8 = ATgetArgument(t, 0);
                                                        x_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_17 = t;
                                                          int k_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm l_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                              t = a_0(t);
                                                              l_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_8, l_32);
                                                              t = a_0(t);
                                                              LocalPopChoice(k_17);
                                                            }
                                                          else
                                                            {
                                                              t = j_17;
                                                              t = r_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = r_9;
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
                                        s_8 = ATgetArgument(t, 0);
                                        t_8 = ATgetArgument(t, 1);
                                        t = e_9;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = z_8;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm m_17 = t;
                                                int n_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_o_6;
                                                    t = a_0(t);
                                                    LocalPopChoice(n_17);
                                                  }
                                                else
                                                  {
                                                    t = m_17;
                                                    {
                                                      ATerm o_17 = t;
                                                      int q_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm h_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_9, t_8);
                                                          t = a_0(t);
                                                          h_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, s_8, h_33);
                                                          t = a_0(t);
                                                          LocalPopChoice(q_17);
                                                        }
                                                      else
                                                        {
                                                          t = o_17;
                                                          t = r_9;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    u_8 = ATgetArgument(t, 0);
                                                    x_8 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm r_17 = t;
                                                      int s_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm t_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                          t = a_0(t);
                                                          t_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, t_33);
                                                          t = a_0(t);
                                                          LocalPopChoice(s_17);
                                                        }
                                                      else
                                                        {
                                                          t = r_17;
                                                          {
                                                            ATerm t_17 = t;
                                                            int u_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm j_34 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, e_9, t_8);
                                                                t = a_0(t);
                                                                j_34 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, s_8, j_34);
                                                                t = a_0(t);
                                                                LocalPopChoice(u_17);
                                                              }
                                                            else
                                                              {
                                                                t = t_17;
                                                                t = r_9;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        u_8 = ATgetArgument(t, 0);
                                                        x_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_17 = t;
                                                          int x_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, e_9, t_8);
                                                              t = a_0(t);
                                                              t_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, s_8, t_34);
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
                                                                    ATerm d_35 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                                    t = a_0(t);
                                                                    d_35 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, u_8, d_35);
                                                                    t = a_0(t);
                                                                    LocalPopChoice(z_17);
                                                                  }
                                                                else
                                                                  {
                                                                    t = y_17;
                                                                    t = r_9;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm a_18 = t;
                                                        int b_18 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm r_35 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, e_9, t_8);
                                                            t = a_0(t);
                                                            r_35 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, s_8, r_35);
                                                            t = a_0(t);
                                                            LocalPopChoice(b_18);
                                                          }
                                                        else
                                                          {
                                                            t = a_18;
                                                            t = r_9;
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
                                            s_8 = ATgetArgument(t, 0);
                                            t_8 = ATgetArgument(t, 1);
                                            t = e_9;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = z_8;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm d_18 = t;
                                                    int e_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_o_6;
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
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, e_9, t_8);
                                                              t = a_0(t);
                                                              k_36 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, s_8, k_36);
                                                              t = a_0(t);
                                                              LocalPopChoice(g_18);
                                                            }
                                                          else
                                                            {
                                                              t = f_18;
                                                              t = r_9;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        u_8 = ATgetArgument(t, 0);
                                                        x_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_18 = t;
                                                          int i_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_36 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                              t = a_0(t);
                                                              r_36 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, r_36);
                                                              t = a_0(t);
                                                              LocalPopChoice(i_18);
                                                            }
                                                          else
                                                            {
                                                              t = h_18;
                                                              {
                                                                ATerm j_18 = t;
                                                                int k_18 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm y_36 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, e_9, t_8);
                                                                    t = a_0(t);
                                                                    y_36 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, s_8, y_36);
                                                                    t = a_0(t);
                                                                    LocalPopChoice(k_18);
                                                                  }
                                                                else
                                                                  {
                                                                    t = j_18;
                                                                    t = r_9;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            u_8 = ATgetArgument(t, 0);
                                                            x_8 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm m_18 = t;
                                                              int n_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm i_37 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_9, t_8);
                                                                  t = a_0(t);
                                                                  i_37 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, s_8, i_37);
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
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                                        t = a_0(t);
                                                                        s_37 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, u_8, s_37);
                                                                        t = a_0(t);
                                                                        LocalPopChoice(p_18);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = o_18;
                                                                        t = r_9;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm q_18 = t;
                                                            int r_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm e_38 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, e_9, t_8);
                                                                t = a_0(t);
                                                                e_38 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, s_8, e_38);
                                                                t = a_0(t);
                                                                LocalPopChoice(r_18);
                                                              }
                                                            else
                                                              {
                                                                t = q_18;
                                                                t = r_9;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = e_9;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = z_8;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm s_18 = t;
                                                    int t_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_o_6;
                                                        t = a_0(t);
                                                        LocalPopChoice(t_18);
                                                      }
                                                    else
                                                      {
                                                        t = s_18;
                                                        t = r_9;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        u_8 = ATgetArgument(t, 0);
                                                        x_8 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm v_18 = t;
                                                          int w_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_38 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                              t = a_0(t);
                                                              p_38 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, p_38);
                                                              t = a_0(t);
                                                              LocalPopChoice(w_18);
                                                            }
                                                          else
                                                            {
                                                              t = v_18;
                                                              t = r_9;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            u_8 = ATgetArgument(t, 0);
                                                            x_8 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm x_18 = t;
                                                              int y_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm c_39 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_8, z_8);
                                                                  t = a_0(t);
                                                                  c_39 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, u_8, c_39);
                                                                  t = a_0(t);
                                                                  LocalPopChoice(y_18);
                                                                }
                                                              else
                                                                {
                                                                  t = x_18;
                                                                  t = r_9;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = r_9;
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
                    e_9 = ATgetArgument(t, 0);
                    z_8 = ATgetArgument(t, 1);
                    t = z_8;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = e_9;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm z_18 = t;
                            int a_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_g_6;
                                t = a_0(t);
                                LocalPopChoice(a_19);
                              }
                            else
                              {
                                t = z_18;
                                t = e_9;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = z_8;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    u_8 = ATgetArgument(t, 0);
                                    x_8 = ATgetArgument(t, 1);
                                    t = e_9;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        u_8 = ATgetArgument(t, 0);
                                        t = e_9;
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
                        t = e_9;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm b_19 = t;
                            int c_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_g_6;
                                t = a_0(t);
                                LocalPopChoice(c_19);
                              }
                            else
                              {
                                t = b_19;
                                {
                                  ATerm d_19 = t;
                                  int g_19 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = z_8;
                                      if((e_9 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(g_19);
                                    }
                                  else
                                    {
                                      t = d_19;
                                      t = r_9;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = z_8;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    u_8 = ATgetArgument(t, 0);
                                    x_8 = ATgetArgument(t, 1);
                                    {
                                      ATerm h_19 = t;
                                      int i_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm r_41 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, x_8, z_8);
                                          t = a_0(t);
                                          r_41 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, u_8, r_41);
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
                                                t = z_8;
                                                if((e_9 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(k_19);
                                              }
                                            else
                                              {
                                                t = j_19;
                                                t = r_9;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        u_8 = ATgetArgument(t, 0);
                                        {
                                          ATerm l_19 = t;
                                          int m_19 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = z_8;
                                              if((e_9 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(m_19);
                                            }
                                          else
                                            {
                                              t = l_19;
                                              {
                                                ATerm n_19 = t;
                                                int p_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = u_8;
                                                    t = topdown_1_0(s_0, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, u_8);
                                                    t = bottomup_1_0(a_0, t);
                                                    LocalPopChoice(p_19);
                                                  }
                                                else
                                                  {
                                                    t = n_19;
                                                    t = r_9;
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
                                            t = z_8;
                                            if((e_9 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(r_19);
                                          }
                                        else
                                          {
                                            t = q_19;
                                            t = r_9;
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
                        e_9 = ATgetArgument(t, 0);
                        z_8 = ATgetArgument(t, 1);
                        t = z_8;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = e_9;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm s_19 = t;
                                int t_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_g_6;
                                    t = a_0(t);
                                    LocalPopChoice(t_19);
                                  }
                                else
                                  {
                                    t = s_19;
                                    t = z_8;
                                  }
                              }
                            else
                              {
                                ATerm u_19 = t;
                                int v_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_g_6;
                                    t = a_0(t);
                                    LocalPopChoice(v_19);
                                  }
                                else
                                  {
                                    t = u_19;
                                    t = r_9;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = e_9;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm w_19 = t;
                                    int x_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_o_6;
                                        t = a_0(t);
                                        LocalPopChoice(x_19);
                                      }
                                    else
                                      {
                                        t = w_19;
                                        t = z_8;
                                      }
                                  }
                                else
                                  {
                                    ATerm y_19 = t;
                                    int z_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_o_6;
                                        t = a_0(t);
                                        LocalPopChoice(z_19);
                                      }
                                    else
                                      {
                                        t = y_19;
                                        t = r_9;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    s_8 = ATgetArgument(t, 0);
                                    t_8 = ATgetArgument(t, 1);
                                    t = e_9;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = z_8;
                                      }
                                    else
                                      {
                                        ATerm a_20 = t;
                                        int c_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm f_44 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, e_9, s_8);
                                            t = conc_0_0(t);
                                            f_44 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, f_44, t_8);
                                            t = bottomup_1_0(a_0, t);
                                            LocalPopChoice(c_20);
                                          }
                                        else
                                          {
                                            t = a_20;
                                            t = r_9;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = e_9;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = z_8;
                                      }
                                    else
                                      {
                                        t = r_9;
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
                                ATerm f_20 = ATgetArgument(t, 0);
                                z_8 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(e_20);
                            t = z_8;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm g_20 = t;
                                int i_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_g_6;
                                    t = a_0(t);
                                    LocalPopChoice(i_20);
                                  }
                                else
                                  {
                                    t = g_20;
                                    t = r_9;
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
                                        t = term_o_6;
                                        t = a_0(t);
                                        LocalPopChoice(k_20);
                                      }
                                    else
                                      {
                                        t = j_20;
                                        t = r_9;
                                      }
                                  }
                                else
                                  {
                                    t = r_9;
                                  }
                              }
                          }
                        else
                          {
                            t = d_20;
                            if(match_cons(t, sym_All_1))
                              {
                                e_9 = ATgetArgument(t, 0);
                                t = e_9;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm l_20 = t;
                                    int m_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_g_6;
                                        t = a_0(t);
                                        LocalPopChoice(m_20);
                                      }
                                    else
                                      {
                                        t = l_20;
                                        t = r_9;
                                      }
                                  }
                                else
                                  {
                                    t = r_9;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    e_9 = ATgetArgument(t, 0);
                                    t = e_9;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm n_20 = t;
                                        int o_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_g_6;
                                            t = a_0(t);
                                            LocalPopChoice(o_20);
                                          }
                                        else
                                          {
                                            t = n_20;
                                            {
                                              ATerm q_20 = t;
                                              int r_20 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL;
                                                  t = r_9;
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
                                                  t = e_9;
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
                                                  t = r_9;
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
                                                t = term_o_6;
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
                                                      ATerm j_45 = NULL,k_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL;
                                                      t = r_9;
                                                      t = new_0_0(t);
                                                      j_45 = t;
                                                      t = bottomup_1_0(a_0, t);
                                                      y_45 = t;
                                                      t = (ATerm) ATempty;
                                                      t = a_0(t);
                                                      z_45 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(z_45), y_45);
                                                      t = a_0(t);
                                                      k_45 = t;
                                                      t = j_45;
                                                      t = bottomup_1_0(a_0, t);
                                                      x_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, x_45);
                                                      t = a_0(t);
                                                      u_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, u_45);
                                                      t = a_0(t);
                                                      o_45 = t;
                                                      t = e_9;
                                                      t = bottomup_1_0(a_0, t);
                                                      q_45 = t;
                                                      t = j_45;
                                                      t = bottomup_1_0(a_0, t);
                                                      t_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, t_45);
                                                      t = a_0(t);
                                                      s_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, s_45);
                                                      t = a_0(t);
                                                      r_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_45, r_45);
                                                      t = a_0(t);
                                                      p_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_45, p_45);
                                                      t = a_0(t);
                                                      n_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, k_45, n_45);
                                                      t = a_0(t);
                                                      LocalPopChoice(v_20);
                                                    }
                                                  else
                                                    {
                                                      t = u_20;
                                                      t = r_9;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                u_8 = ATgetArgument(t, 0);
                                                x_8 = ATgetArgument(t, 1);
                                                t = x_8;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    t_5 = ATgetArgument(t, 0);
                                                    u_7 = ATgetArgument(t, 1);
                                                    t = t_5;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        r_7 = ATgetArgument(t, 0);
                                                        t = u_8;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            m_8 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm w_20 = t;
                                                              int x_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, r_7);
                                                                  t = a_0(t);
                                                                  h_46 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_46, u_7);
                                                                  t = a_0(t);
                                                                  g_46 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_8, g_46);
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
                                                                        t = r_9;
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
                                                                        t = e_9;
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
                                                                        t = r_9;
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
                                                                ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,i_47 = NULL,l_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL;
                                                                t = r_9;
                                                                t = new_0_0(t);
                                                                y_46 = t;
                                                                t = bottomup_1_0(a_0, t);
                                                                p_47 = t;
                                                                t = (ATerm) ATempty;
                                                                t = a_0(t);
                                                                q_47 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(q_47), p_47);
                                                                t = a_0(t);
                                                                z_46 = t;
                                                                t = y_46;
                                                                t = bottomup_1_0(a_0, t);
                                                                o_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, o_47);
                                                                t = a_0(t);
                                                                n_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, n_47);
                                                                t = a_0(t);
                                                                b_47 = t;
                                                                t = e_9;
                                                                t = bottomup_1_0(a_0, t);
                                                                d_47 = t;
                                                                t = y_46;
                                                                t = bottomup_1_0(a_0, t);
                                                                l_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, l_47);
                                                                t = a_0(t);
                                                                i_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, i_47);
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
                                                                t = r_9;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = u_8;
                                                        {
                                                          ATerm c_21 = t;
                                                          int d_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL;
                                                              t = r_9;
                                                              t = new_0_0(t);
                                                              u_47 = t;
                                                              t = bottomup_1_0(a_0, t);
                                                              f_48 = t;
                                                              t = (ATerm) ATempty;
                                                              t = a_0(t);
                                                              g_48 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(g_48), f_48);
                                                              t = a_0(t);
                                                              v_47 = t;
                                                              t = u_47;
                                                              t = bottomup_1_0(a_0, t);
                                                              e_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, e_48);
                                                              t = a_0(t);
                                                              d_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, d_48);
                                                              t = a_0(t);
                                                              x_47 = t;
                                                              t = e_9;
                                                              t = bottomup_1_0(a_0, t);
                                                              z_47 = t;
                                                              t = u_47;
                                                              t = bottomup_1_0(a_0, t);
                                                              c_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, c_48);
                                                              t = a_0(t);
                                                              b_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, b_48);
                                                              t = a_0(t);
                                                              a_48 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_47, a_48);
                                                              t = a_0(t);
                                                              y_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_47, y_47);
                                                              t = a_0(t);
                                                              w_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_47, w_47);
                                                              t = a_0(t);
                                                              LocalPopChoice(d_21);
                                                            }
                                                          else
                                                            {
                                                              t = c_21;
                                                              t = r_9;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = u_8;
                                                    {
                                                      ATerm e_21 = t;
                                                      int f_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL;
                                                          t = r_9;
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
                                                          t = e_9;
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
                                                          t = r_9;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    u_8 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm g_21 = t;
                                                      int i_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, u_8);
                                                          t = a_0(t);
                                                          LocalPopChoice(i_21);
                                                        }
                                                      else
                                                        {
                                                          t = g_21;
                                                          {
                                                            ATerm j_21 = t;
                                                            int k_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL;
                                                                t = r_9;
                                                                t = new_0_0(t);
                                                                a_49 = t;
                                                                t = bottomup_1_0(a_0, t);
                                                                l_49 = t;
                                                                t = (ATerm) ATempty;
                                                                t = a_0(t);
                                                                m_49 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(m_49), l_49);
                                                                t = a_0(t);
                                                                b_49 = t;
                                                                t = a_49;
                                                                t = bottomup_1_0(a_0, t);
                                                                k_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, k_49);
                                                                t = a_0(t);
                                                                j_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, j_49);
                                                                t = a_0(t);
                                                                d_49 = t;
                                                                t = e_9;
                                                                t = bottomup_1_0(a_0, t);
                                                                f_49 = t;
                                                                t = a_49;
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
                                                                t = r_9;
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
                                                        t = r_9;
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
                                                        t = e_9;
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
                                                        t = r_9;
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
                                        e_9 = ATgetArgument(t, 0);
                                        t = e_9;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm n_21 = t;
                                            int o_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_g_6;
                                                t = a_0(t);
                                                LocalPopChoice(o_21);
                                              }
                                            else
                                              {
                                                t = n_21;
                                                t = r_9;
                                              }
                                          }
                                        else
                                          {
                                            t = r_9;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            e_9 = ATgetArgument(t, 0);
                                            t = e_9;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm q_21 = t;
                                                int r_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_o_6;
                                                    t = a_0(t);
                                                    LocalPopChoice(r_21);
                                                  }
                                                else
                                                  {
                                                    t = q_21;
                                                    t = r_9;
                                                  }
                                              }
                                            else
                                              {
                                                t = r_9;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                e_9 = ATgetArgument(t, 0);
                                                t = e_9;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm s_21 = t;
                                                    int t_21 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_o_6;
                                                        t = a_0(t);
                                                        LocalPopChoice(t_21);
                                                      }
                                                    else
                                                      {
                                                        t = s_21;
                                                        t = r_9;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = r_9;
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
                                                        ATerm w_21 = ATgetArgument(t, 0);
                                                        z_8 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(v_21);
                                                    t = z_8;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm y_21 = t;
                                                        int z_21 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_o_6;
                                                            t = a_0(t);
                                                            LocalPopChoice(z_21);
                                                          }
                                                        else
                                                          {
                                                            t = y_21;
                                                            t = r_9;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = r_9;
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
                                                              z_8 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(b_22);
                                                          {
                                                            ATerm d_22 = t;
                                                            int e_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = z_8;
                                                                t = fetch_1_0(u_0, t);
                                                                t = term_o_6;
                                                                t = bottomup_1_0(a_0, t);
                                                                LocalPopChoice(e_22);
                                                              }
                                                            else
                                                              {
                                                                t = d_22;
                                                                t = r_9;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = a_22;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              e_9 = ATgetArgument(t, 0);
                                                              z_8 = ATgetArgument(t, 1);
                                                              t = z_8;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = e_9;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = z_8;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          u_8 = ATgetArgument(t, 0);
                                                                          x_8 = ATgetArgument(t, 1);
                                                                          t = e_9;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = e_9;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = e_9;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = z_8;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          u_8 = ATgetArgument(t, 0);
                                                                          x_8 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm f_22 = t;
                                                                            int g_22 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm k_51 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, x_8, z_8);
                                                                                t = a_0(t);
                                                                                k_51 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, u_8, k_51);
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
                                                                                      t = z_8;
                                                                                      if((e_9 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(i_22);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = h_22;
                                                                                      t = r_9;
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
                                                                              t = z_8;
                                                                              if((e_9 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(k_22);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = j_22;
                                                                              t = r_9;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  e_9 = ATgetArgument(t, 0);
                                                                  z_8 = ATgetArgument(t, 1);
                                                                  r_5 = ATgetArgument(t, 2);
                                                                  t = r_5;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm l_22 = t;
                                                                      int m_22 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_9, z_8);
                                                                          t = a_0(t);
                                                                          LocalPopChoice(m_22);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = l_22;
                                                                          t = r_9;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = r_9;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      e_9 = ATgetArgument(t, 0);
                                                                      z_8 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm n_22 = t;
                                                                        int p_22 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, e_9, z_8);
                                                                            t = a_0(t);
                                                                            LocalPopChoice(p_22);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = n_22;
                                                                            t = r_9;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          e_9 = ATgetArgument(t, 0);
                                                                          t = e_9;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              u_8 = ATgetFirst((ATermList) t);
                                                                              x_8 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm q_22 = t;
                                                                                int r_22 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm z_51 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, x_8);
                                                                                    t = a_0(t);
                                                                                    z_51 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, u_8, z_51);
                                                                                    t = a_0(t);
                                                                                    LocalPopChoice(r_22);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_22;
                                                                                    t = r_9;
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
                                                                                      t = term_o_6;
                                                                                      t = a_0(t);
                                                                                      LocalPopChoice(t_22);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = s_22;
                                                                                      t = r_9;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = r_9;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              e_9 = ATgetArgument(t, 0);
                                                                              t = e_9;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  u_8 = ATgetFirst((ATermList) t);
                                                                                  x_8 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm u_22 = t;
                                                                                    int w_22 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm f_52 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, x_8);
                                                                                        t = a_0(t);
                                                                                        f_52 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, u_8, f_52);
                                                                                        t = a_0(t);
                                                                                        LocalPopChoice(w_22);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = u_22;
                                                                                        t = r_9;
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
                                                                                          t = term_o_6;
                                                                                          t = a_0(t);
                                                                                          LocalPopChoice(y_22);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = x_22;
                                                                                          t = r_9;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = r_9;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  e_9 = ATgetArgument(t, 0);
                                                                                  t = e_9;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      u_8 = ATgetFirst((ATermList) t);
                                                                                      x_8 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm z_22 = t;
                                                                                        int a_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm n_52 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, x_8);
                                                                                            t = a_0(t);
                                                                                            n_52 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, u_8, n_52);
                                                                                            t = a_0(t);
                                                                                            LocalPopChoice(a_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = z_22;
                                                                                            t = r_9;
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
                                                                                              t = term_g_6;
                                                                                              t = a_0(t);
                                                                                              LocalPopChoice(c_23);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = b_23;
                                                                                              t = r_9;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = r_9;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      e_9 = ATgetArgument(t, 0);
                                                                                      z_8 = ATgetArgument(t, 1);
                                                                                      r_5 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm d_23 = t;
                                                                                        int e_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL;
                                                                                            t = term_f_23;
                                                                                            t = bottomup_1_0(a_0, t);
                                                                                            a_53 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = a_0(t);
                                                                                            d_53 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(d_53), r_5);
                                                                                            t = a_0(t);
                                                                                            c_53 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(c_53), e_9);
                                                                                            t = a_0(t);
                                                                                            b_53 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, a_53, b_53);
                                                                                            t = a_0(t);
                                                                                            z_52 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, z_8, z_52);
                                                                                            t = a_0(t);
                                                                                            LocalPopChoice(e_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = d_23;
                                                                                            t = r_9;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          e_9 = ATgetArgument(t, 0);
                                                                                          z_8 = ATgetArgument(t, 1);
                                                                                          r_5 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm g_23 = t;
                                                                                            int h_23 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, z_8);
                                                                                                t = a_0(t);
                                                                                                k_53 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, r_5);
                                                                                                t = a_0(t);
                                                                                                n_53 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = a_0(t);
                                                                                                o_53 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(o_53), n_53);
                                                                                                t = a_0(t);
                                                                                                m_53 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(m_53), e_9);
                                                                                                t = a_0(t);
                                                                                                l_53 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(l_53), k_53);
                                                                                                t = a_0(t);
                                                                                                j_53 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, j_53);
                                                                                                t = a_0(t);
                                                                                                LocalPopChoice(h_23);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = g_23;
                                                                                                t = r_9;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              e_9 = ATgetArgument(t, 0);
                                                                                              z_8 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm i_23 = t;
                                                                                                int j_23 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm s_53 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, z_8);
                                                                                                    t = a_0(t);
                                                                                                    s_53 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, e_9, s_53);
                                                                                                    t = a_0(t);
                                                                                                    LocalPopChoice(j_23);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = i_23;
                                                                                                    t = r_9;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  e_9 = ATgetArgument(t, 0);
                                                                                                  z_8 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm k_23 = t;
                                                                                                    int m_23 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm w_53 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, e_9);
                                                                                                        t = a_0(t);
                                                                                                        w_53 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_53, z_8);
                                                                                                        t = a_0(t);
                                                                                                        LocalPopChoice(m_23);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = k_23;
                                                                                                        t = r_9;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      e_9 = ATgetArgument(t, 0);
                                                                                                      z_8 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm n_23 = t;
                                                                                                        int o_23 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm c_54 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, z_8);
                                                                                                            t = a_0(t);
                                                                                                            c_54 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, c_54, e_9);
                                                                                                            t = a_0(t);
                                                                                                            LocalPopChoice(o_23);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = n_23;
                                                                                                            t = r_9;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          e_9 = ATgetArgument(t, 0);
                                                                                                          z_8 = ATgetArgument(t, 1);
                                                                                                          t = z_8;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              s_8 = ATgetArgument(t, 0);
                                                                                                              t_8 = ATgetArgument(t, 1);
                                                                                                              t = e_9;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = z_8;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm p_23 = t;
                                                                                                                  int q_23 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm n_54 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, e_9, s_8);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      n_54 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, n_54, t_8);
                                                                                                                      t = bottomup_1_0(a_0, t);
                                                                                                                      LocalPopChoice(q_23);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = p_23;
                                                                                                                      t = r_9;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  s_8 = ATgetArgument(t, 0);
                                                                                                                  t_8 = ATgetArgument(t, 1);
                                                                                                                  k_8 = ATgetArgument(t, 2);
                                                                                                                  t = k_8;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = t_8;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = s_8;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              r_8 = ATgetArgument(t, 0);
                                                                                                                              t = e_9;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = z_8;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      u_8 = ATgetFirst((ATermList) t);
                                                                                                                                      x_8 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = x_8;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = u_8;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              m_8 = ATgetArgument(t, 0);
                                                                                                                                              a_8 = ATgetArgument(t, 1);
                                                                                                                                              v_7 = ATgetArgument(t, 2);
                                                                                                                                              w_7 = ATgetArgument(t, 3);
                                                                                                                                              t = v_7;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = a_8;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm r_23 = t;
                                                                                                                                                      int w_23 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = r_8;
                                                                                                                                                          if((m_8 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = w_7;
                                                                                                                                                          {
                                                                                                                                                            ATerm x_23 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm v_0 (ATerm t);
                                                                                                                                                                static ATerm v_0 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm z_23 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(z_23, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((m_8 != ATgetArgument(z_23, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(z_23, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm a_24 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(a_24) != AT_LIST) || !(ATisEmpty(a_24))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm b_24 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(b_24) != AT_LIST) || !(ATisEmpty(b_24))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  return(t);
                                                                                                                                                                }
                                                                                                                                                                t = oncetd_1_0(v_0, t);
                                                                                                                                                                PopChoice();
                                                                                                                                                                _fail(t);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = x_23;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = w_7;
                                                                                                                                                          t = bottomup_1_0(a_0, t);
                                                                                                                                                          LocalPopChoice(w_23);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = r_23;
                                                                                                                                                          t = r_9;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = r_9;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = r_9;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = r_9;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = r_9;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = r_9;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = e_9;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = z_8;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = r_9;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = e_9;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = z_8;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = r_9;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = e_9;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = z_8;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = r_9;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = e_9;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = z_8;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = r_9;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              e_9 = ATgetArgument(t, 0);
                                                                                                              z_8 = ATgetArgument(t, 1);
                                                                                                              t = e_9;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = z_8;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = r_9;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = r_9;
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
ATerm topdown_1_0 (ATerm n_129 (ATerm), ATerm t)
{
  static ATerm w_0 (ATerm t);
  static ATerm w_0 (ATerm t)
  {
    t = topdown_1_0(n_129, t);
    return(t);
  }
  t = n_129(t);
  t = SRTS_all(w_0, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm c_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm g_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(e_24);
      {
        ATerm w_55 = NULL,x_55 = NULL;
        w_55 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm h_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        x_55 = t;
        t = SSLgetAnnotations(w_55);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_24 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) i_24) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_24 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(j_24) != AT_LIST) || !(ATisEmpty(j_24))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_55;
      }
    }
  else
    {
      t = c_24;
      {
        ATerm k_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm m_24 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) m_24) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm n_24 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(l_24);
            _fail(t);
          }
        else
          {
            t = k_24;
          }
      }
    }
  return(t);
}
static ATerm f_5 (ATerm n_101, ATerm m_101, ATerm t)
{
  t = n_101;
  t = topdown_1_0(x_0, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, n_101);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL,r_56 = NULL;
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
          r_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_56;
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
          r_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_56;
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
  ATerm z_56 = NULL,a_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      c_57 = ATgetArgument(t, 0);
      e_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_57;
  if(match_cons(t, sym_Build_1))
    {
      d_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_57;
  if(match_cons(t, sym_Seq_2))
    {
      f_57 = ATgetArgument(t, 0);
      a_57 = ATgetArgument(t, 1);
      t = f_57;
      if(match_cons(t, sym_Match_1))
        {
          z_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_56;
      if((d_57 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_57), a_57);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          f_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_57;
      if((d_57 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, d_57);
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
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL,l_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      l_58 = ATgetArgument(t, 0);
      n_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_58;
  if(match_cons(t, sym_Build_1))
    {
      ATerm o_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_58;
  if(match_cons(t, sym_Seq_2))
    {
      o_58 = ATgetArgument(t, 0);
      p_58 = ATgetArgument(t, 1);
      t = o_58;
      if(match_cons(t, sym_PrimT_3))
        {
          f_58 = ATgetArgument(t, 0);
          g_58 = ATgetArgument(t, 1);
          h_58 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, f_58, g_58, h_58), p_58);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          o_58 = ATgetArgument(t, 0);
          p_58 = ATgetArgument(t, 1);
          q_58 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, o_58, p_58, q_58);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,f_59 = NULL,h_59 = NULL,i_59 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      f_59 = ATgetArgument(t, 0);
      h_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_59;
  if(match_cons(t, sym_Build_1))
    {
      ATerm p_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_59;
  if(match_cons(t, sym_Seq_2))
    {
      i_59 = ATgetArgument(t, 0);
      d_59 = ATgetArgument(t, 1);
      t = i_59;
      if(match_cons(t, sym_Build_1))
        {
          c_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_59), d_59);
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
static ATerm y_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_24 = ATgetArgument(t, 0);
      if(((ATgetType(q_24) != AT_LIST) || !(ATisEmpty(q_24))))
        _fail(t);
      {
        ATerm r_24 = ATgetArgument(t, 1);
        if(((ATgetType(r_24) != AT_LIST) || !(ATisEmpty(r_24))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_24 = ATgetArgument(t, 0);
      if(((ATgetType(s_24) == AT_LIST) && !(ATisEmpty(s_24))))
        {
          k_60 = ATgetFirst((ATermList) s_24);
          l_60 = (ATerm) ATgetNext((ATermList) s_24);
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
static ATerm a_1 (ATerm t)
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
static ATerm b_1 (ATerm t)
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
static ATerm c_1 (ATerm t)
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
static ATerm d_1 (ATerm t)
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
static ATerm e_1 (ATerm t)
{
  ATerm h_61 = NULL,l_61 = NULL;
  if(match_cons(t, sym__2))
    {
      h_61 = ATgetArgument(t, 0);
      l_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_61), h_61);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL;
  if(match_cons(t, sym__2))
    {
      m_61 = ATgetArgument(t, 0);
      n_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_61), (ATerm) ATmakeAppl(sym_Match_1, n_61));
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
        t = genzip_4_0(y_0, z_0, a_1, b_1, t);
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
      t = genzip_4_0(c_1, d_1, e_1, f_1, t);
      v_60 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_60), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, z_59, a_60)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm j_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL;
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
            j_62 = ATgetArgument(t, 0);
            {
              ATerm e_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_62, j_62);
        {
          ATerm f_25 = t;
          if((PushChoice() == 0))
            {
              ATerm l_1 = NULL;
              if(match_cons(t, sym__2))
                {
                  l_1 = ATgetArgument(t, 0);
                  if((l_1 != ATgetArgument(t, 1)))
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
        t = term_o_6;
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
              ATerm u_1 = NULL;
              if(match_cons(t, sym__2))
                {
                  u_1 = ATgetArgument(t, 0);
                  if((u_1 != ATgetArgument(t, 1)))
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
        t = term_o_6;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm r_130 (ATerm), ATerm t)
{
  static ATerm x_62 (ATerm t);
  static ATerm x_62 (ATerm t)
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_130(t);
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
            static ATerm g_1 (ATerm t);
            static ATerm g_1 (ATerm t)
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
            t = oncetd_1_0(g_1, t);
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
              t = term_o_6;
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
                  t = term_o_6;
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
                      t = term_g_6;
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
static ATerm h_1 (ATerm t)
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
      t = term_o_6;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          u_67 = ATgetArgument(t, 0);
          t = u_67;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_g_6;
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
              t = term_o_6;
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
                  t = term_o_6;
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
                      t = term_o_6;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          u_67 = ATgetArgument(t, 0);
                          t = u_67;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_o_6;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              u_67 = ATgetArgument(t, 0);
                              t = u_67;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_o_6;
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
                                  t = term_o_6;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      u_67 = ATgetArgument(t, 0);
                                      v_67 = ATgetArgument(t, 1);
                                      t = v_67;
                                      t = fetch_1_0(h_1, t);
                                      t = term_o_6;
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
                                                  t = term_o_6;
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
      t = term_g_6;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          b_69 = ATgetArgument(t, 0);
          t = b_69;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_o_6;
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
                  t = term_g_6;
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
                      t = term_g_6;
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
                          t = term_g_6;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              b_69 = ATgetArgument(t, 0);
                              t = b_69;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_g_6;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  b_69 = ATgetArgument(t, 0);
                                  t = b_69;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_g_6;
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
                                  t = term_g_6;
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
                                            ATerm c_26 = t;
                                            int e_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(e_26);
                                              }
                                            else
                                              {
                                                t = c_26;
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
                                                                          ATerm n_26 = t;
                                                                          int p_26 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(p_26);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = n_26;
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
                                                                                          t = f_5(u_69, x_69, t);
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
static ATerm i_1 (ATerm t)
{
  ATerm n_70 = NULL;
  n_70 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_70);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm o_70 = NULL;
  o_70 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_70);
  return(t);
}
static ATerm k_1 (ATerm t)
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
static ATerm m_1 (ATerm t)
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
static ATerm n_1 (ATerm t)
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
static ATerm o_1 (ATerm t)
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
static ATerm p_1 (ATerm t)
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
static ATerm q_1 (ATerm t)
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
static ATerm r_1 (ATerm t)
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
static ATerm u_11 (ATerm o_100, ATerm u_100, ATerm t)
{
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,m_70 = NULL;
  t = u_100;
  t = map_1_0(new_0_0, t);
  f_70 = t;
  t = map_1_0(i_1, t);
  c_70 = t;
  t = new_0_0(t);
  d_70 = t;
  t = u_100;
  t = map_1_0(new_0_0, t);
  g_70 = t;
  t = map_1_0(j_1, t);
  e_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_70, g_70);
  t = genzip_4_0(k_1, m_1, n_1, _id, t);
  m_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_70, u_100);
  t = genzip_4_0(o_1, p_1, q_1, r_1, t);
  h_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_70, g_70);
  t = conc_0_0(t);
  i_70 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, o_100, c_70), (ATerm) ATmakeAppl(sym_Var_1, d_70)));
  t = Mapp2_0_0(t);
  j_70 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, o_100, e_70), (ATerm) ATmakeAppl(sym_Var_1, d_70)));
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
          static ATerm s_1 (ATerm t);
          static ATerm s_1 (ATerm t)
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
          t = pat_td_1_0(s_1, t);
        }
        m_71 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_71), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_d_27, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_71)), not_null(i_71))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_71)))), (ATerm) ATmakeAppl(sym_Build_1, m_71)));
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
                static ATerm t_1 (ATerm t);
                static ATerm t_1 (ATerm t)
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
                t = pat_td_1_0(t_1, t);
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
                  static ATerm v_1 (ATerm t);
                  static ATerm v_1 (ATerm t)
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
                  t = pat_td_1_0(v_1, t);
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
ATerm at_end_1_0 (ATerm s_151 (ATerm), ATerm t)
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
          ATerm l_2 = NULL,o_2 = NULL,v_4 = NULL;
          t = SSLgetAnnotations(p_72);
          l_2 = t;
          t = o_72;
          t = q_72(t);
          o_2 = t;
          t = (ATerm) ATinsert(CheckATermList(o_2), n_72);
          v_4 = t;
          t = SSLsetAnnotations(v_4, l_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_72;
        t = s_151(t);
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
      static ATerm w_1 (ATerm t);
      static ATerm w_1 (ATerm t)
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
      t = at_end_1_0(w_1, t);
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
            static ATerm x_1 (ATerm t);
            static ATerm x_1 (ATerm t)
            {
              t = z_72;
              return(t);
            }
            t = y_72;
            t = at_end_1_0(x_1, t);
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
ATerm genzip_4_0 (ATerm e_134 (ATerm), ATerm f_134 (ATerm), ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm t)
{
  static ATerm k_73 (ATerm t);
  static ATerm k_73 (ATerm t)
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_134(t);
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        {
          ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,y_4 = NULL;
          t = f_134(t);
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
          t = h_134(t);
          h_73 = t;
          t = g_73;
          t = k_73(t);
          i_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_73, i_73);
          y_4 = t;
          t = SSLsetAnnotations(y_4, e_73);
          t = g_134(t);
        }
      }
    return(t);
  }
  t = k_73(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm y_73 = NULL;
  y_73 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_73);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm z_73 = NULL;
  z_73 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_73);
  return(t);
}
static ATerm a_2 (ATerm t)
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
static ATerm b_2 (ATerm t)
{
  ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_27 = ATgetArgument(t, 0);
      if(((ATgetType(o_27) == AT_LIST) && !(ATisEmpty(o_27))))
        {
          a_74 = ATgetFirst((ATermList) o_27);
          b_74 = (ATerm) ATgetNext((ATermList) o_27);
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
static ATerm c_2 (ATerm t)
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
static ATerm d_2 (ATerm t)
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
static ATerm e_2 (ATerm t)
{
  ATerm h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_27 = ATgetArgument(t, 0);
      if(((ATgetType(t_27) == AT_LIST) && !(ATisEmpty(t_27))))
        {
          h_74 = ATgetFirst((ATermList) t_27);
          i_74 = (ATerm) ATgetNext((ATermList) t_27);
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
static ATerm f_2 (ATerm t)
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
static ATerm g_2 (ATerm t)
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
static ATerm y_11 (ATerm z_100, ATerm h_101, ATerm g_101, ATerm t)
{
  ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,x_73 = NULL;
  t = (ATerm) ATinsert(CheckATermList(h_101), g_101);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_73 = ATgetFirst((ATermList) t);
      q_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(y_1, t);
  n_73 = t;
  t = (ATerm) ATinsert(CheckATermList(h_101), g_101);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_73 = ATgetFirst((ATermList) t);
      r_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(z_1, t);
  p_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_73, r_73);
  t = genzip_4_0(a_2, b_2, c_2, _id, t);
  x_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_73, (ATerm) ATinsert(CheckATermList(h_101), g_101));
  t = genzip_4_0(d_2, e_2, f_2, g_2, t);
  s_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_73, r_73);
  t = conc_0_0(t);
  t_73 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, z_100, n_73), (ATerm) ATmakeAppl(sym_Var_1, m_73)));
  t = Mapp2_0_0(t);
  u_73 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, z_100, p_73), (ATerm) ATmakeAppl(sym_Var_1, o_73)));
  t = Bapp_0_0(t);
  v_73 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(t_73), o_73), m_73), (ATerm) ATmakeAppl(sym_Seq_2, u_73, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_73), v_73)));
  return(t);
}
ATerm pat_td_1_0 (ATerm i_127 (ATerm), ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_127(t);
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      {
        ATerm i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL;
        j_77 = t;
        if(match_cons(t, sym_Op_2))
          {
            k_77 = ATgetArgument(t, 0);
            l_77 = ATgetArgument(t, 1);
            {
              ATerm w_2 = NULL,z_2 = NULL,b_5 = NULL;
              t = SSLgetAnnotations(j_77);
              w_2 = t;
              t = l_77;
              {
                static ATerm h_2 (ATerm t);
                static ATerm h_2 (ATerm t)
                {
                  t = pat_td_1_0(i_127, t);
                  return(t);
                }
                t = fetch_1_0(h_2, t);
              }
              z_2 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, k_77, z_2);
              b_5 = t;
              t = SSLsetAnnotations(b_5, w_2);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                k_77 = ATgetArgument(t, 0);
                l_77 = ATgetArgument(t, 1);
                {
                  ATerm z_27 = t;
                  int a_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_3 = NULL,k_3 = NULL,c_5 = NULL;
                      t = SSLgetAnnotations(j_77);
                      h_3 = t;
                      t = l_77;
                      t = pat_td_1_0(i_127, t);
                      k_3 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, k_77, k_3);
                      c_5 = t;
                      t = SSLsetAnnotations(c_5, h_3);
                      LocalPopChoice(a_28);
                    }
                  else
                    {
                      t = z_27;
                      {
                        ATerm s_3 = NULL,v_3 = NULL,d_5 = NULL;
                        t = SSLgetAnnotations(j_77);
                        s_3 = t;
                        t = k_77;
                        t = pat_td_1_0(i_127, t);
                        v_3 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, v_3, l_77);
                        d_5 = t;
                        t = SSLsetAnnotations(d_5, s_3);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    k_77 = ATgetArgument(t, 0);
                    l_77 = ATgetArgument(t, 1);
                    i_77 = ATgetArgument(t, 2);
                    {
                      ATerm e_4 = NULL,i_4 = NULL,e_5 = NULL;
                      t = SSLgetAnnotations(j_77);
                      e_4 = t;
                      t = i_77;
                      {
                        static ATerm i_2 (ATerm t);
                        static ATerm i_2 (ATerm t)
                        {
                          t = pat_td_1_0(i_127, t);
                          return(t);
                        }
                        t = fetch_1_0(i_2, t);
                      }
                      i_4 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, k_77, l_77, i_4);
                      e_5 = t;
                      t = SSLsetAnnotations(e_5, e_4);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        k_77 = ATgetArgument(t, 0);
                        l_77 = ATgetArgument(t, 1);
                        i_77 = ATgetArgument(t, 2);
                        {
                          ATerm s_4 = NULL,z_4 = NULL,g_5 = NULL;
                          t = SSLgetAnnotations(j_77);
                          s_4 = t;
                          t = i_77;
                          {
                            static ATerm j_2 (ATerm t);
                            static ATerm j_2 (ATerm t)
                            {
                              t = pat_td_1_0(i_127, t);
                              return(t);
                            }
                            t = fetch_1_0(j_2, t);
                          }
                          z_4 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, k_77, l_77, z_4);
                          g_5 = t;
                          t = SSLsetAnnotations(g_5, s_4);
                        }
                      }
                    else
                      {
                        ATerm y_5 = NULL,b_6 = NULL,k_5 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            k_77 = ATgetArgument(t, 0);
                            l_77 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(j_77);
                        y_5 = t;
                        t = l_77;
                        t = pat_td_1_0(i_127, t);
                        b_6 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, k_77, b_6);
                        k_5 = t;
                        t = SSLsetAnnotations(k_5, y_5);
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
  ATerm t_77 = NULL,u_77 = NULL;
  t_77 = t;
  if(match_cons(t, sym_Match_1))
    {
      u_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL;
        t = t_77;
        t = new_0_0(t);
        y_77 = t;
        t = u_77;
        {
          static ATerm k_2 (ATerm t);
          static ATerm k_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((w_77 != NULL) && (w_77 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_77 = ATgetArgument(t, 0);
                if(((x_77 != NULL) && (x_77 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  x_77 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, y_77), w_77);
            return(t);
          }
          t = pat_td_1_0(k_2, t);
        }
        z_77 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_77), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_77), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_d_28, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_77))), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_77))))));
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
        {
          ATerm e_28 = t;
          int f_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_78 = NULL,c_78 = NULL,e_78 = NULL;
              t = t_77;
              t = new_0_0(t);
              c_78 = t;
              t = u_77;
              {
                static ATerm m_2 (ATerm t);
                static ATerm m_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((b_78 != NULL) && (b_78 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        b_78 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, c_78);
                  return(t);
                }
                t = pat_td_1_0(m_2, t);
              }
              e_78 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, c_78)), not_null(b_78))));
              LocalPopChoice(f_28);
            }
          else
            {
              t = e_28;
              {
                ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL;
                t = t_77;
                t = new_0_0(t);
                i_78 = t;
                t = u_77;
                {
                  static ATerm n_2 (ATerm t);
                  static ATerm n_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((h_78 != NULL) && (h_78 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          h_78 = ATgetArgument(t, 0);
                        if(((g_78 != NULL) && (g_78 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          g_78 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, i_78);
                    return(t);
                  }
                  t = pat_td_1_0(n_2, t);
                }
                j_78 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_78), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, i_78)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_78)), not_null(h_78)))));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm b_79 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      b_79 = ATgetArgument(t, 0);
      t = b_79;
    }
  else
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_g_28;
    }
  return(t);
}
ATerm MatchingCongruence_0_0 (ATerm t)
{
  ATerm p_78 = NULL,q_78 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      p_78 = ATgetArgument(t, 0);
      q_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_78;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, p_78, (ATerm) ATempty));
    }
  else
    {
      ATerm a_79 = NULL;
      t = q_78;
      t = map_1_0(p_2, t);
      a_79 = t;
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, p_78, a_79));
      t = Mapp2_0_0(t);
    }
  return(t);
}
ATerm repeat_2_0 (ATerm k_139 (ATerm), ATerm l_139 (ATerm), ATerm t)
{
  static ATerm e_79 (ATerm t);
  static ATerm e_79 (ATerm t)
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_139(t);
        t = e_79(t);
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = l_139(t);
      }
    return(t);
  }
  t = e_79(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm o_129 (ATerm), ATerm t)
{
  static ATerm q_2 (ATerm t);
  static ATerm q_2 (ATerm t)
  {
    t = bottomup_1_0(o_129, t);
    return(t);
  }
  t = SRTS_all(q_2, t);
  t = o_129(t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = repeat_2_0(s_2, _id, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_28 = t;
      int m_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MatchingCongruence_0_0(t);
          LocalPopChoice(m_28);
        }
      else
        {
          t = l_28;
          {
            ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL,r_79 = NULL,s_79 = NULL,t_79 = NULL,u_79 = NULL,v_79 = NULL,w_79 = NULL,x_79 = NULL;
            v_79 = t;
            if(match_cons(t, sym_Call_2))
              {
                w_79 = ATgetArgument(t, 0);
                x_79 = ATgetArgument(t, 1);
                t = w_79;
                if(match_cons(t, sym_SVar_1))
                  {
                    o_79 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = o_79;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
                  _fail(t);
                t = x_79;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    p_79 = ATgetFirst((ATermList) t);
                    s_79 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = p_79;
                if(match_cons(t, sym_Cong_2))
                  {
                    q_79 = ATgetArgument(t, 0);
                    r_79 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_79;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    t_79 = ATgetFirst((ATermList) t);
                    u_79 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = u_79;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = v_79;
                t = y_11(q_79, r_79, t_79, t);
              }
            else
              {
                if(match_cons(t, sym_Cong_2))
                  {
                    w_79 = ATgetArgument(t, 0);
                    x_79 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = v_79;
                t = u_11(w_79, x_79, t);
              }
          }
        }
      LocalPopChoice(k_28);
    }
  else
    {
      t = j_28;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm define_congruences_0_0 (ATerm t)
{
  t = bottomup_1_0(r_2, t);
  t = simplify_0_0(t);
  return(t);
}
ATerm map_1_0 (ATerm b_151 (ATerm), ATerm t)
{
  static ATerm s_80 (ATerm t);
  static ATerm s_80 (ATerm t)
  {
    ATerm p_80 = NULL,q_80 = NULL,r_80 = NULL;
    p_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_80;
      }
    else
      {
        ATerm j_6 = NULL,m_6 = NULL,n_6 = NULL,f_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_80 = ATgetFirst((ATermList) t);
            r_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_80);
        j_6 = t;
        t = q_80;
        t = b_151(t);
        m_6 = t;
        t = r_80;
        t = s_80(t);
        n_6 = t;
        t = (ATerm) ATinsert(CheckATermList(n_6), m_6);
        f_7 = t;
        t = SSLsetAnnotations(f_7, j_6);
      }
    return(t);
  }
  t = s_80(t);
  return(t);
}
static ATerm z_11 (ATerm f_47, ATerm g_47, ATerm t)
{
  ATerm u_80 = NULL;
  t = SSL_fputc(f_47, g_47);
  u_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_80);
  return(t);
}
static ATerm a_12 (ATerm o_52, ATerm p_52, ATerm t)
{
  ATerm v_80 = NULL;
  t = SSL_write_term_to_stream_text(o_52, p_52);
  v_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_80);
  return(t);
}
static ATerm c_12 (ATerm b_144 (ATerm), ATerm b_475, ATerm u_52, ATerm t)
{
  ATerm w_80 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_475, term_n_28);
  t = g_12(t);
  w_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_80, u_52);
  t = b_144(t);
  t = fclose_0_0(t);
  t = u_52;
  return(t);
}
static ATerm b_12 (ATerm k_52, ATerm l_52, ATerm t)
{
  ATerm x_80 = NULL;
  t = SSL_write_term_to_stream_baf(k_52, l_52);
  x_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_80);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm e_81 = NULL,f_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_28 = ATgetArgument(t, 0);
      if(match_cons(o_28, sym_Stream_1))
        {
          e_81 = ATgetArgument(o_28, 0);
        }
      else
        _fail(t);
      f_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_12(e_81, f_81, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm g_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL,k_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_28 = ATgetArgument(t, 0);
      if(match_cons(p_28, sym_Stream_1))
        {
          j_81 = ATgetArgument(p_28, 0);
        }
      else
        _fail(t);
      k_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12(j_81, k_81, t);
  g_81 = t;
  t = term_q_28;
  h_81 = t;
  t = g_81;
  if(match_cons(t, sym_Stream_1))
    {
      i_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_28, g_81);
  t = z_11(h_81, i_81, t);
  return(t);
}
ATerm output_1_0 (ATerm p_160 (ATerm), ATerm t)
{
  ATerm y_80 = NULL,z_80 = NULL;
  t = p_160(t);
  z_80 = t;
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_81 = NULL,b_81 = NULL;
        t = term_t_28;
        a_81 = t;
        t = term_u_28;
        b_81 = t;
        t = term_v_28;
        t = m_12(a_81, b_81, t);
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        t = term_w_28;
      }
  }
  y_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_80, z_80);
  {
    ATerm x_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_81 = NULL,d_81 = NULL;
        t = term_t_28;
        c_81 = t;
        t = term_a_29;
        d_81 = t;
        t = term_b_29;
        t = m_12(c_81, d_81, t);
        t = (ATerm) ATmakeAppl(sym__2, y_80, z_80);
        LocalPopChoice(z_28);
        if(match_cons(t, sym__2))
          {
            ATerm c_29 = ATgetArgument(t, 0);
            ATerm d_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_12(t_2, y_80, z_80, t);
      }
    else
      {
        t = x_28;
        if(match_cons(t, sym__2))
          {
            ATerm e_29 = ATgetArgument(t, 0);
            ATerm f_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_12(u_2, y_80, z_80, t);
      }
  }
  return(t);
}
static ATerm a_82 (ATerm u_81, ATerm t)
{
  t = SSL_fclose(u_81);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_81 = NULL,y_81 = NULL;
  y_81 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_81 = ATgetArgument(t, 0);
      {
        ATerm g_29 = t;
        int h_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_81);
            LocalPopChoice(h_29);
          }
        else
          {
            t = g_29;
            t = a_82(y_81, t);
          }
      }
    }
  else
    {
      t = a_82(y_81, t);
    }
  return(t);
}
static ATerm d_12 (ATerm q_52, ATerm t)
{
  t = SSL_read_term_from_stream(q_52);
  return(t);
}
static ATerm e_12 (ATerm l_45, ATerm m_45, ATerm t)
{
  t = SSL_strcat(l_45, m_45);
  return(t);
}
static ATerm f_12 (ATerm h_47, ATerm j_47, ATerm t)
{
  ATerm b_82 = NULL;
  t = SSL_fopen(h_47, j_47);
  b_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_82);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_82 = NULL;
  t = SSL_stdin_stream();
  c_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_82);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_82 = NULL;
  t = SSL_stdout_stream();
  d_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_82);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_82 = NULL;
  t = SSL_stderr_stream();
  e_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_82);
  return(t);
}
static ATerm m_83 (ATerm k_82, ATerm t)
{
  ATerm l_82 = NULL;
  t = SSL_explode_term(k_82);
  if(match_cons(t, sym__2))
    {
      ATerm i_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_29 = ATgetArgument(t, 1);
        if(((ATgetType(j_29) == AT_LIST) && !(ATisEmpty(j_29))))
          {
            l_82 = ATgetFirst((ATermList) j_29);
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
  t = l_82;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_82;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_82;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_82;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_83 (ATerm o_82, ATerm p_82, ATerm q_82, ATerm t)
{
  ATerm r_82 = NULL,s_82 = NULL,t_82 = NULL,w_82 = NULL,m_14 = NULL;
  t = SSLgetAnnotations(q_82);
  t_82 = t;
  t = o_82;
  if(match_cons(t, sym_Path_1))
    {
      w_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_82, p_82);
  m_14 = t;
  t = SSLsetAnnotations(m_14, t_82);
  if(match_cons(t, sym__2))
    {
      r_82 = ATgetArgument(t, 0);
      s_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_12(r_82, s_82, t);
  return(t);
}
static ATerm o_83 (ATerm y_82, ATerm z_82, ATerm a_83, ATerm t)
{
  ATerm b_83 = NULL,c_83 = NULL,d_83 = NULL,h_83 = NULL,n_14 = NULL;
  t = SSLgetAnnotations(a_83);
  d_83 = t;
  t = SSL_is_string(y_82);
  h_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_83, z_82);
  n_14 = t;
  t = SSLsetAnnotations(n_14, d_83);
  if(match_cons(t, sym__2))
    {
      b_83 = ATgetArgument(t, 0);
      c_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_12(b_83, c_83, t);
  return(t);
}
static ATerm g_12 (ATerm t)
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
        t = g_12(t);
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
        {
          ATerm a_7 = NULL,b_7 = NULL;
          t = term_s_29;
          b_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_29, x_83);
          t = e_12(b_7, x_83, t);
          a_7 = t;
          t = SSL_perror(a_7);
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
  t = d_12(s_83, t);
  q_83 = t;
  t = r_83;
  t = fclose_0_0(t);
  t = q_83;
  return(t);
}
ATerm input_1_0 (ATerm q_160 (ATerm), ATerm t)
{
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_84 = NULL,b_84 = NULL;
      t = term_t_28;
      a_84 = t;
      t = term_v_29;
      b_84 = t;
      t = term_w_29;
      t = m_12(a_84, b_84, t);
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      t = term_x_29;
    }
  t = ReadFromFile_0_0(t);
  t = q_160(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_84 = NULL,d_84 = NULL;
  t = term_t_28;
  c_84 = t;
  t = term_y_29;
  d_84 = t;
  t = term_z_29;
  t = m_12(c_84, d_84, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_84 = NULL,g_84 = NULL,h_84 = NULL;
  f_84 = t;
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
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
                ATerm c_30 = ATgetFirst((ATermList) t);
                ATerm d_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_84;
          }
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        t = (ATerm) ATinsert(ATempty, f_84);
      }
  }
  g_84 = t;
  t = term_w_28;
  h_84 = t;
  t = SSL_printnl(h_84, g_84);
  t = f_84;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm m_84 = NULL,n_84 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_84 = ATgetFirst((ATermList) t);
      n_84 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_84 = NULL,s_84 = NULL;
        static ATerm v_2 (ATerm t);
        static ATerm v_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_84)), not_null(s_84));
          return(t);
        }
        t = n_84;
        t = o_0(t);
        if(((r_84 != NULL) && (r_84 != t)))
          _fail(t);
        else
          r_84 = t;
        t = m_84;
        t = m_0(t);
        if(((s_84 != NULL) && (s_84 != t)))
          _fail(t);
        else
          s_84 = t;
        t = n_84;
        t = reverse_acc_2_0(m_0, v_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_30;
      t = o_0(t);
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm f_85 = NULL,g_85 = NULL,h_85 = NULL,z_14 = NULL;
  h_85 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_85);
  f_85 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_85);
  z_14 = t;
  t = SSLsetAnnotations(z_14, f_85);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm l_85 = NULL;
  l_85 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_85), term_g_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm o_162 (ATerm), ATerm p_162 (ATerm), ATerm t)
{
  ATerm w_84 = NULL,x_84 = NULL;
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_85 = NULL,e_85 = NULL;
      t = term_t_28;
      d_85 = t;
      t = term_y_29;
      e_85 = t;
      t = term_z_29;
      t = m_12(d_85, e_85, t);
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      t = fetch_1_0(x_2, t);
    }
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_162(t);
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
  w_84 = t;
  t = term_n_30;
  x_84 = t;
  t = term_o_30;
  t = m_12(w_84, x_84, t);
  t = reverse_acc_2_0(_id, y_2, t);
  t = map_1_0(a_3, t);
  {
    ATerm p_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_85 = NULL;
        t = p_162(t);
        m_85 = t;
        t = (ATerm) ATinsert(CheckATermList(m_85), term_r_30);
        t = echo_0_0(t);
        LocalPopChoice(q_30);
      }
    else
      {
        t = p_30;
      }
  }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL,g_15 = NULL;
  v_85 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_85);
  t_85 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_85);
  g_15 = t;
  t = SSLsetAnnotations(g_15, t_85);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_85 = NULL;
  q_85 = t;
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_85 = NULL,s_85 = NULL;
        t = term_t_28;
        r_85 = t;
        t = term_y_29;
        s_85 = t;
        t = term_z_29;
        t = m_12(r_85, s_85, t);
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        t = fetch_1_0(b_3, t);
      }
  }
  t = q_85;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm x_85 = NULL;
  x_85 = t;
  if(match_string(t, "-k"))
    {
      t = x_85;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_85;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm y_85 = NULL,z_85 = NULL,a_86 = NULL;
  y_85 = t;
  t = SSL_string_to_int(y_85);
  z_85 = t;
  t = term_u_30;
  a_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_30, z_85);
  t = p_12(a_86, z_85, t);
  t = y_85;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_v_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_3, d_3, e_3, t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm c_86 = NULL;
  c_86 = t;
  if(match_string(t, "-S"))
    {
      t = c_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_86;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm d_86 = NULL,e_86 = NULL;
  t = term_w_30;
  d_86 = t;
  t = term_x_30;
  e_86 = t;
  t = term_y_30;
  t = p_12(d_86, e_86, t);
  t = term_z_30;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_a_31;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm f_86 = NULL,g_86 = NULL,h_86 = NULL;
  f_86 = t;
  t = SSL_string_to_int(f_86);
  g_86 = t;
  t = term_w_30;
  h_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_30, g_86);
  t = p_12(h_86, g_86, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_86);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_b_31;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm i_86 = NULL,j_86 = NULL;
  t = term_c_31;
  i_86 = t;
  t = term_e_30;
  j_86 = t;
  t = term_e_31;
  t = p_12(i_86, j_86, t);
  t = term_f_31;
  return(t);
}
static ATerm p_3 (ATerm t)
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
      t = Option_3_0(f_3, g_3, i_3, t);
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
            t = ArgOption_3_0(j_3, l_3, m_3, t);
            LocalPopChoice(k_31);
          }
        else
          {
            t = j_31;
            t = Option_3_0(n_3, o_3, p_3, t);
          }
      }
    }
  return(t);
}
static ATerm p_12 (ATerm e_51, ATerm f_51, ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL;
  t = term_t_28;
  k_86 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_28, e_51, f_51);
  t = lookup_table_0_1(k_86, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_12(e_51, f_51, l_86, t);
  t = (ATerm) ATmakeAppl(sym__3, term_t_28, e_51, f_51);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm p_86 = NULL,q_86 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_86 = NULL,s_86 = NULL,t_86 = NULL;
      t = term_e_30;
      t = g_0(t);
      r_86 = t;
      t = term_m_30;
      s_86 = t;
      t = term_n_30;
      t_86 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_30, term_n_30, r_86);
      t = n_12(s_86, t_86, r_86, t);
      _fail(t);
    }
  else
    {
      ATerm w_86 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_86 = ATgetFirst((ATermList) t);
          q_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_86;
      t = b_0(t);
      t = term_e_30;
      t = d_0(t);
      w_86 = t;
      t = (ATerm) ATinsert(CheckATermList(q_86), w_86);
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm y_86 = NULL;
  y_86 = t;
  if(match_string(t, "-o"))
    {
      t = y_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_86;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm z_86 = NULL,a_87 = NULL;
  z_86 = t;
  t = term_u_28;
  a_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_28, z_86);
  t = p_12(a_87, z_86, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_86);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_l_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_3, r_3, t_3, t);
  return(t);
}
static ATerm n_12 (ATerm p_56, ATerm q_56, ATerm o_56, ATerm t)
{
  ATerm c_87 = NULL,d_87 = NULL,e_87 = NULL,f_87 = NULL,g_87 = NULL;
  c_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
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
        t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
        t = m_12(p_56, q_56, t);
        LocalPopChoice(n_31);
      }
    else
      {
        t = m_31;
        t = (ATerm) ATempty;
      }
  }
  d_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_56, q_56, (ATerm) ATinsert(CheckATermList(d_87), o_56));
  t = lookup_table_0_1(p_56, t);
  g_87 = t;
  t = (ATerm) ATinsert(CheckATermList(d_87), o_56);
  e_87 = t;
  t = g_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_12(q_56, e_87, f_87, t);
  t = c_87;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_87 = NULL,s_87 = NULL,t_87 = NULL;
      t = term_e_30;
      t = l_0(t);
      r_87 = t;
      t = term_m_30;
      s_87 = t;
      t = term_n_30;
      t_87 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_30, term_n_30, r_87);
      t = n_12(s_87, t_87, r_87, t);
      _fail(t);
    }
  else
    {
      ATerm x_87 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_87 = ATgetFirst((ATermList) t);
          o_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_87;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_87 = ATgetFirst((ATermList) t);
          q_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_87;
      t = h_0(t);
      t = p_87;
      t = j_0(t);
      x_87 = t;
      t = (ATerm) ATinsert(CheckATermList(q_87), x_87);
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm z_87 = NULL;
  z_87 = t;
  if(match_string(t, "-i"))
    {
      t = z_87;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_87;
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm b_88 = NULL,c_88 = NULL;
  b_88 = t;
  t = term_v_29;
  c_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_29, b_88);
  t = p_12(c_88, b_88, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_88);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_3, w_3, x_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_30;
  t = whoami_0_0(t);
  d_88 = t;
  t = term_r_31;
  f_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_31), d_88);
  g_88 = t;
  t = SSL_printnl(f_88, g_88);
  t = term_t_31;
  e_88 = t;
  t = SSL_exit(e_88);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm h_88 = NULL,i_88 = NULL;
  t = term_t_28;
  h_88 = t;
  t = term_y_29;
  i_88 = t;
  t = term_z_29;
  t = m_12(h_88, i_88, t);
  return(t);
}
static ATerm h_12 (ATerm x_53, ATerm y_53, ATerm t)
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_53, y_53);
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
      t = SSL_addr(x_53, y_53);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_153 (ATerm), ATerm k_153 (ATerm), ATerm t)
{
  ATerm k_88 = NULL,l_88 = NULL,m_88 = NULL;
  k_88 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_88;
      t = j_153(t);
    }
  else
    {
      ATerm p_88 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_88 = ATgetFirst((ATermList) t);
          m_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_88;
      t = foldr_2_0(j_153, k_153, t);
      p_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_88, p_88);
      t = k_153(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_x_30;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL;
  if(match_cons(t, sym__2))
    {
      h_7 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(h_7, i_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_88 = NULL,d_7 = NULL,e_7 = NULL;
  t = times_0_0(t);
  e_7 = t;
  t = SSL_explode_term(e_7);
  if(match_cons(t, sym__2))
    {
      ATerm w_31 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7;
  t = foldr_2_0(y_3, z_3, t);
  s_88 = t;
  t = SSL_TicksToSeconds(s_88);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_89 = NULL,e_89 = NULL,f_89 = NULL;
  d_89 = t;
  if(match_cons(t, sym__2))
    {
      e_89 = ATgetArgument(t, 0);
      f_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_89;
        if((e_89 != t))
          {
            _fail(t);
          }
        t = d_89;
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        t = (ATerm) ATmakeAppl(sym__2, e_89, f_89);
        {
          ATerm a_32 = t;
          int b_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_89, f_89);
              LocalPopChoice(b_32);
            }
          else
            {
              t = a_32;
              t = SSL_gtr(e_89, f_89);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_89, f_89);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_141 (ATerm), ATerm t)
{
  ATerm j_89 = NULL;
  j_89 = t;
  {
    ATerm c_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL;
        t = term_t_28;
        m_89 = t;
        t = term_w_30;
        n_89 = t;
        t = term_e_32;
        t = m_12(m_89, n_89, t);
        l_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_89, term_t_31);
        t = geq_0_0(t);
        t = j_89;
        t = w_141(t);
        LocalPopChoice(d_32);
      }
    else
      {
        t = c_32;
        t = j_89;
      }
  }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm p_89 = NULL,q_89 = NULL,s_89 = NULL,t_89 = NULL;
  t = run_time_0_0(t);
  p_89 = t;
  t = term_e_30;
  t = whoami_0_0(t);
  q_89 = t;
  t = term_r_31;
  s_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_32), p_89), term_f_32), q_89);
  t_89 = t;
  t = SSL_printnl(s_89, t_89);
  t = (ATerm) ATmakeAppl(sym__2, term_r_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_32), p_89), term_f_32), q_89));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_89 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_30;
  u_89 = t;
  t = SSL_exit(u_89);
  return(t);
}
static ATerm q_12 (ATerm a_61, ATerm b_61, ATerm c_61, ATerm t)
{
  ATerm v_89 = NULL;
  t = SSL_hashtable_put(c_61, a_61, b_61);
  v_89 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_89);
  return(t);
}
ATerm lookup_table_0_1 (ATerm b_58, ATerm t)
{
  ATerm e_90 = NULL;
  t = table_hashtable_0_0(t);
  e_90 = t;
  {
    ATerm h_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_7 = NULL;
        t = e_90;
        if(match_cons(t, sym_Hashtable_1))
          {
            x_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_12(b_58, x_7, t);
        LocalPopChoice(i_32);
      }
    else
      {
        t = h_32;
        {
          ATerm g_8 = NULL;
          t = b_58;
          t = table_create_0_0(t);
          t = e_90;
          if(match_cons(t, sym_Hashtable_1))
            {
              g_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_12(b_58, g_8, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm i_61, ATerm j_61, ATerm t)
{
  ATerm h_90 = NULL;
  t = SSL_hashtable_create(i_61, j_61);
  h_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_90);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm i_90 = NULL,j_90 = NULL,k_90 = NULL,m_90 = NULL,n_90 = NULL;
  i_90 = t;
  t = term_j_32;
  m_90 = t;
  t = term_k_32;
  n_90 = t;
  t = i_90;
  t = new_hashtable_0_2(m_90, n_90, t);
  j_90 = t;
  t = i_90;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_12(i_90, j_90, k_90, t);
  t = i_90;
  return(t);
}
static ATerm j_12 (ATerm f_61, ATerm g_61, ATerm t)
{
  ATerm o_90 = NULL;
  t = SSL_hashtable_remove(g_61, f_61);
  o_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_90);
  return(t);
}
static ATerm k_12 (ATerm k_61, ATerm t)
{
  ATerm p_90 = NULL;
  t = SSL_hashtable_destroy(k_61);
  p_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_90);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm q_90 = NULL;
  t = SSL_table_hashtable();
  q_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_90);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm r_90 = NULL,s_90 = NULL,t_90 = NULL,u_90 = NULL;
  r_90 = t;
  t = table_hashtable_0_0(t);
  s_90 = t;
  t = lookup_table_0_1(r_90, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_12(u_90, t);
  t = s_90;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_12(r_90, t_90, t);
  t = r_90;
  return(t);
}
ATerm fetch_1_0 (ATerm l_151 (ATerm), ATerm t)
{
  static ATerm s_91 (ATerm t);
  static ATerm s_91 (ATerm t)
  {
    ATerm p_91 = NULL,q_91 = NULL,r_91 = NULL;
    p_91 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_91 = ATgetFirst((ATermList) t);
        r_91 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_32 = t;
      int n_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_8 = NULL,v_8 = NULL,i_15 = NULL;
          t = SSLgetAnnotations(p_91);
          o_8 = t;
          t = q_91;
          t = l_151(t);
          v_8 = t;
          t = (ATerm) ATinsert(CheckATermList(r_91), v_8);
          i_15 = t;
          t = SSLsetAnnotations(i_15, o_8);
          LocalPopChoice(n_32);
        }
      else
        {
          t = m_32;
          {
            ATerm g_9 = NULL,j_9 = NULL,j_15 = NULL;
            t = SSLgetAnnotations(p_91);
            g_9 = t;
            t = r_91;
            t = s_91(t);
            j_9 = t;
            t = (ATerm) ATinsert(CheckATermList(j_9), q_91);
            j_15 = t;
            t = SSLsetAnnotations(j_15, g_9);
          }
        }
    }
    return(t);
  }
  t = s_91(t);
  return(t);
}
static ATerm r_12 (ATerm d_61, ATerm e_61, ATerm t)
{
  t = SSL_hashtable_get(e_61, d_61);
  return(t);
}
static ATerm m_12 (ATerm i_58, ATerm j_58, ATerm t)
{
  ATerm v_91 = NULL;
  t = lookup_table_0_1(i_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(j_58, v_91, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm x_91 = NULL,y_91 = NULL;
  t = term_o_32;
  x_91 = t;
  t = term_e_30;
  y_91 = t;
  t = term_p_32;
  t = p_12(x_91, y_91, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_q_32;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm z_91 = NULL,a_92 = NULL,b_92 = NULL,c_92 = NULL;
  t = term_o_32;
  b_92 = t;
  t = term_e_30;
  c_92 = t;
  t = term_p_32;
  t = p_12(b_92, c_92, t);
  t = term_r_32;
  z_91 = t;
  t = term_e_30;
  a_92 = t;
  t = term_s_32;
  t = p_12(z_91, a_92, t);
  t = term_t_32;
  return(t);
}
static ATerm h_4 (ATerm t)
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
      t = Option_3_0(b_4, c_4, d_4, t);
      LocalPopChoice(w_32);
    }
  else
    {
      t = v_32;
      t = Option_3_0(f_4, g_4, h_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t)
{
  ATerm d_92 = NULL,e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL,i_92 = NULL,v_15 = NULL;
  i_92 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_92 = ATgetFirst((ATermList) t);
      f_92 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_92);
  d_92 = t;
  t = e_92;
  t = n_113(t);
  g_92 = t;
  t = f_92;
  t = o_113(t);
  h_92 = t;
  t = (ATerm) ATinsert(CheckATermList(h_92), g_92);
  v_15 = t;
  t = SSLsetAnnotations(v_15, d_92);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_162 (ATerm), ATerm t)
{
  ATerm o_92 = NULL,p_92 = NULL,q_92 = NULL,r_92 = NULL,t_92 = NULL,u_92 = NULL,h_16 = NULL;
  o_92 = t;
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_32;
        t = j_162(t);
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
      }
  }
  t = o_92;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_92 = ATgetFirst((ATermList) t);
      r_92 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_92);
  p_92 = t;
  t = term_y_29;
  u_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_29, q_92);
  t = p_12(u_92, q_92, t);
  t = r_92;
  {
    static ATerm e_93 (ATerm t);
    static ATerm e_93 (ATerm t)
    {
      ATerm a_33 = t;
      int b_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_33 = t;
          int d_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_92 = NULL;
              x_92 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_92;
              LocalPopChoice(d_33);
            }
          else
            {
              t = c_33;
              t = j_162(t);
              t = Cons_2_0(_id, e_93, t);
            }
          LocalPopChoice(b_33);
        }
      else
        {
          t = a_33;
          {
            ATerm a_93 = NULL,b_93 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_93 = ATgetFirst((ATermList) t);
                b_93 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_93), (ATerm) ATmakeAppl(sym_Undefined_1, a_93));
          }
        }
      return(t);
    }
    t = e_93(t);
  }
  t_92 = t;
  t = (ATerm) ATinsert(CheckATermList(t_92), (ATerm) ATmakeAppl(sym_Program_1, q_92));
  h_16 = t;
  t = SSLsetAnnotations(h_16, p_92);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm r_93 = NULL;
  r_93 = t;
  if(match_string(t, "--help"))
    {
      t = r_93;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_93;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_93;
        }
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm s_93 = NULL,t_93 = NULL;
  t = term_e_33;
  s_93 = t;
  t = term_e_30;
  t_93 = t;
  t = term_f_33;
  t = p_12(s_93, t_93, t);
  t = term_g_33;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_i_33;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm g_162 (ATerm), ATerm h_162 (ATerm), ATerm i_162 (ATerm), ATerm t)
{
  ATerm j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL;
  l_93 = t;
  t = term_m_30;
  m_93 = t;
  t = term_j_33;
  t = lookup_table_0_1(m_93, t);
  q_93 = t;
  t = term_n_30;
  n_93 = t;
  t = (ATerm) ATempty;
  o_93 = t;
  t = q_93;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_12(n_93, o_93, p_93, t);
  t = l_93;
  {
    static ATerm j_4 (ATerm t);
    static ATerm j_4 (ATerm t)
    {
      ATerm k_33 = t;
      int l_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_162(t);
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
                t = Option_3_0(k_4, l_4, m_4, t);
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
    t = parse_options_p__1_0(j_4, t);
  }
  {
    ATerm o_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_94 = NULL;
        g_94 = t;
        {
          ATerm q_33 = t;
          int r_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_9 = NULL;
              t = g_94;
              {
                ATerm s_33 = t;
                int u_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_9 = NULL,u_9 = NULL;
                    t = term_t_28;
                    s_9 = t;
                    t = term_e_33;
                    u_9 = t;
                    t = term_v_33;
                    t = m_12(s_9, u_9, t);
                    LocalPopChoice(u_33);
                  }
                else
                  {
                    t = s_33;
                    t = fetch_1_0(n_4, t);
                  }
              }
              t = g_94;
              t = h_162(t);
              t = term_x_30;
              q_9 = t;
              t = SSL_exit(q_9);
              LocalPopChoice(r_33);
            }
          else
            {
              t = q_33;
              {
                ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
                t = term_t_28;
                z_9 = t;
                t = term_o_32;
                a_10 = t;
                t = term_w_33;
                t = m_12(z_9, a_10, t);
                t = g_94;
                t = i_162(t);
                t = term_x_30;
                y_9 = t;
                t = SSL_exit(y_9);
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
              ATerm h_94 = NULL,i_94 = NULL,j_94 = NULL;
              static ATerm o_4 (ATerm t);
              static ATerm o_4 (ATerm t)
              {
                ATerm k_94 = NULL,l_94 = NULL,m_94 = NULL,j_16 = NULL;
                m_94 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_94 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_94);
                k_94 = t;
                t = l_94;
                if(((j_93 != NULL) && (j_93 != t)))
                  _fail(t);
                else
                  j_93 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_94);
                j_16 = t;
                t = SSLsetAnnotations(j_16, k_94);
                return(t);
              }
              t = fetch_1_0(o_4, t);
              t = term_r_31;
              i_94 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_93)), term_z_33);
              j_94 = t;
              t = SSL_printnl(i_94, j_94);
              t = (ATerm) ATmakeAppl(sym__2, term_r_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_93)), term_z_33));
              t = h_162(t);
              t = term_t_31;
              h_94 = t;
              t = SSL_exit(h_94);
              LocalPopChoice(y_33);
            }
          else
            {
              t = x_33;
            }
        }
      }
  }
  k_93 = t;
  t = term_m_30;
  t = table_destroy_0_0(t);
  t = k_93;
  return(t);
}
ATerm option_wrap_5_0 (ATerm j_160 (ATerm), ATerm k_160 (ATerm), ATerm l_160 (ATerm), ATerm m_160 (ATerm), ATerm n_160 (ATerm), ATerm t)
{
  ATerm s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL;
  t = parse_options_3_0(j_160, k_160, l_160, t);
  s_94 = t;
  t = term_a_34;
  t = table_create_0_0(t);
  t = term_a_34;
  t_94 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_34, term_b_34, s_94);
  t = lookup_table_0_1(t_94, t);
  w_94 = t;
  t = term_b_34;
  u_94 = t;
  t = w_94;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_12(u_94, s_94, v_94, t);
  t = s_94;
  t = m_160(t);
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_160(t);
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
static ATerm p_4 (ATerm t)
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
        ATerm g_34 = t;
        int h_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(h_34);
          }
        else
          {
            t = g_34;
            {
              ATerm i_34 = t;
              int k_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(r_4, t_4, u_4, t);
                  LocalPopChoice(k_34);
                }
              else
                {
                  t = i_34;
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
static ATerm q_4 (ATerm t)
{
  t = input_1_0(w_4, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm b_95 = NULL,c_95 = NULL;
  t = term_a_29;
  b_95 = t;
  t = term_e_30;
  c_95 = t;
  t = term_n_34;
  t = p_12(b_95, c_95, t);
  t = term_o_34;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_p_34;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = output_1_0(x_4, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm e_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL,d_17 = NULL,c_17 = NULL,w_16 = NULL,v_16 = NULL;
  t_95 = t;
  if(match_cons(t, sym_Specification_1))
    {
      f_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_95);
  e_95 = t;
  t = f_95;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_95 = ATgetFirst((ATermList) t);
      i_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_95);
  g_95 = t;
  t = i_95;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_95 = ATgetFirst((ATermList) t);
      n_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_95);
  l_95 = t;
  t = m_95;
  if(match_cons(t, sym_Strategies_1))
    {
      q_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_95);
  p_95 = t;
  t = q_95;
  t = map_1_0(a_5, t);
  r_95 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, r_95);
  v_16 = t;
  t = SSLsetAnnotations(v_16, p_95);
  s_95 = t;
  t = n_95;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_95), s_95);
  w_16 = t;
  t = SSLsetAnnotations(w_16, l_95);
  o_95 = t;
  t = (ATerm) ATinsert(CheckATermList(o_95), h_95);
  c_17 = t;
  t = SSLsetAnnotations(c_17, g_95);
  j_95 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, j_95);
  d_17 = t;
  t = SSLsetAnnotations(d_17, e_95);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm j_96 = NULL,k_96 = NULL,l_96 = NULL,m_96 = NULL,n_96 = NULL;
  n_96 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      j_96 = ATgetArgument(t, 0);
      k_96 = ATgetArgument(t, 1);
      l_96 = ATgetArgument(t, 2);
      m_96 = ATgetArgument(t, 3);
      {
        ATerm q_34 = t;
        int r_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_10 = NULL,o_10 = NULL,l_16 = NULL;
            t = SSLgetAnnotations(n_96);
            i_10 = t;
            t = m_96;
            t = define_congruences_0_0(t);
            o_10 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, j_96, k_96, l_96, o_10);
            l_16 = t;
            t = SSLsetAnnotations(l_16, i_10);
            LocalPopChoice(r_34);
          }
        else
          {
            t = q_34;
            t = n_96;
          }
      }
    }
  else
    {
      t = n_96;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(p_4, default_system_usage_0_0, default_system_about_0_0, _id, q_4, t);
  return(t);
}

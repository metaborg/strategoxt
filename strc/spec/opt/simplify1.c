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
static Symbol sym_App_2;
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
static Symbol sym_App_2;
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
static ATerm term_w_28;
static ATerm term_v_28;
static ATerm term_u_28;
static ATerm term_h_28;
static ATerm term_g_28;
static ATerm term_f_28;
static ATerm term_c_28;
static ATerm term_b_28;
static ATerm term_p_27;
static ATerm term_o_27;
static ATerm term_n_27;
static ATerm term_m_27;
static ATerm term_l_27;
static ATerm term_g_27;
static ATerm term_a_27;
static ATerm term_z_26;
static ATerm term_y_26;
static ATerm term_x_26;
static ATerm term_w_26;
static ATerm term_v_26;
static ATerm term_u_26;
static ATerm term_r_26;
static ATerm term_q_26;
static ATerm term_n_26;
static ATerm term_m_26;
static ATerm term_l_26;
static ATerm term_a_26;
static ATerm term_z_25;
static ATerm term_y_25;
static ATerm term_x_25;
static ATerm term_j_25;
static ATerm term_d_25;
static ATerm term_c_25;
static ATerm term_b_25;
static ATerm term_a_25;
static ATerm term_z_24;
static ATerm term_y_24;
static ATerm term_x_24;
static ATerm term_v_24;
static ATerm term_u_24;
static ATerm term_t_24;
static ATerm term_s_24;
static ATerm term_q_24;
static ATerm term_n_24;
static ATerm term_k_24;
static ATerm term_j_24;
static ATerm term_h_24;
static ATerm term_g_24;
static ATerm term_b_24;
static ATerm term_z_23;
static ATerm term_u_23;
static ATerm term_t_23;
static ATerm term_s_23;
static ATerm term_r_23;
static ATerm term_p_23;
static ATerm term_m_23;
static ATerm term_l_23;
static ATerm term_s_22;
static ATerm term_r_22;
static ATerm term_o_22;
static ATerm term_n_22;
static ATerm term_l_22;
static ATerm term_k_22;
static ATerm term_h_22;
static ATerm term_c_22;
static ATerm term_j_21;
static ATerm term_y_5;
static ATerm term_q_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_l_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_r_22);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_p_23);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_t_23);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym__2, term_h_24, term_j_24);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym__2, term_t_24, term_u_24);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_24);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym__2, term_a_25, term_z_23);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_t_24);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym__2, term_u_26, term_z_23);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym__2, term_x_26, term_z_23);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__2, term_l_27, term_z_23);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym__3, term_h_24, term_j_24, (ATerm) ATempty);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_l_27);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_u_26);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_z_23);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm bottomup_1_0 (ATerm k_136 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm n_137 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm j_159 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm f_2 (ATerm l_1, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm j_136 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm a_141 (ATerm), ATerm b_141 (ATerm), ATerm c_141 (ATerm), ATerm d_141 (ATerm), ATerm t);
static ATerm t_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm simplify_0_0 (ATerm t);
ATerm map_1_0 (ATerm u_158 (ATerm), ATerm t);
static ATerm b_11 (ATerm w_47, ATerm x_47, ATerm t);
static ATerm c_11 (ATerm f_53, ATerm g_53, ATerm t);
static ATerm e_11 (ATerm b_151 (ATerm), ATerm b_486, ATerm l_53, ATerm t);
static ATerm d_11 (ATerm b_53, ATerm c_53, ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm output_1_0 (ATerm u_168 (ATerm), ATerm t);
static ATerm o_51 (ATerm i_51, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_11 (ATerm h_53, ATerm t);
static ATerm g_11 (ATerm c_46, ATerm d_46, ATerm t);
static ATerm h_11 (ATerm y_47, ATerm z_47, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_53 (ATerm a_52, ATerm t);
static ATerm m_53 (ATerm e_52, ATerm f_52, ATerm h_52, ATerm t);
static ATerm n_53 (ATerm r_52, ATerm s_52, ATerm t_52, ATerm t);
static ATerm i_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm v_168 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm default_system_usage_2_0 (ATerm t_170 (ATerm), ATerm u_170 (ATerm), ATerm t);
static ATerm y_1 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_11 (ATerm v_51, ATerm w_51, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_11 (ATerm g_57, ATerm h_57, ATerm f_57, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_11 (ATerm o_54, ATerm p_54, ATerm t);
ATerm foldr_2_0 (ATerm a_161 (ATerm), ATerm b_161 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_148 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_11 (ATerm v_61, ATerm w_61, ATerm x_61, ATerm t);
ATerm lookup_table_0_1 (ATerm s_58, ATerm t);
ATerm new_hashtable_0_2 (ATerm d_62, ATerm e_62, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm l_11 (ATerm a_62, ATerm b_62, ATerm t);
static ATerm m_11 (ATerm f_62, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_159 (ATerm), ATerm t);
static ATerm t_11 (ATerm y_61, ATerm z_61, ATerm t);
static ATerm o_11 (ATerm z_58, ATerm a_59, ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm o_170 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm parse_options_3_0 (ATerm l_170 (ATerm), ATerm m_170 (ATerm), ATerm n_170 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm o_168 (ATerm), ATerm p_168 (ATerm), ATerm q_168 (ATerm), ATerm r_168 (ATerm), ATerm s_168 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm k_136 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    t = bottomup_1_0(k_136, t);
    return(t);
  }
  t = SRTS_all(a_0, t);
  t = k_136(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm n_137 (ATerm), ATerm t)
{
  static ATerm p_2 (ATerm t);
  static ATerm p_2 (ATerm t)
  {
    ATerm j_4 = t;
    int k_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_137(t);
        LocalPopChoice(k_4);
      }
    else
      {
        t = j_4;
        t = SRTS_one(p_2, t);
      }
    return(t);
  }
  t = p_2(t);
  return(t);
}
ATerm at_end_1_0 (ATerm j_159 (ATerm), ATerm t)
{
  static ATerm d_1 (ATerm t);
  static ATerm d_1 (ATerm t)
  {
    ATerm z_0 = NULL,b_1 = NULL,c_1 = NULL;
    c_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_0 = ATgetFirst((ATermList) t);
        b_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_1 = NULL,i_1 = NULL,n_0 = NULL;
          t = SSLgetAnnotations(c_1);
          f_1 = t;
          t = b_1;
          t = d_1(t);
          i_1 = t;
          t = (ATerm) ATinsert(CheckATermList(i_1), z_0);
          n_0 = t;
          t = SSLsetAnnotations(n_0, f_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_1;
        t = j_159(t);
      }
    return(t);
  }
  t = d_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
    }
  else
    {
      static ATerm h_0 (ATerm t);
      static ATerm h_0 (ATerm t)
      {
        t = not_null(e_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_0 = ATgetFirst((ATermList) t);
          if(((e_0 != NULL) && (e_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_0;
      t = at_end_1_0(h_0, t);
    }
  return(t);
}
static ATerm f_2 (ATerm l_1, ATerm t)
{
  ATerm n_1 = NULL;
  t = SSL_explode_term(l_1);
  if(match_cons(t, sym__2))
    {
      ATerm l_4 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_4) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      n_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_1 = NULL,w_1 = NULL,a_2 = NULL;
  a_2 = t;
  if(match_cons(t, sym__2))
    {
      r_1 = ATgetArgument(t, 0);
      w_1 = ATgetArgument(t, 1);
      {
        ATerm m_4 = t;
        int n_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm i_0 (ATerm t);
            static ATerm i_0 (ATerm t)
            {
              t = w_1;
              return(t);
            }
            t = r_1;
            t = at_end_1_0(i_0, t);
            LocalPopChoice(n_4);
          }
        else
          {
            t = m_4;
            t = f_2(a_2, t);
          }
      }
    }
  else
    {
      t = f_2(a_2, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm j_136 (ATerm), ATerm t)
{
  static ATerm m_0 (ATerm t);
  static ATerm m_0 (ATerm t)
  {
    t = topdown_1_0(j_136, t);
    return(t);
  }
  t = j_136(t);
  t = SRTS_all(m_0, t);
  return(t);
}
ATerm genzip_4_0 (ATerm a_141 (ATerm), ATerm b_141 (ATerm), ATerm c_141 (ATerm), ATerm d_141 (ATerm), ATerm t)
{
  static ATerm n_2 (ATerm t);
  static ATerm n_2 (ATerm t)
  {
    ATerm o_4 = t;
    int q_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_141(t);
        LocalPopChoice(q_4);
      }
    else
      {
        t = o_4;
        {
          ATerm g_2 = NULL,h_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,s_0 = NULL;
          t = b_141(t);
          m_2 = t;
          if(match_cons(t, sym__2))
            {
              h_2 = ATgetArgument(t, 0);
              j_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_2);
          g_2 = t;
          t = h_2;
          t = d_141(t);
          k_2 = t;
          t = j_2;
          t = n_2(t);
          l_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_2, l_2);
          s_0 = t;
          t = SSLsetAnnotations(s_0, g_2);
          t = c_141(t);
        }
      }
    return(t);
  }
  t = n_2(t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_4 = ATgetArgument(t, 0);
      if(((ATgetType(r_4) != AT_LIST) || !(ATisEmpty(r_4))))
        _fail(t);
      {
        ATerm s_4 = ATgetArgument(t, 1);
        if(((ATgetType(s_4) != AT_LIST) || !(ATisEmpty(s_4))))
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
  ATerm h_18 = NULL,i_18 = NULL,o_18 = NULL,p_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_4 = ATgetArgument(t, 0);
      if(((ATgetType(t_4) == AT_LIST) && !(ATisEmpty(t_4))))
        {
          h_18 = ATgetFirst((ATermList) t_4);
          i_18 = (ATerm) ATgetNext((ATermList) t_4);
        }
      else
        _fail(t);
      {
        ATerm v_4 = ATgetArgument(t, 1);
        if(((ATgetType(v_4) == AT_LIST) && !(ATisEmpty(v_4))))
          {
            o_18 = ATgetFirst((ATermList) v_4);
            p_18 = (ATerm) ATgetNext((ATermList) v_4);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_18, o_18), (ATerm) ATmakeAppl(sym__2, i_18, p_18));
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm q_18 = NULL,t_18 = NULL;
  if(match_cons(t, sym__2))
    {
      q_18 = ATgetArgument(t, 0);
      t_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_18), q_18);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm w_18 = NULL,y_18 = NULL;
  if(match_cons(t, sym__2))
    {
      w_18 = ATgetArgument(t, 0);
      y_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_18), (ATerm) ATmakeAppl(sym_Match_1, y_18));
  return(t);
}
static ATerm e_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_4 = ATgetArgument(t, 0);
      if(((ATgetType(w_4) != AT_LIST) || !(ATisEmpty(w_4))))
        _fail(t);
      {
        ATerm x_4 = ATgetArgument(t, 1);
        if(((ATgetType(x_4) != AT_LIST) || !(ATisEmpty(x_4))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,p_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_4 = ATgetArgument(t, 0);
      if(((ATgetType(y_4) == AT_LIST) && !(ATisEmpty(y_4))))
        {
          l_25 = ATgetFirst((ATermList) y_4);
          m_25 = (ATerm) ATgetNext((ATermList) y_4);
        }
      else
        _fail(t);
      {
        ATerm a_5 = ATgetArgument(t, 1);
        if(((ATgetType(a_5) == AT_LIST) && !(ATisEmpty(a_5))))
          {
            n_25 = ATgetFirst((ATermList) a_5);
            p_25 = (ATerm) ATgetNext((ATermList) a_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_25, n_25), (ATerm) ATmakeAppl(sym__2, m_25, p_25));
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL;
  if(match_cons(t, sym__2))
    {
      q_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_25), q_25);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm s_25 = NULL,u_25 = NULL;
  if(match_cons(t, sym__2))
    {
      s_25 = ATgetArgument(t, 0);
      u_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_25), (ATerm) ATmakeAppl(sym_Match_1, u_25));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm b_5 = t;
  int d_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm e_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(d_5);
      {
        ATerm t_37 = NULL,v_37 = NULL;
        t_37 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm f_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        v_37 = t;
        t = SSLgetAnnotations(t_37);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_5 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) g_5) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm h_5 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(h_5) != AT_LIST) || !(ATisEmpty(h_5))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_37;
      }
    }
  else
    {
      t = b_5;
      {
        ATerm i_5 = t;
        int j_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm l_5 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) l_5) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm m_5 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(j_5);
            _fail(t);
          }
        else
          {
            t = i_5;
          }
      }
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  static ATerm q_0 (ATerm t);
  static ATerm q_0 (ATerm t)
  {
    ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,k_11 = NULL,n_11 = NULL,q_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL;
    i_12 = t;
    if(match_cons(t, sym_Test_1))
      {
        h_12 = ATgetArgument(t, 0);
        t = h_12;
        if(match_cons(t, sym_Id_0))
          {
            ATerm o_5 = t;
            int p_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_q_5;
                t = q_0(t);
                LocalPopChoice(p_5);
              }
            else
              {
                t = o_5;
                {
                  ATerm r_5 = t;
                  int s_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
                      t = i_12;
                      t = new_0_0(t);
                      k_12 = t;
                      t = bottomup_1_0(q_0, t);
                      v_12 = t;
                      t = (ATerm) ATempty;
                      t = q_0(t);
                      w_12 = t;
                      t = (ATerm) ATinsert(CheckATermList(w_12), v_12);
                      t = q_0(t);
                      l_12 = t;
                      t = k_12;
                      t = bottomup_1_0(q_0, t);
                      u_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, u_12);
                      t = q_0(t);
                      t_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, t_12);
                      t = q_0(t);
                      n_12 = t;
                      t = h_12;
                      t = bottomup_1_0(q_0, t);
                      p_12 = t;
                      t = k_12;
                      t = bottomup_1_0(q_0, t);
                      s_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, s_12);
                      t = q_0(t);
                      r_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, r_12);
                      t = q_0(t);
                      q_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_12, q_12);
                      t = q_0(t);
                      o_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_12, o_12);
                      t = q_0(t);
                      m_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, l_12, m_12);
                      t = q_0(t);
                      LocalPopChoice(s_5);
                    }
                  else
                    {
                      t = r_5;
                      t = i_12;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm t_5 = t;
                int x_5 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_y_5;
                    t = q_0(t);
                    LocalPopChoice(x_5);
                  }
                else
                  {
                    t = t_5;
                    {
                      ATerm z_5 = t;
                      int d_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL;
                          t = i_12;
                          t = new_0_0(t);
                          z_12 = t;
                          t = bottomup_1_0(q_0, t);
                          k_13 = t;
                          t = (ATerm) ATempty;
                          t = q_0(t);
                          l_13 = t;
                          t = (ATerm) ATinsert(CheckATermList(l_13), k_13);
                          t = q_0(t);
                          a_13 = t;
                          t = z_12;
                          t = bottomup_1_0(q_0, t);
                          j_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, j_13);
                          t = q_0(t);
                          i_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, i_13);
                          t = q_0(t);
                          c_13 = t;
                          t = h_12;
                          t = bottomup_1_0(q_0, t);
                          e_13 = t;
                          t = z_12;
                          t = bottomup_1_0(q_0, t);
                          h_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, h_13);
                          t = q_0(t);
                          g_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, g_13);
                          t = q_0(t);
                          f_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_13, f_13);
                          t = q_0(t);
                          d_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_13, d_13);
                          t = q_0(t);
                          b_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, a_13, b_13);
                          t = q_0(t);
                          LocalPopChoice(d_6);
                        }
                      else
                        {
                          t = z_5;
                          t = i_12;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    e_12 = ATgetArgument(t, 0);
                    {
                      ATerm e_6 = t;
                      int f_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, e_12);
                          t = q_0(t);
                          LocalPopChoice(f_6);
                        }
                      else
                        {
                          t = e_6;
                          {
                            ATerm g_6 = t;
                            int h_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,z_13 = NULL,a_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,m_14 = NULL;
                                t = i_12;
                                t = new_0_0(t);
                                p_13 = t;
                                t = bottomup_1_0(q_0, t);
                                f_14 = t;
                                t = (ATerm) ATempty;
                                t = q_0(t);
                                m_14 = t;
                                t = (ATerm) ATinsert(CheckATermList(m_14), f_14);
                                t = q_0(t);
                                q_13 = t;
                                t = p_13;
                                t = bottomup_1_0(q_0, t);
                                e_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, e_14);
                                t = q_0(t);
                                d_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, d_14);
                                t = q_0(t);
                                s_13 = t;
                                t = h_12;
                                t = bottomup_1_0(q_0, t);
                                u_13 = t;
                                t = p_13;
                                t = bottomup_1_0(q_0, t);
                                a_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, a_14);
                                t = q_0(t);
                                z_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, z_13);
                                t = q_0(t);
                                v_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, u_13, v_13);
                                t = q_0(t);
                                t_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, s_13, t_13);
                                t = q_0(t);
                                r_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, q_13, r_13);
                                t = q_0(t);
                                LocalPopChoice(h_6);
                              }
                            else
                              {
                                t = g_6;
                                t = i_12;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm i_6 = t;
                    int k_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,c_15 = NULL,d_15 = NULL,f_15 = NULL,k_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
                        t = i_12;
                        t = new_0_0(t);
                        v_14 = t;
                        t = bottomup_1_0(q_0, t);
                        p_15 = t;
                        t = (ATerm) ATempty;
                        t = q_0(t);
                        q_15 = t;
                        t = (ATerm) ATinsert(CheckATermList(q_15), p_15);
                        t = q_0(t);
                        w_14 = t;
                        t = v_14;
                        t = bottomup_1_0(q_0, t);
                        o_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, o_15);
                        t = q_0(t);
                        n_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, n_15);
                        t = q_0(t);
                        y_14 = t;
                        t = h_12;
                        t = bottomup_1_0(q_0, t);
                        d_15 = t;
                        t = v_14;
                        t = bottomup_1_0(q_0, t);
                        m_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, m_15);
                        t = q_0(t);
                        k_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, k_15);
                        t = q_0(t);
                        f_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_15, f_15);
                        t = q_0(t);
                        c_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_14, c_15);
                        t = q_0(t);
                        x_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, w_14, x_14);
                        t = q_0(t);
                        LocalPopChoice(k_6);
                      }
                    else
                      {
                        t = i_6;
                        t = i_12;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            h_12 = ATgetArgument(t, 0);
            t = h_12;
            if(match_cons(t, sym_Id_0))
              {
                ATerm l_6 = t;
                int m_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_y_5;
                    t = q_0(t);
                    LocalPopChoice(m_6);
                  }
                else
                  {
                    t = l_6;
                    t = i_12;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm n_6 = t;
                    int p_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_q_5;
                        t = q_0(t);
                        LocalPopChoice(p_6);
                      }
                    else
                      {
                        t = n_6;
                        t = i_12;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        e_12 = ATgetArgument(t, 0);
                        {
                          ATerm q_6 = t;
                          int r_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, e_12);
                              t = q_0(t);
                              LocalPopChoice(r_6);
                            }
                          else
                            {
                              t = q_6;
                              t = i_12;
                            }
                        }
                      }
                    else
                      {
                        t = i_12;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                h_12 = ATgetArgument(t, 0);
                g_12 = ATgetArgument(t, 1);
                t = g_12;
                if(match_cons(t, sym_Id_0))
                  {
                    t = h_12;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = g_12;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = h_12;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                e_12 = ATgetArgument(t, 0);
                                f_12 = ATgetArgument(t, 1);
                                t = h_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    e_12 = ATgetArgument(t, 0);
                                    f_12 = ATgetArgument(t, 1);
                                    t = h_12;
                                  }
                                else
                                  {
                                    t = h_12;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        c_12 = ATgetArgument(t, 0);
                        d_12 = ATgetArgument(t, 1);
                        t = c_12;
                        if(match_cons(t, sym_Match_1))
                          {
                            b_12 = ATgetArgument(t, 0);
                            t = b_12;
                            if(match_cons(t, sym_Op_2))
                              {
                                z_11 = ATgetArgument(t, 0);
                                u_11 = ATgetArgument(t, 1);
                                t = h_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = g_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm s_6 = t;
                                        int t_6 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_y_5;
                                            t = q_0(t);
                                            LocalPopChoice(t_6);
                                          }
                                        else
                                          {
                                            t = s_6;
                                            t = i_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            e_12 = ATgetArgument(t, 0);
                                            f_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm u_6 = t;
                                              int w_6 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm x_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                  t = q_0(t);
                                                  x_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, x_17);
                                                  t = q_0(t);
                                                  LocalPopChoice(w_6);
                                                }
                                              else
                                                {
                                                  t = u_6;
                                                  t = i_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                e_12 = ATgetArgument(t, 0);
                                                t = e_12;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    a_12 = ATgetArgument(t, 0);
                                                    v_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm z_6 = t;
                                                      int a_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, a_12, z_11);
                                                          {
                                                            ATerm c_7 = t;
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
                                                                t = c_7;
                                                              }
                                                          }
                                                          t = term_y_5;
                                                          t = bottomup_1_0(q_0, t);
                                                          LocalPopChoice(a_7);
                                                        }
                                                      else
                                                        {
                                                          t = z_6;
                                                          {
                                                            ATerm e_7 = t;
                                                            int g_7 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm g_18 = NULL;
                                                                t = z_11;
                                                                if((a_12 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, v_11, u_11);
                                                                t = genzip_4_0(t_0, v_0, y_0, a_1, t);
                                                                g_18 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, a_12, v_11)), d_12));
                                                                t = bottomup_1_0(q_0, t);
                                                                LocalPopChoice(g_7);
                                                              }
                                                            else
                                                              {
                                                                t = e_7;
                                                                {
                                                                  ATerm m_7 = t;
                                                                  int n_7 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm f_19 = NULL;
                                                                      t = b_12;
                                                                      if((e_12 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, e_12);
                                                                      t = q_0(t);
                                                                      f_19 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_19, d_12);
                                                                      t = q_0(t);
                                                                      LocalPopChoice(n_7);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = m_7;
                                                                      t = i_12;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm o_7 = t;
                                                    int p_7 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm q_19 = NULL;
                                                        t = b_12;
                                                        if((e_12 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, e_12);
                                                        t = q_0(t);
                                                        q_19 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, q_19, d_12);
                                                        t = q_0(t);
                                                        LocalPopChoice(p_7);
                                                      }
                                                    else
                                                      {
                                                        t = o_7;
                                                        t = i_12;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    e_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm q_7 = t;
                                                      int r_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm v_19 = NULL;
                                                          t = b_12;
                                                          if((e_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, e_12);
                                                          t = q_0(t);
                                                          v_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_19, d_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(r_7);
                                                        }
                                                      else
                                                        {
                                                          t = q_7;
                                                          t = i_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        e_12 = ATgetArgument(t, 0);
                                                        f_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_7 = t;
                                                          int t_7 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                              t = q_0(t);
                                                              a_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, a_20);
                                                              t = q_0(t);
                                                              LocalPopChoice(t_7);
                                                            }
                                                          else
                                                            {
                                                              t = s_7;
                                                              t = i_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = i_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = h_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = g_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm u_7 = t;
                                        int v_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_y_5;
                                            t = q_0(t);
                                            LocalPopChoice(v_7);
                                          }
                                        else
                                          {
                                            t = u_7;
                                            t = i_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            e_12 = ATgetArgument(t, 0);
                                            f_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm w_7 = t;
                                              int x_7 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm j_20 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                  t = q_0(t);
                                                  j_20 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, j_20);
                                                  t = q_0(t);
                                                  LocalPopChoice(x_7);
                                                }
                                              else
                                                {
                                                  t = w_7;
                                                  t = i_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                e_12 = ATgetArgument(t, 0);
                                                {
                                                  ATerm y_7 = t;
                                                  int z_7 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm n_20 = NULL;
                                                      t = b_12;
                                                      if((e_12 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, e_12);
                                                      t = q_0(t);
                                                      n_20 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_20, d_12);
                                                      t = q_0(t);
                                                      LocalPopChoice(z_7);
                                                    }
                                                  else
                                                    {
                                                      t = y_7;
                                                      t = i_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    e_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm a_8 = t;
                                                      int b_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm r_20 = NULL;
                                                          t = b_12;
                                                          if((e_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, e_12);
                                                          t = q_0(t);
                                                          r_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_20, d_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(b_8);
                                                        }
                                                      else
                                                        {
                                                          t = a_8;
                                                          t = i_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        e_12 = ATgetArgument(t, 0);
                                                        f_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm c_8 = t;
                                                          int d_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                              t = q_0(t);
                                                              y_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, y_20);
                                                              t = q_0(t);
                                                              LocalPopChoice(d_8);
                                                            }
                                                          else
                                                            {
                                                              t = c_8;
                                                              t = i_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = i_12;
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
                                b_12 = ATgetArgument(t, 0);
                                t = b_12;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    z_11 = ATgetArgument(t, 0);
                                    t = h_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = g_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm e_8 = t;
                                            int f_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_y_5;
                                                t = q_0(t);
                                                LocalPopChoice(f_8);
                                              }
                                            else
                                              {
                                                t = e_8;
                                                t = i_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                e_12 = ATgetArgument(t, 0);
                                                f_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm g_8 = t;
                                                  int h_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm n_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                      t = q_0(t);
                                                      n_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, n_21);
                                                      t = q_0(t);
                                                      LocalPopChoice(h_8);
                                                    }
                                                  else
                                                    {
                                                      t = g_8;
                                                      t = i_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm i_8 = t;
                                                int j_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm k_8 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(j_8);
                                                    {
                                                      ATerm l_8 = t;
                                                      int m_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm t_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, b_12);
                                                          t = q_0(t);
                                                          t_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_21, d_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(m_8);
                                                        }
                                                      else
                                                        {
                                                          t = l_8;
                                                          t = i_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = i_8;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        e_12 = ATgetArgument(t, 0);
                                                        t = e_12;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            a_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm n_8 = t;
                                                              int o_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm d_22 = NULL,e_22 = NULL;
                                                                  t = z_11;
                                                                  if((a_12 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, a_12);
                                                                  t = q_0(t);
                                                                  e_22 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, e_22);
                                                                  t = q_0(t);
                                                                  d_22 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_22, d_12);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(o_8);
                                                                }
                                                              else
                                                                {
                                                                  t = n_8;
                                                                  t = i_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = i_12;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            e_12 = ATgetArgument(t, 0);
                                                            f_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm p_8 = t;
                                                              int q_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_22 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                                  t = q_0(t);
                                                                  m_22 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, m_22);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(q_8);
                                                                }
                                                              else
                                                                {
                                                                  t = p_8;
                                                                  t = i_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = i_12;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = h_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = g_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm r_8 = t;
                                            int s_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_y_5;
                                                t = q_0(t);
                                                LocalPopChoice(s_8);
                                              }
                                            else
                                              {
                                                t = r_8;
                                                t = i_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                e_12 = ATgetArgument(t, 0);
                                                f_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm t_8 = t;
                                                  int u_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm v_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                      t = q_0(t);
                                                      v_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, v_22);
                                                      t = q_0(t);
                                                      LocalPopChoice(u_8);
                                                    }
                                                  else
                                                    {
                                                      t = t_8;
                                                      t = i_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm v_8 = t;
                                                int w_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm x_8 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(w_8);
                                                    {
                                                      ATerm y_8 = t;
                                                      int z_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm z_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, b_12);
                                                          t = q_0(t);
                                                          z_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_22, d_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(z_8);
                                                        }
                                                      else
                                                        {
                                                          t = y_8;
                                                          t = i_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = v_8;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        e_12 = ATgetArgument(t, 0);
                                                        f_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_9 = t;
                                                          int b_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm e_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                              t = q_0(t);
                                                              e_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, e_23);
                                                              t = q_0(t);
                                                              LocalPopChoice(b_9);
                                                            }
                                                          else
                                                            {
                                                              t = a_9;
                                                              t = i_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = i_12;
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
                                    b_12 = ATgetArgument(t, 0);
                                    w_11 = ATgetArgument(t, 1);
                                    x_11 = ATgetArgument(t, 2);
                                    t = h_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = g_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm c_9 = t;
                                            int d_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_y_5;
                                                t = q_0(t);
                                                LocalPopChoice(d_9);
                                              }
                                            else
                                              {
                                                t = c_9;
                                                t = i_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                e_12 = ATgetArgument(t, 0);
                                                f_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm e_9 = t;
                                                  int f_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                      t = q_0(t);
                                                      q_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, q_23);
                                                      t = q_0(t);
                                                      LocalPopChoice(f_9);
                                                    }
                                                  else
                                                    {
                                                      t = e_9;
                                                      t = i_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm g_9 = t;
                                                int h_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm i_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(h_9);
                                                    {
                                                      ATerm j_9 = t;
                                                      int k_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm a_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, b_12, w_11, x_11);
                                                          t = q_0(t);
                                                          a_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_24, d_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(k_9);
                                                        }
                                                      else
                                                        {
                                                          t = j_9;
                                                          t = i_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = g_9;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        e_12 = ATgetArgument(t, 0);
                                                        f_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm l_9 = t;
                                                          int m_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_24 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                              t = q_0(t);
                                                              i_24 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, i_24);
                                                              t = q_0(t);
                                                              LocalPopChoice(m_9);
                                                            }
                                                          else
                                                            {
                                                              t = l_9;
                                                              t = i_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = i_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = h_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = g_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm n_9 = t;
                                            int o_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_y_5;
                                                t = q_0(t);
                                                LocalPopChoice(o_9);
                                              }
                                            else
                                              {
                                                t = n_9;
                                                t = i_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                e_12 = ATgetArgument(t, 0);
                                                f_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm p_9 = t;
                                                  int q_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_24 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                      t = q_0(t);
                                                      r_24 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, r_24);
                                                      t = q_0(t);
                                                      LocalPopChoice(q_9);
                                                    }
                                                  else
                                                    {
                                                      t = p_9;
                                                      t = i_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    e_12 = ATgetArgument(t, 0);
                                                    f_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm r_9 = t;
                                                      int s_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm w_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                          t = q_0(t);
                                                          w_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, w_24);
                                                          t = q_0(t);
                                                          LocalPopChoice(s_9);
                                                        }
                                                      else
                                                        {
                                                          t = r_9;
                                                          t = i_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = i_12;
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
                            c_12 = ATgetArgument(t, 0);
                            t = c_12;
                            if(match_cons(t, sym_Op_2))
                              {
                                b_12 = ATgetArgument(t, 0);
                                w_11 = ATgetArgument(t, 1);
                                t = h_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = g_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm t_9 = t;
                                        int u_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_y_5;
                                            t = q_0(t);
                                            LocalPopChoice(u_9);
                                          }
                                        else
                                          {
                                            t = t_9;
                                            t = i_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            e_12 = ATgetArgument(t, 0);
                                            f_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm v_9 = t;
                                              int w_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm f_25 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                  t = q_0(t);
                                                  f_25 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, f_25);
                                                  t = q_0(t);
                                                  LocalPopChoice(w_9);
                                                }
                                              else
                                                {
                                                  t = v_9;
                                                  t = i_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                e_12 = ATgetArgument(t, 0);
                                                t = e_12;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    a_12 = ATgetArgument(t, 0);
                                                    v_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm x_9 = t;
                                                      int y_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, a_12, b_12);
                                                          {
                                                            ATerm z_9 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_2 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    o_2 = ATgetArgument(t, 0);
                                                                    if((o_2 != ATgetArgument(t, 1)))
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
                                                                t = z_9;
                                                              }
                                                          }
                                                          t = term_y_5;
                                                          t = bottomup_1_0(q_0, t);
                                                          LocalPopChoice(y_9);
                                                        }
                                                      else
                                                        {
                                                          t = x_9;
                                                          {
                                                            ATerm a_10 = t;
                                                            int b_10 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm k_25 = NULL;
                                                                t = b_12;
                                                                if((a_12 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, v_11, w_11);
                                                                t = genzip_4_0(e_1, g_1, h_1, j_1, t);
                                                                k_25 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, k_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, a_12, v_11)));
                                                                t = bottomup_1_0(q_0, t);
                                                                LocalPopChoice(b_10);
                                                              }
                                                            else
                                                              {
                                                                t = a_10;
                                                                {
                                                                  ATerm c_10 = t;
                                                                  int d_10 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = c_12;
                                                                      if((e_12 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, e_12);
                                                                      t = q_0(t);
                                                                      LocalPopChoice(d_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = c_10;
                                                                      t = i_12;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm e_10 = t;
                                                    int f_10 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = c_12;
                                                        if((e_12 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, e_12);
                                                        t = q_0(t);
                                                        LocalPopChoice(f_10);
                                                      }
                                                    else
                                                      {
                                                        t = e_10;
                                                        t = i_12;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    e_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm g_10 = t;
                                                      int h_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = c_12;
                                                          if((e_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, e_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(h_10);
                                                        }
                                                      else
                                                        {
                                                          t = g_10;
                                                          t = i_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        e_12 = ATgetArgument(t, 0);
                                                        f_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm i_10 = t;
                                                          int j_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                              t = q_0(t);
                                                              i_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, i_26);
                                                              t = q_0(t);
                                                              LocalPopChoice(j_10);
                                                            }
                                                          else
                                                            {
                                                              t = i_10;
                                                              t = i_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = i_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = h_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = g_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm k_10 = t;
                                        int l_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_y_5;
                                            t = q_0(t);
                                            LocalPopChoice(l_10);
                                          }
                                        else
                                          {
                                            t = k_10;
                                            t = i_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            e_12 = ATgetArgument(t, 0);
                                            f_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm m_10 = t;
                                              int n_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm b_27 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                  t = q_0(t);
                                                  b_27 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, b_27);
                                                  t = q_0(t);
                                                  LocalPopChoice(n_10);
                                                }
                                              else
                                                {
                                                  t = m_10;
                                                  t = i_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                e_12 = ATgetArgument(t, 0);
                                                {
                                                  ATerm o_10 = t;
                                                  int p_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = c_12;
                                                      if((e_12 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, e_12);
                                                      t = q_0(t);
                                                      LocalPopChoice(p_10);
                                                    }
                                                  else
                                                    {
                                                      t = o_10;
                                                      t = i_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    e_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm q_10 = t;
                                                      int r_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = c_12;
                                                          if((e_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, e_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(r_10);
                                                        }
                                                      else
                                                        {
                                                          t = q_10;
                                                          t = i_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        e_12 = ATgetArgument(t, 0);
                                                        f_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_10 = t;
                                                          int t_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                              t = q_0(t);
                                                              v_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, v_27);
                                                              t = q_0(t);
                                                              LocalPopChoice(t_10);
                                                            }
                                                          else
                                                            {
                                                              t = s_10;
                                                              t = i_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = i_12;
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
                                c_12 = ATgetArgument(t, 0);
                                t = c_12;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    b_12 = ATgetArgument(t, 0);
                                    t = h_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = g_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm u_10 = t;
                                            int v_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_y_5;
                                                t = q_0(t);
                                                LocalPopChoice(v_10);
                                              }
                                            else
                                              {
                                                t = u_10;
                                                t = i_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                e_12 = ATgetArgument(t, 0);
                                                f_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm w_10 = t;
                                                  int x_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm l_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                      t = q_0(t);
                                                      l_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, l_28);
                                                      t = q_0(t);
                                                      LocalPopChoice(x_10);
                                                    }
                                                  else
                                                    {
                                                      t = w_10;
                                                      t = i_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm j_12 = t;
                                                int x_12 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm y_12 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(x_12);
                                                    {
                                                      ATerm m_13 = t;
                                                      int n_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(n_13);
                                                        }
                                                      else
                                                        {
                                                          t = m_13;
                                                          t = i_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = j_12;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        e_12 = ATgetArgument(t, 0);
                                                        t = e_12;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            a_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm o_13 = t;
                                                              int w_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm s_28 = NULL;
                                                                  t = b_12;
                                                                  if((a_12 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, a_12);
                                                                  t = q_0(t);
                                                                  s_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, s_28);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(w_13);
                                                                }
                                                              else
                                                                {
                                                                  t = o_13;
                                                                  t = i_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = i_12;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            e_12 = ATgetArgument(t, 0);
                                                            f_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm x_13 = t;
                                                              int y_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_29 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                                  t = q_0(t);
                                                                  e_29 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, e_29);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(y_13);
                                                                }
                                                              else
                                                                {
                                                                  t = x_13;
                                                                  t = i_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = i_12;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = h_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = g_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm b_14 = t;
                                            int c_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_y_5;
                                                t = q_0(t);
                                                LocalPopChoice(c_14);
                                              }
                                            else
                                              {
                                                t = b_14;
                                                t = i_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                e_12 = ATgetArgument(t, 0);
                                                f_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm g_14 = t;
                                                  int h_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                      t = q_0(t);
                                                      p_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, p_29);
                                                      t = q_0(t);
                                                      LocalPopChoice(h_14);
                                                    }
                                                  else
                                                    {
                                                      t = g_14;
                                                      t = i_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm i_14 = t;
                                                int j_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm k_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(j_14);
                                                    {
                                                      ATerm l_14 = t;
                                                      int n_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(n_14);
                                                        }
                                                      else
                                                        {
                                                          t = l_14;
                                                          t = i_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = i_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        e_12 = ATgetArgument(t, 0);
                                                        f_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm o_14 = t;
                                                          int p_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                              t = q_0(t);
                                                              a_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, a_30);
                                                              t = q_0(t);
                                                              LocalPopChoice(p_14);
                                                            }
                                                          else
                                                            {
                                                              t = o_14;
                                                              t = i_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = i_12;
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
                                    c_12 = ATgetArgument(t, 0);
                                    d_12 = ATgetArgument(t, 1);
                                    y_11 = ATgetArgument(t, 2);
                                    t = h_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = g_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm q_14 = t;
                                            int r_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_y_5;
                                                t = q_0(t);
                                                LocalPopChoice(r_14);
                                              }
                                            else
                                              {
                                                t = q_14;
                                                t = i_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                e_12 = ATgetArgument(t, 0);
                                                f_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm s_14 = t;
                                                  int t_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm n_30 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                      t = q_0(t);
                                                      n_30 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, n_30);
                                                      t = q_0(t);
                                                      LocalPopChoice(t_14);
                                                    }
                                                  else
                                                    {
                                                      t = s_14;
                                                      t = i_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm u_14 = t;
                                                int z_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm a_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(z_14);
                                                    {
                                                      ATerm b_15 = t;
                                                      int e_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, c_12, d_12, y_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(e_15);
                                                        }
                                                      else
                                                        {
                                                          t = b_15;
                                                          t = i_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = u_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        e_12 = ATgetArgument(t, 0);
                                                        f_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_15 = t;
                                                          int h_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                              t = q_0(t);
                                                              y_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, y_30);
                                                              t = q_0(t);
                                                              LocalPopChoice(h_15);
                                                            }
                                                          else
                                                            {
                                                              t = g_15;
                                                              t = i_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = i_12;
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
                                        c_12 = ATgetArgument(t, 0);
                                        d_12 = ATgetArgument(t, 1);
                                        t = h_12;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = g_12;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm i_15 = t;
                                                int j_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_y_5;
                                                    t = q_0(t);
                                                    LocalPopChoice(j_15);
                                                  }
                                                else
                                                  {
                                                    t = i_15;
                                                    {
                                                      ATerm l_15 = t;
                                                      int r_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm k_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, d_12);
                                                          t = q_0(t);
                                                          k_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, c_12, k_31);
                                                          t = q_0(t);
                                                          LocalPopChoice(r_15);
                                                        }
                                                      else
                                                        {
                                                          t = l_15;
                                                          t = i_12;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    e_12 = ATgetArgument(t, 0);
                                                    f_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm s_15 = t;
                                                      int t_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                          t = q_0(t);
                                                          p_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, p_31);
                                                          t = q_0(t);
                                                          LocalPopChoice(t_15);
                                                        }
                                                      else
                                                        {
                                                          t = s_15;
                                                          {
                                                            ATerm u_15 = t;
                                                            int v_15 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm z_31 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, d_12);
                                                                t = q_0(t);
                                                                z_31 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, c_12, z_31);
                                                                t = q_0(t);
                                                                LocalPopChoice(v_15);
                                                              }
                                                            else
                                                              {
                                                                t = u_15;
                                                                t = i_12;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        e_12 = ATgetArgument(t, 0);
                                                        f_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_15 = t;
                                                          int x_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, d_12);
                                                              t = q_0(t);
                                                              g_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, c_12, g_32);
                                                              t = q_0(t);
                                                              LocalPopChoice(x_15);
                                                            }
                                                          else
                                                            {
                                                              t = w_15;
                                                              {
                                                                ATerm y_15 = t;
                                                                int z_15 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm k_32 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                                    t = q_0(t);
                                                                    k_32 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, k_32);
                                                                    t = q_0(t);
                                                                    LocalPopChoice(z_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = y_15;
                                                                    t = i_12;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm a_16 = t;
                                                        int b_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm p_32 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, d_12);
                                                            t = q_0(t);
                                                            p_32 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, c_12, p_32);
                                                            t = q_0(t);
                                                            LocalPopChoice(b_16);
                                                          }
                                                        else
                                                          {
                                                            t = a_16;
                                                            t = i_12;
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
                                            c_12 = ATgetArgument(t, 0);
                                            d_12 = ATgetArgument(t, 1);
                                            t = h_12;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = g_12;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm c_16 = t;
                                                    int d_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_y_5;
                                                        t = q_0(t);
                                                        LocalPopChoice(d_16);
                                                      }
                                                    else
                                                      {
                                                        t = c_16;
                                                        {
                                                          ATerm e_16 = t;
                                                          int f_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, d_12);
                                                              t = q_0(t);
                                                              h_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, h_33);
                                                              t = q_0(t);
                                                              LocalPopChoice(f_16);
                                                            }
                                                          else
                                                            {
                                                              t = e_16;
                                                              t = i_12;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        e_12 = ATgetArgument(t, 0);
                                                        f_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_16 = t;
                                                          int h_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                              t = q_0(t);
                                                              n_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, n_33);
                                                              t = q_0(t);
                                                              LocalPopChoice(h_16);
                                                            }
                                                          else
                                                            {
                                                              t = g_16;
                                                              {
                                                                ATerm i_16 = t;
                                                                int j_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm r_33 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, d_12);
                                                                    t = q_0(t);
                                                                    r_33 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, r_33);
                                                                    t = q_0(t);
                                                                    LocalPopChoice(j_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = i_16;
                                                                    t = i_12;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            e_12 = ATgetArgument(t, 0);
                                                            f_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm k_16 = t;
                                                              int l_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_33 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, d_12);
                                                                  t = q_0(t);
                                                                  y_33 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, y_33);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(l_16);
                                                                }
                                                              else
                                                                {
                                                                  t = k_16;
                                                                  {
                                                                    ATerm m_16 = t;
                                                                    int n_16 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm c_34 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                                        t = q_0(t);
                                                                        c_34 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, c_34);
                                                                        t = q_0(t);
                                                                        LocalPopChoice(n_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_16;
                                                                        t = i_12;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm o_16 = t;
                                                            int p_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm l_34 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, d_12);
                                                                t = q_0(t);
                                                                l_34 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, l_34);
                                                                t = q_0(t);
                                                                LocalPopChoice(p_16);
                                                              }
                                                            else
                                                              {
                                                                t = o_16;
                                                                t = i_12;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = h_12;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = g_12;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm q_16 = t;
                                                    int r_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_y_5;
                                                        t = q_0(t);
                                                        LocalPopChoice(r_16);
                                                      }
                                                    else
                                                      {
                                                        t = q_16;
                                                        t = i_12;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        e_12 = ATgetArgument(t, 0);
                                                        f_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_16 = t;
                                                          int t_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                              t = q_0(t);
                                                              x_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, x_34);
                                                              t = q_0(t);
                                                              LocalPopChoice(t_16);
                                                            }
                                                          else
                                                            {
                                                              t = s_16;
                                                              t = i_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            e_12 = ATgetArgument(t, 0);
                                                            f_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm u_16 = t;
                                                              int v_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm g_35 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                                  t = q_0(t);
                                                                  g_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, g_35);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(v_16);
                                                                }
                                                              else
                                                                {
                                                                  t = u_16;
                                                                  t = i_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = i_12;
                                                          }
                                                      }
                                                  }
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
                    h_12 = ATgetArgument(t, 0);
                    g_12 = ATgetArgument(t, 1);
                    t = g_12;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = h_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm w_16 = t;
                            int x_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_q_5;
                                t = q_0(t);
                                LocalPopChoice(x_16);
                              }
                            else
                              {
                                t = w_16;
                                t = h_12;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = g_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    e_12 = ATgetArgument(t, 0);
                                    f_12 = ATgetArgument(t, 1);
                                    t = h_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        e_12 = ATgetArgument(t, 0);
                                        t = h_12;
                                      }
                                    else
                                      {
                                        t = h_12;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = h_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm y_16 = t;
                            int z_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_q_5;
                                t = q_0(t);
                                LocalPopChoice(z_16);
                              }
                            else
                              {
                                t = y_16;
                                {
                                  ATerm a_17 = t;
                                  int b_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = g_12;
                                      if((h_12 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(b_17);
                                    }
                                  else
                                    {
                                      t = a_17;
                                      t = i_12;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = g_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    e_12 = ATgetArgument(t, 0);
                                    f_12 = ATgetArgument(t, 1);
                                    {
                                      ATerm c_17 = t;
                                      int d_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm o_37 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, f_12, g_12);
                                          t = q_0(t);
                                          o_37 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, e_12, o_37);
                                          t = q_0(t);
                                          LocalPopChoice(d_17);
                                        }
                                      else
                                        {
                                          t = c_17;
                                          {
                                            ATerm e_17 = t;
                                            int f_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = g_12;
                                                if((h_12 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(f_17);
                                              }
                                            else
                                              {
                                                t = e_17;
                                                t = i_12;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        e_12 = ATgetArgument(t, 0);
                                        {
                                          ATerm g_17 = t;
                                          int h_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = g_12;
                                              if((h_12 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(h_17);
                                            }
                                          else
                                            {
                                              t = g_17;
                                              {
                                                ATerm i_17 = t;
                                                int j_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = e_12;
                                                    t = topdown_1_0(k_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, e_12);
                                                    t = bottomup_1_0(q_0, t);
                                                    LocalPopChoice(j_17);
                                                  }
                                                else
                                                  {
                                                    t = i_17;
                                                    t = i_12;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm k_17 = t;
                                        int l_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = g_12;
                                            if((h_12 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(l_17);
                                          }
                                        else
                                          {
                                            t = k_17;
                                            t = i_12;
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
                        h_12 = ATgetArgument(t, 0);
                        g_12 = ATgetArgument(t, 1);
                        t = g_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = h_12;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm m_17 = t;
                                int n_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_q_5;
                                    t = q_0(t);
                                    LocalPopChoice(n_17);
                                  }
                                else
                                  {
                                    t = m_17;
                                    t = g_12;
                                  }
                              }
                            else
                              {
                                ATerm o_17 = t;
                                int p_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_q_5;
                                    t = q_0(t);
                                    LocalPopChoice(p_17);
                                  }
                                else
                                  {
                                    t = o_17;
                                    t = i_12;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = h_12;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm q_17 = t;
                                    int r_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_y_5;
                                        t = q_0(t);
                                        LocalPopChoice(r_17);
                                      }
                                    else
                                      {
                                        t = q_17;
                                        t = g_12;
                                      }
                                  }
                                else
                                  {
                                    ATerm s_17 = t;
                                    int t_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_y_5;
                                        t = q_0(t);
                                        LocalPopChoice(t_17);
                                      }
                                    else
                                      {
                                        t = s_17;
                                        t = i_12;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    c_12 = ATgetArgument(t, 0);
                                    d_12 = ATgetArgument(t, 1);
                                    t = h_12;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = g_12;
                                      }
                                    else
                                      {
                                        ATerm u_17 = t;
                                        int v_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm r_38 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, h_12, c_12);
                                            t = conc_0_0(t);
                                            r_38 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, r_38, d_12);
                                            t = bottomup_1_0(q_0, t);
                                            LocalPopChoice(v_17);
                                          }
                                        else
                                          {
                                            t = u_17;
                                            t = i_12;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = h_12;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = g_12;
                                      }
                                    else
                                      {
                                        t = i_12;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm w_17 = t;
                        int y_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm z_17 = ATgetArgument(t, 0);
                                g_12 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(y_17);
                            t = g_12;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm a_18 = t;
                                int b_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_q_5;
                                    t = q_0(t);
                                    LocalPopChoice(b_18);
                                  }
                                else
                                  {
                                    t = a_18;
                                    t = i_12;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm c_18 = t;
                                    int d_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_y_5;
                                        t = q_0(t);
                                        LocalPopChoice(d_18);
                                      }
                                    else
                                      {
                                        t = c_18;
                                        t = i_12;
                                      }
                                  }
                                else
                                  {
                                    t = i_12;
                                  }
                              }
                          }
                        else
                          {
                            t = w_17;
                            if(match_cons(t, sym_All_1))
                              {
                                h_12 = ATgetArgument(t, 0);
                                t = h_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm e_18 = t;
                                    int f_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_q_5;
                                        t = q_0(t);
                                        LocalPopChoice(f_18);
                                      }
                                    else
                                      {
                                        t = e_18;
                                        t = i_12;
                                      }
                                  }
                                else
                                  {
                                    t = i_12;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    h_12 = ATgetArgument(t, 0);
                                    t = h_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm j_18 = t;
                                        int k_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_q_5;
                                            t = q_0(t);
                                            LocalPopChoice(k_18);
                                          }
                                        else
                                          {
                                            t = j_18;
                                            {
                                              ATerm l_18 = t;
                                              int m_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL;
                                                  t = i_12;
                                                  t = new_0_0(t);
                                                  c_39 = t;
                                                  t = bottomup_1_0(q_0, t);
                                                  p_39 = t;
                                                  t = (ATerm) ATempty;
                                                  t = q_0(t);
                                                  q_39 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(q_39), p_39);
                                                  t = q_0(t);
                                                  d_39 = t;
                                                  t = c_39;
                                                  t = bottomup_1_0(q_0, t);
                                                  o_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, o_39);
                                                  t = q_0(t);
                                                  n_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, n_39);
                                                  t = q_0(t);
                                                  f_39 = t;
                                                  t = h_12;
                                                  t = bottomup_1_0(q_0, t);
                                                  h_39 = t;
                                                  t = c_39;
                                                  t = bottomup_1_0(q_0, t);
                                                  m_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, m_39);
                                                  t = q_0(t);
                                                  l_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, l_39);
                                                  t = q_0(t);
                                                  k_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_39, k_39);
                                                  t = q_0(t);
                                                  g_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_39, g_39);
                                                  t = q_0(t);
                                                  e_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, d_39, e_39);
                                                  t = q_0(t);
                                                  LocalPopChoice(m_18);
                                                }
                                              else
                                                {
                                                  t = l_18;
                                                  t = i_12;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm n_18 = t;
                                            int r_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_y_5;
                                                t = q_0(t);
                                                LocalPopChoice(r_18);
                                              }
                                            else
                                              {
                                                t = n_18;
                                                {
                                                  ATerm s_18 = t;
                                                  int u_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL;
                                                      t = i_12;
                                                      t = new_0_0(t);
                                                      t_39 = t;
                                                      t = bottomup_1_0(q_0, t);
                                                      e_40 = t;
                                                      t = (ATerm) ATempty;
                                                      t = q_0(t);
                                                      f_40 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(f_40), e_40);
                                                      t = q_0(t);
                                                      u_39 = t;
                                                      t = t_39;
                                                      t = bottomup_1_0(q_0, t);
                                                      d_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, d_40);
                                                      t = q_0(t);
                                                      c_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, c_40);
                                                      t = q_0(t);
                                                      w_39 = t;
                                                      t = h_12;
                                                      t = bottomup_1_0(q_0, t);
                                                      y_39 = t;
                                                      t = t_39;
                                                      t = bottomup_1_0(q_0, t);
                                                      b_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, b_40);
                                                      t = q_0(t);
                                                      a_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, a_40);
                                                      t = q_0(t);
                                                      z_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_39, z_39);
                                                      t = q_0(t);
                                                      x_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_39, x_39);
                                                      t = q_0(t);
                                                      v_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, u_39, v_39);
                                                      t = q_0(t);
                                                      LocalPopChoice(u_18);
                                                    }
                                                  else
                                                    {
                                                      t = s_18;
                                                      t = i_12;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                e_12 = ATgetArgument(t, 0);
                                                f_12 = ATgetArgument(t, 1);
                                                t = f_12;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    z_10 = ATgetArgument(t, 0);
                                                    k_11 = ATgetArgument(t, 1);
                                                    t = z_10;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        a_11 = ATgetArgument(t, 0);
                                                        t = e_12;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            a_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm v_18 = t;
                                                              int x_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, a_11);
                                                                  t = q_0(t);
                                                                  m_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_40, k_11);
                                                                  t = q_0(t);
                                                                  l_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_12, l_40);
                                                                  t = q_0(t);
                                                                  k_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, k_40);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(x_18);
                                                                }
                                                              else
                                                                {
                                                                  t = v_18;
                                                                  {
                                                                    ATerm z_18 = t;
                                                                    int a_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm p_40 = NULL,q_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL;
                                                                        t = i_12;
                                                                        t = new_0_0(t);
                                                                        p_40 = t;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        b_41 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = q_0(t);
                                                                        c_41 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(c_41), b_41);
                                                                        t = q_0(t);
                                                                        q_40 = t;
                                                                        t = p_40;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        a_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, a_41);
                                                                        t = q_0(t);
                                                                        z_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, z_40);
                                                                        t = q_0(t);
                                                                        t_40 = t;
                                                                        t = h_12;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        v_40 = t;
                                                                        t = p_40;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        y_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, y_40);
                                                                        t = q_0(t);
                                                                        x_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, x_40);
                                                                        t = q_0(t);
                                                                        w_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, v_40, w_40);
                                                                        t = q_0(t);
                                                                        u_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_40, u_40);
                                                                        t = q_0(t);
                                                                        s_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, q_40, s_40);
                                                                        t = q_0(t);
                                                                        LocalPopChoice(a_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = z_18;
                                                                        t = i_12;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm b_19 = t;
                                                            int c_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm h_41 = NULL,i_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL;
                                                                t = i_12;
                                                                t = new_0_0(t);
                                                                h_41 = t;
                                                                t = bottomup_1_0(q_0, t);
                                                                t_41 = t;
                                                                t = (ATerm) ATempty;
                                                                t = q_0(t);
                                                                u_41 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(u_41), t_41);
                                                                t = q_0(t);
                                                                i_41 = t;
                                                                t = h_41;
                                                                t = bottomup_1_0(q_0, t);
                                                                s_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, s_41);
                                                                t = q_0(t);
                                                                r_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, r_41);
                                                                t = q_0(t);
                                                                l_41 = t;
                                                                t = h_12;
                                                                t = bottomup_1_0(q_0, t);
                                                                n_41 = t;
                                                                t = h_41;
                                                                t = bottomup_1_0(q_0, t);
                                                                q_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, q_41);
                                                                t = q_0(t);
                                                                p_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, p_41);
                                                                t = q_0(t);
                                                                o_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, n_41, o_41);
                                                                t = q_0(t);
                                                                m_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, l_41, m_41);
                                                                t = q_0(t);
                                                                k_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, i_41, k_41);
                                                                t = q_0(t);
                                                                LocalPopChoice(c_19);
                                                              }
                                                            else
                                                              {
                                                                t = b_19;
                                                                t = i_12;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = e_12;
                                                        {
                                                          ATerm d_19 = t;
                                                          int e_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
                                                              t = i_12;
                                                              t = new_0_0(t);
                                                              y_41 = t;
                                                              t = bottomup_1_0(q_0, t);
                                                              j_42 = t;
                                                              t = (ATerm) ATempty;
                                                              t = q_0(t);
                                                              k_42 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(k_42), j_42);
                                                              t = q_0(t);
                                                              z_41 = t;
                                                              t = y_41;
                                                              t = bottomup_1_0(q_0, t);
                                                              i_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, i_42);
                                                              t = q_0(t);
                                                              h_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, h_42);
                                                              t = q_0(t);
                                                              b_42 = t;
                                                              t = h_12;
                                                              t = bottomup_1_0(q_0, t);
                                                              d_42 = t;
                                                              t = y_41;
                                                              t = bottomup_1_0(q_0, t);
                                                              g_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, g_42);
                                                              t = q_0(t);
                                                              f_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, f_42);
                                                              t = q_0(t);
                                                              e_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_42, e_42);
                                                              t = q_0(t);
                                                              c_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_42, c_42);
                                                              t = q_0(t);
                                                              a_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_41, a_42);
                                                              t = q_0(t);
                                                              LocalPopChoice(e_19);
                                                            }
                                                          else
                                                            {
                                                              t = d_19;
                                                              t = i_12;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = e_12;
                                                    {
                                                      ATerm g_19 = t;
                                                      int h_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL;
                                                          t = i_12;
                                                          t = new_0_0(t);
                                                          n_42 = t;
                                                          t = bottomup_1_0(q_0, t);
                                                          y_42 = t;
                                                          t = (ATerm) ATempty;
                                                          t = q_0(t);
                                                          z_42 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(z_42), y_42);
                                                          t = q_0(t);
                                                          o_42 = t;
                                                          t = n_42;
                                                          t = bottomup_1_0(q_0, t);
                                                          x_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, x_42);
                                                          t = q_0(t);
                                                          w_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, w_42);
                                                          t = q_0(t);
                                                          q_42 = t;
                                                          t = h_12;
                                                          t = bottomup_1_0(q_0, t);
                                                          s_42 = t;
                                                          t = n_42;
                                                          t = bottomup_1_0(q_0, t);
                                                          v_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, v_42);
                                                          t = q_0(t);
                                                          u_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, u_42);
                                                          t = q_0(t);
                                                          t_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_42, t_42);
                                                          t = q_0(t);
                                                          r_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_42, r_42);
                                                          t = q_0(t);
                                                          p_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, o_42, p_42);
                                                          t = q_0(t);
                                                          LocalPopChoice(h_19);
                                                        }
                                                      else
                                                        {
                                                          t = g_19;
                                                          t = i_12;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    e_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm i_19 = t;
                                                      int j_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, e_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(j_19);
                                                        }
                                                      else
                                                        {
                                                          t = i_19;
                                                          {
                                                            ATerm k_19 = t;
                                                            int l_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL;
                                                                t = i_12;
                                                                t = new_0_0(t);
                                                                d_43 = t;
                                                                t = bottomup_1_0(q_0, t);
                                                                o_43 = t;
                                                                t = (ATerm) ATempty;
                                                                t = q_0(t);
                                                                p_43 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(p_43), o_43);
                                                                t = q_0(t);
                                                                e_43 = t;
                                                                t = d_43;
                                                                t = bottomup_1_0(q_0, t);
                                                                n_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, n_43);
                                                                t = q_0(t);
                                                                m_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, m_43);
                                                                t = q_0(t);
                                                                g_43 = t;
                                                                t = h_12;
                                                                t = bottomup_1_0(q_0, t);
                                                                i_43 = t;
                                                                t = d_43;
                                                                t = bottomup_1_0(q_0, t);
                                                                l_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, l_43);
                                                                t = q_0(t);
                                                                k_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, k_43);
                                                                t = q_0(t);
                                                                j_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_43, j_43);
                                                                t = q_0(t);
                                                                h_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, g_43, h_43);
                                                                t = q_0(t);
                                                                f_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, e_43, f_43);
                                                                t = q_0(t);
                                                                LocalPopChoice(l_19);
                                                              }
                                                            else
                                                              {
                                                                t = k_19;
                                                                t = i_12;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm m_19 = t;
                                                    int n_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,e_44 = NULL,f_44 = NULL;
                                                        t = i_12;
                                                        t = new_0_0(t);
                                                        s_43 = t;
                                                        t = bottomup_1_0(q_0, t);
                                                        e_44 = t;
                                                        t = (ATerm) ATempty;
                                                        t = q_0(t);
                                                        f_44 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(f_44), e_44);
                                                        t = q_0(t);
                                                        t_43 = t;
                                                        t = s_43;
                                                        t = bottomup_1_0(q_0, t);
                                                        c_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, c_44);
                                                        t = q_0(t);
                                                        b_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, b_44);
                                                        t = q_0(t);
                                                        v_43 = t;
                                                        t = h_12;
                                                        t = bottomup_1_0(q_0, t);
                                                        x_43 = t;
                                                        t = s_43;
                                                        t = bottomup_1_0(q_0, t);
                                                        a_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, a_44);
                                                        t = q_0(t);
                                                        z_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, z_43);
                                                        t = q_0(t);
                                                        y_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_43, y_43);
                                                        t = q_0(t);
                                                        w_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, v_43, w_43);
                                                        t = q_0(t);
                                                        u_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, t_43, u_43);
                                                        t = q_0(t);
                                                        LocalPopChoice(n_19);
                                                      }
                                                    else
                                                      {
                                                        t = m_19;
                                                        t = i_12;
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
                                        h_12 = ATgetArgument(t, 0);
                                        t = h_12;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm o_19 = t;
                                            int p_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_5;
                                                t = q_0(t);
                                                LocalPopChoice(p_19);
                                              }
                                            else
                                              {
                                                t = o_19;
                                                t = i_12;
                                              }
                                          }
                                        else
                                          {
                                            t = i_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            h_12 = ATgetArgument(t, 0);
                                            t = h_12;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm r_19 = t;
                                                int s_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_y_5;
                                                    t = q_0(t);
                                                    LocalPopChoice(s_19);
                                                  }
                                                else
                                                  {
                                                    t = r_19;
                                                    t = i_12;
                                                  }
                                              }
                                            else
                                              {
                                                t = i_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                h_12 = ATgetArgument(t, 0);
                                                t = h_12;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm t_19 = t;
                                                    int u_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_y_5;
                                                        t = q_0(t);
                                                        LocalPopChoice(u_19);
                                                      }
                                                    else
                                                      {
                                                        t = t_19;
                                                        t = i_12;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = i_12;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm w_19 = t;
                                                int x_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm y_19 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(x_19);
                                                    t = g_12;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm z_19 = t;
                                                        int b_20 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_y_5;
                                                            t = q_0(t);
                                                            LocalPopChoice(b_20);
                                                          }
                                                        else
                                                          {
                                                            t = z_19;
                                                            t = i_12;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = i_12;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = w_19;
                                                    {
                                                      ATerm c_20 = t;
                                                      int d_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm e_20 = ATgetArgument(t, 0);
                                                              g_12 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(d_20);
                                                          {
                                                            ATerm f_20 = t;
                                                            int g_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = g_12;
                                                                t = fetch_1_0(m_1, t);
                                                                t = term_y_5;
                                                                t = bottomup_1_0(q_0, t);
                                                                LocalPopChoice(g_20);
                                                              }
                                                            else
                                                              {
                                                                t = f_20;
                                                                t = i_12;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = c_20;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              h_12 = ATgetArgument(t, 0);
                                                              g_12 = ATgetArgument(t, 1);
                                                              t = g_12;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = h_12;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = g_12;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          e_12 = ATgetArgument(t, 0);
                                                                          f_12 = ATgetArgument(t, 1);
                                                                          t = h_12;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = h_12;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = h_12;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = g_12;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          e_12 = ATgetArgument(t, 0);
                                                                          f_12 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm h_20 = t;
                                                                            int i_20 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm m_45 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, f_12, g_12);
                                                                                t = q_0(t);
                                                                                m_45 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, e_12, m_45);
                                                                                t = q_0(t);
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
                                                                                      t = g_12;
                                                                                      if((h_12 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(l_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = k_20;
                                                                                      t = i_12;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm m_20 = t;
                                                                          int o_20 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = g_12;
                                                                              if((h_12 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(o_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = m_20;
                                                                              t = i_12;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  h_12 = ATgetArgument(t, 0);
                                                                  g_12 = ATgetArgument(t, 1);
                                                                  y_10 = ATgetArgument(t, 2);
                                                                  t = y_10;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm p_20 = t;
                                                                      int q_20 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, g_12);
                                                                          t = q_0(t);
                                                                          LocalPopChoice(q_20);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = p_20;
                                                                          t = i_12;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = i_12;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      h_12 = ATgetArgument(t, 0);
                                                                      g_12 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm s_20 = t;
                                                                        int t_20 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, h_12, g_12);
                                                                            t = q_0(t);
                                                                            LocalPopChoice(t_20);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = s_20;
                                                                            t = i_12;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          h_12 = ATgetArgument(t, 0);
                                                                          t = h_12;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              e_12 = ATgetFirst((ATermList) t);
                                                                              f_12 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm u_20 = t;
                                                                                int v_20 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm a_46 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, f_12);
                                                                                    t = q_0(t);
                                                                                    a_46 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, e_12, a_46);
                                                                                    t = q_0(t);
                                                                                    LocalPopChoice(v_20);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = u_20;
                                                                                    t = i_12;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm w_20 = t;
                                                                                  int x_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_y_5;
                                                                                      t = q_0(t);
                                                                                      LocalPopChoice(x_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = w_20;
                                                                                      t = i_12;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = i_12;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              h_12 = ATgetArgument(t, 0);
                                                                              t = h_12;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  e_12 = ATgetFirst((ATermList) t);
                                                                                  f_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm z_20 = t;
                                                                                    int a_21 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm i_46 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, f_12);
                                                                                        t = q_0(t);
                                                                                        i_46 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, e_12, i_46);
                                                                                        t = q_0(t);
                                                                                        LocalPopChoice(a_21);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = z_20;
                                                                                        t = i_12;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm b_21 = t;
                                                                                      int c_21 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_y_5;
                                                                                          t = q_0(t);
                                                                                          LocalPopChoice(c_21);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = b_21;
                                                                                          t = i_12;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = i_12;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  h_12 = ATgetArgument(t, 0);
                                                                                  t = h_12;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      e_12 = ATgetFirst((ATermList) t);
                                                                                      f_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm d_21 = t;
                                                                                        int e_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm o_46 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, f_12);
                                                                                            t = q_0(t);
                                                                                            o_46 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, o_46);
                                                                                            t = q_0(t);
                                                                                            LocalPopChoice(e_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = d_21;
                                                                                            t = i_12;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm f_21 = t;
                                                                                          int g_21 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_q_5;
                                                                                              t = q_0(t);
                                                                                              LocalPopChoice(g_21);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = f_21;
                                                                                              t = i_12;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = i_12;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      h_12 = ATgetArgument(t, 0);
                                                                                      g_12 = ATgetArgument(t, 1);
                                                                                      y_10 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm h_21 = t;
                                                                                        int i_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL;
                                                                                            t = term_j_21;
                                                                                            t = bottomup_1_0(q_0, t);
                                                                                            x_46 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = q_0(t);
                                                                                            a_47 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(a_47), y_10);
                                                                                            t = q_0(t);
                                                                                            z_46 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(z_46), h_12);
                                                                                            t = q_0(t);
                                                                                            y_46 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, x_46, y_46);
                                                                                            t = q_0(t);
                                                                                            w_46 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, g_12, w_46);
                                                                                            t = q_0(t);
                                                                                            LocalPopChoice(i_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = h_21;
                                                                                            t = i_12;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          h_12 = ATgetArgument(t, 0);
                                                                                          g_12 = ATgetArgument(t, 1);
                                                                                          y_10 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm k_21 = t;
                                                                                            int l_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, g_12);
                                                                                                t = q_0(t);
                                                                                                g_47 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, y_10);
                                                                                                t = q_0(t);
                                                                                                j_47 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = q_0(t);
                                                                                                k_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(k_47), j_47);
                                                                                                t = q_0(t);
                                                                                                i_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(i_47), h_12);
                                                                                                t = q_0(t);
                                                                                                h_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(h_47), g_47);
                                                                                                t = q_0(t);
                                                                                                f_47 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, f_47);
                                                                                                t = q_0(t);
                                                                                                LocalPopChoice(l_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = k_21;
                                                                                                t = i_12;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              h_12 = ATgetArgument(t, 0);
                                                                                              g_12 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm m_21 = t;
                                                                                                int o_21 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm o_47 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, g_12);
                                                                                                    t = q_0(t);
                                                                                                    o_47 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, o_47);
                                                                                                    t = q_0(t);
                                                                                                    LocalPopChoice(o_21);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = m_21;
                                                                                                    t = i_12;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  h_12 = ATgetArgument(t, 0);
                                                                                                  g_12 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm p_21 = t;
                                                                                                    int q_21 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm s_47 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, h_12);
                                                                                                        t = q_0(t);
                                                                                                        s_47 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, s_47, g_12);
                                                                                                        t = q_0(t);
                                                                                                        LocalPopChoice(q_21);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = p_21;
                                                                                                        t = i_12;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      h_12 = ATgetArgument(t, 0);
                                                                                                      g_12 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm r_21 = t;
                                                                                                        int s_21 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm c_48 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, g_12);
                                                                                                            t = q_0(t);
                                                                                                            c_48 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, c_48, h_12);
                                                                                                            t = q_0(t);
                                                                                                            LocalPopChoice(s_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = r_21;
                                                                                                            t = i_12;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          h_12 = ATgetArgument(t, 0);
                                                                                                          g_12 = ATgetArgument(t, 1);
                                                                                                          t = g_12;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              c_12 = ATgetArgument(t, 0);
                                                                                                              d_12 = ATgetArgument(t, 1);
                                                                                                              t = h_12;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = g_12;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm u_21 = t;
                                                                                                                  int v_21 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm o_48 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, h_12, c_12);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      o_48 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, o_48, d_12);
                                                                                                                      t = bottomup_1_0(q_0, t);
                                                                                                                      LocalPopChoice(v_21);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = u_21;
                                                                                                                      t = i_12;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  c_12 = ATgetArgument(t, 0);
                                                                                                                  d_12 = ATgetArgument(t, 1);
                                                                                                                  y_11 = ATgetArgument(t, 2);
                                                                                                                  t = y_11;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = d_12;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = c_12;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              b_12 = ATgetArgument(t, 0);
                                                                                                                              t = h_12;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = g_12;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      e_12 = ATgetFirst((ATermList) t);
                                                                                                                                      f_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = f_12;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = e_12;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              a_12 = ATgetArgument(t, 0);
                                                                                                                                              v_11 = ATgetArgument(t, 1);
                                                                                                                                              n_11 = ATgetArgument(t, 2);
                                                                                                                                              q_11 = ATgetArgument(t, 3);
                                                                                                                                              t = n_11;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = v_11;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm w_21 = t;
                                                                                                                                                      int x_21 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = b_12;
                                                                                                                                                          if((a_12 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = q_11;
                                                                                                                                                          {
                                                                                                                                                            ATerm y_21 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm o_1 (ATerm t);
                                                                                                                                                                static ATerm o_1 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm z_21 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(z_21, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((a_12 != ATgetArgument(z_21, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(z_21, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm a_22 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(a_22) != AT_LIST) || !(ATisEmpty(a_22))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm b_22 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(b_22) != AT_LIST) || !(ATisEmpty(b_22))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  return(t);
                                                                                                                                                                }
                                                                                                                                                                t = oncetd_1_0(o_1, t);
                                                                                                                                                                PopChoice();
                                                                                                                                                                _fail(t);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = y_21;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = q_11;
                                                                                                                                                          t = bottomup_1_0(q_0, t);
                                                                                                                                                          LocalPopChoice(x_21);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = w_21;
                                                                                                                                                          t = i_12;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = i_12;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = i_12;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = i_12;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = i_12;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = i_12;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = h_12;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = g_12;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = i_12;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = h_12;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = g_12;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = i_12;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = h_12;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = g_12;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = i_12;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = h_12;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = g_12;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = i_12;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              h_12 = ATgetArgument(t, 0);
                                                                                                              g_12 = ATgetArgument(t, 1);
                                                                                                              t = h_12;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = g_12;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = i_12;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = i_12;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  }
                                              }
                                          }
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
  t = bottomup_1_0(q_0, t);
  return(t);
}
ATerm map_1_0 (ATerm u_158 (ATerm), ATerm t)
{
  static ATerm h_50 (ATerm t);
  static ATerm h_50 (ATerm t)
  {
    ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL;
    e_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_50;
      }
    else
      {
        ATerm f_3 = NULL,i_3 = NULL,j_3 = NULL,u_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_50 = ATgetFirst((ATermList) t);
            g_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_50);
        f_3 = t;
        t = f_50;
        t = u_158(t);
        i_3 = t;
        t = g_50;
        t = h_50(t);
        j_3 = t;
        t = (ATerm) ATinsert(CheckATermList(j_3), i_3);
        u_0 = t;
        t = SSLsetAnnotations(u_0, f_3);
      }
    return(t);
  }
  t = h_50(t);
  return(t);
}
static ATerm b_11 (ATerm w_47, ATerm x_47, ATerm t)
{
  ATerm j_50 = NULL;
  t = SSL_fputc(w_47, x_47);
  j_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_50);
  return(t);
}
static ATerm c_11 (ATerm f_53, ATerm g_53, ATerm t)
{
  ATerm k_50 = NULL;
  t = SSL_write_term_to_stream_text(f_53, g_53);
  k_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_50);
  return(t);
}
static ATerm e_11 (ATerm b_151 (ATerm), ATerm b_486, ATerm l_53, ATerm t)
{
  ATerm l_50 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_486, term_c_22);
  t = i_11(t);
  l_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_50, l_53);
  t = b_151(t);
  t = fclose_0_0(t);
  t = l_53;
  return(t);
}
static ATerm d_11 (ATerm b_53, ATerm c_53, ATerm t)
{
  ATerm m_50 = NULL;
  t = SSL_write_term_to_stream_baf(b_53, c_53);
  m_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_50);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_22 = ATgetArgument(t, 0);
      if(match_cons(f_22, sym_Stream_1))
        {
          t_50 = ATgetArgument(f_22, 0);
        }
      else
        _fail(t);
      u_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(t_50, u_50, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm v_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_22 = ATgetArgument(t, 0);
      if(match_cons(g_22, sym_Stream_1))
        {
          z_50 = ATgetArgument(g_22, 0);
        }
      else
        _fail(t);
      a_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_11(z_50, a_51, t);
  v_50 = t;
  t = term_h_22;
  x_50 = t;
  t = v_50;
  if(match_cons(t, sym_Stream_1))
    {
      y_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_22, v_50);
  t = b_11(x_50, y_50, t);
  return(t);
}
ATerm output_1_0 (ATerm u_168 (ATerm), ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL;
  t = u_168(t);
  o_50 = t;
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_50 = NULL,q_50 = NULL;
        t = term_k_22;
        p_50 = t;
        t = term_l_22;
        q_50 = t;
        t = term_n_22;
        t = o_11(p_50, q_50, t);
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        t = term_o_22;
      }
  }
  n_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_50, o_50);
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_50 = NULL,s_50 = NULL;
        t = term_k_22;
        r_50 = t;
        t = term_r_22;
        s_50 = t;
        t = term_s_22;
        t = o_11(r_50, s_50, t);
        t = (ATerm) ATmakeAppl(sym__2, n_50, o_50);
        LocalPopChoice(q_22);
        if(match_cons(t, sym__2))
          {
            ATerm t_22 = ATgetArgument(t, 0);
            ATerm u_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_11(p_1, n_50, o_50, t);
      }
    else
      {
        t = p_22;
        if(match_cons(t, sym__2))
          {
            ATerm w_22 = ATgetArgument(t, 0);
            ATerm x_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_11(q_1, n_50, o_50, t);
      }
  }
  return(t);
}
static ATerm o_51 (ATerm i_51, ATerm t)
{
  t = SSL_fclose(i_51);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL;
  m_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_51 = ATgetArgument(t, 0);
      {
        ATerm y_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_51);
            LocalPopChoice(a_23);
          }
        else
          {
            t = y_22;
            t = o_51(m_51, t);
          }
      }
    }
  else
    {
      t = o_51(m_51, t);
    }
  return(t);
}
static ATerm f_11 (ATerm h_53, ATerm t)
{
  t = SSL_read_term_from_stream(h_53);
  return(t);
}
static ATerm g_11 (ATerm c_46, ATerm d_46, ATerm t)
{
  t = SSL_strcat(c_46, d_46);
  return(t);
}
static ATerm h_11 (ATerm y_47, ATerm z_47, ATerm t)
{
  ATerm p_51 = NULL;
  t = SSL_fopen(y_47, z_47);
  p_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_51);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_51 = NULL;
  t = SSL_stdin_stream();
  q_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_51);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_51 = NULL;
  t = SSL_stdout_stream();
  r_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_51);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_51 = NULL;
  t = SSL_stderr_stream();
  s_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_51);
  return(t);
}
static ATerm j_53 (ATerm a_52, ATerm t)
{
  ATerm b_52 = NULL;
  t = SSL_explode_term(a_52);
  if(match_cons(t, sym__2))
    {
      ATerm b_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_23 = ATgetArgument(t, 1);
        if(((ATgetType(c_23) == AT_LIST) && !(ATisEmpty(c_23))))
          {
            b_52 = ATgetFirst((ATermList) c_23);
            {
              ATerm d_23 = (ATerm) ATgetNext((ATermList) c_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_52;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_52;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_52;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_52;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_53 (ATerm e_52, ATerm f_52, ATerm h_52, ATerm t)
{
  ATerm i_52 = NULL,k_52 = NULL,l_52 = NULL,p_52 = NULL,w_0 = NULL;
  t = SSLgetAnnotations(h_52);
  l_52 = t;
  t = e_52;
  if(match_cons(t, sym_Path_1))
    {
      p_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_52, f_52);
  w_0 = t;
  t = SSLsetAnnotations(w_0, l_52);
  if(match_cons(t, sym__2))
    {
      i_52 = ATgetArgument(t, 0);
      k_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(i_52, k_52, t);
  return(t);
}
static ATerm n_53 (ATerm r_52, ATerm s_52, ATerm t_52, ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL,z_52 = NULL,x_0 = NULL;
  t = SSLgetAnnotations(t_52);
  w_52 = t;
  t = SSL_is_string(r_52);
  z_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_52, s_52);
  x_0 = t;
  t = SSLsetAnnotations(x_0, w_52);
  if(match_cons(t, sym__2))
    {
      u_52 = ATgetArgument(t, 0);
      v_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(u_52, v_52, t);
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL,i_53 = NULL;
  d_53 = t;
  if(match_cons(t, sym__2))
    {
      e_53 = ATgetArgument(t, 0);
      i_53 = ATgetArgument(t, 1);
      {
        ATerm f_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_53(d_53, t);
            LocalPopChoice(g_23);
          }
        else
          {
            t = f_23;
            {
              ATerm h_23 = t;
              int i_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_53(e_53, i_53, d_53, t);
                  LocalPopChoice(i_23);
                }
              else
                {
                  t = h_23;
                  t = n_53(e_53, i_53, d_53, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_53(d_53, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL,w_53 = NULL;
  w_53 = t;
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_53, term_l_23);
        t = i_11(t);
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        {
          ATerm w_3 = NULL,x_3 = NULL;
          t = term_m_23;
          x_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_23, w_53);
          t = g_11(x_3, w_53, t);
          w_3 = t;
          t = SSL_perror(w_3);
          _fail(t);
        }
      }
  }
  q_53 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_11(r_53, t);
  p_53 = t;
  t = q_53;
  t = fclose_0_0(t);
  t = p_53;
  return(t);
}
ATerm input_1_0 (ATerm v_168 (ATerm), ATerm t)
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_53 = NULL,a_54 = NULL;
      t = term_k_22;
      z_53 = t;
      t = term_p_23;
      a_54 = t;
      t = term_r_23;
      t = o_11(z_53, a_54, t);
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      t = term_s_23;
    }
  t = ReadFromFile_0_0(t);
  t = v_168(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL;
  t = term_k_22;
  b_54 = t;
  t = term_t_23;
  c_54 = t;
  t = term_u_23;
  t = o_11(b_54, c_54, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL;
  e_54 = t;
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_54;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_23 = ATgetFirst((ATermList) t);
                ATerm y_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_54;
          }
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        t = (ATerm) ATinsert(ATempty, e_54);
      }
  }
  f_54 = t;
  t = term_o_22;
  g_54 = t;
  t = SSL_printnl(g_54, f_54);
  t = e_54;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_54 = ATgetFirst((ATermList) t);
      m_54 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_54 = NULL,t_54 = NULL;
        static ATerm s_1 (ATerm t);
        static ATerm s_1 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_54)), not_null(t_54));
          return(t);
        }
        t = m_54;
        t = r_0(t);
        if(((s_54 != NULL) && (s_54 != t)))
          _fail(t);
        else
          s_54 = t;
        t = l_54;
        t = p_0(t);
        if(((t_54 != NULL) && (t_54 != t)))
          _fail(t);
        else
          t_54 = t;
        t = m_54;
        t = reverse_acc_2_0(p_0, s_1, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_23;
      t = r_0(t);
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL,b_4 = NULL;
  d_55 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_55);
  b_55 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_55);
  b_4 = t;
  t = SSLsetAnnotations(b_4, b_55);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm h_55 = NULL;
  h_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_55), term_b_24);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm t_170 (ATerm), ATerm u_170 (ATerm), ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL;
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_54 = NULL,a_55 = NULL;
      t = term_k_22;
      z_54 = t;
      t = term_t_23;
      a_55 = t;
      t = term_u_23;
      t = o_11(z_54, a_55, t);
      LocalPopChoice(d_24);
    }
  else
    {
      t = c_24;
      t = fetch_1_0(t_1, t);
    }
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_170(t);
        t = echo_0_0(t);
        LocalPopChoice(f_24);
      }
    else
      {
        t = e_24;
      }
  }
  t = term_g_24;
  t = echo_0_0(t);
  t = term_h_24;
  x_54 = t;
  t = term_j_24;
  y_54 = t;
  t = term_k_24;
  t = o_11(x_54, y_54, t);
  t = reverse_acc_2_0(_id, u_1, t);
  t = map_1_0(x_1, t);
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_55 = NULL;
        t = u_170(t);
        i_55 = t;
        t = (ATerm) ATinsert(CheckATermList(i_55), term_n_24);
        t = echo_0_0(t);
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
      }
  }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,v_6 = NULL;
  q_55 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_55);
  o_55 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_55);
  v_6 = t;
  t = SSLsetAnnotations(v_6, o_55);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_55 = NULL;
  l_55 = t;
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_55 = NULL,n_55 = NULL;
        t = term_k_22;
        m_55 = t;
        t = term_t_23;
        n_55 = t;
        t = term_u_23;
        t = o_11(m_55, n_55, t);
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        t = fetch_1_0(y_1, t);
      }
  }
  t = l_55;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm s_55 = NULL;
  s_55 = t;
  if(match_string(t, "-k"))
    {
      t = s_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_55;
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm t_55 = NULL,v_55 = NULL,w_55 = NULL;
  t_55 = t;
  t = SSL_string_to_int(t_55);
  v_55 = t;
  t = term_q_24;
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_24, v_55);
  t = r_11(w_55, v_55, t);
  t = t_55;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_s_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_1, b_2, c_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm y_55 = NULL;
  y_55 = t;
  if(match_string(t, "-S"))
    {
      t = y_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_55;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL;
  t = term_t_24;
  z_55 = t;
  t = term_u_24;
  a_56 = t;
  t = term_v_24;
  t = r_11(z_55, a_56, t);
  t = term_x_24;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_y_24;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL;
  b_56 = t;
  t = SSL_string_to_int(b_56);
  c_56 = t;
  t = term_t_24;
  d_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_24, c_56);
  t = r_11(d_56, c_56, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_56);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_z_24;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL;
  t = term_a_25;
  e_56 = t;
  t = term_z_23;
  f_56 = t;
  t = term_b_25;
  t = r_11(e_56, f_56, t);
  t = term_c_25;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_2, e_2, i_2, t);
      LocalPopChoice(g_25);
    }
  else
    {
      t = e_25;
      {
        ATerm h_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_2, r_2, s_2, t);
            LocalPopChoice(i_25);
          }
        else
          {
            t = h_25;
            t = Option_3_0(t_2, u_2, v_2, t);
          }
      }
    }
  return(t);
}
static ATerm r_11 (ATerm v_51, ATerm w_51, ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL;
  t = term_k_22;
  g_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_22, v_51, w_51);
  t = lookup_table_0_1(g_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(v_51, w_51, h_56, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_22, v_51, w_51);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL;
      t = term_z_23;
      t = g_0(t);
      n_56 = t;
      t = term_h_24;
      o_56 = t;
      t = term_j_24;
      p_56 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_24, term_j_24, n_56);
      t = p_11(o_56, p_56, n_56, t);
      _fail(t);
    }
  else
    {
      ATerm s_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_56 = ATgetFirst((ATermList) t);
          m_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_56;
      t = d_0(t);
      t = term_z_23;
      t = f_0(t);
      s_56 = t;
      t = (ATerm) ATinsert(CheckATermList(m_56), s_56);
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm u_56 = NULL;
  u_56 = t;
  if(match_string(t, "-o"))
    {
      t = u_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_56;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL;
  v_56 = t;
  t = term_l_22;
  w_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_22, v_56);
  t = r_11(w_56, v_56, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_56);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_j_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_2, x_2, y_2, t);
  return(t);
}
static ATerm p_11 (ATerm g_57, ATerm h_57, ATerm f_57, ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL;
  y_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_57, h_57);
  {
    ATerm o_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_25 = ATgetArgument(t, 0);
            ATerm w_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_57, h_57);
        t = o_11(g_57, h_57, t);
        LocalPopChoice(t_25);
      }
    else
      {
        t = o_25;
        t = (ATerm) ATempty;
      }
  }
  z_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_57, h_57, (ATerm) ATinsert(CheckATermList(z_56), f_57));
  t = lookup_table_0_1(g_57, t);
  c_57 = t;
  t = (ATerm) ATinsert(CheckATermList(z_56), f_57);
  a_57 = t;
  t = c_57;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(h_57, a_57, b_57, t);
  t = y_56;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL;
      t = term_z_23;
      t = o_0(t);
      q_57 = t;
      t = term_h_24;
      r_57 = t;
      t = term_j_24;
      s_57 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_24, term_j_24, q_57);
      t = p_11(r_57, s_57, q_57, t);
      _fail(t);
    }
  else
    {
      ATerm w_57 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_57 = ATgetFirst((ATermList) t);
          n_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_57;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_57 = ATgetFirst((ATermList) t);
          p_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_57;
      t = j_0(t);
      t = o_57;
      t = l_0(t);
      w_57 = t;
      t = (ATerm) ATinsert(CheckATermList(p_57), w_57);
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm y_57 = NULL;
  y_57 = t;
  if(match_string(t, "-i"))
    {
      t = y_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_57;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL;
  z_57 = t;
  t = term_p_23;
  a_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_23, z_57);
  t = r_11(a_58, z_57, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_57);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_x_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_2, a_3, b_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_23;
  t = whoami_0_0(t);
  b_58 = t;
  t = term_y_25;
  d_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_25), b_58);
  e_58 = t;
  t = SSL_printnl(d_58, e_58);
  t = term_a_26;
  c_58 = t;
  t = SSL_exit(c_58);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL;
  t = term_k_22;
  f_58 = t;
  t = term_t_23;
  g_58 = t;
  t = term_u_23;
  t = o_11(f_58, g_58, t);
  return(t);
}
static ATerm j_11 (ATerm o_54, ATerm p_54, ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(o_54, p_54);
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      t = SSL_addr(o_54, p_54);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_161 (ATerm), ATerm b_161 (ATerm), ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
  i_58 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_58;
      t = a_161(t);
    }
  else
    {
      ATerm n_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_58 = ATgetFirst((ATermList) t);
          k_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_58;
      t = foldr_2_0(a_161, b_161, t);
      n_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_58, n_58);
      t = b_161(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_u_24;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  if(match_cons(t, sym__2))
    {
      d_4 = ATgetArgument(t, 0);
      e_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(d_4, e_4, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_58 = NULL,z_3 = NULL,a_4 = NULL;
  t = times_0_0(t);
  a_4 = t;
  t = SSL_explode_term(a_4);
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3;
  t = foldr_2_0(c_3, d_3, t);
  q_58 = t;
  t = SSL_TicksToSeconds(q_58);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL;
  h_59 = t;
  if(match_cons(t, sym__2))
    {
      i_59 = ATgetArgument(t, 0);
      j_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_59;
        if((i_59 != t))
          {
            _fail(t);
          }
        t = h_59;
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        t = (ATerm) ATmakeAppl(sym__2, i_59, j_59);
        {
          ATerm g_26 = t;
          int h_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_59, j_59);
              LocalPopChoice(h_26);
            }
          else
            {
              t = g_26;
              t = SSL_gtr(i_59, j_59);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, i_59, j_59);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_148 (ATerm), ATerm t)
{
  ATerm n_59 = NULL;
  n_59 = t;
  {
    ATerm j_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL;
        t = term_k_22;
        q_59 = t;
        t = term_t_24;
        r_59 = t;
        t = term_l_26;
        t = o_11(q_59, r_59, t);
        p_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_59, term_a_26);
        t = geq_0_0(t);
        t = n_59;
        t = w_148(t);
        LocalPopChoice(k_26);
      }
    else
      {
        t = j_26;
        t = n_59;
      }
  }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL,w_59 = NULL,x_59 = NULL;
  t = run_time_0_0(t);
  t_59 = t;
  t = term_z_23;
  t = whoami_0_0(t);
  u_59 = t;
  t = term_y_25;
  w_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_26), t_59), term_m_26), u_59);
  x_59 = t;
  t = SSL_printnl(w_59, x_59);
  t = (ATerm) ATmakeAppl(sym__2, term_y_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_26), t_59), term_m_26), u_59));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_59 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_24;
  y_59 = t;
  t = SSL_exit(y_59);
  return(t);
}
static ATerm s_11 (ATerm v_61, ATerm w_61, ATerm x_61, ATerm t)
{
  ATerm z_59 = NULL;
  t = SSL_hashtable_put(x_61, v_61, w_61);
  z_59 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_59);
  return(t);
}
ATerm lookup_table_0_1 (ATerm s_58, ATerm t)
{
  ATerm i_60 = NULL;
  t = table_hashtable_0_0(t);
  i_60 = t;
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_4 = NULL;
        t = i_60;
        if(match_cons(t, sym_Hashtable_1))
          {
            p_4 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_11(s_58, p_4, t);
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        {
          ATerm u_4 = NULL;
          t = s_58;
          t = table_create_0_0(t);
          t = i_60;
          if(match_cons(t, sym_Hashtable_1))
            {
              u_4 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_11(s_58, u_4, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm d_62, ATerm e_62, ATerm t)
{
  ATerm l_60 = NULL;
  t = SSL_hashtable_create(d_62, e_62);
  l_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_60);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL,q_60 = NULL,r_60 = NULL;
  m_60 = t;
  t = term_q_26;
  q_60 = t;
  t = term_r_26;
  r_60 = t;
  t = m_60;
  t = new_hashtable_0_2(q_60, r_60, t);
  n_60 = t;
  t = m_60;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(m_60, n_60, o_60, t);
  t = m_60;
  return(t);
}
static ATerm l_11 (ATerm a_62, ATerm b_62, ATerm t)
{
  ATerm s_60 = NULL;
  t = SSL_hashtable_remove(b_62, a_62);
  s_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_60);
  return(t);
}
static ATerm m_11 (ATerm f_62, ATerm t)
{
  ATerm t_60 = NULL;
  t = SSL_hashtable_destroy(f_62);
  t_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_60);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm u_60 = NULL;
  t = SSL_table_hashtable();
  u_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_60);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL;
  v_60 = t;
  t = table_hashtable_0_0(t);
  w_60 = t;
  t = lookup_table_0_1(v_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_11(y_60, t);
  t = w_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_11(v_60, x_60, t);
  t = v_60;
  return(t);
}
ATerm fetch_1_0 (ATerm c_159 (ATerm), ATerm t)
{
  static ATerm c_62 (ATerm t);
  static ATerm c_62 (ATerm t)
  {
    ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL;
    s_61 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_61 = ATgetFirst((ATermList) t);
        u_61 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_26 = t;
      int t_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_4 = NULL,c_5 = NULL,x_6 = NULL;
          t = SSLgetAnnotations(s_61);
          z_4 = t;
          t = t_61;
          t = c_159(t);
          c_5 = t;
          t = (ATerm) ATinsert(CheckATermList(u_61), c_5);
          x_6 = t;
          t = SSLsetAnnotations(x_6, z_4);
          LocalPopChoice(t_26);
        }
      else
        {
          t = s_26;
          {
            ATerm k_5 = NULL,n_5 = NULL,y_6 = NULL;
            t = SSLgetAnnotations(s_61);
            k_5 = t;
            t = u_61;
            t = c_62(t);
            n_5 = t;
            t = (ATerm) ATinsert(CheckATermList(n_5), t_61);
            y_6 = t;
            t = SSLsetAnnotations(y_6, k_5);
          }
        }
    }
    return(t);
  }
  t = c_62(t);
  return(t);
}
static ATerm t_11 (ATerm y_61, ATerm z_61, ATerm t)
{
  t = SSL_hashtable_get(z_61, y_61);
  return(t);
}
static ATerm o_11 (ATerm z_58, ATerm a_59, ATerm t)
{
  ATerm i_62 = NULL;
  t = lookup_table_0_1(z_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(a_59, i_62, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm k_62 = NULL,l_62 = NULL;
  t = term_u_26;
  k_62 = t;
  t = term_z_23;
  l_62 = t;
  t = term_v_26;
  t = r_11(k_62, l_62, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_w_26;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL;
  t = term_u_26;
  o_62 = t;
  t = term_z_23;
  p_62 = t;
  t = term_v_26;
  t = r_11(o_62, p_62, t);
  t = term_x_26;
  m_62 = t;
  t = term_z_23;
  n_62 = t;
  t = term_y_26;
  t = r_11(m_62, n_62, t);
  t = term_z_26;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_3, h_3, k_3, t);
      LocalPopChoice(d_27);
    }
  else
    {
      t = c_27;
      t = Option_3_0(l_3, m_3, n_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,b_7 = NULL;
  v_62 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_62 = ATgetFirst((ATermList) t);
      s_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_62);
  q_62 = t;
  t = r_62;
  t = u_109(t);
  t_62 = t;
  t = s_62;
  t = v_109(t);
  u_62 = t;
  t = (ATerm) ATinsert(CheckATermList(u_62), t_62);
  b_7 = t;
  t = SSLsetAnnotations(b_7, q_62);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_170 (ATerm), ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,f_63 = NULL,g_63 = NULL,d_7 = NULL;
  a_63 = t;
  {
    ATerm e_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_27;
        t = o_170(t);
        LocalPopChoice(f_27);
      }
    else
      {
        t = e_27;
      }
  }
  t = a_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_63 = ATgetFirst((ATermList) t);
      d_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_63);
  b_63 = t;
  t = term_t_23;
  g_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_23, c_63);
  t = r_11(g_63, c_63, t);
  t = d_63;
  {
    static ATerm q_63 (ATerm t);
    static ATerm q_63 (ATerm t)
    {
      ATerm h_27 = t;
      int i_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_27 = t;
          int k_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_63 = NULL;
              j_63 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_63;
              LocalPopChoice(k_27);
            }
          else
            {
              t = j_27;
              t = o_170(t);
              t = Cons_2_0(_id, q_63, t);
            }
          LocalPopChoice(i_27);
        }
      else
        {
          t = h_27;
          {
            ATerm m_63 = NULL,n_63 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_63 = ATgetFirst((ATermList) t);
                n_63 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_63), (ATerm) ATmakeAppl(sym_Undefined_1, m_63));
          }
        }
      return(t);
    }
    t = q_63(t);
  }
  f_63 = t;
  t = (ATerm) ATinsert(CheckATermList(f_63), (ATerm) ATmakeAppl(sym_Program_1, c_63));
  d_7 = t;
  t = SSLsetAnnotations(d_7, b_63);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm d_64 = NULL;
  d_64 = t;
  if(match_string(t, "--help"))
    {
      t = d_64;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_64;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_64;
        }
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm e_64 = NULL,f_64 = NULL;
  t = term_l_27;
  e_64 = t;
  t = term_z_23;
  f_64 = t;
  t = term_m_27;
  t = r_11(e_64, f_64, t);
  t = term_n_27;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_o_27;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm l_170 (ATerm), ATerm m_170 (ATerm), ATerm n_170 (ATerm), ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL;
  x_63 = t;
  t = term_h_24;
  y_63 = t;
  t = term_p_27;
  t = lookup_table_0_1(y_63, t);
  c_64 = t;
  t = term_j_24;
  z_63 = t;
  t = (ATerm) ATempty;
  a_64 = t;
  t = c_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(z_63, a_64, b_64, t);
  t = x_63;
  {
    static ATerm o_3 (ATerm t);
    static ATerm o_3 (ATerm t)
    {
      ATerm q_27 = t;
      int r_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_170(t);
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
                t = Option_3_0(p_3, q_3, r_3, t);
                LocalPopChoice(t_27);
              }
            else
              {
                t = s_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_3, t);
  }
  {
    ATerm u_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_64 = NULL;
        q_64 = t;
        {
          ATerm x_27 = t;
          int y_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_5 = NULL;
              t = q_64;
              {
                ATerm z_27 = t;
                int a_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_5 = NULL,w_5 = NULL;
                    t = term_k_22;
                    v_5 = t;
                    t = term_l_27;
                    w_5 = t;
                    t = term_b_28;
                    t = o_11(v_5, w_5, t);
                    LocalPopChoice(a_28);
                  }
                else
                  {
                    t = z_27;
                    t = fetch_1_0(s_3, t);
                  }
              }
              t = q_64;
              t = m_170(t);
              t = term_u_24;
              u_5 = t;
              t = SSL_exit(u_5);
              LocalPopChoice(y_27);
            }
          else
            {
              t = x_27;
              {
                ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
                t = term_k_22;
                b_6 = t;
                t = term_u_26;
                c_6 = t;
                t = term_c_28;
                t = o_11(b_6, c_6, t);
                t = q_64;
                t = n_170(t);
                t = term_u_24;
                a_6 = t;
                t = SSL_exit(a_6);
              }
            }
        }
        LocalPopChoice(w_27);
      }
    else
      {
        t = u_27;
        {
          ATerm d_28 = t;
          int e_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_64 = NULL,s_64 = NULL,t_64 = NULL;
              static ATerm t_3 (ATerm t);
              static ATerm t_3 (ATerm t)
              {
                ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL,f_7 = NULL;
                w_64 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_64 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_64);
                u_64 = t;
                t = v_64;
                if(((v_63 != NULL) && (v_63 != t)))
                  _fail(t);
                else
                  v_63 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_64);
                f_7 = t;
                t = SSLsetAnnotations(f_7, u_64);
                return(t);
              }
              t = fetch_1_0(t_3, t);
              t = term_y_25;
              s_64 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_63)), term_f_28);
              t_64 = t;
              t = SSL_printnl(s_64, t_64);
              t = (ATerm) ATmakeAppl(sym__2, term_y_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_63)), term_f_28));
              t = m_170(t);
              t = term_a_26;
              r_64 = t;
              t = SSL_exit(r_64);
              LocalPopChoice(e_28);
            }
          else
            {
              t = d_28;
            }
        }
      }
  }
  w_63 = t;
  t = term_h_24;
  t = table_destroy_0_0(t);
  t = w_63;
  return(t);
}
ATerm option_wrap_5_0 (ATerm o_168 (ATerm), ATerm p_168 (ATerm), ATerm q_168 (ATerm), ATerm r_168 (ATerm), ATerm s_168 (ATerm), ATerm t)
{
  ATerm b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL;
  t = parse_options_3_0(o_168, p_168, q_168, t);
  b_65 = t;
  t = term_g_28;
  t = table_create_0_0(t);
  t = term_g_28;
  c_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_28, term_h_28, b_65);
  t = lookup_table_0_1(c_65, t);
  f_65 = t;
  t = term_h_28;
  d_65 = t;
  t = f_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(d_65, b_65, e_65, t);
  t = b_65;
  t = r_168(t);
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_168(t);
        t = report_success_0_0(t);
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm k_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(m_28);
    }
  else
    {
      t = k_28;
      {
        ATerm n_28 = t;
        int o_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(o_28);
          }
        else
          {
            t = n_28;
            {
              ATerm p_28 = t;
              int q_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(y_3, c_4, f_4, t);
                  LocalPopChoice(q_28);
                }
              else
                {
                  t = p_28;
                  {
                    ATerm r_28 = t;
                    int t_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(t_28);
                      }
                    else
                      {
                        t = r_28;
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
static ATerm v_3 (ATerm t)
{
  t = input_1_0(g_4, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm k_65 = NULL,l_65 = NULL;
  t = term_r_22;
  k_65 = t;
  t = term_z_23;
  l_65 = t;
  t = term_u_28;
  t = r_11(k_65, l_65, t);
  t = term_v_28;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_w_28;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = output_1_0(h_4, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,l_7 = NULL,k_7 = NULL,j_7 = NULL,i_7 = NULL;
  b_66 = t;
  if(match_cons(t, sym_Specification_1))
    {
      o_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_66);
  n_65 = t;
  t = o_65;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_65 = ATgetFirst((ATermList) t);
      r_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_65);
  p_65 = t;
  t = r_65;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_65 = ATgetFirst((ATermList) t);
      v_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_65);
  t_65 = t;
  t = u_65;
  if(match_cons(t, sym_Strategies_1))
    {
      y_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_65);
  x_65 = t;
  t = y_65;
  t = map_1_0(i_4, t);
  z_65 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, z_65);
  i_7 = t;
  t = SSLsetAnnotations(i_7, x_65);
  a_66 = t;
  t = v_65;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_65), a_66);
  j_7 = t;
  t = SSLsetAnnotations(j_7, t_65);
  w_65 = t;
  t = (ATerm) ATinsert(CheckATermList(w_65), q_65);
  k_7 = t;
  t = SSLsetAnnotations(k_7, p_65);
  s_65 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, s_65);
  l_7 = t;
  t = SSLsetAnnotations(l_7, n_65);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL;
  s_66 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      o_66 = ATgetArgument(t, 0);
      p_66 = ATgetArgument(t, 1);
      q_66 = ATgetArgument(t, 2);
      r_66 = ATgetArgument(t, 3);
      {
        ATerm x_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_6 = NULL,o_6 = NULL,h_7 = NULL;
            t = SSLgetAnnotations(s_66);
            j_6 = t;
            t = r_66;
            t = simplify_0_0(t);
            o_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, o_66, p_66, q_66, o_6);
            h_7 = t;
            t = SSLsetAnnotations(h_7, j_6);
            LocalPopChoice(y_28);
          }
        else
          {
            t = x_28;
            t = s_66;
          }
      }
    }
  else
    {
      t = s_66;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(u_3, default_system_usage_0_0, default_system_about_0_0, _id, v_3, t);
  return(t);
}

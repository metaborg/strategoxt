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
Symbol sym_App_2;
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
Symbol sym_App_2;
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
ATerm term_v_28;
ATerm term_u_28;
ATerm term_s_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_f_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_i_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_g_22;
ATerm term_b_22;
ATerm term_i_21;
ATerm term_x_5;
ATerm term_p_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_k_22);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_q_22);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_o_23);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_s_23);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym__2, term_g_24, term_h_24);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym__2, term_r_24, term_t_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_24);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym__2, term_z_24, term_y_23);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_r_24);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym__2, term_t_26, term_y_23);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_w_26, term_y_23);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym__2, term_k_27, term_y_23);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym__3, term_g_24, term_h_24, (ATerm) ATempty);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_k_27);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_t_26);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_y_23);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm bottomup_1_0 (ATerm o_129 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm r_130 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm s_151 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm g_2 (ATerm n_1, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm n_129 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm e_134 (ATerm), ATerm f_134 (ATerm), ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm t);
static ATerm t_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm simplify_0_0 (ATerm t);
ATerm map_1_0 (ATerm b_151 (ATerm), ATerm t);
static ATerm b_11 (ATerm f_47, ATerm g_47, ATerm t);
static ATerm c_11 (ATerm o_52, ATerm p_52, ATerm t);
static ATerm e_11 (ATerm b_144 (ATerm), ATerm b_475, ATerm u_52, ATerm t);
static ATerm d_11 (ATerm k_52, ATerm l_52, ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm output_1_0 (ATerm p_160 (ATerm), ATerm t);
static ATerm r_51 (ATerm l_51, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_11 (ATerm q_52, ATerm t);
static ATerm g_11 (ATerm l_45, ATerm m_45, ATerm t);
static ATerm h_11 (ATerm h_47, ATerm j_47, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_53 (ATerm b_52, ATerm t);
static ATerm n_53 (ATerm f_52, ATerm h_52, ATerm i_52, ATerm t);
static ATerm o_53 (ATerm z_52, ATerm a_53, ATerm b_53, ATerm t);
static ATerm i_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm q_160 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm default_system_usage_2_0 (ATerm o_162 (ATerm), ATerm p_162 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_11 (ATerm e_51, ATerm f_51, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_11 (ATerm p_56, ATerm q_56, ATerm o_56, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_11 (ATerm x_53, ATerm y_53, ATerm t);
ATerm foldr_2_0 (ATerm j_153 (ATerm), ATerm k_153 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_141 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_11 (ATerm a_61, ATerm b_61, ATerm c_61, ATerm t);
ATerm lookup_table_0_1 (ATerm b_58, ATerm t);
ATerm new_hashtable_0_2 (ATerm i_61, ATerm j_61, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm l_11 (ATerm f_61, ATerm g_61, ATerm t);
static ATerm m_11 (ATerm k_61, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_151 (ATerm), ATerm t);
static ATerm t_11 (ATerm d_61, ATerm e_61, ATerm t);
static ATerm o_11 (ATerm i_58, ATerm j_58, ATerm t);
static ATerm g_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_162 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm parse_options_3_0 (ATerm g_162 (ATerm), ATerm h_162 (ATerm), ATerm i_162 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm j_160 (ATerm), ATerm k_160 (ATerm), ATerm l_160 (ATerm), ATerm m_160 (ATerm), ATerm n_160 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm e_4 (ATerm t);
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
ATerm bottomup_1_0 (ATerm o_129 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    t = bottomup_1_0(o_129, t);
    return(t);
  }
  t = SRTS_all(a_0, t);
  t = o_129(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm r_130 (ATerm), ATerm t)
{
  static ATerm q_2 (ATerm t);
  static ATerm q_2 (ATerm t)
  {
    ATerm n_0 = t;
    int j_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_130(t);
        LocalPopChoice(j_4);
      }
    else
      {
        t = n_0;
        t = SRTS_one(q_2, t);
      }
    return(t);
  }
  t = q_2(t);
  return(t);
}
ATerm at_end_1_0 (ATerm s_151 (ATerm), ATerm t)
{
  static ATerm e_1 (ATerm t);
  static ATerm e_1 (ATerm t)
  {
    ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL;
    d_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_1 = ATgetFirst((ATermList) t);
        c_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_0 = NULL,h_1 = NULL,s_0 = NULL;
          t = SSLgetAnnotations(d_1);
          r_0 = t;
          t = c_1;
          t = e_1(t);
          h_1 = t;
          t = (ATerm) ATinsert(CheckATermList(h_1), b_1);
          s_0 = t;
          t = SSLsetAnnotations(s_0, r_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_1;
        t = s_151(t);
      }
    return(t);
  }
  t = e_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,f_0 = NULL;
  c_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_0;
    }
  else
    {
      static ATerm i_0 (ATerm t);
      static ATerm i_0 (ATerm t)
      {
        t = not_null(f_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_0 = ATgetFirst((ATermList) t);
          if(((f_0 != NULL) && (f_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_0;
      t = at_end_1_0(i_0, t);
    }
  return(t);
}
static ATerm g_2 (ATerm n_1, ATerm t)
{
  ATerm q_1 = NULL;
  t = SSL_explode_term(n_1);
  if(match_cons(t, sym__2))
    {
      ATerm k_4 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_4) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_1 = NULL,a_2 = NULL,c_2 = NULL;
  c_2 = t;
  if(match_cons(t, sym__2))
    {
      w_1 = ATgetArgument(t, 0);
      a_2 = ATgetArgument(t, 1);
      {
        ATerm l_4 = t;
        int m_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_0 (ATerm t);
            static ATerm k_0 (ATerm t)
            {
              t = a_2;
              return(t);
            }
            t = w_1;
            t = at_end_1_0(k_0, t);
            LocalPopChoice(m_4);
          }
        else
          {
            t = l_4;
            t = g_2(c_2, t);
          }
      }
    }
  else
    {
      t = g_2(c_2, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm n_129 (ATerm), ATerm t)
{
  static ATerm p_0 (ATerm t);
  static ATerm p_0 (ATerm t)
  {
    t = topdown_1_0(n_129, t);
    return(t);
  }
  t = n_129(t);
  t = SRTS_all(p_0, t);
  return(t);
}
ATerm genzip_4_0 (ATerm e_134 (ATerm), ATerm f_134 (ATerm), ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm t)
{
  static ATerm p_2 (ATerm t);
  static ATerm p_2 (ATerm t)
  {
    ATerm n_4 = t;
    int p_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_134(t);
        LocalPopChoice(p_4);
      }
    else
      {
        t = n_4;
        {
          ATerm h_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,u_0 = NULL;
          t = f_134(t);
          n_2 = t;
          if(match_cons(t, sym__2))
            {
              j_2 = ATgetArgument(t, 0);
              k_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_2);
          h_2 = t;
          t = j_2;
          t = h_134(t);
          l_2 = t;
          t = k_2;
          t = p_2(t);
          m_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_2, m_2);
          u_0 = t;
          t = SSLsetAnnotations(u_0, h_2);
          t = g_134(t);
        }
      }
    return(t);
  }
  t = p_2(t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_4 = ATgetArgument(t, 0);
      if(((ATgetType(q_4) != AT_LIST) || !(ATisEmpty(q_4))))
        _fail(t);
      {
        ATerm r_4 = ATgetArgument(t, 1);
        if(((ATgetType(r_4) != AT_LIST) || !(ATisEmpty(r_4))))
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
  ATerm i_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_4 = ATgetArgument(t, 0);
      if(((ATgetType(s_4) == AT_LIST) && !(ATisEmpty(s_4))))
        {
          i_18 = ATgetFirst((ATermList) s_4);
          o_18 = (ATerm) ATgetNext((ATermList) s_4);
        }
      else
        _fail(t);
      {
        ATerm u_4 = ATgetArgument(t, 1);
        if(((ATgetType(u_4) == AT_LIST) && !(ATisEmpty(u_4))))
          {
            p_18 = ATgetFirst((ATermList) u_4);
            q_18 = (ATerm) ATgetNext((ATermList) u_4);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_18, p_18), (ATerm) ATmakeAppl(sym__2, o_18, q_18));
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm t_18 = NULL,w_18 = NULL;
  if(match_cons(t, sym__2))
    {
      t_18 = ATgetArgument(t, 0);
      w_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_18), t_18);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm y_18 = NULL,d_19 = NULL;
  if(match_cons(t, sym__2))
    {
      y_18 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_18), (ATerm) ATmakeAppl(sym_Match_1, d_19));
  return(t);
}
static ATerm f_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_4 = ATgetArgument(t, 0);
      if(((ATgetType(v_4) != AT_LIST) || !(ATisEmpty(v_4))))
        _fail(t);
      {
        ATerm w_4 = ATgetArgument(t, 1);
        if(((ATgetType(w_4) != AT_LIST) || !(ATisEmpty(w_4))))
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
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_4 = ATgetArgument(t, 0);
      if(((ATgetType(x_4) == AT_LIST) && !(ATisEmpty(x_4))))
        {
          m_25 = ATgetFirst((ATermList) x_4);
          n_25 = (ATerm) ATgetNext((ATermList) x_4);
        }
      else
        _fail(t);
      {
        ATerm z_4 = ATgetArgument(t, 1);
        if(((ATgetType(z_4) == AT_LIST) && !(ATisEmpty(z_4))))
          {
            o_25 = ATgetFirst((ATermList) z_4);
            p_25 = (ATerm) ATgetNext((ATermList) z_4);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_25, o_25), (ATerm) ATmakeAppl(sym__2, n_25, p_25));
  return(t);
}
static ATerm i_1 (ATerm t)
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
  ATerm s_25 = NULL,v_25 = NULL;
  if(match_cons(t, sym__2))
    {
      s_25 = ATgetArgument(t, 0);
      v_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_25), (ATerm) ATmakeAppl(sym_Match_1, v_25));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm a_5 = t;
  int c_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm d_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(c_5);
      {
        ATerm u_37 = NULL,v_37 = NULL;
        u_37 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm e_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        v_37 = t;
        t = SSLgetAnnotations(u_37);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_5 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) f_5) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_5 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(g_5) != AT_LIST) || !(ATisEmpty(g_5))))
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
      t = a_5;
      {
        ATerm h_5 = t;
        int i_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm k_5 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) k_5) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm l_5 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(i_5);
            _fail(t);
          }
        else
          {
            t = h_5;
          }
      }
    }
  return(t);
}
static ATerm l_1 (ATerm t)
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
    ATerm z_10 = NULL,a_11 = NULL,k_11 = NULL,n_11 = NULL,q_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL;
    j_12 = t;
    if(match_cons(t, sym_Test_1))
      {
        i_12 = ATgetArgument(t, 0);
        t = i_12;
        if(match_cons(t, sym_Id_0))
          {
            ATerm n_5 = t;
            int o_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_p_5;
                t = q_0(t);
                LocalPopChoice(o_5);
              }
            else
              {
                t = n_5;
                {
                  ATerm q_5 = t;
                  int r_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
                      t = j_12;
                      t = new_0_0(t);
                      l_12 = t;
                      t = bottomup_1_0(q_0, t);
                      w_12 = t;
                      t = (ATerm) ATempty;
                      t = q_0(t);
                      x_12 = t;
                      t = (ATerm) ATinsert(CheckATermList(x_12), w_12);
                      t = q_0(t);
                      m_12 = t;
                      t = l_12;
                      t = bottomup_1_0(q_0, t);
                      v_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, v_12);
                      t = q_0(t);
                      u_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, u_12);
                      t = q_0(t);
                      o_12 = t;
                      t = i_12;
                      t = bottomup_1_0(q_0, t);
                      q_12 = t;
                      t = l_12;
                      t = bottomup_1_0(q_0, t);
                      t_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, t_12);
                      t = q_0(t);
                      s_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, s_12);
                      t = q_0(t);
                      r_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_12, r_12);
                      t = q_0(t);
                      p_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_12, p_12);
                      t = q_0(t);
                      n_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, m_12, n_12);
                      t = q_0(t);
                      LocalPopChoice(r_5);
                    }
                  else
                    {
                      t = q_5;
                      t = j_12;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm s_5 = t;
                int w_5 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_x_5;
                    t = q_0(t);
                    LocalPopChoice(w_5);
                  }
                else
                  {
                    t = s_5;
                    {
                      ATerm y_5 = t;
                      int c_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
                          t = j_12;
                          t = new_0_0(t);
                          a_13 = t;
                          t = bottomup_1_0(q_0, t);
                          l_13 = t;
                          t = (ATerm) ATempty;
                          t = q_0(t);
                          m_13 = t;
                          t = (ATerm) ATinsert(CheckATermList(m_13), l_13);
                          t = q_0(t);
                          b_13 = t;
                          t = a_13;
                          t = bottomup_1_0(q_0, t);
                          k_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, k_13);
                          t = q_0(t);
                          j_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, j_13);
                          t = q_0(t);
                          d_13 = t;
                          t = i_12;
                          t = bottomup_1_0(q_0, t);
                          f_13 = t;
                          t = a_13;
                          t = bottomup_1_0(q_0, t);
                          i_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, i_13);
                          t = q_0(t);
                          h_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, h_13);
                          t = q_0(t);
                          g_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_13, g_13);
                          t = q_0(t);
                          e_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_13, e_13);
                          t = q_0(t);
                          c_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, b_13, c_13);
                          t = q_0(t);
                          LocalPopChoice(c_6);
                        }
                      else
                        {
                          t = y_5;
                          t = j_12;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    f_12 = ATgetArgument(t, 0);
                    {
                      ATerm d_6 = t;
                      int e_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, f_12);
                          t = q_0(t);
                          LocalPopChoice(e_6);
                        }
                      else
                        {
                          t = d_6;
                          {
                            ATerm f_6 = t;
                            int g_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,z_13 = NULL,a_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,m_14 = NULL,n_14 = NULL;
                                t = j_12;
                                t = new_0_0(t);
                                q_13 = t;
                                t = bottomup_1_0(q_0, t);
                                m_14 = t;
                                t = (ATerm) ATempty;
                                t = q_0(t);
                                n_14 = t;
                                t = (ATerm) ATinsert(CheckATermList(n_14), m_14);
                                t = q_0(t);
                                r_13 = t;
                                t = q_13;
                                t = bottomup_1_0(q_0, t);
                                f_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, f_14);
                                t = q_0(t);
                                e_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, e_14);
                                t = q_0(t);
                                t_13 = t;
                                t = i_12;
                                t = bottomup_1_0(q_0, t);
                                v_13 = t;
                                t = q_13;
                                t = bottomup_1_0(q_0, t);
                                d_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, d_14);
                                t = q_0(t);
                                a_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, a_14);
                                t = q_0(t);
                                z_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, v_13, z_13);
                                t = q_0(t);
                                u_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_13, u_13);
                                t = q_0(t);
                                s_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, r_13, s_13);
                                t = q_0(t);
                                LocalPopChoice(g_6);
                              }
                            else
                              {
                                t = f_6;
                                t = j_12;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm h_6 = t;
                    int j_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL,c_15 = NULL,d_15 = NULL,f_15 = NULL,k_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
                        t = j_12;
                        t = new_0_0(t);
                        w_14 = t;
                        t = bottomup_1_0(q_0, t);
                        q_15 = t;
                        t = (ATerm) ATempty;
                        t = q_0(t);
                        r_15 = t;
                        t = (ATerm) ATinsert(CheckATermList(r_15), q_15);
                        t = q_0(t);
                        x_14 = t;
                        t = w_14;
                        t = bottomup_1_0(q_0, t);
                        p_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, p_15);
                        t = q_0(t);
                        o_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, o_15);
                        t = q_0(t);
                        c_15 = t;
                        t = i_12;
                        t = bottomup_1_0(q_0, t);
                        f_15 = t;
                        t = w_14;
                        t = bottomup_1_0(q_0, t);
                        n_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, n_15);
                        t = q_0(t);
                        m_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, m_15);
                        t = q_0(t);
                        k_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_15, k_15);
                        t = q_0(t);
                        d_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, c_15, d_15);
                        t = q_0(t);
                        y_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, x_14, y_14);
                        t = q_0(t);
                        LocalPopChoice(j_6);
                      }
                    else
                      {
                        t = h_6;
                        t = j_12;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            i_12 = ATgetArgument(t, 0);
            t = i_12;
            if(match_cons(t, sym_Id_0))
              {
                ATerm k_6 = t;
                int l_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_x_5;
                    t = q_0(t);
                    LocalPopChoice(l_6);
                  }
                else
                  {
                    t = k_6;
                    t = j_12;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm m_6 = t;
                    int o_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_p_5;
                        t = q_0(t);
                        LocalPopChoice(o_6);
                      }
                    else
                      {
                        t = m_6;
                        t = j_12;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        f_12 = ATgetArgument(t, 0);
                        {
                          ATerm p_6 = t;
                          int q_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, f_12);
                              t = q_0(t);
                              LocalPopChoice(q_6);
                            }
                          else
                            {
                              t = p_6;
                              t = j_12;
                            }
                        }
                      }
                    else
                      {
                        t = j_12;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                i_12 = ATgetArgument(t, 0);
                h_12 = ATgetArgument(t, 1);
                t = h_12;
                if(match_cons(t, sym_Id_0))
                  {
                    t = i_12;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = h_12;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = i_12;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                f_12 = ATgetArgument(t, 0);
                                g_12 = ATgetArgument(t, 1);
                                t = i_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    f_12 = ATgetArgument(t, 0);
                                    g_12 = ATgetArgument(t, 1);
                                    t = i_12;
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
                    if(match_cons(t, sym_Seq_2))
                      {
                        d_12 = ATgetArgument(t, 0);
                        e_12 = ATgetArgument(t, 1);
                        t = d_12;
                        if(match_cons(t, sym_Match_1))
                          {
                            c_12 = ATgetArgument(t, 0);
                            t = c_12;
                            if(match_cons(t, sym_Op_2))
                              {
                                a_12 = ATgetArgument(t, 0);
                                v_11 = ATgetArgument(t, 1);
                                t = i_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = h_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm r_6 = t;
                                        int s_6 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_x_5;
                                            t = q_0(t);
                                            LocalPopChoice(s_6);
                                          }
                                        else
                                          {
                                            t = r_6;
                                            t = j_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_12 = ATgetArgument(t, 0);
                                            g_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm t_6 = t;
                                              int u_6 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm y_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                  t = q_0(t);
                                                  y_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, y_17);
                                                  t = q_0(t);
                                                  LocalPopChoice(u_6);
                                                }
                                              else
                                                {
                                                  t = t_6;
                                                  t = j_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                t = f_12;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    b_12 = ATgetArgument(t, 0);
                                                    w_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm w_6 = t;
                                                      int z_6 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, b_12, a_12);
                                                          {
                                                            ATerm a_7 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm t_1 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    t_1 = ATgetArgument(t, 0);
                                                                    if((t_1 != ATgetArgument(t, 1)))
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
                                                                t = a_7;
                                                              }
                                                          }
                                                          t = term_x_5;
                                                          t = bottomup_1_0(q_0, t);
                                                          LocalPopChoice(z_6);
                                                        }
                                                      else
                                                        {
                                                          t = w_6;
                                                          {
                                                            ATerm c_7 = t;
                                                            int e_7 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm h_18 = NULL;
                                                                t = a_12;
                                                                if((b_12 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, w_11, v_11);
                                                                t = genzip_4_0(t_0, v_0, x_0, a_1, t);
                                                                h_18 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, h_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, b_12, w_11)), e_12));
                                                                t = bottomup_1_0(q_0, t);
                                                                LocalPopChoice(e_7);
                                                              }
                                                            else
                                                              {
                                                                t = c_7;
                                                                {
                                                                  ATerm g_7 = t;
                                                                  int m_7 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm k_19 = NULL;
                                                                      t = c_12;
                                                                      if((f_12 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                                      t = q_0(t);
                                                                      k_19 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, k_19, e_12);
                                                                      t = q_0(t);
                                                                      LocalPopChoice(m_7);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = g_7;
                                                                      t = j_12;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm n_7 = t;
                                                    int o_7 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm r_19 = NULL;
                                                        t = c_12;
                                                        if((f_12 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                        t = q_0(t);
                                                        r_19 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, r_19, e_12);
                                                        t = q_0(t);
                                                        LocalPopChoice(o_7);
                                                      }
                                                    else
                                                      {
                                                        t = n_7;
                                                        t = j_12;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    f_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm p_7 = t;
                                                      int q_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm w_19 = NULL;
                                                          t = c_12;
                                                          if((f_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, f_12);
                                                          t = q_0(t);
                                                          w_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_19, e_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(q_7);
                                                        }
                                                      else
                                                        {
                                                          t = p_7;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_7 = t;
                                                          int s_7 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = q_0(t);
                                                              b_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, b_20);
                                                              t = q_0(t);
                                                              LocalPopChoice(s_7);
                                                            }
                                                          else
                                                            {
                                                              t = r_7;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = i_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = h_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm t_7 = t;
                                        int u_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_x_5;
                                            t = q_0(t);
                                            LocalPopChoice(u_7);
                                          }
                                        else
                                          {
                                            t = t_7;
                                            t = j_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_12 = ATgetArgument(t, 0);
                                            g_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm v_7 = t;
                                              int w_7 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm k_20 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                  t = q_0(t);
                                                  k_20 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, k_20);
                                                  t = q_0(t);
                                                  LocalPopChoice(w_7);
                                                }
                                              else
                                                {
                                                  t = v_7;
                                                  t = j_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                {
                                                  ATerm x_7 = t;
                                                  int y_7 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_20 = NULL;
                                                      t = c_12;
                                                      if((f_12 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, f_12);
                                                      t = q_0(t);
                                                      o_20 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_20, e_12);
                                                      t = q_0(t);
                                                      LocalPopChoice(y_7);
                                                    }
                                                  else
                                                    {
                                                      t = x_7;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    f_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm z_7 = t;
                                                      int a_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm s_20 = NULL;
                                                          t = c_12;
                                                          if((f_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                          t = q_0(t);
                                                          s_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_20, e_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(a_8);
                                                        }
                                                      else
                                                        {
                                                          t = z_7;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_8 = t;
                                                          int c_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_21 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = q_0(t);
                                                              f_21 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, f_21);
                                                              t = q_0(t);
                                                              LocalPopChoice(c_8);
                                                            }
                                                          else
                                                            {
                                                              t = b_8;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_12;
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
                                    a_12 = ATgetArgument(t, 0);
                                    t = i_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm d_8 = t;
                                            int e_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_x_5;
                                                t = q_0(t);
                                                LocalPopChoice(e_8);
                                              }
                                            else
                                              {
                                                t = d_8;
                                                t = j_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                g_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm f_8 = t;
                                                  int g_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = q_0(t);
                                                      q_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, q_21);
                                                      t = q_0(t);
                                                      LocalPopChoice(g_8);
                                                    }
                                                  else
                                                    {
                                                      t = f_8;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm h_8 = t;
                                                int i_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm j_8 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(i_8);
                                                    {
                                                      ATerm k_8 = t;
                                                      int l_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm u_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_12);
                                                          t = q_0(t);
                                                          u_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_21, e_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(l_8);
                                                        }
                                                      else
                                                        {
                                                          t = k_8;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = h_8;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        t = f_12;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            b_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm m_8 = t;
                                                              int n_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_22 = NULL,f_22 = NULL;
                                                                  t = a_12;
                                                                  if((b_12 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, b_12);
                                                                  t = q_0(t);
                                                                  f_22 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, f_22);
                                                                  t = q_0(t);
                                                                  e_22 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_22, e_12);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(n_8);
                                                                }
                                                              else
                                                                {
                                                                  t = m_8;
                                                                  t = j_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_12;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_12 = ATgetArgument(t, 0);
                                                            g_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm o_8 = t;
                                                              int p_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm n_22 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                                  t = q_0(t);
                                                                  n_22 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, n_22);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(p_8);
                                                                }
                                                              else
                                                                {
                                                                  t = o_8;
                                                                  t = j_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_12;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = i_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm q_8 = t;
                                            int r_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_x_5;
                                                t = q_0(t);
                                                LocalPopChoice(r_8);
                                              }
                                            else
                                              {
                                                t = q_8;
                                                t = j_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                g_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm s_8 = t;
                                                  int t_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = q_0(t);
                                                      w_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, w_22);
                                                      t = q_0(t);
                                                      LocalPopChoice(t_8);
                                                    }
                                                  else
                                                    {
                                                      t = s_8;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm u_8 = t;
                                                int v_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm w_8 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(v_8);
                                                    {
                                                      ATerm x_8 = t;
                                                      int y_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm a_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_12);
                                                          t = q_0(t);
                                                          a_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, e_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(y_8);
                                                        }
                                                      else
                                                        {
                                                          t = x_8;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = u_8;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm z_8 = t;
                                                          int a_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = q_0(t);
                                                              h_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, h_23);
                                                              t = q_0(t);
                                                              LocalPopChoice(a_9);
                                                            }
                                                          else
                                                            {
                                                              t = z_8;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_12;
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
                                    x_11 = ATgetArgument(t, 1);
                                    y_11 = ATgetArgument(t, 2);
                                    t = i_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm b_9 = t;
                                            int c_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_x_5;
                                                t = q_0(t);
                                                LocalPopChoice(c_9);
                                              }
                                            else
                                              {
                                                t = b_9;
                                                t = j_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                g_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm d_9 = t;
                                                  int e_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = q_0(t);
                                                      r_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, r_23);
                                                      t = q_0(t);
                                                      LocalPopChoice(e_9);
                                                    }
                                                  else
                                                    {
                                                      t = d_9;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm f_9 = t;
                                                int g_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm h_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(g_9);
                                                    {
                                                      ATerm i_9 = t;
                                                      int j_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, c_12, x_11, y_11);
                                                          t = q_0(t);
                                                          b_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_24, e_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(j_9);
                                                        }
                                                      else
                                                        {
                                                          t = i_9;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = f_9;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm k_9 = t;
                                                          int l_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm j_24 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = q_0(t);
                                                              j_24 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, j_24);
                                                              t = q_0(t);
                                                              LocalPopChoice(l_9);
                                                            }
                                                          else
                                                            {
                                                              t = k_9;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = i_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm m_9 = t;
                                            int n_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_x_5;
                                                t = q_0(t);
                                                LocalPopChoice(n_9);
                                              }
                                            else
                                              {
                                                t = m_9;
                                                t = j_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                g_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm o_9 = t;
                                                  int p_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_24 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = q_0(t);
                                                      s_24 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, s_24);
                                                      t = q_0(t);
                                                      LocalPopChoice(p_9);
                                                    }
                                                  else
                                                    {
                                                      t = o_9;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    f_12 = ATgetArgument(t, 0);
                                                    g_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm q_9 = t;
                                                      int r_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                          t = q_0(t);
                                                          x_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, x_24);
                                                          t = q_0(t);
                                                          LocalPopChoice(r_9);
                                                        }
                                                      else
                                                        {
                                                          t = q_9;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = j_12;
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
                            d_12 = ATgetArgument(t, 0);
                            t = d_12;
                            if(match_cons(t, sym_Op_2))
                              {
                                c_12 = ATgetArgument(t, 0);
                                x_11 = ATgetArgument(t, 1);
                                t = i_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = h_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm s_9 = t;
                                        int t_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_x_5;
                                            t = q_0(t);
                                            LocalPopChoice(t_9);
                                          }
                                        else
                                          {
                                            t = s_9;
                                            t = j_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_12 = ATgetArgument(t, 0);
                                            g_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm u_9 = t;
                                              int v_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm g_25 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                  t = q_0(t);
                                                  g_25 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_25);
                                                  t = q_0(t);
                                                  LocalPopChoice(v_9);
                                                }
                                              else
                                                {
                                                  t = u_9;
                                                  t = j_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                t = f_12;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    b_12 = ATgetArgument(t, 0);
                                                    w_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm w_9 = t;
                                                      int x_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, b_12, c_12);
                                                          {
                                                            ATerm y_9 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm e_2 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    e_2 = ATgetArgument(t, 0);
                                                                    if((e_2 != ATgetArgument(t, 1)))
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
                                                                t = y_9;
                                                              }
                                                          }
                                                          t = term_x_5;
                                                          t = bottomup_1_0(q_0, t);
                                                          LocalPopChoice(x_9);
                                                        }
                                                      else
                                                        {
                                                          t = w_9;
                                                          {
                                                            ATerm z_9 = t;
                                                            int a_10 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm l_25 = NULL;
                                                                t = c_12;
                                                                if((b_12 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, w_11, x_11);
                                                                t = genzip_4_0(f_1, g_1, i_1, j_1, t);
                                                                l_25 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, b_12, w_11)));
                                                                t = bottomup_1_0(q_0, t);
                                                                LocalPopChoice(a_10);
                                                              }
                                                            else
                                                              {
                                                                t = z_9;
                                                                {
                                                                  ATerm b_10 = t;
                                                                  int c_10 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = d_12;
                                                                      if((f_12 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                                      t = q_0(t);
                                                                      LocalPopChoice(c_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = b_10;
                                                                      t = j_12;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm d_10 = t;
                                                    int e_10 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = d_12;
                                                        if((f_12 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                        t = q_0(t);
                                                        LocalPopChoice(e_10);
                                                      }
                                                    else
                                                      {
                                                        t = d_10;
                                                        t = j_12;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    f_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm f_10 = t;
                                                      int g_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = d_12;
                                                          if((f_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, f_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(g_10);
                                                        }
                                                      else
                                                        {
                                                          t = f_10;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_10 = t;
                                                          int i_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = q_0(t);
                                                              o_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, o_26);
                                                              t = q_0(t);
                                                              LocalPopChoice(i_10);
                                                            }
                                                          else
                                                            {
                                                              t = h_10;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = i_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = h_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm j_10 = t;
                                        int k_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_x_5;
                                            t = q_0(t);
                                            LocalPopChoice(k_10);
                                          }
                                        else
                                          {
                                            t = j_10;
                                            t = j_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_12 = ATgetArgument(t, 0);
                                            g_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm l_10 = t;
                                              int m_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm c_27 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                  t = q_0(t);
                                                  c_27 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, c_27);
                                                  t = q_0(t);
                                                  LocalPopChoice(m_10);
                                                }
                                              else
                                                {
                                                  t = l_10;
                                                  t = j_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                {
                                                  ATerm n_10 = t;
                                                  int o_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = d_12;
                                                      if((f_12 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, f_12);
                                                      t = q_0(t);
                                                      LocalPopChoice(o_10);
                                                    }
                                                  else
                                                    {
                                                      t = n_10;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    f_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm p_10 = t;
                                                      int q_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = d_12;
                                                          if((f_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(q_10);
                                                        }
                                                      else
                                                        {
                                                          t = p_10;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_10 = t;
                                                          int s_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = q_0(t);
                                                              z_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, z_27);
                                                              t = q_0(t);
                                                              LocalPopChoice(s_10);
                                                            }
                                                          else
                                                            {
                                                              t = r_10;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_12;
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
                                d_12 = ATgetArgument(t, 0);
                                t = d_12;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    c_12 = ATgetArgument(t, 0);
                                    t = i_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm t_10 = t;
                                            int u_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_x_5;
                                                t = q_0(t);
                                                LocalPopChoice(u_10);
                                              }
                                            else
                                              {
                                                t = t_10;
                                                t = j_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                g_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm v_10 = t;
                                                  int w_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm m_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = q_0(t);
                                                      m_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, m_28);
                                                      t = q_0(t);
                                                      LocalPopChoice(w_10);
                                                    }
                                                  else
                                                    {
                                                      t = v_10;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm x_10 = t;
                                                int y_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm k_12 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(y_10);
                                                    {
                                                      ATerm y_12 = t;
                                                      int z_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(z_12);
                                                        }
                                                      else
                                                        {
                                                          t = y_12;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = x_10;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        t = f_12;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            b_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm n_13 = t;
                                                              int o_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm t_28 = NULL;
                                                                  t = c_12;
                                                                  if((b_12 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, b_12);
                                                                  t = q_0(t);
                                                                  t_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, t_28);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(o_13);
                                                                }
                                                              else
                                                                {
                                                                  t = n_13;
                                                                  t = j_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_12;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_12 = ATgetArgument(t, 0);
                                                            g_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm p_13 = t;
                                                              int w_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm f_29 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                                  t = q_0(t);
                                                                  f_29 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, f_29);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(w_13);
                                                                }
                                                              else
                                                                {
                                                                  t = p_13;
                                                                  t = j_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_12;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = i_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm x_13 = t;
                                            int y_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_x_5;
                                                t = q_0(t);
                                                LocalPopChoice(y_13);
                                              }
                                            else
                                              {
                                                t = x_13;
                                                t = j_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                g_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm b_14 = t;
                                                  int c_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = q_0(t);
                                                      q_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, q_29);
                                                      t = q_0(t);
                                                      LocalPopChoice(c_14);
                                                    }
                                                  else
                                                    {
                                                      t = b_14;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm g_14 = t;
                                                int h_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm i_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(h_14);
                                                    {
                                                      ATerm j_14 = t;
                                                      int k_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(k_14);
                                                        }
                                                      else
                                                        {
                                                          t = j_14;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = g_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm l_14 = t;
                                                          int o_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm e_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = q_0(t);
                                                              e_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, e_30);
                                                              t = q_0(t);
                                                              LocalPopChoice(o_14);
                                                            }
                                                          else
                                                            {
                                                              t = l_14;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_12;
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
                                    d_12 = ATgetArgument(t, 0);
                                    e_12 = ATgetArgument(t, 1);
                                    z_11 = ATgetArgument(t, 2);
                                    t = i_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm p_14 = t;
                                            int q_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_x_5;
                                                t = q_0(t);
                                                LocalPopChoice(q_14);
                                              }
                                            else
                                              {
                                                t = p_14;
                                                t = j_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                g_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm r_14 = t;
                                                  int s_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_30 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = q_0(t);
                                                      o_30 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, o_30);
                                                      t = q_0(t);
                                                      LocalPopChoice(s_14);
                                                    }
                                                  else
                                                    {
                                                      t = r_14;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm t_14 = t;
                                                int u_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm v_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(u_14);
                                                    {
                                                      ATerm z_14 = t;
                                                      int a_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, d_12, e_12, z_11);
                                                          t = q_0(t);
                                                          LocalPopChoice(a_15);
                                                        }
                                                      else
                                                        {
                                                          t = z_14;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = t_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_15 = t;
                                                          int e_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = q_0(t);
                                                              x_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, x_30);
                                                              t = q_0(t);
                                                              LocalPopChoice(e_15);
                                                            }
                                                          else
                                                            {
                                                              t = b_15;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_12;
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
                                        d_12 = ATgetArgument(t, 0);
                                        e_12 = ATgetArgument(t, 1);
                                        t = i_12;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = h_12;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm g_15 = t;
                                                int h_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_x_5;
                                                    t = q_0(t);
                                                    LocalPopChoice(h_15);
                                                  }
                                                else
                                                  {
                                                    t = g_15;
                                                    {
                                                      ATerm i_15 = t;
                                                      int j_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm l_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                          t = q_0(t);
                                                          l_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, d_12, l_31);
                                                          t = q_0(t);
                                                          LocalPopChoice(j_15);
                                                        }
                                                      else
                                                        {
                                                          t = i_15;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    f_12 = ATgetArgument(t, 0);
                                                    g_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm l_15 = t;
                                                      int s_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm q_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                          t = q_0(t);
                                                          q_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, q_31);
                                                          t = q_0(t);
                                                          LocalPopChoice(s_15);
                                                        }
                                                      else
                                                        {
                                                          t = l_15;
                                                          {
                                                            ATerm t_15 = t;
                                                            int u_15 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_31 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                                t = q_0(t);
                                                                u_31 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, d_12, u_31);
                                                                t = q_0(t);
                                                                LocalPopChoice(u_15);
                                                              }
                                                            else
                                                              {
                                                                t = t_15;
                                                                t = j_12;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm v_15 = t;
                                                          int w_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                              t = q_0(t);
                                                              z_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, d_12, z_31);
                                                              t = q_0(t);
                                                              LocalPopChoice(w_15);
                                                            }
                                                          else
                                                            {
                                                              t = v_15;
                                                              {
                                                                ATerm x_15 = t;
                                                                int y_15 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm l_32 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                                    t = q_0(t);
                                                                    l_32 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, l_32);
                                                                    t = q_0(t);
                                                                    LocalPopChoice(y_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = x_15;
                                                                    t = j_12;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm z_15 = t;
                                                        int a_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm q_32 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                            t = q_0(t);
                                                            q_32 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, d_12, q_32);
                                                            t = q_0(t);
                                                            LocalPopChoice(a_16);
                                                          }
                                                        else
                                                          {
                                                            t = z_15;
                                                            t = j_12;
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
                                            d_12 = ATgetArgument(t, 0);
                                            e_12 = ATgetArgument(t, 1);
                                            t = i_12;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = h_12;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm b_16 = t;
                                                    int c_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_x_5;
                                                        t = q_0(t);
                                                        LocalPopChoice(c_16);
                                                      }
                                                    else
                                                      {
                                                        t = b_16;
                                                        {
                                                          ATerm d_16 = t;
                                                          int e_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                              t = q_0(t);
                                                              i_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, d_12, i_33);
                                                              t = q_0(t);
                                                              LocalPopChoice(e_16);
                                                            }
                                                          else
                                                            {
                                                              t = d_16;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_16 = t;
                                                          int g_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = q_0(t);
                                                              o_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, o_33);
                                                              t = q_0(t);
                                                              LocalPopChoice(g_16);
                                                            }
                                                          else
                                                            {
                                                              t = f_16;
                                                              {
                                                                ATerm h_16 = t;
                                                                int i_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm u_33 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                                    t = q_0(t);
                                                                    u_33 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, d_12, u_33);
                                                                    t = q_0(t);
                                                                    LocalPopChoice(i_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = h_16;
                                                                    t = j_12;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_12 = ATgetArgument(t, 0);
                                                            g_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm j_16 = t;
                                                              int k_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm z_33 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                                  t = q_0(t);
                                                                  z_33 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, d_12, z_33);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(k_16);
                                                                }
                                                              else
                                                                {
                                                                  t = j_16;
                                                                  {
                                                                    ATerm l_16 = t;
                                                                    int m_16 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm d_34 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                                        t = q_0(t);
                                                                        d_34 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, d_34);
                                                                        t = q_0(t);
                                                                        LocalPopChoice(m_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = l_16;
                                                                        t = j_12;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm n_16 = t;
                                                            int o_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm m_34 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                                t = q_0(t);
                                                                m_34 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, d_12, m_34);
                                                                t = q_0(t);
                                                                LocalPopChoice(o_16);
                                                              }
                                                            else
                                                              {
                                                                t = n_16;
                                                                t = j_12;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = i_12;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = h_12;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm p_16 = t;
                                                    int q_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_x_5;
                                                        t = q_0(t);
                                                        LocalPopChoice(q_16);
                                                      }
                                                    else
                                                      {
                                                        t = p_16;
                                                        t = j_12;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_16 = t;
                                                          int s_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = q_0(t);
                                                              y_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, y_34);
                                                              t = q_0(t);
                                                              LocalPopChoice(s_16);
                                                            }
                                                          else
                                                            {
                                                              t = r_16;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_12 = ATgetArgument(t, 0);
                                                            g_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm t_16 = t;
                                                              int u_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm h_35 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                                  t = q_0(t);
                                                                  h_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, h_35);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(u_16);
                                                                }
                                                              else
                                                                {
                                                                  t = t_16;
                                                                  t = j_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_12;
                                                          }
                                                      }
                                                  }
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
                    i_12 = ATgetArgument(t, 0);
                    h_12 = ATgetArgument(t, 1);
                    t = h_12;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = i_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm v_16 = t;
                            int w_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_p_5;
                                t = q_0(t);
                                LocalPopChoice(w_16);
                              }
                            else
                              {
                                t = v_16;
                                t = i_12;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = h_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    f_12 = ATgetArgument(t, 0);
                                    g_12 = ATgetArgument(t, 1);
                                    t = i_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        f_12 = ATgetArgument(t, 0);
                                        t = i_12;
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
                        t = i_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm x_16 = t;
                            int y_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_p_5;
                                t = q_0(t);
                                LocalPopChoice(y_16);
                              }
                            else
                              {
                                t = x_16;
                                {
                                  ATerm z_16 = t;
                                  int a_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = h_12;
                                      if((i_12 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(a_17);
                                    }
                                  else
                                    {
                                      t = z_16;
                                      t = j_12;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = h_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    f_12 = ATgetArgument(t, 0);
                                    g_12 = ATgetArgument(t, 1);
                                    {
                                      ATerm b_17 = t;
                                      int c_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_37 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, g_12, h_12);
                                          t = q_0(t);
                                          p_37 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, f_12, p_37);
                                          t = q_0(t);
                                          LocalPopChoice(c_17);
                                        }
                                      else
                                        {
                                          t = b_17;
                                          {
                                            ATerm d_17 = t;
                                            int e_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = h_12;
                                                if((i_12 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(e_17);
                                              }
                                            else
                                              {
                                                t = d_17;
                                                t = j_12;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        f_12 = ATgetArgument(t, 0);
                                        {
                                          ATerm f_17 = t;
                                          int g_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = h_12;
                                              if((i_12 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(g_17);
                                            }
                                          else
                                            {
                                              t = f_17;
                                              {
                                                ATerm h_17 = t;
                                                int i_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = f_12;
                                                    t = topdown_1_0(k_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                    t = bottomup_1_0(q_0, t);
                                                    LocalPopChoice(i_17);
                                                  }
                                                else
                                                  {
                                                    t = h_17;
                                                    t = j_12;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm j_17 = t;
                                        int k_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = h_12;
                                            if((i_12 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(k_17);
                                          }
                                        else
                                          {
                                            t = j_17;
                                            t = j_12;
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
                        i_12 = ATgetArgument(t, 0);
                        h_12 = ATgetArgument(t, 1);
                        t = h_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = i_12;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm l_17 = t;
                                int m_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_p_5;
                                    t = q_0(t);
                                    LocalPopChoice(m_17);
                                  }
                                else
                                  {
                                    t = l_17;
                                    t = h_12;
                                  }
                              }
                            else
                              {
                                ATerm n_17 = t;
                                int o_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_p_5;
                                    t = q_0(t);
                                    LocalPopChoice(o_17);
                                  }
                                else
                                  {
                                    t = n_17;
                                    t = j_12;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = i_12;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm p_17 = t;
                                    int q_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_x_5;
                                        t = q_0(t);
                                        LocalPopChoice(q_17);
                                      }
                                    else
                                      {
                                        t = p_17;
                                        t = h_12;
                                      }
                                  }
                                else
                                  {
                                    ATerm r_17 = t;
                                    int s_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_x_5;
                                        t = q_0(t);
                                        LocalPopChoice(s_17);
                                      }
                                    else
                                      {
                                        t = r_17;
                                        t = j_12;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    d_12 = ATgetArgument(t, 0);
                                    e_12 = ATgetArgument(t, 1);
                                    t = i_12;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = h_12;
                                      }
                                    else
                                      {
                                        ATerm t_17 = t;
                                        int u_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm s_38 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, i_12, d_12);
                                            t = conc_0_0(t);
                                            s_38 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, s_38, e_12);
                                            t = bottomup_1_0(q_0, t);
                                            LocalPopChoice(u_17);
                                          }
                                        else
                                          {
                                            t = t_17;
                                            t = j_12;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = i_12;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = h_12;
                                      }
                                    else
                                      {
                                        t = j_12;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm v_17 = t;
                        int w_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm x_17 = ATgetArgument(t, 0);
                                h_12 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(w_17);
                            t = h_12;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm z_17 = t;
                                int a_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_p_5;
                                    t = q_0(t);
                                    LocalPopChoice(a_18);
                                  }
                                else
                                  {
                                    t = z_17;
                                    t = j_12;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm b_18 = t;
                                    int c_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_x_5;
                                        t = q_0(t);
                                        LocalPopChoice(c_18);
                                      }
                                    else
                                      {
                                        t = b_18;
                                        t = j_12;
                                      }
                                  }
                                else
                                  {
                                    t = j_12;
                                  }
                              }
                          }
                        else
                          {
                            t = v_17;
                            if(match_cons(t, sym_All_1))
                              {
                                i_12 = ATgetArgument(t, 0);
                                t = i_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm d_18 = t;
                                    int e_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_p_5;
                                        t = q_0(t);
                                        LocalPopChoice(e_18);
                                      }
                                    else
                                      {
                                        t = d_18;
                                        t = j_12;
                                      }
                                  }
                                else
                                  {
                                    t = j_12;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    i_12 = ATgetArgument(t, 0);
                                    t = i_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm f_18 = t;
                                        int g_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_p_5;
                                            t = q_0(t);
                                            LocalPopChoice(g_18);
                                          }
                                        else
                                          {
                                            t = f_18;
                                            {
                                              ATerm j_18 = t;
                                              int k_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL;
                                                  t = j_12;
                                                  t = new_0_0(t);
                                                  d_39 = t;
                                                  t = bottomup_1_0(q_0, t);
                                                  q_39 = t;
                                                  t = (ATerm) ATempty;
                                                  t = q_0(t);
                                                  r_39 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(r_39), q_39);
                                                  t = q_0(t);
                                                  e_39 = t;
                                                  t = d_39;
                                                  t = bottomup_1_0(q_0, t);
                                                  p_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, p_39);
                                                  t = q_0(t);
                                                  o_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, o_39);
                                                  t = q_0(t);
                                                  g_39 = t;
                                                  t = i_12;
                                                  t = bottomup_1_0(q_0, t);
                                                  k_39 = t;
                                                  t = d_39;
                                                  t = bottomup_1_0(q_0, t);
                                                  n_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, n_39);
                                                  t = q_0(t);
                                                  m_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, m_39);
                                                  t = q_0(t);
                                                  l_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, k_39, l_39);
                                                  t = q_0(t);
                                                  h_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_39, h_39);
                                                  t = q_0(t);
                                                  f_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, e_39, f_39);
                                                  t = q_0(t);
                                                  LocalPopChoice(k_18);
                                                }
                                              else
                                                {
                                                  t = j_18;
                                                  t = j_12;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm l_18 = t;
                                            int m_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_x_5;
                                                t = q_0(t);
                                                LocalPopChoice(m_18);
                                              }
                                            else
                                              {
                                                t = l_18;
                                                {
                                                  ATerm n_18 = t;
                                                  int r_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL;
                                                      t = j_12;
                                                      t = new_0_0(t);
                                                      u_39 = t;
                                                      t = bottomup_1_0(q_0, t);
                                                      f_40 = t;
                                                      t = (ATerm) ATempty;
                                                      t = q_0(t);
                                                      g_40 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(g_40), f_40);
                                                      t = q_0(t);
                                                      v_39 = t;
                                                      t = u_39;
                                                      t = bottomup_1_0(q_0, t);
                                                      e_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, e_40);
                                                      t = q_0(t);
                                                      d_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, d_40);
                                                      t = q_0(t);
                                                      x_39 = t;
                                                      t = i_12;
                                                      t = bottomup_1_0(q_0, t);
                                                      z_39 = t;
                                                      t = u_39;
                                                      t = bottomup_1_0(q_0, t);
                                                      c_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, c_40);
                                                      t = q_0(t);
                                                      b_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, b_40);
                                                      t = q_0(t);
                                                      a_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_39, a_40);
                                                      t = q_0(t);
                                                      y_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_39, y_39);
                                                      t = q_0(t);
                                                      w_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, v_39, w_39);
                                                      t = q_0(t);
                                                      LocalPopChoice(r_18);
                                                    }
                                                  else
                                                    {
                                                      t = n_18;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                g_12 = ATgetArgument(t, 1);
                                                t = g_12;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    a_11 = ATgetArgument(t, 0);
                                                    n_11 = ATgetArgument(t, 1);
                                                    t = a_11;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        k_11 = ATgetArgument(t, 0);
                                                        t = f_12;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            b_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm s_18 = t;
                                                              int u_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, k_11);
                                                                  t = q_0(t);
                                                                  n_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_40, n_11);
                                                                  t = q_0(t);
                                                                  m_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_12, m_40);
                                                                  t = q_0(t);
                                                                  l_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, l_40);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(u_18);
                                                                }
                                                              else
                                                                {
                                                                  t = s_18;
                                                                  {
                                                                    ATerm v_18 = t;
                                                                    int x_18 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm q_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,e_41 = NULL;
                                                                        t = j_12;
                                                                        t = new_0_0(t);
                                                                        q_40 = t;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        c_41 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = q_0(t);
                                                                        e_41 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(e_41), c_41);
                                                                        t = q_0(t);
                                                                        s_40 = t;
                                                                        t = q_40;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        b_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, b_41);
                                                                        t = q_0(t);
                                                                        a_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, a_41);
                                                                        t = q_0(t);
                                                                        u_40 = t;
                                                                        t = i_12;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        w_40 = t;
                                                                        t = q_40;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        z_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, z_40);
                                                                        t = q_0(t);
                                                                        y_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, y_40);
                                                                        t = q_0(t);
                                                                        x_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_40, x_40);
                                                                        t = q_0(t);
                                                                        v_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_40, v_40);
                                                                        t = q_0(t);
                                                                        t_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, s_40, t_40);
                                                                        t = q_0(t);
                                                                        LocalPopChoice(x_18);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = v_18;
                                                                        t = j_12;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm z_18 = t;
                                                            int a_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm i_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,w_41 = NULL;
                                                                t = j_12;
                                                                t = new_0_0(t);
                                                                i_41 = t;
                                                                t = bottomup_1_0(q_0, t);
                                                                u_41 = t;
                                                                t = (ATerm) ATempty;
                                                                t = q_0(t);
                                                                w_41 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(w_41), u_41);
                                                                t = q_0(t);
                                                                k_41 = t;
                                                                t = i_41;
                                                                t = bottomup_1_0(q_0, t);
                                                                t_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, t_41);
                                                                t = q_0(t);
                                                                s_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, s_41);
                                                                t = q_0(t);
                                                                m_41 = t;
                                                                t = i_12;
                                                                t = bottomup_1_0(q_0, t);
                                                                o_41 = t;
                                                                t = i_41;
                                                                t = bottomup_1_0(q_0, t);
                                                                r_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, r_41);
                                                                t = q_0(t);
                                                                q_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, q_41);
                                                                t = q_0(t);
                                                                p_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, o_41, p_41);
                                                                t = q_0(t);
                                                                n_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, m_41, n_41);
                                                                t = q_0(t);
                                                                l_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, k_41, l_41);
                                                                t = q_0(t);
                                                                LocalPopChoice(a_19);
                                                              }
                                                            else
                                                              {
                                                                t = z_18;
                                                                t = j_12;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = f_12;
                                                        {
                                                          ATerm b_19 = t;
                                                          int c_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL;
                                                              t = j_12;
                                                              t = new_0_0(t);
                                                              z_41 = t;
                                                              t = bottomup_1_0(q_0, t);
                                                              k_42 = t;
                                                              t = (ATerm) ATempty;
                                                              t = q_0(t);
                                                              l_42 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(l_42), k_42);
                                                              t = q_0(t);
                                                              a_42 = t;
                                                              t = z_41;
                                                              t = bottomup_1_0(q_0, t);
                                                              j_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, j_42);
                                                              t = q_0(t);
                                                              i_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, i_42);
                                                              t = q_0(t);
                                                              c_42 = t;
                                                              t = i_12;
                                                              t = bottomup_1_0(q_0, t);
                                                              e_42 = t;
                                                              t = z_41;
                                                              t = bottomup_1_0(q_0, t);
                                                              h_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, h_42);
                                                              t = q_0(t);
                                                              g_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, g_42);
                                                              t = q_0(t);
                                                              f_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, e_42, f_42);
                                                              t = q_0(t);
                                                              d_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, c_42, d_42);
                                                              t = q_0(t);
                                                              b_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_42, b_42);
                                                              t = q_0(t);
                                                              LocalPopChoice(c_19);
                                                            }
                                                          else
                                                            {
                                                              t = b_19;
                                                              t = j_12;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = f_12;
                                                    {
                                                      ATerm e_19 = t;
                                                      int f_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
                                                          t = j_12;
                                                          t = new_0_0(t);
                                                          o_42 = t;
                                                          t = bottomup_1_0(q_0, t);
                                                          z_42 = t;
                                                          t = (ATerm) ATempty;
                                                          t = q_0(t);
                                                          a_43 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(a_43), z_42);
                                                          t = q_0(t);
                                                          p_42 = t;
                                                          t = o_42;
                                                          t = bottomup_1_0(q_0, t);
                                                          y_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, y_42);
                                                          t = q_0(t);
                                                          x_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, x_42);
                                                          t = q_0(t);
                                                          r_42 = t;
                                                          t = i_12;
                                                          t = bottomup_1_0(q_0, t);
                                                          t_42 = t;
                                                          t = o_42;
                                                          t = bottomup_1_0(q_0, t);
                                                          w_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, w_42);
                                                          t = q_0(t);
                                                          v_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, v_42);
                                                          t = q_0(t);
                                                          u_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_42, u_42);
                                                          t = q_0(t);
                                                          s_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_42, s_42);
                                                          t = q_0(t);
                                                          q_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, p_42, q_42);
                                                          t = q_0(t);
                                                          LocalPopChoice(f_19);
                                                        }
                                                      else
                                                        {
                                                          t = e_19;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    f_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm g_19 = t;
                                                      int h_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, f_12);
                                                          t = q_0(t);
                                                          LocalPopChoice(h_19);
                                                        }
                                                      else
                                                        {
                                                          t = g_19;
                                                          {
                                                            ATerm i_19 = t;
                                                            int j_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL;
                                                                t = j_12;
                                                                t = new_0_0(t);
                                                                e_43 = t;
                                                                t = bottomup_1_0(q_0, t);
                                                                p_43 = t;
                                                                t = (ATerm) ATempty;
                                                                t = q_0(t);
                                                                q_43 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(q_43), p_43);
                                                                t = q_0(t);
                                                                f_43 = t;
                                                                t = e_43;
                                                                t = bottomup_1_0(q_0, t);
                                                                o_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, o_43);
                                                                t = q_0(t);
                                                                n_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, n_43);
                                                                t = q_0(t);
                                                                h_43 = t;
                                                                t = i_12;
                                                                t = bottomup_1_0(q_0, t);
                                                                j_43 = t;
                                                                t = e_43;
                                                                t = bottomup_1_0(q_0, t);
                                                                m_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, m_43);
                                                                t = q_0(t);
                                                                l_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, l_43);
                                                                t = q_0(t);
                                                                k_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, j_43, k_43);
                                                                t = q_0(t);
                                                                i_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, h_43, i_43);
                                                                t = q_0(t);
                                                                g_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, f_43, g_43);
                                                                t = q_0(t);
                                                                LocalPopChoice(j_19);
                                                              }
                                                            else
                                                              {
                                                                t = i_19;
                                                                t = j_12;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm l_19 = t;
                                                    int m_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL;
                                                        t = j_12;
                                                        t = new_0_0(t);
                                                        t_43 = t;
                                                        t = bottomup_1_0(q_0, t);
                                                        f_44 = t;
                                                        t = (ATerm) ATempty;
                                                        t = q_0(t);
                                                        g_44 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(g_44), f_44);
                                                        t = q_0(t);
                                                        u_43 = t;
                                                        t = t_43;
                                                        t = bottomup_1_0(q_0, t);
                                                        e_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, e_44);
                                                        t = q_0(t);
                                                        c_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, c_44);
                                                        t = q_0(t);
                                                        w_43 = t;
                                                        t = i_12;
                                                        t = bottomup_1_0(q_0, t);
                                                        y_43 = t;
                                                        t = t_43;
                                                        t = bottomup_1_0(q_0, t);
                                                        b_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, b_44);
                                                        t = q_0(t);
                                                        a_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, a_44);
                                                        t = q_0(t);
                                                        z_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_43, z_43);
                                                        t = q_0(t);
                                                        x_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_43, x_43);
                                                        t = q_0(t);
                                                        v_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, u_43, v_43);
                                                        t = q_0(t);
                                                        LocalPopChoice(m_19);
                                                      }
                                                    else
                                                      {
                                                        t = l_19;
                                                        t = j_12;
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
                                        i_12 = ATgetArgument(t, 0);
                                        t = i_12;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm n_19 = t;
                                            int o_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_p_5;
                                                t = q_0(t);
                                                LocalPopChoice(o_19);
                                              }
                                            else
                                              {
                                                t = n_19;
                                                t = j_12;
                                              }
                                          }
                                        else
                                          {
                                            t = j_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            i_12 = ATgetArgument(t, 0);
                                            t = i_12;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm p_19 = t;
                                                int q_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_x_5;
                                                    t = q_0(t);
                                                    LocalPopChoice(q_19);
                                                  }
                                                else
                                                  {
                                                    t = p_19;
                                                    t = j_12;
                                                  }
                                              }
                                            else
                                              {
                                                t = j_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                i_12 = ATgetArgument(t, 0);
                                                t = i_12;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm s_19 = t;
                                                    int t_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_x_5;
                                                        t = q_0(t);
                                                        LocalPopChoice(t_19);
                                                      }
                                                    else
                                                      {
                                                        t = s_19;
                                                        t = j_12;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = j_12;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm u_19 = t;
                                                int v_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm x_19 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(v_19);
                                                    t = h_12;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm y_19 = t;
                                                        int z_19 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_x_5;
                                                            t = q_0(t);
                                                            LocalPopChoice(z_19);
                                                          }
                                                        else
                                                          {
                                                            t = y_19;
                                                            t = j_12;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = j_12;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = u_19;
                                                    {
                                                      ATerm a_20 = t;
                                                      int c_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm d_20 = ATgetArgument(t, 0);
                                                              h_12 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(c_20);
                                                          {
                                                            ATerm e_20 = t;
                                                            int f_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = h_12;
                                                                t = fetch_1_0(l_1, t);
                                                                t = term_x_5;
                                                                t = bottomup_1_0(q_0, t);
                                                                LocalPopChoice(f_20);
                                                              }
                                                            else
                                                              {
                                                                t = e_20;
                                                                t = j_12;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = a_20;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              i_12 = ATgetArgument(t, 0);
                                                              h_12 = ATgetArgument(t, 1);
                                                              t = h_12;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = i_12;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = h_12;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          f_12 = ATgetArgument(t, 0);
                                                                          g_12 = ATgetArgument(t, 1);
                                                                          t = i_12;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = i_12;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = i_12;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = h_12;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          f_12 = ATgetArgument(t, 0);
                                                                          g_12 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm g_20 = t;
                                                                            int h_20 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm p_45 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, g_12, h_12);
                                                                                t = q_0(t);
                                                                                p_45 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, f_12, p_45);
                                                                                t = q_0(t);
                                                                                LocalPopChoice(h_20);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = g_20;
                                                                                {
                                                                                  ATerm i_20 = t;
                                                                                  int j_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = h_12;
                                                                                      if((i_12 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(j_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = i_20;
                                                                                      t = j_12;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm l_20 = t;
                                                                          int m_20 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = h_12;
                                                                              if((i_12 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(m_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = l_20;
                                                                              t = j_12;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  i_12 = ATgetArgument(t, 0);
                                                                  h_12 = ATgetArgument(t, 1);
                                                                  z_10 = ATgetArgument(t, 2);
                                                                  t = z_10;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm n_20 = t;
                                                                      int p_20 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, h_12);
                                                                          t = q_0(t);
                                                                          LocalPopChoice(p_20);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = n_20;
                                                                          t = j_12;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = j_12;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      i_12 = ATgetArgument(t, 0);
                                                                      h_12 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm q_20 = t;
                                                                        int r_20 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, i_12, h_12);
                                                                            t = q_0(t);
                                                                            LocalPopChoice(r_20);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = q_20;
                                                                            t = j_12;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          i_12 = ATgetArgument(t, 0);
                                                                          t = i_12;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              f_12 = ATgetFirst((ATermList) t);
                                                                              g_12 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm t_20 = t;
                                                                                int u_20 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm d_46 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, g_12);
                                                                                    t = q_0(t);
                                                                                    d_46 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, f_12, d_46);
                                                                                    t = q_0(t);
                                                                                    LocalPopChoice(u_20);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = t_20;
                                                                                    t = j_12;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm v_20 = t;
                                                                                  int w_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_x_5;
                                                                                      t = q_0(t);
                                                                                      LocalPopChoice(w_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = v_20;
                                                                                      t = j_12;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = j_12;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              i_12 = ATgetArgument(t, 0);
                                                                              t = i_12;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  f_12 = ATgetFirst((ATermList) t);
                                                                                  g_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm x_20 = t;
                                                                                    int y_20 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm j_46 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, g_12);
                                                                                        t = q_0(t);
                                                                                        j_46 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, f_12, j_46);
                                                                                        t = q_0(t);
                                                                                        LocalPopChoice(y_20);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = x_20;
                                                                                        t = j_12;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm z_20 = t;
                                                                                      int a_21 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_x_5;
                                                                                          t = q_0(t);
                                                                                          LocalPopChoice(a_21);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = z_20;
                                                                                          t = j_12;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = j_12;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  i_12 = ATgetArgument(t, 0);
                                                                                  t = i_12;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      f_12 = ATgetFirst((ATermList) t);
                                                                                      g_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm b_21 = t;
                                                                                        int c_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm p_46 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, g_12);
                                                                                            t = q_0(t);
                                                                                            p_46 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, p_46);
                                                                                            t = q_0(t);
                                                                                            LocalPopChoice(c_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = b_21;
                                                                                            t = j_12;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm d_21 = t;
                                                                                          int e_21 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_p_5;
                                                                                              t = q_0(t);
                                                                                              LocalPopChoice(e_21);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = d_21;
                                                                                              t = j_12;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = j_12;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      i_12 = ATgetArgument(t, 0);
                                                                                      h_12 = ATgetArgument(t, 1);
                                                                                      z_10 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm g_21 = t;
                                                                                        int h_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL;
                                                                                            t = term_i_21;
                                                                                            t = bottomup_1_0(q_0, t);
                                                                                            y_46 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = q_0(t);
                                                                                            b_47 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(b_47), z_10);
                                                                                            t = q_0(t);
                                                                                            a_47 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(a_47), i_12);
                                                                                            t = q_0(t);
                                                                                            z_46 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, y_46, z_46);
                                                                                            t = q_0(t);
                                                                                            x_46 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, h_12, x_46);
                                                                                            t = q_0(t);
                                                                                            LocalPopChoice(h_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = g_21;
                                                                                            t = j_12;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          i_12 = ATgetArgument(t, 0);
                                                                                          h_12 = ATgetArgument(t, 1);
                                                                                          z_10 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm j_21 = t;
                                                                                            int k_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm l_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, h_12);
                                                                                                t = q_0(t);
                                                                                                n_47 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, z_10);
                                                                                                t = q_0(t);
                                                                                                q_47 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = q_0(t);
                                                                                                r_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(r_47), q_47);
                                                                                                t = q_0(t);
                                                                                                p_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(p_47), i_12);
                                                                                                t = q_0(t);
                                                                                                o_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(o_47), n_47);
                                                                                                t = q_0(t);
                                                                                                l_47 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, l_47);
                                                                                                t = q_0(t);
                                                                                                LocalPopChoice(k_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = j_21;
                                                                                                t = j_12;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              i_12 = ATgetArgument(t, 0);
                                                                                              h_12 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm l_21 = t;
                                                                                                int m_21 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm v_47 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, h_12);
                                                                                                    t = q_0(t);
                                                                                                    v_47 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, v_47);
                                                                                                    t = q_0(t);
                                                                                                    LocalPopChoice(m_21);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = l_21;
                                                                                                    t = j_12;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  i_12 = ATgetArgument(t, 0);
                                                                                                  h_12 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm n_21 = t;
                                                                                                    int o_21 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm z_47 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, i_12);
                                                                                                        t = q_0(t);
                                                                                                        z_47 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, z_47, h_12);
                                                                                                        t = q_0(t);
                                                                                                        LocalPopChoice(o_21);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = n_21;
                                                                                                        t = j_12;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      i_12 = ATgetArgument(t, 0);
                                                                                                      h_12 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm p_21 = t;
                                                                                                        int r_21 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm d_48 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, h_12);
                                                                                                            t = q_0(t);
                                                                                                            d_48 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, d_48, i_12);
                                                                                                            t = q_0(t);
                                                                                                            LocalPopChoice(r_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = p_21;
                                                                                                            t = j_12;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          i_12 = ATgetArgument(t, 0);
                                                                                                          h_12 = ATgetArgument(t, 1);
                                                                                                          t = h_12;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              d_12 = ATgetArgument(t, 0);
                                                                                                              e_12 = ATgetArgument(t, 1);
                                                                                                              t = i_12;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = h_12;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm s_21 = t;
                                                                                                                  int t_21 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm p_48 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, i_12, d_12);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      p_48 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, p_48, e_12);
                                                                                                                      t = bottomup_1_0(q_0, t);
                                                                                                                      LocalPopChoice(t_21);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = s_21;
                                                                                                                      t = j_12;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  d_12 = ATgetArgument(t, 0);
                                                                                                                  e_12 = ATgetArgument(t, 1);
                                                                                                                  z_11 = ATgetArgument(t, 2);
                                                                                                                  t = z_11;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = e_12;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = d_12;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              c_12 = ATgetArgument(t, 0);
                                                                                                                              t = i_12;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = h_12;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      f_12 = ATgetFirst((ATermList) t);
                                                                                                                                      g_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = g_12;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = f_12;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              b_12 = ATgetArgument(t, 0);
                                                                                                                                              w_11 = ATgetArgument(t, 1);
                                                                                                                                              q_11 = ATgetArgument(t, 2);
                                                                                                                                              u_11 = ATgetArgument(t, 3);
                                                                                                                                              t = q_11;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = w_11;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm v_21 = t;
                                                                                                                                                      int w_21 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = c_12;
                                                                                                                                                          if((b_12 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = u_11;
                                                                                                                                                          {
                                                                                                                                                            ATerm x_21 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm m_1 (ATerm t);
                                                                                                                                                                static ATerm m_1 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm y_21 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(y_21, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((b_12 != ATgetArgument(y_21, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(y_21, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm z_21 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(z_21) != AT_LIST) || !(ATisEmpty(z_21))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm a_22 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(a_22) != AT_LIST) || !(ATisEmpty(a_22))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  return(t);
                                                                                                                                                                }
                                                                                                                                                                t = oncetd_1_0(m_1, t);
                                                                                                                                                                PopChoice();
                                                                                                                                                                _fail(t);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = x_21;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = u_11;
                                                                                                                                                          t = bottomup_1_0(q_0, t);
                                                                                                                                                          LocalPopChoice(w_21);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = v_21;
                                                                                                                                                          t = j_12;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = j_12;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = j_12;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = j_12;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = j_12;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = j_12;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = i_12;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = h_12;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = j_12;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = i_12;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = h_12;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = j_12;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = i_12;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = h_12;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = j_12;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = i_12;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = h_12;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = j_12;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              i_12 = ATgetArgument(t, 0);
                                                                                                              h_12 = ATgetArgument(t, 1);
                                                                                                              t = i_12;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = h_12;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = j_12;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = j_12;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  }
                                              }
                                          }
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
ATerm map_1_0 (ATerm b_151 (ATerm), ATerm t)
{
  static ATerm i_50 (ATerm t);
  static ATerm i_50 (ATerm t)
  {
    ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL;
    f_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_50;
      }
    else
      {
        ATerm e_3 = NULL,h_3 = NULL,i_3 = NULL,w_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_50 = ATgetFirst((ATermList) t);
            h_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_50);
        e_3 = t;
        t = g_50;
        t = b_151(t);
        h_3 = t;
        t = h_50;
        t = i_50(t);
        i_3 = t;
        t = (ATerm) ATinsert(CheckATermList(i_3), h_3);
        w_0 = t;
        t = SSLsetAnnotations(w_0, e_3);
      }
    return(t);
  }
  t = i_50(t);
  return(t);
}
static ATerm b_11 (ATerm f_47, ATerm g_47, ATerm t)
{
  ATerm k_50 = NULL;
  t = SSL_fputc(f_47, g_47);
  k_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_50);
  return(t);
}
static ATerm c_11 (ATerm o_52, ATerm p_52, ATerm t)
{
  ATerm l_50 = NULL;
  t = SSL_write_term_to_stream_text(o_52, p_52);
  l_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_50);
  return(t);
}
static ATerm e_11 (ATerm b_144 (ATerm), ATerm b_475, ATerm u_52, ATerm t)
{
  ATerm m_50 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_475, term_b_22);
  t = i_11(t);
  m_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_50, u_52);
  t = b_144(t);
  t = fclose_0_0(t);
  t = u_52;
  return(t);
}
static ATerm d_11 (ATerm k_52, ATerm l_52, ATerm t)
{
  ATerm n_50 = NULL;
  t = SSL_write_term_to_stream_baf(k_52, l_52);
  n_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_50);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_22 = ATgetArgument(t, 0);
      if(match_cons(c_22, sym_Stream_1))
        {
          u_50 = ATgetArgument(c_22, 0);
        }
      else
        _fail(t);
      v_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(u_50, v_50, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm w_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_22 = ATgetArgument(t, 0);
      if(match_cons(d_22, sym_Stream_1))
        {
          a_51 = ATgetArgument(d_22, 0);
        }
      else
        _fail(t);
      b_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_11(a_51, b_51, t);
  w_50 = t;
  t = term_g_22;
  y_50 = t;
  t = w_50;
  if(match_cons(t, sym_Stream_1))
    {
      z_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_22, w_50);
  t = b_11(y_50, z_50, t);
  return(t);
}
ATerm output_1_0 (ATerm p_160 (ATerm), ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL;
  t = p_160(t);
  p_50 = t;
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_50 = NULL,r_50 = NULL;
        t = term_j_22;
        q_50 = t;
        t = term_k_22;
        r_50 = t;
        t = term_l_22;
        t = o_11(q_50, r_50, t);
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        t = term_m_22;
      }
  }
  o_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_50, p_50);
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_50 = NULL,t_50 = NULL;
        t = term_j_22;
        s_50 = t;
        t = term_q_22;
        t_50 = t;
        t = term_r_22;
        t = o_11(s_50, t_50, t);
        t = (ATerm) ATmakeAppl(sym__2, o_50, p_50);
        LocalPopChoice(p_22);
        if(match_cons(t, sym__2))
          {
            ATerm s_22 = ATgetArgument(t, 0);
            ATerm t_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_11(o_1, o_50, p_50, t);
      }
    else
      {
        t = o_22;
        if(match_cons(t, sym__2))
          {
            ATerm u_22 = ATgetArgument(t, 0);
            ATerm v_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_11(p_1, o_50, p_50, t);
      }
  }
  return(t);
}
static ATerm r_51 (ATerm l_51, ATerm t)
{
  t = SSL_fclose(l_51);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL;
  p_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_51 = ATgetArgument(t, 0);
      {
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_51);
            LocalPopChoice(y_22);
          }
        else
          {
            t = x_22;
            t = r_51(p_51, t);
          }
      }
    }
  else
    {
      t = r_51(p_51, t);
    }
  return(t);
}
static ATerm f_11 (ATerm q_52, ATerm t)
{
  t = SSL_read_term_from_stream(q_52);
  return(t);
}
static ATerm g_11 (ATerm l_45, ATerm m_45, ATerm t)
{
  t = SSL_strcat(l_45, m_45);
  return(t);
}
static ATerm h_11 (ATerm h_47, ATerm j_47, ATerm t)
{
  ATerm s_51 = NULL;
  t = SSL_fopen(h_47, j_47);
  s_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_51);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_51 = NULL;
  t = SSL_stdin_stream();
  t_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_51);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_51 = NULL;
  t = SSL_stdout_stream();
  u_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_51);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_51 = NULL;
  t = SSL_stderr_stream();
  v_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_51);
  return(t);
}
static ATerm m_53 (ATerm b_52, ATerm t)
{
  ATerm c_52 = NULL;
  t = SSL_explode_term(b_52);
  if(match_cons(t, sym__2))
    {
      ATerm z_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_23 = ATgetArgument(t, 1);
        if(((ATgetType(b_23) == AT_LIST) && !(ATisEmpty(b_23))))
          {
            c_52 = ATgetFirst((ATermList) b_23);
            {
              ATerm c_23 = (ATerm) ATgetNext((ATermList) b_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_52;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_52;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_52;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_52;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_53 (ATerm f_52, ATerm h_52, ATerm i_52, ATerm t)
{
  ATerm j_52 = NULL,m_52 = NULL,r_52 = NULL,x_52 = NULL,y_0 = NULL;
  t = SSLgetAnnotations(i_52);
  r_52 = t;
  t = f_52;
  if(match_cons(t, sym_Path_1))
    {
      x_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_52, h_52);
  y_0 = t;
  t = SSLsetAnnotations(y_0, r_52);
  if(match_cons(t, sym__2))
    {
      j_52 = ATgetArgument(t, 0);
      m_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(j_52, m_52, t);
  return(t);
}
static ATerm o_53 (ATerm z_52, ATerm a_53, ATerm b_53, ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL,h_53 = NULL,z_0 = NULL;
  t = SSLgetAnnotations(b_53);
  e_53 = t;
  t = SSL_is_string(z_52);
  h_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_53, a_53);
  z_0 = t;
  t = SSLsetAnnotations(z_0, e_53);
  if(match_cons(t, sym__2))
    {
      c_53 = ATgetArgument(t, 0);
      d_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(c_53, d_53, t);
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL;
  j_53 = t;
  if(match_cons(t, sym__2))
    {
      k_53 = ATgetArgument(t, 0);
      l_53 = ATgetArgument(t, 1);
      {
        ATerm d_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_53(j_53, t);
            LocalPopChoice(e_23);
          }
        else
          {
            t = d_23;
            {
              ATerm f_23 = t;
              int g_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_53(k_53, l_53, j_53, t);
                  LocalPopChoice(g_23);
                }
              else
                {
                  t = f_23;
                  t = o_53(k_53, l_53, j_53, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_53(j_53, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL,z_53 = NULL;
  z_53 = t;
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_53, term_k_23);
        t = i_11(t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        {
          ATerm v_3 = NULL,w_3 = NULL;
          t = term_l_23;
          w_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_23, z_53);
          t = g_11(w_3, z_53, t);
          v_3 = t;
          t = SSL_perror(v_3);
          _fail(t);
        }
      }
  }
  r_53 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_11(s_53, t);
  q_53 = t;
  t = r_53;
  t = fclose_0_0(t);
  t = q_53;
  return(t);
}
ATerm input_1_0 (ATerm q_160 (ATerm), ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_54 = NULL,d_54 = NULL;
      t = term_j_22;
      c_54 = t;
      t = term_o_23;
      d_54 = t;
      t = term_p_23;
      t = o_11(c_54, d_54, t);
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      t = term_q_23;
    }
  t = ReadFromFile_0_0(t);
  t = q_160(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL;
  t = term_j_22;
  e_54 = t;
  t = term_s_23;
  f_54 = t;
  t = term_t_23;
  t = o_11(e_54, f_54, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL;
  h_54 = t;
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_54;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_23 = ATgetFirst((ATermList) t);
                ATerm x_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_54;
          }
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        t = (ATerm) ATinsert(ATempty, h_54);
      }
  }
  i_54 = t;
  t = term_m_22;
  j_54 = t;
  t = SSL_printnl(j_54, i_54);
  t = h_54;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_54 = ATgetFirst((ATermList) t);
      p_54 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_54 = NULL,u_54 = NULL;
        static ATerm r_1 (ATerm t);
        static ATerm r_1 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_54)), not_null(u_54));
          return(t);
        }
        t = p_54;
        t = o_0(t);
        if(((t_54 != NULL) && (t_54 != t)))
          _fail(t);
        else
          t_54 = t;
        t = o_54;
        t = m_0(t);
        if(((u_54 != NULL) && (u_54 != t)))
          _fail(t);
        else
          u_54 = t;
        t = p_54;
        t = reverse_acc_2_0(m_0, r_1, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_23;
      t = o_0(t);
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm c_55 = NULL,e_55 = NULL,f_55 = NULL,b_4 = NULL;
  f_55 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_55);
  c_55 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_55);
  b_4 = t;
  t = SSLsetAnnotations(b_4, c_55);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm j_55 = NULL;
  j_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_55), term_z_23);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm o_162 (ATerm), ATerm p_162 (ATerm), ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL;
  ATerm a_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_55 = NULL,b_55 = NULL;
      t = term_j_22;
      a_55 = t;
      t = term_s_23;
      b_55 = t;
      t = term_t_23;
      t = o_11(a_55, b_55, t);
      LocalPopChoice(c_24);
    }
  else
    {
      t = a_24;
      t = fetch_1_0(s_1, t);
    }
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_162(t);
        t = echo_0_0(t);
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
      }
  }
  t = term_f_24;
  t = echo_0_0(t);
  t = term_g_24;
  y_54 = t;
  t = term_h_24;
  z_54 = t;
  t = term_i_24;
  t = o_11(y_54, z_54, t);
  t = reverse_acc_2_0(_id, u_1, t);
  t = map_1_0(v_1, t);
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_55 = NULL;
        t = p_162(t);
        k_55 = t;
        t = (ATerm) ATinsert(CheckATermList(k_55), term_m_24);
        t = echo_0_0(t);
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
      }
  }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL,v_6 = NULL;
  s_55 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_55);
  q_55 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_55);
  v_6 = t;
  t = SSLsetAnnotations(v_6, q_55);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_55 = NULL;
  n_55 = t;
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_55 = NULL,p_55 = NULL;
        t = term_j_22;
        o_55 = t;
        t = term_s_23;
        p_55 = t;
        t = term_t_23;
        t = o_11(o_55, p_55, t);
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        t = fetch_1_0(x_1, t);
      }
  }
  t = n_55;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm y_1 (ATerm t)
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
static ATerm z_1 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
  v_55 = t;
  t = SSL_string_to_int(v_55);
  w_55 = t;
  t = term_p_24;
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_24, w_55);
  t = r_11(x_55, w_55, t);
  t = v_55;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_q_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_1, z_1, b_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
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
static ATerm f_2 (ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL;
  t = term_r_24;
  a_56 = t;
  t = term_t_24;
  b_56 = t;
  t = term_u_24;
  t = r_11(a_56, b_56, t);
  t = term_v_24;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_w_24;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL;
  c_56 = t;
  t = SSL_string_to_int(c_56);
  d_56 = t;
  t = term_r_24;
  e_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_24, d_56);
  t = r_11(e_56, d_56, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_56);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_y_24;
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
  ATerm f_56 = NULL,g_56 = NULL;
  t = term_z_24;
  f_56 = t;
  t = term_y_23;
  g_56 = t;
  t = term_a_25;
  t = r_11(f_56, g_56, t);
  t = term_b_25;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_c_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_2, f_2, i_2, t);
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
        ATerm f_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_2, r_2, s_2, t);
            LocalPopChoice(h_25);
          }
        else
          {
            t = f_25;
            t = Option_3_0(t_2, u_2, v_2, t);
          }
      }
    }
  return(t);
}
static ATerm r_11 (ATerm e_51, ATerm f_51, ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL;
  t = term_j_22;
  h_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_22, e_51, f_51);
  t = lookup_table_0_1(h_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(e_51, f_51, i_56, t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_22, e_51, f_51);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL;
      t = term_y_23;
      t = g_0(t);
      r_56 = t;
      t = term_g_24;
      s_56 = t;
      t = term_h_24;
      t_56 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_24, term_h_24, r_56);
      t = p_11(s_56, t_56, r_56, t);
      _fail(t);
    }
  else
    {
      ATerm w_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_56 = ATgetFirst((ATermList) t);
          n_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_56;
      t = b_0(t);
      t = term_y_23;
      t = d_0(t);
      w_56 = t;
      t = (ATerm) ATinsert(CheckATermList(n_56), w_56);
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm y_56 = NULL;
  y_56 = t;
  if(match_string(t, "-o"))
    {
      t = y_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_56;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL;
  z_56 = t;
  t = term_k_22;
  a_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_22, z_56);
  t = r_11(a_57, z_56, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_56);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_i_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_2, x_2, y_2, t);
  return(t);
}
static ATerm p_11 (ATerm p_56, ATerm q_56, ATerm o_56, ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL;
  c_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_25 = ATgetArgument(t, 0);
            ATerm u_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
        t = o_11(p_56, q_56, t);
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = (ATerm) ATempty;
      }
  }
  d_57 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_56, q_56, (ATerm) ATinsert(CheckATermList(d_57), o_56));
  t = lookup_table_0_1(p_56, t);
  g_57 = t;
  t = (ATerm) ATinsert(CheckATermList(d_57), o_56);
  e_57 = t;
  t = g_57;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(q_56, e_57, f_57, t);
  t = c_57;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
      t = term_y_23;
      t = l_0(t);
      r_57 = t;
      t = term_g_24;
      s_57 = t;
      t = term_h_24;
      t_57 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_24, term_h_24, r_57);
      t = p_11(s_57, t_57, r_57, t);
      _fail(t);
    }
  else
    {
      ATerm x_57 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_57 = ATgetFirst((ATermList) t);
          o_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_57;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_57 = ATgetFirst((ATermList) t);
          q_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_57;
      t = h_0(t);
      t = p_57;
      t = j_0(t);
      x_57 = t;
      t = (ATerm) ATinsert(CheckATermList(q_57), x_57);
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm z_57 = NULL;
  z_57 = t;
  if(match_string(t, "-i"))
    {
      t = z_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_57;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm a_58 = NULL,f_58 = NULL;
  a_58 = t;
  t = term_o_23;
  f_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_23, a_58);
  t = r_11(f_58, a_58, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_58);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_w_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_2, a_3, b_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL,k_58 = NULL,l_58 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_23;
  t = whoami_0_0(t);
  g_58 = t;
  t = term_x_25;
  k_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_25), g_58);
  l_58 = t;
  t = SSL_printnl(k_58, l_58);
  t = term_z_25;
  h_58 = t;
  t = SSL_exit(h_58);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL;
  t = term_j_22;
  m_58 = t;
  t = term_s_23;
  n_58 = t;
  t = term_t_23;
  t = o_11(m_58, n_58, t);
  return(t);
}
static ATerm j_11 (ATerm x_53, ATerm y_53, ATerm t)
{
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_53, y_53);
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
      t = SSL_addr(x_53, y_53);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_153 (ATerm), ATerm k_153 (ATerm), ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL;
  p_58 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_58;
      t = j_153(t);
    }
  else
    {
      ATerm u_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_58 = ATgetFirst((ATermList) t);
          r_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_58;
      t = foldr_2_0(j_153, k_153, t);
      u_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_58, u_58);
      t = k_153(t);
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
  t = term_t_24;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL;
  if(match_cons(t, sym__2))
    {
      c_4 = ATgetArgument(t, 0);
      d_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(c_4, d_4, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_58 = NULL,y_3 = NULL,z_3 = NULL;
  t = times_0_0(t);
  z_3 = t;
  t = SSL_explode_term(z_3);
  if(match_cons(t, sym__2))
    {
      ATerm c_26 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3;
  t = foldr_2_0(c_3, d_3, t);
  x_58 = t;
  t = SSL_TicksToSeconds(x_58);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL;
  i_59 = t;
  if(match_cons(t, sym__2))
    {
      j_59 = ATgetArgument(t, 0);
      k_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_59;
        if((j_59 != t))
          {
            _fail(t);
          }
        t = i_59;
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = (ATerm) ATmakeAppl(sym__2, j_59, k_59);
        {
          ATerm f_26 = t;
          int g_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_59, k_59);
              LocalPopChoice(g_26);
            }
          else
            {
              t = f_26;
              t = SSL_gtr(j_59, k_59);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_59, k_59);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_141 (ATerm), ATerm t)
{
  ATerm o_59 = NULL;
  o_59 = t;
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL;
        t = term_j_22;
        r_59 = t;
        t = term_r_24;
        s_59 = t;
        t = term_j_26;
        t = o_11(r_59, s_59, t);
        q_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_59, term_z_25);
        t = geq_0_0(t);
        t = o_59;
        t = w_141(t);
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = o_59;
      }
  }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm u_59 = NULL,v_59 = NULL,x_59 = NULL,y_59 = NULL;
  t = run_time_0_0(t);
  u_59 = t;
  t = term_y_23;
  t = whoami_0_0(t);
  v_59 = t;
  t = term_x_25;
  x_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_26), u_59), term_k_26), v_59);
  y_59 = t;
  t = SSL_printnl(x_59, y_59);
  t = (ATerm) ATmakeAppl(sym__2, term_x_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_26), u_59), term_k_26), v_59));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_59 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_24;
  z_59 = t;
  t = SSL_exit(z_59);
  return(t);
}
static ATerm s_11 (ATerm a_61, ATerm b_61, ATerm c_61, ATerm t)
{
  ATerm a_60 = NULL;
  t = SSL_hashtable_put(c_61, a_61, b_61);
  a_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_60);
  return(t);
}
ATerm lookup_table_0_1 (ATerm b_58, ATerm t)
{
  ATerm j_60 = NULL;
  t = table_hashtable_0_0(t);
  j_60 = t;
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_4 = NULL;
        t = j_60;
        if(match_cons(t, sym_Hashtable_1))
          {
            o_4 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_11(b_58, o_4, t);
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        {
          ATerm t_4 = NULL;
          t = b_58;
          t = table_create_0_0(t);
          t = j_60;
          if(match_cons(t, sym_Hashtable_1))
            {
              t_4 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_11(b_58, t_4, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm i_61, ATerm j_61, ATerm t)
{
  ATerm m_60 = NULL;
  t = SSL_hashtable_create(i_61, j_61);
  m_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_60);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL,r_60 = NULL,s_60 = NULL;
  n_60 = t;
  t = term_p_26;
  r_60 = t;
  t = term_q_26;
  s_60 = t;
  t = n_60;
  t = new_hashtable_0_2(r_60, s_60, t);
  o_60 = t;
  t = n_60;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(n_60, o_60, p_60, t);
  t = n_60;
  return(t);
}
static ATerm l_11 (ATerm f_61, ATerm g_61, ATerm t)
{
  ATerm t_60 = NULL;
  t = SSL_hashtable_remove(g_61, f_61);
  t_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_60);
  return(t);
}
static ATerm m_11 (ATerm k_61, ATerm t)
{
  ATerm u_60 = NULL;
  t = SSL_hashtable_destroy(k_61);
  u_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_60);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm v_60 = NULL;
  t = SSL_table_hashtable();
  v_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_60);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL;
  w_60 = t;
  t = table_hashtable_0_0(t);
  x_60 = t;
  t = lookup_table_0_1(w_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_11(z_60, t);
  t = x_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_11(w_60, y_60, t);
  t = w_60;
  return(t);
}
ATerm fetch_1_0 (ATerm l_151 (ATerm), ATerm t)
{
  static ATerm g_62 (ATerm t);
  static ATerm g_62 (ATerm t)
  {
    ATerm d_62 = NULL,e_62 = NULL,f_62 = NULL;
    d_62 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_62 = ATgetFirst((ATermList) t);
        f_62 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_26 = t;
      int s_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_4 = NULL,b_5 = NULL,x_6 = NULL;
          t = SSLgetAnnotations(d_62);
          y_4 = t;
          t = e_62;
          t = l_151(t);
          b_5 = t;
          t = (ATerm) ATinsert(CheckATermList(f_62), b_5);
          x_6 = t;
          t = SSLsetAnnotations(x_6, y_4);
          LocalPopChoice(s_26);
        }
      else
        {
          t = r_26;
          {
            ATerm j_5 = NULL,m_5 = NULL,y_6 = NULL;
            t = SSLgetAnnotations(d_62);
            j_5 = t;
            t = f_62;
            t = g_62(t);
            m_5 = t;
            t = (ATerm) ATinsert(CheckATermList(m_5), e_62);
            y_6 = t;
            t = SSLsetAnnotations(y_6, j_5);
          }
        }
    }
    return(t);
  }
  t = g_62(t);
  return(t);
}
static ATerm t_11 (ATerm d_61, ATerm e_61, ATerm t)
{
  t = SSL_hashtable_get(e_61, d_61);
  return(t);
}
static ATerm o_11 (ATerm i_58, ATerm j_58, ATerm t)
{
  ATerm j_62 = NULL;
  t = lookup_table_0_1(i_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(j_58, j_62, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL;
  t = term_t_26;
  l_62 = t;
  t = term_y_23;
  m_62 = t;
  t = term_u_26;
  t = r_11(l_62, m_62, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_v_26;
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
  ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL;
  t = term_t_26;
  p_62 = t;
  t = term_y_23;
  q_62 = t;
  t = term_u_26;
  t = r_11(p_62, q_62, t);
  t = term_w_26;
  n_62 = t;
  t = term_y_23;
  o_62 = t;
  t = term_x_26;
  t = r_11(n_62, o_62, t);
  t = term_y_26;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_z_26;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_3, j_3, k_3, t);
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
      t = Option_3_0(l_3, m_3, n_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,b_7 = NULL;
  w_62 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_62 = ATgetFirst((ATermList) t);
      t_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_62);
  r_62 = t;
  t = s_62;
  t = n_113(t);
  u_62 = t;
  t = t_62;
  t = o_113(t);
  v_62 = t;
  t = (ATerm) ATinsert(CheckATermList(v_62), u_62);
  b_7 = t;
  t = SSLsetAnnotations(b_7, r_62);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_162 (ATerm), ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,g_63 = NULL,h_63 = NULL,d_7 = NULL;
  b_63 = t;
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_27;
        t = j_162(t);
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
      }
  }
  t = b_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_63 = ATgetFirst((ATermList) t);
      e_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_63);
  c_63 = t;
  t = term_s_23;
  h_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_23, d_63);
  t = r_11(h_63, d_63, t);
  t = e_63;
  {
    static ATerm r_63 (ATerm t);
    static ATerm r_63 (ATerm t)
    {
      ATerm g_27 = t;
      int h_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_27 = t;
          int j_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_63 = NULL;
              k_63 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_63;
              LocalPopChoice(j_27);
            }
          else
            {
              t = i_27;
              t = j_162(t);
              t = Cons_2_0(_id, r_63, t);
            }
          LocalPopChoice(h_27);
        }
      else
        {
          t = g_27;
          {
            ATerm n_63 = NULL,o_63 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_63 = ATgetFirst((ATermList) t);
                o_63 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_63), (ATerm) ATmakeAppl(sym_Undefined_1, n_63));
          }
        }
      return(t);
    }
    t = r_63(t);
  }
  g_63 = t;
  t = (ATerm) ATinsert(CheckATermList(g_63), (ATerm) ATmakeAppl(sym_Program_1, d_63));
  d_7 = t;
  t = SSLsetAnnotations(d_7, c_63);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm e_64 = NULL;
  e_64 = t;
  if(match_string(t, "--help"))
    {
      t = e_64;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_64;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_64;
        }
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm f_64 = NULL,g_64 = NULL;
  t = term_k_27;
  f_64 = t;
  t = term_y_23;
  g_64 = t;
  t = term_l_27;
  t = r_11(f_64, g_64, t);
  t = term_m_27;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_n_27;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm g_162 (ATerm), ATerm h_162 (ATerm), ATerm i_162 (ATerm), ATerm t)
{
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL;
  y_63 = t;
  t = term_g_24;
  z_63 = t;
  t = term_o_27;
  t = lookup_table_0_1(z_63, t);
  d_64 = t;
  t = term_h_24;
  a_64 = t;
  t = (ATerm) ATempty;
  b_64 = t;
  t = d_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(a_64, b_64, c_64, t);
  t = y_63;
  {
    static ATerm o_3 (ATerm t);
    static ATerm o_3 (ATerm t)
    {
      ATerm p_27 = t;
      int q_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_162(t);
          LocalPopChoice(q_27);
        }
      else
        {
          t = p_27;
          {
            ATerm r_27 = t;
            int s_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_3, q_3, r_3, t);
                LocalPopChoice(s_27);
              }
            else
              {
                t = r_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_3, t);
  }
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_64 = NULL;
        r_64 = t;
        {
          ATerm v_27 = t;
          int w_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_5 = NULL;
              t = r_64;
              {
                ATerm x_27 = t;
                int y_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_5 = NULL,v_5 = NULL;
                    t = term_j_22;
                    u_5 = t;
                    t = term_k_27;
                    v_5 = t;
                    t = term_a_28;
                    t = o_11(u_5, v_5, t);
                    LocalPopChoice(y_27);
                  }
                else
                  {
                    t = x_27;
                    t = fetch_1_0(s_3, t);
                  }
              }
              t = r_64;
              t = h_162(t);
              t = term_t_24;
              t_5 = t;
              t = SSL_exit(t_5);
              LocalPopChoice(w_27);
            }
          else
            {
              t = v_27;
              {
                ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL;
                t = term_j_22;
                a_6 = t;
                t = term_t_26;
                b_6 = t;
                t = term_b_28;
                t = o_11(a_6, b_6, t);
                t = r_64;
                t = i_162(t);
                t = term_t_24;
                z_5 = t;
                t = SSL_exit(z_5);
              }
            }
        }
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        {
          ATerm c_28 = t;
          int d_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL;
              static ATerm t_3 (ATerm t);
              static ATerm t_3 (ATerm t)
              {
                ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL,f_7 = NULL;
                x_64 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    w_64 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_64);
                v_64 = t;
                t = w_64;
                if(((w_63 != NULL) && (w_63 != t)))
                  _fail(t);
                else
                  w_63 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, w_64);
                f_7 = t;
                t = SSLsetAnnotations(f_7, v_64);
                return(t);
              }
              t = fetch_1_0(t_3, t);
              t = term_x_25;
              t_64 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_63)), term_e_28);
              u_64 = t;
              t = SSL_printnl(t_64, u_64);
              t = (ATerm) ATmakeAppl(sym__2, term_x_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_63)), term_e_28));
              t = h_162(t);
              t = term_z_25;
              s_64 = t;
              t = SSL_exit(s_64);
              LocalPopChoice(d_28);
            }
          else
            {
              t = c_28;
            }
        }
      }
  }
  x_63 = t;
  t = term_g_24;
  t = table_destroy_0_0(t);
  t = x_63;
  return(t);
}
ATerm option_wrap_5_0 (ATerm j_160 (ATerm), ATerm k_160 (ATerm), ATerm l_160 (ATerm), ATerm m_160 (ATerm), ATerm n_160 (ATerm), ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL;
  t = parse_options_3_0(j_160, k_160, l_160, t);
  c_65 = t;
  t = term_f_28;
  t = table_create_0_0(t);
  t = term_f_28;
  d_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_28, term_g_28, c_65);
  t = lookup_table_0_1(d_65, t);
  g_65 = t;
  t = term_g_28;
  e_65 = t;
  t = g_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_11(e_65, c_65, f_65, t);
  t = c_65;
  t = m_160(t);
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_160(t);
        t = report_success_0_0(t);
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(k_28);
    }
  else
    {
      t = j_28;
      {
        ATerm l_28 = t;
        int n_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(n_28);
          }
        else
          {
            t = l_28;
            {
              ATerm o_28 = t;
              int p_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(a_4, e_4, f_4, t);
                  LocalPopChoice(p_28);
                }
              else
                {
                  t = o_28;
                  {
                    ATerm q_28 = t;
                    int r_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(r_28);
                      }
                    else
                      {
                        t = q_28;
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
static ATerm x_3 (ATerm t)
{
  t = input_1_0(g_4, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm l_65 = NULL,m_65 = NULL;
  t = term_q_22;
  l_65 = t;
  t = term_y_23;
  m_65 = t;
  t = term_s_28;
  t = r_11(l_65, m_65, t);
  t = term_u_28;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_v_28;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = output_1_0(h_4, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,l_7 = NULL,k_7 = NULL,j_7 = NULL,i_7 = NULL;
  c_66 = t;
  if(match_cons(t, sym_Specification_1))
    {
      p_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_66);
  o_65 = t;
  t = p_65;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_65 = ATgetFirst((ATermList) t);
      s_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_65);
  q_65 = t;
  t = s_65;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_65 = ATgetFirst((ATermList) t);
      w_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_65);
  u_65 = t;
  t = v_65;
  if(match_cons(t, sym_Strategies_1))
    {
      z_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_65);
  y_65 = t;
  t = z_65;
  t = map_1_0(i_4, t);
  a_66 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, a_66);
  i_7 = t;
  t = SSLsetAnnotations(i_7, y_65);
  b_66 = t;
  t = w_65;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_65), b_66);
  j_7 = t;
  t = SSLsetAnnotations(j_7, u_65);
  x_65 = t;
  t = (ATerm) ATinsert(CheckATermList(x_65), r_65);
  k_7 = t;
  t = SSLsetAnnotations(k_7, q_65);
  t_65 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_65);
  l_7 = t;
  t = SSLsetAnnotations(l_7, o_65);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL;
  t_66 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      p_66 = ATgetArgument(t, 0);
      q_66 = ATgetArgument(t, 1);
      r_66 = ATgetArgument(t, 2);
      s_66 = ATgetArgument(t, 3);
      {
        ATerm w_28 = t;
        int x_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_6 = NULL,n_6 = NULL,h_7 = NULL;
            t = SSLgetAnnotations(t_66);
            i_6 = t;
            t = s_66;
            t = simplify_0_0(t);
            n_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, p_66, q_66, r_66, n_6);
            h_7 = t;
            t = SSLsetAnnotations(h_7, i_6);
            LocalPopChoice(x_28);
          }
        else
          {
            t = w_28;
            t = t_66;
          }
      }
    }
  else
    {
      t = t_66;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(u_3, default_system_usage_0_0, default_system_about_0_0, _id, x_3, t);
  return(t);
}

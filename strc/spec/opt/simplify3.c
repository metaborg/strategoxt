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
ATerm term_c_29;
ATerm term_b_29;
ATerm term_z_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_q_27;
ATerm term_l_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_z_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_x_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_y_22;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_m_22;
ATerm term_j_22;
ATerm term_o_21;
ATerm term_e_6;
ATerm term_t_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_r_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_w_22);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_v_23);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_y_23);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym__2, term_n_24, term_o_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym__2, term_z_24, term_a_25);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_25);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_f_25, term_f_24);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_z_24);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym__2, term_z_26, term_f_24);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym__2, term_d_27, term_f_24);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym__2, term_q_27, term_f_24);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym__3, term_n_24, term_o_24, (ATerm) ATempty);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_q_27);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_z_26);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym__2, term_w_22, term_f_24);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm alltd_1_0 (ATerm g_131 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm p_129 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm s_130 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm t_151 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm h_2 (ATerm o_1, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm o_129 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm f_134 (ATerm), ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm i_134 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm simplify_0_0 (ATerm t);
ATerm map_1_0 (ATerm c_151 (ATerm), ATerm t);
static ATerm c_11 (ATerm g_47, ATerm h_47, ATerm t);
static ATerm d_11 (ATerm p_52, ATerm q_52, ATerm t);
static ATerm f_11 (ATerm c_144 (ATerm), ATerm r_475, ATerm v_52, ATerm t);
static ATerm e_11 (ATerm l_52, ATerm m_52, ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm output_1_0 (ATerm q_160 (ATerm), ATerm t);
static ATerm u_51 (ATerm o_51, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_11 (ATerm r_52, ATerm t);
static ATerm h_11 (ATerm m_45, ATerm n_45, ATerm t);
static ATerm i_11 (ATerm i_47, ATerm k_47, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm p_53 (ATerm e_52, ATerm t);
static ATerm q_53 (ATerm i_52, ATerm j_52, ATerm k_52, ATerm t);
static ATerm r_53 (ATerm c_53, ATerm d_53, ATerm e_53, ATerm t);
static ATerm j_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm r_160 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm default_system_usage_2_0 (ATerm p_162 (ATerm), ATerm q_162 (ATerm), ATerm t);
static ATerm y_1 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm s_11 (ATerm f_51, ATerm g_51, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_11 (ATerm q_56, ATerm r_56, ATerm p_56, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_11 (ATerm y_53, ATerm z_53, ATerm t);
ATerm foldr_2_0 (ATerm k_153 (ATerm), ATerm l_153 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_141 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm t_11 (ATerm b_61, ATerm c_61, ATerm d_61, ATerm t);
ATerm lookup_table_0_1 (ATerm c_58, ATerm t);
ATerm new_hashtable_0_2 (ATerm j_61, ATerm k_61, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm m_11 (ATerm g_61, ATerm h_61, ATerm t);
static ATerm n_11 (ATerm l_61, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm m_151 (ATerm), ATerm t);
static ATerm u_11 (ATerm e_61, ATerm f_61, ATerm t);
static ATerm p_11 (ATerm j_58, ATerm k_58, ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm o_113 (ATerm), ATerm p_113 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_162 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm parse_options_3_0 (ATerm h_162 (ATerm), ATerm i_162 (ATerm), ATerm j_162 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm k_160 (ATerm), ATerm l_160 (ATerm), ATerm m_160 (ATerm), ATerm n_160 (ATerm), ATerm o_160 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm alltd_1_0 (ATerm g_131 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    ATerm p_0 = t;
    int l_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_131(t);
        LocalPopChoice(l_4);
      }
    else
      {
        t = p_0;
        t = SRTS_all(a_0, t);
      }
    return(t);
  }
  t = a_0(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm p_129 (ATerm), ATerm t)
{
  static ATerm c_0 (ATerm t);
  static ATerm c_0 (ATerm t)
  {
    t = bottomup_1_0(p_129, t);
    return(t);
  }
  t = SRTS_all(c_0, t);
  t = p_129(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm s_130 (ATerm), ATerm t)
{
  static ATerm r_2 (ATerm t);
  static ATerm r_2 (ATerm t)
  {
    ATerm m_4 = t;
    int n_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_130(t);
        LocalPopChoice(n_4);
      }
    else
      {
        t = m_4;
        t = SRTS_one(r_2, t);
      }
    return(t);
  }
  t = r_2(t);
  return(t);
}
ATerm at_end_1_0 (ATerm t_151 (ATerm), ATerm t)
{
  static ATerm f_1 (ATerm t);
  static ATerm f_1 (ATerm t)
  {
    ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL;
    e_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_1 = ATgetFirst((ATermList) t);
        d_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_0 = NULL,i_1 = NULL,t_0 = NULL;
          t = SSLgetAnnotations(e_1);
          s_0 = t;
          t = d_1;
          t = f_1(t);
          i_1 = t;
          t = (ATerm) ATinsert(CheckATermList(i_1), c_1);
          t_0 = t;
          t = SSLsetAnnotations(t_0, s_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_1;
        t = t_151(t);
      }
    return(t);
  }
  t = f_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_0 = NULL,f_0 = NULL,i_0 = NULL;
  e_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_0;
    }
  else
    {
      static ATerm k_0 (ATerm t);
      static ATerm k_0 (ATerm t)
      {
        t = not_null(i_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_0 = ATgetFirst((ATermList) t);
          if(((i_0 != NULL) && (i_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_0;
      t = at_end_1_0(k_0, t);
    }
  return(t);
}
static ATerm h_2 (ATerm o_1, ATerm t)
{
  ATerm r_1 = NULL;
  t = SSL_explode_term(o_1);
  if(match_cons(t, sym__2))
    {
      ATerm o_4 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_4) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_1 = NULL,b_2 = NULL,d_2 = NULL;
  d_2 = t;
  if(match_cons(t, sym__2))
    {
      x_1 = ATgetArgument(t, 0);
      b_2 = ATgetArgument(t, 1);
      {
        ATerm q_4 = t;
        int r_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_0 (ATerm t);
            static ATerm n_0 (ATerm t)
            {
              t = b_2;
              return(t);
            }
            t = x_1;
            t = at_end_1_0(n_0, t);
            LocalPopChoice(r_4);
          }
        else
          {
            t = q_4;
            t = h_2(d_2, t);
          }
      }
    }
  else
    {
      t = h_2(d_2, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm o_129 (ATerm), ATerm t)
{
  static ATerm q_0 (ATerm t);
  static ATerm q_0 (ATerm t)
  {
    t = topdown_1_0(o_129, t);
    return(t);
  }
  t = o_129(t);
  t = SRTS_all(q_0, t);
  return(t);
}
ATerm genzip_4_0 (ATerm f_134 (ATerm), ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm i_134 (ATerm), ATerm t)
{
  static ATerm q_2 (ATerm t);
  static ATerm q_2 (ATerm t)
  {
    ATerm s_4 = t;
    int t_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_134(t);
        LocalPopChoice(t_4);
      }
    else
      {
        t = s_4;
        {
          ATerm i_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,v_0 = NULL;
          t = g_134(t);
          o_2 = t;
          if(match_cons(t, sym__2))
            {
              k_2 = ATgetArgument(t, 0);
              l_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_2);
          i_2 = t;
          t = k_2;
          t = i_134(t);
          m_2 = t;
          t = l_2;
          t = q_2(t);
          n_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_2, n_2);
          v_0 = t;
          t = SSLsetAnnotations(v_0, i_2);
          t = h_134(t);
        }
      }
    return(t);
  }
  t = q_2(t);
  return(t);
}
static ATerm u_0 (ATerm t)
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
static ATerm w_0 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,t_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_4 = ATgetArgument(t, 0);
      if(((ATgetType(x_4) == AT_LIST) && !(ATisEmpty(x_4))))
        {
          o_18 = ATgetFirst((ATermList) x_4);
          p_18 = (ATerm) ATgetNext((ATermList) x_4);
        }
      else
        _fail(t);
      {
        ATerm y_4 = ATgetArgument(t, 1);
        if(((ATgetType(y_4) == AT_LIST) && !(ATisEmpty(y_4))))
          {
            q_18 = ATgetFirst((ATermList) y_4);
            t_18 = (ATerm) ATgetNext((ATermList) y_4);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_18, q_18), (ATerm) ATmakeAppl(sym__2, p_18, t_18));
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL;
  if(match_cons(t, sym__2))
    {
      x_18 = ATgetArgument(t, 0);
      y_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_18), x_18);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL;
  if(match_cons(t, sym__2))
    {
      d_19 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_19), (ATerm) ATmakeAppl(sym_Match_1, e_19));
  return(t);
}
static ATerm g_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_5 = ATgetArgument(t, 0);
      if(((ATgetType(a_5) != AT_LIST) || !(ATisEmpty(a_5))))
        _fail(t);
      {
        ATerm b_5 = ATgetArgument(t, 1);
        if(((ATgetType(b_5) != AT_LIST) || !(ATisEmpty(b_5))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_5 = ATgetArgument(t, 0);
      if(((ATgetType(d_5) == AT_LIST) && !(ATisEmpty(d_5))))
        {
          n_25 = ATgetFirst((ATermList) d_5);
          o_25 = (ATerm) ATgetNext((ATermList) d_5);
        }
      else
        _fail(t);
      {
        ATerm e_5 = ATgetArgument(t, 1);
        if(((ATgetType(e_5) == AT_LIST) && !(ATisEmpty(e_5))))
          {
            p_25 = ATgetFirst((ATermList) e_5);
            q_25 = (ATerm) ATgetNext((ATermList) e_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_25, p_25), (ATerm) ATmakeAppl(sym__2, o_25, q_25));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL;
  if(match_cons(t, sym__2))
    {
      r_25 = ATgetArgument(t, 0);
      s_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_25), r_25);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  if(match_cons(t, sym__2))
    {
      t_25 = ATgetArgument(t, 0);
      u_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_25), (ATerm) ATmakeAppl(sym_Match_1, u_25));
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm f_5 = t;
  int g_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm h_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(g_5);
      {
        ATerm v_37 = NULL,w_37 = NULL;
        v_37 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm i_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        w_37 = t;
        t = SSLgetAnnotations(v_37);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_5 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) j_5) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_5 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(l_5) != AT_LIST) || !(ATisEmpty(l_5))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_37;
      }
    }
  else
    {
      t = f_5;
      {
        ATerm m_5 = t;
        int o_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm p_5 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) p_5) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm q_5 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(o_5);
            _fail(t);
          }
        else
          {
            t = m_5;
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
  static ATerm r_0 (ATerm t);
  static ATerm r_0 (ATerm t)
  {
    ATerm a_11 = NULL,b_11 = NULL,l_11 = NULL,o_11 = NULL,r_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
    k_12 = t;
    if(match_cons(t, sym_Test_1))
      {
        j_12 = ATgetArgument(t, 0);
        t = j_12;
        if(match_cons(t, sym_Id_0))
          {
            ATerm r_5 = t;
            int s_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_t_5;
                t = r_0(t);
                LocalPopChoice(s_5);
              }
            else
              {
                t = r_5;
                {
                  ATerm x_5 = t;
                  int y_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
                      t = k_12;
                      t = new_0_0(t);
                      m_12 = t;
                      t = bottomup_1_0(r_0, t);
                      x_12 = t;
                      t = (ATerm) ATempty;
                      t = r_0(t);
                      y_12 = t;
                      t = (ATerm) ATinsert(CheckATermList(y_12), x_12);
                      t = r_0(t);
                      n_12 = t;
                      t = m_12;
                      t = bottomup_1_0(r_0, t);
                      w_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, w_12);
                      t = r_0(t);
                      v_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, v_12);
                      t = r_0(t);
                      p_12 = t;
                      t = j_12;
                      t = bottomup_1_0(r_0, t);
                      r_12 = t;
                      t = m_12;
                      t = bottomup_1_0(r_0, t);
                      u_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, u_12);
                      t = r_0(t);
                      t_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, t_12);
                      t = r_0(t);
                      s_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, r_12, s_12);
                      t = r_0(t);
                      q_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_12, q_12);
                      t = r_0(t);
                      o_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, n_12, o_12);
                      t = r_0(t);
                      LocalPopChoice(y_5);
                    }
                  else
                    {
                      t = x_5;
                      t = k_12;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm z_5 = t;
                int d_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_e_6;
                    t = r_0(t);
                    LocalPopChoice(d_6);
                  }
                else
                  {
                    t = z_5;
                    {
                      ATerm f_6 = t;
                      int g_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL;
                          t = k_12;
                          t = new_0_0(t);
                          b_13 = t;
                          t = bottomup_1_0(r_0, t);
                          m_13 = t;
                          t = (ATerm) ATempty;
                          t = r_0(t);
                          n_13 = t;
                          t = (ATerm) ATinsert(CheckATermList(n_13), m_13);
                          t = r_0(t);
                          c_13 = t;
                          t = b_13;
                          t = bottomup_1_0(r_0, t);
                          l_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, l_13);
                          t = r_0(t);
                          k_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, k_13);
                          t = r_0(t);
                          e_13 = t;
                          t = j_12;
                          t = bottomup_1_0(r_0, t);
                          g_13 = t;
                          t = b_13;
                          t = bottomup_1_0(r_0, t);
                          j_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, j_13);
                          t = r_0(t);
                          i_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, i_13);
                          t = r_0(t);
                          h_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_13, h_13);
                          t = r_0(t);
                          f_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_13, f_13);
                          t = r_0(t);
                          d_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, c_13, d_13);
                          t = r_0(t);
                          LocalPopChoice(g_6);
                        }
                      else
                        {
                          t = f_6;
                          t = k_12;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    g_12 = ATgetArgument(t, 0);
                    {
                      ATerm h_6 = t;
                      int i_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, g_12);
                          t = r_0(t);
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
                                ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,z_13 = NULL,b_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL;
                                t = k_12;
                                t = new_0_0(t);
                                r_13 = t;
                                t = bottomup_1_0(r_0, t);
                                n_14 = t;
                                t = (ATerm) ATempty;
                                t = r_0(t);
                                o_14 = t;
                                t = (ATerm) ATinsert(CheckATermList(o_14), n_14);
                                t = r_0(t);
                                s_13 = t;
                                t = r_13;
                                t = bottomup_1_0(r_0, t);
                                m_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, m_14);
                                t = r_0(t);
                                f_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, f_14);
                                t = r_0(t);
                                u_13 = t;
                                t = j_12;
                                t = bottomup_1_0(r_0, t);
                                z_13 = t;
                                t = r_13;
                                t = bottomup_1_0(r_0, t);
                                e_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, e_14);
                                t = r_0(t);
                                d_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, d_14);
                                t = r_0(t);
                                b_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, b_14);
                                t = r_0(t);
                                v_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, u_13, v_13);
                                t = r_0(t);
                                t_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, s_13, t_13);
                                t = r_0(t);
                                LocalPopChoice(l_6);
                              }
                            else
                              {
                                t = k_6;
                                t = k_12;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm m_6 = t;
                    int n_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_14 = NULL,y_14 = NULL,c_15 = NULL,d_15 = NULL,f_15 = NULL,k_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
                        t = k_12;
                        t = new_0_0(t);
                        x_14 = t;
                        t = bottomup_1_0(r_0, t);
                        r_15 = t;
                        t = (ATerm) ATempty;
                        t = r_0(t);
                        s_15 = t;
                        t = (ATerm) ATinsert(CheckATermList(s_15), r_15);
                        t = r_0(t);
                        y_14 = t;
                        t = x_14;
                        t = bottomup_1_0(r_0, t);
                        q_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, q_15);
                        t = r_0(t);
                        p_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, p_15);
                        t = r_0(t);
                        d_15 = t;
                        t = j_12;
                        t = bottomup_1_0(r_0, t);
                        k_15 = t;
                        t = x_14;
                        t = bottomup_1_0(r_0, t);
                        o_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, o_15);
                        t = r_0(t);
                        n_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, n_15);
                        t = r_0(t);
                        m_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, k_15, m_15);
                        t = r_0(t);
                        f_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_15, f_15);
                        t = r_0(t);
                        c_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, y_14, c_15);
                        t = r_0(t);
                        LocalPopChoice(n_6);
                      }
                    else
                      {
                        t = m_6;
                        t = k_12;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            j_12 = ATgetArgument(t, 0);
            t = j_12;
            if(match_cons(t, sym_Id_0))
              {
                ATerm p_6 = t;
                int s_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_e_6;
                    t = r_0(t);
                    LocalPopChoice(s_6);
                  }
                else
                  {
                    t = p_6;
                    t = k_12;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm t_6 = t;
                    int u_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_t_5;
                        t = r_0(t);
                        LocalPopChoice(u_6);
                      }
                    else
                      {
                        t = t_6;
                        t = k_12;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        g_12 = ATgetArgument(t, 0);
                        {
                          ATerm v_6 = t;
                          int w_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, g_12);
                              t = r_0(t);
                              LocalPopChoice(w_6);
                            }
                          else
                            {
                              t = v_6;
                              t = k_12;
                            }
                        }
                      }
                    else
                      {
                        t = k_12;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                j_12 = ATgetArgument(t, 0);
                i_12 = ATgetArgument(t, 1);
                t = i_12;
                if(match_cons(t, sym_Id_0))
                  {
                    t = j_12;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = i_12;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = j_12;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                g_12 = ATgetArgument(t, 0);
                                h_12 = ATgetArgument(t, 1);
                                t = j_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    g_12 = ATgetArgument(t, 0);
                                    h_12 = ATgetArgument(t, 1);
                                    t = j_12;
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
                    if(match_cons(t, sym_Seq_2))
                      {
                        e_12 = ATgetArgument(t, 0);
                        f_12 = ATgetArgument(t, 1);
                        t = e_12;
                        if(match_cons(t, sym_Match_1))
                          {
                            d_12 = ATgetArgument(t, 0);
                            t = d_12;
                            if(match_cons(t, sym_Op_2))
                              {
                                b_12 = ATgetArgument(t, 0);
                                w_11 = ATgetArgument(t, 1);
                                t = j_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = i_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm x_6 = t;
                                        int z_6 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_e_6;
                                            t = r_0(t);
                                            LocalPopChoice(z_6);
                                          }
                                        else
                                          {
                                            t = x_6;
                                            t = k_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            g_12 = ATgetArgument(t, 0);
                                            h_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm c_7 = t;
                                              int d_7 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm z_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                  t = r_0(t);
                                                  z_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, z_17);
                                                  t = r_0(t);
                                                  LocalPopChoice(d_7);
                                                }
                                              else
                                                {
                                                  t = c_7;
                                                  t = k_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                t = g_12;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    c_12 = ATgetArgument(t, 0);
                                                    x_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm f_7 = t;
                                                      int h_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, c_12, b_12);
                                                          {
                                                            ATerm j_7 = t;
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
                                                                t = j_7;
                                                              }
                                                          }
                                                          t = term_e_6;
                                                          t = bottomup_1_0(r_0, t);
                                                          LocalPopChoice(h_7);
                                                        }
                                                      else
                                                        {
                                                          t = f_7;
                                                          {
                                                            ATerm p_7 = t;
                                                            int q_7 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm i_18 = NULL;
                                                                t = b_12;
                                                                if((c_12 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, x_11, w_11);
                                                                t = genzip_4_0(u_0, w_0, y_0, b_1, t);
                                                                i_18 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, c_12, x_11)), f_12));
                                                                t = bottomup_1_0(r_0, t);
                                                                LocalPopChoice(q_7);
                                                              }
                                                            else
                                                              {
                                                                t = p_7;
                                                                {
                                                                  ATerm r_7 = t;
                                                                  int s_7 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm l_19 = NULL;
                                                                      t = d_12;
                                                                      if((g_12 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, g_12);
                                                                      t = r_0(t);
                                                                      l_19 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_19, f_12);
                                                                      t = r_0(t);
                                                                      LocalPopChoice(s_7);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = r_7;
                                                                      t = k_12;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm t_7 = t;
                                                    int u_7 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm t_19 = NULL;
                                                        t = d_12;
                                                        if((g_12 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, g_12);
                                                        t = r_0(t);
                                                        t_19 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_19, f_12);
                                                        t = r_0(t);
                                                        LocalPopChoice(u_7);
                                                      }
                                                    else
                                                      {
                                                        t = t_7;
                                                        t = k_12;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    g_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm v_7 = t;
                                                      int w_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_19 = NULL;
                                                          t = d_12;
                                                          if((g_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, g_12);
                                                          t = r_0(t);
                                                          x_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_19, f_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(w_7);
                                                        }
                                                      else
                                                        {
                                                          t = v_7;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm x_7 = t;
                                                          int y_7 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm c_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                              t = r_0(t);
                                                              c_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, c_20);
                                                              t = r_0(t);
                                                              LocalPopChoice(y_7);
                                                            }
                                                          else
                                                            {
                                                              t = x_7;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = j_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = i_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm z_7 = t;
                                        int a_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_e_6;
                                            t = r_0(t);
                                            LocalPopChoice(a_8);
                                          }
                                        else
                                          {
                                            t = z_7;
                                            t = k_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            g_12 = ATgetArgument(t, 0);
                                            h_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm b_8 = t;
                                              int c_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm l_20 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                  t = r_0(t);
                                                  l_20 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, l_20);
                                                  t = r_0(t);
                                                  LocalPopChoice(c_8);
                                                }
                                              else
                                                {
                                                  t = b_8;
                                                  t = k_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                {
                                                  ATerm d_8 = t;
                                                  int e_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_20 = NULL;
                                                      t = d_12;
                                                      if((g_12 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, g_12);
                                                      t = r_0(t);
                                                      p_20 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_20, f_12);
                                                      t = r_0(t);
                                                      LocalPopChoice(e_8);
                                                    }
                                                  else
                                                    {
                                                      t = d_8;
                                                      t = k_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    g_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm f_8 = t;
                                                      int g_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm t_20 = NULL;
                                                          t = d_12;
                                                          if((g_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, g_12);
                                                          t = r_0(t);
                                                          t_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_20, f_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(g_8);
                                                        }
                                                      else
                                                        {
                                                          t = f_8;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_8 = t;
                                                          int i_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_21 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                              t = r_0(t);
                                                              a_21 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, a_21);
                                                              t = r_0(t);
                                                              LocalPopChoice(i_8);
                                                            }
                                                          else
                                                            {
                                                              t = h_8;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_12;
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
                                    b_12 = ATgetArgument(t, 0);
                                    t = j_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm j_8 = t;
                                            int k_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_6;
                                                t = r_0(t);
                                                LocalPopChoice(k_8);
                                              }
                                            else
                                              {
                                                t = j_8;
                                                t = k_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                h_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm l_8 = t;
                                                  int m_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                      t = r_0(t);
                                                      p_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, p_21);
                                                      t = r_0(t);
                                                      LocalPopChoice(m_8);
                                                    }
                                                  else
                                                    {
                                                      t = l_8;
                                                      t = k_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm n_8 = t;
                                                int o_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm p_8 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(o_8);
                                                    {
                                                      ATerm q_8 = t;
                                                      int r_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm v_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_12);
                                                          t = r_0(t);
                                                          v_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_21, f_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(r_8);
                                                        }
                                                      else
                                                        {
                                                          t = q_8;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = n_8;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        t = g_12;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            c_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm s_8 = t;
                                                              int t_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm f_22 = NULL,g_22 = NULL;
                                                                  t = b_12;
                                                                  if((c_12 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, c_12);
                                                                  t = r_0(t);
                                                                  g_22 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, g_22);
                                                                  t = r_0(t);
                                                                  f_22 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_22, f_12);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(t_8);
                                                                }
                                                              else
                                                                {
                                                                  t = s_8;
                                                                  t = k_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = k_12;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            g_12 = ATgetArgument(t, 0);
                                                            h_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm u_8 = t;
                                                              int v_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm o_22 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                                  t = r_0(t);
                                                                  o_22 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, o_22);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(v_8);
                                                                }
                                                              else
                                                                {
                                                                  t = u_8;
                                                                  t = k_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = k_12;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = j_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm w_8 = t;
                                            int x_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_6;
                                                t = r_0(t);
                                                LocalPopChoice(x_8);
                                              }
                                            else
                                              {
                                                t = w_8;
                                                t = k_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                h_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm y_8 = t;
                                                  int z_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                      t = r_0(t);
                                                      x_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, x_22);
                                                      t = r_0(t);
                                                      LocalPopChoice(z_8);
                                                    }
                                                  else
                                                    {
                                                      t = y_8;
                                                      t = k_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm a_9 = t;
                                                int b_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm c_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(b_9);
                                                    {
                                                      ATerm d_9 = t;
                                                      int e_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_12);
                                                          t = r_0(t);
                                                          b_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_23, f_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(e_9);
                                                        }
                                                      else
                                                        {
                                                          t = d_9;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = a_9;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_9 = t;
                                                          int g_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                              t = r_0(t);
                                                              g_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, g_23);
                                                              t = r_0(t);
                                                              LocalPopChoice(g_9);
                                                            }
                                                          else
                                                            {
                                                              t = f_9;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_12;
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
                                    y_11 = ATgetArgument(t, 1);
                                    z_11 = ATgetArgument(t, 2);
                                    t = j_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm h_9 = t;
                                            int i_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_6;
                                                t = r_0(t);
                                                LocalPopChoice(i_9);
                                              }
                                            else
                                              {
                                                t = h_9;
                                                t = k_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                h_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm j_9 = t;
                                                  int k_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                      t = r_0(t);
                                                      s_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, s_23);
                                                      t = r_0(t);
                                                      LocalPopChoice(k_9);
                                                    }
                                                  else
                                                    {
                                                      t = j_9;
                                                      t = k_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm l_9 = t;
                                                int m_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm n_9 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(m_9);
                                                    {
                                                      ATerm o_9 = t;
                                                      int p_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm a_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, d_12, y_11, z_11);
                                                          t = r_0(t);
                                                          a_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_24, f_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(p_9);
                                                        }
                                                      else
                                                        {
                                                          t = o_9;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = l_9;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_9 = t;
                                                          int r_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_24 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                              t = r_0(t);
                                                              h_24 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, h_24);
                                                              t = r_0(t);
                                                              LocalPopChoice(r_9);
                                                            }
                                                          else
                                                            {
                                                              t = q_9;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = j_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm s_9 = t;
                                            int t_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_6;
                                                t = r_0(t);
                                                LocalPopChoice(t_9);
                                              }
                                            else
                                              {
                                                t = s_9;
                                                t = k_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                h_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm u_9 = t;
                                                  int v_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_24 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                      t = r_0(t);
                                                      r_24 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, r_24);
                                                      t = r_0(t);
                                                      LocalPopChoice(v_9);
                                                    }
                                                  else
                                                    {
                                                      t = u_9;
                                                      t = k_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    g_12 = ATgetArgument(t, 0);
                                                    h_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm w_9 = t;
                                                      int x_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm y_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                          t = r_0(t);
                                                          y_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, y_24);
                                                          t = r_0(t);
                                                          LocalPopChoice(x_9);
                                                        }
                                                      else
                                                        {
                                                          t = w_9;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = k_12;
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
                            e_12 = ATgetArgument(t, 0);
                            t = e_12;
                            if(match_cons(t, sym_Op_2))
                              {
                                d_12 = ATgetArgument(t, 0);
                                y_11 = ATgetArgument(t, 1);
                                t = j_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = i_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm y_9 = t;
                                        int z_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_e_6;
                                            t = r_0(t);
                                            LocalPopChoice(z_9);
                                          }
                                        else
                                          {
                                            t = y_9;
                                            t = k_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            g_12 = ATgetArgument(t, 0);
                                            h_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm a_10 = t;
                                              int b_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm h_25 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                  t = r_0(t);
                                                  h_25 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_25);
                                                  t = r_0(t);
                                                  LocalPopChoice(b_10);
                                                }
                                              else
                                                {
                                                  t = a_10;
                                                  t = k_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                t = g_12;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    c_12 = ATgetArgument(t, 0);
                                                    x_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm c_10 = t;
                                                      int d_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, c_12, d_12);
                                                          {
                                                            ATerm e_10 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm f_2 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    f_2 = ATgetArgument(t, 0);
                                                                    if((f_2 != ATgetArgument(t, 1)))
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
                                                                t = e_10;
                                                              }
                                                          }
                                                          t = term_e_6;
                                                          t = bottomup_1_0(r_0, t);
                                                          LocalPopChoice(d_10);
                                                        }
                                                      else
                                                        {
                                                          t = c_10;
                                                          {
                                                            ATerm f_10 = t;
                                                            int g_10 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm m_25 = NULL;
                                                                t = d_12;
                                                                if((c_12 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, x_11, y_11);
                                                                t = genzip_4_0(g_1, h_1, j_1, k_1, t);
                                                                m_25 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, c_12, x_11)));
                                                                t = bottomup_1_0(r_0, t);
                                                                LocalPopChoice(g_10);
                                                              }
                                                            else
                                                              {
                                                                t = f_10;
                                                                {
                                                                  ATerm h_10 = t;
                                                                  int i_10 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = e_12;
                                                                      if((g_12 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, g_12);
                                                                      t = r_0(t);
                                                                      LocalPopChoice(i_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = h_10;
                                                                      t = k_12;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm j_10 = t;
                                                    int k_10 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = e_12;
                                                        if((g_12 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, g_12);
                                                        t = r_0(t);
                                                        LocalPopChoice(k_10);
                                                      }
                                                    else
                                                      {
                                                        t = j_10;
                                                        t = k_12;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    g_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm l_10 = t;
                                                      int m_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = e_12;
                                                          if((g_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, g_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(m_10);
                                                        }
                                                      else
                                                        {
                                                          t = l_10;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_10 = t;
                                                          int o_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm k_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                              t = r_0(t);
                                                              k_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, k_26);
                                                              t = r_0(t);
                                                              LocalPopChoice(o_10);
                                                            }
                                                          else
                                                            {
                                                              t = n_10;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = j_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = i_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm p_10 = t;
                                        int q_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_e_6;
                                            t = r_0(t);
                                            LocalPopChoice(q_10);
                                          }
                                        else
                                          {
                                            t = p_10;
                                            t = k_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            g_12 = ATgetArgument(t, 0);
                                            h_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm r_10 = t;
                                              int s_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm a_27 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                  t = r_0(t);
                                                  a_27 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, a_27);
                                                  t = r_0(t);
                                                  LocalPopChoice(s_10);
                                                }
                                              else
                                                {
                                                  t = r_10;
                                                  t = k_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                {
                                                  ATerm t_10 = t;
                                                  int u_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = e_12;
                                                      if((g_12 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, g_12);
                                                      t = r_0(t);
                                                      LocalPopChoice(u_10);
                                                    }
                                                  else
                                                    {
                                                      t = t_10;
                                                      t = k_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    g_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm v_10 = t;
                                                      int w_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = e_12;
                                                          if((g_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, g_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(w_10);
                                                        }
                                                      else
                                                        {
                                                          t = v_10;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm x_10 = t;
                                                          int y_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                              t = r_0(t);
                                                              r_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, r_27);
                                                              t = r_0(t);
                                                              LocalPopChoice(y_10);
                                                            }
                                                          else
                                                            {
                                                              t = x_10;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_12;
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
                                e_12 = ATgetArgument(t, 0);
                                t = e_12;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    d_12 = ATgetArgument(t, 0);
                                    t = j_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm z_10 = t;
                                            int l_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_6;
                                                t = r_0(t);
                                                LocalPopChoice(l_12);
                                              }
                                            else
                                              {
                                                t = z_10;
                                                t = k_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                h_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm z_12 = t;
                                                  int a_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm k_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                      t = r_0(t);
                                                      k_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, k_28);
                                                      t = r_0(t);
                                                      LocalPopChoice(a_13);
                                                    }
                                                  else
                                                    {
                                                      t = z_12;
                                                      t = k_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm o_13 = t;
                                                int p_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm q_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(p_13);
                                                    {
                                                      ATerm w_13 = t;
                                                      int x_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, e_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(x_13);
                                                        }
                                                      else
                                                        {
                                                          t = w_13;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = o_13;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        t = g_12;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            c_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm y_13 = t;
                                                              int a_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm s_28 = NULL;
                                                                  t = d_12;
                                                                  if((c_12 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, c_12);
                                                                  t = r_0(t);
                                                                  s_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, s_28);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(a_14);
                                                                }
                                                              else
                                                                {
                                                                  t = y_13;
                                                                  t = k_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = k_12;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            g_12 = ATgetArgument(t, 0);
                                                            h_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm c_14 = t;
                                                              int g_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm a_29 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                                  t = r_0(t);
                                                                  a_29 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, a_29);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(g_14);
                                                                }
                                                              else
                                                                {
                                                                  t = c_14;
                                                                  t = k_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = k_12;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = j_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm h_14 = t;
                                            int i_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_6;
                                                t = r_0(t);
                                                LocalPopChoice(i_14);
                                              }
                                            else
                                              {
                                                t = h_14;
                                                t = k_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                h_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm j_14 = t;
                                                  int k_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                      t = r_0(t);
                                                      r_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, r_29);
                                                      t = r_0(t);
                                                      LocalPopChoice(k_14);
                                                    }
                                                  else
                                                    {
                                                      t = j_14;
                                                      t = k_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm l_14 = t;
                                                int p_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm q_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(p_14);
                                                    {
                                                      ATerm r_14 = t;
                                                      int s_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, e_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(s_14);
                                                        }
                                                      else
                                                        {
                                                          t = r_14;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = l_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_14 = t;
                                                          int u_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                              t = r_0(t);
                                                              a_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, a_30);
                                                              t = r_0(t);
                                                              LocalPopChoice(u_14);
                                                            }
                                                          else
                                                            {
                                                              t = t_14;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_12;
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
                                    e_12 = ATgetArgument(t, 0);
                                    f_12 = ATgetArgument(t, 1);
                                    a_12 = ATgetArgument(t, 2);
                                    t = j_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = i_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm v_14 = t;
                                            int w_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_6;
                                                t = r_0(t);
                                                LocalPopChoice(w_14);
                                              }
                                            else
                                              {
                                                t = v_14;
                                                t = k_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                h_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm z_14 = t;
                                                  int a_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_30 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                      t = r_0(t);
                                                      p_30 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, p_30);
                                                      t = r_0(t);
                                                      LocalPopChoice(a_15);
                                                    }
                                                  else
                                                    {
                                                      t = z_14;
                                                      t = k_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm b_15 = t;
                                                int e_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm g_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(e_15);
                                                    {
                                                      ATerm h_15 = t;
                                                      int i_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, e_12, f_12, a_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(i_15);
                                                        }
                                                      else
                                                        {
                                                          t = h_15;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = b_15;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_15 = t;
                                                          int l_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                              t = r_0(t);
                                                              y_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, y_30);
                                                              t = r_0(t);
                                                              LocalPopChoice(l_15);
                                                            }
                                                          else
                                                            {
                                                              t = j_15;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = k_12;
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
                                        e_12 = ATgetArgument(t, 0);
                                        f_12 = ATgetArgument(t, 1);
                                        t = j_12;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = i_12;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm t_15 = t;
                                                int u_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_e_6;
                                                    t = r_0(t);
                                                    LocalPopChoice(u_15);
                                                  }
                                                else
                                                  {
                                                    t = t_15;
                                                    {
                                                      ATerm v_15 = t;
                                                      int w_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm m_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_12, f_12);
                                                          t = r_0(t);
                                                          m_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, e_12, m_31);
                                                          t = r_0(t);
                                                          LocalPopChoice(w_15);
                                                        }
                                                      else
                                                        {
                                                          t = v_15;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    g_12 = ATgetArgument(t, 0);
                                                    h_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm x_15 = t;
                                                      int y_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm r_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                          t = r_0(t);
                                                          r_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, r_31);
                                                          t = r_0(t);
                                                          LocalPopChoice(y_15);
                                                        }
                                                      else
                                                        {
                                                          t = x_15;
                                                          {
                                                            ATerm z_15 = t;
                                                            int a_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm v_31 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, j_12, f_12);
                                                                t = r_0(t);
                                                                v_31 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, e_12, v_31);
                                                                t = r_0(t);
                                                                LocalPopChoice(a_16);
                                                              }
                                                            else
                                                              {
                                                                t = z_15;
                                                                t = k_12;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_16 = t;
                                                          int c_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_12, f_12);
                                                              t = r_0(t);
                                                              a_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, e_12, a_32);
                                                              t = r_0(t);
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
                                                                    ATerm e_32 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                                    t = r_0(t);
                                                                    e_32 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, e_32);
                                                                    t = r_0(t);
                                                                    LocalPopChoice(e_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = d_16;
                                                                    t = k_12;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm f_16 = t;
                                                        int g_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm r_32 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, j_12, f_12);
                                                            t = r_0(t);
                                                            r_32 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, e_12, r_32);
                                                            t = r_0(t);
                                                            LocalPopChoice(g_16);
                                                          }
                                                        else
                                                          {
                                                            t = f_16;
                                                            t = k_12;
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
                                            e_12 = ATgetArgument(t, 0);
                                            f_12 = ATgetArgument(t, 1);
                                            t = j_12;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = i_12;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm h_16 = t;
                                                    int i_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_e_6;
                                                        t = r_0(t);
                                                        LocalPopChoice(i_16);
                                                      }
                                                    else
                                                      {
                                                        t = h_16;
                                                        {
                                                          ATerm j_16 = t;
                                                          int k_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_12, f_12);
                                                              t = r_0(t);
                                                              h_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, h_33);
                                                              t = r_0(t);
                                                              LocalPopChoice(k_16);
                                                            }
                                                          else
                                                            {
                                                              t = j_16;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm l_16 = t;
                                                          int m_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                              t = r_0(t);
                                                              o_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, o_33);
                                                              t = r_0(t);
                                                              LocalPopChoice(m_16);
                                                            }
                                                          else
                                                            {
                                                              t = l_16;
                                                              {
                                                                ATerm n_16 = t;
                                                                int o_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm t_33 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, j_12, f_12);
                                                                    t = r_0(t);
                                                                    t_33 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, t_33);
                                                                    t = r_0(t);
                                                                    LocalPopChoice(o_16);
                                                                  }
                                                                else
                                                                  {
                                                                    t = n_16;
                                                                    t = k_12;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            g_12 = ATgetArgument(t, 0);
                                                            h_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm p_16 = t;
                                                              int q_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm a_34 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_12, f_12);
                                                                  t = r_0(t);
                                                                  a_34 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, a_34);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(q_16);
                                                                }
                                                              else
                                                                {
                                                                  t = p_16;
                                                                  {
                                                                    ATerm r_16 = t;
                                                                    int s_16 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm e_34 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                                        t = r_0(t);
                                                                        e_34 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, e_34);
                                                                        t = r_0(t);
                                                                        LocalPopChoice(s_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_16;
                                                                        t = k_12;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm t_16 = t;
                                                            int u_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm j_34 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, j_12, f_12);
                                                                t = r_0(t);
                                                                j_34 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, j_34);
                                                                t = r_0(t);
                                                                LocalPopChoice(u_16);
                                                              }
                                                            else
                                                              {
                                                                t = t_16;
                                                                t = k_12;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = j_12;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = i_12;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm v_16 = t;
                                                    int w_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_e_6;
                                                        t = r_0(t);
                                                        LocalPopChoice(w_16);
                                                      }
                                                    else
                                                      {
                                                        t = v_16;
                                                        t = k_12;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        g_12 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm x_16 = t;
                                                          int y_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                              t = r_0(t);
                                                              x_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, x_34);
                                                              t = r_0(t);
                                                              LocalPopChoice(y_16);
                                                            }
                                                          else
                                                            {
                                                              t = x_16;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            g_12 = ATgetArgument(t, 0);
                                                            h_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm z_16 = t;
                                                              int a_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm f_35 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, i_12);
                                                                  t = r_0(t);
                                                                  f_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, g_12, f_35);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(a_17);
                                                                }
                                                              else
                                                                {
                                                                  t = z_16;
                                                                  t = k_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = k_12;
                                                          }
                                                      }
                                                  }
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
                    j_12 = ATgetArgument(t, 0);
                    i_12 = ATgetArgument(t, 1);
                    t = i_12;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = j_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm b_17 = t;
                            int c_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_t_5;
                                t = r_0(t);
                                LocalPopChoice(c_17);
                              }
                            else
                              {
                                t = b_17;
                                t = j_12;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = i_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    g_12 = ATgetArgument(t, 0);
                                    h_12 = ATgetArgument(t, 1);
                                    t = j_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        g_12 = ATgetArgument(t, 0);
                                        t = j_12;
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
                        t = j_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm d_17 = t;
                            int e_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_t_5;
                                t = r_0(t);
                                LocalPopChoice(e_17);
                              }
                            else
                              {
                                t = d_17;
                                {
                                  ATerm f_17 = t;
                                  int g_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = i_12;
                                      if((j_12 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(g_17);
                                    }
                                  else
                                    {
                                      t = f_17;
                                      t = k_12;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = i_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    g_12 = ATgetArgument(t, 0);
                                    h_12 = ATgetArgument(t, 1);
                                    {
                                      ATerm h_17 = t;
                                      int i_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_37 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, h_12, i_12);
                                          t = r_0(t);
                                          q_37 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, g_12, q_37);
                                          t = r_0(t);
                                          LocalPopChoice(i_17);
                                        }
                                      else
                                        {
                                          t = h_17;
                                          {
                                            ATerm j_17 = t;
                                            int k_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = i_12;
                                                if((j_12 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(k_17);
                                              }
                                            else
                                              {
                                                t = j_17;
                                                t = k_12;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        g_12 = ATgetArgument(t, 0);
                                        {
                                          ATerm l_17 = t;
                                          int m_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = i_12;
                                              if((j_12 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(m_17);
                                            }
                                          else
                                            {
                                              t = l_17;
                                              {
                                                ATerm n_17 = t;
                                                int o_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = g_12;
                                                    t = topdown_1_0(l_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, g_12);
                                                    t = bottomup_1_0(r_0, t);
                                                    LocalPopChoice(o_17);
                                                  }
                                                else
                                                  {
                                                    t = n_17;
                                                    t = k_12;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm p_17 = t;
                                        int q_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = i_12;
                                            if((j_12 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(q_17);
                                          }
                                        else
                                          {
                                            t = p_17;
                                            t = k_12;
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
                        j_12 = ATgetArgument(t, 0);
                        i_12 = ATgetArgument(t, 1);
                        t = i_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = j_12;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm r_17 = t;
                                int s_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_t_5;
                                    t = r_0(t);
                                    LocalPopChoice(s_17);
                                  }
                                else
                                  {
                                    t = r_17;
                                    t = i_12;
                                  }
                              }
                            else
                              {
                                ATerm t_17 = t;
                                int u_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_t_5;
                                    t = r_0(t);
                                    LocalPopChoice(u_17);
                                  }
                                else
                                  {
                                    t = t_17;
                                    t = k_12;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = j_12;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm v_17 = t;
                                    int w_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_e_6;
                                        t = r_0(t);
                                        LocalPopChoice(w_17);
                                      }
                                    else
                                      {
                                        t = v_17;
                                        t = i_12;
                                      }
                                  }
                                else
                                  {
                                    ATerm x_17 = t;
                                    int y_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_e_6;
                                        t = r_0(t);
                                        LocalPopChoice(y_17);
                                      }
                                    else
                                      {
                                        t = x_17;
                                        t = k_12;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    e_12 = ATgetArgument(t, 0);
                                    f_12 = ATgetArgument(t, 1);
                                    t = j_12;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = i_12;
                                      }
                                    else
                                      {
                                        ATerm a_18 = t;
                                        int b_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm t_38 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, j_12, e_12);
                                            t = conc_0_0(t);
                                            t_38 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, t_38, f_12);
                                            t = bottomup_1_0(r_0, t);
                                            LocalPopChoice(b_18);
                                          }
                                        else
                                          {
                                            t = a_18;
                                            t = k_12;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = j_12;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = i_12;
                                      }
                                    else
                                      {
                                        t = k_12;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm c_18 = t;
                        int d_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm e_18 = ATgetArgument(t, 0);
                                i_12 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(d_18);
                            t = i_12;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm f_18 = t;
                                int g_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_t_5;
                                    t = r_0(t);
                                    LocalPopChoice(g_18);
                                  }
                                else
                                  {
                                    t = f_18;
                                    t = k_12;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm h_18 = t;
                                    int j_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_e_6;
                                        t = r_0(t);
                                        LocalPopChoice(j_18);
                                      }
                                    else
                                      {
                                        t = h_18;
                                        t = k_12;
                                      }
                                  }
                                else
                                  {
                                    t = k_12;
                                  }
                              }
                          }
                        else
                          {
                            t = c_18;
                            if(match_cons(t, sym_All_1))
                              {
                                j_12 = ATgetArgument(t, 0);
                                t = j_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm k_18 = t;
                                    int l_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_t_5;
                                        t = r_0(t);
                                        LocalPopChoice(l_18);
                                      }
                                    else
                                      {
                                        t = k_18;
                                        t = k_12;
                                      }
                                  }
                                else
                                  {
                                    t = k_12;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    j_12 = ATgetArgument(t, 0);
                                    t = j_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm m_18 = t;
                                        int n_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_t_5;
                                            t = r_0(t);
                                            LocalPopChoice(n_18);
                                          }
                                        else
                                          {
                                            t = m_18;
                                            {
                                              ATerm r_18 = t;
                                              int s_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL;
                                                  t = k_12;
                                                  t = new_0_0(t);
                                                  e_39 = t;
                                                  t = bottomup_1_0(r_0, t);
                                                  p_39 = t;
                                                  t = (ATerm) ATempty;
                                                  t = r_0(t);
                                                  q_39 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(q_39), p_39);
                                                  t = r_0(t);
                                                  f_39 = t;
                                                  t = e_39;
                                                  t = bottomup_1_0(r_0, t);
                                                  o_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, o_39);
                                                  t = r_0(t);
                                                  n_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, n_39);
                                                  t = r_0(t);
                                                  h_39 = t;
                                                  t = j_12;
                                                  t = bottomup_1_0(r_0, t);
                                                  j_39 = t;
                                                  t = e_39;
                                                  t = bottomup_1_0(r_0, t);
                                                  m_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, m_39);
                                                  t = r_0(t);
                                                  l_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, l_39);
                                                  t = r_0(t);
                                                  k_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_39, k_39);
                                                  t = r_0(t);
                                                  i_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_39, i_39);
                                                  t = r_0(t);
                                                  g_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_39, g_39);
                                                  t = r_0(t);
                                                  LocalPopChoice(s_18);
                                                }
                                              else
                                                {
                                                  t = r_18;
                                                  t = k_12;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm u_18 = t;
                                            int v_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_6;
                                                t = r_0(t);
                                                LocalPopChoice(v_18);
                                              }
                                            else
                                              {
                                                t = u_18;
                                                {
                                                  ATerm w_18 = t;
                                                  int z_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL;
                                                      t = k_12;
                                                      t = new_0_0(t);
                                                      t_39 = t;
                                                      t = bottomup_1_0(r_0, t);
                                                      i_40 = t;
                                                      t = (ATerm) ATempty;
                                                      t = r_0(t);
                                                      j_40 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(j_40), i_40);
                                                      t = r_0(t);
                                                      w_39 = t;
                                                      t = t_39;
                                                      t = bottomup_1_0(r_0, t);
                                                      h_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, h_40);
                                                      t = r_0(t);
                                                      g_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, g_40);
                                                      t = r_0(t);
                                                      y_39 = t;
                                                      t = j_12;
                                                      t = bottomup_1_0(r_0, t);
                                                      c_40 = t;
                                                      t = t_39;
                                                      t = bottomup_1_0(r_0, t);
                                                      f_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, f_40);
                                                      t = r_0(t);
                                                      e_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, e_40);
                                                      t = r_0(t);
                                                      d_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_40, d_40);
                                                      t = r_0(t);
                                                      z_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_39, z_39);
                                                      t = r_0(t);
                                                      x_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, w_39, x_39);
                                                      t = r_0(t);
                                                      LocalPopChoice(z_18);
                                                    }
                                                  else
                                                    {
                                                      t = w_18;
                                                      t = k_12;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                g_12 = ATgetArgument(t, 0);
                                                h_12 = ATgetArgument(t, 1);
                                                t = h_12;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    b_11 = ATgetArgument(t, 0);
                                                    o_11 = ATgetArgument(t, 1);
                                                    t = b_11;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        l_11 = ATgetArgument(t, 0);
                                                        t = g_12;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            c_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm a_19 = t;
                                                              int b_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, l_11);
                                                                  t = r_0(t);
                                                                  q_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_40, o_11);
                                                                  t = r_0(t);
                                                                  p_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, p_40);
                                                                  t = r_0(t);
                                                                  o_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, o_40);
                                                                  t = r_0(t);
                                                                  LocalPopChoice(b_19);
                                                                }
                                                              else
                                                                {
                                                                  t = a_19;
                                                                  {
                                                                    ATerm c_19 = t;
                                                                    int f_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm t_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,h_41 = NULL;
                                                                        t = k_12;
                                                                        t = new_0_0(t);
                                                                        t_40 = t;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        f_41 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = r_0(t);
                                                                        h_41 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(h_41), f_41);
                                                                        t = r_0(t);
                                                                        v_40 = t;
                                                                        t = t_40;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        e_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, e_41);
                                                                        t = r_0(t);
                                                                        d_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, d_41);
                                                                        t = r_0(t);
                                                                        x_40 = t;
                                                                        t = j_12;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        z_40 = t;
                                                                        t = t_40;
                                                                        t = bottomup_1_0(r_0, t);
                                                                        c_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, c_41);
                                                                        t = r_0(t);
                                                                        b_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, b_41);
                                                                        t = r_0(t);
                                                                        a_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, z_40, a_41);
                                                                        t = r_0(t);
                                                                        y_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_40, y_40);
                                                                        t = r_0(t);
                                                                        w_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, v_40, w_40);
                                                                        t = r_0(t);
                                                                        LocalPopChoice(f_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_19;
                                                                        t = k_12;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm g_19 = t;
                                                            int h_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm l_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,z_41 = NULL;
                                                                t = k_12;
                                                                t = new_0_0(t);
                                                                l_41 = t;
                                                                t = bottomup_1_0(r_0, t);
                                                                x_41 = t;
                                                                t = (ATerm) ATempty;
                                                                t = r_0(t);
                                                                z_41 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(z_41), x_41);
                                                                t = r_0(t);
                                                                n_41 = t;
                                                                t = l_41;
                                                                t = bottomup_1_0(r_0, t);
                                                                w_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, w_41);
                                                                t = r_0(t);
                                                                v_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, v_41);
                                                                t = r_0(t);
                                                                p_41 = t;
                                                                t = j_12;
                                                                t = bottomup_1_0(r_0, t);
                                                                r_41 = t;
                                                                t = l_41;
                                                                t = bottomup_1_0(r_0, t);
                                                                u_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, u_41);
                                                                t = r_0(t);
                                                                t_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, t_41);
                                                                t = r_0(t);
                                                                s_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_41, s_41);
                                                                t = r_0(t);
                                                                q_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_41, q_41);
                                                                t = r_0(t);
                                                                o_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, n_41, o_41);
                                                                t = r_0(t);
                                                                LocalPopChoice(h_19);
                                                              }
                                                            else
                                                              {
                                                                t = g_19;
                                                                t = k_12;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = g_12;
                                                        {
                                                          ATerm i_19 = t;
                                                          int j_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL;
                                                              t = k_12;
                                                              t = new_0_0(t);
                                                              c_42 = t;
                                                              t = bottomup_1_0(r_0, t);
                                                              n_42 = t;
                                                              t = (ATerm) ATempty;
                                                              t = r_0(t);
                                                              o_42 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(o_42), n_42);
                                                              t = r_0(t);
                                                              d_42 = t;
                                                              t = c_42;
                                                              t = bottomup_1_0(r_0, t);
                                                              m_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, m_42);
                                                              t = r_0(t);
                                                              l_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, l_42);
                                                              t = r_0(t);
                                                              f_42 = t;
                                                              t = j_12;
                                                              t = bottomup_1_0(r_0, t);
                                                              h_42 = t;
                                                              t = c_42;
                                                              t = bottomup_1_0(r_0, t);
                                                              k_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, k_42);
                                                              t = r_0(t);
                                                              j_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, j_42);
                                                              t = r_0(t);
                                                              i_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_42, i_42);
                                                              t = r_0(t);
                                                              g_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_42, g_42);
                                                              t = r_0(t);
                                                              e_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, d_42, e_42);
                                                              t = r_0(t);
                                                              LocalPopChoice(j_19);
                                                            }
                                                          else
                                                            {
                                                              t = i_19;
                                                              t = k_12;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = g_12;
                                                    {
                                                      ATerm k_19 = t;
                                                      int m_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL;
                                                          t = k_12;
                                                          t = new_0_0(t);
                                                          r_42 = t;
                                                          t = bottomup_1_0(r_0, t);
                                                          c_43 = t;
                                                          t = (ATerm) ATempty;
                                                          t = r_0(t);
                                                          d_43 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(d_43), c_43);
                                                          t = r_0(t);
                                                          s_42 = t;
                                                          t = r_42;
                                                          t = bottomup_1_0(r_0, t);
                                                          b_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, b_43);
                                                          t = r_0(t);
                                                          a_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, a_43);
                                                          t = r_0(t);
                                                          u_42 = t;
                                                          t = j_12;
                                                          t = bottomup_1_0(r_0, t);
                                                          w_42 = t;
                                                          t = r_42;
                                                          t = bottomup_1_0(r_0, t);
                                                          z_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, z_42);
                                                          t = r_0(t);
                                                          y_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, y_42);
                                                          t = r_0(t);
                                                          x_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_42, x_42);
                                                          t = r_0(t);
                                                          v_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_42, v_42);
                                                          t = r_0(t);
                                                          t_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, s_42, t_42);
                                                          t = r_0(t);
                                                          LocalPopChoice(m_19);
                                                        }
                                                      else
                                                        {
                                                          t = k_19;
                                                          t = k_12;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    g_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm n_19 = t;
                                                      int o_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, g_12);
                                                          t = r_0(t);
                                                          LocalPopChoice(o_19);
                                                        }
                                                      else
                                                        {
                                                          t = n_19;
                                                          {
                                                            ATerm p_19 = t;
                                                            int q_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL;
                                                                t = k_12;
                                                                t = new_0_0(t);
                                                                h_43 = t;
                                                                t = bottomup_1_0(r_0, t);
                                                                s_43 = t;
                                                                t = (ATerm) ATempty;
                                                                t = r_0(t);
                                                                t_43 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(t_43), s_43);
                                                                t = r_0(t);
                                                                i_43 = t;
                                                                t = h_43;
                                                                t = bottomup_1_0(r_0, t);
                                                                r_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, r_43);
                                                                t = r_0(t);
                                                                q_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, q_43);
                                                                t = r_0(t);
                                                                k_43 = t;
                                                                t = j_12;
                                                                t = bottomup_1_0(r_0, t);
                                                                m_43 = t;
                                                                t = h_43;
                                                                t = bottomup_1_0(r_0, t);
                                                                p_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, p_43);
                                                                t = r_0(t);
                                                                o_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, o_43);
                                                                t = r_0(t);
                                                                n_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, m_43, n_43);
                                                                t = r_0(t);
                                                                l_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, k_43, l_43);
                                                                t = r_0(t);
                                                                j_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, i_43, j_43);
                                                                t = r_0(t);
                                                                LocalPopChoice(q_19);
                                                              }
                                                            else
                                                              {
                                                                t = p_19;
                                                                t = k_12;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm r_19 = t;
                                                    int s_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
                                                        t = k_12;
                                                        t = new_0_0(t);
                                                        w_43 = t;
                                                        t = bottomup_1_0(r_0, t);
                                                        i_44 = t;
                                                        t = (ATerm) ATempty;
                                                        t = r_0(t);
                                                        j_44 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(j_44), i_44);
                                                        t = r_0(t);
                                                        x_43 = t;
                                                        t = w_43;
                                                        t = bottomup_1_0(r_0, t);
                                                        h_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, h_44);
                                                        t = r_0(t);
                                                        f_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, f_44);
                                                        t = r_0(t);
                                                        z_43 = t;
                                                        t = j_12;
                                                        t = bottomup_1_0(r_0, t);
                                                        b_44 = t;
                                                        t = w_43;
                                                        t = bottomup_1_0(r_0, t);
                                                        e_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, e_44);
                                                        t = r_0(t);
                                                        d_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, d_44);
                                                        t = r_0(t);
                                                        c_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, b_44, c_44);
                                                        t = r_0(t);
                                                        a_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, z_43, a_44);
                                                        t = r_0(t);
                                                        y_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, x_43, y_43);
                                                        t = r_0(t);
                                                        LocalPopChoice(s_19);
                                                      }
                                                    else
                                                      {
                                                        t = r_19;
                                                        t = k_12;
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
                                        j_12 = ATgetArgument(t, 0);
                                        t = j_12;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm u_19 = t;
                                            int v_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_t_5;
                                                t = r_0(t);
                                                LocalPopChoice(v_19);
                                              }
                                            else
                                              {
                                                t = u_19;
                                                t = k_12;
                                              }
                                          }
                                        else
                                          {
                                            t = k_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            j_12 = ATgetArgument(t, 0);
                                            t = j_12;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm w_19 = t;
                                                int y_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_e_6;
                                                    t = r_0(t);
                                                    LocalPopChoice(y_19);
                                                  }
                                                else
                                                  {
                                                    t = w_19;
                                                    t = k_12;
                                                  }
                                              }
                                            else
                                              {
                                                t = k_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                j_12 = ATgetArgument(t, 0);
                                                t = j_12;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm z_19 = t;
                                                    int a_20 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_e_6;
                                                        t = r_0(t);
                                                        LocalPopChoice(a_20);
                                                      }
                                                    else
                                                      {
                                                        t = z_19;
                                                        t = k_12;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = k_12;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm b_20 = t;
                                                int d_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm e_20 = ATgetArgument(t, 0);
                                                        i_12 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(d_20);
                                                    t = i_12;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm f_20 = t;
                                                        int g_20 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_e_6;
                                                            t = r_0(t);
                                                            LocalPopChoice(g_20);
                                                          }
                                                        else
                                                          {
                                                            t = f_20;
                                                            t = k_12;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = k_12;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = b_20;
                                                    {
                                                      ATerm h_20 = t;
                                                      int i_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm j_20 = ATgetArgument(t, 0);
                                                              i_12 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(i_20);
                                                          {
                                                            ATerm k_20 = t;
                                                            int m_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = i_12;
                                                                t = fetch_1_0(m_1, t);
                                                                t = term_e_6;
                                                                t = bottomup_1_0(r_0, t);
                                                                LocalPopChoice(m_20);
                                                              }
                                                            else
                                                              {
                                                                t = k_20;
                                                                t = k_12;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = h_20;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              j_12 = ATgetArgument(t, 0);
                                                              i_12 = ATgetArgument(t, 1);
                                                              t = i_12;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = j_12;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = i_12;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          g_12 = ATgetArgument(t, 0);
                                                                          h_12 = ATgetArgument(t, 1);
                                                                          t = j_12;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = j_12;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = j_12;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = i_12;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          g_12 = ATgetArgument(t, 0);
                                                                          h_12 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm n_20 = t;
                                                                            int o_20 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm s_45 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, h_12, i_12);
                                                                                t = r_0(t);
                                                                                s_45 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, g_12, s_45);
                                                                                t = r_0(t);
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
                                                                                      t = i_12;
                                                                                      if((j_12 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(r_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = q_20;
                                                                                      t = k_12;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm s_20 = t;
                                                                          int u_20 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = i_12;
                                                                              if((j_12 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(u_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_20;
                                                                              t = k_12;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  j_12 = ATgetArgument(t, 0);
                                                                  i_12 = ATgetArgument(t, 1);
                                                                  a_11 = ATgetArgument(t, 2);
                                                                  t = a_11;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm v_20 = t;
                                                                      int w_20 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_12, i_12);
                                                                          t = r_0(t);
                                                                          LocalPopChoice(w_20);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = v_20;
                                                                          t = k_12;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = k_12;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      j_12 = ATgetArgument(t, 0);
                                                                      i_12 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm x_20 = t;
                                                                        int y_20 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, j_12, i_12);
                                                                            t = r_0(t);
                                                                            LocalPopChoice(y_20);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = x_20;
                                                                            t = k_12;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          j_12 = ATgetArgument(t, 0);
                                                                          t = j_12;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              g_12 = ATgetFirst((ATermList) t);
                                                                              h_12 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm z_20 = t;
                                                                                int b_21 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm g_46 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, h_12);
                                                                                    t = r_0(t);
                                                                                    g_46 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, g_12, g_46);
                                                                                    t = r_0(t);
                                                                                    LocalPopChoice(b_21);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = z_20;
                                                                                    t = k_12;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm c_21 = t;
                                                                                  int d_21 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_e_6;
                                                                                      t = r_0(t);
                                                                                      LocalPopChoice(d_21);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = c_21;
                                                                                      t = k_12;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = k_12;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              j_12 = ATgetArgument(t, 0);
                                                                              t = j_12;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  g_12 = ATgetFirst((ATermList) t);
                                                                                  h_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm e_21 = t;
                                                                                    int f_21 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm m_46 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, h_12);
                                                                                        t = r_0(t);
                                                                                        m_46 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, g_12, m_46);
                                                                                        t = r_0(t);
                                                                                        LocalPopChoice(f_21);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = e_21;
                                                                                        t = k_12;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm g_21 = t;
                                                                                      int h_21 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_e_6;
                                                                                          t = r_0(t);
                                                                                          LocalPopChoice(h_21);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = g_21;
                                                                                          t = k_12;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = k_12;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  j_12 = ATgetArgument(t, 0);
                                                                                  t = j_12;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      g_12 = ATgetFirst((ATermList) t);
                                                                                      h_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm i_21 = t;
                                                                                        int j_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm s_46 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, h_12);
                                                                                            t = r_0(t);
                                                                                            s_46 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, s_46);
                                                                                            t = r_0(t);
                                                                                            LocalPopChoice(j_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = i_21;
                                                                                            t = k_12;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm k_21 = t;
                                                                                          int l_21 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_t_5;
                                                                                              t = r_0(t);
                                                                                              LocalPopChoice(l_21);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = k_21;
                                                                                              t = k_12;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = k_12;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      j_12 = ATgetArgument(t, 0);
                                                                                      i_12 = ATgetArgument(t, 1);
                                                                                      a_11 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm m_21 = t;
                                                                                        int n_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL;
                                                                                            t = term_o_21;
                                                                                            t = bottomup_1_0(r_0, t);
                                                                                            b_47 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = r_0(t);
                                                                                            e_47 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(e_47), a_11);
                                                                                            t = r_0(t);
                                                                                            d_47 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(d_47), j_12);
                                                                                            t = r_0(t);
                                                                                            c_47 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, b_47, c_47);
                                                                                            t = r_0(t);
                                                                                            a_47 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, i_12, a_47);
                                                                                            t = r_0(t);
                                                                                            LocalPopChoice(n_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = m_21;
                                                                                            t = k_12;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          j_12 = ATgetArgument(t, 0);
                                                                                          i_12 = ATgetArgument(t, 1);
                                                                                          a_11 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm q_21 = t;
                                                                                            int r_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, i_12);
                                                                                                t = r_0(t);
                                                                                                q_47 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, a_11);
                                                                                                t = r_0(t);
                                                                                                t_47 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = r_0(t);
                                                                                                u_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(u_47), t_47);
                                                                                                t = r_0(t);
                                                                                                s_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(s_47), j_12);
                                                                                                t = r_0(t);
                                                                                                r_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(r_47), q_47);
                                                                                                t = r_0(t);
                                                                                                p_47 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, p_47);
                                                                                                t = r_0(t);
                                                                                                LocalPopChoice(r_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = q_21;
                                                                                                t = k_12;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              j_12 = ATgetArgument(t, 0);
                                                                                              i_12 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm s_21 = t;
                                                                                                int t_21 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm y_47 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, i_12);
                                                                                                    t = r_0(t);
                                                                                                    y_47 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, j_12, y_47);
                                                                                                    t = r_0(t);
                                                                                                    LocalPopChoice(t_21);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = s_21;
                                                                                                    t = k_12;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  j_12 = ATgetArgument(t, 0);
                                                                                                  i_12 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm u_21 = t;
                                                                                                    int w_21 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm c_48 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, j_12);
                                                                                                        t = r_0(t);
                                                                                                        c_48 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, c_48, i_12);
                                                                                                        t = r_0(t);
                                                                                                        LocalPopChoice(w_21);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = u_21;
                                                                                                        t = k_12;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      j_12 = ATgetArgument(t, 0);
                                                                                                      i_12 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm x_21 = t;
                                                                                                        int y_21 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm g_48 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, i_12);
                                                                                                            t = r_0(t);
                                                                                                            g_48 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, g_48, j_12);
                                                                                                            t = r_0(t);
                                                                                                            LocalPopChoice(y_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = x_21;
                                                                                                            t = k_12;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          j_12 = ATgetArgument(t, 0);
                                                                                                          i_12 = ATgetArgument(t, 1);
                                                                                                          t = i_12;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              e_12 = ATgetArgument(t, 0);
                                                                                                              f_12 = ATgetArgument(t, 1);
                                                                                                              t = j_12;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = i_12;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm z_21 = t;
                                                                                                                  int a_22 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm s_48 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, j_12, e_12);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      s_48 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, s_48, f_12);
                                                                                                                      t = bottomup_1_0(r_0, t);
                                                                                                                      LocalPopChoice(a_22);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = z_21;
                                                                                                                      t = k_12;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  e_12 = ATgetArgument(t, 0);
                                                                                                                  f_12 = ATgetArgument(t, 1);
                                                                                                                  a_12 = ATgetArgument(t, 2);
                                                                                                                  t = a_12;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = f_12;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = e_12;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              d_12 = ATgetArgument(t, 0);
                                                                                                                              t = j_12;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = i_12;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      g_12 = ATgetFirst((ATermList) t);
                                                                                                                                      h_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = h_12;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = g_12;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              c_12 = ATgetArgument(t, 0);
                                                                                                                                              x_11 = ATgetArgument(t, 1);
                                                                                                                                              r_11 = ATgetArgument(t, 2);
                                                                                                                                              v_11 = ATgetArgument(t, 3);
                                                                                                                                              t = r_11;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = x_11;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm b_22 = t;
                                                                                                                                                      int c_22 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = d_12;
                                                                                                                                                          if((c_12 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = v_11;
                                                                                                                                                          {
                                                                                                                                                            ATerm d_22 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm n_1 (ATerm t);
                                                                                                                                                                static ATerm n_1 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm e_22 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(e_22, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((c_12 != ATgetArgument(e_22, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(e_22, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm h_22 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(h_22) != AT_LIST) || !(ATisEmpty(h_22))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm i_22 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(i_22) != AT_LIST) || !(ATisEmpty(i_22))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  return(t);
                                                                                                                                                                }
                                                                                                                                                                t = oncetd_1_0(n_1, t);
                                                                                                                                                                PopChoice();
                                                                                                                                                                _fail(t);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = d_22;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = v_11;
                                                                                                                                                          t = bottomup_1_0(r_0, t);
                                                                                                                                                          LocalPopChoice(c_22);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = b_22;
                                                                                                                                                          t = k_12;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = k_12;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = k_12;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = k_12;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = k_12;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = k_12;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = j_12;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = i_12;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = k_12;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = j_12;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = i_12;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = k_12;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = j_12;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = i_12;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = k_12;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = j_12;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = i_12;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = k_12;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              j_12 = ATgetArgument(t, 0);
                                                                                                              i_12 = ATgetArgument(t, 1);
                                                                                                              t = j_12;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = i_12;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = k_12;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = k_12;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  }
                                              }
                                          }
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
  t = bottomup_1_0(r_0, t);
  return(t);
}
ATerm map_1_0 (ATerm c_151 (ATerm), ATerm t)
{
  static ATerm l_50 (ATerm t);
  static ATerm l_50 (ATerm t)
  {
    ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL;
    i_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_50;
      }
    else
      {
        ATerm f_3 = NULL,i_3 = NULL,j_3 = NULL,x_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_50 = ATgetFirst((ATermList) t);
            k_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_50);
        f_3 = t;
        t = j_50;
        t = c_151(t);
        i_3 = t;
        t = k_50;
        t = l_50(t);
        j_3 = t;
        t = (ATerm) ATinsert(CheckATermList(j_3), i_3);
        x_0 = t;
        t = SSLsetAnnotations(x_0, f_3);
      }
    return(t);
  }
  t = l_50(t);
  return(t);
}
static ATerm c_11 (ATerm g_47, ATerm h_47, ATerm t)
{
  ATerm n_50 = NULL;
  t = SSL_fputc(g_47, h_47);
  n_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_50);
  return(t);
}
static ATerm d_11 (ATerm p_52, ATerm q_52, ATerm t)
{
  ATerm o_50 = NULL;
  t = SSL_write_term_to_stream_text(p_52, q_52);
  o_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_50);
  return(t);
}
static ATerm f_11 (ATerm c_144 (ATerm), ATerm r_475, ATerm v_52, ATerm t)
{
  ATerm p_50 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_475, term_j_22);
  t = j_11(t);
  p_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_50, v_52);
  t = c_144(t);
  t = fclose_0_0(t);
  t = v_52;
  return(t);
}
static ATerm e_11 (ATerm l_52, ATerm m_52, ATerm t)
{
  ATerm q_50 = NULL;
  t = SSL_write_term_to_stream_baf(l_52, m_52);
  q_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_50);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_22 = ATgetArgument(t, 0);
      if(match_cons(k_22, sym_Stream_1))
        {
          x_50 = ATgetArgument(k_22, 0);
        }
      else
        _fail(t);
      y_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(x_50, y_50, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm z_50 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_22 = ATgetArgument(t, 0);
      if(match_cons(l_22, sym_Stream_1))
        {
          d_51 = ATgetArgument(l_22, 0);
        }
      else
        _fail(t);
      e_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(d_51, e_51, t);
  z_50 = t;
  t = term_m_22;
  b_51 = t;
  t = z_50;
  if(match_cons(t, sym_Stream_1))
    {
      c_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_22, z_50);
  t = c_11(b_51, c_51, t);
  return(t);
}
ATerm output_1_0 (ATerm q_160 (ATerm), ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL;
  t = q_160(t);
  s_50 = t;
  {
    ATerm n_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_50 = NULL,u_50 = NULL;
        t = term_q_22;
        t_50 = t;
        t = term_r_22;
        u_50 = t;
        t = term_s_22;
        t = p_11(t_50, u_50, t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = n_22;
        t = term_t_22;
      }
  }
  r_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_50, s_50);
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_50 = NULL,w_50 = NULL;
        t = term_q_22;
        v_50 = t;
        t = term_w_22;
        w_50 = t;
        t = term_y_22;
        t = p_11(v_50, w_50, t);
        t = (ATerm) ATmakeAppl(sym__2, r_50, s_50);
        LocalPopChoice(v_22);
        if(match_cons(t, sym__2))
          {
            ATerm z_22 = ATgetArgument(t, 0);
            ATerm a_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_11(p_1, r_50, s_50, t);
      }
    else
      {
        t = u_22;
        if(match_cons(t, sym__2))
          {
            ATerm c_23 = ATgetArgument(t, 0);
            ATerm d_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_11(q_1, r_50, s_50, t);
      }
  }
  return(t);
}
static ATerm u_51 (ATerm o_51, ATerm t)
{
  t = SSL_fclose(o_51);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL;
  s_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_51 = ATgetArgument(t, 0);
      {
        ATerm e_23 = t;
        int f_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_51);
            LocalPopChoice(f_23);
          }
        else
          {
            t = e_23;
            t = u_51(s_51, t);
          }
      }
    }
  else
    {
      t = u_51(s_51, t);
    }
  return(t);
}
static ATerm g_11 (ATerm r_52, ATerm t)
{
  t = SSL_read_term_from_stream(r_52);
  return(t);
}
static ATerm h_11 (ATerm m_45, ATerm n_45, ATerm t)
{
  t = SSL_strcat(m_45, n_45);
  return(t);
}
static ATerm i_11 (ATerm i_47, ATerm k_47, ATerm t)
{
  ATerm v_51 = NULL;
  t = SSL_fopen(i_47, k_47);
  v_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_51);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_51 = NULL;
  t = SSL_stdin_stream();
  w_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_51);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_51 = NULL;
  t = SSL_stdout_stream();
  x_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_51);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_51 = NULL;
  t = SSL_stderr_stream();
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_51);
  return(t);
}
static ATerm p_53 (ATerm e_52, ATerm t)
{
  ATerm f_52 = NULL;
  t = SSL_explode_term(e_52);
  if(match_cons(t, sym__2))
    {
      ATerm h_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_23 = ATgetArgument(t, 1);
        if(((ATgetType(i_23) == AT_LIST) && !(ATisEmpty(i_23))))
          {
            f_52 = ATgetFirst((ATermList) i_23);
            {
              ATerm j_23 = (ATerm) ATgetNext((ATermList) i_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_52;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_52;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_52;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_52;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm q_53 (ATerm i_52, ATerm j_52, ATerm k_52, ATerm t)
{
  ATerm o_52 = NULL,s_52 = NULL,w_52 = NULL,a_53 = NULL,z_0 = NULL;
  t = SSLgetAnnotations(k_52);
  w_52 = t;
  t = i_52;
  if(match_cons(t, sym_Path_1))
    {
      a_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_53, j_52);
  z_0 = t;
  t = SSLsetAnnotations(z_0, w_52);
  if(match_cons(t, sym__2))
    {
      o_52 = ATgetArgument(t, 0);
      s_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(o_52, s_52, t);
  return(t);
}
static ATerm r_53 (ATerm c_53, ATerm d_53, ATerm e_53, ATerm t)
{
  ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL,k_53 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(e_53);
  h_53 = t;
  t = SSL_is_string(c_53);
  k_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_53, d_53);
  a_1 = t;
  t = SSLsetAnnotations(a_1, h_53);
  if(match_cons(t, sym__2))
    {
      f_53 = ATgetArgument(t, 0);
      g_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(f_53, g_53, t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL;
  m_53 = t;
  if(match_cons(t, sym__2))
    {
      n_53 = ATgetArgument(t, 0);
      o_53 = ATgetArgument(t, 1);
      {
        ATerm k_23 = t;
        int l_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_53(m_53, t);
            LocalPopChoice(l_23);
          }
        else
          {
            t = k_23;
            {
              ATerm m_23 = t;
              int n_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_53(n_53, o_53, m_53, t);
                  LocalPopChoice(n_23);
                }
              else
                {
                  t = m_23;
                  t = r_53(n_53, o_53, m_53, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_53(m_53, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL,c_54 = NULL;
  c_54 = t;
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_54, term_q_23);
        t = j_11(t);
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        {
          ATerm w_3 = NULL,x_3 = NULL;
          t = term_r_23;
          x_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_r_23, c_54);
          t = h_11(x_3, c_54, t);
          w_3 = t;
          t = SSL_perror(w_3);
          _fail(t);
        }
      }
  }
  u_53 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_11(v_53, t);
  t_53 = t;
  t = u_53;
  t = fclose_0_0(t);
  t = t_53;
  return(t);
}
ATerm input_1_0 (ATerm r_160 (ATerm), ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_54 = NULL,g_54 = NULL;
      t = term_q_22;
      f_54 = t;
      t = term_v_23;
      g_54 = t;
      t = term_w_23;
      t = p_11(f_54, g_54, t);
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      t = term_x_23;
    }
  t = ReadFromFile_0_0(t);
  t = r_160(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL;
  t = term_q_22;
  h_54 = t;
  t = term_y_23;
  i_54 = t;
  t = term_z_23;
  t = p_11(h_54, i_54, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL;
  k_54 = t;
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_54;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_24 = ATgetFirst((ATermList) t);
                ATerm e_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_54;
          }
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        t = (ATerm) ATinsert(ATempty, k_54);
      }
  }
  l_54 = t;
  t = term_t_22;
  m_54 = t;
  t = SSL_printnl(m_54, l_54);
  t = k_54;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_54 = ATgetFirst((ATermList) t);
      s_54 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_54 = NULL,x_54 = NULL;
        static ATerm s_1 (ATerm t);
        static ATerm s_1 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_54)), not_null(x_54));
          return(t);
        }
        t = s_54;
        t = o_0(t);
        if(((w_54 != NULL) && (w_54 != t)))
          _fail(t);
        else
          w_54 = t;
        t = r_54;
        t = m_0(t);
        if(((x_54 != NULL) && (x_54 != t)))
          _fail(t);
        else
          x_54 = t;
        t = s_54;
        t = reverse_acc_2_0(m_0, s_1, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_24;
      t = o_0(t);
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL,c_4 = NULL;
  i_55 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_55);
  g_55 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_55);
  c_4 = t;
  t = SSLsetAnnotations(c_4, g_55);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm m_55 = NULL;
  m_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_55), term_g_24);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm p_162 (ATerm), ATerm q_162 (ATerm), ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL;
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_55 = NULL,f_55 = NULL;
      t = term_q_22;
      d_55 = t;
      t = term_y_23;
      f_55 = t;
      t = term_z_23;
      t = p_11(d_55, f_55, t);
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      t = fetch_1_0(t_1, t);
    }
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_162(t);
        t = echo_0_0(t);
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
      }
  }
  t = term_m_24;
  t = echo_0_0(t);
  t = term_n_24;
  b_55 = t;
  t = term_o_24;
  c_55 = t;
  t = term_p_24;
  t = p_11(b_55, c_55, t);
  t = reverse_acc_2_0(_id, v_1, t);
  t = map_1_0(w_1, t);
  {
    ATerm q_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_55 = NULL;
        t = q_162(t);
        n_55 = t;
        t = (ATerm) ATinsert(CheckATermList(n_55), term_t_24);
        t = echo_0_0(t);
        LocalPopChoice(s_24);
      }
    else
      {
        t = q_24;
      }
  }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL,y_6 = NULL;
  v_55 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_55);
  t_55 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_55);
  y_6 = t;
  t = SSLsetAnnotations(y_6, t_55);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_55 = NULL;
  q_55 = t;
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_55 = NULL,s_55 = NULL;
        t = term_q_22;
        r_55 = t;
        t = term_y_23;
        s_55 = t;
        t = term_z_23;
        t = p_11(r_55, s_55, t);
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        t = fetch_1_0(y_1, t);
      }
  }
  t = q_55;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm x_55 = NULL;
  x_55 = t;
  if(match_string(t, "-k"))
    {
      t = x_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_55;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL;
  y_55 = t;
  t = SSL_string_to_int(y_55);
  z_55 = t;
  t = term_w_24;
  a_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_24, z_55);
  t = s_11(a_56, z_55, t);
  t = y_55;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_x_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_1, a_2, c_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm c_56 = NULL;
  c_56 = t;
  if(match_string(t, "-S"))
    {
      t = c_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_56;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL;
  t = term_z_24;
  d_56 = t;
  t = term_a_25;
  e_56 = t;
  t = term_b_25;
  t = s_11(d_56, e_56, t);
  t = term_c_25;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_d_25;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
  f_56 = t;
  t = SSL_string_to_int(f_56);
  g_56 = t;
  t = term_z_24;
  h_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_24, g_56);
  t = s_11(h_56, g_56, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_56);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_e_25;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL;
  t = term_f_25;
  i_56 = t;
  t = term_f_24;
  j_56 = t;
  t = term_g_25;
  t = s_11(i_56, j_56, t);
  t = term_i_25;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_j_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_2, g_2, j_2, t);
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_2, s_2, t_2, t);
            LocalPopChoice(w_25);
          }
        else
          {
            t = v_25;
            t = Option_3_0(u_2, v_2, w_2, t);
          }
      }
    }
  return(t);
}
static ATerm s_11 (ATerm f_51, ATerm g_51, ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL;
  t = term_q_22;
  k_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_22, f_51, g_51);
  t = lookup_table_0_1(k_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(f_51, g_51, l_56, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_22, f_51, g_51);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL;
      t = term_f_24;
      t = g_0(t);
      u_56 = t;
      t = term_n_24;
      v_56 = t;
      t = term_o_24;
      w_56 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_24, term_o_24, u_56);
      t = q_11(v_56, w_56, u_56, t);
      _fail(t);
    }
  else
    {
      ATerm z_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_56 = ATgetFirst((ATermList) t);
          t_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_56;
      t = b_0(t);
      t = term_f_24;
      t = d_0(t);
      z_56 = t;
      t = (ATerm) ATinsert(CheckATermList(t_56), z_56);
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm b_57 = NULL;
  b_57 = t;
  if(match_string(t, "-o"))
    {
      t = b_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_57;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL;
  c_57 = t;
  t = term_r_22;
  d_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_22, c_57);
  t = s_11(d_57, c_57, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_57);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_x_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_2, y_2, z_2, t);
  return(t);
}
static ATerm q_11 (ATerm q_56, ATerm r_56, ATerm p_56, ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL;
  f_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_56, r_56);
  {
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_26 = ATgetArgument(t, 0);
            ATerm b_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_56, r_56);
        t = p_11(q_56, r_56, t);
        LocalPopChoice(z_25);
      }
    else
      {
        t = y_25;
        t = (ATerm) ATempty;
      }
  }
  g_57 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_56, r_56, (ATerm) ATinsert(CheckATermList(g_57), p_56));
  t = lookup_table_0_1(q_56, t);
  j_57 = t;
  t = (ATerm) ATinsert(CheckATermList(g_57), p_56);
  h_57 = t;
  t = j_57;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(r_56, h_57, i_57, t);
  t = f_57;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL;
      t = term_f_24;
      t = l_0(t);
      u_57 = t;
      t = term_n_24;
      v_57 = t;
      t = term_o_24;
      w_57 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_24, term_o_24, u_57);
      t = q_11(v_57, w_57, u_57, t);
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
      t = h_0(t);
      t = s_57;
      t = j_0(t);
      a_58 = t;
      t = (ATerm) ATinsert(CheckATermList(t_57), a_58);
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm g_58 = NULL;
  g_58 = t;
  if(match_string(t, "-i"))
    {
      t = g_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_58;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL;
  h_58 = t;
  t = term_v_23;
  i_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_23, h_58);
  t = s_11(i_58, h_58, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_58);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, b_3, c_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_24;
  t = whoami_0_0(t);
  l_58 = t;
  t = term_d_26;
  n_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_26), l_58);
  o_58 = t;
  t = SSL_printnl(n_58, o_58);
  t = term_f_26;
  m_58 = t;
  t = SSL_exit(m_58);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL;
  t = term_q_22;
  p_58 = t;
  t = term_y_23;
  q_58 = t;
  t = term_z_23;
  t = p_11(p_58, q_58, t);
  return(t);
}
static ATerm k_11 (ATerm y_53, ATerm z_53, ATerm t)
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_53, z_53);
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
      t = SSL_addr(y_53, z_53);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_153 (ATerm), ATerm l_153 (ATerm), ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL;
  s_58 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_58;
      t = k_153(t);
    }
  else
    {
      ATerm x_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_58 = ATgetFirst((ATermList) t);
          u_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_58;
      t = foldr_2_0(k_153, l_153, t);
      x_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_58, x_58);
      t = l_153(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_a_25;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  if(match_cons(t, sym__2))
    {
      d_4 = ATgetArgument(t, 0);
      e_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(d_4, e_4, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_59 = NULL,z_3 = NULL,a_4 = NULL;
  t = times_0_0(t);
  a_4 = t;
  t = SSL_explode_term(a_4);
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3;
  t = foldr_2_0(d_3, e_3, t);
  a_59 = t;
  t = SSL_TicksToSeconds(a_59);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL;
  l_59 = t;
  if(match_cons(t, sym__2))
    {
      m_59 = ATgetArgument(t, 0);
      n_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_59;
        if((m_59 != t))
          {
            _fail(t);
          }
        t = l_59;
        LocalPopChoice(l_26);
      }
    else
      {
        t = j_26;
        t = (ATerm) ATmakeAppl(sym__2, m_59, n_59);
        {
          ATerm m_26 = t;
          int n_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_59, n_59);
              LocalPopChoice(n_26);
            }
          else
            {
              t = m_26;
              t = SSL_gtr(m_59, n_59);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_59, n_59);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_141 (ATerm), ATerm t)
{
  ATerm r_59 = NULL;
  r_59 = t;
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL;
        t = term_q_22;
        u_59 = t;
        t = term_z_24;
        v_59 = t;
        t = term_q_26;
        t = p_11(u_59, v_59, t);
        t_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_59, term_f_26);
        t = geq_0_0(t);
        t = r_59;
        t = x_141(t);
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = r_59;
      }
  }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL,a_60 = NULL,b_60 = NULL;
  t = run_time_0_0(t);
  x_59 = t;
  t = term_f_24;
  t = whoami_0_0(t);
  y_59 = t;
  t = term_d_26;
  a_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_26), x_59), term_r_26), y_59);
  b_60 = t;
  t = SSL_printnl(a_60, b_60);
  t = (ATerm) ATmakeAppl(sym__2, term_d_26, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_26), x_59), term_r_26), y_59));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_60 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_25;
  c_60 = t;
  t = SSL_exit(c_60);
  return(t);
}
static ATerm t_11 (ATerm b_61, ATerm c_61, ATerm d_61, ATerm t)
{
  ATerm d_60 = NULL;
  t = SSL_hashtable_put(d_61, b_61, c_61);
  d_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_60);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_58, ATerm t)
{
  ATerm m_60 = NULL;
  t = table_hashtable_0_0(t);
  m_60 = t;
  {
    ATerm t_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_4 = NULL;
        t = m_60;
        if(match_cons(t, sym_Hashtable_1))
          {
            p_4 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_11(c_58, p_4, t);
        LocalPopChoice(u_26);
      }
    else
      {
        t = t_26;
        {
          ATerm u_4 = NULL;
          t = c_58;
          t = table_create_0_0(t);
          t = m_60;
          if(match_cons(t, sym_Hashtable_1))
            {
              u_4 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_11(c_58, u_4, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm j_61, ATerm k_61, ATerm t)
{
  ATerm p_60 = NULL;
  t = SSL_hashtable_create(j_61, k_61);
  p_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_60);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,u_60 = NULL,v_60 = NULL;
  q_60 = t;
  t = term_v_26;
  u_60 = t;
  t = term_w_26;
  v_60 = t;
  t = q_60;
  t = new_hashtable_0_2(u_60, v_60, t);
  r_60 = t;
  t = q_60;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(q_60, r_60, s_60, t);
  t = q_60;
  return(t);
}
static ATerm m_11 (ATerm g_61, ATerm h_61, ATerm t)
{
  ATerm w_60 = NULL;
  t = SSL_hashtable_remove(h_61, g_61);
  w_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_60);
  return(t);
}
static ATerm n_11 (ATerm l_61, ATerm t)
{
  ATerm x_60 = NULL;
  t = SSL_hashtable_destroy(l_61);
  x_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_60);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm y_60 = NULL;
  t = SSL_table_hashtable();
  y_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_60);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL,i_61 = NULL,m_61 = NULL;
  z_60 = t;
  t = table_hashtable_0_0(t);
  a_61 = t;
  t = lookup_table_0_1(z_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11(m_61, t);
  t = a_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_11(z_60, i_61, t);
  t = z_60;
  return(t);
}
ATerm fetch_1_0 (ATerm m_151 (ATerm), ATerm t)
{
  static ATerm j_62 (ATerm t);
  static ATerm j_62 (ATerm t)
  {
    ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL;
    g_62 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_62 = ATgetFirst((ATermList) t);
        i_62 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_26 = t;
      int y_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_4 = NULL,c_5 = NULL,a_7 = NULL;
          t = SSLgetAnnotations(g_62);
          z_4 = t;
          t = h_62;
          t = m_151(t);
          c_5 = t;
          t = (ATerm) ATinsert(CheckATermList(i_62), c_5);
          a_7 = t;
          t = SSLsetAnnotations(a_7, z_4);
          LocalPopChoice(y_26);
        }
      else
        {
          t = x_26;
          {
            ATerm k_5 = NULL,n_5 = NULL,b_7 = NULL;
            t = SSLgetAnnotations(g_62);
            k_5 = t;
            t = i_62;
            t = j_62(t);
            n_5 = t;
            t = (ATerm) ATinsert(CheckATermList(n_5), h_62);
            b_7 = t;
            t = SSLsetAnnotations(b_7, k_5);
          }
        }
    }
    return(t);
  }
  t = j_62(t);
  return(t);
}
static ATerm u_11 (ATerm e_61, ATerm f_61, ATerm t)
{
  t = SSL_hashtable_get(f_61, e_61);
  return(t);
}
static ATerm p_11 (ATerm j_58, ATerm k_58, ATerm t)
{
  ATerm m_62 = NULL;
  t = lookup_table_0_1(j_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(k_58, m_62, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm o_62 = NULL,p_62 = NULL;
  t = term_z_26;
  o_62 = t;
  t = term_f_24;
  p_62 = t;
  t = term_b_27;
  t = s_11(o_62, p_62, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_c_27;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL;
  t = term_z_26;
  s_62 = t;
  t = term_f_24;
  t_62 = t;
  t = term_b_27;
  t = s_11(s_62, t_62, t);
  t = term_d_27;
  q_62 = t;
  t = term_f_24;
  r_62 = t;
  t = term_e_27;
  t = s_11(q_62, r_62, t);
  t = term_f_27;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, k_3, l_3, t);
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
      t = Option_3_0(m_3, n_3, o_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_113 (ATerm), ATerm p_113 (ATerm), ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,e_7 = NULL;
  z_62 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_62 = ATgetFirst((ATermList) t);
      w_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_62);
  u_62 = t;
  t = v_62;
  t = o_113(t);
  x_62 = t;
  t = w_62;
  t = p_113(t);
  y_62 = t;
  t = (ATerm) ATinsert(CheckATermList(y_62), x_62);
  e_7 = t;
  t = SSLsetAnnotations(e_7, u_62);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_162 (ATerm), ATerm t)
{
  ATerm e_63 = NULL,f_63 = NULL,g_63 = NULL,h_63 = NULL,j_63 = NULL,k_63 = NULL,g_7 = NULL;
  e_63 = t;
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_27;
        t = k_162(t);
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
      }
  }
  t = e_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_63 = ATgetFirst((ATermList) t);
      h_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_63);
  f_63 = t;
  t = term_y_23;
  k_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_23, g_63);
  t = s_11(k_63, g_63, t);
  t = h_63;
  {
    static ATerm u_63 (ATerm t);
    static ATerm u_63 (ATerm t)
    {
      ATerm m_27 = t;
      int n_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_27 = t;
          int p_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_63 = NULL;
              n_63 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_63;
              LocalPopChoice(p_27);
            }
          else
            {
              t = o_27;
              t = k_162(t);
              t = Cons_2_0(_id, u_63, t);
            }
          LocalPopChoice(n_27);
        }
      else
        {
          t = m_27;
          {
            ATerm q_63 = NULL,r_63 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_63 = ATgetFirst((ATermList) t);
                r_63 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_63), (ATerm) ATmakeAppl(sym_Undefined_1, q_63));
          }
        }
      return(t);
    }
    t = u_63(t);
  }
  j_63 = t;
  t = (ATerm) ATinsert(CheckATermList(j_63), (ATerm) ATmakeAppl(sym_Program_1, g_63));
  g_7 = t;
  t = SSLsetAnnotations(g_7, f_63);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm h_64 = NULL;
  h_64 = t;
  if(match_string(t, "--help"))
    {
      t = h_64;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_64;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_64;
        }
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL;
  t = term_q_27;
  i_64 = t;
  t = term_f_24;
  j_64 = t;
  t = term_s_27;
  t = s_11(i_64, j_64, t);
  t = term_t_27;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_u_27;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm h_162 (ATerm), ATerm i_162 (ATerm), ATerm j_162 (ATerm), ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL;
  b_64 = t;
  t = term_n_24;
  c_64 = t;
  t = term_v_27;
  t = lookup_table_0_1(c_64, t);
  g_64 = t;
  t = term_o_24;
  d_64 = t;
  t = (ATerm) ATempty;
  e_64 = t;
  t = g_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(d_64, e_64, f_64, t);
  t = b_64;
  {
    static ATerm p_3 (ATerm t);
    static ATerm p_3 (ATerm t)
    {
      ATerm w_27 = t;
      int x_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_162(t);
          LocalPopChoice(x_27);
        }
      else
        {
          t = w_27;
          {
            ATerm y_27 = t;
            int z_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_3, r_3, s_3, t);
                LocalPopChoice(z_27);
              }
            else
              {
                t = y_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_3, t);
  }
  {
    ATerm a_28 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_64 = NULL;
        u_64 = t;
        {
          ATerm c_28 = t;
          int d_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_5 = NULL;
              t = u_64;
              {
                ATerm e_28 = t;
                int f_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_5 = NULL,w_5 = NULL;
                    t = term_q_22;
                    v_5 = t;
                    t = term_q_27;
                    w_5 = t;
                    t = term_g_28;
                    t = p_11(v_5, w_5, t);
                    LocalPopChoice(f_28);
                  }
                else
                  {
                    t = e_28;
                    t = fetch_1_0(t_3, t);
                  }
              }
              t = u_64;
              t = i_162(t);
              t = term_a_25;
              u_5 = t;
              t = SSL_exit(u_5);
              LocalPopChoice(d_28);
            }
          else
            {
              t = c_28;
              {
                ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
                t = term_q_22;
                b_6 = t;
                t = term_z_26;
                c_6 = t;
                t = term_h_28;
                t = p_11(b_6, c_6, t);
                t = u_64;
                t = j_162(t);
                t = term_a_25;
                a_6 = t;
                t = SSL_exit(a_6);
              }
            }
        }
        LocalPopChoice(b_28);
      }
    else
      {
        t = a_28;
        {
          ATerm i_28 = t;
          int j_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL;
              static ATerm u_3 (ATerm t);
              static ATerm u_3 (ATerm t)
              {
                ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL,i_7 = NULL;
                a_65 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_64 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_65);
                y_64 = t;
                t = z_64;
                if(((z_63 != NULL) && (z_63 != t)))
                  _fail(t);
                else
                  z_63 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_64);
                i_7 = t;
                t = SSLsetAnnotations(i_7, y_64);
                return(t);
              }
              t = fetch_1_0(u_3, t);
              t = term_d_26;
              w_64 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_63)), term_l_28);
              x_64 = t;
              t = SSL_printnl(w_64, x_64);
              t = (ATerm) ATmakeAppl(sym__2, term_d_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_63)), term_l_28));
              t = i_162(t);
              t = term_f_26;
              v_64 = t;
              t = SSL_exit(v_64);
              LocalPopChoice(j_28);
            }
          else
            {
              t = i_28;
            }
        }
      }
  }
  a_64 = t;
  t = term_n_24;
  t = table_destroy_0_0(t);
  t = a_64;
  return(t);
}
ATerm option_wrap_5_0 (ATerm k_160 (ATerm), ATerm l_160 (ATerm), ATerm m_160 (ATerm), ATerm n_160 (ATerm), ATerm o_160 (ATerm), ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL;
  t = parse_options_3_0(k_160, l_160, m_160, t);
  f_65 = t;
  t = term_m_28;
  t = table_create_0_0(t);
  t = term_m_28;
  g_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_28, term_n_28, f_65);
  t = lookup_table_0_1(g_65, t);
  j_65 = t;
  t = term_n_28;
  h_65 = t;
  t = j_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(h_65, f_65, i_65, t);
  t = f_65;
  t = n_160(t);
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_160(t);
        t = report_success_0_0(t);
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      {
        ATerm t_28 = t;
        int u_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(u_28);
          }
        else
          {
            t = t_28;
            {
              ATerm v_28 = t;
              int w_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(b_4, f_4, g_4, t);
                  LocalPopChoice(w_28);
                }
              else
                {
                  t = v_28;
                  {
                    ATerm x_28 = t;
                    int y_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(y_28);
                      }
                    else
                      {
                        t = x_28;
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
static ATerm y_3 (ATerm t)
{
  t = input_1_0(h_4, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm o_65 = NULL,p_65 = NULL;
  t = term_w_22;
  o_65 = t;
  t = term_f_24;
  p_65 = t;
  t = term_z_28;
  t = s_11(o_65, p_65, t);
  t = term_b_29;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_c_29;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = output_1_0(i_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,o_7 = NULL,n_7 = NULL,m_7 = NULL,l_7 = NULL;
  f_66 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_66);
  r_65 = t;
  t = s_65;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_65 = ATgetFirst((ATermList) t);
      v_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_65);
  t_65 = t;
  t = v_65;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_65 = ATgetFirst((ATermList) t);
      z_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_65);
  x_65 = t;
  t = y_65;
  if(match_cons(t, sym_Strategies_1))
    {
      c_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_65);
  b_66 = t;
  t = c_66;
  t = map_1_0(j_4, t);
  d_66 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, d_66);
  l_7 = t;
  t = SSLsetAnnotations(l_7, b_66);
  e_66 = t;
  t = z_65;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_65), e_66);
  m_7 = t;
  t = SSLsetAnnotations(m_7, x_65);
  a_66 = t;
  t = (ATerm) ATinsert(CheckATermList(a_66), u_65);
  n_7 = t;
  t = SSLsetAnnotations(n_7, t_65);
  w_65 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, w_65);
  o_7 = t;
  t = SSLsetAnnotations(o_7, r_65);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL;
  y_66 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      u_66 = ATgetArgument(t, 0);
      v_66 = ATgetArgument(t, 1);
      w_66 = ATgetArgument(t, 2);
      x_66 = ATgetArgument(t, 3);
      {
        ATerm d_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_6 = NULL,o_6 = NULL,k_7 = NULL;
            t = SSLgetAnnotations(y_66);
            j_6 = t;
            t = x_66;
            t = simplify_0_0(t);
            t = alltd_1_0(k_4, t);
            o_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, u_66, v_66, w_66, o_6);
            k_7 = t;
            t = SSLsetAnnotations(k_7, j_6);
            LocalPopChoice(e_29);
          }
        else
          {
            t = d_29;
            t = y_66;
          }
      }
    }
  else
    {
      t = y_66;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL;
  r_6 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_6);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_29 = ATgetFirst((ATermList) t);
      ATerm g_29 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(g_29) != AT_LIST) || !(ATisEmpty(g_29))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, q_6);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(v_3, default_system_usage_0_0, default_system_about_0_0, _id, y_3, t);
  return(t);
}

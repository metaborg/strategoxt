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
static ATerm term_c_29;
static ATerm term_b_29;
static ATerm term_a_29;
static ATerm term_n_28;
static ATerm term_m_28;
static ATerm term_l_28;
static ATerm term_h_28;
static ATerm term_g_28;
static ATerm term_v_27;
static ATerm term_u_27;
static ATerm term_t_27;
static ATerm term_s_27;
static ATerm term_r_27;
static ATerm term_l_27;
static ATerm term_g_27;
static ATerm term_f_27;
static ATerm term_e_27;
static ATerm term_d_27;
static ATerm term_c_27;
static ATerm term_b_27;
static ATerm term_a_27;
static ATerm term_w_26;
static ATerm term_v_26;
static ATerm term_s_26;
static ATerm term_r_26;
static ATerm term_q_26;
static ATerm term_f_26;
static ATerm term_e_26;
static ATerm term_d_26;
static ATerm term_c_26;
static ATerm term_x_25;
static ATerm term_j_25;
static ATerm term_i_25;
static ATerm term_h_25;
static ATerm term_f_25;
static ATerm term_e_25;
static ATerm term_d_25;
static ATerm term_c_25;
static ATerm term_b_25;
static ATerm term_a_25;
static ATerm term_z_24;
static ATerm term_y_24;
static ATerm term_w_24;
static ATerm term_t_24;
static ATerm term_p_24;
static ATerm term_o_24;
static ATerm term_n_24;
static ATerm term_m_24;
static ATerm term_h_24;
static ATerm term_f_24;
static ATerm term_a_24;
static ATerm term_y_23;
static ATerm term_x_23;
static ATerm term_w_23;
static ATerm term_v_23;
static ATerm term_s_23;
static ATerm term_q_23;
static ATerm term_y_22;
static ATerm term_x_22;
static ATerm term_t_22;
static ATerm term_s_22;
static ATerm term_r_22;
static ATerm term_q_22;
static ATerm term_n_22;
static ATerm term_j_22;
static ATerm term_p_21;
static ATerm term_e_6;
static ATerm term_t_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_r_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_x_22);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_v_23);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_y_23);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
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
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
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
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym__2, term_f_25, term_f_24);
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
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym__2, term_a_27, term_f_24);
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
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym__2, term_r_27, term_f_24);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym__3, term_n_24, term_o_24, (ATerm) ATempty);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_r_27);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_a_27);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym__2, term_x_22, term_f_24);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm alltd_1_0 (ATerm c_138 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm l_136 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm o_137 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm k_159 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm g_2 (ATerm m_1, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm k_136 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm b_141 (ATerm), ATerm c_141 (ATerm), ATerm d_141 (ATerm), ATerm e_141 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm simplify_0_0 (ATerm t);
ATerm map_1_0 (ATerm v_158 (ATerm), ATerm t);
static ATerm c_11 (ATerm x_47, ATerm y_47, ATerm t);
static ATerm d_11 (ATerm g_53, ATerm h_53, ATerm t);
static ATerm f_11 (ATerm c_151 (ATerm), ATerm r_486, ATerm m_53, ATerm t);
static ATerm e_11 (ATerm c_53, ATerm d_53, ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm output_1_0 (ATerm v_168 (ATerm), ATerm t);
static ATerm r_51 (ATerm l_51, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_11 (ATerm i_53, ATerm t);
static ATerm h_11 (ATerm d_46, ATerm e_46, ATerm t);
static ATerm i_11 (ATerm z_47, ATerm a_48, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_53 (ATerm d_52, ATerm t);
static ATerm p_53 (ATerm h_52, ATerm i_52, ATerm k_52, ATerm t);
static ATerm q_53 (ATerm u_52, ATerm v_52, ATerm w_52, ATerm t);
static ATerm j_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm w_168 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm default_system_usage_2_0 (ATerm u_170 (ATerm), ATerm v_170 (ATerm), ATerm t);
static ATerm z_1 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm s_11 (ATerm w_51, ATerm x_51, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_11 (ATerm h_57, ATerm i_57, ATerm g_57, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_11 (ATerm p_54, ATerm q_54, ATerm t);
ATerm foldr_2_0 (ATerm b_161 (ATerm), ATerm c_161 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_148 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm t_11 (ATerm w_61, ATerm x_61, ATerm y_61, ATerm t);
ATerm lookup_table_0_1 (ATerm t_58, ATerm t);
ATerm new_hashtable_0_2 (ATerm e_62, ATerm f_62, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm m_11 (ATerm b_62, ATerm c_62, ATerm t);
static ATerm n_11 (ATerm g_62, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_159 (ATerm), ATerm t);
static ATerm u_11 (ATerm z_61, ATerm a_62, ATerm t);
static ATerm p_11 (ATerm a_59, ATerm b_59, ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_170 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm parse_options_3_0 (ATerm m_170 (ATerm), ATerm n_170 (ATerm), ATerm o_170 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm p_168 (ATerm), ATerm q_168 (ATerm), ATerm r_168 (ATerm), ATerm s_168 (ATerm), ATerm t_168 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm d_4 (ATerm t);
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
ATerm alltd_1_0 (ATerm c_138 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    ATerm m_0 = t;
    int l_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_138(t);
        LocalPopChoice(l_4);
      }
    else
      {
        t = m_0;
        t = SRTS_all(a_0, t);
      }
    return(t);
  }
  t = a_0(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm l_136 (ATerm), ATerm t)
{
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    t = bottomup_1_0(l_136, t);
    return(t);
  }
  t = SRTS_all(b_0, t);
  t = l_136(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm o_137 (ATerm), ATerm t)
{
  static ATerm q_2 (ATerm t);
  static ATerm q_2 (ATerm t)
  {
    ATerm m_4 = t;
    int n_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_137(t);
        LocalPopChoice(n_4);
      }
    else
      {
        t = m_4;
        t = SRTS_one(q_2, t);
      }
    return(t);
  }
  t = q_2(t);
  return(t);
}
ATerm at_end_1_0 (ATerm k_159 (ATerm), ATerm t)
{
  static ATerm e_1 (ATerm t);
  static ATerm e_1 (ATerm t)
  {
    ATerm a_1 = NULL,c_1 = NULL,d_1 = NULL;
    d_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_1 = ATgetFirst((ATermList) t);
        c_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm g_1 = NULL,j_1 = NULL,n_0 = NULL;
          t = SSLgetAnnotations(d_1);
          g_1 = t;
          t = c_1;
          t = e_1(t);
          j_1 = t;
          t = (ATerm) ATinsert(CheckATermList(j_1), a_1);
          n_0 = t;
          t = SSLsetAnnotations(n_0, g_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_1;
        t = k_159(t);
      }
    return(t);
  }
  t = e_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,h_0 = NULL;
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
        t = not_null(h_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_0 = ATgetFirst((ATermList) t);
          if(((h_0 != NULL) && (h_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_0;
      t = at_end_1_0(i_0, t);
    }
  return(t);
}
static ATerm g_2 (ATerm m_1, ATerm t)
{
  ATerm o_1 = NULL;
  t = SSL_explode_term(m_1);
  if(match_cons(t, sym__2))
    {
      ATerm o_4 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_4) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_1 = NULL,x_1 = NULL,b_2 = NULL;
  b_2 = t;
  if(match_cons(t, sym__2))
    {
      s_1 = ATgetArgument(t, 0);
      x_1 = ATgetArgument(t, 1);
      {
        ATerm p_4 = t;
        int r_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_0 (ATerm t);
            static ATerm k_0 (ATerm t)
            {
              t = x_1;
              return(t);
            }
            t = s_1;
            t = at_end_1_0(k_0, t);
            LocalPopChoice(r_4);
          }
        else
          {
            t = p_4;
            t = g_2(b_2, t);
          }
      }
    }
  else
    {
      t = g_2(b_2, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm k_136 (ATerm), ATerm t)
{
  static ATerm q_0 (ATerm t);
  static ATerm q_0 (ATerm t)
  {
    t = topdown_1_0(k_136, t);
    return(t);
  }
  t = k_136(t);
  t = SRTS_all(q_0, t);
  return(t);
}
ATerm genzip_4_0 (ATerm b_141 (ATerm), ATerm c_141 (ATerm), ATerm d_141 (ATerm), ATerm e_141 (ATerm), ATerm t)
{
  static ATerm o_2 (ATerm t);
  static ATerm o_2 (ATerm t)
  {
    ATerm s_4 = t;
    int t_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_141(t);
        LocalPopChoice(t_4);
      }
    else
      {
        t = s_4;
        {
          ATerm h_2 = NULL,i_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,t_0 = NULL;
          t = c_141(t);
          n_2 = t;
          if(match_cons(t, sym__2))
            {
              i_2 = ATgetArgument(t, 0);
              k_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_2);
          h_2 = t;
          t = i_2;
          t = e_141(t);
          l_2 = t;
          t = k_2;
          t = o_2(t);
          m_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_2, m_2);
          t_0 = t;
          t = SSLsetAnnotations(t_0, h_2);
          t = d_141(t);
        }
      }
    return(t);
  }
  t = o_2(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_4 = ATgetArgument(t, 0);
      if(((ATgetType(u_4) != AT_LIST) || !(ATisEmpty(u_4))))
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
  ATerm i_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_4 = ATgetArgument(t, 0);
      if(((ATgetType(x_4) == AT_LIST) && !(ATisEmpty(x_4))))
        {
          i_18 = ATgetFirst((ATermList) x_4);
          o_18 = (ATerm) ATgetNext((ATermList) x_4);
        }
      else
        _fail(t);
      {
        ATerm y_4 = ATgetArgument(t, 1);
        if(((ATgetType(y_4) == AT_LIST) && !(ATisEmpty(y_4))))
          {
            p_18 = ATgetFirst((ATermList) y_4);
            q_18 = (ATerm) ATgetNext((ATermList) y_4);
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
static ATerm z_0 (ATerm t)
{
  ATerm t_18 = NULL,x_18 = NULL;
  if(match_cons(t, sym__2))
    {
      t_18 = ATgetArgument(t, 0);
      x_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_18), t_18);
  return(t);
}
static ATerm b_1 (ATerm t)
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
      ATerm z_4 = ATgetArgument(t, 0);
      if(((ATgetType(z_4) != AT_LIST) || !(ATisEmpty(z_4))))
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
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_5 = ATgetArgument(t, 0);
      if(((ATgetType(c_5) == AT_LIST) && !(ATisEmpty(c_5))))
        {
          m_25 = ATgetFirst((ATermList) c_5);
          n_25 = (ATerm) ATgetNext((ATermList) c_5);
        }
      else
        _fail(t);
      {
        ATerm e_5 = ATgetArgument(t, 1);
        if(((ATgetType(e_5) == AT_LIST) && !(ATisEmpty(e_5))))
          {
            o_25 = ATgetFirst((ATermList) e_5);
            p_25 = (ATerm) ATgetNext((ATermList) e_5);
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
static ATerm k_1 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL;
  if(match_cons(t, sym__2))
    {
      s_25 = ATgetArgument(t, 0);
      t_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_25), (ATerm) ATmakeAppl(sym_Match_1, t_25));
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
        ATerm u_37 = NULL,v_37 = NULL;
        u_37 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm i_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        v_37 = t;
        t = SSLgetAnnotations(u_37);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_5 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) j_5) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_5 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(k_5) != AT_LIST) || !(ATisEmpty(k_5))))
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
      t = f_5;
      {
        ATerm m_5 = t;
        int n_5 = stack_ptr;
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
            LocalPopChoice(n_5);
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
static ATerm n_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  static ATerm s_0 (ATerm t);
  static ATerm s_0 (ATerm t)
  {
    ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,l_11 = NULL,o_11 = NULL,r_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL;
    j_12 = t;
    if(match_cons(t, sym_Test_1))
      {
        i_12 = ATgetArgument(t, 0);
        t = i_12;
        if(match_cons(t, sym_Id_0))
          {
            ATerm r_5 = t;
            int s_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_t_5;
                t = s_0(t);
                LocalPopChoice(s_5);
              }
            else
              {
                t = r_5;
                {
                  ATerm u_5 = t;
                  int y_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
                      t = j_12;
                      t = new_0_0(t);
                      l_12 = t;
                      t = bottomup_1_0(s_0, t);
                      w_12 = t;
                      t = (ATerm) ATempty;
                      t = s_0(t);
                      x_12 = t;
                      t = (ATerm) ATinsert(CheckATermList(x_12), w_12);
                      t = s_0(t);
                      m_12 = t;
                      t = l_12;
                      t = bottomup_1_0(s_0, t);
                      v_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, v_12);
                      t = s_0(t);
                      u_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, u_12);
                      t = s_0(t);
                      o_12 = t;
                      t = i_12;
                      t = bottomup_1_0(s_0, t);
                      q_12 = t;
                      t = l_12;
                      t = bottomup_1_0(s_0, t);
                      t_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, t_12);
                      t = s_0(t);
                      s_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, s_12);
                      t = s_0(t);
                      r_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_12, r_12);
                      t = s_0(t);
                      p_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_12, p_12);
                      t = s_0(t);
                      n_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, m_12, n_12);
                      t = s_0(t);
                      LocalPopChoice(y_5);
                    }
                  else
                    {
                      t = u_5;
                      t = j_12;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm z_5 = t;
                int a_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_e_6;
                    t = s_0(t);
                    LocalPopChoice(a_6);
                  }
                else
                  {
                    t = z_5;
                    {
                      ATerm f_6 = t;
                      int g_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
                          t = j_12;
                          t = new_0_0(t);
                          a_13 = t;
                          t = bottomup_1_0(s_0, t);
                          l_13 = t;
                          t = (ATerm) ATempty;
                          t = s_0(t);
                          m_13 = t;
                          t = (ATerm) ATinsert(CheckATermList(m_13), l_13);
                          t = s_0(t);
                          b_13 = t;
                          t = a_13;
                          t = bottomup_1_0(s_0, t);
                          k_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, k_13);
                          t = s_0(t);
                          j_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, j_13);
                          t = s_0(t);
                          d_13 = t;
                          t = i_12;
                          t = bottomup_1_0(s_0, t);
                          f_13 = t;
                          t = a_13;
                          t = bottomup_1_0(s_0, t);
                          i_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, i_13);
                          t = s_0(t);
                          h_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, h_13);
                          t = s_0(t);
                          g_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_13, g_13);
                          t = s_0(t);
                          e_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_13, e_13);
                          t = s_0(t);
                          c_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, b_13, c_13);
                          t = s_0(t);
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
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    f_12 = ATgetArgument(t, 0);
                    {
                      ATerm h_6 = t;
                      int i_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, f_12);
                          t = s_0(t);
                          LocalPopChoice(i_6);
                        }
                      else
                        {
                          t = h_6;
                          {
                            ATerm j_6 = t;
                            int l_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,z_13 = NULL,b_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,m_14 = NULL,n_14 = NULL;
                                t = j_12;
                                t = new_0_0(t);
                                q_13 = t;
                                t = bottomup_1_0(s_0, t);
                                m_14 = t;
                                t = (ATerm) ATempty;
                                t = s_0(t);
                                n_14 = t;
                                t = (ATerm) ATinsert(CheckATermList(n_14), m_14);
                                t = s_0(t);
                                r_13 = t;
                                t = q_13;
                                t = bottomup_1_0(s_0, t);
                                f_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, f_14);
                                t = s_0(t);
                                e_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, e_14);
                                t = s_0(t);
                                t_13 = t;
                                t = i_12;
                                t = bottomup_1_0(s_0, t);
                                v_13 = t;
                                t = q_13;
                                t = bottomup_1_0(s_0, t);
                                d_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, d_14);
                                t = s_0(t);
                                b_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, b_14);
                                t = s_0(t);
                                z_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, v_13, z_13);
                                t = s_0(t);
                                u_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_13, u_13);
                                t = s_0(t);
                                s_13 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, r_13, s_13);
                                t = s_0(t);
                                LocalPopChoice(l_6);
                              }
                            else
                              {
                                t = j_6;
                                t = j_12;
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
                        ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL,c_15 = NULL,d_15 = NULL,f_15 = NULL,k_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
                        t = j_12;
                        t = new_0_0(t);
                        w_14 = t;
                        t = bottomup_1_0(s_0, t);
                        q_15 = t;
                        t = (ATerm) ATempty;
                        t = s_0(t);
                        r_15 = t;
                        t = (ATerm) ATinsert(CheckATermList(r_15), q_15);
                        t = s_0(t);
                        x_14 = t;
                        t = w_14;
                        t = bottomup_1_0(s_0, t);
                        p_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, p_15);
                        t = s_0(t);
                        o_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, o_15);
                        t = s_0(t);
                        c_15 = t;
                        t = i_12;
                        t = bottomup_1_0(s_0, t);
                        f_15 = t;
                        t = w_14;
                        t = bottomup_1_0(s_0, t);
                        n_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, n_15);
                        t = s_0(t);
                        m_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, m_15);
                        t = s_0(t);
                        k_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_15, k_15);
                        t = s_0(t);
                        d_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, c_15, d_15);
                        t = s_0(t);
                        y_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, x_14, y_14);
                        t = s_0(t);
                        LocalPopChoice(n_6);
                      }
                    else
                      {
                        t = m_6;
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
                ATerm o_6 = t;
                int q_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_e_6;
                    t = s_0(t);
                    LocalPopChoice(q_6);
                  }
                else
                  {
                    t = o_6;
                    t = j_12;
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
                        t = s_0(t);
                        LocalPopChoice(u_6);
                      }
                    else
                      {
                        t = t_6;
                        t = j_12;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        f_12 = ATgetArgument(t, 0);
                        {
                          ATerm v_6 = t;
                          int w_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, f_12);
                              t = s_0(t);
                              LocalPopChoice(w_6);
                            }
                          else
                            {
                              t = v_6;
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
                                        ATerm x_6 = t;
                                        int z_6 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_e_6;
                                            t = s_0(t);
                                            LocalPopChoice(z_6);
                                          }
                                        else
                                          {
                                            t = x_6;
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
                                              ATerm c_7 = t;
                                              int d_7 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm y_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                  t = s_0(t);
                                                  y_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, y_17);
                                                  t = s_0(t);
                                                  LocalPopChoice(d_7);
                                                }
                                              else
                                                {
                                                  t = c_7;
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
                                                      ATerm f_7 = t;
                                                      int h_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, b_12, a_12);
                                                          {
                                                            ATerm j_7 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm w_1 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    w_1 = ATgetArgument(t, 0);
                                                                    if((w_1 != ATgetArgument(t, 1)))
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
                                                          t = bottomup_1_0(s_0, t);
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
                                                                ATerm h_18 = NULL;
                                                                t = a_12;
                                                                if((b_12 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, w_11, v_11);
                                                                t = genzip_4_0(u_0, w_0, z_0, b_1, t);
                                                                h_18 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, h_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, b_12, w_11)), e_12));
                                                                t = bottomup_1_0(s_0, t);
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
                                                                      ATerm k_19 = NULL;
                                                                      t = c_12;
                                                                      if((f_12 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                                      t = s_0(t);
                                                                      k_19 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, k_19, e_12);
                                                                      t = s_0(t);
                                                                      LocalPopChoice(s_7);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = r_7;
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
                                                    ATerm t_7 = t;
                                                    int u_7 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm s_19 = NULL;
                                                        t = c_12;
                                                        if((f_12 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                        t = s_0(t);
                                                        s_19 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, s_19, e_12);
                                                        t = s_0(t);
                                                        LocalPopChoice(u_7);
                                                      }
                                                    else
                                                      {
                                                        t = t_7;
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
                                                      ATerm v_7 = t;
                                                      int w_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm w_19 = NULL;
                                                          t = c_12;
                                                          if((f_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, f_12);
                                                          t = s_0(t);
                                                          w_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_19, e_12);
                                                          t = s_0(t);
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
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm x_7 = t;
                                                          int y_7 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = s_0(t);
                                                              b_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, b_20);
                                                              t = s_0(t);
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
                                        ATerm z_7 = t;
                                        int a_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_e_6;
                                            t = s_0(t);
                                            LocalPopChoice(a_8);
                                          }
                                        else
                                          {
                                            t = z_7;
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
                                              ATerm b_8 = t;
                                              int c_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm k_20 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                  t = s_0(t);
                                                  k_20 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, k_20);
                                                  t = s_0(t);
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
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                {
                                                  ATerm d_8 = t;
                                                  int e_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_20 = NULL;
                                                      t = c_12;
                                                      if((f_12 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, f_12);
                                                      t = s_0(t);
                                                      o_20 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_20, e_12);
                                                      t = s_0(t);
                                                      LocalPopChoice(e_8);
                                                    }
                                                  else
                                                    {
                                                      t = d_8;
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
                                                      ATerm f_8 = t;
                                                      int g_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm s_20 = NULL;
                                                          t = c_12;
                                                          if((f_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                          t = s_0(t);
                                                          s_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_20, e_12);
                                                          t = s_0(t);
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
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_8 = t;
                                                          int i_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = s_0(t);
                                                              x_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, x_20);
                                                              t = s_0(t);
                                                              LocalPopChoice(i_8);
                                                            }
                                                          else
                                                            {
                                                              t = h_8;
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
                                            ATerm j_8 = t;
                                            int k_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_6;
                                                t = s_0(t);
                                                LocalPopChoice(k_8);
                                              }
                                            else
                                              {
                                                t = j_8;
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
                                                  ATerm l_8 = t;
                                                  int m_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = s_0(t);
                                                      o_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, o_21);
                                                      t = s_0(t);
                                                      LocalPopChoice(m_8);
                                                    }
                                                  else
                                                    {
                                                      t = l_8;
                                                      t = j_12;
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
                                                          ATerm u_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_12);
                                                          t = s_0(t);
                                                          u_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_21, e_12);
                                                          t = s_0(t);
                                                          LocalPopChoice(r_8);
                                                        }
                                                      else
                                                        {
                                                          t = q_8;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = n_8;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        t = f_12;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            b_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm s_8 = t;
                                                              int t_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_22 = NULL,f_22 = NULL;
                                                                  t = a_12;
                                                                  if((b_12 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, b_12);
                                                                  t = s_0(t);
                                                                  f_22 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, f_22);
                                                                  t = s_0(t);
                                                                  e_22 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_22, e_12);
                                                                  t = s_0(t);
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
                                                              ATerm u_8 = t;
                                                              int v_8 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm l_22 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                                  t = s_0(t);
                                                                  l_22 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, l_22);
                                                                  t = s_0(t);
                                                                  LocalPopChoice(v_8);
                                                                }
                                                              else
                                                                {
                                                                  t = u_8;
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
                                            ATerm w_8 = t;
                                            int x_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_6;
                                                t = s_0(t);
                                                LocalPopChoice(x_8);
                                              }
                                            else
                                              {
                                                t = w_8;
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
                                                  ATerm y_8 = t;
                                                  int z_8 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = s_0(t);
                                                      w_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, w_22);
                                                      t = s_0(t);
                                                      LocalPopChoice(z_8);
                                                    }
                                                  else
                                                    {
                                                      t = y_8;
                                                      t = j_12;
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
                                                          ATerm a_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_12);
                                                          t = s_0(t);
                                                          a_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, e_12);
                                                          t = s_0(t);
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
                                                    t = a_9;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_9 = t;
                                                          int g_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = s_0(t);
                                                              f_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, f_23);
                                                              t = s_0(t);
                                                              LocalPopChoice(g_9);
                                                            }
                                                          else
                                                            {
                                                              t = f_9;
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
                                            ATerm h_9 = t;
                                            int i_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_6;
                                                t = s_0(t);
                                                LocalPopChoice(i_9);
                                              }
                                            else
                                              {
                                                t = h_9;
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
                                                  ATerm j_9 = t;
                                                  int k_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = s_0(t);
                                                      r_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, r_23);
                                                      t = s_0(t);
                                                      LocalPopChoice(k_9);
                                                    }
                                                  else
                                                    {
                                                      t = j_9;
                                                      t = j_12;
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
                                                          ATerm z_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, c_12, x_11, y_11);
                                                          t = s_0(t);
                                                          z_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_23, e_12);
                                                          t = s_0(t);
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
                                                    t = l_9;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_9 = t;
                                                          int r_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_24 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = s_0(t);
                                                              g_24 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, g_24);
                                                              t = s_0(t);
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
                                            ATerm s_9 = t;
                                            int t_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_6;
                                                t = s_0(t);
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
                                                      ATerm s_24 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = s_0(t);
                                                      s_24 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, s_24);
                                                      t = s_0(t);
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
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    f_12 = ATgetArgument(t, 0);
                                                    g_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm w_9 = t;
                                                      int x_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                          t = s_0(t);
                                                          x_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, x_24);
                                                          t = s_0(t);
                                                          LocalPopChoice(x_9);
                                                        }
                                                      else
                                                        {
                                                          t = w_9;
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
                                        ATerm y_9 = t;
                                        int z_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_e_6;
                                            t = s_0(t);
                                            LocalPopChoice(z_9);
                                          }
                                        else
                                          {
                                            t = y_9;
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
                                              ATerm a_10 = t;
                                              int b_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm g_25 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                  t = s_0(t);
                                                  g_25 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_25);
                                                  t = s_0(t);
                                                  LocalPopChoice(b_10);
                                                }
                                              else
                                                {
                                                  t = a_10;
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
                                                      ATerm c_10 = t;
                                                      int d_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, b_12, c_12);
                                                          {
                                                            ATerm e_10 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm p_2 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    p_2 = ATgetArgument(t, 0);
                                                                    if((p_2 != ATgetArgument(t, 1)))
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
                                                          t = bottomup_1_0(s_0, t);
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
                                                                ATerm l_25 = NULL;
                                                                t = c_12;
                                                                if((b_12 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, w_11, x_11);
                                                                t = genzip_4_0(f_1, h_1, i_1, k_1, t);
                                                                l_25 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, b_12, w_11)));
                                                                t = bottomup_1_0(s_0, t);
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
                                                                      t = d_12;
                                                                      if((f_12 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                                      t = s_0(t);
                                                                      LocalPopChoice(i_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = h_10;
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
                                                    ATerm j_10 = t;
                                                    int k_10 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = d_12;
                                                        if((f_12 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                        t = s_0(t);
                                                        LocalPopChoice(k_10);
                                                      }
                                                    else
                                                      {
                                                        t = j_10;
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
                                                      ATerm l_10 = t;
                                                      int m_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = d_12;
                                                          if((f_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, f_12);
                                                          t = s_0(t);
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
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_10 = t;
                                                          int o_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm j_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = s_0(t);
                                                              j_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, j_26);
                                                              t = s_0(t);
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
                                        ATerm p_10 = t;
                                        int q_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_e_6;
                                            t = s_0(t);
                                            LocalPopChoice(q_10);
                                          }
                                        else
                                          {
                                            t = p_10;
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
                                              ATerm r_10 = t;
                                              int s_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm z_26 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                  t = s_0(t);
                                                  z_26 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, z_26);
                                                  t = s_0(t);
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
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                {
                                                  ATerm t_10 = t;
                                                  int u_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = d_12;
                                                      if((f_12 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, f_12);
                                                      t = s_0(t);
                                                      LocalPopChoice(u_10);
                                                    }
                                                  else
                                                    {
                                                      t = t_10;
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
                                                      ATerm v_10 = t;
                                                      int w_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = d_12;
                                                          if((f_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                          t = s_0(t);
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
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm x_10 = t;
                                                          int y_10 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = s_0(t);
                                                              q_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, q_27);
                                                              t = s_0(t);
                                                              LocalPopChoice(y_10);
                                                            }
                                                          else
                                                            {
                                                              t = x_10;
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
                                            ATerm k_12 = t;
                                            int y_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_6;
                                                t = s_0(t);
                                                LocalPopChoice(y_12);
                                              }
                                            else
                                              {
                                                t = k_12;
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
                                                  ATerm z_12 = t;
                                                  int n_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm j_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = s_0(t);
                                                      j_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, j_28);
                                                      t = s_0(t);
                                                      LocalPopChoice(n_13);
                                                    }
                                                  else
                                                    {
                                                      t = z_12;
                                                      t = j_12;
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
                                                        ATerm w_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(p_13);
                                                    {
                                                      ATerm x_13 = t;
                                                      int y_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_12);
                                                          t = s_0(t);
                                                          LocalPopChoice(y_13);
                                                        }
                                                      else
                                                        {
                                                          t = x_13;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = o_13;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        t = f_12;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            b_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm a_14 = t;
                                                              int c_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm r_28 = NULL;
                                                                  t = c_12;
                                                                  if((b_12 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, b_12);
                                                                  t = s_0(t);
                                                                  r_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, r_28);
                                                                  t = s_0(t);
                                                                  LocalPopChoice(c_14);
                                                                }
                                                              else
                                                                {
                                                                  t = a_14;
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
                                                              ATerm g_14 = t;
                                                              int h_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm z_28 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                                  t = s_0(t);
                                                                  z_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, z_28);
                                                                  t = s_0(t);
                                                                  LocalPopChoice(h_14);
                                                                }
                                                              else
                                                                {
                                                                  t = g_14;
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
                                            ATerm i_14 = t;
                                            int j_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_6;
                                                t = s_0(t);
                                                LocalPopChoice(j_14);
                                              }
                                            else
                                              {
                                                t = i_14;
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
                                                  ATerm k_14 = t;
                                                  int l_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = s_0(t);
                                                      o_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, o_29);
                                                      t = s_0(t);
                                                      LocalPopChoice(l_14);
                                                    }
                                                  else
                                                    {
                                                      t = k_14;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm o_14 = t;
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
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_12);
                                                          t = s_0(t);
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
                                                    t = o_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_14 = t;
                                                          int u_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = s_0(t);
                                                              z_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, z_29);
                                                              t = s_0(t);
                                                              LocalPopChoice(u_14);
                                                            }
                                                          else
                                                            {
                                                              t = t_14;
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
                                            ATerm v_14 = t;
                                            int z_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_6;
                                                t = s_0(t);
                                                LocalPopChoice(z_14);
                                              }
                                            else
                                              {
                                                t = v_14;
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
                                                  ATerm a_15 = t;
                                                  int b_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_30 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                      t = s_0(t);
                                                      o_30 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, o_30);
                                                      t = s_0(t);
                                                      LocalPopChoice(b_15);
                                                    }
                                                  else
                                                    {
                                                      t = a_15;
                                                      t = j_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm e_15 = t;
                                                int g_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm h_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(g_15);
                                                    {
                                                      ATerm i_15 = t;
                                                      int j_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, d_12, e_12, z_11);
                                                          t = s_0(t);
                                                          LocalPopChoice(j_15);
                                                        }
                                                      else
                                                        {
                                                          t = i_15;
                                                          t = j_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = e_15;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm l_15 = t;
                                                          int s_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = s_0(t);
                                                              y_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, y_30);
                                                              t = s_0(t);
                                                              LocalPopChoice(s_15);
                                                            }
                                                          else
                                                            {
                                                              t = l_15;
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
                                                ATerm t_15 = t;
                                                int u_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_e_6;
                                                    t = s_0(t);
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
                                                          ATerm l_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                          t = s_0(t);
                                                          l_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, d_12, l_31);
                                                          t = s_0(t);
                                                          LocalPopChoice(w_15);
                                                        }
                                                      else
                                                        {
                                                          t = v_15;
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
                                                      ATerm x_15 = t;
                                                      int y_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm q_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                          t = s_0(t);
                                                          q_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, q_31);
                                                          t = s_0(t);
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
                                                                ATerm u_31 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                                t = s_0(t);
                                                                u_31 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, d_12, u_31);
                                                                t = s_0(t);
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
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_12 = ATgetArgument(t, 0);
                                                        g_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_16 = t;
                                                          int c_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                              t = s_0(t);
                                                              d_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, d_12, d_32);
                                                              t = s_0(t);
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
                                                                    ATerm h_32 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                                    t = s_0(t);
                                                                    h_32 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, h_32);
                                                                    t = s_0(t);
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
                                                      }
                                                    else
                                                      {
                                                        ATerm f_16 = t;
                                                        int g_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm q_32 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                            t = s_0(t);
                                                            q_32 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, d_12, q_32);
                                                            t = s_0(t);
                                                            LocalPopChoice(g_16);
                                                          }
                                                        else
                                                          {
                                                            t = f_16;
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
                                                    ATerm h_16 = t;
                                                    int i_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_e_6;
                                                        t = s_0(t);
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
                                                              ATerm f_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                              t = s_0(t);
                                                              f_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, d_12, f_33);
                                                              t = s_0(t);
                                                              LocalPopChoice(k_16);
                                                            }
                                                          else
                                                            {
                                                              t = j_16;
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
                                                          ATerm l_16 = t;
                                                          int m_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = s_0(t);
                                                              n_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, n_33);
                                                              t = s_0(t);
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
                                                                    ATerm r_33 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                                    t = s_0(t);
                                                                    r_33 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, d_12, r_33);
                                                                    t = s_0(t);
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
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_12 = ATgetArgument(t, 0);
                                                            g_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm p_16 = t;
                                                              int q_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm x_33 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                                  t = s_0(t);
                                                                  x_33 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, d_12, x_33);
                                                                  t = s_0(t);
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
                                                                        ATerm d_34 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                                        t = s_0(t);
                                                                        d_34 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, d_34);
                                                                        t = s_0(t);
                                                                        LocalPopChoice(s_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_16;
                                                                        t = j_12;
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
                                                                ATerm i_34 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, e_12);
                                                                t = s_0(t);
                                                                i_34 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, d_12, i_34);
                                                                t = s_0(t);
                                                                LocalPopChoice(u_16);
                                                              }
                                                            else
                                                              {
                                                                t = t_16;
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
                                                    ATerm v_16 = t;
                                                    int w_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_e_6;
                                                        t = s_0(t);
                                                        LocalPopChoice(w_16);
                                                      }
                                                    else
                                                      {
                                                        t = v_16;
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
                                                          ATerm x_16 = t;
                                                          int y_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                              t = s_0(t);
                                                              w_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, w_34);
                                                              t = s_0(t);
                                                              LocalPopChoice(y_16);
                                                            }
                                                          else
                                                            {
                                                              t = x_16;
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
                                                              ATerm z_16 = t;
                                                              int a_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_35 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                                                  t = s_0(t);
                                                                  e_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_12, e_35);
                                                                  t = s_0(t);
                                                                  LocalPopChoice(a_17);
                                                                }
                                                              else
                                                                {
                                                                  t = z_16;
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
                            ATerm b_17 = t;
                            int c_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_t_5;
                                t = s_0(t);
                                LocalPopChoice(c_17);
                              }
                            else
                              {
                                t = b_17;
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
                            ATerm d_17 = t;
                            int e_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_t_5;
                                t = s_0(t);
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
                                      ATerm h_17 = t;
                                      int i_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_37 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, g_12, h_12);
                                          t = s_0(t);
                                          p_37 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, f_12, p_37);
                                          t = s_0(t);
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
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        f_12 = ATgetArgument(t, 0);
                                        {
                                          ATerm l_17 = t;
                                          int m_17 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = h_12;
                                              if((i_12 != t))
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
                                                    t = f_12;
                                                    t = topdown_1_0(l_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                                                    t = bottomup_1_0(s_0, t);
                                                    LocalPopChoice(o_17);
                                                  }
                                                else
                                                  {
                                                    t = n_17;
                                                    t = j_12;
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
                                            t = h_12;
                                            if((i_12 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(q_17);
                                          }
                                        else
                                          {
                                            t = p_17;
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
                                ATerm r_17 = t;
                                int s_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_t_5;
                                    t = s_0(t);
                                    LocalPopChoice(s_17);
                                  }
                                else
                                  {
                                    t = r_17;
                                    t = h_12;
                                  }
                              }
                            else
                              {
                                ATerm t_17 = t;
                                int u_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_t_5;
                                    t = s_0(t);
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
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = i_12;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm v_17 = t;
                                    int w_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_e_6;
                                        t = s_0(t);
                                        LocalPopChoice(w_17);
                                      }
                                    else
                                      {
                                        t = v_17;
                                        t = h_12;
                                      }
                                  }
                                else
                                  {
                                    ATerm x_17 = t;
                                    int z_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_e_6;
                                        t = s_0(t);
                                        LocalPopChoice(z_17);
                                      }
                                    else
                                      {
                                        t = x_17;
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
                                        ATerm a_18 = t;
                                        int b_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm s_38 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, i_12, d_12);
                                            t = conc_0_0(t);
                                            s_38 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, s_38, e_12);
                                            t = bottomup_1_0(s_0, t);
                                            LocalPopChoice(b_18);
                                          }
                                        else
                                          {
                                            t = a_18;
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
                        ATerm c_18 = t;
                        int d_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm e_18 = ATgetArgument(t, 0);
                                h_12 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(d_18);
                            t = h_12;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm f_18 = t;
                                int g_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_t_5;
                                    t = s_0(t);
                                    LocalPopChoice(g_18);
                                  }
                                else
                                  {
                                    t = f_18;
                                    t = j_12;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm j_18 = t;
                                    int k_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_e_6;
                                        t = s_0(t);
                                        LocalPopChoice(k_18);
                                      }
                                    else
                                      {
                                        t = j_18;
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
                            t = c_18;
                            if(match_cons(t, sym_All_1))
                              {
                                i_12 = ATgetArgument(t, 0);
                                t = i_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm l_18 = t;
                                    int m_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_t_5;
                                        t = s_0(t);
                                        LocalPopChoice(m_18);
                                      }
                                    else
                                      {
                                        t = l_18;
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
                                        ATerm n_18 = t;
                                        int r_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_t_5;
                                            t = s_0(t);
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
                                                  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL;
                                                  t = j_12;
                                                  t = new_0_0(t);
                                                  d_39 = t;
                                                  t = bottomup_1_0(s_0, t);
                                                  o_39 = t;
                                                  t = (ATerm) ATempty;
                                                  t = s_0(t);
                                                  p_39 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(p_39), o_39);
                                                  t = s_0(t);
                                                  e_39 = t;
                                                  t = d_39;
                                                  t = bottomup_1_0(s_0, t);
                                                  n_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, n_39);
                                                  t = s_0(t);
                                                  m_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, m_39);
                                                  t = s_0(t);
                                                  g_39 = t;
                                                  t = i_12;
                                                  t = bottomup_1_0(s_0, t);
                                                  i_39 = t;
                                                  t = d_39;
                                                  t = bottomup_1_0(s_0, t);
                                                  l_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, l_39);
                                                  t = s_0(t);
                                                  k_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, k_39);
                                                  t = s_0(t);
                                                  j_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_39, j_39);
                                                  t = s_0(t);
                                                  h_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_39, h_39);
                                                  t = s_0(t);
                                                  f_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, e_39, f_39);
                                                  t = s_0(t);
                                                  LocalPopChoice(u_18);
                                                }
                                              else
                                                {
                                                  t = s_18;
                                                  t = j_12;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm v_18 = t;
                                            int w_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_6;
                                                t = s_0(t);
                                                LocalPopChoice(w_18);
                                              }
                                            else
                                              {
                                                t = v_18;
                                                {
                                                  ATerm z_18 = t;
                                                  int a_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_39 = NULL,t_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL;
                                                      t = j_12;
                                                      t = new_0_0(t);
                                                      s_39 = t;
                                                      t = bottomup_1_0(s_0, t);
                                                      h_40 = t;
                                                      t = (ATerm) ATempty;
                                                      t = s_0(t);
                                                      i_40 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(i_40), h_40);
                                                      t = s_0(t);
                                                      t_39 = t;
                                                      t = s_39;
                                                      t = bottomup_1_0(s_0, t);
                                                      g_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, g_40);
                                                      t = s_0(t);
                                                      f_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, f_40);
                                                      t = s_0(t);
                                                      x_39 = t;
                                                      t = i_12;
                                                      t = bottomup_1_0(s_0, t);
                                                      z_39 = t;
                                                      t = s_39;
                                                      t = bottomup_1_0(s_0, t);
                                                      e_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, e_40);
                                                      t = s_0(t);
                                                      d_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, d_40);
                                                      t = s_0(t);
                                                      c_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_39, c_40);
                                                      t = s_0(t);
                                                      y_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_39, y_39);
                                                      t = s_0(t);
                                                      w_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, t_39, w_39);
                                                      t = s_0(t);
                                                      LocalPopChoice(a_19);
                                                    }
                                                  else
                                                    {
                                                      t = z_18;
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
                                                    l_11 = ATgetArgument(t, 1);
                                                    t = a_11;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        b_11 = ATgetArgument(t, 0);
                                                        t = f_12;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            b_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm b_19 = t;
                                                              int c_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, b_11);
                                                                  t = s_0(t);
                                                                  p_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_40, l_11);
                                                                  t = s_0(t);
                                                                  o_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_12, o_40);
                                                                  t = s_0(t);
                                                                  n_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, n_40);
                                                                  t = s_0(t);
                                                                  LocalPopChoice(c_19);
                                                                }
                                                              else
                                                                {
                                                                  t = b_19;
                                                                  {
                                                                    ATerm e_19 = t;
                                                                    int f_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm s_40 = NULL,t_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL;
                                                                        t = j_12;
                                                                        t = new_0_0(t);
                                                                        s_40 = t;
                                                                        t = bottomup_1_0(s_0, t);
                                                                        e_41 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = s_0(t);
                                                                        f_41 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(f_41), e_41);
                                                                        t = s_0(t);
                                                                        t_40 = t;
                                                                        t = s_40;
                                                                        t = bottomup_1_0(s_0, t);
                                                                        d_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, d_41);
                                                                        t = s_0(t);
                                                                        c_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, c_41);
                                                                        t = s_0(t);
                                                                        w_40 = t;
                                                                        t = i_12;
                                                                        t = bottomup_1_0(s_0, t);
                                                                        y_40 = t;
                                                                        t = s_40;
                                                                        t = bottomup_1_0(s_0, t);
                                                                        b_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, b_41);
                                                                        t = s_0(t);
                                                                        a_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, a_41);
                                                                        t = s_0(t);
                                                                        z_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_40, z_40);
                                                                        t = s_0(t);
                                                                        x_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_40, x_40);
                                                                        t = s_0(t);
                                                                        v_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, t_40, v_40);
                                                                        t = s_0(t);
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
                                                          }
                                                        else
                                                          {
                                                            ATerm g_19 = t;
                                                            int h_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm k_41 = NULL,l_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL;
                                                                t = j_12;
                                                                t = new_0_0(t);
                                                                k_41 = t;
                                                                t = bottomup_1_0(s_0, t);
                                                                w_41 = t;
                                                                t = (ATerm) ATempty;
                                                                t = s_0(t);
                                                                x_41 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(x_41), w_41);
                                                                t = s_0(t);
                                                                l_41 = t;
                                                                t = k_41;
                                                                t = bottomup_1_0(s_0, t);
                                                                v_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, v_41);
                                                                t = s_0(t);
                                                                u_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, u_41);
                                                                t = s_0(t);
                                                                o_41 = t;
                                                                t = i_12;
                                                                t = bottomup_1_0(s_0, t);
                                                                q_41 = t;
                                                                t = k_41;
                                                                t = bottomup_1_0(s_0, t);
                                                                t_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, t_41);
                                                                t = s_0(t);
                                                                s_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, s_41);
                                                                t = s_0(t);
                                                                r_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, q_41, r_41);
                                                                t = s_0(t);
                                                                p_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, o_41, p_41);
                                                                t = s_0(t);
                                                                n_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, l_41, n_41);
                                                                t = s_0(t);
                                                                LocalPopChoice(h_19);
                                                              }
                                                            else
                                                              {
                                                                t = g_19;
                                                                t = j_12;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = f_12;
                                                        {
                                                          ATerm i_19 = t;
                                                          int j_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL;
                                                              t = j_12;
                                                              t = new_0_0(t);
                                                              b_42 = t;
                                                              t = bottomup_1_0(s_0, t);
                                                              m_42 = t;
                                                              t = (ATerm) ATempty;
                                                              t = s_0(t);
                                                              n_42 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(n_42), m_42);
                                                              t = s_0(t);
                                                              c_42 = t;
                                                              t = b_42;
                                                              t = bottomup_1_0(s_0, t);
                                                              l_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, l_42);
                                                              t = s_0(t);
                                                              k_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, k_42);
                                                              t = s_0(t);
                                                              e_42 = t;
                                                              t = i_12;
                                                              t = bottomup_1_0(s_0, t);
                                                              g_42 = t;
                                                              t = b_42;
                                                              t = bottomup_1_0(s_0, t);
                                                              j_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, j_42);
                                                              t = s_0(t);
                                                              i_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, i_42);
                                                              t = s_0(t);
                                                              h_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_42, h_42);
                                                              t = s_0(t);
                                                              f_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, e_42, f_42);
                                                              t = s_0(t);
                                                              d_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, c_42, d_42);
                                                              t = s_0(t);
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
                                                else
                                                  {
                                                    t = f_12;
                                                    {
                                                      ATerm l_19 = t;
                                                      int m_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL;
                                                          t = j_12;
                                                          t = new_0_0(t);
                                                          q_42 = t;
                                                          t = bottomup_1_0(s_0, t);
                                                          b_43 = t;
                                                          t = (ATerm) ATempty;
                                                          t = s_0(t);
                                                          c_43 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(c_43), b_43);
                                                          t = s_0(t);
                                                          r_42 = t;
                                                          t = q_42;
                                                          t = bottomup_1_0(s_0, t);
                                                          a_43 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, a_43);
                                                          t = s_0(t);
                                                          z_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, z_42);
                                                          t = s_0(t);
                                                          t_42 = t;
                                                          t = i_12;
                                                          t = bottomup_1_0(s_0, t);
                                                          v_42 = t;
                                                          t = q_42;
                                                          t = bottomup_1_0(s_0, t);
                                                          y_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, y_42);
                                                          t = s_0(t);
                                                          x_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, x_42);
                                                          t = s_0(t);
                                                          w_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_42, w_42);
                                                          t = s_0(t);
                                                          u_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_42, u_42);
                                                          t = s_0(t);
                                                          s_42 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, r_42, s_42);
                                                          t = s_0(t);
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
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    f_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm n_19 = t;
                                                      int o_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, f_12);
                                                          t = s_0(t);
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
                                                                ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL;
                                                                t = j_12;
                                                                t = new_0_0(t);
                                                                g_43 = t;
                                                                t = bottomup_1_0(s_0, t);
                                                                r_43 = t;
                                                                t = (ATerm) ATempty;
                                                                t = s_0(t);
                                                                s_43 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(s_43), r_43);
                                                                t = s_0(t);
                                                                h_43 = t;
                                                                t = g_43;
                                                                t = bottomup_1_0(s_0, t);
                                                                q_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, q_43);
                                                                t = s_0(t);
                                                                p_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, p_43);
                                                                t = s_0(t);
                                                                j_43 = t;
                                                                t = i_12;
                                                                t = bottomup_1_0(s_0, t);
                                                                l_43 = t;
                                                                t = g_43;
                                                                t = bottomup_1_0(s_0, t);
                                                                o_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, o_43);
                                                                t = s_0(t);
                                                                n_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, n_43);
                                                                t = s_0(t);
                                                                m_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, l_43, m_43);
                                                                t = s_0(t);
                                                                k_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, j_43, k_43);
                                                                t = s_0(t);
                                                                i_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, h_43, i_43);
                                                                t = s_0(t);
                                                                LocalPopChoice(q_19);
                                                              }
                                                            else
                                                              {
                                                                t = p_19;
                                                                t = j_12;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm r_19 = t;
                                                    int t_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,h_44 = NULL,i_44 = NULL;
                                                        t = j_12;
                                                        t = new_0_0(t);
                                                        v_43 = t;
                                                        t = bottomup_1_0(s_0, t);
                                                        h_44 = t;
                                                        t = (ATerm) ATempty;
                                                        t = s_0(t);
                                                        i_44 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(i_44), h_44);
                                                        t = s_0(t);
                                                        w_43 = t;
                                                        t = v_43;
                                                        t = bottomup_1_0(s_0, t);
                                                        f_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, f_44);
                                                        t = s_0(t);
                                                        e_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, e_44);
                                                        t = s_0(t);
                                                        y_43 = t;
                                                        t = i_12;
                                                        t = bottomup_1_0(s_0, t);
                                                        a_44 = t;
                                                        t = v_43;
                                                        t = bottomup_1_0(s_0, t);
                                                        d_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, d_44);
                                                        t = s_0(t);
                                                        c_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, c_44);
                                                        t = s_0(t);
                                                        b_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, a_44, b_44);
                                                        t = s_0(t);
                                                        z_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_43, z_43);
                                                        t = s_0(t);
                                                        x_43 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, w_43, x_43);
                                                        t = s_0(t);
                                                        LocalPopChoice(t_19);
                                                      }
                                                    else
                                                      {
                                                        t = r_19;
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
                                            ATerm u_19 = t;
                                            int v_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_t_5;
                                                t = s_0(t);
                                                LocalPopChoice(v_19);
                                              }
                                            else
                                              {
                                                t = u_19;
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
                                                ATerm x_19 = t;
                                                int y_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_e_6;
                                                    t = s_0(t);
                                                    LocalPopChoice(y_19);
                                                  }
                                                else
                                                  {
                                                    t = x_19;
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
                                                    ATerm z_19 = t;
                                                    int a_20 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_e_6;
                                                        t = s_0(t);
                                                        LocalPopChoice(a_20);
                                                      }
                                                    else
                                                      {
                                                        t = z_19;
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
                                                ATerm c_20 = t;
                                                int d_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm e_20 = ATgetArgument(t, 0);
                                                        h_12 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(d_20);
                                                    t = h_12;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm f_20 = t;
                                                        int g_20 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_e_6;
                                                            t = s_0(t);
                                                            LocalPopChoice(g_20);
                                                          }
                                                        else
                                                          {
                                                            t = f_20;
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
                                                    t = c_20;
                                                    {
                                                      ATerm h_20 = t;
                                                      int i_20 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm j_20 = ATgetArgument(t, 0);
                                                              h_12 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(i_20);
                                                          {
                                                            ATerm l_20 = t;
                                                            int m_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = h_12;
                                                                t = fetch_1_0(n_1, t);
                                                                t = term_e_6;
                                                                t = bottomup_1_0(s_0, t);
                                                                LocalPopChoice(m_20);
                                                              }
                                                            else
                                                              {
                                                                t = l_20;
                                                                t = j_12;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = h_20;
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
                                                                            ATerm n_20 = t;
                                                                            int p_20 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm p_45 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, g_12, h_12);
                                                                                t = s_0(t);
                                                                                p_45 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, f_12, p_45);
                                                                                t = s_0(t);
                                                                                LocalPopChoice(p_20);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = n_20;
                                                                                {
                                                                                  ATerm q_20 = t;
                                                                                  int r_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = h_12;
                                                                                      if((i_12 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(r_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = q_20;
                                                                                      t = j_12;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm t_20 = t;
                                                                          int u_20 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = h_12;
                                                                              if((i_12 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(u_20);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_20;
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
                                                                      ATerm v_20 = t;
                                                                      int w_20 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, h_12);
                                                                          t = s_0(t);
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
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      i_12 = ATgetArgument(t, 0);
                                                                      h_12 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm y_20 = t;
                                                                        int z_20 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, i_12, h_12);
                                                                            t = s_0(t);
                                                                            LocalPopChoice(z_20);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = y_20;
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
                                                                                ATerm a_21 = t;
                                                                                int b_21 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm f_46 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, g_12);
                                                                                    t = s_0(t);
                                                                                    f_46 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, f_12, f_46);
                                                                                    t = s_0(t);
                                                                                    LocalPopChoice(b_21);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = a_21;
                                                                                    t = j_12;
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
                                                                                      t = s_0(t);
                                                                                      LocalPopChoice(d_21);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = c_21;
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
                                                                                    ATerm e_21 = t;
                                                                                    int f_21 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm l_46 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, g_12);
                                                                                        t = s_0(t);
                                                                                        l_46 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, f_12, l_46);
                                                                                        t = s_0(t);
                                                                                        LocalPopChoice(f_21);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = e_21;
                                                                                        t = j_12;
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
                                                                                          t = s_0(t);
                                                                                          LocalPopChoice(h_21);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = g_21;
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
                                                                                        ATerm i_21 = t;
                                                                                        int j_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm r_46 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, g_12);
                                                                                            t = s_0(t);
                                                                                            r_46 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, r_46);
                                                                                            t = s_0(t);
                                                                                            LocalPopChoice(j_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = i_21;
                                                                                            t = j_12;
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
                                                                                              t = s_0(t);
                                                                                              LocalPopChoice(l_21);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = k_21;
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
                                                                                        ATerm m_21 = t;
                                                                                        int n_21 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL;
                                                                                            t = term_p_21;
                                                                                            t = bottomup_1_0(s_0, t);
                                                                                            a_47 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = s_0(t);
                                                                                            d_47 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(d_47), z_10);
                                                                                            t = s_0(t);
                                                                                            c_47 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(c_47), i_12);
                                                                                            t = s_0(t);
                                                                                            b_47 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, a_47, b_47);
                                                                                            t = s_0(t);
                                                                                            z_46 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, h_12, z_46);
                                                                                            t = s_0(t);
                                                                                            LocalPopChoice(n_21);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = m_21;
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
                                                                                            ATerm q_21 = t;
                                                                                            int r_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, h_12);
                                                                                                t = s_0(t);
                                                                                                j_47 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, z_10);
                                                                                                t = s_0(t);
                                                                                                m_47 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = s_0(t);
                                                                                                n_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(n_47), m_47);
                                                                                                t = s_0(t);
                                                                                                l_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(l_47), i_12);
                                                                                                t = s_0(t);
                                                                                                k_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(k_47), j_47);
                                                                                                t = s_0(t);
                                                                                                i_47 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, i_47);
                                                                                                t = s_0(t);
                                                                                                LocalPopChoice(r_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = q_21;
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
                                                                                                ATerm s_21 = t;
                                                                                                int t_21 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm r_47 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, h_12);
                                                                                                    t = s_0(t);
                                                                                                    r_47 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, r_47);
                                                                                                    t = s_0(t);
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
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  i_12 = ATgetArgument(t, 0);
                                                                                                  h_12 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm v_21 = t;
                                                                                                    int w_21 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm v_47 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, i_12);
                                                                                                        t = s_0(t);
                                                                                                        v_47 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, v_47, h_12);
                                                                                                        t = s_0(t);
                                                                                                        LocalPopChoice(w_21);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = v_21;
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
                                                                                                        ATerm x_21 = t;
                                                                                                        int y_21 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm f_48 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, h_12);
                                                                                                            t = s_0(t);
                                                                                                            f_48 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, f_48, i_12);
                                                                                                            t = s_0(t);
                                                                                                            LocalPopChoice(y_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = x_21;
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
                                                                                                                  ATerm z_21 = t;
                                                                                                                  int a_22 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm r_48 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, i_12, d_12);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      r_48 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, r_48, e_12);
                                                                                                                      t = bottomup_1_0(s_0, t);
                                                                                                                      LocalPopChoice(a_22);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = z_21;
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
                                                                                                                                              o_11 = ATgetArgument(t, 2);
                                                                                                                                              r_11 = ATgetArgument(t, 3);
                                                                                                                                              t = o_11;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = w_11;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm b_22 = t;
                                                                                                                                                      int c_22 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = c_12;
                                                                                                                                                          if((b_12 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = r_11;
                                                                                                                                                          {
                                                                                                                                                            ATerm d_22 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm p_1 (ATerm t);
                                                                                                                                                                static ATerm p_1 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm g_22 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(g_22, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((b_12 != ATgetArgument(g_22, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(g_22, 0));
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
                                                                                                                                                                t = oncetd_1_0(p_1, t);
                                                                                                                                                                PopChoice();
                                                                                                                                                                _fail(t);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = d_22;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = r_11;
                                                                                                                                                          t = bottomup_1_0(s_0, t);
                                                                                                                                                          LocalPopChoice(c_22);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = b_22;
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
  t = bottomup_1_0(s_0, t);
  return(t);
}
ATerm map_1_0 (ATerm v_158 (ATerm), ATerm t)
{
  static ATerm k_50 (ATerm t);
  static ATerm k_50 (ATerm t)
  {
    ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
    h_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_50;
      }
    else
      {
        ATerm g_3 = NULL,j_3 = NULL,k_3 = NULL,v_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_50 = ATgetFirst((ATermList) t);
            j_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_50);
        g_3 = t;
        t = i_50;
        t = v_158(t);
        j_3 = t;
        t = j_50;
        t = k_50(t);
        k_3 = t;
        t = (ATerm) ATinsert(CheckATermList(k_3), j_3);
        v_0 = t;
        t = SSLsetAnnotations(v_0, g_3);
      }
    return(t);
  }
  t = k_50(t);
  return(t);
}
static ATerm c_11 (ATerm x_47, ATerm y_47, ATerm t)
{
  ATerm m_50 = NULL;
  t = SSL_fputc(x_47, y_47);
  m_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_50);
  return(t);
}
static ATerm d_11 (ATerm g_53, ATerm h_53, ATerm t)
{
  ATerm n_50 = NULL;
  t = SSL_write_term_to_stream_text(g_53, h_53);
  n_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_50);
  return(t);
}
static ATerm f_11 (ATerm c_151 (ATerm), ATerm r_486, ATerm m_53, ATerm t)
{
  ATerm o_50 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_486, term_j_22);
  t = j_11(t);
  o_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_50, m_53);
  t = c_151(t);
  t = fclose_0_0(t);
  t = m_53;
  return(t);
}
static ATerm e_11 (ATerm c_53, ATerm d_53, ATerm t)
{
  ATerm p_50 = NULL;
  t = SSL_write_term_to_stream_baf(c_53, d_53);
  p_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_50);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_22 = ATgetArgument(t, 0);
      if(match_cons(k_22, sym_Stream_1))
        {
          w_50 = ATgetArgument(k_22, 0);
        }
      else
        _fail(t);
      x_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(w_50, x_50, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm y_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_22 = ATgetArgument(t, 0);
      if(match_cons(m_22, sym_Stream_1))
        {
          c_51 = ATgetArgument(m_22, 0);
        }
      else
        _fail(t);
      d_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(c_51, d_51, t);
  y_50 = t;
  t = term_n_22;
  a_51 = t;
  t = y_50;
  if(match_cons(t, sym_Stream_1))
    {
      b_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_22, y_50);
  t = c_11(a_51, b_51, t);
  return(t);
}
ATerm output_1_0 (ATerm v_168 (ATerm), ATerm t)
{
  ATerm q_50 = NULL,r_50 = NULL;
  t = v_168(t);
  r_50 = t;
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_50 = NULL,t_50 = NULL;
        t = term_q_22;
        s_50 = t;
        t = term_r_22;
        t_50 = t;
        t = term_s_22;
        t = p_11(s_50, t_50, t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        t = term_t_22;
      }
  }
  q_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_50, r_50);
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_50 = NULL,v_50 = NULL;
        t = term_q_22;
        u_50 = t;
        t = term_x_22;
        v_50 = t;
        t = term_y_22;
        t = p_11(u_50, v_50, t);
        t = (ATerm) ATmakeAppl(sym__2, q_50, r_50);
        LocalPopChoice(v_22);
        if(match_cons(t, sym__2))
          {
            ATerm z_22 = ATgetArgument(t, 0);
            ATerm b_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_11(q_1, q_50, r_50, t);
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
        t = f_11(r_1, q_50, r_50, t);
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
        ATerm e_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_51);
            LocalPopChoice(g_23);
          }
        else
          {
            t = e_23;
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
static ATerm g_11 (ATerm i_53, ATerm t)
{
  t = SSL_read_term_from_stream(i_53);
  return(t);
}
static ATerm h_11 (ATerm d_46, ATerm e_46, ATerm t)
{
  t = SSL_strcat(d_46, e_46);
  return(t);
}
static ATerm i_11 (ATerm z_47, ATerm a_48, ATerm t)
{
  ATerm s_51 = NULL;
  t = SSL_fopen(z_47, a_48);
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
static ATerm o_53 (ATerm d_52, ATerm t)
{
  ATerm e_52 = NULL;
  t = SSL_explode_term(d_52);
  if(match_cons(t, sym__2))
    {
      ATerm h_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_23 = ATgetArgument(t, 1);
        if(((ATgetType(i_23) == AT_LIST) && !(ATisEmpty(i_23))))
          {
            e_52 = ATgetFirst((ATermList) i_23);
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
  t = e_52;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_52;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_52;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_52;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_53 (ATerm h_52, ATerm i_52, ATerm k_52, ATerm t)
{
  ATerm l_52 = NULL,n_52 = NULL,o_52 = NULL,s_52 = NULL,x_0 = NULL;
  t = SSLgetAnnotations(k_52);
  o_52 = t;
  t = h_52;
  if(match_cons(t, sym_Path_1))
    {
      s_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_52, i_52);
  x_0 = t;
  t = SSLsetAnnotations(x_0, o_52);
  if(match_cons(t, sym__2))
    {
      l_52 = ATgetArgument(t, 0);
      n_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(l_52, n_52, t);
  return(t);
}
static ATerm q_53 (ATerm u_52, ATerm v_52, ATerm w_52, ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL,e_53 = NULL,y_0 = NULL;
  t = SSLgetAnnotations(w_52);
  z_52 = t;
  t = SSL_is_string(u_52);
  e_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_53, v_52);
  y_0 = t;
  t = SSLsetAnnotations(y_0, z_52);
  if(match_cons(t, sym__2))
    {
      x_52 = ATgetArgument(t, 0);
      y_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(x_52, y_52, t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,n_53 = NULL;
  j_53 = t;
  if(match_cons(t, sym__2))
    {
      k_53 = ATgetArgument(t, 0);
      n_53 = ATgetArgument(t, 1);
      {
        ATerm k_23 = t;
        int l_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_53(j_53, t);
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
                  t = p_53(k_53, n_53, j_53, t);
                  LocalPopChoice(n_23);
                }
              else
                {
                  t = m_23;
                  t = q_53(k_53, n_53, j_53, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_53(j_53, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL,z_53 = NULL;
  z_53 = t;
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_53, term_q_23);
        t = j_11(t);
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        {
          ATerm x_3 = NULL,y_3 = NULL;
          t = term_s_23;
          y_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_23, z_53);
          t = h_11(y_3, z_53, t);
          x_3 = t;
          t = SSL_perror(x_3);
          _fail(t);
        }
      }
  }
  t_53 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_11(u_53, t);
  s_53 = t;
  t = t_53;
  t = fclose_0_0(t);
  t = s_53;
  return(t);
}
ATerm input_1_0 (ATerm w_168 (ATerm), ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_54 = NULL,d_54 = NULL;
      t = term_q_22;
      c_54 = t;
      t = term_v_23;
      d_54 = t;
      t = term_w_23;
      t = p_11(c_54, d_54, t);
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      t = term_x_23;
    }
  t = ReadFromFile_0_0(t);
  t = w_168(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL;
  t = term_q_22;
  e_54 = t;
  t = term_y_23;
  f_54 = t;
  t = term_a_24;
  t = p_11(e_54, f_54, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL;
  h_54 = t;
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
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
                ATerm d_24 = ATgetFirst((ATermList) t);
                ATerm e_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_54;
          }
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        t = (ATerm) ATinsert(ATempty, h_54);
      }
  }
  i_54 = t;
  t = term_t_22;
  j_54 = t;
  t = SSL_printnl(j_54, i_54);
  t = h_54;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm o_54 = NULL,r_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_54 = ATgetFirst((ATermList) t);
      r_54 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_54 = NULL,w_54 = NULL;
        static ATerm t_1 (ATerm t);
        static ATerm t_1 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_54)), not_null(w_54));
          return(t);
        }
        t = r_54;
        t = r_0(t);
        if(((v_54 != NULL) && (v_54 != t)))
          _fail(t);
        else
          v_54 = t;
        t = o_54;
        t = p_0(t);
        if(((w_54 != NULL) && (w_54 != t)))
          _fail(t);
        else
          w_54 = t;
        t = r_54;
        t = reverse_acc_2_0(p_0, t_1, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_24;
      t = r_0(t);
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL,c_4 = NULL;
  g_55 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_55);
  e_55 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_55);
  c_4 = t;
  t = SSLsetAnnotations(c_4, e_55);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm k_55 = NULL;
  k_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_55), term_h_24);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm u_170 (ATerm), ATerm v_170 (ATerm), ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL;
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_55 = NULL,d_55 = NULL;
      t = term_q_22;
      c_55 = t;
      t = term_y_23;
      d_55 = t;
      t = term_a_24;
      t = p_11(c_55, d_55, t);
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      t = fetch_1_0(u_1, t);
    }
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_170(t);
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
  a_55 = t;
  t = term_o_24;
  b_55 = t;
  t = term_p_24;
  t = p_11(a_55, b_55, t);
  t = reverse_acc_2_0(_id, v_1, t);
  t = map_1_0(y_1, t);
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_55 = NULL;
        t = v_170(t);
        l_55 = t;
        t = (ATerm) ATinsert(CheckATermList(l_55), term_t_24);
        t = echo_0_0(t);
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
      }
  }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,y_6 = NULL;
  t_55 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_55);
  r_55 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_55);
  y_6 = t;
  t = SSLsetAnnotations(y_6, r_55);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_55 = NULL;
  o_55 = t;
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_55 = NULL,q_55 = NULL;
        t = term_q_22;
        p_55 = t;
        t = term_y_23;
        q_55 = t;
        t = term_a_24;
        t = p_11(p_55, q_55, t);
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        t = fetch_1_0(z_1, t);
      }
  }
  t = o_55;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm w_55 = NULL;
  w_55 = t;
  if(match_string(t, "-k"))
    {
      t = w_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_55;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
  x_55 = t;
  t = SSL_string_to_int(x_55);
  y_55 = t;
  t = term_w_24;
  z_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_24, y_55);
  t = s_11(z_55, y_55, t);
  t = x_55;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_y_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_2, c_2, d_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm b_56 = NULL;
  b_56 = t;
  if(match_string(t, "-S"))
    {
      t = b_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_56;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL;
  t = term_z_24;
  c_56 = t;
  t = term_a_25;
  d_56 = t;
  t = term_b_25;
  t = s_11(c_56, d_56, t);
  t = term_c_25;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_d_25;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL;
  e_56 = t;
  t = SSL_string_to_int(e_56);
  f_56 = t;
  t = term_z_24;
  g_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_24, f_56);
  t = s_11(g_56, f_56, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_56);
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
  ATerm h_56 = NULL,i_56 = NULL;
  t = term_f_25;
  h_56 = t;
  t = term_f_24;
  i_56 = t;
  t = term_h_25;
  t = s_11(h_56, i_56, t);
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
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_2, f_2, j_2, t);
      LocalPopChoice(u_25);
    }
  else
    {
      t = k_25;
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_2, s_2, t_2, t);
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
static ATerm s_11 (ATerm w_51, ATerm x_51, ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL;
  t = term_q_22;
  j_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_22, w_51, x_51);
  t = lookup_table_0_1(j_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(w_51, x_51, k_56, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_22, w_51, x_51);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL;
      t = term_f_24;
      t = g_0(t);
      q_56 = t;
      t = term_n_24;
      r_56 = t;
      t = term_o_24;
      s_56 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_24, term_o_24, q_56);
      t = q_11(r_56, s_56, q_56, t);
      _fail(t);
    }
  else
    {
      ATerm v_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_56 = ATgetFirst((ATermList) t);
          p_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_56;
      t = d_0(t);
      t = term_f_24;
      t = f_0(t);
      v_56 = t;
      t = (ATerm) ATinsert(CheckATermList(p_56), v_56);
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm x_56 = NULL;
  x_56 = t;
  if(match_string(t, "-o"))
    {
      t = x_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_56;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL;
  y_56 = t;
  t = term_r_22;
  z_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_22, y_56);
  t = s_11(z_56, y_56, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_56);
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
static ATerm q_11 (ATerm h_57, ATerm i_57, ATerm g_57, ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL;
  b_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_57, i_57);
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
        t = (ATerm) ATmakeAppl(sym__2, h_57, i_57);
        t = p_11(h_57, i_57, t);
        LocalPopChoice(z_25);
      }
    else
      {
        t = y_25;
        t = (ATerm) ATempty;
      }
  }
  c_57 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_57, i_57, (ATerm) ATinsert(CheckATermList(c_57), g_57));
  t = lookup_table_0_1(h_57, t);
  f_57 = t;
  t = (ATerm) ATinsert(CheckATermList(c_57), g_57);
  d_57 = t;
  t = f_57;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(i_57, d_57, e_57, t);
  t = b_57;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL;
      t = term_f_24;
      t = o_0(t);
      t_57 = t;
      t = term_n_24;
      u_57 = t;
      t = term_o_24;
      v_57 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_24, term_o_24, t_57);
      t = q_11(u_57, v_57, t_57, t);
      _fail(t);
    }
  else
    {
      ATerm z_57 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_57 = ATgetFirst((ATermList) t);
          q_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_57;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_57 = ATgetFirst((ATermList) t);
          s_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_57;
      t = j_0(t);
      t = r_57;
      t = l_0(t);
      z_57 = t;
      t = (ATerm) ATinsert(CheckATermList(s_57), z_57);
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm b_58 = NULL;
  b_58 = t;
  if(match_string(t, "-i"))
    {
      t = b_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_58;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL;
  c_58 = t;
  t = term_v_23;
  d_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_23, c_58);
  t = s_11(d_58, c_58, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_58);
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
  ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_24;
  t = whoami_0_0(t);
  e_58 = t;
  t = term_d_26;
  g_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_26), e_58);
  h_58 = t;
  t = SSL_printnl(g_58, h_58);
  t = term_f_26;
  f_58 = t;
  t = SSL_exit(f_58);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL;
  t = term_q_22;
  i_58 = t;
  t = term_y_23;
  j_58 = t;
  t = term_a_24;
  t = p_11(i_58, j_58, t);
  return(t);
}
static ATerm k_11 (ATerm p_54, ATerm q_54, ATerm t)
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_54, q_54);
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
      t = SSL_addr(p_54, q_54);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_161 (ATerm), ATerm c_161 (ATerm), ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL;
  l_58 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_58;
      t = b_161(t);
    }
  else
    {
      ATerm q_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_58 = ATgetFirst((ATermList) t);
          n_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_58;
      t = foldr_2_0(b_161, c_161, t);
      q_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_58, q_58);
      t = c_161(t);
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
  ATerm e_4 = NULL,f_4 = NULL;
  if(match_cons(t, sym__2))
    {
      e_4 = ATgetArgument(t, 0);
      f_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(e_4, f_4, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_58 = NULL,a_4 = NULL,b_4 = NULL;
  t = times_0_0(t);
  b_4 = t;
  t = SSL_explode_term(b_4);
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4;
  t = foldr_2_0(d_3, e_3, t);
  x_58 = t;
  t = SSL_TicksToSeconds(x_58);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL;
  k_59 = t;
  if(match_cons(t, sym__2))
    {
      l_59 = ATgetArgument(t, 0);
      m_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_59;
        if((l_59 != t))
          {
            _fail(t);
          }
        t = k_59;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = (ATerm) ATmakeAppl(sym__2, l_59, m_59);
        {
          ATerm m_26 = t;
          int n_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_59, m_59);
              LocalPopChoice(n_26);
            }
          else
            {
              t = m_26;
              t = SSL_gtr(l_59, m_59);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_59, m_59);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_148 (ATerm), ATerm t)
{
  ATerm q_59 = NULL;
  q_59 = t;
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL;
        t = term_q_22;
        t_59 = t;
        t = term_z_24;
        u_59 = t;
        t = term_q_26;
        t = p_11(t_59, u_59, t);
        s_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_59, term_f_26);
        t = geq_0_0(t);
        t = q_59;
        t = x_148(t);
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = q_59;
      }
  }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,z_59 = NULL,a_60 = NULL;
  t = run_time_0_0(t);
  w_59 = t;
  t = term_f_24;
  t = whoami_0_0(t);
  x_59 = t;
  t = term_d_26;
  z_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_26), w_59), term_r_26), x_59);
  a_60 = t;
  t = SSL_printnl(z_59, a_60);
  t = (ATerm) ATmakeAppl(sym__2, term_d_26, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_26), w_59), term_r_26), x_59));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_60 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_25;
  b_60 = t;
  t = SSL_exit(b_60);
  return(t);
}
static ATerm t_11 (ATerm w_61, ATerm x_61, ATerm y_61, ATerm t)
{
  ATerm c_60 = NULL;
  t = SSL_hashtable_put(y_61, w_61, x_61);
  c_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_60);
  return(t);
}
ATerm lookup_table_0_1 (ATerm t_58, ATerm t)
{
  ATerm l_60 = NULL;
  t = table_hashtable_0_0(t);
  l_60 = t;
  {
    ATerm t_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_4 = NULL;
        t = l_60;
        if(match_cons(t, sym_Hashtable_1))
          {
            q_4 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_11(t_58, q_4, t);
        LocalPopChoice(u_26);
      }
    else
      {
        t = t_26;
        {
          ATerm v_4 = NULL;
          t = t_58;
          t = table_create_0_0(t);
          t = l_60;
          if(match_cons(t, sym_Hashtable_1))
            {
              v_4 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_11(t_58, v_4, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm e_62, ATerm f_62, ATerm t)
{
  ATerm o_60 = NULL;
  t = SSL_hashtable_create(e_62, f_62);
  o_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_60);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL,t_60 = NULL,u_60 = NULL;
  p_60 = t;
  t = term_v_26;
  t_60 = t;
  t = term_w_26;
  u_60 = t;
  t = p_60;
  t = new_hashtable_0_2(t_60, u_60, t);
  q_60 = t;
  t = p_60;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(p_60, q_60, r_60, t);
  t = p_60;
  return(t);
}
static ATerm m_11 (ATerm b_62, ATerm c_62, ATerm t)
{
  ATerm v_60 = NULL;
  t = SSL_hashtable_remove(c_62, b_62);
  v_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_60);
  return(t);
}
static ATerm n_11 (ATerm g_62, ATerm t)
{
  ATerm w_60 = NULL;
  t = SSL_hashtable_destroy(g_62);
  w_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_60);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm x_60 = NULL;
  t = SSL_table_hashtable();
  x_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_60);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL;
  y_60 = t;
  t = table_hashtable_0_0(t);
  z_60 = t;
  t = lookup_table_0_1(y_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11(b_61, t);
  t = z_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_11(y_60, a_61, t);
  t = y_60;
  return(t);
}
ATerm fetch_1_0 (ATerm d_159 (ATerm), ATerm t)
{
  static ATerm i_62 (ATerm t);
  static ATerm i_62 (ATerm t)
  {
    ATerm v_61 = NULL,d_62 = NULL,h_62 = NULL;
    v_61 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_62 = ATgetFirst((ATermList) t);
        h_62 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_26 = t;
      int y_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_5 = NULL,d_5 = NULL,a_7 = NULL;
          t = SSLgetAnnotations(v_61);
          a_5 = t;
          t = d_62;
          t = d_159(t);
          d_5 = t;
          t = (ATerm) ATinsert(CheckATermList(h_62), d_5);
          a_7 = t;
          t = SSLsetAnnotations(a_7, a_5);
          LocalPopChoice(y_26);
        }
      else
        {
          t = x_26;
          {
            ATerm l_5 = NULL,o_5 = NULL,b_7 = NULL;
            t = SSLgetAnnotations(v_61);
            l_5 = t;
            t = h_62;
            t = i_62(t);
            o_5 = t;
            t = (ATerm) ATinsert(CheckATermList(o_5), d_62);
            b_7 = t;
            t = SSLsetAnnotations(b_7, l_5);
          }
        }
    }
    return(t);
  }
  t = i_62(t);
  return(t);
}
static ATerm u_11 (ATerm z_61, ATerm a_62, ATerm t)
{
  t = SSL_hashtable_get(a_62, z_61);
  return(t);
}
static ATerm p_11 (ATerm a_59, ATerm b_59, ATerm t)
{
  ATerm l_62 = NULL;
  t = lookup_table_0_1(a_59, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(b_59, l_62, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm n_62 = NULL,o_62 = NULL;
  t = term_a_27;
  n_62 = t;
  t = term_f_24;
  o_62 = t;
  t = term_b_27;
  t = s_11(n_62, o_62, t);
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
  ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL;
  t = term_a_27;
  r_62 = t;
  t = term_f_24;
  s_62 = t;
  t = term_b_27;
  t = s_11(r_62, s_62, t);
  t = term_d_27;
  p_62 = t;
  t = term_f_24;
  q_62 = t;
  t = term_e_27;
  t = s_11(p_62, q_62, t);
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
      t = Option_3_0(h_3, i_3, l_3, t);
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
      t = Option_3_0(m_3, n_3, o_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm t)
{
  ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,e_7 = NULL;
  y_62 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_62 = ATgetFirst((ATermList) t);
      v_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_62);
  t_62 = t;
  t = u_62;
  t = v_109(t);
  w_62 = t;
  t = v_62;
  t = w_109(t);
  x_62 = t;
  t = (ATerm) ATinsert(CheckATermList(x_62), w_62);
  e_7 = t;
  t = SSLsetAnnotations(e_7, t_62);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_170 (ATerm), ATerm t)
{
  ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL,i_63 = NULL,j_63 = NULL,g_7 = NULL;
  d_63 = t;
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_27;
        t = p_170(t);
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
      }
  }
  t = d_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_63 = ATgetFirst((ATermList) t);
      g_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_63);
  e_63 = t;
  t = term_y_23;
  j_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_23, f_63);
  t = s_11(j_63, f_63, t);
  t = g_63;
  {
    static ATerm t_63 (ATerm t);
    static ATerm t_63 (ATerm t)
    {
      ATerm m_27 = t;
      int n_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_27 = t;
          int p_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_63 = NULL;
              m_63 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_63;
              LocalPopChoice(p_27);
            }
          else
            {
              t = o_27;
              t = p_170(t);
              t = Cons_2_0(_id, t_63, t);
            }
          LocalPopChoice(n_27);
        }
      else
        {
          t = m_27;
          {
            ATerm p_63 = NULL,q_63 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_63 = ATgetFirst((ATermList) t);
                q_63 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(q_63), (ATerm) ATmakeAppl(sym_Undefined_1, p_63));
          }
        }
      return(t);
    }
    t = t_63(t);
  }
  i_63 = t;
  t = (ATerm) ATinsert(CheckATermList(i_63), (ATerm) ATmakeAppl(sym_Program_1, f_63));
  g_7 = t;
  t = SSLsetAnnotations(g_7, e_63);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm g_64 = NULL;
  g_64 = t;
  if(match_string(t, "--help"))
    {
      t = g_64;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_64;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_64;
        }
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm h_64 = NULL,i_64 = NULL;
  t = term_r_27;
  h_64 = t;
  t = term_f_24;
  i_64 = t;
  t = term_s_27;
  t = s_11(h_64, i_64, t);
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
ATerm parse_options_3_0 (ATerm m_170 (ATerm), ATerm n_170 (ATerm), ATerm o_170 (ATerm), ATerm t)
{
  ATerm y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL;
  a_64 = t;
  t = term_n_24;
  b_64 = t;
  t = term_v_27;
  t = lookup_table_0_1(b_64, t);
  f_64 = t;
  t = term_o_24;
  c_64 = t;
  t = (ATerm) ATempty;
  d_64 = t;
  t = f_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(c_64, d_64, e_64, t);
  t = a_64;
  {
    static ATerm p_3 (ATerm t);
    static ATerm p_3 (ATerm t)
    {
      ATerm w_27 = t;
      int x_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_170(t);
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
        ATerm t_64 = NULL;
        t_64 = t;
        {
          ATerm c_28 = t;
          int d_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_5 = NULL;
              t = t_64;
              {
                ATerm e_28 = t;
                int f_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_5 = NULL,x_5 = NULL;
                    t = term_q_22;
                    w_5 = t;
                    t = term_r_27;
                    x_5 = t;
                    t = term_g_28;
                    t = p_11(w_5, x_5, t);
                    LocalPopChoice(f_28);
                  }
                else
                  {
                    t = e_28;
                    t = fetch_1_0(t_3, t);
                  }
              }
              t = t_64;
              t = n_170(t);
              t = term_a_25;
              v_5 = t;
              t = SSL_exit(v_5);
              LocalPopChoice(d_28);
            }
          else
            {
              t = c_28;
              {
                ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL;
                t = term_q_22;
                c_6 = t;
                t = term_a_27;
                d_6 = t;
                t = term_h_28;
                t = p_11(c_6, d_6, t);
                t = t_64;
                t = o_170(t);
                t = term_a_25;
                b_6 = t;
                t = SSL_exit(b_6);
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
          int k_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL;
              static ATerm u_3 (ATerm t);
              static ATerm u_3 (ATerm t)
              {
                ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL,i_7 = NULL;
                z_64 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_64 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_64);
                x_64 = t;
                t = y_64;
                if(((y_63 != NULL) && (y_63 != t)))
                  _fail(t);
                else
                  y_63 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_64);
                i_7 = t;
                t = SSLsetAnnotations(i_7, x_64);
                return(t);
              }
              t = fetch_1_0(u_3, t);
              t = term_d_26;
              v_64 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_63)), term_l_28);
              w_64 = t;
              t = SSL_printnl(v_64, w_64);
              t = (ATerm) ATmakeAppl(sym__2, term_d_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_63)), term_l_28));
              t = n_170(t);
              t = term_f_26;
              u_64 = t;
              t = SSL_exit(u_64);
              LocalPopChoice(k_28);
            }
          else
            {
              t = i_28;
            }
        }
      }
  }
  z_63 = t;
  t = term_n_24;
  t = table_destroy_0_0(t);
  t = z_63;
  return(t);
}
ATerm option_wrap_5_0 (ATerm p_168 (ATerm), ATerm q_168 (ATerm), ATerm r_168 (ATerm), ATerm s_168 (ATerm), ATerm t_168 (ATerm), ATerm t)
{
  ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL;
  t = parse_options_3_0(p_168, q_168, r_168, t);
  e_65 = t;
  t = term_m_28;
  t = table_create_0_0(t);
  t = term_m_28;
  f_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_28, term_n_28, e_65);
  t = lookup_table_0_1(f_65, t);
  i_65 = t;
  t = term_n_28;
  g_65 = t;
  t = i_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(g_65, e_65, h_65, t);
  t = e_65;
  t = s_168(t);
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_168(t);
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
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(s_28);
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
                  t = Option_3_0(z_3, d_4, g_4, t);
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
static ATerm w_3 (ATerm t)
{
  t = input_1_0(h_4, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm n_65 = NULL,o_65 = NULL;
  t = term_x_22;
  n_65 = t;
  t = term_f_24;
  o_65 = t;
  t = term_a_29;
  t = s_11(n_65, o_65, t);
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
  ATerm q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,o_7 = NULL,n_7 = NULL,m_7 = NULL,l_7 = NULL;
  e_66 = t;
  if(match_cons(t, sym_Specification_1))
    {
      r_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_66);
  q_65 = t;
  t = r_65;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_65 = ATgetFirst((ATermList) t);
      u_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_65);
  s_65 = t;
  t = u_65;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_65 = ATgetFirst((ATermList) t);
      y_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_65);
  w_65 = t;
  t = x_65;
  if(match_cons(t, sym_Strategies_1))
    {
      b_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_65);
  a_66 = t;
  t = b_66;
  t = map_1_0(j_4, t);
  c_66 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, c_66);
  l_7 = t;
  t = SSLsetAnnotations(l_7, a_66);
  d_66 = t;
  t = y_65;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_65), d_66);
  m_7 = t;
  t = SSLsetAnnotations(m_7, w_65);
  z_65 = t;
  t = (ATerm) ATinsert(CheckATermList(z_65), t_65);
  n_7 = t;
  t = SSLsetAnnotations(n_7, s_65);
  v_65 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, v_65);
  o_7 = t;
  t = SSLsetAnnotations(o_7, q_65);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL;
  x_66 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      t_66 = ATgetArgument(t, 0);
      u_66 = ATgetArgument(t, 1);
      v_66 = ATgetArgument(t, 2);
      w_66 = ATgetArgument(t, 3);
      {
        ATerm d_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_6 = NULL,p_6 = NULL,k_7 = NULL;
            t = SSLgetAnnotations(x_66);
            k_6 = t;
            t = w_66;
            t = simplify_0_0(t);
            t = alltd_1_0(k_4, t);
            p_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, t_66, u_66, v_66, p_6);
            k_7 = t;
            t = SSLsetAnnotations(k_7, k_6);
            LocalPopChoice(e_29);
          }
        else
          {
            t = d_29;
            t = x_66;
          }
      }
    }
  else
    {
      t = x_66;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL;
  s_6 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_6);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_29 = ATgetFirst((ATermList) t);
      ATerm g_29 = (ATerm) ATgetNext((ATermList) t);
      if(((ATgetType(g_29) != AT_LIST) || !(ATisEmpty(g_29))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, r_6);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(v_3, default_system_usage_0_0, default_system_about_0_0, _id, w_3, t);
  return(t);
}

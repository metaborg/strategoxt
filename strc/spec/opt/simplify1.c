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
static ATerm term_y_28;
static ATerm term_x_28;
static ATerm term_w_28;
static ATerm term_j_28;
static ATerm term_i_28;
static ATerm term_h_28;
static ATerm term_e_28;
static ATerm term_d_28;
static ATerm term_r_27;
static ATerm term_q_27;
static ATerm term_p_27;
static ATerm term_o_27;
static ATerm term_n_27;
static ATerm term_i_27;
static ATerm term_d_27;
static ATerm term_c_27;
static ATerm term_b_27;
static ATerm term_a_27;
static ATerm term_y_26;
static ATerm term_x_26;
static ATerm term_w_26;
static ATerm term_t_26;
static ATerm term_s_26;
static ATerm term_p_26;
static ATerm term_o_26;
static ATerm term_n_26;
static ATerm term_c_26;
static ATerm term_b_26;
static ATerm term_a_26;
static ATerm term_z_25;
static ATerm term_u_25;
static ATerm term_f_25;
static ATerm term_e_25;
static ATerm term_d_25;
static ATerm term_c_25;
static ATerm term_b_25;
static ATerm term_a_25;
static ATerm term_z_24;
static ATerm term_y_24;
static ATerm term_w_24;
static ATerm term_v_24;
static ATerm term_u_24;
static ATerm term_t_24;
static ATerm term_l_24;
static ATerm term_k_24;
static ATerm term_j_24;
static ATerm term_i_24;
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
static ATerm term_m_22;
static ATerm term_l_22;
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
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_m_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_r_22);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_p_23);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_t_23);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym__2, term_i_24, term_j_24);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym__2, term_v_24, term_w_24);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_24);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym__2, term_c_25, term_z_23);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_v_24);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_w_26, term_z_23);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym__2, term_a_27, term_z_23);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym__2, term_n_27, term_z_23);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym__3, term_i_24, term_j_24, (ATerm) ATempty);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_n_27);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_w_26);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_z_23);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm bottomup_1_0 (ATerm a_137 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm d_138 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm a_160 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm e_2 (ATerm i_1, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm z_136 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm q_141 (ATerm), ATerm r_141 (ATerm), ATerm s_141 (ATerm), ATerm t_141 (ATerm), ATerm t);
static ATerm t_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm simplify_0_0 (ATerm t);
ATerm map_1_0 (ATerm l_159 (ATerm), ATerm t);
static ATerm c_11 (ATerm w_47, ATerm x_47, ATerm t);
static ATerm d_11 (ATerm l_53, ATerm m_53, ATerm t);
static ATerm f_11 (ATerm s_151 (ATerm), ATerm b_491, ATerm r_53, ATerm t);
static ATerm e_11 (ATerm h_53, ATerm i_53, ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm output_1_0 (ATerm l_169 (ATerm), ATerm t);
static ATerm p_51 (ATerm j_51, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_11 (ATerm n_53, ATerm t);
static ATerm h_11 (ATerm c_46, ATerm d_46, ATerm t);
static ATerm i_11 (ATerm y_47, ATerm z_47, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm f_53 (ATerm z_51, ATerm t);
static ATerm g_53 (ATerm f_52, ATerm g_52, ATerm h_52, ATerm t);
static ATerm j_53 (ATerm s_52, ATerm t_52, ATerm u_52, ATerm t);
static ATerm j_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm m_169 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm default_system_usage_2_0 (ATerm k_171 (ATerm), ATerm l_171 (ATerm), ATerm t);
static ATerm z_1 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm s_11 (ATerm b_52, ATerm c_52, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_11 (ATerm m_57, ATerm n_57, ATerm l_57, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_11 (ATerm u_54, ATerm v_54, ATerm t);
ATerm foldr_2_0 (ATerm r_161 (ATerm), ATerm s_161 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_149 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm t_11 (ATerm b_62, ATerm c_62, ATerm d_62, ATerm t);
ATerm lookup_table_0_1 (ATerm y_58, ATerm t);
ATerm new_hashtable_0_2 (ATerm j_62, ATerm k_62, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm m_11 (ATerm g_62, ATerm h_62, ATerm t);
static ATerm n_11 (ATerm l_62, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm t_159 (ATerm), ATerm t);
static ATerm u_11 (ATerm e_62, ATerm f_62, ATerm t);
static ATerm p_11 (ATerm f_59, ATerm g_59, ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm f_171 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm parse_options_3_0 (ATerm c_171 (ATerm), ATerm d_171 (ATerm), ATerm e_171 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm f_169 (ATerm), ATerm g_169 (ATerm), ATerm h_169 (ATerm), ATerm i_169 (ATerm), ATerm j_169 (ATerm), ATerm t);
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
ATerm bottomup_1_0 (ATerm a_137 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    t = bottomup_1_0(a_137, t);
    return(t);
  }
  t = SRTS_all(a_0, t);
  t = a_137(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm d_138 (ATerm), ATerm t)
{
  static ATerm o_2 (ATerm t);
  static ATerm o_2 (ATerm t)
  {
    ATerm j_4 = t;
    int k_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_138(t);
        LocalPopChoice(k_4);
      }
    else
      {
        t = j_4;
        t = SRTS_one(o_2, t);
      }
    return(t);
  }
  t = o_2(t);
  return(t);
}
ATerm at_end_1_0 (ATerm a_160 (ATerm), ATerm t)
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
          ATerm f_1 = NULL,j_1 = NULL,n_0 = NULL;
          t = SSLgetAnnotations(c_1);
          f_1 = t;
          t = b_1;
          t = d_1(t);
          j_1 = t;
          t = (ATerm) ATinsert(CheckATermList(j_1), z_0);
          n_0 = t;
          t = SSLsetAnnotations(n_0, f_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_1;
        t = a_160(t);
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
static ATerm e_2 (ATerm i_1, ATerm t)
{
  ATerm m_1 = NULL;
  t = SSL_explode_term(i_1);
  if(match_cons(t, sym__2))
    {
      ATerm l_4 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_4) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL,x_1 = NULL;
  x_1 = t;
  if(match_cons(t, sym__2))
    {
      r_1 = ATgetArgument(t, 0);
      s_1 = ATgetArgument(t, 1);
      {
        ATerm m_4 = t;
        int n_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm i_0 (ATerm t);
            static ATerm i_0 (ATerm t)
            {
              t = s_1;
              return(t);
            }
            t = r_1;
            t = at_end_1_0(i_0, t);
            LocalPopChoice(n_4);
          }
        else
          {
            t = m_4;
            t = e_2(x_1, t);
          }
      }
    }
  else
    {
      t = e_2(x_1, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm z_136 (ATerm), ATerm t)
{
  static ATerm m_0 (ATerm t);
  static ATerm m_0 (ATerm t)
  {
    t = topdown_1_0(z_136, t);
    return(t);
  }
  t = z_136(t);
  t = SRTS_all(m_0, t);
  return(t);
}
ATerm genzip_4_0 (ATerm q_141 (ATerm), ATerm r_141 (ATerm), ATerm s_141 (ATerm), ATerm t_141 (ATerm), ATerm t)
{
  static ATerm n_2 (ATerm t);
  static ATerm n_2 (ATerm t)
  {
    ATerm o_4 = t;
    int q_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_141(t);
        LocalPopChoice(q_4);
      }
    else
      {
        t = o_4;
        {
          ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,s_0 = NULL;
          t = r_141(t);
          m_2 = t;
          if(match_cons(t, sym__2))
            {
              h_2 = ATgetArgument(t, 0);
              i_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_2);
          g_2 = t;
          t = h_2;
          t = t_141(t);
          k_2 = t;
          t = i_2;
          t = n_2(t);
          l_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_2, l_2);
          s_0 = t;
          t = SSLsetAnnotations(s_0, g_2);
          t = s_141(t);
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
  ATerm x_18 = NULL,z_18 = NULL;
  if(match_cons(t, sym__2))
    {
      x_18 = ATgetArgument(t, 0);
      z_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_18), (ATerm) ATmakeAppl(sym_Match_1, z_18));
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
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_4 = ATgetArgument(t, 0);
      if(((ATgetType(y_4) == AT_LIST) && !(ATisEmpty(y_4))))
        {
          m_25 = ATgetFirst((ATermList) y_4);
          n_25 = (ATerm) ATgetNext((ATermList) y_4);
        }
      else
        _fail(t);
      {
        ATerm a_5 = ATgetArgument(t, 1);
        if(((ATgetType(a_5) == AT_LIST) && !(ATisEmpty(a_5))))
          {
            o_25 = ATgetFirst((ATermList) a_5);
            p_25 = (ATerm) ATgetNext((ATermList) a_5);
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
        ATerm u_37 = NULL,v_37 = NULL;
        u_37 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm f_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        v_37 = t;
        t = SSLgetAnnotations(u_37);
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
static ATerm n_1 (ATerm t)
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
    ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,l_11 = NULL,o_11 = NULL,r_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL;
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
                                ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,z_13 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,m_14 = NULL;
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
                                c_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, c_14);
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
                                r_11 = ATgetArgument(t, 1);
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
                                                                t = (ATerm) ATmakeAppl(sym__2, v_11, r_11);
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
                                                              ATerm w_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                              t = q_0(t);
                                                              w_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, w_20);
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
                                                                  ATerm k_22 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                                  t = q_0(t);
                                                                  k_22 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, k_22);
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
                                                              ATerm h_24 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                              t = q_0(t);
                                                              h_24 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, h_24);
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
                                                      ATerm s_24 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                      t = q_0(t);
                                                      s_24 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, s_24);
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
                                                          ATerm x_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                          t = q_0(t);
                                                          x_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, x_24);
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
                                                  ATerm g_25 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                  t = q_0(t);
                                                  g_25 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, g_25);
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
                                                                ATerm l_25 = NULL;
                                                                t = b_12;
                                                                if((a_12 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, v_11, w_11);
                                                                t = genzip_4_0(e_1, g_1, h_1, k_1, t);
                                                                l_25 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, a_12, v_11)));
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
                                                              ATerm j_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                              t = q_0(t);
                                                              j_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, j_26);
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
                                                  ATerm z_26 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                  t = q_0(t);
                                                  z_26 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, z_26);
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
                                                              ATerm t_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                              t = q_0(t);
                                                              t_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, t_27);
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
                                                      ATerm m_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                      t = q_0(t);
                                                      m_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, m_28);
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
                                                                  ATerm r_28 = NULL;
                                                                  t = b_12;
                                                                  if((a_12 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, a_12);
                                                                  t = q_0(t);
                                                                  r_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, r_28);
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
                                                                  ATerm a_29 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                                  t = q_0(t);
                                                                  a_29 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, a_29);
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
                                            ATerm a_14 = t;
                                            int b_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_y_5;
                                                t = q_0(t);
                                                LocalPopChoice(b_14);
                                              }
                                            else
                                              {
                                                t = a_14;
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
                                                      ATerm q_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                      t = q_0(t);
                                                      q_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, q_29);
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
                                                              ATerm b_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                              t = q_0(t);
                                                              b_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, b_30);
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
                                                      ATerm o_30 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                      t = q_0(t);
                                                      o_30 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, o_30);
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
                                                              ATerm z_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                              t = q_0(t);
                                                              z_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, z_30);
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
                                                          ATerm l_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, d_12);
                                                          t = q_0(t);
                                                          l_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, c_12, l_31);
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
                                                          ATerm q_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                          t = q_0(t);
                                                          q_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, q_31);
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
                                                                ATerm u_31 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, d_12);
                                                                t = q_0(t);
                                                                u_31 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, c_12, u_31);
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
                                                              ATerm f_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, d_12);
                                                              t = q_0(t);
                                                              f_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, c_12, f_32);
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
                                                                    ATerm j_32 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                                    t = q_0(t);
                                                                    j_32 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, j_32);
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
                                                            ATerm q_32 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, d_12);
                                                            t = q_0(t);
                                                            q_32 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, c_12, q_32);
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
                                                              ATerm i_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, d_12);
                                                              t = q_0(t);
                                                              i_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, i_33);
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
                                                                    ATerm s_33 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, d_12);
                                                                    t = q_0(t);
                                                                    s_33 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, s_33);
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
                                                                  ATerm z_33 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, d_12);
                                                                  t = q_0(t);
                                                                  z_33 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, z_33);
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
                                                                        ATerm d_34 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                                        t = q_0(t);
                                                                        d_34 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, d_34);
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
                                                                ATerm m_34 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, d_12);
                                                                t = q_0(t);
                                                                m_34 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, m_34);
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
                                                              ATerm y_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                              t = q_0(t);
                                                              y_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, y_34);
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
                                                                  ATerm h_35 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, g_12);
                                                                  t = q_0(t);
                                                                  h_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, h_35);
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
                                          ATerm p_37 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, f_12, g_12);
                                          t = q_0(t);
                                          p_37 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, e_12, p_37);
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
                                                    t = topdown_1_0(l_1, t);
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
                                            ATerm s_38 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, h_12, c_12);
                                            t = conc_0_0(t);
                                            s_38 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, s_38, d_12);
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
                                                  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL;
                                                  t = i_12;
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
                                                  t = h_12;
                                                  t = bottomup_1_0(q_0, t);
                                                  i_39 = t;
                                                  t = d_39;
                                                  t = bottomup_1_0(q_0, t);
                                                  n_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, n_39);
                                                  t = q_0(t);
                                                  k_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, k_39);
                                                  t = q_0(t);
                                                  j_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_39, j_39);
                                                  t = q_0(t);
                                                  h_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_39, h_39);
                                                  t = q_0(t);
                                                  f_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, e_39, f_39);
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
                                                      ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL;
                                                      t = i_12;
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
                                                      t = h_12;
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
                                                    b_11 = ATgetArgument(t, 1);
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
                                                              int w_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, a_11);
                                                                  t = q_0(t);
                                                                  n_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_40, b_11);
                                                                  t = q_0(t);
                                                                  m_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_12, m_40);
                                                                  t = q_0(t);
                                                                  l_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, l_40);
                                                                  t = q_0(t);
                                                                  LocalPopChoice(w_18);
                                                                }
                                                              else
                                                                {
                                                                  t = v_18;
                                                                  {
                                                                    ATerm y_18 = t;
                                                                    int a_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm p_40 = NULL,q_40 = NULL,s_40 = NULL,t_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL;
                                                                        t = i_12;
                                                                        t = new_0_0(t);
                                                                        p_40 = t;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        c_41 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = q_0(t);
                                                                        d_41 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(d_41), c_41);
                                                                        t = q_0(t);
                                                                        q_40 = t;
                                                                        t = p_40;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        b_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, b_41);
                                                                        t = q_0(t);
                                                                        a_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, a_41);
                                                                        t = q_0(t);
                                                                        t_40 = t;
                                                                        t = h_12;
                                                                        t = bottomup_1_0(q_0, t);
                                                                        w_40 = t;
                                                                        t = p_40;
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
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_40, v_40);
                                                                        t = q_0(t);
                                                                        s_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, q_40, s_40);
                                                                        t = q_0(t);
                                                                        LocalPopChoice(a_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_18;
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
                                                                ATerm h_41 = NULL,i_41 = NULL,k_41 = NULL,l_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL;
                                                                t = i_12;
                                                                t = new_0_0(t);
                                                                h_41 = t;
                                                                t = bottomup_1_0(q_0, t);
                                                                u_41 = t;
                                                                t = (ATerm) ATempty;
                                                                t = q_0(t);
                                                                v_41 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(v_41), u_41);
                                                                t = q_0(t);
                                                                i_41 = t;
                                                                t = h_41;
                                                                t = bottomup_1_0(q_0, t);
                                                                t_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, t_41);
                                                                t = q_0(t);
                                                                s_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, s_41);
                                                                t = q_0(t);
                                                                l_41 = t;
                                                                t = h_12;
                                                                t = bottomup_1_0(q_0, t);
                                                                o_41 = t;
                                                                t = h_41;
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
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, l_41, n_41);
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
                                                              ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL;
                                                              t = i_12;
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
                                                              t = h_12;
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
                                                          ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
                                                          t = i_12;
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
                                                          t = h_12;
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
                                                                ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL;
                                                                t = i_12;
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
                                                                t = h_12;
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
                                                        ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL;
                                                        t = i_12;
                                                        t = new_0_0(t);
                                                        t_43 = t;
                                                        t = bottomup_1_0(q_0, t);
                                                        e_44 = t;
                                                        t = (ATerm) ATempty;
                                                        t = q_0(t);
                                                        f_44 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(f_44), e_44);
                                                        t = q_0(t);
                                                        u_43 = t;
                                                        t = t_43;
                                                        t = bottomup_1_0(q_0, t);
                                                        d_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, d_44);
                                                        t = q_0(t);
                                                        c_44 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, c_44);
                                                        t = q_0(t);
                                                        w_43 = t;
                                                        t = h_12;
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
                                                                t = fetch_1_0(n_1, t);
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
                                                                                    ATerm b_46 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, f_12);
                                                                                    t = q_0(t);
                                                                                    b_46 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, e_12, b_46);
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
                                                                                  ATerm x_20 = t;
                                                                                  int y_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_y_5;
                                                                                      t = q_0(t);
                                                                                      LocalPopChoice(y_20);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = x_20;
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
                                                                                        ATerm j_46 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, f_12);
                                                                                        t = q_0(t);
                                                                                        j_46 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, e_12, j_46);
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
                                                                                            ATerm p_46 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, f_12);
                                                                                            t = q_0(t);
                                                                                            p_46 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, e_12, p_46);
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
                                                                                            ATerm w_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL;
                                                                                            t = term_j_21;
                                                                                            t = bottomup_1_0(q_0, t);
                                                                                            y_46 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = q_0(t);
                                                                                            b_47 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(b_47), y_10);
                                                                                            t = q_0(t);
                                                                                            a_47 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(a_47), h_12);
                                                                                            t = q_0(t);
                                                                                            z_46 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, y_46, z_46);
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
                                                                                                ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, g_12);
                                                                                                t = q_0(t);
                                                                                                h_47 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, y_10);
                                                                                                t = q_0(t);
                                                                                                k_47 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = q_0(t);
                                                                                                l_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(l_47), k_47);
                                                                                                t = q_0(t);
                                                                                                j_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(j_47), h_12);
                                                                                                t = q_0(t);
                                                                                                i_47 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(i_47), h_47);
                                                                                                t = q_0(t);
                                                                                                g_47 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, g_47);
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
                                                                                                    ATerm p_47 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, g_12);
                                                                                                    t = q_0(t);
                                                                                                    p_47 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, h_12, p_47);
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
                                                                                                        ATerm t_47 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, h_12);
                                                                                                        t = q_0(t);
                                                                                                        t_47 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_47, g_12);
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
                                                                                                            ATerm d_48 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, g_12);
                                                                                                            t = q_0(t);
                                                                                                            d_48 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, d_48, h_12);
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
                                                                                                                      ATerm p_48 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, h_12, c_12);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      p_48 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, p_48, d_12);
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
                                                                                                                                              l_11 = ATgetArgument(t, 2);
                                                                                                                                              o_11 = ATgetArgument(t, 3);
                                                                                                                                              t = l_11;
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
                                                                                                                                                          t = o_11;
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
                                                                                                                                                          t = o_11;
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
ATerm map_1_0 (ATerm l_159 (ATerm), ATerm t)
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
        ATerm f_3 = NULL,i_3 = NULL,j_3 = NULL,u_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_50 = ATgetFirst((ATermList) t);
            h_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_50);
        f_3 = t;
        t = g_50;
        t = l_159(t);
        i_3 = t;
        t = h_50;
        t = i_50(t);
        j_3 = t;
        t = (ATerm) ATinsert(CheckATermList(j_3), i_3);
        u_0 = t;
        t = SSLsetAnnotations(u_0, f_3);
      }
    return(t);
  }
  t = i_50(t);
  return(t);
}
static ATerm c_11 (ATerm w_47, ATerm x_47, ATerm t)
{
  ATerm k_50 = NULL;
  t = SSL_fputc(w_47, x_47);
  k_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_50);
  return(t);
}
static ATerm d_11 (ATerm l_53, ATerm m_53, ATerm t)
{
  ATerm l_50 = NULL;
  t = SSL_write_term_to_stream_text(l_53, m_53);
  l_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_50);
  return(t);
}
static ATerm f_11 (ATerm s_151 (ATerm), ATerm b_491, ATerm r_53, ATerm t)
{
  ATerm m_50 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_491, term_c_22);
  t = j_11(t);
  m_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_50, r_53);
  t = s_151(t);
  t = fclose_0_0(t);
  t = r_53;
  return(t);
}
static ATerm e_11 (ATerm h_53, ATerm i_53, ATerm t)
{
  ATerm n_50 = NULL;
  t = SSL_write_term_to_stream_baf(h_53, i_53);
  n_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_50);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_22 = ATgetArgument(t, 0);
      if(match_cons(f_22, sym_Stream_1))
        {
          u_50 = ATgetArgument(f_22, 0);
        }
      else
        _fail(t);
      v_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(u_50, v_50, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL,a_51 = NULL,b_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_22 = ATgetArgument(t, 0);
      if(match_cons(g_22, sym_Stream_1))
        {
          a_51 = ATgetArgument(g_22, 0);
        }
      else
        _fail(t);
      b_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(a_51, b_51, t);
  w_50 = t;
  t = term_h_22;
  x_50 = t;
  t = w_50;
  if(match_cons(t, sym_Stream_1))
    {
      y_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_22, w_50);
  t = c_11(x_50, y_50, t);
  return(t);
}
ATerm output_1_0 (ATerm l_169 (ATerm), ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL;
  t = l_169(t);
  p_50 = t;
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_50 = NULL,r_50 = NULL;
        t = term_l_22;
        q_50 = t;
        t = term_m_22;
        r_50 = t;
        t = term_n_22;
        t = p_11(q_50, r_50, t);
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        t = term_o_22;
      }
  }
  o_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_50, p_50);
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_50 = NULL,t_50 = NULL;
        t = term_l_22;
        s_50 = t;
        t = term_r_22;
        t_50 = t;
        t = term_s_22;
        t = p_11(s_50, t_50, t);
        t = (ATerm) ATmakeAppl(sym__2, o_50, p_50);
        LocalPopChoice(q_22);
        if(match_cons(t, sym__2))
          {
            ATerm t_22 = ATgetArgument(t, 0);
            ATerm u_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_11(p_1, o_50, p_50, t);
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
        t = f_11(q_1, o_50, p_50, t);
      }
  }
  return(t);
}
static ATerm p_51 (ATerm j_51, ATerm t)
{
  t = SSL_fclose(j_51);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL;
  n_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_51 = ATgetArgument(t, 0);
      {
        ATerm y_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_51);
            LocalPopChoice(a_23);
          }
        else
          {
            t = y_22;
            t = p_51(n_51, t);
          }
      }
    }
  else
    {
      t = p_51(n_51, t);
    }
  return(t);
}
static ATerm g_11 (ATerm n_53, ATerm t)
{
  t = SSL_read_term_from_stream(n_53);
  return(t);
}
static ATerm h_11 (ATerm c_46, ATerm d_46, ATerm t)
{
  t = SSL_strcat(c_46, d_46);
  return(t);
}
static ATerm i_11 (ATerm y_47, ATerm z_47, ATerm t)
{
  ATerm q_51 = NULL;
  t = SSL_fopen(y_47, z_47);
  q_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_51);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_51 = NULL;
  t = SSL_stdin_stream();
  r_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_51);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_51 = NULL;
  t = SSL_stdout_stream();
  s_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_51);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_51 = NULL;
  t = SSL_stderr_stream();
  t_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_51);
  return(t);
}
static ATerm f_53 (ATerm z_51, ATerm t)
{
  ATerm a_52 = NULL;
  t = SSL_explode_term(z_51);
  if(match_cons(t, sym__2))
    {
      ATerm b_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_23 = ATgetArgument(t, 1);
        if(((ATgetType(c_23) == AT_LIST) && !(ATisEmpty(c_23))))
          {
            a_52 = ATgetFirst((ATermList) c_23);
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
  t = a_52;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_52;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_52;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_52;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_53 (ATerm f_52, ATerm g_52, ATerm h_52, ATerm t)
{
  ATerm i_52 = NULL,k_52 = NULL,l_52 = NULL,q_52 = NULL,w_0 = NULL;
  t = SSLgetAnnotations(h_52);
  l_52 = t;
  t = f_52;
  if(match_cons(t, sym_Path_1))
    {
      q_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_52, g_52);
  w_0 = t;
  t = SSLsetAnnotations(w_0, l_52);
  if(match_cons(t, sym__2))
    {
      i_52 = ATgetArgument(t, 0);
      k_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(i_52, k_52, t);
  return(t);
}
static ATerm j_53 (ATerm s_52, ATerm t_52, ATerm u_52, ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL,a_53 = NULL,x_0 = NULL;
  t = SSLgetAnnotations(u_52);
  x_52 = t;
  t = SSL_is_string(s_52);
  a_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_53, t_52);
  x_0 = t;
  t = SSLsetAnnotations(x_0, x_52);
  if(match_cons(t, sym__2))
    {
      v_52 = ATgetArgument(t, 0);
      w_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(v_52, w_52, t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL;
  c_53 = t;
  if(match_cons(t, sym__2))
    {
      d_53 = ATgetArgument(t, 0);
      e_53 = ATgetArgument(t, 1);
      {
        ATerm f_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_53(c_53, t);
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
                  t = g_53(d_53, e_53, c_53, t);
                  LocalPopChoice(i_23);
                }
              else
                {
                  t = h_23;
                  t = j_53(d_53, e_53, c_53, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_53(c_53, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL,s_53 = NULL,x_53 = NULL;
  x_53 = t;
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_53, term_l_23);
        t = j_11(t);
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        {
          ATerm w_3 = NULL,x_3 = NULL;
          t = term_m_23;
          x_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_23, x_53);
          t = h_11(x_3, x_53, t);
          w_3 = t;
          t = SSL_perror(w_3);
          _fail(t);
        }
      }
  }
  p_53 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_11(s_53, t);
  o_53 = t;
  t = p_53;
  t = fclose_0_0(t);
  t = o_53;
  return(t);
}
ATerm input_1_0 (ATerm m_169 (ATerm), ATerm t)
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_54 = NULL,b_54 = NULL;
      t = term_l_22;
      a_54 = t;
      t = term_p_23;
      b_54 = t;
      t = term_r_23;
      t = p_11(a_54, b_54, t);
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      t = term_s_23;
    }
  t = ReadFromFile_0_0(t);
  t = m_169(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL;
  t = term_l_22;
  c_54 = t;
  t = term_t_23;
  d_54 = t;
  t = term_u_23;
  t = p_11(c_54, d_54, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
  f_54 = t;
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_54;
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
            t = f_54;
          }
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        t = (ATerm) ATinsert(ATempty, f_54);
      }
  }
  g_54 = t;
  t = term_o_22;
  h_54 = t;
  t = SSL_printnl(h_54, g_54);
  t = f_54;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_54 = ATgetFirst((ATermList) t);
      n_54 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_54 = NULL,s_54 = NULL;
        static ATerm t_1 (ATerm t);
        static ATerm t_1 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_54)), not_null(s_54));
          return(t);
        }
        t = n_54;
        t = r_0(t);
        if(((r_54 != NULL) && (r_54 != t)))
          _fail(t);
        else
          r_54 = t;
        t = m_54;
        t = p_0(t);
        if(((s_54 != NULL) && (s_54 != t)))
          _fail(t);
        else
          s_54 = t;
        t = n_54;
        t = reverse_acc_2_0(p_0, t_1, t);
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
static ATerm u_1 (ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL,b_4 = NULL;
  f_55 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_55);
  d_55 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_55);
  b_4 = t;
  t = SSLsetAnnotations(b_4, d_55);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm j_55 = NULL;
  j_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_55), term_b_24);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm k_171 (ATerm), ATerm l_171 (ATerm), ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL;
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_55 = NULL,c_55 = NULL;
      t = term_l_22;
      b_55 = t;
      t = term_t_23;
      c_55 = t;
      t = term_u_23;
      t = p_11(b_55, c_55, t);
      LocalPopChoice(d_24);
    }
  else
    {
      t = c_24;
      t = fetch_1_0(u_1, t);
    }
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_171(t);
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
  t = term_i_24;
  z_54 = t;
  t = term_j_24;
  a_55 = t;
  t = term_k_24;
  t = p_11(z_54, a_55, t);
  t = reverse_acc_2_0(_id, v_1, t);
  t = map_1_0(y_1, t);
  t = term_l_24;
  t = echo_0_0(t);
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_171(t);
        {
          ATerm o_24 = t;
          int p_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_55 = NULL;
              k_55 = t;
              t = SSL_is_string(k_55);
              t = k_55;
              LocalPopChoice(p_24);
              {
                ATerm l_55 = NULL;
                l_55 = t;
                t = (ATerm) ATinsert(ATempty, l_55);
              }
            }
          else
            {
              t = o_24;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
      }
  }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_6 = NULL;
  u_55 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_55);
  s_55 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_55);
  v_6 = t;
  t = SSLsetAnnotations(v_6, s_55);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_55 = NULL;
  p_55 = t;
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_55 = NULL,r_55 = NULL;
        t = term_l_22;
        q_55 = t;
        t = term_t_23;
        r_55 = t;
        t = term_u_23;
        t = p_11(q_55, r_55, t);
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        t = fetch_1_0(z_1, t);
      }
  }
  t = p_55;
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
static ATerm b_2 (ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
  x_55 = t;
  t = SSL_string_to_int(x_55);
  y_55 = t;
  t = term_t_24;
  z_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_24, y_55);
  t = s_11(z_55, y_55, t);
  t = x_55;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_2, b_2, c_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
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
static ATerm f_2 (ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL;
  t = term_v_24;
  d_56 = t;
  t = term_w_24;
  e_56 = t;
  t = term_y_24;
  t = s_11(d_56, e_56, t);
  t = term_z_24;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_a_25;
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
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
  f_56 = t;
  t = SSL_string_to_int(f_56);
  g_56 = t;
  t = term_v_24;
  h_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_24, g_56);
  t = s_11(h_56, g_56, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_56);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_b_25;
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
  ATerm i_56 = NULL,j_56 = NULL;
  t = term_c_25;
  i_56 = t;
  t = term_z_23;
  j_56 = t;
  t = term_d_25;
  t = s_11(i_56, j_56, t);
  t = term_e_25;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_f_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_2, f_2, j_2, t);
      LocalPopChoice(i_25);
    }
  else
    {
      t = h_25;
      {
        ATerm j_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_2, r_2, s_2, t);
            LocalPopChoice(k_25);
          }
        else
          {
            t = j_25;
            t = Option_3_0(t_2, u_2, v_2, t);
          }
      }
    }
  return(t);
}
static ATerm s_11 (ATerm b_52, ATerm c_52, ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL;
  t = term_l_22;
  k_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_22, b_52, c_52);
  t = lookup_table_0_1(k_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(b_52, c_52, l_56, t);
  t = (ATerm) ATmakeAppl(sym__3, term_l_22, b_52, c_52);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL;
      t = term_z_23;
      t = g_0(t);
      r_56 = t;
      t = term_i_24;
      s_56 = t;
      t = term_j_24;
      t_56 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_24, term_j_24, r_56);
      t = q_11(s_56, t_56, r_56, t);
      _fail(t);
    }
  else
    {
      ATerm w_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_56 = ATgetFirst((ATermList) t);
          q_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_56;
      t = d_0(t);
      t = term_z_23;
      t = f_0(t);
      w_56 = t;
      t = (ATerm) ATinsert(CheckATermList(q_56), w_56);
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
  t = term_m_22;
  a_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_22, z_56);
  t = s_11(a_57, z_56, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_56);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_u_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_2, x_2, y_2, t);
  return(t);
}
static ATerm q_11 (ATerm m_57, ATerm n_57, ATerm l_57, ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL;
  c_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_57, n_57);
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_25 = ATgetArgument(t, 0);
            ATerm y_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_57, n_57);
        t = p_11(m_57, n_57, t);
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        t = (ATerm) ATempty;
      }
  }
  d_57 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_57, n_57, (ATerm) ATinsert(CheckATermList(d_57), l_57));
  t = lookup_table_0_1(m_57, t);
  g_57 = t;
  t = (ATerm) ATinsert(CheckATermList(d_57), l_57);
  e_57 = t;
  t = g_57;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(n_57, e_57, f_57, t);
  t = c_57;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL;
      t = term_z_23;
      t = o_0(t);
      u_57 = t;
      t = term_i_24;
      v_57 = t;
      t = term_j_24;
      w_57 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_24, term_j_24, u_57);
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
      t = j_0(t);
      t = s_57;
      t = l_0(t);
      a_58 = t;
      t = (ATerm) ATinsert(CheckATermList(t_57), a_58);
    }
  return(t);
}
static ATerm z_2 (ATerm t)
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
static ATerm a_3 (ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL;
  d_58 = t;
  t = term_p_23;
  e_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_23, d_58);
  t = s_11(e_58, d_58, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_58);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_2, a_3, b_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_23;
  t = whoami_0_0(t);
  f_58 = t;
  t = term_a_26;
  h_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_26), f_58);
  i_58 = t;
  t = SSL_printnl(h_58, i_58);
  t = term_c_26;
  g_58 = t;
  t = SSL_exit(g_58);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL;
  t = term_l_22;
  j_58 = t;
  t = term_t_23;
  k_58 = t;
  t = term_u_23;
  t = p_11(j_58, k_58, t);
  return(t);
}
static ATerm k_11 (ATerm u_54, ATerm v_54, ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_54, v_54);
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      t = SSL_addr(u_54, v_54);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_161 (ATerm), ATerm s_161 (ATerm), ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL;
  m_58 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_58;
      t = r_161(t);
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
      t = foldr_2_0(r_161, s_161, t);
      r_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_58, r_58);
      t = s_161(t);
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
  t = term_w_24;
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
  t = k_11(d_4, e_4, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_58 = NULL,z_3 = NULL,a_4 = NULL;
  t = times_0_0(t);
  a_4 = t;
  t = SSL_explode_term(a_4);
  if(match_cons(t, sym__2))
    {
      ATerm f_26 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3;
  t = foldr_2_0(c_3, d_3, t);
  u_58 = t;
  t = SSL_TicksToSeconds(u_58);
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
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_59;
        if((m_59 != t))
          {
            _fail(t);
          }
        t = l_59;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        t = (ATerm) ATmakeAppl(sym__2, m_59, n_59);
        {
          ATerm i_26 = t;
          int k_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_59, n_59);
              LocalPopChoice(k_26);
            }
          else
            {
              t = i_26;
              t = SSL_gtr(m_59, n_59);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_59, n_59);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_149 (ATerm), ATerm t)
{
  ATerm r_59 = NULL;
  r_59 = t;
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL;
        t = term_l_22;
        u_59 = t;
        t = term_v_24;
        v_59 = t;
        t = term_n_26;
        t = p_11(u_59, v_59, t);
        t_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_59, term_c_26);
        t = geq_0_0(t);
        t = r_59;
        t = n_149(t);
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = r_59;
      }
  }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL,a_60 = NULL,b_60 = NULL;
  t = run_time_0_0(t);
  x_59 = t;
  t = term_z_23;
  t = whoami_0_0(t);
  y_59 = t;
  t = term_a_26;
  a_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_26), x_59), term_o_26), y_59);
  b_60 = t;
  t = SSL_printnl(a_60, b_60);
  t = (ATerm) ATmakeAppl(sym__2, term_a_26, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_26), x_59), term_o_26), y_59));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_60 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_24;
  c_60 = t;
  t = SSL_exit(c_60);
  return(t);
}
static ATerm t_11 (ATerm b_62, ATerm c_62, ATerm d_62, ATerm t)
{
  ATerm d_60 = NULL;
  t = SSL_hashtable_put(d_62, b_62, c_62);
  d_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_60);
  return(t);
}
ATerm lookup_table_0_1 (ATerm y_58, ATerm t)
{
  ATerm m_60 = NULL;
  t = table_hashtable_0_0(t);
  m_60 = t;
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
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
        t = u_11(y_58, p_4, t);
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
        {
          ATerm u_4 = NULL;
          t = y_58;
          t = table_create_0_0(t);
          t = m_60;
          if(match_cons(t, sym_Hashtable_1))
            {
              u_4 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_11(y_58, u_4, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm j_62, ATerm k_62, ATerm t)
{
  ATerm p_60 = NULL;
  t = SSL_hashtable_create(j_62, k_62);
  p_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_60);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,u_60 = NULL,v_60 = NULL;
  q_60 = t;
  t = term_s_26;
  u_60 = t;
  t = term_t_26;
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
static ATerm m_11 (ATerm g_62, ATerm h_62, ATerm t)
{
  ATerm w_60 = NULL;
  t = SSL_hashtable_remove(h_62, g_62);
  w_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_60);
  return(t);
}
static ATerm n_11 (ATerm l_62, ATerm t)
{
  ATerm x_60 = NULL;
  t = SSL_hashtable_destroy(l_62);
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
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL;
  z_60 = t;
  t = table_hashtable_0_0(t);
  a_61 = t;
  t = lookup_table_0_1(z_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11(c_61, t);
  t = a_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_11(z_60, b_61, t);
  t = z_60;
  return(t);
}
ATerm fetch_1_0 (ATerm t_159 (ATerm), ATerm t)
{
  static ATerm z_61 (ATerm t);
  static ATerm z_61 (ATerm t)
  {
    ATerm w_61 = NULL,x_61 = NULL,y_61 = NULL;
    w_61 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_61 = ATgetFirst((ATermList) t);
        y_61 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_26 = t;
      int v_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_4 = NULL,c_5 = NULL,x_6 = NULL;
          t = SSLgetAnnotations(w_61);
          z_4 = t;
          t = x_61;
          t = t_159(t);
          c_5 = t;
          t = (ATerm) ATinsert(CheckATermList(y_61), c_5);
          x_6 = t;
          t = SSLsetAnnotations(x_6, z_4);
          LocalPopChoice(v_26);
        }
      else
        {
          t = u_26;
          {
            ATerm k_5 = NULL,n_5 = NULL,y_6 = NULL;
            t = SSLgetAnnotations(w_61);
            k_5 = t;
            t = y_61;
            t = z_61(t);
            n_5 = t;
            t = (ATerm) ATinsert(CheckATermList(n_5), x_61);
            y_6 = t;
            t = SSLsetAnnotations(y_6, k_5);
          }
        }
    }
    return(t);
  }
  t = z_61(t);
  return(t);
}
static ATerm u_11 (ATerm e_62, ATerm f_62, ATerm t)
{
  t = SSL_hashtable_get(f_62, e_62);
  return(t);
}
static ATerm p_11 (ATerm f_59, ATerm g_59, ATerm t)
{
  ATerm m_62 = NULL;
  t = lookup_table_0_1(f_59, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(g_59, m_62, t);
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
  ATerm o_62 = NULL,p_62 = NULL;
  t = term_w_26;
  o_62 = t;
  t = term_z_23;
  p_62 = t;
  t = term_x_26;
  t = s_11(o_62, p_62, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_y_26;
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
  ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL;
  t = term_w_26;
  s_62 = t;
  t = term_z_23;
  t_62 = t;
  t = term_x_26;
  t = s_11(s_62, t_62, t);
  t = term_a_27;
  q_62 = t;
  t = term_z_23;
  r_62 = t;
  t = term_b_27;
  t = s_11(q_62, r_62, t);
  t = term_c_27;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_3, h_3, k_3, t);
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      t = Option_3_0(l_3, m_3, n_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,b_7 = NULL;
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
  t = k_110(t);
  x_62 = t;
  t = w_62;
  t = l_110(t);
  y_62 = t;
  t = (ATerm) ATinsert(CheckATermList(y_62), x_62);
  b_7 = t;
  t = SSLsetAnnotations(b_7, u_62);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_171 (ATerm), ATerm t)
{
  ATerm e_63 = NULL,f_63 = NULL,g_63 = NULL,h_63 = NULL,j_63 = NULL,k_63 = NULL,d_7 = NULL;
  e_63 = t;
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_27;
        t = f_171(t);
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
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
  t = term_t_23;
  k_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_23, g_63);
  t = s_11(k_63, g_63, t);
  t = h_63;
  {
    static ATerm u_63 (ATerm t);
    static ATerm u_63 (ATerm t)
    {
      ATerm j_27 = t;
      int k_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_27 = t;
          int m_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_63 = NULL;
              n_63 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_63;
              LocalPopChoice(m_27);
            }
          else
            {
              t = l_27;
              t = f_171(t);
              t = Cons_2_0(_id, u_63, t);
            }
          LocalPopChoice(k_27);
        }
      else
        {
          t = j_27;
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
  d_7 = t;
  t = SSLsetAnnotations(d_7, f_63);
  return(t);
}
static ATerm p_3 (ATerm t)
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
static ATerm q_3 (ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL;
  t = term_n_27;
  i_64 = t;
  t = term_z_23;
  j_64 = t;
  t = term_o_27;
  t = s_11(i_64, j_64, t);
  t = term_p_27;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_q_27;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm c_171 (ATerm), ATerm d_171 (ATerm), ATerm e_171 (ATerm), ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL;
  b_64 = t;
  t = term_i_24;
  c_64 = t;
  t = term_r_27;
  t = lookup_table_0_1(c_64, t);
  g_64 = t;
  t = term_j_24;
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
    static ATerm o_3 (ATerm t);
    static ATerm o_3 (ATerm t)
    {
      ATerm s_27 = t;
      int u_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_171(t);
          LocalPopChoice(u_27);
        }
      else
        {
          t = s_27;
          {
            ATerm v_27 = t;
            int w_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_3, q_3, r_3, t);
                LocalPopChoice(w_27);
              }
            else
              {
                t = v_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_3, t);
  }
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_64 = NULL;
        u_64 = t;
        {
          ATerm z_27 = t;
          int a_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_5 = NULL;
              t = u_64;
              {
                ATerm b_28 = t;
                int c_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_5 = NULL,w_5 = NULL;
                    t = term_l_22;
                    v_5 = t;
                    t = term_n_27;
                    w_5 = t;
                    t = term_d_28;
                    t = p_11(v_5, w_5, t);
                    LocalPopChoice(c_28);
                  }
                else
                  {
                    t = b_28;
                    t = fetch_1_0(s_3, t);
                  }
              }
              t = u_64;
              t = d_171(t);
              t = term_w_24;
              u_5 = t;
              t = SSL_exit(u_5);
              LocalPopChoice(a_28);
            }
          else
            {
              t = z_27;
              {
                ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
                t = term_l_22;
                b_6 = t;
                t = term_w_26;
                c_6 = t;
                t = term_e_28;
                t = p_11(b_6, c_6, t);
                t = u_64;
                t = e_171(t);
                t = term_w_24;
                a_6 = t;
                t = SSL_exit(a_6);
              }
            }
        }
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        {
          ATerm f_28 = t;
          int g_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL;
              static ATerm t_3 (ATerm t);
              static ATerm t_3 (ATerm t)
              {
                ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL,f_7 = NULL;
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
                f_7 = t;
                t = SSLsetAnnotations(f_7, y_64);
                return(t);
              }
              t = fetch_1_0(t_3, t);
              t = term_a_26;
              w_64 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_63)), term_h_28);
              x_64 = t;
              t = SSL_printnl(w_64, x_64);
              t = (ATerm) ATmakeAppl(sym__2, term_a_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_63)), term_h_28));
              t = d_171(t);
              t = term_c_26;
              v_64 = t;
              t = SSL_exit(v_64);
              LocalPopChoice(g_28);
            }
          else
            {
              t = f_28;
            }
        }
      }
  }
  a_64 = t;
  t = term_i_24;
  t = table_destroy_0_0(t);
  t = a_64;
  return(t);
}
ATerm option_wrap_5_0 (ATerm f_169 (ATerm), ATerm g_169 (ATerm), ATerm h_169 (ATerm), ATerm i_169 (ATerm), ATerm j_169 (ATerm), ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL;
  t = parse_options_3_0(f_169, g_169, h_169, t);
  f_65 = t;
  t = term_i_28;
  t = table_create_0_0(t);
  t = term_i_28;
  g_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_28, term_j_28, f_65);
  t = lookup_table_0_1(g_65, t);
  j_65 = t;
  t = term_j_28;
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
  t = i_169(t);
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_169(t);
        t = report_success_0_0(t);
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm n_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
            LocalPopChoice(q_28);
          }
        else
          {
            t = p_28;
            {
              ATerm s_28 = t;
              int t_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(y_3, c_4, f_4, t);
                  LocalPopChoice(t_28);
                }
              else
                {
                  t = s_28;
                  {
                    ATerm u_28 = t;
                    int v_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(v_28);
                      }
                    else
                      {
                        t = u_28;
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
  ATerm o_65 = NULL,p_65 = NULL;
  t = term_r_22;
  o_65 = t;
  t = term_z_23;
  p_65 = t;
  t = term_w_28;
  t = s_11(o_65, p_65, t);
  t = term_x_28;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_y_28;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = output_1_0(h_4, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,l_7 = NULL,k_7 = NULL,j_7 = NULL,i_7 = NULL;
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
  t = map_1_0(i_4, t);
  d_66 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, d_66);
  i_7 = t;
  t = SSLsetAnnotations(i_7, b_66);
  e_66 = t;
  t = z_65;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_65), e_66);
  j_7 = t;
  t = SSLsetAnnotations(j_7, x_65);
  a_66 = t;
  t = (ATerm) ATinsert(CheckATermList(a_66), u_65);
  k_7 = t;
  t = SSLsetAnnotations(k_7, t_65);
  w_65 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, w_65);
  l_7 = t;
  t = SSLsetAnnotations(l_7, r_65);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL;
  w_66 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      s_66 = ATgetArgument(t, 0);
      t_66 = ATgetArgument(t, 1);
      u_66 = ATgetArgument(t, 2);
      v_66 = ATgetArgument(t, 3);
      {
        ATerm z_28 = t;
        int b_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_6 = NULL,o_6 = NULL,h_7 = NULL;
            t = SSLgetAnnotations(w_66);
            j_6 = t;
            t = v_66;
            t = simplify_0_0(t);
            o_6 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, s_66, t_66, u_66, o_6);
            h_7 = t;
            t = SSLsetAnnotations(h_7, j_6);
            LocalPopChoice(b_29);
          }
        else
          {
            t = z_28;
            t = w_66;
          }
      }
    }
  else
    {
      t = w_66;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(u_3, default_system_usage_0_0, default_system_about_0_0, _id, v_3, t);
  return(t);
}

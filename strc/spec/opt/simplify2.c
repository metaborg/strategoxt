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
Symbol sym_Prim_2;
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
Symbol sym_Prim_2;
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
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
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
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
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
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_c_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_l_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_t_28;
ATerm term_q_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_t_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_j_26;
ATerm term_c_25;
ATerm term_j_24;
ATerm term_e_8;
ATerm term_r_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_q_26);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_w_26);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_s_27);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_w_27);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym__2, term_l_28, term_m_28);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym__2, term_w_28, term_x_28);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_28);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym__2, term_c_29, term_d_28);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_w_28);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym__2, term_q_30, term_d_28);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym__2, term_u_30, term_d_28);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym__2, term_i_31, term_d_28);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym__3, term_l_28, term_m_28, (ATerm) ATempty);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_i_31);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_q_30);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_w_26, term_d_28);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm bottomup_1_0 (ATerm o_129 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm r_130 (ATerm), ATerm t);
static ATerm t_0 (ATerm e_0, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm simplify_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm f_11 (ATerm h_30, ATerm i_30, ATerm j_30, ATerm t);
ATerm genzip_4_0 (ATerm e_134 (ATerm), ATerm f_134 (ATerm), ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm s_151 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm h_55 (ATerm x_54, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm n_129 (ATerm), ATerm t);
ATerm map_1_0 (ATerm b_151 (ATerm), ATerm t);
static ATerm j_11 (ATerm f_47, ATerm g_47, ATerm t);
static ATerm k_11 (ATerm o_52, ATerm p_52, ATerm t);
static ATerm m_11 (ATerm b_144 (ATerm), ATerm b_475, ATerm u_52, ATerm t);
static ATerm l_11 (ATerm k_52, ATerm l_52, ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm output_1_0 (ATerm p_160 (ATerm), ATerm t);
static ATerm g_60 (ATerm a_60, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_11 (ATerm q_52, ATerm t);
static ATerm o_11 (ATerm l_45, ATerm m_45, ATerm t);
static ATerm p_11 (ATerm h_47, ATerm j_47, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_62 (ATerm q_60, ATerm t);
static ATerm c_62 (ATerm u_60, ATerm v_60, ATerm w_60, ATerm t);
static ATerm d_62 (ATerm o_61, ATerm p_61, ATerm q_61, ATerm t);
static ATerm q_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm q_160 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm h_2 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm default_system_usage_2_0 (ATerm o_162 (ATerm), ATerm p_162 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_11 (ATerm e_51, ATerm f_51, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_11 (ATerm p_56, ATerm q_56, ATerm o_56, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_11 (ATerm x_53, ATerm y_53, ATerm t);
ATerm foldr_2_0 (ATerm j_153 (ATerm), ATerm k_153 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_141 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_12 (ATerm a_61, ATerm b_61, ATerm c_61, ATerm t);
ATerm lookup_table_0_1 (ATerm b_58, ATerm t);
ATerm new_hashtable_0_2 (ATerm i_61, ATerm j_61, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm t_11 (ATerm f_61, ATerm g_61, ATerm t);
static ATerm u_11 (ATerm k_61, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_151 (ATerm), ATerm t);
static ATerm b_12 (ATerm d_61, ATerm e_61, ATerm t);
static ATerm w_11 (ATerm i_58, ATerm j_58, ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_162 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm parse_options_3_0 (ATerm g_162 (ATerm), ATerm h_162 (ATerm), ATerm i_162 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm j_160 (ATerm), ATerm k_160 (ATerm), ATerm l_160 (ATerm), ATerm m_160 (ATerm), ATerm n_160 (ATerm), ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
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
  static ATerm u_0 (ATerm t);
  static ATerm u_0 (ATerm t)
  {
    ATerm j_6 = t;
    int l_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_130(t);
        LocalPopChoice(l_6);
      }
    else
      {
        t = j_6;
        t = SRTS_one(u_0, t);
      }
    return(t);
  }
  t = u_0(t);
  return(t);
}
static ATerm t_0 (ATerm e_0, ATerm t)
{
  ATerm f_0 = NULL;
  t = SSL_explode_term(e_0);
  if(match_cons(t, sym__2))
    {
      ATerm m_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_0;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_0 = NULL,n_0 = NULL,p_0 = NULL;
  p_0 = t;
  if(match_cons(t, sym__2))
    {
      k_0 = ATgetArgument(t, 0);
      n_0 = ATgetArgument(t, 1);
      {
        ATerm n_6 = t;
        int o_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm c_0 (ATerm t);
            static ATerm c_0 (ATerm t)
            {
              t = n_0;
              return(t);
            }
            t = k_0;
            t = at_end_1_0(c_0, t);
            LocalPopChoice(o_6);
          }
        else
          {
            t = n_6;
            t = t_0(p_0, t);
          }
      }
    }
  else
    {
      t = t_0(p_0, t);
    }
  return(t);
}
static ATerm q_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_6 = ATgetArgument(t, 0);
      if(((ATgetType(q_6) != AT_LIST) || !(ATisEmpty(q_6))))
        _fail(t);
      {
        ATerm r_6 = ATgetArgument(t, 1);
        if(((ATgetType(r_6) != AT_LIST) || !(ATisEmpty(r_6))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,e_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_6 = ATgetArgument(t, 0);
      if(((ATgetType(t_6) == AT_LIST) && !(ATisEmpty(t_6))))
        {
          z_15 = ATgetFirst((ATermList) t_6);
          a_16 = (ATerm) ATgetNext((ATermList) t_6);
        }
      else
        _fail(t);
      {
        ATerm u_6 = ATgetArgument(t, 1);
        if(((ATgetType(u_6) == AT_LIST) && !(ATisEmpty(u_6))))
          {
            b_16 = ATgetFirst((ATermList) u_6);
            e_16 = (ATerm) ATgetNext((ATermList) u_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_15, b_16), (ATerm) ATmakeAppl(sym__2, a_16, e_16));
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm g_16 = NULL,n_16 = NULL;
  if(match_cons(t, sym__2))
    {
      g_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_16), g_16);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL;
  if(match_cons(t, sym__2))
    {
      o_16 = ATgetArgument(t, 0);
      p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_16), (ATerm) ATmakeAppl(sym_Match_1, p_16));
  return(t);
}
static ATerm x_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_6 = ATgetArgument(t, 0);
      if(((ATgetType(v_6) != AT_LIST) || !(ATisEmpty(v_6))))
        _fail(t);
      {
        ATerm w_6 = ATgetArgument(t, 1);
        if(((ATgetType(w_6) != AT_LIST) || !(ATisEmpty(w_6))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,r_25 = NULL,t_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_6 = ATgetArgument(t, 0);
      if(((ATgetType(x_6) == AT_LIST) && !(ATisEmpty(x_6))))
        {
          m_25 = ATgetFirst((ATermList) x_6);
          n_25 = (ATerm) ATgetNext((ATermList) x_6);
        }
      else
        _fail(t);
      {
        ATerm y_6 = ATgetArgument(t, 1);
        if(((ATgetType(y_6) == AT_LIST) && !(ATisEmpty(y_6))))
          {
            r_25 = ATgetFirst((ATermList) y_6);
            t_25 = (ATerm) ATgetNext((ATermList) y_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_25, r_25), (ATerm) ATmakeAppl(sym__2, n_25, t_25));
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL;
  if(match_cons(t, sym__2))
    {
      u_25 = ATgetArgument(t, 0);
      v_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_25), u_25);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL;
  if(match_cons(t, sym__2))
    {
      w_25 = ATgetArgument(t, 0);
      x_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_25), (ATerm) ATmakeAppl(sym_Match_1, x_25));
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm z_6 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm c_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(b_7);
      {
        ATerm i_37 = NULL,k_37 = NULL;
        i_37 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm e_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        k_37 = t;
        t = SSLgetAnnotations(i_37);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_7 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) f_7) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_7 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(g_7) != AT_LIST) || !(ATisEmpty(g_7))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_37;
      }
    }
  else
    {
      t = z_6;
      {
        ATerm h_7 = t;
        int i_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm k_7 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) k_7) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm l_7 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(i_7);
            _fail(t);
          }
        else
          {
            t = h_7;
          }
      }
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  static ATerm i_0 (ATerm t);
  static ATerm i_0 (ATerm t)
  {
    ATerm m_9 = NULL,v_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL;
    q_10 = t;
    if(match_cons(t, sym_Test_1))
      {
        p_10 = ATgetArgument(t, 0);
        t = p_10;
        if(match_cons(t, sym_Id_0))
          {
            ATerm m_7 = t;
            int n_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_r_7;
                t = i_0(t);
                LocalPopChoice(n_7);
              }
            else
              {
                t = m_7;
                {
                  ATerm t_7 = t;
                  int v_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL;
                      t = q_10;
                      t = new_0_0(t);
                      s_10 = t;
                      t = bottomup_1_0(i_0, t);
                      d_11 = t;
                      t = (ATerm) ATempty;
                      t = i_0(t);
                      e_11 = t;
                      t = (ATerm) ATinsert(CheckATermList(e_11), d_11);
                      t = i_0(t);
                      t_10 = t;
                      t = s_10;
                      t = bottomup_1_0(i_0, t);
                      c_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, c_11);
                      t = i_0(t);
                      b_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, b_11);
                      t = i_0(t);
                      v_10 = t;
                      t = p_10;
                      t = bottomup_1_0(i_0, t);
                      x_10 = t;
                      t = s_10;
                      t = bottomup_1_0(i_0, t);
                      a_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, a_11);
                      t = i_0(t);
                      z_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, z_10);
                      t = i_0(t);
                      y_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_10, y_10);
                      t = i_0(t);
                      w_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_10, w_10);
                      t = i_0(t);
                      u_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, t_10, u_10);
                      t = i_0(t);
                      LocalPopChoice(v_7);
                    }
                  else
                    {
                      t = t_7;
                      t = q_10;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm w_7 = t;
                int z_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_e_8;
                    t = i_0(t);
                    LocalPopChoice(z_7);
                  }
                else
                  {
                    t = w_7;
                    {
                      ATerm g_8 = t;
                      int h_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_11 = NULL,s_11 = NULL,v_11 = NULL,y_11 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
                          t = q_10;
                          t = new_0_0(t);
                          i_11 = t;
                          t = bottomup_1_0(i_0, t);
                          j_12 = t;
                          t = (ATerm) ATempty;
                          t = i_0(t);
                          k_12 = t;
                          t = (ATerm) ATinsert(CheckATermList(k_12), j_12);
                          t = i_0(t);
                          s_11 = t;
                          t = i_11;
                          t = bottomup_1_0(i_0, t);
                          i_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, i_12);
                          t = i_0(t);
                          h_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, h_12);
                          t = i_0(t);
                          y_11 = t;
                          t = p_10;
                          t = bottomup_1_0(i_0, t);
                          d_12 = t;
                          t = i_11;
                          t = bottomup_1_0(i_0, t);
                          g_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, g_12);
                          t = i_0(t);
                          f_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, f_12);
                          t = i_0(t);
                          e_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                          t = i_0(t);
                          c_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, c_12);
                          t = i_0(t);
                          v_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, s_11, v_11);
                          t = i_0(t);
                          LocalPopChoice(h_8);
                        }
                      else
                        {
                          t = g_8;
                          t = q_10;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    m_10 = ATgetArgument(t, 0);
                    {
                      ATerm i_8 = t;
                      int j_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, m_10);
                          t = i_0(t);
                          LocalPopChoice(j_8);
                        }
                      else
                        {
                          t = i_8;
                          {
                            ATerm k_8 = t;
                            int l_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
                                t = q_10;
                                t = new_0_0(t);
                                o_12 = t;
                                t = bottomup_1_0(i_0, t);
                                z_12 = t;
                                t = (ATerm) ATempty;
                                t = i_0(t);
                                a_13 = t;
                                t = (ATerm) ATinsert(CheckATermList(a_13), z_12);
                                t = i_0(t);
                                p_12 = t;
                                t = o_12;
                                t = bottomup_1_0(i_0, t);
                                y_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, y_12);
                                t = i_0(t);
                                x_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, x_12);
                                t = i_0(t);
                                r_12 = t;
                                t = p_10;
                                t = bottomup_1_0(i_0, t);
                                t_12 = t;
                                t = o_12;
                                t = bottomup_1_0(i_0, t);
                                w_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, w_12);
                                t = i_0(t);
                                v_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, v_12);
                                t = i_0(t);
                                u_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_12, u_12);
                                t = i_0(t);
                                s_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_12, s_12);
                                t = i_0(t);
                                q_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, p_12, q_12);
                                t = i_0(t);
                                LocalPopChoice(l_8);
                              }
                            else
                              {
                                t = k_8;
                                t = q_10;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm m_8 = t;
                    int o_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL;
                        t = q_10;
                        t = new_0_0(t);
                        d_13 = t;
                        t = bottomup_1_0(i_0, t);
                        o_13 = t;
                        t = (ATerm) ATempty;
                        t = i_0(t);
                        p_13 = t;
                        t = (ATerm) ATinsert(CheckATermList(p_13), o_13);
                        t = i_0(t);
                        e_13 = t;
                        t = d_13;
                        t = bottomup_1_0(i_0, t);
                        n_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, n_13);
                        t = i_0(t);
                        m_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, m_13);
                        t = i_0(t);
                        g_13 = t;
                        t = p_10;
                        t = bottomup_1_0(i_0, t);
                        i_13 = t;
                        t = d_13;
                        t = bottomup_1_0(i_0, t);
                        l_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, l_13);
                        t = i_0(t);
                        k_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, k_13);
                        t = i_0(t);
                        j_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, i_13, j_13);
                        t = i_0(t);
                        h_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_13, h_13);
                        t = i_0(t);
                        f_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, e_13, f_13);
                        t = i_0(t);
                        LocalPopChoice(o_8);
                      }
                    else
                      {
                        t = m_8;
                        t = q_10;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            p_10 = ATgetArgument(t, 0);
            t = p_10;
            if(match_cons(t, sym_Id_0))
              {
                ATerm p_8 = t;
                int q_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_e_8;
                    t = i_0(t);
                    LocalPopChoice(q_8);
                  }
                else
                  {
                    t = p_8;
                    t = q_10;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm r_8 = t;
                    int t_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_r_7;
                        t = i_0(t);
                        LocalPopChoice(t_8);
                      }
                    else
                      {
                        t = r_8;
                        t = q_10;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        m_10 = ATgetArgument(t, 0);
                        {
                          ATerm y_8 = t;
                          int z_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, m_10);
                              t = i_0(t);
                              LocalPopChoice(z_8);
                            }
                          else
                            {
                              t = y_8;
                              t = q_10;
                            }
                        }
                      }
                    else
                      {
                        t = q_10;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                p_10 = ATgetArgument(t, 0);
                o_10 = ATgetArgument(t, 1);
                t = o_10;
                if(match_cons(t, sym_Id_0))
                  {
                    t = p_10;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = o_10;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = p_10;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                m_10 = ATgetArgument(t, 0);
                                n_10 = ATgetArgument(t, 1);
                                t = p_10;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    m_10 = ATgetArgument(t, 0);
                                    n_10 = ATgetArgument(t, 1);
                                    t = p_10;
                                  }
                                else
                                  {
                                    t = p_10;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        k_10 = ATgetArgument(t, 0);
                        l_10 = ATgetArgument(t, 1);
                        t = k_10;
                        if(match_cons(t, sym_Match_1))
                          {
                            j_10 = ATgetArgument(t, 0);
                            t = j_10;
                            if(match_cons(t, sym_Op_2))
                              {
                                h_10 = ATgetArgument(t, 0);
                                c_10 = ATgetArgument(t, 1);
                                t = p_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm a_9 = t;
                                        int b_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_e_8;
                                            t = i_0(t);
                                            LocalPopChoice(b_9);
                                          }
                                        else
                                          {
                                            t = a_9;
                                            t = q_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            m_10 = ATgetArgument(t, 0);
                                            n_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm c_9 = t;
                                              int d_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm p_15 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                  t = i_0(t);
                                                  p_15 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, p_15);
                                                  t = i_0(t);
                                                  LocalPopChoice(d_9);
                                                }
                                              else
                                                {
                                                  t = c_9;
                                                  t = q_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                t = m_10;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    i_10 = ATgetArgument(t, 0);
                                                    d_10 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm e_9 = t;
                                                      int f_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, i_10, h_10);
                                                          {
                                                            ATerm g_9 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm w_0 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    w_0 = ATgetArgument(t, 0);
                                                                    if((w_0 != ATgetArgument(t, 1)))
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
                                                          t = term_e_8;
                                                          t = bottomup_1_0(i_0, t);
                                                          LocalPopChoice(f_9);
                                                        }
                                                      else
                                                        {
                                                          t = e_9;
                                                          {
                                                            ATerm h_9 = t;
                                                            int i_9 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm y_15 = NULL;
                                                                t = h_10;
                                                                if((i_10 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, d_10, c_10);
                                                                t = genzip_4_0(q_0, r_0, s_0, v_0, t);
                                                                y_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, i_10, d_10)), l_10));
                                                                t = bottomup_1_0(i_0, t);
                                                                LocalPopChoice(i_9);
                                                              }
                                                            else
                                                              {
                                                                t = h_9;
                                                                {
                                                                  ATerm j_9 = t;
                                                                  int l_9 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm u_16 = NULL;
                                                                      t = j_10;
                                                                      if((m_10 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, m_10);
                                                                      t = i_0(t);
                                                                      u_16 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_16, l_10);
                                                                      t = i_0(t);
                                                                      LocalPopChoice(l_9);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = j_9;
                                                                      t = q_10;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm p_9 = t;
                                                    int q_9 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm f_17 = NULL;
                                                        t = j_10;
                                                        if((m_10 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, m_10);
                                                        t = i_0(t);
                                                        f_17 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_17, l_10);
                                                        t = i_0(t);
                                                        LocalPopChoice(q_9);
                                                      }
                                                    else
                                                      {
                                                        t = p_9;
                                                        t = q_10;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    m_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm s_9 = t;
                                                      int u_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_17 = NULL;
                                                          t = j_10;
                                                          if((m_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, m_10);
                                                          t = i_0(t);
                                                          j_17 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_17, l_10);
                                                          t = i_0(t);
                                                          LocalPopChoice(u_9);
                                                        }
                                                      else
                                                        {
                                                          t = s_9;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_10 = t;
                                                          int g_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_17 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                              t = i_0(t);
                                                              u_17 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, u_17);
                                                              t = i_0(t);
                                                              LocalPopChoice(g_11);
                                                            }
                                                          else
                                                            {
                                                              t = r_10;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = p_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm h_11 = t;
                                        int l_12 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_e_8;
                                            t = i_0(t);
                                            LocalPopChoice(l_12);
                                          }
                                        else
                                          {
                                            t = h_11;
                                            t = q_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            m_10 = ATgetArgument(t, 0);
                                            n_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm m_12 = t;
                                              int n_12 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm m_18 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                  t = i_0(t);
                                                  m_18 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, m_18);
                                                  t = i_0(t);
                                                  LocalPopChoice(n_12);
                                                }
                                              else
                                                {
                                                  t = m_12;
                                                  t = q_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                {
                                                  ATerm b_13 = t;
                                                  int c_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_18 = NULL;
                                                      t = j_10;
                                                      if((m_10 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, m_10);
                                                      t = i_0(t);
                                                      q_18 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_18, l_10);
                                                      t = i_0(t);
                                                      LocalPopChoice(c_13);
                                                    }
                                                  else
                                                    {
                                                      t = b_13;
                                                      t = q_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    m_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm q_13 = t;
                                                      int r_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_18 = NULL;
                                                          t = j_10;
                                                          if((m_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_10);
                                                          t = i_0(t);
                                                          x_18 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_18, l_10);
                                                          t = i_0(t);
                                                          LocalPopChoice(r_13);
                                                        }
                                                      else
                                                        {
                                                          t = q_13;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_13 = t;
                                                          int t_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm c_19 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                              t = i_0(t);
                                                              c_19 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, c_19);
                                                              t = i_0(t);
                                                              LocalPopChoice(t_13);
                                                            }
                                                          else
                                                            {
                                                              t = s_13;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_10;
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
                                j_10 = ATgetArgument(t, 0);
                                t = j_10;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    h_10 = ATgetArgument(t, 0);
                                    t = p_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm u_13 = t;
                                            int v_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_8;
                                                t = i_0(t);
                                                LocalPopChoice(v_13);
                                              }
                                            else
                                              {
                                                t = u_13;
                                                t = q_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                n_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm w_13 = t;
                                                  int x_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_19 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                      t = i_0(t);
                                                      y_19 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, y_19);
                                                      t = i_0(t);
                                                      LocalPopChoice(x_13);
                                                    }
                                                  else
                                                    {
                                                      t = w_13;
                                                      t = q_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm y_13 = t;
                                                int z_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm a_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(z_13);
                                                    {
                                                      ATerm b_14 = t;
                                                      int c_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm c_20 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, j_10);
                                                          t = i_0(t);
                                                          c_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_20, l_10);
                                                          t = i_0(t);
                                                          LocalPopChoice(c_14);
                                                        }
                                                      else
                                                        {
                                                          t = b_14;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = y_13;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        t = m_10;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            i_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm d_14 = t;
                                                              int e_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm q_20 = NULL,s_20 = NULL;
                                                                  t = h_10;
                                                                  if((i_10 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, i_10);
                                                                  t = i_0(t);
                                                                  s_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, s_20);
                                                                  t = i_0(t);
                                                                  q_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_20, l_10);
                                                                  t = i_0(t);
                                                                  LocalPopChoice(e_14);
                                                                }
                                                              else
                                                                {
                                                                  t = d_14;
                                                                  t = q_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            m_10 = ATgetArgument(t, 0);
                                                            n_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm f_14 = t;
                                                              int g_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_20 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                                  t = i_0(t);
                                                                  y_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, y_20);
                                                                  t = i_0(t);
                                                                  LocalPopChoice(g_14);
                                                                }
                                                              else
                                                                {
                                                                  t = f_14;
                                                                  t = q_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_10;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = p_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm h_14 = t;
                                            int j_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_8;
                                                t = i_0(t);
                                                LocalPopChoice(j_14);
                                              }
                                            else
                                              {
                                                t = h_14;
                                                t = q_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                n_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm k_14 = t;
                                                  int m_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                      t = i_0(t);
                                                      r_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, r_21);
                                                      t = i_0(t);
                                                      LocalPopChoice(m_14);
                                                    }
                                                  else
                                                    {
                                                      t = k_14;
                                                      t = q_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm o_14 = t;
                                                int q_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm r_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(q_14);
                                                    {
                                                      ATerm s_14 = t;
                                                      int t_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, j_10);
                                                          t = i_0(t);
                                                          x_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_21, l_10);
                                                          t = i_0(t);
                                                          LocalPopChoice(t_14);
                                                        }
                                                      else
                                                        {
                                                          t = s_14;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = o_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm u_14 = t;
                                                          int z_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_22 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                              t = i_0(t);
                                                              i_22 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, i_22);
                                                              t = i_0(t);
                                                              LocalPopChoice(z_14);
                                                            }
                                                          else
                                                            {
                                                              t = u_14;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_10;
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
                                    j_10 = ATgetArgument(t, 0);
                                    e_10 = ATgetArgument(t, 1);
                                    f_10 = ATgetArgument(t, 2);
                                    t = p_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm a_15 = t;
                                            int b_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_8;
                                                t = i_0(t);
                                                LocalPopChoice(b_15);
                                              }
                                            else
                                              {
                                                t = a_15;
                                                t = q_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                n_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm c_15 = t;
                                                  int d_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                      t = i_0(t);
                                                      t_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, t_22);
                                                      t = i_0(t);
                                                      LocalPopChoice(d_15);
                                                    }
                                                  else
                                                    {
                                                      t = c_15;
                                                      t = q_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm e_15 = t;
                                                int f_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm g_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(f_15);
                                                    {
                                                      ATerm h_15 = t;
                                                      int i_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm c_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, j_10, e_10, f_10);
                                                          t = i_0(t);
                                                          c_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_23, l_10);
                                                          t = i_0(t);
                                                          LocalPopChoice(i_15);
                                                        }
                                                      else
                                                        {
                                                          t = h_15;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = e_15;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_15 = t;
                                                          int k_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm l_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                              t = i_0(t);
                                                              l_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, l_23);
                                                              t = i_0(t);
                                                              LocalPopChoice(k_15);
                                                            }
                                                          else
                                                            {
                                                              t = j_15;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = p_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm l_15 = t;
                                            int m_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_8;
                                                t = i_0(t);
                                                LocalPopChoice(m_15);
                                              }
                                            else
                                              {
                                                t = l_15;
                                                t = q_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                n_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm n_15 = t;
                                                  int o_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                      t = i_0(t);
                                                      x_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, x_23);
                                                      t = i_0(t);
                                                      LocalPopChoice(o_15);
                                                    }
                                                  else
                                                    {
                                                      t = n_15;
                                                      t = q_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    m_10 = ATgetArgument(t, 0);
                                                    n_10 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm q_15 = t;
                                                      int r_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm g_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                          t = i_0(t);
                                                          g_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, g_24);
                                                          t = i_0(t);
                                                          LocalPopChoice(r_15);
                                                        }
                                                      else
                                                        {
                                                          t = q_15;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = q_10;
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
                            k_10 = ATgetArgument(t, 0);
                            t = k_10;
                            if(match_cons(t, sym_Op_2))
                              {
                                j_10 = ATgetArgument(t, 0);
                                e_10 = ATgetArgument(t, 1);
                                t = p_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm s_15 = t;
                                        int t_15 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_e_8;
                                            t = i_0(t);
                                            LocalPopChoice(t_15);
                                          }
                                        else
                                          {
                                            t = s_15;
                                            t = q_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            m_10 = ATgetArgument(t, 0);
                                            n_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm u_15 = t;
                                              int v_15 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm v_24 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                  t = i_0(t);
                                                  v_24 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, v_24);
                                                  t = i_0(t);
                                                  LocalPopChoice(v_15);
                                                }
                                              else
                                                {
                                                  t = u_15;
                                                  t = q_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                t = m_10;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    i_10 = ATgetArgument(t, 0);
                                                    d_10 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm w_15 = t;
                                                      int x_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, i_10, j_10);
                                                          {
                                                            ATerm c_16 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm d_1 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    d_1 = ATgetArgument(t, 0);
                                                                    if((d_1 != ATgetArgument(t, 1)))
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
                                                                t = c_16;
                                                              }
                                                          }
                                                          t = term_e_8;
                                                          t = bottomup_1_0(i_0, t);
                                                          LocalPopChoice(x_15);
                                                        }
                                                      else
                                                        {
                                                          t = w_15;
                                                          {
                                                            ATerm d_16 = t;
                                                            int f_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm l_25 = NULL;
                                                                t = j_10;
                                                                if((i_10 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, d_10, e_10);
                                                                t = genzip_4_0(x_0, y_0, z_0, a_1, t);
                                                                l_25 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, i_10, d_10)));
                                                                t = bottomup_1_0(i_0, t);
                                                                LocalPopChoice(f_16);
                                                              }
                                                            else
                                                              {
                                                                t = d_16;
                                                                {
                                                                  ATerm h_16 = t;
                                                                  int i_16 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = k_10;
                                                                      if((m_10 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, m_10);
                                                                      t = i_0(t);
                                                                      LocalPopChoice(i_16);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = h_16;
                                                                      t = q_10;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm j_16 = t;
                                                    int k_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = k_10;
                                                        if((m_10 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, m_10);
                                                        t = i_0(t);
                                                        LocalPopChoice(k_16);
                                                      }
                                                    else
                                                      {
                                                        t = j_16;
                                                        t = q_10;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    m_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm l_16 = t;
                                                      int m_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = k_10;
                                                          if((m_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, m_10);
                                                          t = i_0(t);
                                                          LocalPopChoice(m_16);
                                                        }
                                                      else
                                                        {
                                                          t = l_16;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_16 = t;
                                                          int r_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                              t = i_0(t);
                                                              h_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, h_26);
                                                              t = i_0(t);
                                                              LocalPopChoice(r_16);
                                                            }
                                                          else
                                                            {
                                                              t = q_16;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = p_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = o_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm s_16 = t;
                                        int t_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_e_8;
                                            t = i_0(t);
                                            LocalPopChoice(t_16);
                                          }
                                        else
                                          {
                                            t = s_16;
                                            t = q_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            m_10 = ATgetArgument(t, 0);
                                            n_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm v_16 = t;
                                              int w_16 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm s_26 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                  t = i_0(t);
                                                  s_26 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, s_26);
                                                  t = i_0(t);
                                                  LocalPopChoice(w_16);
                                                }
                                              else
                                                {
                                                  t = v_16;
                                                  t = q_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                {
                                                  ATerm x_16 = t;
                                                  int y_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = k_10;
                                                      if((m_10 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, m_10);
                                                      t = i_0(t);
                                                      LocalPopChoice(y_16);
                                                    }
                                                  else
                                                    {
                                                      t = x_16;
                                                      t = q_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    m_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm z_16 = t;
                                                      int a_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = k_10;
                                                          if((m_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_10);
                                                          t = i_0(t);
                                                          LocalPopChoice(a_17);
                                                        }
                                                      else
                                                        {
                                                          t = z_16;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_17 = t;
                                                          int c_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                              t = i_0(t);
                                                              f_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, f_27);
                                                              t = i_0(t);
                                                              LocalPopChoice(c_17);
                                                            }
                                                          else
                                                            {
                                                              t = b_17;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_10;
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
                                k_10 = ATgetArgument(t, 0);
                                t = k_10;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    j_10 = ATgetArgument(t, 0);
                                    t = p_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm d_17 = t;
                                            int e_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_8;
                                                t = i_0(t);
                                                LocalPopChoice(e_17);
                                              }
                                            else
                                              {
                                                t = d_17;
                                                t = q_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                n_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm g_17 = t;
                                                  int h_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm u_27 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                      t = i_0(t);
                                                      u_27 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, u_27);
                                                      t = i_0(t);
                                                      LocalPopChoice(h_17);
                                                    }
                                                  else
                                                    {
                                                      t = g_17;
                                                      t = q_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm i_17 = t;
                                                int k_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm l_17 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(k_17);
                                                    {
                                                      ATerm m_17 = t;
                                                      int n_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, k_10);
                                                          t = i_0(t);
                                                          LocalPopChoice(n_17);
                                                        }
                                                      else
                                                        {
                                                          t = m_17;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = i_17;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        t = m_10;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            i_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm o_17 = t;
                                                              int p_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm z_27 = NULL;
                                                                  t = j_10;
                                                                  if((i_10 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, i_10);
                                                                  t = i_0(t);
                                                                  z_27 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, z_27);
                                                                  t = i_0(t);
                                                                  LocalPopChoice(p_17);
                                                                }
                                                              else
                                                                {
                                                                  t = o_17;
                                                                  t = q_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            m_10 = ATgetArgument(t, 0);
                                                            n_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm q_17 = t;
                                                              int r_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm h_28 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                                  t = i_0(t);
                                                                  h_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, h_28);
                                                                  t = i_0(t);
                                                                  LocalPopChoice(r_17);
                                                                }
                                                              else
                                                                {
                                                                  t = q_17;
                                                                  t = q_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_10;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = p_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm s_17 = t;
                                            int t_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_8;
                                                t = i_0(t);
                                                LocalPopChoice(t_17);
                                              }
                                            else
                                              {
                                                t = s_17;
                                                t = q_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                n_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm v_17 = t;
                                                  int w_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm u_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                      t = i_0(t);
                                                      u_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, u_28);
                                                      t = i_0(t);
                                                      LocalPopChoice(w_17);
                                                    }
                                                  else
                                                    {
                                                      t = v_17;
                                                      t = q_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm x_17 = t;
                                                int y_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm z_17 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(y_17);
                                                    {
                                                      ATerm a_18 = t;
                                                      int b_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, k_10);
                                                          t = i_0(t);
                                                          LocalPopChoice(b_18);
                                                        }
                                                      else
                                                        {
                                                          t = a_18;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = x_17;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm c_18 = t;
                                                          int d_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                              t = i_0(t);
                                                              d_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, d_29);
                                                              t = i_0(t);
                                                              LocalPopChoice(d_18);
                                                            }
                                                          else
                                                            {
                                                              t = c_18;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_10;
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
                                    k_10 = ATgetArgument(t, 0);
                                    l_10 = ATgetArgument(t, 1);
                                    g_10 = ATgetArgument(t, 2);
                                    t = p_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = o_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm e_18 = t;
                                            int f_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_8;
                                                t = i_0(t);
                                                LocalPopChoice(f_18);
                                              }
                                            else
                                              {
                                                t = e_18;
                                                t = q_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                n_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm g_18 = t;
                                                  int h_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                      t = i_0(t);
                                                      q_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, q_29);
                                                      t = i_0(t);
                                                      LocalPopChoice(h_18);
                                                    }
                                                  else
                                                    {
                                                      t = g_18;
                                                      t = q_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm i_18 = t;
                                                int j_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm k_18 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(j_18);
                                                    {
                                                      ATerm l_18 = t;
                                                      int n_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, k_10, l_10, g_10);
                                                          t = i_0(t);
                                                          LocalPopChoice(n_18);
                                                        }
                                                      else
                                                        {
                                                          t = l_18;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = i_18;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm o_18 = t;
                                                          int p_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                              t = i_0(t);
                                                              t_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, t_30);
                                                              t = i_0(t);
                                                              LocalPopChoice(p_18);
                                                            }
                                                          else
                                                            {
                                                              t = o_18;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = q_10;
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
                                        k_10 = ATgetArgument(t, 0);
                                        l_10 = ATgetArgument(t, 1);
                                        t = p_10;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = o_10;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm r_18 = t;
                                                int s_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_e_8;
                                                    t = i_0(t);
                                                    LocalPopChoice(s_18);
                                                  }
                                                else
                                                  {
                                                    t = r_18;
                                                    {
                                                      ATerm t_18 = t;
                                                      int u_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm f_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, l_10);
                                                          t = i_0(t);
                                                          f_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, k_10, f_31);
                                                          t = i_0(t);
                                                          LocalPopChoice(u_18);
                                                        }
                                                      else
                                                        {
                                                          t = t_18;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    m_10 = ATgetArgument(t, 0);
                                                    n_10 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm v_18 = t;
                                                      int w_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm k_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                          t = i_0(t);
                                                          k_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, k_31);
                                                          t = i_0(t);
                                                          LocalPopChoice(w_18);
                                                        }
                                                      else
                                                        {
                                                          t = v_18;
                                                          {
                                                            ATerm y_18 = t;
                                                            int z_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm p_31 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, l_10);
                                                                t = i_0(t);
                                                                p_31 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, k_10, p_31);
                                                                t = i_0(t);
                                                                LocalPopChoice(z_18);
                                                              }
                                                            else
                                                              {
                                                                t = y_18;
                                                                t = q_10;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_19 = t;
                                                          int b_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, l_10);
                                                              t = i_0(t);
                                                              u_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, k_10, u_31);
                                                              t = i_0(t);
                                                              LocalPopChoice(b_19);
                                                            }
                                                          else
                                                            {
                                                              t = a_19;
                                                              {
                                                                ATerm d_19 = t;
                                                                int e_19 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm y_31 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                                    t = i_0(t);
                                                                    y_31 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, y_31);
                                                                    t = i_0(t);
                                                                    LocalPopChoice(e_19);
                                                                  }
                                                                else
                                                                  {
                                                                    t = d_19;
                                                                    t = q_10;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm f_19 = t;
                                                        int g_19 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm d_32 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, l_10);
                                                            t = i_0(t);
                                                            d_32 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, k_10, d_32);
                                                            t = i_0(t);
                                                            LocalPopChoice(g_19);
                                                          }
                                                        else
                                                          {
                                                            t = f_19;
                                                            t = q_10;
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
                                            k_10 = ATgetArgument(t, 0);
                                            l_10 = ATgetArgument(t, 1);
                                            t = p_10;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = o_10;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm h_19 = t;
                                                    int i_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_e_8;
                                                        t = i_0(t);
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
                                                              ATerm t_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, l_10);
                                                              t = i_0(t);
                                                              t_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, k_10, t_32);
                                                              t = i_0(t);
                                                              LocalPopChoice(k_19);
                                                            }
                                                          else
                                                            {
                                                              t = j_19;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm l_19 = t;
                                                          int m_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                              t = i_0(t);
                                                              b_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, b_33);
                                                              t = i_0(t);
                                                              LocalPopChoice(m_19);
                                                            }
                                                          else
                                                            {
                                                              t = l_19;
                                                              {
                                                                ATerm n_19 = t;
                                                                int o_19 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm h_33 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, l_10);
                                                                    t = i_0(t);
                                                                    h_33 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, k_10, h_33);
                                                                    t = i_0(t);
                                                                    LocalPopChoice(o_19);
                                                                  }
                                                                else
                                                                  {
                                                                    t = n_19;
                                                                    t = q_10;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            m_10 = ATgetArgument(t, 0);
                                                            n_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm p_19 = t;
                                                              int q_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_33 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, l_10);
                                                                  t = i_0(t);
                                                                  m_33 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, k_10, m_33);
                                                                  t = i_0(t);
                                                                  LocalPopChoice(q_19);
                                                                }
                                                              else
                                                                {
                                                                  t = p_19;
                                                                  {
                                                                    ATerm r_19 = t;
                                                                    int s_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm q_33 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                                        t = i_0(t);
                                                                        q_33 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, q_33);
                                                                        t = i_0(t);
                                                                        LocalPopChoice(s_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_19;
                                                                        t = q_10;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm t_19 = t;
                                                            int u_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm v_33 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, l_10);
                                                                t = i_0(t);
                                                                v_33 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, k_10, v_33);
                                                                t = i_0(t);
                                                                LocalPopChoice(u_19);
                                                              }
                                                            else
                                                              {
                                                                t = t_19;
                                                                t = q_10;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = p_10;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = o_10;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm v_19 = t;
                                                    int w_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_e_8;
                                                        t = i_0(t);
                                                        LocalPopChoice(w_19);
                                                      }
                                                    else
                                                      {
                                                        t = v_19;
                                                        t = q_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        m_10 = ATgetArgument(t, 0);
                                                        n_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm x_19 = t;
                                                          int z_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                              t = i_0(t);
                                                              i_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, i_34);
                                                              t = i_0(t);
                                                              LocalPopChoice(z_19);
                                                            }
                                                          else
                                                            {
                                                              t = x_19;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            m_10 = ATgetArgument(t, 0);
                                                            n_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm a_20 = t;
                                                              int b_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm p_34 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_10, o_10);
                                                                  t = i_0(t);
                                                                  p_34 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, p_34);
                                                                  t = i_0(t);
                                                                  LocalPopChoice(b_20);
                                                                }
                                                              else
                                                                {
                                                                  t = a_20;
                                                                  t = q_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_10;
                                                          }
                                                      }
                                                  }
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
                    p_10 = ATgetArgument(t, 0);
                    o_10 = ATgetArgument(t, 1);
                    t = o_10;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = p_10;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm d_20 = t;
                            int e_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_r_7;
                                t = i_0(t);
                                LocalPopChoice(e_20);
                              }
                            else
                              {
                                t = d_20;
                                t = p_10;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = o_10;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    m_10 = ATgetArgument(t, 0);
                                    n_10 = ATgetArgument(t, 1);
                                    t = p_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        m_10 = ATgetArgument(t, 0);
                                        t = p_10;
                                      }
                                    else
                                      {
                                        t = p_10;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = p_10;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm f_20 = t;
                            int g_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_r_7;
                                t = i_0(t);
                                LocalPopChoice(g_20);
                              }
                            else
                              {
                                t = f_20;
                                {
                                  ATerm h_20 = t;
                                  int i_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = o_10;
                                      if((p_10 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(i_20);
                                    }
                                  else
                                    {
                                      t = h_20;
                                      t = q_10;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = o_10;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    m_10 = ATgetArgument(t, 0);
                                    n_10 = ATgetArgument(t, 1);
                                    {
                                      ATerm j_20 = t;
                                      int k_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm b_37 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, n_10, o_10);
                                          t = i_0(t);
                                          b_37 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, m_10, b_37);
                                          t = i_0(t);
                                          LocalPopChoice(k_20);
                                        }
                                      else
                                        {
                                          t = j_20;
                                          {
                                            ATerm l_20 = t;
                                            int m_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = o_10;
                                                if((p_10 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(m_20);
                                              }
                                            else
                                              {
                                                t = l_20;
                                                t = q_10;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        m_10 = ATgetArgument(t, 0);
                                        {
                                          ATerm n_20 = t;
                                          int o_20 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = o_10;
                                              if((p_10 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(o_20);
                                            }
                                          else
                                            {
                                              t = n_20;
                                              {
                                                ATerm p_20 = t;
                                                int r_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = m_10;
                                                    t = topdown_1_0(b_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, m_10);
                                                    t = bottomup_1_0(i_0, t);
                                                    LocalPopChoice(r_20);
                                                  }
                                                else
                                                  {
                                                    t = p_20;
                                                    t = q_10;
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
                                            t = o_10;
                                            if((p_10 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(u_20);
                                          }
                                        else
                                          {
                                            t = t_20;
                                            t = q_10;
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
                        p_10 = ATgetArgument(t, 0);
                        o_10 = ATgetArgument(t, 1);
                        t = o_10;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = p_10;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm v_20 = t;
                                int w_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_r_7;
                                    t = i_0(t);
                                    LocalPopChoice(w_20);
                                  }
                                else
                                  {
                                    t = v_20;
                                    t = o_10;
                                  }
                              }
                            else
                              {
                                ATerm x_20 = t;
                                int z_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_r_7;
                                    t = i_0(t);
                                    LocalPopChoice(z_20);
                                  }
                                else
                                  {
                                    t = x_20;
                                    t = q_10;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = p_10;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm a_21 = t;
                                    int b_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_e_8;
                                        t = i_0(t);
                                        LocalPopChoice(b_21);
                                      }
                                    else
                                      {
                                        t = a_21;
                                        t = o_10;
                                      }
                                  }
                                else
                                  {
                                    ATerm c_21 = t;
                                    int d_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_e_8;
                                        t = i_0(t);
                                        LocalPopChoice(d_21);
                                      }
                                    else
                                      {
                                        t = c_21;
                                        t = q_10;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    k_10 = ATgetArgument(t, 0);
                                    l_10 = ATgetArgument(t, 1);
                                    t = p_10;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = o_10;
                                      }
                                    else
                                      {
                                        ATerm e_21 = t;
                                        int f_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm l_38 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, p_10, k_10);
                                            t = conc_0_0(t);
                                            l_38 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, l_38, l_10);
                                            t = bottomup_1_0(i_0, t);
                                            LocalPopChoice(f_21);
                                          }
                                        else
                                          {
                                            t = e_21;
                                            t = q_10;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = p_10;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = o_10;
                                      }
                                    else
                                      {
                                        t = q_10;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm g_21 = t;
                        int h_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm i_21 = ATgetArgument(t, 0);
                                o_10 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(h_21);
                            t = o_10;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm j_21 = t;
                                int k_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_r_7;
                                    t = i_0(t);
                                    LocalPopChoice(k_21);
                                  }
                                else
                                  {
                                    t = j_21;
                                    t = q_10;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm l_21 = t;
                                    int m_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_e_8;
                                        t = i_0(t);
                                        LocalPopChoice(m_21);
                                      }
                                    else
                                      {
                                        t = l_21;
                                        t = q_10;
                                      }
                                  }
                                else
                                  {
                                    t = q_10;
                                  }
                              }
                          }
                        else
                          {
                            t = g_21;
                            if(match_cons(t, sym_All_1))
                              {
                                p_10 = ATgetArgument(t, 0);
                                t = p_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm n_21 = t;
                                    int o_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_r_7;
                                        t = i_0(t);
                                        LocalPopChoice(o_21);
                                      }
                                    else
                                      {
                                        t = n_21;
                                        t = q_10;
                                      }
                                  }
                                else
                                  {
                                    t = q_10;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    p_10 = ATgetArgument(t, 0);
                                    t = p_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm p_21 = t;
                                        int q_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_r_7;
                                            t = i_0(t);
                                            LocalPopChoice(q_21);
                                          }
                                        else
                                          {
                                            t = p_21;
                                            {
                                              ATerm s_21 = t;
                                              int t_21 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm f_39 = NULL,g_39 = NULL,i_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,v_39 = NULL;
                                                  t = q_10;
                                                  t = new_0_0(t);
                                                  f_39 = t;
                                                  t = bottomup_1_0(i_0, t);
                                                  t_39 = t;
                                                  t = (ATerm) ATempty;
                                                  t = i_0(t);
                                                  v_39 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(v_39), t_39);
                                                  t = i_0(t);
                                                  g_39 = t;
                                                  t = f_39;
                                                  t = bottomup_1_0(i_0, t);
                                                  s_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, s_39);
                                                  t = i_0(t);
                                                  r_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, r_39);
                                                  t = i_0(t);
                                                  l_39 = t;
                                                  t = p_10;
                                                  t = bottomup_1_0(i_0, t);
                                                  n_39 = t;
                                                  t = f_39;
                                                  t = bottomup_1_0(i_0, t);
                                                  q_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_39);
                                                  t = i_0(t);
                                                  p_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, p_39);
                                                  t = i_0(t);
                                                  o_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_39, o_39);
                                                  t = i_0(t);
                                                  m_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, l_39, m_39);
                                                  t = i_0(t);
                                                  i_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, g_39, i_39);
                                                  t = i_0(t);
                                                  LocalPopChoice(t_21);
                                                }
                                              else
                                                {
                                                  t = s_21;
                                                  t = q_10;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm u_21 = t;
                                            int v_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_e_8;
                                                t = i_0(t);
                                                LocalPopChoice(v_21);
                                              }
                                            else
                                              {
                                                t = u_21;
                                                {
                                                  ATerm w_21 = t;
                                                  int y_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,p_40 = NULL,s_40 = NULL,t_40 = NULL;
                                                      t = q_10;
                                                      t = new_0_0(t);
                                                      z_39 = t;
                                                      t = bottomup_1_0(i_0, t);
                                                      s_40 = t;
                                                      t = (ATerm) ATempty;
                                                      t = i_0(t);
                                                      t_40 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(t_40), s_40);
                                                      t = i_0(t);
                                                      a_40 = t;
                                                      t = z_39;
                                                      t = bottomup_1_0(i_0, t);
                                                      p_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, p_40);
                                                      t = i_0(t);
                                                      i_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, i_40);
                                                      t = i_0(t);
                                                      c_40 = t;
                                                      t = p_10;
                                                      t = bottomup_1_0(i_0, t);
                                                      e_40 = t;
                                                      t = z_39;
                                                      t = bottomup_1_0(i_0, t);
                                                      h_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, h_40);
                                                      t = i_0(t);
                                                      g_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, g_40);
                                                      t = i_0(t);
                                                      f_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_40, f_40);
                                                      t = i_0(t);
                                                      d_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_40, d_40);
                                                      t = i_0(t);
                                                      b_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, a_40, b_40);
                                                      t = i_0(t);
                                                      LocalPopChoice(y_21);
                                                    }
                                                  else
                                                    {
                                                      t = w_21;
                                                      t = q_10;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                m_10 = ATgetArgument(t, 0);
                                                n_10 = ATgetArgument(t, 1);
                                                t = n_10;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    v_9 = ATgetArgument(t, 0);
                                                    z_9 = ATgetArgument(t, 1);
                                                    t = v_9;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        y_9 = ATgetArgument(t, 0);
                                                        t = m_10;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            i_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm z_21 = t;
                                                              int a_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_40 = NULL,c_41 = NULL,d_41 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, y_9);
                                                                  t = i_0(t);
                                                                  d_41 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_41, z_9);
                                                                  t = i_0(t);
                                                                  c_41 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, c_41);
                                                                  t = i_0(t);
                                                                  y_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, y_40);
                                                                  t = i_0(t);
                                                                  LocalPopChoice(a_22);
                                                                }
                                                              else
                                                                {
                                                                  t = z_21;
                                                                  {
                                                                    ATerm b_22 = t;
                                                                    int c_22 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm f_41 = NULL,h_41 = NULL,i_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,t_41 = NULL,w_41 = NULL,x_41 = NULL;
                                                                        t = q_10;
                                                                        t = new_0_0(t);
                                                                        f_41 = t;
                                                                        t = bottomup_1_0(i_0, t);
                                                                        w_41 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = i_0(t);
                                                                        x_41 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(x_41), w_41);
                                                                        t = i_0(t);
                                                                        h_41 = t;
                                                                        t = f_41;
                                                                        t = bottomup_1_0(i_0, t);
                                                                        t_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, t_41);
                                                                        t = i_0(t);
                                                                        r_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, r_41);
                                                                        t = i_0(t);
                                                                        l_41 = t;
                                                                        t = p_10;
                                                                        t = bottomup_1_0(i_0, t);
                                                                        n_41 = t;
                                                                        t = f_41;
                                                                        t = bottomup_1_0(i_0, t);
                                                                        q_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, q_41);
                                                                        t = i_0(t);
                                                                        p_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, p_41);
                                                                        t = i_0(t);
                                                                        o_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_41, o_41);
                                                                        t = i_0(t);
                                                                        m_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, l_41, m_41);
                                                                        t = i_0(t);
                                                                        i_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, h_41, i_41);
                                                                        t = i_0(t);
                                                                        LocalPopChoice(c_22);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_22;
                                                                        t = q_10;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm d_22 = t;
                                                            int e_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm a_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,i_42 = NULL,j_42 = NULL,l_42 = NULL,m_42 = NULL,o_42 = NULL,r_42 = NULL,u_42 = NULL,v_42 = NULL;
                                                                t = q_10;
                                                                t = new_0_0(t);
                                                                a_42 = t;
                                                                t = bottomup_1_0(i_0, t);
                                                                u_42 = t;
                                                                t = (ATerm) ATempty;
                                                                t = i_0(t);
                                                                v_42 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(v_42), u_42);
                                                                t = i_0(t);
                                                                d_42 = t;
                                                                t = a_42;
                                                                t = bottomup_1_0(i_0, t);
                                                                r_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, r_42);
                                                                t = i_0(t);
                                                                o_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, o_42);
                                                                t = i_0(t);
                                                                f_42 = t;
                                                                t = p_10;
                                                                t = bottomup_1_0(i_0, t);
                                                                i_42 = t;
                                                                t = a_42;
                                                                t = bottomup_1_0(i_0, t);
                                                                m_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, m_42);
                                                                t = i_0(t);
                                                                l_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, l_42);
                                                                t = i_0(t);
                                                                j_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_42, j_42);
                                                                t = i_0(t);
                                                                g_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, f_42, g_42);
                                                                t = i_0(t);
                                                                e_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, d_42, e_42);
                                                                t = i_0(t);
                                                                LocalPopChoice(e_22);
                                                              }
                                                            else
                                                              {
                                                                t = d_22;
                                                                t = q_10;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = m_10;
                                                        {
                                                          ATerm f_22 = t;
                                                          int g_22 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,h_43 = NULL,i_43 = NULL,l_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL;
                                                              t = q_10;
                                                              t = new_0_0(t);
                                                              b_43 = t;
                                                              t = bottomup_1_0(i_0, t);
                                                              r_43 = t;
                                                              t = (ATerm) ATempty;
                                                              t = i_0(t);
                                                              s_43 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(s_43), r_43);
                                                              t = i_0(t);
                                                              c_43 = t;
                                                              t = b_43;
                                                              t = bottomup_1_0(i_0, t);
                                                              q_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, q_43);
                                                              t = i_0(t);
                                                              p_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, p_43);
                                                              t = i_0(t);
                                                              e_43 = t;
                                                              t = p_10;
                                                              t = bottomup_1_0(i_0, t);
                                                              i_43 = t;
                                                              t = b_43;
                                                              t = bottomup_1_0(i_0, t);
                                                              o_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, o_43);
                                                              t = i_0(t);
                                                              n_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, n_43);
                                                              t = i_0(t);
                                                              l_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_43, l_43);
                                                              t = i_0(t);
                                                              h_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, e_43, h_43);
                                                              t = i_0(t);
                                                              d_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, c_43, d_43);
                                                              t = i_0(t);
                                                              LocalPopChoice(g_22);
                                                            }
                                                          else
                                                            {
                                                              t = f_22;
                                                              t = q_10;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = m_10;
                                                    {
                                                      ATerm h_22 = t;
                                                      int j_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm w_43 = NULL,b_44 = NULL,e_44 = NULL,h_44 = NULL,i_44 = NULL,l_44 = NULL,n_44 = NULL,o_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,y_44 = NULL;
                                                          t = q_10;
                                                          t = new_0_0(t);
                                                          w_43 = t;
                                                          t = bottomup_1_0(i_0, t);
                                                          v_44 = t;
                                                          t = (ATerm) ATempty;
                                                          t = i_0(t);
                                                          y_44 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(y_44), v_44);
                                                          t = i_0(t);
                                                          b_44 = t;
                                                          t = w_43;
                                                          t = bottomup_1_0(i_0, t);
                                                          u_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, u_44);
                                                          t = i_0(t);
                                                          t_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, t_44);
                                                          t = i_0(t);
                                                          h_44 = t;
                                                          t = p_10;
                                                          t = bottomup_1_0(i_0, t);
                                                          l_44 = t;
                                                          t = w_43;
                                                          t = bottomup_1_0(i_0, t);
                                                          s_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, s_44);
                                                          t = i_0(t);
                                                          o_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, o_44);
                                                          t = i_0(t);
                                                          n_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, l_44, n_44);
                                                          t = i_0(t);
                                                          i_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_44, i_44);
                                                          t = i_0(t);
                                                          e_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, b_44, e_44);
                                                          t = i_0(t);
                                                          LocalPopChoice(j_22);
                                                        }
                                                      else
                                                        {
                                                          t = h_22;
                                                          t = q_10;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    m_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm k_22 = t;
                                                      int l_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, m_10);
                                                          t = i_0(t);
                                                          LocalPopChoice(l_22);
                                                        }
                                                      else
                                                        {
                                                          t = k_22;
                                                          {
                                                            ATerm m_22 = t;
                                                            int n_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm e_45 = NULL,g_45 = NULL,i_45 = NULL,j_45 = NULL,n_45 = NULL,p_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL;
                                                                t = q_10;
                                                                t = new_0_0(t);
                                                                e_45 = t;
                                                                t = bottomup_1_0(i_0, t);
                                                                w_45 = t;
                                                                t = (ATerm) ATempty;
                                                                t = i_0(t);
                                                                x_45 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(x_45), w_45);
                                                                t = i_0(t);
                                                                g_45 = t;
                                                                t = e_45;
                                                                t = bottomup_1_0(i_0, t);
                                                                v_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, v_45);
                                                                t = i_0(t);
                                                                u_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, u_45);
                                                                t = i_0(t);
                                                                j_45 = t;
                                                                t = p_10;
                                                                t = bottomup_1_0(i_0, t);
                                                                p_45 = t;
                                                                t = e_45;
                                                                t = bottomup_1_0(i_0, t);
                                                                t_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, t_45);
                                                                t = i_0(t);
                                                                s_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, s_45);
                                                                t = i_0(t);
                                                                r_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_45, r_45);
                                                                t = i_0(t);
                                                                n_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, j_45, n_45);
                                                                t = i_0(t);
                                                                i_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, g_45, i_45);
                                                                t = i_0(t);
                                                                LocalPopChoice(n_22);
                                                              }
                                                            else
                                                              {
                                                                t = m_22;
                                                                t = q_10;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm o_22 = t;
                                                    int p_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL;
                                                        t = q_10;
                                                        t = new_0_0(t);
                                                        a_46 = t;
                                                        t = bottomup_1_0(i_0, t);
                                                        l_46 = t;
                                                        t = (ATerm) ATempty;
                                                        t = i_0(t);
                                                        m_46 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(m_46), l_46);
                                                        t = i_0(t);
                                                        b_46 = t;
                                                        t = a_46;
                                                        t = bottomup_1_0(i_0, t);
                                                        k_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, k_46);
                                                        t = i_0(t);
                                                        j_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, j_46);
                                                        t = i_0(t);
                                                        d_46 = t;
                                                        t = p_10;
                                                        t = bottomup_1_0(i_0, t);
                                                        f_46 = t;
                                                        t = a_46;
                                                        t = bottomup_1_0(i_0, t);
                                                        i_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, i_46);
                                                        t = i_0(t);
                                                        h_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, h_46);
                                                        t = i_0(t);
                                                        g_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_46, g_46);
                                                        t = i_0(t);
                                                        e_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_46, e_46);
                                                        t = i_0(t);
                                                        c_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, b_46, c_46);
                                                        t = i_0(t);
                                                        LocalPopChoice(p_22);
                                                      }
                                                    else
                                                      {
                                                        t = o_22;
                                                        t = q_10;
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
                                        p_10 = ATgetArgument(t, 0);
                                        t = p_10;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm q_22 = t;
                                            int r_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_r_7;
                                                t = i_0(t);
                                                LocalPopChoice(r_22);
                                              }
                                            else
                                              {
                                                t = q_22;
                                                t = q_10;
                                              }
                                          }
                                        else
                                          {
                                            t = q_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            p_10 = ATgetArgument(t, 0);
                                            t = p_10;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm s_22 = t;
                                                int u_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_e_8;
                                                    t = i_0(t);
                                                    LocalPopChoice(u_22);
                                                  }
                                                else
                                                  {
                                                    t = s_22;
                                                    t = q_10;
                                                  }
                                              }
                                            else
                                              {
                                                t = q_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                p_10 = ATgetArgument(t, 0);
                                                t = p_10;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm v_22 = t;
                                                    int w_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_e_8;
                                                        t = i_0(t);
                                                        LocalPopChoice(w_22);
                                                      }
                                                    else
                                                      {
                                                        t = v_22;
                                                        t = q_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = q_10;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm x_22 = t;
                                                int y_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm z_22 = ATgetArgument(t, 0);
                                                        o_10 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(y_22);
                                                    t = o_10;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm a_23 = t;
                                                        int b_23 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_e_8;
                                                            t = i_0(t);
                                                            LocalPopChoice(b_23);
                                                          }
                                                        else
                                                          {
                                                            t = a_23;
                                                            t = q_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = q_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = x_22;
                                                    {
                                                      ATerm d_23 = t;
                                                      int e_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm f_23 = ATgetArgument(t, 0);
                                                              o_10 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(e_23);
                                                          {
                                                            ATerm g_23 = t;
                                                            int h_23 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = o_10;
                                                                t = fetch_1_0(c_1, t);
                                                                t = term_e_8;
                                                                t = bottomup_1_0(i_0, t);
                                                                LocalPopChoice(h_23);
                                                              }
                                                            else
                                                              {
                                                                t = g_23;
                                                                t = q_10;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = d_23;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              p_10 = ATgetArgument(t, 0);
                                                              o_10 = ATgetArgument(t, 1);
                                                              t = o_10;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = p_10;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = o_10;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          m_10 = ATgetArgument(t, 0);
                                                                          n_10 = ATgetArgument(t, 1);
                                                                          t = p_10;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = p_10;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = p_10;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = o_10;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          m_10 = ATgetArgument(t, 0);
                                                                          n_10 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm i_23 = t;
                                                                            int j_23 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm b_48 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, n_10, o_10);
                                                                                t = i_0(t);
                                                                                b_48 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, m_10, b_48);
                                                                                t = i_0(t);
                                                                                LocalPopChoice(j_23);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = i_23;
                                                                                {
                                                                                  ATerm k_23 = t;
                                                                                  int m_23 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = o_10;
                                                                                      if((p_10 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(m_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = k_23;
                                                                                      t = q_10;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm n_23 = t;
                                                                          int o_23 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = o_10;
                                                                              if((p_10 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(o_23);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = n_23;
                                                                              t = q_10;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  p_10 = ATgetArgument(t, 0);
                                                                  o_10 = ATgetArgument(t, 1);
                                                                  m_9 = ATgetArgument(t, 2);
                                                                  t = m_9;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm p_23 = t;
                                                                      int q_23 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, o_10);
                                                                          t = i_0(t);
                                                                          LocalPopChoice(q_23);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = p_23;
                                                                          t = q_10;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = q_10;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      p_10 = ATgetArgument(t, 0);
                                                                      o_10 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm r_23 = t;
                                                                        int s_23 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, p_10, o_10);
                                                                            t = i_0(t);
                                                                            LocalPopChoice(s_23);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = r_23;
                                                                            t = q_10;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          p_10 = ATgetArgument(t, 0);
                                                                          t = p_10;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              m_10 = ATgetFirst((ATermList) t);
                                                                              n_10 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm t_23 = t;
                                                                                int u_23 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm t_48 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, n_10);
                                                                                    t = i_0(t);
                                                                                    t_48 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, m_10, t_48);
                                                                                    t = i_0(t);
                                                                                    LocalPopChoice(u_23);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = t_23;
                                                                                    t = q_10;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm v_23 = t;
                                                                                  int w_23 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_e_8;
                                                                                      t = i_0(t);
                                                                                      LocalPopChoice(w_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = v_23;
                                                                                      t = q_10;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = q_10;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              p_10 = ATgetArgument(t, 0);
                                                                              t = p_10;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  m_10 = ATgetFirst((ATermList) t);
                                                                                  n_10 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm y_23 = t;
                                                                                    int z_23 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm z_48 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, n_10);
                                                                                        t = i_0(t);
                                                                                        z_48 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, m_10, z_48);
                                                                                        t = i_0(t);
                                                                                        LocalPopChoice(z_23);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = y_23;
                                                                                        t = q_10;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm a_24 = t;
                                                                                      int b_24 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_e_8;
                                                                                          t = i_0(t);
                                                                                          LocalPopChoice(b_24);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = a_24;
                                                                                          t = q_10;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = q_10;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  p_10 = ATgetArgument(t, 0);
                                                                                  t = p_10;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      m_10 = ATgetFirst((ATermList) t);
                                                                                      n_10 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm c_24 = t;
                                                                                        int d_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm f_49 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, n_10);
                                                                                            t = i_0(t);
                                                                                            f_49 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, f_49);
                                                                                            t = i_0(t);
                                                                                            LocalPopChoice(d_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = c_24;
                                                                                            t = q_10;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm e_24 = t;
                                                                                          int f_24 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_r_7;
                                                                                              t = i_0(t);
                                                                                              LocalPopChoice(f_24);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = e_24;
                                                                                              t = q_10;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = q_10;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      p_10 = ATgetArgument(t, 0);
                                                                                      o_10 = ATgetArgument(t, 1);
                                                                                      m_9 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm h_24 = t;
                                                                                        int i_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL;
                                                                                            t = term_j_24;
                                                                                            t = bottomup_1_0(i_0, t);
                                                                                            o_49 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = i_0(t);
                                                                                            r_49 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(r_49), m_9);
                                                                                            t = i_0(t);
                                                                                            q_49 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(q_49), p_10);
                                                                                            t = i_0(t);
                                                                                            p_49 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, o_49, p_49);
                                                                                            t = i_0(t);
                                                                                            n_49 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, o_10, n_49);
                                                                                            t = i_0(t);
                                                                                            LocalPopChoice(i_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = h_24;
                                                                                            t = q_10;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          p_10 = ATgetArgument(t, 0);
                                                                                          o_10 = ATgetArgument(t, 1);
                                                                                          m_9 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm k_24 = t;
                                                                                            int l_24 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, o_10);
                                                                                                t = i_0(t);
                                                                                                x_49 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, m_9);
                                                                                                t = i_0(t);
                                                                                                a_50 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = i_0(t);
                                                                                                b_50 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(b_50), a_50);
                                                                                                t = i_0(t);
                                                                                                z_49 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(z_49), p_10);
                                                                                                t = i_0(t);
                                                                                                y_49 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(y_49), x_49);
                                                                                                t = i_0(t);
                                                                                                w_49 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, w_49);
                                                                                                t = i_0(t);
                                                                                                LocalPopChoice(l_24);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = k_24;
                                                                                                t = q_10;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              p_10 = ATgetArgument(t, 0);
                                                                                              o_10 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm m_24 = t;
                                                                                                int n_24 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm f_50 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, o_10);
                                                                                                    t = i_0(t);
                                                                                                    f_50 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, p_10, f_50);
                                                                                                    t = i_0(t);
                                                                                                    LocalPopChoice(n_24);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = m_24;
                                                                                                    t = q_10;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  p_10 = ATgetArgument(t, 0);
                                                                                                  o_10 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm o_24 = t;
                                                                                                    int p_24 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm j_50 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, p_10);
                                                                                                        t = i_0(t);
                                                                                                        j_50 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, j_50, o_10);
                                                                                                        t = i_0(t);
                                                                                                        LocalPopChoice(p_24);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = o_24;
                                                                                                        t = q_10;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      p_10 = ATgetArgument(t, 0);
                                                                                                      o_10 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm q_24 = t;
                                                                                                        int r_24 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm n_50 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, o_10);
                                                                                                            t = i_0(t);
                                                                                                            n_50 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, n_50, p_10);
                                                                                                            t = i_0(t);
                                                                                                            LocalPopChoice(r_24);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = q_24;
                                                                                                            t = q_10;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          p_10 = ATgetArgument(t, 0);
                                                                                                          o_10 = ATgetArgument(t, 1);
                                                                                                          t = o_10;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              k_10 = ATgetArgument(t, 0);
                                                                                                              l_10 = ATgetArgument(t, 1);
                                                                                                              t = p_10;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = o_10;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm s_24 = t;
                                                                                                                  int t_24 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm z_50 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, p_10, k_10);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      z_50 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, z_50, l_10);
                                                                                                                      t = bottomup_1_0(i_0, t);
                                                                                                                      LocalPopChoice(t_24);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = s_24;
                                                                                                                      t = q_10;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  k_10 = ATgetArgument(t, 0);
                                                                                                                  l_10 = ATgetArgument(t, 1);
                                                                                                                  g_10 = ATgetArgument(t, 2);
                                                                                                                  t = g_10;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = l_10;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = k_10;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              j_10 = ATgetArgument(t, 0);
                                                                                                                              t = p_10;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = o_10;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      m_10 = ATgetFirst((ATermList) t);
                                                                                                                                      n_10 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = n_10;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = m_10;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              i_10 = ATgetArgument(t, 0);
                                                                                                                                              d_10 = ATgetArgument(t, 1);
                                                                                                                                              a_10 = ATgetArgument(t, 2);
                                                                                                                                              b_10 = ATgetArgument(t, 3);
                                                                                                                                              t = a_10;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = d_10;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm u_24 = t;
                                                                                                                                                      int w_24 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = j_10;
                                                                                                                                                          if((i_10 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = b_10;
                                                                                                                                                          {
                                                                                                                                                            ATerm x_24 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm e_1 (ATerm t);
                                                                                                                                                                static ATerm e_1 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm y_24 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(y_24, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((i_10 != ATgetArgument(y_24, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(y_24, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm z_24 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(z_24) != AT_LIST) || !(ATisEmpty(z_24))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm a_25 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(a_25) != AT_LIST) || !(ATisEmpty(a_25))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  return(t);
                                                                                                                                                                }
                                                                                                                                                                t = oncetd_1_0(e_1, t);
                                                                                                                                                                PopChoice();
                                                                                                                                                                _fail(t);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = x_24;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = b_10;
                                                                                                                                                          t = bottomup_1_0(i_0, t);
                                                                                                                                                          LocalPopChoice(w_24);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = u_24;
                                                                                                                                                          t = q_10;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = q_10;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = q_10;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = q_10;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = q_10;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = q_10;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = p_10;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = o_10;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = q_10;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = p_10;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = o_10;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = q_10;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = p_10;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = o_10;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = q_10;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = p_10;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = o_10;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = q_10;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              p_10 = ATgetArgument(t, 0);
                                                                                                              o_10 = ATgetArgument(t, 1);
                                                                                                              t = p_10;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = o_10;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = q_10;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = q_10;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  }
                                              }
                                          }
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
  t = bottomup_1_0(i_0, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm b_25 = t;
  if((PushChoice() == 0))
    {
      ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL,r_5 = NULL;
      z_52 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_52);
      x_52 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_52);
      r_5 = t;
      t = SSLsetAnnotations(r_5, x_52);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_25;
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_25;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_53 = ATgetFirst((ATermList) t);
      b_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_53, b_53);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_25 = ATgetArgument(t, 0);
      if(match_cons(d_25, sym__2))
        {
          c_53 = ATgetArgument(d_25, 0);
          d_53 = ATgetArgument(d_25, 1);
        }
      else
        _fail(t);
      {
        ATerm e_25 = ATgetArgument(t, 1);
        if(match_cons(e_25, sym__2))
          {
            e_53 = ATgetArgument(e_25, 0);
            f_53 = ATgetArgument(e_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_53), c_53), (ATerm) ATinsert(CheckATermList(f_53), d_53));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_25;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_53 = ATgetFirst((ATermList) t);
      h_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_53, h_53);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_25 = ATgetArgument(t, 0);
      if(match_cons(f_25, sym__2))
        {
          i_53 = ATgetArgument(f_25, 0);
          j_53 = ATgetArgument(f_25, 1);
        }
      else
        _fail(t);
      {
        ATerm g_25 = ATgetArgument(t, 1);
        if(match_cons(g_25, sym__2))
          {
            k_53 = ATgetArgument(g_25, 0);
            l_53 = ATgetArgument(g_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_53), i_53), (ATerm) ATinsert(CheckATermList(l_53), j_53));
  return(t);
}
static ATerm f_11 (ATerm h_30, ATerm i_30, ATerm j_30, ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL,m_52 = NULL,n_52 = NULL,r_52 = NULL,s_52 = NULL,v_52 = NULL,w_52 = NULL,s_5 = NULL;
  t = j_30;
  t = fetch_1_0(f_1, t);
  t = j_30;
  t = genzip_4_0(g_1, h_1, i_1, LiftPrimArg_0_0, t);
  w_52 = t;
  if(match_cons(t, sym__2))
    {
      n_52 = ATgetArgument(t, 0);
      r_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_52);
  m_52 = t;
  t = n_52;
  t = concat_0_0(t);
  s_52 = t;
  t = r_52;
  t = genzip_4_0(j_1, k_1, l_1, _id, t);
  v_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_52, v_52);
  s_5 = t;
  t = SSLsetAnnotations(s_5, m_52);
  if(match_cons(t, sym__2))
    {
      h_52 = ATgetArgument(t, 0);
      {
        ATerm h_25 = ATgetArgument(t, 1);
        if(match_cons(h_25, sym__2))
          {
            i_52 = ATgetArgument(h_25, 0);
            j_52 = ATgetArgument(h_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, h_52, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_52), (ATerm) ATmakeAppl(sym_CallT_3, h_30, i_30, j_52)));
  return(t);
}
ATerm genzip_4_0 (ATerm e_134 (ATerm), ATerm f_134 (ATerm), ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm t)
{
  static ATerm t_53 (ATerm t);
  static ATerm t_53 (ATerm t)
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_134(t);
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        {
          ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,j_7 = NULL;
          t = f_134(t);
          s_53 = t;
          if(match_cons(t, sym__2))
            {
              o_53 = ATgetArgument(t, 0);
              p_53 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_53);
          n_53 = t;
          t = o_53;
          t = h_134(t);
          q_53 = t;
          t = p_53;
          t = t_53(t);
          r_53 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_53, r_53);
          j_7 = t;
          t = SSLsetAnnotations(j_7, n_53);
          t = g_134(t);
        }
      }
    return(t);
  }
  t = t_53(t);
  return(t);
}
ATerm at_end_1_0 (ATerm s_151 (ATerm), ATerm t)
{
  static ATerm m_54 (ATerm t);
  static ATerm m_54 (ATerm t)
  {
    ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL;
    l_54 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_54 = ATgetFirst((ATermList) t);
        k_54 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_1 = NULL,w_1 = NULL,s_7 = NULL;
          t = SSLgetAnnotations(l_54);
          t_1 = t;
          t = k_54;
          t = m_54(t);
          w_1 = t;
          t = (ATerm) ATinsert(CheckATermList(w_1), j_54);
          s_7 = t;
          t = SSLsetAnnotations(s_7, t_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_54;
        t = s_151(t);
      }
    return(t);
  }
  t = m_54(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
  p_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_54;
    }
  else
    {
      static ATerm m_1 (ATerm t);
      static ATerm m_1 (ATerm t)
      {
        t = not_null(r_54);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_54 = ATgetFirst((ATermList) t);
          if(((r_54 != NULL) && (r_54 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_54;
      t = at_end_1_0(m_1, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm h_55 (ATerm x_54, ATerm t)
{
  ATerm z_54 = NULL;
  t = x_54;
  {
    ATerm k_25 = t;
    if((PushChoice() == 0))
      {
        ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL,u_7 = NULL;
        c_55 = t;
        if(match_cons(t, sym_Var_1))
          {
            b_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_55);
        a_55 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, b_55);
        u_7 = t;
        t = SSLsetAnnotations(u_7, a_55);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_25;
      }
  }
  t = new_0_0(t);
  z_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, z_54), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_54), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_54)))), (ATerm) ATmakeAppl(sym_Var_1, z_54)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL;
  e_55 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_55 = ATgetArgument(t, 0);
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_55(e_55, t);
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_r_7, (ATerm) ATmakeAppl(sym_Var_1, f_55)));
          }
      }
    }
  else
    {
      t = h_55(e_55, t);
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm q_25 = t;
  if((PushChoice() == 0))
    {
      ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,a_8 = NULL;
      t_2 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_2);
      r_2 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, s_2);
      a_8 = t;
      t = SSLsetAnnotations(a_8, r_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_25;
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_25;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_2 = ATgetFirst((ATermList) t);
      v_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_2, v_2);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_25 = ATgetArgument(t, 0);
      if(match_cons(s_25, sym__2))
        {
          w_2 = ATgetArgument(s_25, 0);
          x_2 = ATgetArgument(s_25, 1);
        }
      else
        _fail(t);
      {
        ATerm y_25 = ATgetArgument(t, 1);
        if(match_cons(y_25, sym__2))
          {
            y_2 = ATgetArgument(y_25, 0);
            z_2 = ATgetArgument(y_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_2), w_2), (ATerm) ATinsert(CheckATermList(z_2), x_2));
  return(t);
}
static ATerm r_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_25;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_3 = ATgetFirst((ATermList) t);
      b_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_3, b_3);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_25 = ATgetArgument(t, 0);
      if(match_cons(z_25, sym__2))
        {
          c_3 = ATgetArgument(z_25, 0);
          d_3 = ATgetArgument(z_25, 1);
        }
      else
        _fail(t);
      {
        ATerm a_26 = ATgetArgument(t, 1);
        if(match_cons(a_26, sym__2))
          {
            e_3 = ATgetArgument(a_26, 0);
            f_3 = ATgetArgument(a_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_3), c_3), (ATerm) ATinsert(CheckATermList(f_3), d_3));
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm b_26 = t;
  if((PushChoice() == 0))
    {
      ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,c_8 = NULL;
      b_4 = t;
      if(match_cons(t, sym_Var_1))
        {
          a_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_4);
      z_3 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, a_4);
      c_8 = t;
      t = SSLsetAnnotations(c_8, z_3);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_26;
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_25;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_4 = ATgetFirst((ATermList) t);
      d_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_4, d_4);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_26 = ATgetArgument(t, 0);
      if(match_cons(c_26, sym__2))
        {
          e_4 = ATgetArgument(c_26, 0);
          f_4 = ATgetArgument(c_26, 1);
        }
      else
        _fail(t);
      {
        ATerm d_26 = ATgetArgument(t, 1);
        if(match_cons(d_26, sym__2))
          {
            g_4 = ATgetArgument(d_26, 0);
            h_4 = ATgetArgument(d_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_4), e_4), (ATerm) ATinsert(CheckATermList(h_4), f_4));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_25;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_4 = ATgetFirst((ATermList) t);
      j_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_4, j_4);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_26 = ATgetArgument(t, 0);
      if(match_cons(e_26, sym__2))
        {
          k_4 = ATgetArgument(e_26, 0);
          l_4 = ATgetArgument(e_26, 1);
        }
      else
        _fail(t);
      {
        ATerm f_26 = ATgetArgument(t, 1);
        if(match_cons(f_26, sym__2))
          {
            m_4 = ATgetArgument(f_26, 0);
            n_4 = ATgetArgument(f_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_4), k_4), (ATerm) ATinsert(CheckATermList(n_4), l_4));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm a_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL;
  f_58 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      g_58 = ATgetArgument(t, 0);
      h_58 = ATgetArgument(t, 1);
      a_58 = ATgetArgument(t, 2);
      {
        ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,b_8 = NULL;
        t = a_58;
        t = fetch_1_0(n_1, t);
        t = a_58;
        t = genzip_4_0(o_1, p_1, q_1, LiftPrimArg_0_0, t);
        q_2 = t;
        if(match_cons(t, sym__2))
          {
            m_2 = ATgetArgument(t, 0);
            n_2 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_2);
        l_2 = t;
        t = m_2;
        t = concat_0_0(t);
        o_2 = t;
        t = n_2;
        t = genzip_4_0(r_1, s_1, u_1, _id, t);
        p_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_2, p_2);
        b_8 = t;
        t = SSLsetAnnotations(b_8, l_2);
        if(match_cons(t, sym__2))
          {
            i_2 = ATgetArgument(t, 0);
            {
              ATerm g_26 = ATgetArgument(t, 1);
              if(match_cons(g_26, sym__2))
                {
                  j_2 = ATgetArgument(g_26, 0);
                  k_2 = ATgetArgument(g_26, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_2, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_2), (ATerm) ATmakeAppl(sym_PrimT_3, g_58, h_58, k_2)));
      }
    }
  else
    {
      ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,f_8 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          g_58 = ATgetArgument(t, 0);
          h_58 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_58;
      t = fetch_1_0(v_1, t);
      t = h_58;
      t = genzip_4_0(x_1, y_1, z_1, LiftPrimArg_0_0, t);
      y_3 = t;
      if(match_cons(t, sym__2))
        {
          u_3 = ATgetArgument(t, 0);
          v_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_3);
      t_3 = t;
      t = u_3;
      t = concat_0_0(t);
      w_3 = t;
      t = v_3;
      t = genzip_4_0(a_2, b_2, c_2, _id, t);
      x_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_3, x_3);
      f_8 = t;
      t = SSLsetAnnotations(f_8, t_3);
      if(match_cons(t, sym__2))
        {
          q_3 = ATgetArgument(t, 0);
          {
            ATerm i_26 = ATgetArgument(t, 1);
            if(match_cons(i_26, sym__2))
              {
                r_3 = ATgetArgument(i_26, 0);
                s_3 = ATgetArgument(i_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, q_3, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_3), (ATerm) ATmakeAppl(sym_PrimT_3, g_58, (ATerm)ATempty, s_3)));
    }
  return(t);
}
ATerm topdown_1_0 (ATerm n_129 (ATerm), ATerm t)
{
  static ATerm d_2 (ATerm t);
  static ATerm d_2 (ATerm t)
  {
    t = topdown_1_0(n_129, t);
    return(t);
  }
  t = n_129(t);
  t = SRTS_all(d_2, t);
  return(t);
}
ATerm map_1_0 (ATerm b_151 (ATerm), ATerm t)
{
  static ATerm a_59 (ATerm t);
  static ATerm a_59 (ATerm t)
  {
    ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL;
    x_58 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_58;
      }
    else
      {
        ATerm v_4 = NULL,y_4 = NULL,z_4 = NULL,k_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_58 = ATgetFirst((ATermList) t);
            z_58 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_58);
        v_4 = t;
        t = y_58;
        t = b_151(t);
        y_4 = t;
        t = z_58;
        t = a_59(t);
        z_4 = t;
        t = (ATerm) ATinsert(CheckATermList(z_4), y_4);
        k_9 = t;
        t = SSLsetAnnotations(k_9, v_4);
      }
    return(t);
  }
  t = a_59(t);
  return(t);
}
static ATerm j_11 (ATerm f_47, ATerm g_47, ATerm t)
{
  ATerm c_59 = NULL;
  t = SSL_fputc(f_47, g_47);
  c_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_59);
  return(t);
}
static ATerm k_11 (ATerm o_52, ATerm p_52, ATerm t)
{
  ATerm d_59 = NULL;
  t = SSL_write_term_to_stream_text(o_52, p_52);
  d_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_59);
  return(t);
}
static ATerm m_11 (ATerm b_144 (ATerm), ATerm b_475, ATerm u_52, ATerm t)
{
  ATerm e_59 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_475, term_j_26);
  t = q_11(t);
  e_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_59, u_52);
  t = b_144(t);
  t = fclose_0_0(t);
  t = u_52;
  return(t);
}
static ATerm l_11 (ATerm k_52, ATerm l_52, ATerm t)
{
  ATerm f_59 = NULL;
  t = SSL_write_term_to_stream_baf(k_52, l_52);
  f_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_59);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_26 = ATgetArgument(t, 0);
      if(match_cons(k_26, sym_Stream_1))
        {
          m_59 = ATgetArgument(k_26, 0);
        }
      else
        _fail(t);
      n_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11(m_59, n_59, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_26 = ATgetArgument(t, 0);
      if(match_cons(l_26, sym_Stream_1))
        {
          r_59 = ATgetArgument(l_26, 0);
        }
      else
        _fail(t);
      s_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(r_59, s_59, t);
  o_59 = t;
  t = term_m_26;
  p_59 = t;
  t = o_59;
  if(match_cons(t, sym_Stream_1))
    {
      q_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_26, o_59);
  t = j_11(p_59, q_59, t);
  return(t);
}
ATerm output_1_0 (ATerm p_160 (ATerm), ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL;
  t = p_160(t);
  h_59 = t;
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_59 = NULL,j_59 = NULL;
        t = term_p_26;
        i_59 = t;
        t = term_q_26;
        j_59 = t;
        t = term_r_26;
        t = w_11(i_59, j_59, t);
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = term_t_26;
      }
  }
  g_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_59, h_59);
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_59 = NULL,l_59 = NULL;
        t = term_p_26;
        k_59 = t;
        t = term_w_26;
        l_59 = t;
        t = term_x_26;
        t = w_11(k_59, l_59, t);
        t = (ATerm) ATmakeAppl(sym__2, g_59, h_59);
        LocalPopChoice(v_26);
        if(match_cons(t, sym__2))
          {
            ATerm y_26 = ATgetArgument(t, 0);
            ATerm z_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_11(e_2, g_59, h_59, t);
      }
    else
      {
        t = u_26;
        if(match_cons(t, sym__2))
          {
            ATerm a_27 = ATgetArgument(t, 0);
            ATerm b_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_11(f_2, g_59, h_59, t);
      }
  }
  return(t);
}
static ATerm g_60 (ATerm a_60, ATerm t)
{
  t = SSL_fclose(a_60);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL;
  e_60 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_60 = ATgetArgument(t, 0);
      {
        ATerm c_27 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_60);
            LocalPopChoice(d_27);
          }
        else
          {
            t = c_27;
            t = g_60(e_60, t);
          }
      }
    }
  else
    {
      t = g_60(e_60, t);
    }
  return(t);
}
static ATerm n_11 (ATerm q_52, ATerm t)
{
  t = SSL_read_term_from_stream(q_52);
  return(t);
}
static ATerm o_11 (ATerm l_45, ATerm m_45, ATerm t)
{
  t = SSL_strcat(l_45, m_45);
  return(t);
}
static ATerm p_11 (ATerm h_47, ATerm j_47, ATerm t)
{
  ATerm h_60 = NULL;
  t = SSL_fopen(h_47, j_47);
  h_60 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_60);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_60 = NULL;
  t = SSL_stdin_stream();
  i_60 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_60);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_60 = NULL;
  t = SSL_stdout_stream();
  j_60 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_60);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_60 = NULL;
  t = SSL_stderr_stream();
  k_60 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_60);
  return(t);
}
static ATerm b_62 (ATerm q_60, ATerm t)
{
  ATerm r_60 = NULL;
  t = SSL_explode_term(q_60);
  if(match_cons(t, sym__2))
    {
      ATerm e_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_27 = ATgetArgument(t, 1);
        if(((ATgetType(g_27) == AT_LIST) && !(ATisEmpty(g_27))))
          {
            r_60 = ATgetFirst((ATermList) g_27);
            {
              ATerm h_27 = (ATerm) ATgetNext((ATermList) g_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_60;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_60;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_60;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_60;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_62 (ATerm u_60, ATerm v_60, ATerm w_60, ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL,m_61 = NULL,n_9 = NULL;
  t = SSLgetAnnotations(w_60);
  z_60 = t;
  t = u_60;
  if(match_cons(t, sym_Path_1))
    {
      m_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_61, v_60);
  n_9 = t;
  t = SSLsetAnnotations(n_9, z_60);
  if(match_cons(t, sym__2))
    {
      x_60 = ATgetArgument(t, 0);
      y_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(x_60, y_60, t);
  return(t);
}
static ATerm d_62 (ATerm o_61, ATerm p_61, ATerm q_61, ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL,w_61 = NULL,o_9 = NULL;
  t = SSLgetAnnotations(q_61);
  t_61 = t;
  t = SSL_is_string(o_61);
  w_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_61, p_61);
  o_9 = t;
  t = SSLsetAnnotations(o_9, t_61);
  if(match_cons(t, sym__2))
    {
      r_61 = ATgetArgument(t, 0);
      s_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(r_61, s_61, t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm y_61 = NULL,z_61 = NULL,a_62 = NULL;
  y_61 = t;
  if(match_cons(t, sym__2))
    {
      z_61 = ATgetArgument(t, 0);
      a_62 = ATgetArgument(t, 1);
      {
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_62(y_61, t);
            LocalPopChoice(j_27);
          }
        else
          {
            t = i_27;
            {
              ATerm k_27 = t;
              int l_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_62(z_61, a_62, y_61, t);
                  LocalPopChoice(l_27);
                }
              else
                {
                  t = k_27;
                  t = d_62(z_61, a_62, y_61, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_62(y_61, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL,m_62 = NULL;
  m_62 = t;
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_62, term_o_27);
        t = q_11(t);
        LocalPopChoice(n_27);
      }
    else
      {
        t = m_27;
        {
          ATerm m_5 = NULL,n_5 = NULL;
          t = term_p_27;
          n_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_27, m_62);
          t = o_11(n_5, m_62, t);
          m_5 = t;
          t = SSL_perror(m_5);
          _fail(t);
        }
      }
  }
  g_62 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11(h_62, t);
  f_62 = t;
  t = g_62;
  t = fclose_0_0(t);
  t = f_62;
  return(t);
}
ATerm input_1_0 (ATerm q_160 (ATerm), ATerm t)
{
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_62 = NULL,q_62 = NULL;
      t = term_p_26;
      p_62 = t;
      t = term_s_27;
      q_62 = t;
      t = term_t_27;
      t = w_11(p_62, q_62, t);
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      t = term_v_27;
    }
  t = ReadFromFile_0_0(t);
  t = q_160(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL;
  t = term_p_26;
  r_62 = t;
  t = term_w_27;
  s_62 = t;
  t = term_x_27;
  t = w_11(r_62, s_62, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL;
  u_62 = t;
  {
    ATerm y_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_62;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_28 = ATgetFirst((ATermList) t);
                ATerm c_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_62;
          }
        LocalPopChoice(a_28);
      }
    else
      {
        t = y_27;
        t = (ATerm) ATinsert(ATempty, u_62);
      }
  }
  v_62 = t;
  t = term_t_26;
  w_62 = t;
  t = SSL_printnl(w_62, v_62);
  t = u_62;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_63 = ATgetFirst((ATermList) t);
      c_63 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_63 = NULL,h_63 = NULL;
        static ATerm g_2 (ATerm t);
        static ATerm g_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_63)), not_null(h_63));
          return(t);
        }
        t = c_63;
        t = o_0(t);
        if(((g_63 != NULL) && (g_63 != t)))
          _fail(t);
        else
          g_63 = t;
        t = b_63;
        t = m_0(t);
        if(((h_63 != NULL) && (h_63 != t)))
          _fail(t);
        else
          h_63 = t;
        t = c_63;
        t = reverse_acc_2_0(m_0, g_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_28;
      t = o_0(t);
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL,r_9 = NULL;
  r_63 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_63);
  p_63 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_63);
  r_9 = t;
  t = SSLsetAnnotations(r_9, p_63);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm v_63 = NULL;
  v_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_63), term_e_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm o_162 (ATerm), ATerm p_162 (ATerm), ATerm t)
{
  ATerm l_63 = NULL,m_63 = NULL;
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_63 = NULL,o_63 = NULL;
      t = term_p_26;
      n_63 = t;
      t = term_w_27;
      o_63 = t;
      t = term_x_27;
      t = w_11(n_63, o_63, t);
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      t = fetch_1_0(h_2, t);
    }
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_162(t);
        t = echo_0_0(t);
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
      }
  }
  t = term_k_28;
  t = echo_0_0(t);
  t = term_l_28;
  l_63 = t;
  t = term_m_28;
  m_63 = t;
  t = term_n_28;
  t = w_11(l_63, m_63, t);
  t = reverse_acc_2_0(_id, g_3, t);
  t = map_1_0(h_3, t);
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_63 = NULL;
        t = p_162(t);
        w_63 = t;
        t = (ATerm) ATinsert(CheckATermList(w_63), term_q_28);
        t = echo_0_0(t);
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
      }
  }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL,t_9 = NULL;
  e_64 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_64);
  c_64 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_64);
  t_9 = t;
  t = SSLsetAnnotations(t_9, c_64);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_63 = NULL;
  z_63 = t;
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_64 = NULL,b_64 = NULL;
        t = term_p_26;
        a_64 = t;
        t = term_w_27;
        b_64 = t;
        t = term_x_27;
        t = w_11(a_64, b_64, t);
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        t = fetch_1_0(i_3, t);
      }
  }
  t = z_63;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm g_64 = NULL;
  g_64 = t;
  if(match_string(t, "-k"))
    {
      t = g_64;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_64;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm h_64 = NULL,i_64 = NULL,j_64 = NULL;
  h_64 = t;
  t = SSL_string_to_int(h_64);
  i_64 = t;
  t = term_t_28;
  j_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_28, i_64);
  t = z_11(j_64, i_64, t);
  t = h_64;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_v_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_3, k_3, l_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm l_64 = NULL;
  l_64 = t;
  if(match_string(t, "-S"))
    {
      t = l_64;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_64;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm m_64 = NULL,n_64 = NULL;
  t = term_w_28;
  m_64 = t;
  t = term_x_28;
  n_64 = t;
  t = term_y_28;
  t = z_11(m_64, n_64, t);
  t = term_z_28;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_a_29;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL;
  o_64 = t;
  t = SSL_string_to_int(o_64);
  p_64 = t;
  t = term_w_28;
  q_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_28, p_64);
  t = z_11(q_64, p_64, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_64);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_b_29;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm r_64 = NULL,s_64 = NULL;
  t = term_c_29;
  r_64 = t;
  t = term_d_28;
  s_64 = t;
  t = term_e_29;
  t = z_11(r_64, s_64, t);
  t = term_f_29;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_g_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_3, n_3, o_3, t);
      LocalPopChoice(i_29);
    }
  else
    {
      t = h_29;
      {
        ATerm j_29 = t;
        int k_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_3, o_4, p_4, t);
            LocalPopChoice(k_29);
          }
        else
          {
            t = j_29;
            t = Option_3_0(q_4, r_4, s_4, t);
          }
      }
    }
  return(t);
}
static ATerm z_11 (ATerm e_51, ATerm f_51, ATerm t)
{
  ATerm t_64 = NULL,u_64 = NULL;
  t = term_p_26;
  t_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_26, e_51, f_51);
  t = lookup_table_0_1(t_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(e_51, f_51, u_64, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_26, e_51, f_51);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_65 = NULL,b_65 = NULL,c_65 = NULL;
      t = term_d_28;
      t = g_0(t);
      a_65 = t;
      t = term_l_28;
      b_65 = t;
      t = term_m_28;
      c_65 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_28, term_m_28, a_65);
      t = x_11(b_65, c_65, a_65, t);
      _fail(t);
    }
  else
    {
      ATerm f_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_64 = ATgetFirst((ATermList) t);
          z_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_64;
      t = b_0(t);
      t = term_d_28;
      t = d_0(t);
      f_65 = t;
      t = (ATerm) ATinsert(CheckATermList(z_64), f_65);
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm h_65 = NULL;
  h_65 = t;
  if(match_string(t, "-o"))
    {
      t = h_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_65;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm i_65 = NULL,j_65 = NULL;
  i_65 = t;
  t = term_q_26;
  j_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_26, i_65);
  t = z_11(j_65, i_65, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_65);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_l_29;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_4, u_4, w_4, t);
  return(t);
}
static ATerm x_11 (ATerm p_56, ATerm q_56, ATerm o_56, ATerm t)
{
  ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL;
  l_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_29 = ATgetArgument(t, 0);
            ATerm p_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
        t = w_11(p_56, q_56, t);
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
        t = (ATerm) ATempty;
      }
  }
  m_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_56, q_56, (ATerm) ATinsert(CheckATermList(m_65), o_56));
  t = lookup_table_0_1(p_56, t);
  p_65 = t;
  t = (ATerm) ATinsert(CheckATermList(m_65), o_56);
  n_65 = t;
  t = p_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(q_56, n_65, o_65, t);
  t = l_65;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL;
      t = term_d_28;
      t = l_0(t);
      a_66 = t;
      t = term_l_28;
      b_66 = t;
      t = term_m_28;
      c_66 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_28, term_m_28, a_66);
      t = x_11(b_66, c_66, a_66, t);
      _fail(t);
    }
  else
    {
      ATerm g_66 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_65 = ATgetFirst((ATermList) t);
          x_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_65;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_65 = ATgetFirst((ATermList) t);
          z_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_65;
      t = h_0(t);
      t = y_65;
      t = j_0(t);
      g_66 = t;
      t = (ATerm) ATinsert(CheckATermList(z_65), g_66);
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm i_66 = NULL;
  i_66 = t;
  if(match_string(t, "-i"))
    {
      t = i_66;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_66;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm j_66 = NULL,k_66 = NULL;
  j_66 = t;
  t = term_s_27;
  k_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_27, j_66);
  t = z_11(k_66, j_66, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_66);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_r_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, a_5, b_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_28;
  t = whoami_0_0(t);
  l_66 = t;
  t = term_s_29;
  n_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_29), l_66);
  o_66 = t;
  t = SSL_printnl(n_66, o_66);
  t = term_u_29;
  m_66 = t;
  t = SSL_exit(m_66);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL;
  t = term_p_26;
  p_66 = t;
  t = term_w_27;
  q_66 = t;
  t = term_x_27;
  t = w_11(p_66, q_66, t);
  return(t);
}
static ATerm r_11 (ATerm x_53, ATerm y_53, ATerm t)
{
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_53, y_53);
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      t = SSL_addr(x_53, y_53);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_153 (ATerm), ATerm k_153 (ATerm), ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL;
  s_66 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_66;
      t = j_153(t);
    }
  else
    {
      ATerm x_66 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_66 = ATgetFirst((ATermList) t);
          u_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_66;
      t = foldr_2_0(j_153, k_153, t);
      x_66 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_66, x_66);
      t = k_153(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_x_28;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL;
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      u_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(t_5, u_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_67 = NULL,p_5 = NULL,q_5 = NULL;
  t = times_0_0(t);
  q_5 = t;
  t = SSL_explode_term(q_5);
  if(match_cons(t, sym__2))
    {
      ATerm x_29 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5;
  t = foldr_2_0(c_5, d_5, t);
  a_67 = t;
  t = SSL_TicksToSeconds(a_67);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL;
  l_67 = t;
  if(match_cons(t, sym__2))
    {
      m_67 = ATgetArgument(t, 0);
      n_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_67;
        if((m_67 != t))
          {
            _fail(t);
          }
        t = l_67;
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        t = (ATerm) ATmakeAppl(sym__2, m_67, n_67);
        {
          ATerm a_30 = t;
          int b_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_67, n_67);
              LocalPopChoice(b_30);
            }
          else
            {
              t = a_30;
              t = SSL_gtr(m_67, n_67);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_67, n_67);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_141 (ATerm), ATerm t)
{
  ATerm r_67 = NULL;
  r_67 = t;
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL;
        t = term_p_26;
        u_67 = t;
        t = term_w_28;
        v_67 = t;
        t = term_e_30;
        t = w_11(u_67, v_67, t);
        t_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_67, term_u_29);
        t = geq_0_0(t);
        t = r_67;
        t = w_141(t);
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        t = r_67;
      }
  }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL,a_68 = NULL,b_68 = NULL;
  t = run_time_0_0(t);
  x_67 = t;
  t = term_d_28;
  t = whoami_0_0(t);
  y_67 = t;
  t = term_s_29;
  a_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_30), x_67), term_f_30), y_67);
  b_68 = t;
  t = SSL_printnl(a_68, b_68);
  t = (ATerm) ATmakeAppl(sym__2, term_s_29, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_30), x_67), term_f_30), y_67));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_68 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_28;
  c_68 = t;
  t = SSL_exit(c_68);
  return(t);
}
static ATerm a_12 (ATerm a_61, ATerm b_61, ATerm c_61, ATerm t)
{
  ATerm d_68 = NULL;
  t = SSL_hashtable_put(c_61, a_61, b_61);
  d_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_68);
  return(t);
}
ATerm lookup_table_0_1 (ATerm b_58, ATerm t)
{
  ATerm m_68 = NULL;
  t = table_hashtable_0_0(t);
  m_68 = t;
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_6 = NULL;
        t = m_68;
        if(match_cons(t, sym_Hashtable_1))
          {
            f_6 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_12(b_58, f_6, t);
        LocalPopChoice(l_30);
      }
    else
      {
        t = k_30;
        {
          ATerm k_6 = NULL;
          t = b_58;
          t = table_create_0_0(t);
          t = m_68;
          if(match_cons(t, sym_Hashtable_1))
            {
              k_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_12(b_58, k_6, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm i_61, ATerm j_61, ATerm t)
{
  ATerm p_68 = NULL;
  t = SSL_hashtable_create(i_61, j_61);
  p_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_68);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL,u_68 = NULL,v_68 = NULL;
  q_68 = t;
  t = term_m_30;
  u_68 = t;
  t = term_n_30;
  v_68 = t;
  t = q_68;
  t = new_hashtable_0_2(u_68, v_68, t);
  r_68 = t;
  t = q_68;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(q_68, r_68, s_68, t);
  t = q_68;
  return(t);
}
static ATerm t_11 (ATerm f_61, ATerm g_61, ATerm t)
{
  ATerm w_68 = NULL;
  t = SSL_hashtable_remove(g_61, f_61);
  w_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_68);
  return(t);
}
static ATerm u_11 (ATerm k_61, ATerm t)
{
  ATerm x_68 = NULL;
  t = SSL_hashtable_destroy(k_61);
  x_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_68);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm y_68 = NULL;
  t = SSL_table_hashtable();
  y_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_68);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL;
  z_68 = t;
  t = table_hashtable_0_0(t);
  a_69 = t;
  t = lookup_table_0_1(z_68, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(c_69, t);
  t = a_69;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(z_68, b_69, t);
  t = z_68;
  return(t);
}
ATerm fetch_1_0 (ATerm l_151 (ATerm), ATerm t)
{
  static ATerm z_69 (ATerm t);
  static ATerm z_69 (ATerm t)
  {
    ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL;
    w_69 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_69 = ATgetFirst((ATermList) t);
        y_69 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_30 = t;
      int p_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_6 = NULL,s_6 = NULL,w_9 = NULL;
          t = SSLgetAnnotations(w_69);
          p_6 = t;
          t = x_69;
          t = l_151(t);
          s_6 = t;
          t = (ATerm) ATinsert(CheckATermList(y_69), s_6);
          w_9 = t;
          t = SSLsetAnnotations(w_9, p_6);
          LocalPopChoice(p_30);
        }
      else
        {
          t = o_30;
          {
            ATerm a_7 = NULL,d_7 = NULL,x_9 = NULL;
            t = SSLgetAnnotations(w_69);
            a_7 = t;
            t = y_69;
            t = z_69(t);
            d_7 = t;
            t = (ATerm) ATinsert(CheckATermList(d_7), x_69);
            x_9 = t;
            t = SSLsetAnnotations(x_9, a_7);
          }
        }
    }
    return(t);
  }
  t = z_69(t);
  return(t);
}
static ATerm b_12 (ATerm d_61, ATerm e_61, ATerm t)
{
  t = SSL_hashtable_get(e_61, d_61);
  return(t);
}
static ATerm w_11 (ATerm i_58, ATerm j_58, ATerm t)
{
  ATerm c_70 = NULL;
  t = lookup_table_0_1(i_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_12(j_58, c_70, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm e_70 = NULL,f_70 = NULL;
  t = term_q_30;
  e_70 = t;
  t = term_d_28;
  f_70 = t;
  t = term_r_30;
  t = z_11(e_70, f_70, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_s_30;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL;
  t = term_q_30;
  i_70 = t;
  t = term_d_28;
  j_70 = t;
  t = term_r_30;
  t = z_11(i_70, j_70, t);
  t = term_u_30;
  g_70 = t;
  t = term_d_28;
  h_70 = t;
  t = term_v_30;
  t = z_11(g_70, h_70, t);
  t = term_w_30;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_x_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_5, g_5, h_5, t);
      LocalPopChoice(z_30);
    }
  else
    {
      t = y_30;
      t = Option_3_0(i_5, j_5, k_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t)
{
  ATerm k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL,i_14 = NULL;
  p_70 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_70 = ATgetFirst((ATermList) t);
      m_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_70);
  k_70 = t;
  t = l_70;
  t = n_113(t);
  n_70 = t;
  t = m_70;
  t = o_113(t);
  o_70 = t;
  t = (ATerm) ATinsert(CheckATermList(o_70), n_70);
  i_14 = t;
  t = SSLsetAnnotations(i_14, k_70);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_162 (ATerm), ATerm t)
{
  ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL,z_70 = NULL,a_71 = NULL,l_14 = NULL;
  u_70 = t;
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_31;
        t = j_162(t);
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
      }
  }
  t = u_70;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_70 = ATgetFirst((ATermList) t);
      x_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_70);
  v_70 = t;
  t = term_w_27;
  a_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_27, w_70);
  t = z_11(a_71, w_70, t);
  t = x_70;
  {
    static ATerm k_71 (ATerm t);
    static ATerm k_71 (ATerm t)
    {
      ATerm d_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_31 = t;
          int h_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_71 = NULL;
              d_71 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_71;
              LocalPopChoice(h_31);
            }
          else
            {
              t = g_31;
              t = j_162(t);
              t = Cons_2_0(_id, k_71, t);
            }
          LocalPopChoice(e_31);
        }
      else
        {
          t = d_31;
          {
            ATerm g_71 = NULL,h_71 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_71 = ATgetFirst((ATermList) t);
                h_71 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_71), (ATerm) ATmakeAppl(sym_Undefined_1, g_71));
          }
        }
      return(t);
    }
    t = k_71(t);
  }
  z_70 = t;
  t = (ATerm) ATinsert(CheckATermList(z_70), (ATerm) ATmakeAppl(sym_Program_1, w_70));
  l_14 = t;
  t = SSLsetAnnotations(l_14, v_70);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm x_71 = NULL;
  x_71 = t;
  if(match_string(t, "--help"))
    {
      t = x_71;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_71;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_71;
        }
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm y_71 = NULL,a_72 = NULL;
  t = term_i_31;
  y_71 = t;
  t = term_d_28;
  a_72 = t;
  t = term_j_31;
  t = z_11(y_71, a_72, t);
  t = term_l_31;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_m_31;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm g_162 (ATerm), ATerm h_162 (ATerm), ATerm i_162 (ATerm), ATerm t)
{
  ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL;
  r_71 = t;
  t = term_l_28;
  s_71 = t;
  t = term_n_31;
  t = lookup_table_0_1(s_71, t);
  w_71 = t;
  t = term_m_28;
  t_71 = t;
  t = (ATerm) ATempty;
  u_71 = t;
  t = w_71;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(t_71, u_71, v_71, t);
  t = r_71;
  {
    static ATerm l_5 (ATerm t);
    static ATerm l_5 (ATerm t)
    {
      ATerm o_31 = t;
      int q_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_162(t);
          LocalPopChoice(q_31);
        }
      else
        {
          t = o_31;
          {
            ATerm r_31 = t;
            int s_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_5, v_5, w_5, t);
                LocalPopChoice(s_31);
              }
            else
              {
                t = r_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_5, t);
  }
  {
    ATerm t_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_72 = NULL;
        l_72 = t;
        {
          ATerm w_31 = t;
          int x_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_7 = NULL;
              t = l_72;
              {
                ATerm z_31 = t;
                int a_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_7 = NULL,q_7 = NULL;
                    t = term_p_26;
                    p_7 = t;
                    t = term_i_31;
                    q_7 = t;
                    t = term_b_32;
                    t = w_11(p_7, q_7, t);
                    LocalPopChoice(a_32);
                  }
                else
                  {
                    t = z_31;
                    t = fetch_1_0(x_5, t);
                  }
              }
              t = l_72;
              t = h_162(t);
              t = term_x_28;
              o_7 = t;
              t = SSL_exit(o_7);
              LocalPopChoice(x_31);
            }
          else
            {
              t = w_31;
              {
                ATerm x_7 = NULL,y_7 = NULL,d_8 = NULL;
                t = term_p_26;
                y_7 = t;
                t = term_q_30;
                d_8 = t;
                t = term_c_32;
                t = w_11(y_7, d_8, t);
                t = l_72;
                t = i_162(t);
                t = term_x_28;
                x_7 = t;
                t = SSL_exit(x_7);
              }
            }
        }
        LocalPopChoice(v_31);
      }
    else
      {
        t = t_31;
        {
          ATerm e_32 = t;
          int f_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL;
              static ATerm y_5 (ATerm t);
              static ATerm y_5 (ATerm t)
              {
                ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL,n_14 = NULL;
                r_72 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_72 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_72);
                p_72 = t;
                t = q_72;
                if(((p_71 != NULL) && (p_71 != t)))
                  _fail(t);
                else
                  p_71 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_72);
                n_14 = t;
                t = SSLsetAnnotations(n_14, p_72);
                return(t);
              }
              t = fetch_1_0(y_5, t);
              t = term_s_29;
              n_72 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_71)), term_g_32);
              o_72 = t;
              t = SSL_printnl(n_72, o_72);
              t = (ATerm) ATmakeAppl(sym__2, term_s_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_71)), term_g_32));
              t = h_162(t);
              t = term_u_29;
              m_72 = t;
              t = SSL_exit(m_72);
              LocalPopChoice(f_32);
            }
          else
            {
              t = e_32;
            }
        }
      }
  }
  q_71 = t;
  t = term_l_28;
  t = table_destroy_0_0(t);
  t = q_71;
  return(t);
}
ATerm option_wrap_5_0 (ATerm j_160 (ATerm), ATerm k_160 (ATerm), ATerm l_160 (ATerm), ATerm m_160 (ATerm), ATerm n_160 (ATerm), ATerm t)
{
  ATerm w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL;
  t = parse_options_3_0(j_160, k_160, l_160, t);
  w_72 = t;
  t = term_h_32;
  t = table_create_0_0(t);
  t = term_h_32;
  x_72 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_32, term_i_32, w_72);
  t = lookup_table_0_1(x_72, t);
  a_73 = t;
  t = term_i_32;
  y_72 = t;
  t = a_73;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(y_72, w_72, z_72, t);
  t = w_72;
  t = m_160(t);
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_160(t);
        t = report_success_0_0(t);
        LocalPopChoice(k_32);
      }
    else
      {
        t = j_32;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      {
        ATerm n_32 = t;
        int o_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(o_32);
          }
        else
          {
            t = n_32;
            {
              ATerm p_32 = t;
              int q_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(b_6, c_6, d_6, t);
                  LocalPopChoice(q_32);
                }
              else
                {
                  t = p_32;
                  {
                    ATerm r_32 = t;
                    int s_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(s_32);
                      }
                    else
                      {
                        t = r_32;
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
static ATerm a_6 (ATerm t)
{
  t = input_1_0(e_6, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm h_73 = NULL,i_73 = NULL;
  t = term_w_26;
  h_73 = t;
  t = term_d_28;
  i_73 = t;
  t = term_u_32;
  t = z_11(h_73, i_73, t);
  t = term_v_32;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_w_32;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = output_1_0(g_6, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,y_14 = NULL,x_14 = NULL,w_14 = NULL,v_14 = NULL;
  y_73 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_73);
  k_73 = t;
  t = l_73;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_73 = ATgetFirst((ATermList) t);
      o_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_73);
  m_73 = t;
  t = o_73;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_73 = ATgetFirst((ATermList) t);
      s_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_73);
  q_73 = t;
  t = r_73;
  if(match_cons(t, sym_Strategies_1))
    {
      v_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_73);
  u_73 = t;
  t = v_73;
  t = map_1_0(h_6, t);
  w_73 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_73);
  v_14 = t;
  t = SSLsetAnnotations(v_14, u_73);
  x_73 = t;
  t = s_73;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_73), x_73);
  w_14 = t;
  t = SSLsetAnnotations(w_14, q_73);
  t_73 = t;
  t = (ATerm) ATinsert(CheckATermList(t_73), n_73);
  x_14 = t;
  t = SSLsetAnnotations(x_14, m_73);
  p_73 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, p_73);
  y_14 = t;
  t = SSLsetAnnotations(y_14, k_73);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm v_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL;
  z_74 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      v_74 = ATgetArgument(t, 0);
      w_74 = ATgetArgument(t, 1);
      x_74 = ATgetArgument(t, 2);
      y_74 = ATgetArgument(t, 3);
      {
        ATerm x_32 = t;
        int y_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_8 = NULL,s_8 = NULL,p_14 = NULL;
            t = SSLgetAnnotations(z_74);
            n_8 = t;
            t = y_74;
            t = topdown_1_0(i_6, t);
            t = simplify_0_0(t);
            s_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, v_74, w_74, x_74, s_8);
            p_14 = t;
            t = SSLsetAnnotations(p_14, n_8);
            LocalPopChoice(y_32);
          }
        else
          {
            t = x_32;
            t = z_74;
          }
      }
    }
  else
    {
      t = z_74;
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm z_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_33 = t;
      int d_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = LiftPrimArgs_0_0(t);
          LocalPopChoice(d_33);
        }
      else
        {
          t = c_33;
          {
            ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL;
            u_8 = t;
            if(match_cons(t, sym_CallT_3))
              {
                v_8 = ATgetArgument(t, 0);
                w_8 = ATgetArgument(t, 1);
                x_8 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = u_8;
            t = f_11(v_8, w_8, x_8, t);
          }
        }
      LocalPopChoice(a_33);
    }
  else
    {
      t = z_32;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(z_5, default_system_usage_0_0, default_system_about_0_0, _id, a_6, t);
  return(t);
}

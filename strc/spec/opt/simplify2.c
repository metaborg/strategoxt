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
static Symbol sym_Prim_2;
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
static Symbol sym_Prim_2;
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
static ATerm term_w_32;
static ATerm term_v_32;
static ATerm term_u_32;
static ATerm term_i_32;
static ATerm term_h_32;
static ATerm term_g_32;
static ATerm term_c_32;
static ATerm term_b_32;
static ATerm term_n_31;
static ATerm term_m_31;
static ATerm term_l_31;
static ATerm term_j_31;
static ATerm term_i_31;
static ATerm term_c_31;
static ATerm term_x_30;
static ATerm term_t_30;
static ATerm term_s_30;
static ATerm term_r_30;
static ATerm term_q_30;
static ATerm term_p_30;
static ATerm term_o_30;
static ATerm term_l_30;
static ATerm term_k_30;
static ATerm term_h_30;
static ATerm term_g_30;
static ATerm term_f_30;
static ATerm term_u_29;
static ATerm term_t_29;
static ATerm term_s_29;
static ATerm term_r_29;
static ATerm term_l_29;
static ATerm term_g_29;
static ATerm term_f_29;
static ATerm term_e_29;
static ATerm term_d_29;
static ATerm term_b_29;
static ATerm term_a_29;
static ATerm term_z_28;
static ATerm term_y_28;
static ATerm term_x_28;
static ATerm term_w_28;
static ATerm term_v_28;
static ATerm term_u_28;
static ATerm term_q_28;
static ATerm term_n_28;
static ATerm term_m_28;
static ATerm term_l_28;
static ATerm term_k_28;
static ATerm term_e_28;
static ATerm term_d_28;
static ATerm term_x_27;
static ATerm term_w_27;
static ATerm term_v_27;
static ATerm term_u_27;
static ATerm term_t_27;
static ATerm term_p_27;
static ATerm term_o_27;
static ATerm term_x_26;
static ATerm term_w_26;
static ATerm term_t_26;
static ATerm term_s_26;
static ATerm term_q_26;
static ATerm term_p_26;
static ATerm term_m_26;
static ATerm term_j_26;
static ATerm term_c_25;
static ATerm term_j_24;
static ATerm term_f_8;
static ATerm term_s_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_Fail_0);
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
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_q_26);
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
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_t_27);
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
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
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
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym__2, term_d_29, term_d_28);
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
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_w_28);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym__2, term_o_30, term_d_28);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym__2, term_r_30, term_d_28);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_Version_0);
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
  term_c_32 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_o_30);
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
ATerm bottomup_1_0 (ATerm c_136 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm f_137 (ATerm), ATerm t);
static ATerm s_0 (ATerm c_0, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm u_0 (ATerm t);
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
static ATerm f_11 (ATerm u_30, ATerm v_30, ATerm w_30, ATerm t);
ATerm genzip_4_0 (ATerm s_140 (ATerm), ATerm t_140 (ATerm), ATerm u_140 (ATerm), ATerm v_140 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm x_158 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm f_55 (ATerm w_54, ATerm t);
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
ATerm topdown_1_0 (ATerm b_136 (ATerm), ATerm t);
ATerm map_1_0 (ATerm i_158 (ATerm), ATerm t);
static ATerm j_11 (ATerm s_47, ATerm t_47, ATerm t);
static ATerm k_11 (ATerm b_53, ATerm c_53, ATerm t);
static ATerm m_11 (ATerm p_150 (ATerm), ATerm j_482, ATerm h_53, ATerm t);
static ATerm l_11 (ATerm x_52, ATerm y_52, ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm output_1_0 (ATerm i_168 (ATerm), ATerm t);
static ATerm f_60 (ATerm z_59, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_11 (ATerm d_53, ATerm t);
static ATerm o_11 (ATerm y_45, ATerm z_45, ATerm t);
static ATerm p_11 (ATerm u_47, ATerm v_47, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm q_61 (ATerm p_60, ATerm t);
static ATerm y_61 (ATerm t_60, ATerm u_60, ATerm v_60, ATerm t);
static ATerm c_62 (ATerm d_61, ATerm e_61, ATerm f_61, ATerm t);
static ATerm q_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm j_168 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm h_2 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm default_system_usage_2_0 (ATerm h_170 (ATerm), ATerm i_170 (ATerm), ATerm t);
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
static ATerm z_11 (ATerm r_51, ATerm s_51, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_11 (ATerm c_57, ATerm d_57, ATerm b_57, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_11 (ATerm k_54, ATerm l_54, ATerm t);
ATerm foldr_2_0 (ATerm o_160 (ATerm), ATerm p_160 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm k_148 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_12 (ATerm r_61, ATerm s_61, ATerm t_61, ATerm t);
ATerm lookup_table_0_1 (ATerm o_58, ATerm t);
ATerm new_hashtable_0_2 (ATerm z_61, ATerm a_62, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm t_11 (ATerm w_61, ATerm x_61, ATerm t);
static ATerm u_11 (ATerm b_62, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_158 (ATerm), ATerm t);
static ATerm b_12 (ATerm u_61, ATerm v_61, ATerm t);
static ATerm w_11 (ATerm v_58, ATerm w_58, ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm c_170 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm parse_options_3_0 (ATerm z_169 (ATerm), ATerm a_170 (ATerm), ATerm b_170 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm c_168 (ATerm), ATerm d_168 (ATerm), ATerm e_168 (ATerm), ATerm f_168 (ATerm), ATerm g_168 (ATerm), ATerm t);
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
ATerm bottomup_1_0 (ATerm c_136 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    t = bottomup_1_0(c_136, t);
    return(t);
  }
  t = SRTS_all(a_0, t);
  t = c_136(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm f_137 (ATerm), ATerm t)
{
  static ATerm t_0 (ATerm t);
  static ATerm t_0 (ATerm t)
  {
    ATerm j_6 = t;
    int l_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_137(t);
        LocalPopChoice(l_6);
      }
    else
      {
        t = j_6;
        t = SRTS_one(t_0, t);
      }
    return(t);
  }
  t = t_0(t);
  return(t);
}
static ATerm s_0 (ATerm c_0, ATerm t)
{
  ATerm e_0 = NULL;
  t = SSL_explode_term(c_0);
  if(match_cons(t, sym__2))
    {
      ATerm m_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_0;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_0 = NULL,k_0 = NULL,m_0 = NULL;
  m_0 = t;
  if(match_cons(t, sym__2))
    {
      i_0 = ATgetArgument(t, 0);
      k_0 = ATgetArgument(t, 1);
      {
        ATerm n_6 = t;
        int o_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_0 (ATerm t);
            static ATerm b_0 (ATerm t)
            {
              t = k_0;
              return(t);
            }
            t = i_0;
            t = at_end_1_0(b_0, t);
            LocalPopChoice(o_6);
          }
        else
          {
            t = n_6;
            t = s_0(m_0, t);
          }
      }
    }
  else
    {
      t = s_0(m_0, t);
    }
  return(t);
}
static ATerm n_0 (ATerm t)
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
static ATerm q_0 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_6 = ATgetArgument(t, 0);
      if(((ATgetType(t_6) == AT_LIST) && !(ATisEmpty(t_6))))
        {
          y_15 = ATgetFirst((ATermList) t_6);
          z_15 = (ATerm) ATgetNext((ATermList) t_6);
        }
      else
        _fail(t);
      {
        ATerm u_6 = ATgetArgument(t, 1);
        if(((ATgetType(u_6) == AT_LIST) && !(ATisEmpty(u_6))))
          {
            a_16 = ATgetFirst((ATermList) u_6);
            b_16 = (ATerm) ATgetNext((ATermList) u_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_15, a_16), (ATerm) ATmakeAppl(sym__2, z_15, b_16));
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm e_16 = NULL,g_16 = NULL;
  if(match_cons(t, sym__2))
    {
      e_16 = ATgetArgument(t, 0);
      g_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_16), e_16);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL;
  if(match_cons(t, sym__2))
    {
      n_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_16), (ATerm) ATmakeAppl(sym_Match_1, o_16));
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
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,r_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_6 = ATgetArgument(t, 0);
      if(((ATgetType(x_6) == AT_LIST) && !(ATisEmpty(x_6))))
        {
          l_25 = ATgetFirst((ATermList) x_6);
          m_25 = (ATerm) ATgetNext((ATermList) x_6);
        }
      else
        _fail(t);
      {
        ATerm y_6 = ATgetArgument(t, 1);
        if(((ATgetType(y_6) == AT_LIST) && !(ATisEmpty(y_6))))
          {
            n_25 = ATgetFirst((ATermList) y_6);
            r_25 = (ATerm) ATgetNext((ATermList) y_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_25, n_25), (ATerm) ATmakeAppl(sym__2, m_25, r_25));
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  if(match_cons(t, sym__2))
    {
      t_25 = ATgetArgument(t, 0);
      u_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_25), t_25);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL;
  if(match_cons(t, sym__2))
    {
      v_25 = ATgetArgument(t, 0);
      w_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_25), (ATerm) ATmakeAppl(sym_Match_1, w_25));
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
        ATerm h_37 = NULL,i_37 = NULL;
        h_37 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm e_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        i_37 = t;
        t = SSLgetAnnotations(h_37);
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
        t = i_37;
      }
    }
  else
    {
      t = z_6;
      {
        ATerm h_7 = t;
        int j_7 = stack_ptr;
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
            LocalPopChoice(j_7);
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
  static ATerm h_0 (ATerm t);
  static ATerm h_0 (ATerm t)
  {
    ATerm b_9 = NULL,m_9 = NULL,v_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
    p_10 = t;
    if(match_cons(t, sym_Test_1))
      {
        o_10 = ATgetArgument(t, 0);
        t = o_10;
        if(match_cons(t, sym_Id_0))
          {
            ATerm n_7 = t;
            int o_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_s_7;
                t = h_0(t);
                LocalPopChoice(o_7);
              }
            else
              {
                t = n_7;
                {
                  ATerm u_7 = t;
                  int v_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL;
                      t = p_10;
                      t = new_0_0(t);
                      r_10 = t;
                      t = bottomup_1_0(h_0, t);
                      c_11 = t;
                      t = (ATerm) ATempty;
                      t = h_0(t);
                      d_11 = t;
                      t = (ATerm) ATinsert(CheckATermList(d_11), c_11);
                      t = h_0(t);
                      s_10 = t;
                      t = r_10;
                      t = bottomup_1_0(h_0, t);
                      b_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, b_11);
                      t = h_0(t);
                      a_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, a_11);
                      t = h_0(t);
                      u_10 = t;
                      t = o_10;
                      t = bottomup_1_0(h_0, t);
                      w_10 = t;
                      t = r_10;
                      t = bottomup_1_0(h_0, t);
                      z_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, z_10);
                      t = h_0(t);
                      y_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, y_10);
                      t = h_0(t);
                      x_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_10, x_10);
                      t = h_0(t);
                      v_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_10, v_10);
                      t = h_0(t);
                      t_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, s_10, t_10);
                      t = h_0(t);
                      LocalPopChoice(v_7);
                    }
                  else
                    {
                      t = u_7;
                      t = p_10;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm w_7 = t;
                int x_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_f_8;
                    t = h_0(t);
                    LocalPopChoice(x_7);
                  }
                else
                  {
                    t = w_7;
                    {
                      ATerm g_8 = t;
                      int h_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm h_11 = NULL,i_11 = NULL,s_11 = NULL,v_11 = NULL,y_11 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL;
                          t = p_10;
                          t = new_0_0(t);
                          h_11 = t;
                          t = bottomup_1_0(h_0, t);
                          i_12 = t;
                          t = (ATerm) ATempty;
                          t = h_0(t);
                          j_12 = t;
                          t = (ATerm) ATinsert(CheckATermList(j_12), i_12);
                          t = h_0(t);
                          i_11 = t;
                          t = h_11;
                          t = bottomup_1_0(h_0, t);
                          h_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, h_12);
                          t = h_0(t);
                          g_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, g_12);
                          t = h_0(t);
                          v_11 = t;
                          t = o_10;
                          t = bottomup_1_0(h_0, t);
                          c_12 = t;
                          t = h_11;
                          t = bottomup_1_0(h_0, t);
                          f_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, f_12);
                          t = h_0(t);
                          e_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, e_12);
                          t = h_0(t);
                          d_12 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, d_12);
                          t = h_0(t);
                          y_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_11, y_11);
                          t = h_0(t);
                          s_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, i_11, s_11);
                          t = h_0(t);
                          LocalPopChoice(h_8);
                        }
                      else
                        {
                          t = g_8;
                          t = p_10;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    l_10 = ATgetArgument(t, 0);
                    {
                      ATerm i_8 = t;
                      int j_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, l_10);
                          t = h_0(t);
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
                                ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
                                t = p_10;
                                t = new_0_0(t);
                                n_12 = t;
                                t = bottomup_1_0(h_0, t);
                                y_12 = t;
                                t = (ATerm) ATempty;
                                t = h_0(t);
                                z_12 = t;
                                t = (ATerm) ATinsert(CheckATermList(z_12), y_12);
                                t = h_0(t);
                                o_12 = t;
                                t = n_12;
                                t = bottomup_1_0(h_0, t);
                                x_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, x_12);
                                t = h_0(t);
                                w_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, w_12);
                                t = h_0(t);
                                q_12 = t;
                                t = o_10;
                                t = bottomup_1_0(h_0, t);
                                s_12 = t;
                                t = n_12;
                                t = bottomup_1_0(h_0, t);
                                v_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, v_12);
                                t = h_0(t);
                                u_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, u_12);
                                t = h_0(t);
                                t_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, s_12, t_12);
                                t = h_0(t);
                                r_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, q_12, r_12);
                                t = h_0(t);
                                p_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, o_12, p_12);
                                t = h_0(t);
                                LocalPopChoice(l_8);
                              }
                            else
                              {
                                t = k_8;
                                t = p_10;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm m_8 = t;
                    int n_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL;
                        t = p_10;
                        t = new_0_0(t);
                        c_13 = t;
                        t = bottomup_1_0(h_0, t);
                        n_13 = t;
                        t = (ATerm) ATempty;
                        t = h_0(t);
                        o_13 = t;
                        t = (ATerm) ATinsert(CheckATermList(o_13), n_13);
                        t = h_0(t);
                        d_13 = t;
                        t = c_13;
                        t = bottomup_1_0(h_0, t);
                        m_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, m_13);
                        t = h_0(t);
                        l_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, l_13);
                        t = h_0(t);
                        f_13 = t;
                        t = o_10;
                        t = bottomup_1_0(h_0, t);
                        h_13 = t;
                        t = c_13;
                        t = bottomup_1_0(h_0, t);
                        k_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, k_13);
                        t = h_0(t);
                        j_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, j_13);
                        t = h_0(t);
                        i_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, h_13, i_13);
                        t = h_0(t);
                        g_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_13, g_13);
                        t = h_0(t);
                        e_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, d_13, e_13);
                        t = h_0(t);
                        LocalPopChoice(n_8);
                      }
                    else
                      {
                        t = m_8;
                        t = p_10;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            o_10 = ATgetArgument(t, 0);
            t = o_10;
            if(match_cons(t, sym_Id_0))
              {
                ATerm p_8 = t;
                int q_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_f_8;
                    t = h_0(t);
                    LocalPopChoice(q_8);
                  }
                else
                  {
                    t = p_8;
                    t = p_10;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm r_8 = t;
                    int s_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_s_7;
                        t = h_0(t);
                        LocalPopChoice(s_8);
                      }
                    else
                      {
                        t = r_8;
                        t = p_10;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        l_10 = ATgetArgument(t, 0);
                        {
                          ATerm u_8 = t;
                          int z_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, l_10);
                              t = h_0(t);
                              LocalPopChoice(z_8);
                            }
                          else
                            {
                              t = u_8;
                              t = p_10;
                            }
                        }
                      }
                    else
                      {
                        t = p_10;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                o_10 = ATgetArgument(t, 0);
                n_10 = ATgetArgument(t, 1);
                t = n_10;
                if(match_cons(t, sym_Id_0))
                  {
                    t = o_10;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = n_10;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = o_10;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                l_10 = ATgetArgument(t, 0);
                                m_10 = ATgetArgument(t, 1);
                                t = o_10;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    l_10 = ATgetArgument(t, 0);
                                    m_10 = ATgetArgument(t, 1);
                                    t = o_10;
                                  }
                                else
                                  {
                                    t = o_10;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        j_10 = ATgetArgument(t, 0);
                        k_10 = ATgetArgument(t, 1);
                        t = j_10;
                        if(match_cons(t, sym_Match_1))
                          {
                            i_10 = ATgetArgument(t, 0);
                            t = i_10;
                            if(match_cons(t, sym_Op_2))
                              {
                                g_10 = ATgetArgument(t, 0);
                                b_10 = ATgetArgument(t, 1);
                                t = o_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = n_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm a_9 = t;
                                        int c_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_f_8;
                                            t = h_0(t);
                                            LocalPopChoice(c_9);
                                          }
                                        else
                                          {
                                            t = a_9;
                                            t = p_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            l_10 = ATgetArgument(t, 0);
                                            m_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm d_9 = t;
                                              int e_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm o_15 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                  t = h_0(t);
                                                  o_15 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, l_10, o_15);
                                                  t = h_0(t);
                                                  LocalPopChoice(e_9);
                                                }
                                              else
                                                {
                                                  t = d_9;
                                                  t = p_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                l_10 = ATgetArgument(t, 0);
                                                t = l_10;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    h_10 = ATgetArgument(t, 0);
                                                    c_10 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm f_9 = t;
                                                      int g_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, h_10, g_10);
                                                          {
                                                            ATerm h_9 = t;
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
                                                                t = h_9;
                                                              }
                                                          }
                                                          t = term_f_8;
                                                          t = bottomup_1_0(h_0, t);
                                                          LocalPopChoice(g_9);
                                                        }
                                                      else
                                                        {
                                                          t = f_9;
                                                          {
                                                            ATerm i_9 = t;
                                                            int j_9 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm x_15 = NULL;
                                                                t = g_10;
                                                                if((h_10 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, c_10, b_10);
                                                                t = genzip_4_0(n_0, q_0, u_0, v_0, t);
                                                                x_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_10, c_10)), k_10));
                                                                t = bottomup_1_0(h_0, t);
                                                                LocalPopChoice(j_9);
                                                              }
                                                            else
                                                              {
                                                                t = i_9;
                                                                {
                                                                  ATerm k_9 = t;
                                                                  int n_9 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm r_16 = NULL;
                                                                      t = i_10;
                                                                      if((l_10 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, l_10);
                                                                      t = h_0(t);
                                                                      r_16 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, r_16, k_10);
                                                                      t = h_0(t);
                                                                      LocalPopChoice(n_9);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = k_9;
                                                                      t = p_10;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm q_9 = t;
                                                    int r_9 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm e_17 = NULL;
                                                        t = i_10;
                                                        if((l_10 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, l_10);
                                                        t = h_0(t);
                                                        e_17 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_17, k_10);
                                                        t = h_0(t);
                                                        LocalPopChoice(r_9);
                                                      }
                                                    else
                                                      {
                                                        t = q_9;
                                                        t = p_10;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    l_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm t_9 = t;
                                                      int w_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_17 = NULL;
                                                          t = i_10;
                                                          if((l_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, l_10);
                                                          t = h_0(t);
                                                          i_17 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_17, k_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(w_9);
                                                        }
                                                      else
                                                        {
                                                          t = t_9;
                                                          t = p_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        l_10 = ATgetArgument(t, 0);
                                                        m_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_10 = t;
                                                          int e_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_17 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                              t = h_0(t);
                                                              t_17 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, l_10, t_17);
                                                              t = h_0(t);
                                                              LocalPopChoice(e_11);
                                                            }
                                                          else
                                                            {
                                                              t = q_10;
                                                              t = p_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = p_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = o_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = n_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm g_11 = t;
                                        int k_12 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_f_8;
                                            t = h_0(t);
                                            LocalPopChoice(k_12);
                                          }
                                        else
                                          {
                                            t = g_11;
                                            t = p_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            l_10 = ATgetArgument(t, 0);
                                            m_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm l_12 = t;
                                              int m_12 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm l_18 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                  t = h_0(t);
                                                  l_18 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, l_10, l_18);
                                                  t = h_0(t);
                                                  LocalPopChoice(m_12);
                                                }
                                              else
                                                {
                                                  t = l_12;
                                                  t = p_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                l_10 = ATgetArgument(t, 0);
                                                {
                                                  ATerm a_13 = t;
                                                  int b_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_18 = NULL;
                                                      t = i_10;
                                                      if((l_10 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, l_10);
                                                      t = h_0(t);
                                                      p_18 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_18, k_10);
                                                      t = h_0(t);
                                                      LocalPopChoice(b_13);
                                                    }
                                                  else
                                                    {
                                                      t = a_13;
                                                      t = p_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    l_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm p_13 = t;
                                                      int q_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm w_18 = NULL;
                                                          t = i_10;
                                                          if((l_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, l_10);
                                                          t = h_0(t);
                                                          w_18 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_18, k_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(q_13);
                                                        }
                                                      else
                                                        {
                                                          t = p_13;
                                                          t = p_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        l_10 = ATgetArgument(t, 0);
                                                        m_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_13 = t;
                                                          int s_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_19 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                              t = h_0(t);
                                                              b_19 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, l_10, b_19);
                                                              t = h_0(t);
                                                              LocalPopChoice(s_13);
                                                            }
                                                          else
                                                            {
                                                              t = r_13;
                                                              t = p_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = p_10;
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
                                i_10 = ATgetArgument(t, 0);
                                t = i_10;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    g_10 = ATgetArgument(t, 0);
                                    t = o_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = n_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm t_13 = t;
                                            int u_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_f_8;
                                                t = h_0(t);
                                                LocalPopChoice(u_13);
                                              }
                                            else
                                              {
                                                t = t_13;
                                                t = p_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                l_10 = ATgetArgument(t, 0);
                                                m_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm v_13 = t;
                                                  int w_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm v_19 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                      t = h_0(t);
                                                      v_19 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_10, v_19);
                                                      t = h_0(t);
                                                      LocalPopChoice(w_13);
                                                    }
                                                  else
                                                    {
                                                      t = v_13;
                                                      t = p_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm x_13 = t;
                                                int y_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm z_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(y_13);
                                                    {
                                                      ATerm a_14 = t;
                                                      int b_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_20 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, i_10);
                                                          t = h_0(t);
                                                          b_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_20, k_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(b_14);
                                                        }
                                                      else
                                                        {
                                                          t = a_14;
                                                          t = p_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = x_13;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        l_10 = ATgetArgument(t, 0);
                                                        t = l_10;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            h_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm c_14 = t;
                                                              int d_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm l_20 = NULL,q_20 = NULL;
                                                                  t = g_10;
                                                                  if((h_10 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, h_10);
                                                                  t = h_0(t);
                                                                  q_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, q_20);
                                                                  t = h_0(t);
                                                                  l_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, l_20, k_10);
                                                                  t = h_0(t);
                                                                  LocalPopChoice(d_14);
                                                                }
                                                              else
                                                                {
                                                                  t = c_14;
                                                                  t = p_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = p_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            l_10 = ATgetArgument(t, 0);
                                                            m_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm e_14 = t;
                                                              int g_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm x_20 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                                  t = h_0(t);
                                                                  x_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, l_10, x_20);
                                                                  t = h_0(t);
                                                                  LocalPopChoice(g_14);
                                                                }
                                                              else
                                                                {
                                                                  t = e_14;
                                                                  t = p_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = p_10;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = o_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = n_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm h_14 = t;
                                            int i_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_f_8;
                                                t = h_0(t);
                                                LocalPopChoice(i_14);
                                              }
                                            else
                                              {
                                                t = h_14;
                                                t = p_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                l_10 = ATgetArgument(t, 0);
                                                m_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm j_14 = t;
                                                  int l_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                      t = h_0(t);
                                                      q_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_10, q_21);
                                                      t = h_0(t);
                                                      LocalPopChoice(l_14);
                                                    }
                                                  else
                                                    {
                                                      t = j_14;
                                                      t = p_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm n_14 = t;
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
                                                          ATerm w_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, i_10);
                                                          t = h_0(t);
                                                          w_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_21, k_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(s_14);
                                                        }
                                                      else
                                                        {
                                                          t = r_14;
                                                          t = p_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = n_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        l_10 = ATgetArgument(t, 0);
                                                        m_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_14 = t;
                                                          int u_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_22 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                              t = h_0(t);
                                                              h_22 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, l_10, h_22);
                                                              t = h_0(t);
                                                              LocalPopChoice(u_14);
                                                            }
                                                          else
                                                            {
                                                              t = t_14;
                                                              t = p_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = p_10;
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
                                    i_10 = ATgetArgument(t, 0);
                                    d_10 = ATgetArgument(t, 1);
                                    e_10 = ATgetArgument(t, 2);
                                    t = o_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = n_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm z_14 = t;
                                            int b_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_f_8;
                                                t = h_0(t);
                                                LocalPopChoice(b_15);
                                              }
                                            else
                                              {
                                                t = z_14;
                                                t = p_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                l_10 = ATgetArgument(t, 0);
                                                m_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm c_15 = t;
                                                  int d_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                      t = h_0(t);
                                                      s_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_10, s_22);
                                                      t = h_0(t);
                                                      LocalPopChoice(d_15);
                                                    }
                                                  else
                                                    {
                                                      t = c_15;
                                                      t = p_10;
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
                                                          ATerm b_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, i_10, d_10, e_10);
                                                          t = h_0(t);
                                                          b_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_23, k_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(i_15);
                                                        }
                                                      else
                                                        {
                                                          t = h_15;
                                                          t = p_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = e_15;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        l_10 = ATgetArgument(t, 0);
                                                        m_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_15 = t;
                                                          int k_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm k_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                              t = h_0(t);
                                                              k_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, l_10, k_23);
                                                              t = h_0(t);
                                                              LocalPopChoice(k_15);
                                                            }
                                                          else
                                                            {
                                                              t = j_15;
                                                              t = p_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = p_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = o_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = n_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm l_15 = t;
                                            int m_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_f_8;
                                                t = h_0(t);
                                                LocalPopChoice(m_15);
                                              }
                                            else
                                              {
                                                t = l_15;
                                                t = p_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                l_10 = ATgetArgument(t, 0);
                                                m_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm n_15 = t;
                                                  int p_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                      t = h_0(t);
                                                      w_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_10, w_23);
                                                      t = h_0(t);
                                                      LocalPopChoice(p_15);
                                                    }
                                                  else
                                                    {
                                                      t = n_15;
                                                      t = p_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    l_10 = ATgetArgument(t, 0);
                                                    m_10 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm q_15 = t;
                                                      int r_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm f_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                          t = h_0(t);
                                                          f_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, l_10, f_24);
                                                          t = h_0(t);
                                                          LocalPopChoice(r_15);
                                                        }
                                                      else
                                                        {
                                                          t = q_15;
                                                          t = p_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = p_10;
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
                            j_10 = ATgetArgument(t, 0);
                            t = j_10;
                            if(match_cons(t, sym_Op_2))
                              {
                                i_10 = ATgetArgument(t, 0);
                                d_10 = ATgetArgument(t, 1);
                                t = o_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = n_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm s_15 = t;
                                        int t_15 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_f_8;
                                            t = h_0(t);
                                            LocalPopChoice(t_15);
                                          }
                                        else
                                          {
                                            t = s_15;
                                            t = p_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            l_10 = ATgetArgument(t, 0);
                                            m_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm u_15 = t;
                                              int v_15 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm s_24 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                  t = h_0(t);
                                                  s_24 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, l_10, s_24);
                                                  t = h_0(t);
                                                  LocalPopChoice(v_15);
                                                }
                                              else
                                                {
                                                  t = u_15;
                                                  t = p_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                l_10 = ATgetArgument(t, 0);
                                                t = l_10;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    h_10 = ATgetArgument(t, 0);
                                                    c_10 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm w_15 = t;
                                                      int c_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, h_10, i_10);
                                                          {
                                                            ATerm d_16 = t;
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
                                                                t = d_16;
                                                              }
                                                          }
                                                          t = term_f_8;
                                                          t = bottomup_1_0(h_0, t);
                                                          LocalPopChoice(c_16);
                                                        }
                                                      else
                                                        {
                                                          t = w_15;
                                                          {
                                                            ATerm f_16 = t;
                                                            int h_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm g_25 = NULL;
                                                                t = i_10;
                                                                if((h_10 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, c_10, d_10);
                                                                t = genzip_4_0(x_0, y_0, z_0, a_1, t);
                                                                g_25 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_10, c_10)));
                                                                t = bottomup_1_0(h_0, t);
                                                                LocalPopChoice(h_16);
                                                              }
                                                            else
                                                              {
                                                                t = f_16;
                                                                {
                                                                  ATerm i_16 = t;
                                                                  int j_16 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = j_10;
                                                                      if((l_10 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, l_10);
                                                                      t = h_0(t);
                                                                      LocalPopChoice(j_16);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = i_16;
                                                                      t = p_10;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm k_16 = t;
                                                    int l_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = j_10;
                                                        if((l_10 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, l_10);
                                                        t = h_0(t);
                                                        LocalPopChoice(l_16);
                                                      }
                                                    else
                                                      {
                                                        t = k_16;
                                                        t = p_10;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    l_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm m_16 = t;
                                                      int p_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = j_10;
                                                          if((l_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, l_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(p_16);
                                                        }
                                                      else
                                                        {
                                                          t = m_16;
                                                          t = p_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        l_10 = ATgetArgument(t, 0);
                                                        m_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_16 = t;
                                                          int s_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                              t = h_0(t);
                                                              g_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, l_10, g_26);
                                                              t = h_0(t);
                                                              LocalPopChoice(s_16);
                                                            }
                                                          else
                                                            {
                                                              t = q_16;
                                                              t = p_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = p_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = o_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = n_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm t_16 = t;
                                        int u_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_f_8;
                                            t = h_0(t);
                                            LocalPopChoice(u_16);
                                          }
                                        else
                                          {
                                            t = t_16;
                                            t = p_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            l_10 = ATgetArgument(t, 0);
                                            m_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm v_16 = t;
                                              int w_16 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm r_26 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                  t = h_0(t);
                                                  r_26 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, l_10, r_26);
                                                  t = h_0(t);
                                                  LocalPopChoice(w_16);
                                                }
                                              else
                                                {
                                                  t = v_16;
                                                  t = p_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                l_10 = ATgetArgument(t, 0);
                                                {
                                                  ATerm x_16 = t;
                                                  int y_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = j_10;
                                                      if((l_10 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, l_10);
                                                      t = h_0(t);
                                                      LocalPopChoice(y_16);
                                                    }
                                                  else
                                                    {
                                                      t = x_16;
                                                      t = p_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    l_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm z_16 = t;
                                                      int a_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = j_10;
                                                          if((l_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, l_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(a_17);
                                                        }
                                                      else
                                                        {
                                                          t = z_16;
                                                          t = p_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        l_10 = ATgetArgument(t, 0);
                                                        m_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_17 = t;
                                                          int c_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm e_27 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                              t = h_0(t);
                                                              e_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, l_10, e_27);
                                                              t = h_0(t);
                                                              LocalPopChoice(c_17);
                                                            }
                                                          else
                                                            {
                                                              t = b_17;
                                                              t = p_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = p_10;
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
                                    i_10 = ATgetArgument(t, 0);
                                    t = o_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = n_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm d_17 = t;
                                            int f_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_f_8;
                                                t = h_0(t);
                                                LocalPopChoice(f_17);
                                              }
                                            else
                                              {
                                                t = d_17;
                                                t = p_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                l_10 = ATgetArgument(t, 0);
                                                m_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm g_17 = t;
                                                  int h_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_27 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                      t = h_0(t);
                                                      s_27 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_10, s_27);
                                                      t = h_0(t);
                                                      LocalPopChoice(h_17);
                                                    }
                                                  else
                                                    {
                                                      t = g_17;
                                                      t = p_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm j_17 = t;
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
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, j_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(n_17);
                                                        }
                                                      else
                                                        {
                                                          t = m_17;
                                                          t = p_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = j_17;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        l_10 = ATgetArgument(t, 0);
                                                        t = l_10;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            h_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm o_17 = t;
                                                              int p_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_27 = NULL;
                                                                  t = i_10;
                                                                  if((h_10 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, h_10);
                                                                  t = h_0(t);
                                                                  y_27 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, y_27);
                                                                  t = h_0(t);
                                                                  LocalPopChoice(p_17);
                                                                }
                                                              else
                                                                {
                                                                  t = o_17;
                                                                  t = p_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = p_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            l_10 = ATgetArgument(t, 0);
                                                            m_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm q_17 = t;
                                                              int r_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm g_28 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                                  t = h_0(t);
                                                                  g_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, l_10, g_28);
                                                                  t = h_0(t);
                                                                  LocalPopChoice(r_17);
                                                                }
                                                              else
                                                                {
                                                                  t = q_17;
                                                                  t = p_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = p_10;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = o_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = n_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm s_17 = t;
                                            int u_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_f_8;
                                                t = h_0(t);
                                                LocalPopChoice(u_17);
                                              }
                                            else
                                              {
                                                t = s_17;
                                                t = p_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                l_10 = ATgetArgument(t, 0);
                                                m_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm v_17 = t;
                                                  int w_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                      t = h_0(t);
                                                      t_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_10, t_28);
                                                      t = h_0(t);
                                                      LocalPopChoice(w_17);
                                                    }
                                                  else
                                                    {
                                                      t = v_17;
                                                      t = p_10;
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
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, j_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(b_18);
                                                        }
                                                      else
                                                        {
                                                          t = a_18;
                                                          t = p_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = x_17;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        l_10 = ATgetArgument(t, 0);
                                                        m_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm c_18 = t;
                                                          int d_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm c_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                              t = h_0(t);
                                                              c_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, l_10, c_29);
                                                              t = h_0(t);
                                                              LocalPopChoice(d_18);
                                                            }
                                                          else
                                                            {
                                                              t = c_18;
                                                              t = p_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = p_10;
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
                                    k_10 = ATgetArgument(t, 1);
                                    f_10 = ATgetArgument(t, 2);
                                    t = o_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = n_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm e_18 = t;
                                            int f_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_f_8;
                                                t = h_0(t);
                                                LocalPopChoice(f_18);
                                              }
                                            else
                                              {
                                                t = e_18;
                                                t = p_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                l_10 = ATgetArgument(t, 0);
                                                m_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm g_18 = t;
                                                  int h_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                      t = h_0(t);
                                                      p_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_10, p_29);
                                                      t = h_0(t);
                                                      LocalPopChoice(h_18);
                                                    }
                                                  else
                                                    {
                                                      t = g_18;
                                                      t = p_10;
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
                                                      ATerm m_18 = t;
                                                      int n_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, j_10, k_10, f_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(n_18);
                                                        }
                                                      else
                                                        {
                                                          t = m_18;
                                                          t = p_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = i_18;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        l_10 = ATgetArgument(t, 0);
                                                        m_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm o_18 = t;
                                                          int q_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                              t = h_0(t);
                                                              y_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, l_10, y_29);
                                                              t = h_0(t);
                                                              LocalPopChoice(q_18);
                                                            }
                                                          else
                                                            {
                                                              t = o_18;
                                                              t = p_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = p_10;
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
                                        j_10 = ATgetArgument(t, 0);
                                        k_10 = ATgetArgument(t, 1);
                                        t = o_10;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = n_10;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm r_18 = t;
                                                int s_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_f_8;
                                                    t = h_0(t);
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
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_10, k_10);
                                                          t = h_0(t);
                                                          f_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, j_10, f_31);
                                                          t = h_0(t);
                                                          LocalPopChoice(u_18);
                                                        }
                                                      else
                                                        {
                                                          t = t_18;
                                                          t = p_10;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    l_10 = ATgetArgument(t, 0);
                                                    m_10 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm v_18 = t;
                                                      int x_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm k_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                          t = h_0(t);
                                                          k_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, l_10, k_31);
                                                          t = h_0(t);
                                                          LocalPopChoice(x_18);
                                                        }
                                                      else
                                                        {
                                                          t = v_18;
                                                          {
                                                            ATerm y_18 = t;
                                                            int z_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_31 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, o_10, k_10);
                                                                t = h_0(t);
                                                                o_31 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, j_10, o_31);
                                                                t = h_0(t);
                                                                LocalPopChoice(z_18);
                                                              }
                                                            else
                                                              {
                                                                t = y_18;
                                                                t = p_10;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        l_10 = ATgetArgument(t, 0);
                                                        m_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_19 = t;
                                                          int c_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, o_10, k_10);
                                                              t = h_0(t);
                                                              t_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, j_10, t_31);
                                                              t = h_0(t);
                                                              LocalPopChoice(c_19);
                                                            }
                                                          else
                                                            {
                                                              t = a_19;
                                                              {
                                                                ATerm d_19 = t;
                                                                int e_19 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm z_31 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                                    t = h_0(t);
                                                                    z_31 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, l_10, z_31);
                                                                    t = h_0(t);
                                                                    LocalPopChoice(e_19);
                                                                  }
                                                                else
                                                                  {
                                                                    t = d_19;
                                                                    t = p_10;
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
                                                            ATerm f_32 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, o_10, k_10);
                                                            t = h_0(t);
                                                            f_32 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, j_10, f_32);
                                                            t = h_0(t);
                                                            LocalPopChoice(g_19);
                                                          }
                                                        else
                                                          {
                                                            t = f_19;
                                                            t = p_10;
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
                                            j_10 = ATgetArgument(t, 0);
                                            k_10 = ATgetArgument(t, 1);
                                            t = o_10;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = n_10;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm h_19 = t;
                                                    int i_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_f_8;
                                                        t = h_0(t);
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
                                                              ATerm q_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, o_10, k_10);
                                                              t = h_0(t);
                                                              q_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, j_10, q_32);
                                                              t = h_0(t);
                                                              LocalPopChoice(k_19);
                                                            }
                                                          else
                                                            {
                                                              t = j_19;
                                                              t = p_10;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        l_10 = ATgetArgument(t, 0);
                                                        m_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm l_19 = t;
                                                          int m_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                              t = h_0(t);
                                                              z_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, l_10, z_32);
                                                              t = h_0(t);
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
                                                                    ATerm g_33 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, o_10, k_10);
                                                                    t = h_0(t);
                                                                    g_33 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, j_10, g_33);
                                                                    t = h_0(t);
                                                                    LocalPopChoice(o_19);
                                                                  }
                                                                else
                                                                  {
                                                                    t = n_19;
                                                                    t = p_10;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            l_10 = ATgetArgument(t, 0);
                                                            m_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm p_19 = t;
                                                              int q_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm l_33 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_10, k_10);
                                                                  t = h_0(t);
                                                                  l_33 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, j_10, l_33);
                                                                  t = h_0(t);
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
                                                                        ATerm p_33 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                                        t = h_0(t);
                                                                        p_33 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, l_10, p_33);
                                                                        t = h_0(t);
                                                                        LocalPopChoice(s_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_19;
                                                                        t = p_10;
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
                                                                ATerm u_33 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, o_10, k_10);
                                                                t = h_0(t);
                                                                u_33 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, j_10, u_33);
                                                                t = h_0(t);
                                                                LocalPopChoice(u_19);
                                                              }
                                                            else
                                                              {
                                                                t = t_19;
                                                                t = p_10;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = o_10;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = n_10;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm w_19 = t;
                                                    int x_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_f_8;
                                                        t = h_0(t);
                                                        LocalPopChoice(x_19);
                                                      }
                                                    else
                                                      {
                                                        t = w_19;
                                                        t = p_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        l_10 = ATgetArgument(t, 0);
                                                        m_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm y_19 = t;
                                                          int z_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                              t = h_0(t);
                                                              f_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, l_10, f_34);
                                                              t = h_0(t);
                                                              LocalPopChoice(z_19);
                                                            }
                                                          else
                                                            {
                                                              t = y_19;
                                                              t = p_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            l_10 = ATgetArgument(t, 0);
                                                            m_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm a_20 = t;
                                                              int c_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm o_34 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_10, n_10);
                                                                  t = h_0(t);
                                                                  o_34 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, l_10, o_34);
                                                                  t = h_0(t);
                                                                  LocalPopChoice(c_20);
                                                                }
                                                              else
                                                                {
                                                                  t = a_20;
                                                                  t = p_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = p_10;
                                                          }
                                                      }
                                                  }
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
                    o_10 = ATgetArgument(t, 0);
                    n_10 = ATgetArgument(t, 1);
                    t = n_10;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = o_10;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm d_20 = t;
                            int e_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_s_7;
                                t = h_0(t);
                                LocalPopChoice(e_20);
                              }
                            else
                              {
                                t = d_20;
                                t = o_10;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = n_10;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    l_10 = ATgetArgument(t, 0);
                                    m_10 = ATgetArgument(t, 1);
                                    t = o_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        l_10 = ATgetArgument(t, 0);
                                        t = o_10;
                                      }
                                    else
                                      {
                                        t = o_10;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = o_10;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm f_20 = t;
                            int g_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_s_7;
                                t = h_0(t);
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
                                      t = n_10;
                                      if((o_10 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(i_20);
                                    }
                                  else
                                    {
                                      t = h_20;
                                      t = p_10;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = n_10;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    l_10 = ATgetArgument(t, 0);
                                    m_10 = ATgetArgument(t, 1);
                                    {
                                      ATerm j_20 = t;
                                      int k_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm a_37 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, m_10, n_10);
                                          t = h_0(t);
                                          a_37 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, l_10, a_37);
                                          t = h_0(t);
                                          LocalPopChoice(k_20);
                                        }
                                      else
                                        {
                                          t = j_20;
                                          {
                                            ATerm m_20 = t;
                                            int n_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = n_10;
                                                if((o_10 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(n_20);
                                              }
                                            else
                                              {
                                                t = m_20;
                                                t = p_10;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        l_10 = ATgetArgument(t, 0);
                                        {
                                          ATerm o_20 = t;
                                          int p_20 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = n_10;
                                              if((o_10 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(p_20);
                                            }
                                          else
                                            {
                                              t = o_20;
                                              {
                                                ATerm r_20 = t;
                                                int s_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = l_10;
                                                    t = topdown_1_0(b_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, l_10);
                                                    t = bottomup_1_0(h_0, t);
                                                    LocalPopChoice(s_20);
                                                  }
                                                else
                                                  {
                                                    t = r_20;
                                                    t = p_10;
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
                                            t = n_10;
                                            if((o_10 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(u_20);
                                          }
                                        else
                                          {
                                            t = t_20;
                                            t = p_10;
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
                        o_10 = ATgetArgument(t, 0);
                        n_10 = ATgetArgument(t, 1);
                        t = n_10;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = o_10;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm v_20 = t;
                                int w_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_s_7;
                                    t = h_0(t);
                                    LocalPopChoice(w_20);
                                  }
                                else
                                  {
                                    t = v_20;
                                    t = n_10;
                                  }
                              }
                            else
                              {
                                ATerm y_20 = t;
                                int z_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_s_7;
                                    t = h_0(t);
                                    LocalPopChoice(z_20);
                                  }
                                else
                                  {
                                    t = y_20;
                                    t = p_10;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = o_10;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm a_21 = t;
                                    int b_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_f_8;
                                        t = h_0(t);
                                        LocalPopChoice(b_21);
                                      }
                                    else
                                      {
                                        t = a_21;
                                        t = n_10;
                                      }
                                  }
                                else
                                  {
                                    ATerm c_21 = t;
                                    int d_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_f_8;
                                        t = h_0(t);
                                        LocalPopChoice(d_21);
                                      }
                                    else
                                      {
                                        t = c_21;
                                        t = p_10;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    j_10 = ATgetArgument(t, 0);
                                    k_10 = ATgetArgument(t, 1);
                                    t = o_10;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = n_10;
                                      }
                                    else
                                      {
                                        ATerm e_21 = t;
                                        int f_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm o_38 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, o_10, j_10);
                                            t = conc_0_0(t);
                                            o_38 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, o_38, k_10);
                                            t = bottomup_1_0(h_0, t);
                                            LocalPopChoice(f_21);
                                          }
                                        else
                                          {
                                            t = e_21;
                                            t = p_10;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = o_10;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = n_10;
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
                        ATerm g_21 = t;
                        int h_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm i_21 = ATgetArgument(t, 0);
                                n_10 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(h_21);
                            t = n_10;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm j_21 = t;
                                int k_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_s_7;
                                    t = h_0(t);
                                    LocalPopChoice(k_21);
                                  }
                                else
                                  {
                                    t = j_21;
                                    t = p_10;
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
                                        t = term_f_8;
                                        t = h_0(t);
                                        LocalPopChoice(m_21);
                                      }
                                    else
                                      {
                                        t = l_21;
                                        t = p_10;
                                      }
                                  }
                                else
                                  {
                                    t = p_10;
                                  }
                              }
                          }
                        else
                          {
                            t = g_21;
                            if(match_cons(t, sym_All_1))
                              {
                                o_10 = ATgetArgument(t, 0);
                                t = o_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm n_21 = t;
                                    int o_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_s_7;
                                        t = h_0(t);
                                        LocalPopChoice(o_21);
                                      }
                                    else
                                      {
                                        t = n_21;
                                        t = p_10;
                                      }
                                  }
                                else
                                  {
                                    t = p_10;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    o_10 = ATgetArgument(t, 0);
                                    t = o_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm p_21 = t;
                                        int r_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_s_7;
                                            t = h_0(t);
                                            LocalPopChoice(r_21);
                                          }
                                        else
                                          {
                                            t = p_21;
                                            {
                                              ATerm s_21 = t;
                                              int t_21 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm b_39 = NULL,f_39 = NULL,g_39 = NULL,i_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL;
                                                  t = p_10;
                                                  t = new_0_0(t);
                                                  b_39 = t;
                                                  t = bottomup_1_0(h_0, t);
                                                  s_39 = t;
                                                  t = (ATerm) ATempty;
                                                  t = h_0(t);
                                                  t_39 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(t_39), s_39);
                                                  t = h_0(t);
                                                  f_39 = t;
                                                  t = b_39;
                                                  t = bottomup_1_0(h_0, t);
                                                  r_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, r_39);
                                                  t = h_0(t);
                                                  q_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, q_39);
                                                  t = h_0(t);
                                                  i_39 = t;
                                                  t = o_10;
                                                  t = bottomup_1_0(h_0, t);
                                                  m_39 = t;
                                                  t = b_39;
                                                  t = bottomup_1_0(h_0, t);
                                                  p_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, p_39);
                                                  t = h_0(t);
                                                  o_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, o_39);
                                                  t = h_0(t);
                                                  n_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_39, n_39);
                                                  t = h_0(t);
                                                  l_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_39, l_39);
                                                  t = h_0(t);
                                                  g_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_39, g_39);
                                                  t = h_0(t);
                                                  LocalPopChoice(t_21);
                                                }
                                              else
                                                {
                                                  t = s_21;
                                                  t = p_10;
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
                                                t = term_f_8;
                                                t = h_0(t);
                                                LocalPopChoice(v_21);
                                              }
                                            else
                                              {
                                                t = u_21;
                                                {
                                                  ATerm x_21 = t;
                                                  int y_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,p_40 = NULL,s_40 = NULL;
                                                      t = p_10;
                                                      t = new_0_0(t);
                                                      y_39 = t;
                                                      t = bottomup_1_0(h_0, t);
                                                      p_40 = t;
                                                      t = (ATerm) ATempty;
                                                      t = h_0(t);
                                                      s_40 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(s_40), p_40);
                                                      t = h_0(t);
                                                      z_39 = t;
                                                      t = y_39;
                                                      t = bottomup_1_0(h_0, t);
                                                      i_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, i_40);
                                                      t = h_0(t);
                                                      h_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, h_40);
                                                      t = h_0(t);
                                                      b_40 = t;
                                                      t = o_10;
                                                      t = bottomup_1_0(h_0, t);
                                                      d_40 = t;
                                                      t = y_39;
                                                      t = bottomup_1_0(h_0, t);
                                                      g_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, g_40);
                                                      t = h_0(t);
                                                      f_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, f_40);
                                                      t = h_0(t);
                                                      e_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_40, e_40);
                                                      t = h_0(t);
                                                      c_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_40, c_40);
                                                      t = h_0(t);
                                                      a_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, z_39, a_40);
                                                      t = h_0(t);
                                                      LocalPopChoice(y_21);
                                                    }
                                                  else
                                                    {
                                                      t = x_21;
                                                      t = p_10;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                l_10 = ATgetArgument(t, 0);
                                                m_10 = ATgetArgument(t, 1);
                                                t = m_10;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    m_9 = ATgetArgument(t, 0);
                                                    y_9 = ATgetArgument(t, 1);
                                                    t = m_9;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        v_9 = ATgetArgument(t, 0);
                                                        t = l_10;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            h_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm z_21 = t;
                                                              int a_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm x_40 = NULL,y_40 = NULL,c_41 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, v_9);
                                                                  t = h_0(t);
                                                                  c_41 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, c_41, y_9);
                                                                  t = h_0(t);
                                                                  y_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_10, y_40);
                                                                  t = h_0(t);
                                                                  x_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, x_40);
                                                                  t = h_0(t);
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
                                                                        ATerm e_41 = NULL,f_41 = NULL,h_41 = NULL,i_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,t_41 = NULL,w_41 = NULL;
                                                                        t = p_10;
                                                                        t = new_0_0(t);
                                                                        e_41 = t;
                                                                        t = bottomup_1_0(h_0, t);
                                                                        t_41 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = h_0(t);
                                                                        w_41 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(w_41), t_41);
                                                                        t = h_0(t);
                                                                        f_41 = t;
                                                                        t = e_41;
                                                                        t = bottomup_1_0(h_0, t);
                                                                        r_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, r_41);
                                                                        t = h_0(t);
                                                                        q_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, q_41);
                                                                        t = h_0(t);
                                                                        i_41 = t;
                                                                        t = o_10;
                                                                        t = bottomup_1_0(h_0, t);
                                                                        m_41 = t;
                                                                        t = e_41;
                                                                        t = bottomup_1_0(h_0, t);
                                                                        p_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, p_41);
                                                                        t = h_0(t);
                                                                        o_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, o_41);
                                                                        t = h_0(t);
                                                                        n_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, m_41, n_41);
                                                                        t = h_0(t);
                                                                        l_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, i_41, l_41);
                                                                        t = h_0(t);
                                                                        h_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, f_41, h_41);
                                                                        t = h_0(t);
                                                                        LocalPopChoice(c_22);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_22;
                                                                        t = p_10;
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
                                                                ATerm z_41 = NULL,a_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,i_42 = NULL,j_42 = NULL,l_42 = NULL,m_42 = NULL,o_42 = NULL,r_42 = NULL,u_42 = NULL;
                                                                t = p_10;
                                                                t = new_0_0(t);
                                                                z_41 = t;
                                                                t = bottomup_1_0(h_0, t);
                                                                r_42 = t;
                                                                t = (ATerm) ATempty;
                                                                t = h_0(t);
                                                                u_42 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(u_42), r_42);
                                                                t = h_0(t);
                                                                a_42 = t;
                                                                t = z_41;
                                                                t = bottomup_1_0(h_0, t);
                                                                o_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, o_42);
                                                                t = h_0(t);
                                                                m_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, m_42);
                                                                t = h_0(t);
                                                                e_42 = t;
                                                                t = o_10;
                                                                t = bottomup_1_0(h_0, t);
                                                                g_42 = t;
                                                                t = z_41;
                                                                t = bottomup_1_0(h_0, t);
                                                                l_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, l_42);
                                                                t = h_0(t);
                                                                j_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, j_42);
                                                                t = h_0(t);
                                                                i_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, g_42, i_42);
                                                                t = h_0(t);
                                                                f_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, e_42, f_42);
                                                                t = h_0(t);
                                                                d_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, a_42, d_42);
                                                                t = h_0(t);
                                                                LocalPopChoice(e_22);
                                                              }
                                                            else
                                                              {
                                                                t = d_22;
                                                                t = p_10;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = l_10;
                                                        {
                                                          ATerm f_22 = t;
                                                          int g_22 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_42 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,h_43 = NULL,i_43 = NULL,l_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL;
                                                              t = p_10;
                                                              t = new_0_0(t);
                                                              x_42 = t;
                                                              t = bottomup_1_0(h_0, t);
                                                              q_43 = t;
                                                              t = (ATerm) ATempty;
                                                              t = h_0(t);
                                                              r_43 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(r_43), q_43);
                                                              t = h_0(t);
                                                              b_43 = t;
                                                              t = x_42;
                                                              t = bottomup_1_0(h_0, t);
                                                              p_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, p_43);
                                                              t = h_0(t);
                                                              o_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, o_43);
                                                              t = h_0(t);
                                                              d_43 = t;
                                                              t = o_10;
                                                              t = bottomup_1_0(h_0, t);
                                                              h_43 = t;
                                                              t = x_42;
                                                              t = bottomup_1_0(h_0, t);
                                                              n_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, n_43);
                                                              t = h_0(t);
                                                              l_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, l_43);
                                                              t = h_0(t);
                                                              i_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_43, i_43);
                                                              t = h_0(t);
                                                              e_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_43, e_43);
                                                              t = h_0(t);
                                                              c_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, b_43, c_43);
                                                              t = h_0(t);
                                                              LocalPopChoice(g_22);
                                                            }
                                                          else
                                                            {
                                                              t = f_22;
                                                              t = p_10;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = l_10;
                                                    {
                                                      ATerm i_22 = t;
                                                      int j_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm v_43 = NULL,w_43 = NULL,b_44 = NULL,e_44 = NULL,h_44 = NULL,i_44 = NULL,l_44 = NULL,n_44 = NULL,o_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL;
                                                          t = p_10;
                                                          t = new_0_0(t);
                                                          v_43 = t;
                                                          t = bottomup_1_0(h_0, t);
                                                          u_44 = t;
                                                          t = (ATerm) ATempty;
                                                          t = h_0(t);
                                                          v_44 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(v_44), u_44);
                                                          t = h_0(t);
                                                          w_43 = t;
                                                          t = v_43;
                                                          t = bottomup_1_0(h_0, t);
                                                          t_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, t_44);
                                                          t = h_0(t);
                                                          s_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, s_44);
                                                          t = h_0(t);
                                                          e_44 = t;
                                                          t = o_10;
                                                          t = bottomup_1_0(h_0, t);
                                                          i_44 = t;
                                                          t = v_43;
                                                          t = bottomup_1_0(h_0, t);
                                                          o_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, o_44);
                                                          t = h_0(t);
                                                          n_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, n_44);
                                                          t = h_0(t);
                                                          l_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_44, l_44);
                                                          t = h_0(t);
                                                          h_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_44, h_44);
                                                          t = h_0(t);
                                                          b_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, w_43, b_44);
                                                          t = h_0(t);
                                                          LocalPopChoice(j_22);
                                                        }
                                                      else
                                                        {
                                                          t = i_22;
                                                          t = p_10;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    l_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm k_22 = t;
                                                      int l_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, l_10);
                                                          t = h_0(t);
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
                                                                ATerm d_45 = NULL,e_45 = NULL,g_45 = NULL,i_45 = NULL,j_45 = NULL,l_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL;
                                                                t = p_10;
                                                                t = new_0_0(t);
                                                                d_45 = t;
                                                                t = bottomup_1_0(h_0, t);
                                                                t_45 = t;
                                                                t = (ATerm) ATempty;
                                                                t = h_0(t);
                                                                u_45 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(u_45), t_45);
                                                                t = h_0(t);
                                                                e_45 = t;
                                                                t = d_45;
                                                                t = bottomup_1_0(h_0, t);
                                                                s_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, s_45);
                                                                t = h_0(t);
                                                                r_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, r_45);
                                                                t = h_0(t);
                                                                i_45 = t;
                                                                t = o_10;
                                                                t = bottomup_1_0(h_0, t);
                                                                l_45 = t;
                                                                t = d_45;
                                                                t = bottomup_1_0(h_0, t);
                                                                q_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, q_45);
                                                                t = h_0(t);
                                                                p_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, p_45);
                                                                t = h_0(t);
                                                                o_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, l_45, o_45);
                                                                t = h_0(t);
                                                                j_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_45, j_45);
                                                                t = h_0(t);
                                                                g_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, e_45, g_45);
                                                                t = h_0(t);
                                                                LocalPopChoice(n_22);
                                                              }
                                                            else
                                                              {
                                                                t = m_22;
                                                                t = p_10;
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
                                                        ATerm x_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL;
                                                        t = p_10;
                                                        t = new_0_0(t);
                                                        x_45 = t;
                                                        t = bottomup_1_0(h_0, t);
                                                        k_46 = t;
                                                        t = (ATerm) ATempty;
                                                        t = h_0(t);
                                                        l_46 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(l_46), k_46);
                                                        t = h_0(t);
                                                        a_46 = t;
                                                        t = x_45;
                                                        t = bottomup_1_0(h_0, t);
                                                        j_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, j_46);
                                                        t = h_0(t);
                                                        i_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, i_46);
                                                        t = h_0(t);
                                                        c_46 = t;
                                                        t = o_10;
                                                        t = bottomup_1_0(h_0, t);
                                                        e_46 = t;
                                                        t = x_45;
                                                        t = bottomup_1_0(h_0, t);
                                                        h_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, h_46);
                                                        t = h_0(t);
                                                        g_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, g_46);
                                                        t = h_0(t);
                                                        f_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_46, f_46);
                                                        t = h_0(t);
                                                        d_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, c_46, d_46);
                                                        t = h_0(t);
                                                        b_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, a_46, b_46);
                                                        t = h_0(t);
                                                        LocalPopChoice(p_22);
                                                      }
                                                    else
                                                      {
                                                        t = o_22;
                                                        t = p_10;
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
                                        o_10 = ATgetArgument(t, 0);
                                        t = o_10;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm q_22 = t;
                                            int r_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_s_7;
                                                t = h_0(t);
                                                LocalPopChoice(r_22);
                                              }
                                            else
                                              {
                                                t = q_22;
                                                t = p_10;
                                              }
                                          }
                                        else
                                          {
                                            t = p_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            o_10 = ATgetArgument(t, 0);
                                            t = o_10;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm t_22 = t;
                                                int u_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_f_8;
                                                    t = h_0(t);
                                                    LocalPopChoice(u_22);
                                                  }
                                                else
                                                  {
                                                    t = t_22;
                                                    t = p_10;
                                                  }
                                              }
                                            else
                                              {
                                                t = p_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                o_10 = ATgetArgument(t, 0);
                                                t = o_10;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm v_22 = t;
                                                    int w_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_f_8;
                                                        t = h_0(t);
                                                        LocalPopChoice(w_22);
                                                      }
                                                    else
                                                      {
                                                        t = v_22;
                                                        t = p_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = p_10;
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
                                                        n_10 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(y_22);
                                                    t = n_10;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm a_23 = t;
                                                        int c_23 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_f_8;
                                                            t = h_0(t);
                                                            LocalPopChoice(c_23);
                                                          }
                                                        else
                                                          {
                                                            t = a_23;
                                                            t = p_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = p_10;
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
                                                              n_10 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(e_23);
                                                          {
                                                            ATerm g_23 = t;
                                                            int h_23 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = n_10;
                                                                t = fetch_1_0(c_1, t);
                                                                t = term_f_8;
                                                                t = bottomup_1_0(h_0, t);
                                                                LocalPopChoice(h_23);
                                                              }
                                                            else
                                                              {
                                                                t = g_23;
                                                                t = p_10;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = d_23;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              o_10 = ATgetArgument(t, 0);
                                                              n_10 = ATgetArgument(t, 1);
                                                              t = n_10;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = o_10;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = n_10;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          l_10 = ATgetArgument(t, 0);
                                                                          m_10 = ATgetArgument(t, 1);
                                                                          t = o_10;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = o_10;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = o_10;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = n_10;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          l_10 = ATgetArgument(t, 0);
                                                                          m_10 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm i_23 = t;
                                                                            int j_23 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm a_48 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, m_10, n_10);
                                                                                t = h_0(t);
                                                                                a_48 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, l_10, a_48);
                                                                                t = h_0(t);
                                                                                LocalPopChoice(j_23);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = i_23;
                                                                                {
                                                                                  ATerm l_23 = t;
                                                                                  int m_23 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = n_10;
                                                                                      if((o_10 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(m_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = l_23;
                                                                                      t = p_10;
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
                                                                              t = n_10;
                                                                              if((o_10 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(o_23);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = n_23;
                                                                              t = p_10;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  o_10 = ATgetArgument(t, 0);
                                                                  n_10 = ATgetArgument(t, 1);
                                                                  b_9 = ATgetArgument(t, 2);
                                                                  t = b_9;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm p_23 = t;
                                                                      int q_23 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_10, n_10);
                                                                          t = h_0(t);
                                                                          LocalPopChoice(q_23);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = p_23;
                                                                          t = p_10;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = p_10;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      o_10 = ATgetArgument(t, 0);
                                                                      n_10 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm r_23 = t;
                                                                        int s_23 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, o_10, n_10);
                                                                            t = h_0(t);
                                                                            LocalPopChoice(s_23);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = r_23;
                                                                            t = p_10;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          o_10 = ATgetArgument(t, 0);
                                                                          t = o_10;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              l_10 = ATgetFirst((ATermList) t);
                                                                              m_10 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm t_23 = t;
                                                                                int u_23 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm s_48 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, m_10);
                                                                                    t = h_0(t);
                                                                                    s_48 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, l_10, s_48);
                                                                                    t = h_0(t);
                                                                                    LocalPopChoice(u_23);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = t_23;
                                                                                    t = p_10;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm v_23 = t;
                                                                                  int x_23 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_f_8;
                                                                                      t = h_0(t);
                                                                                      LocalPopChoice(x_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = v_23;
                                                                                      t = p_10;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = p_10;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              o_10 = ATgetArgument(t, 0);
                                                                              t = o_10;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  l_10 = ATgetFirst((ATermList) t);
                                                                                  m_10 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm y_23 = t;
                                                                                    int z_23 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm y_48 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, m_10);
                                                                                        t = h_0(t);
                                                                                        y_48 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, l_10, y_48);
                                                                                        t = h_0(t);
                                                                                        LocalPopChoice(z_23);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = y_23;
                                                                                        t = p_10;
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
                                                                                          t = term_f_8;
                                                                                          t = h_0(t);
                                                                                          LocalPopChoice(b_24);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = a_24;
                                                                                          t = p_10;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = p_10;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  o_10 = ATgetArgument(t, 0);
                                                                                  t = o_10;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      l_10 = ATgetFirst((ATermList) t);
                                                                                      m_10 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm c_24 = t;
                                                                                        int d_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm e_49 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, m_10);
                                                                                            t = h_0(t);
                                                                                            e_49 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, l_10, e_49);
                                                                                            t = h_0(t);
                                                                                            LocalPopChoice(d_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = c_24;
                                                                                            t = p_10;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm e_24 = t;
                                                                                          int g_24 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_s_7;
                                                                                              t = h_0(t);
                                                                                              LocalPopChoice(g_24);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = e_24;
                                                                                              t = p_10;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = p_10;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      o_10 = ATgetArgument(t, 0);
                                                                                      n_10 = ATgetArgument(t, 1);
                                                                                      b_9 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm h_24 = t;
                                                                                        int i_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm l_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL;
                                                                                            t = term_j_24;
                                                                                            t = bottomup_1_0(h_0, t);
                                                                                            n_49 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = h_0(t);
                                                                                            q_49 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(q_49), b_9);
                                                                                            t = h_0(t);
                                                                                            p_49 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(p_49), o_10);
                                                                                            t = h_0(t);
                                                                                            o_49 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, n_49, o_49);
                                                                                            t = h_0(t);
                                                                                            l_49 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, n_10, l_49);
                                                                                            t = h_0(t);
                                                                                            LocalPopChoice(i_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = h_24;
                                                                                            t = p_10;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          o_10 = ATgetArgument(t, 0);
                                                                                          n_10 = ATgetArgument(t, 1);
                                                                                          b_9 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm k_24 = t;
                                                                                            int l_24 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, n_10);
                                                                                                t = h_0(t);
                                                                                                w_49 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, b_9);
                                                                                                t = h_0(t);
                                                                                                z_49 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = h_0(t);
                                                                                                a_50 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(a_50), z_49);
                                                                                                t = h_0(t);
                                                                                                y_49 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(y_49), o_10);
                                                                                                t = h_0(t);
                                                                                                x_49 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(x_49), w_49);
                                                                                                t = h_0(t);
                                                                                                v_49 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, v_49);
                                                                                                t = h_0(t);
                                                                                                LocalPopChoice(l_24);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = k_24;
                                                                                                t = p_10;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              o_10 = ATgetArgument(t, 0);
                                                                                              n_10 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm m_24 = t;
                                                                                                int n_24 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm e_50 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, n_10);
                                                                                                    t = h_0(t);
                                                                                                    e_50 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, o_10, e_50);
                                                                                                    t = h_0(t);
                                                                                                    LocalPopChoice(n_24);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = m_24;
                                                                                                    t = p_10;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  o_10 = ATgetArgument(t, 0);
                                                                                                  n_10 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm o_24 = t;
                                                                                                    int p_24 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm i_50 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, o_10);
                                                                                                        t = h_0(t);
                                                                                                        i_50 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, i_50, n_10);
                                                                                                        t = h_0(t);
                                                                                                        LocalPopChoice(p_24);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = o_24;
                                                                                                        t = p_10;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      o_10 = ATgetArgument(t, 0);
                                                                                                      n_10 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm q_24 = t;
                                                                                                        int r_24 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm m_50 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, n_10);
                                                                                                            t = h_0(t);
                                                                                                            m_50 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, m_50, o_10);
                                                                                                            t = h_0(t);
                                                                                                            LocalPopChoice(r_24);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = q_24;
                                                                                                            t = p_10;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          o_10 = ATgetArgument(t, 0);
                                                                                                          n_10 = ATgetArgument(t, 1);
                                                                                                          t = n_10;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              j_10 = ATgetArgument(t, 0);
                                                                                                              k_10 = ATgetArgument(t, 1);
                                                                                                              t = o_10;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = n_10;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm t_24 = t;
                                                                                                                  int u_24 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm y_50 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, o_10, j_10);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      y_50 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, y_50, k_10);
                                                                                                                      t = bottomup_1_0(h_0, t);
                                                                                                                      LocalPopChoice(u_24);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = t_24;
                                                                                                                      t = p_10;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  j_10 = ATgetArgument(t, 0);
                                                                                                                  k_10 = ATgetArgument(t, 1);
                                                                                                                  f_10 = ATgetArgument(t, 2);
                                                                                                                  t = f_10;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = k_10;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = j_10;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              i_10 = ATgetArgument(t, 0);
                                                                                                                              t = o_10;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = n_10;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      l_10 = ATgetFirst((ATermList) t);
                                                                                                                                      m_10 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = m_10;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = l_10;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              h_10 = ATgetArgument(t, 0);
                                                                                                                                              c_10 = ATgetArgument(t, 1);
                                                                                                                                              z_9 = ATgetArgument(t, 2);
                                                                                                                                              a_10 = ATgetArgument(t, 3);
                                                                                                                                              t = z_9;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = c_10;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm v_24 = t;
                                                                                                                                                      int w_24 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = i_10;
                                                                                                                                                          if((h_10 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = a_10;
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
                                                                                                                                                                          if((h_10 != ATgetArgument(y_24, 0)))
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
                                                                                                                                                          t = a_10;
                                                                                                                                                          t = bottomup_1_0(h_0, t);
                                                                                                                                                          LocalPopChoice(w_24);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = v_24;
                                                                                                                                                          t = p_10;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = p_10;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = p_10;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = p_10;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = p_10;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = p_10;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = o_10;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = n_10;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = p_10;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = o_10;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = n_10;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = p_10;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = o_10;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = n_10;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = p_10;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = o_10;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = n_10;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = p_10;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              o_10 = ATgetArgument(t, 0);
                                                                                                              n_10 = ATgetArgument(t, 1);
                                                                                                              t = o_10;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = n_10;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = p_10;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = p_10;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  }
                                              }
                                          }
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
  t = bottomup_1_0(h_0, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm b_25 = t;
  if((PushChoice() == 0))
    {
      ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL,r_5 = NULL;
      r_52 = t;
      if(match_cons(t, sym_Var_1))
        {
          q_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_52);
      p_52 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, q_52);
      r_5 = t;
      t = SSLsetAnnotations(r_5, p_52);
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
  ATerm s_52 = NULL,t_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_52 = ATgetFirst((ATermList) t);
      t_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_52, t_52);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL,z_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_25 = ATgetArgument(t, 0);
      if(match_cons(d_25, sym__2))
        {
          u_52 = ATgetArgument(d_25, 0);
          v_52 = ATgetArgument(d_25, 1);
        }
      else
        _fail(t);
      {
        ATerm e_25 = ATgetArgument(t, 1);
        if(match_cons(e_25, sym__2))
          {
            w_52 = ATgetArgument(e_25, 0);
            z_52 = ATgetArgument(e_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_52), u_52), (ATerm) ATinsert(CheckATermList(z_52), v_52));
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
  ATerm a_53 = NULL,e_53 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_53 = ATgetFirst((ATermList) t);
      e_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_53, e_53);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm f_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_25 = ATgetArgument(t, 0);
      if(match_cons(f_25, sym__2))
        {
          f_53 = ATgetArgument(f_25, 0);
          i_53 = ATgetArgument(f_25, 1);
        }
      else
        _fail(t);
      {
        ATerm h_25 = ATgetArgument(t, 1);
        if(match_cons(h_25, sym__2))
          {
            j_53 = ATgetArgument(h_25, 0);
            k_53 = ATgetArgument(h_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_53), f_53), (ATerm) ATinsert(CheckATermList(k_53), i_53));
  return(t);
}
static ATerm f_11 (ATerm u_30, ATerm v_30, ATerm w_30, ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,s_5 = NULL;
  t = w_30;
  t = fetch_1_0(f_1, t);
  t = w_30;
  t = genzip_4_0(g_1, h_1, i_1, LiftPrimArg_0_0, t);
  o_52 = t;
  if(match_cons(t, sym__2))
    {
      k_52 = ATgetArgument(t, 0);
      l_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_52);
  j_52 = t;
  t = k_52;
  t = concat_0_0(t);
  m_52 = t;
  t = l_52;
  t = genzip_4_0(j_1, k_1, l_1, _id, t);
  n_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_52, n_52);
  s_5 = t;
  t = SSLsetAnnotations(s_5, j_52);
  if(match_cons(t, sym__2))
    {
      g_52 = ATgetArgument(t, 0);
      {
        ATerm i_25 = ATgetArgument(t, 1);
        if(match_cons(i_25, sym__2))
          {
            h_52 = ATgetArgument(i_25, 0);
            i_52 = ATgetArgument(i_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, g_52, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, h_52), (ATerm) ATmakeAppl(sym_CallT_3, u_30, v_30, i_52)));
  return(t);
}
ATerm genzip_4_0 (ATerm s_140 (ATerm), ATerm t_140 (ATerm), ATerm u_140 (ATerm), ATerm v_140 (ATerm), ATerm t)
{
  static ATerm s_53 (ATerm t);
  static ATerm s_53 (ATerm t)
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_140(t);
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        {
          ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,i_7 = NULL;
          t = t_140(t);
          r_53 = t;
          if(match_cons(t, sym__2))
            {
              n_53 = ATgetArgument(t, 0);
              o_53 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_53);
          m_53 = t;
          t = n_53;
          t = v_140(t);
          p_53 = t;
          t = o_53;
          t = s_53(t);
          q_53 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_53, q_53);
          i_7 = t;
          t = SSLsetAnnotations(i_7, m_53);
          t = u_140(t);
        }
      }
    return(t);
  }
  t = s_53(t);
  return(t);
}
ATerm at_end_1_0 (ATerm x_158 (ATerm), ATerm t)
{
  static ATerm j_54 (ATerm t);
  static ATerm j_54 (ATerm t)
  {
    ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL;
    i_54 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_54 = ATgetFirst((ATermList) t);
        h_54 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_1 = NULL,w_1 = NULL,m_7 = NULL;
          t = SSLgetAnnotations(i_54);
          t_1 = t;
          t = h_54;
          t = j_54(t);
          w_1 = t;
          t = (ATerm) ATinsert(CheckATermList(w_1), g_54);
          m_7 = t;
          t = SSLsetAnnotations(m_7, t_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_54;
        t = x_158(t);
      }
    return(t);
  }
  t = j_54(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL;
  o_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_54;
    }
  else
    {
      static ATerm m_1 (ATerm t);
      static ATerm m_1 (ATerm t)
      {
        t = not_null(q_54);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_54 = ATgetFirst((ATermList) t);
          if(((q_54 != NULL) && (q_54 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_54;
      t = at_end_1_0(m_1, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm f_55 (ATerm w_54, ATerm t)
{
  ATerm y_54 = NULL;
  t = w_54;
  {
    ATerm o_25 = t;
    if((PushChoice() == 0))
      {
        ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL,t_7 = NULL;
        b_55 = t;
        if(match_cons(t, sym_Var_1))
          {
            a_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_55);
        z_54 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, a_55);
        t_7 = t;
        t = SSLsetAnnotations(t_7, z_54);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_25;
      }
  }
  t = new_0_0(t);
  y_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, y_54), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_54), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_54)))), (ATerm) ATmakeAppl(sym_Var_1, y_54)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL;
  c_55 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_55 = ATgetArgument(t, 0);
      {
        ATerm p_25 = t;
        int q_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_55(c_55, t);
            LocalPopChoice(q_25);
          }
        else
          {
            t = p_25;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_s_7, (ATerm) ATmakeAppl(sym_Var_1, d_55)));
          }
      }
    }
  else
    {
      t = f_55(c_55, t);
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm s_25 = t;
  if((PushChoice() == 0))
    {
      ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,z_7 = NULL;
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
      z_7 = t;
      t = SSLsetAnnotations(z_7, r_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_25;
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
      ATerm x_25 = ATgetArgument(t, 0);
      if(match_cons(x_25, sym__2))
        {
          w_2 = ATgetArgument(x_25, 0);
          x_2 = ATgetArgument(x_25, 1);
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
      ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,b_8 = NULL;
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
      b_8 = t;
      t = SSLsetAnnotations(b_8, z_3);
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
  ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL;
  a_58 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      b_58 = ATgetArgument(t, 0);
      c_58 = ATgetArgument(t, 1);
      z_57 = ATgetArgument(t, 2);
      {
        ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,a_8 = NULL;
        t = z_57;
        t = fetch_1_0(n_1, t);
        t = z_57;
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
        a_8 = t;
        t = SSLsetAnnotations(a_8, l_2);
        if(match_cons(t, sym__2))
          {
            i_2 = ATgetArgument(t, 0);
            {
              ATerm h_26 = ATgetArgument(t, 1);
              if(match_cons(h_26, sym__2))
                {
                  j_2 = ATgetArgument(h_26, 0);
                  k_2 = ATgetArgument(h_26, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_2, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_2), (ATerm) ATmakeAppl(sym_PrimT_3, b_58, c_58, k_2)));
      }
    }
  else
    {
      ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,c_8 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          b_58 = ATgetArgument(t, 0);
          c_58 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_58;
      t = fetch_1_0(v_1, t);
      t = c_58;
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
      c_8 = t;
      t = SSLsetAnnotations(c_8, t_3);
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
      t = (ATerm) ATmakeAppl(sym_Scope_2, q_3, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_3), (ATerm) ATmakeAppl(sym_PrimT_3, b_58, (ATerm)ATempty, s_3)));
    }
  return(t);
}
ATerm topdown_1_0 (ATerm b_136 (ATerm), ATerm t)
{
  static ATerm d_2 (ATerm t);
  static ATerm d_2 (ATerm t)
  {
    t = topdown_1_0(b_136, t);
    return(t);
  }
  t = b_136(t);
  t = SRTS_all(d_2, t);
  return(t);
}
ATerm map_1_0 (ATerm i_158 (ATerm), ATerm t)
{
  static ATerm z_58 (ATerm t);
  static ATerm z_58 (ATerm t)
  {
    ATerm u_58 = NULL,x_58 = NULL,y_58 = NULL;
    u_58 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_58;
      }
    else
      {
        ATerm v_4 = NULL,y_4 = NULL,z_4 = NULL,l_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_58 = ATgetFirst((ATermList) t);
            y_58 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_58);
        v_4 = t;
        t = x_58;
        t = i_158(t);
        y_4 = t;
        t = y_58;
        t = z_58(t);
        z_4 = t;
        t = (ATerm) ATinsert(CheckATermList(z_4), y_4);
        l_9 = t;
        t = SSLsetAnnotations(l_9, v_4);
      }
    return(t);
  }
  t = z_58(t);
  return(t);
}
static ATerm j_11 (ATerm s_47, ATerm t_47, ATerm t)
{
  ATerm b_59 = NULL;
  t = SSL_fputc(s_47, t_47);
  b_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_59);
  return(t);
}
static ATerm k_11 (ATerm b_53, ATerm c_53, ATerm t)
{
  ATerm c_59 = NULL;
  t = SSL_write_term_to_stream_text(b_53, c_53);
  c_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_59);
  return(t);
}
static ATerm m_11 (ATerm p_150 (ATerm), ATerm j_482, ATerm h_53, ATerm t)
{
  ATerm d_59 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_482, term_j_26);
  t = q_11(t);
  d_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_59, h_53);
  t = p_150(t);
  t = fclose_0_0(t);
  t = h_53;
  return(t);
}
static ATerm l_11 (ATerm x_52, ATerm y_52, ATerm t)
{
  ATerm e_59 = NULL;
  t = SSL_write_term_to_stream_baf(x_52, y_52);
  e_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_59);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_26 = ATgetArgument(t, 0);
      if(match_cons(k_26, sym_Stream_1))
        {
          l_59 = ATgetArgument(k_26, 0);
        }
      else
        _fail(t);
      m_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11(l_59, m_59, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_26 = ATgetArgument(t, 0);
      if(match_cons(l_26, sym_Stream_1))
        {
          q_59 = ATgetArgument(l_26, 0);
        }
      else
        _fail(t);
      r_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(q_59, r_59, t);
  n_59 = t;
  t = term_m_26;
  o_59 = t;
  t = n_59;
  if(match_cons(t, sym_Stream_1))
    {
      p_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_26, n_59);
  t = j_11(o_59, p_59, t);
  return(t);
}
ATerm output_1_0 (ATerm i_168 (ATerm), ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL;
  t = i_168(t);
  g_59 = t;
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_59 = NULL,i_59 = NULL;
        t = term_p_26;
        h_59 = t;
        t = term_q_26;
        i_59 = t;
        t = term_s_26;
        t = w_11(h_59, i_59, t);
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = term_t_26;
      }
  }
  f_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_59, g_59);
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_59 = NULL,k_59 = NULL;
        t = term_p_26;
        j_59 = t;
        t = term_w_26;
        k_59 = t;
        t = term_x_26;
        t = w_11(j_59, k_59, t);
        t = (ATerm) ATmakeAppl(sym__2, f_59, g_59);
        LocalPopChoice(v_26);
        if(match_cons(t, sym__2))
          {
            ATerm y_26 = ATgetArgument(t, 0);
            ATerm z_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_11(e_2, f_59, g_59, t);
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
        t = m_11(f_2, f_59, g_59, t);
      }
  }
  return(t);
}
static ATerm f_60 (ATerm z_59, ATerm t)
{
  t = SSL_fclose(z_59);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL;
  d_60 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_60 = ATgetArgument(t, 0);
      {
        ATerm c_27 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_60);
            LocalPopChoice(d_27);
          }
        else
          {
            t = c_27;
            t = f_60(d_60, t);
          }
      }
    }
  else
    {
      t = f_60(d_60, t);
    }
  return(t);
}
static ATerm n_11 (ATerm d_53, ATerm t)
{
  t = SSL_read_term_from_stream(d_53);
  return(t);
}
static ATerm o_11 (ATerm y_45, ATerm z_45, ATerm t)
{
  t = SSL_strcat(y_45, z_45);
  return(t);
}
static ATerm p_11 (ATerm u_47, ATerm v_47, ATerm t)
{
  ATerm g_60 = NULL;
  t = SSL_fopen(u_47, v_47);
  g_60 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_60);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_60 = NULL;
  t = SSL_stdin_stream();
  h_60 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_60);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_60 = NULL;
  t = SSL_stdout_stream();
  i_60 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_60);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_60 = NULL;
  t = SSL_stderr_stream();
  j_60 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_60);
  return(t);
}
static ATerm q_61 (ATerm p_60, ATerm t)
{
  ATerm q_60 = NULL;
  t = SSL_explode_term(p_60);
  if(match_cons(t, sym__2))
    {
      ATerm f_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_27 = ATgetArgument(t, 1);
        if(((ATgetType(g_27) == AT_LIST) && !(ATisEmpty(g_27))))
          {
            q_60 = ATgetFirst((ATermList) g_27);
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
  t = q_60;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_60;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_60;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_60;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm y_61 (ATerm t_60, ATerm u_60, ATerm v_60, ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL,b_61 = NULL,o_9 = NULL;
  t = SSLgetAnnotations(v_60);
  y_60 = t;
  t = t_60;
  if(match_cons(t, sym_Path_1))
    {
      b_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_61, u_60);
  o_9 = t;
  t = SSLsetAnnotations(o_9, y_60);
  if(match_cons(t, sym__2))
    {
      w_60 = ATgetArgument(t, 0);
      x_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(w_60, x_60, t);
  return(t);
}
static ATerm c_62 (ATerm d_61, ATerm e_61, ATerm f_61, ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL,l_61 = NULL,p_9 = NULL;
  t = SSLgetAnnotations(f_61);
  i_61 = t;
  t = SSL_is_string(d_61);
  l_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_61, e_61);
  p_9 = t;
  t = SSLsetAnnotations(p_9, i_61);
  if(match_cons(t, sym__2))
    {
      g_61 = ATgetArgument(t, 0);
      h_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(g_61, h_61, t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL;
  n_61 = t;
  if(match_cons(t, sym__2))
    {
      o_61 = ATgetArgument(t, 0);
      p_61 = ATgetArgument(t, 1);
      {
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_61(n_61, t);
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
                  t = y_61(o_61, p_61, n_61, t);
                  LocalPopChoice(l_27);
                }
              else
                {
                  t = k_27;
                  t = c_62(o_61, p_61, n_61, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_61(n_61, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL,l_62 = NULL;
  l_62 = t;
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_62, term_o_27);
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
          t = (ATerm) ATmakeAppl(sym__2, term_p_27, l_62);
          t = o_11(n_5, l_62, t);
          m_5 = t;
          t = SSL_perror(m_5);
          _fail(t);
        }
      }
  }
  f_62 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11(g_62, t);
  e_62 = t;
  t = f_62;
  t = fclose_0_0(t);
  t = e_62;
  return(t);
}
ATerm input_1_0 (ATerm j_168 (ATerm), ATerm t)
{
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_62 = NULL,p_62 = NULL;
      t = term_p_26;
      o_62 = t;
      t = term_t_27;
      p_62 = t;
      t = term_u_27;
      t = w_11(o_62, p_62, t);
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      t = term_v_27;
    }
  t = ReadFromFile_0_0(t);
  t = j_168(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL;
  t = term_p_26;
  q_62 = t;
  t = term_w_27;
  r_62 = t;
  t = term_x_27;
  t = w_11(q_62, r_62, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL;
  t_62 = t;
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_62;
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
            t = t_62;
          }
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = (ATerm) ATinsert(ATempty, t_62);
      }
  }
  u_62 = t;
  t = term_t_26;
  v_62 = t;
  t = SSL_printnl(v_62, u_62);
  t = t_62;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_63 = ATgetFirst((ATermList) t);
      b_63 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_63 = NULL,g_63 = NULL;
        static ATerm g_2 (ATerm t);
        static ATerm g_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_63)), not_null(g_63));
          return(t);
        }
        t = b_63;
        t = r_0(t);
        if(((f_63 != NULL) && (f_63 != t)))
          _fail(t);
        else
          f_63 = t;
        t = a_63;
        t = p_0(t);
        if(((g_63 != NULL) && (g_63 != t)))
          _fail(t);
        else
          g_63 = t;
        t = b_63;
        t = reverse_acc_2_0(p_0, g_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_28;
      t = r_0(t);
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm o_63 = NULL,p_63 = NULL,q_63 = NULL,s_9 = NULL;
  q_63 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_63);
  o_63 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_63);
  s_9 = t;
  t = SSLsetAnnotations(s_9, o_63);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm u_63 = NULL;
  u_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_63), term_e_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm h_170 (ATerm), ATerm i_170 (ATerm), ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL;
  ATerm f_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_63 = NULL,n_63 = NULL;
      t = term_p_26;
      m_63 = t;
      t = term_w_27;
      n_63 = t;
      t = term_x_27;
      t = w_11(m_63, n_63, t);
      LocalPopChoice(h_28);
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
        t = h_170(t);
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
  k_63 = t;
  t = term_m_28;
  l_63 = t;
  t = term_n_28;
  t = w_11(k_63, l_63, t);
  t = reverse_acc_2_0(_id, g_3, t);
  t = map_1_0(h_3, t);
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_63 = NULL;
        t = i_170(t);
        v_63 = t;
        t = (ATerm) ATinsert(CheckATermList(v_63), term_q_28);
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
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL,u_9 = NULL;
  d_64 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_64);
  b_64 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_64);
  u_9 = t;
  t = SSLsetAnnotations(u_9, b_64);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_63 = NULL;
  y_63 = t;
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_63 = NULL,a_64 = NULL;
        t = term_p_26;
        z_63 = t;
        t = term_w_27;
        a_64 = t;
        t = term_x_27;
        t = w_11(z_63, a_64, t);
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        t = fetch_1_0(i_3, t);
      }
  }
  t = y_63;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm f_64 = NULL;
  f_64 = t;
  if(match_string(t, "-k"))
    {
      t = f_64;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_64;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL;
  g_64 = t;
  t = SSL_string_to_int(g_64);
  h_64 = t;
  t = term_u_28;
  i_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_28, h_64);
  t = z_11(i_64, h_64, t);
  t = g_64;
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
  ATerm k_64 = NULL;
  k_64 = t;
  if(match_string(t, "-S"))
    {
      t = k_64;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_64;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL;
  t = term_w_28;
  l_64 = t;
  t = term_x_28;
  m_64 = t;
  t = term_y_28;
  t = z_11(l_64, m_64, t);
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
  ATerm n_64 = NULL,o_64 = NULL,p_64 = NULL;
  n_64 = t;
  t = SSL_string_to_int(n_64);
  o_64 = t;
  t = term_w_28;
  p_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_28, o_64);
  t = z_11(p_64, o_64, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_64);
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
  ATerm q_64 = NULL,r_64 = NULL;
  t = term_d_29;
  q_64 = t;
  t = term_d_28;
  r_64 = t;
  t = term_e_29;
  t = z_11(q_64, r_64, t);
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
static ATerm z_11 (ATerm r_51, ATerm s_51, ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL;
  t = term_p_26;
  s_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_26, r_51, s_51);
  t = lookup_table_0_1(s_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(r_51, s_51, t_64, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_26, r_51, s_51);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL;
      t = term_d_28;
      t = g_0(t);
      z_64 = t;
      t = term_l_28;
      a_65 = t;
      t = term_m_28;
      b_65 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_28, term_m_28, z_64);
      t = x_11(a_65, b_65, z_64, t);
      _fail(t);
    }
  else
    {
      ATerm e_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_64 = ATgetFirst((ATermList) t);
          y_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_64;
      t = d_0(t);
      t = term_d_28;
      t = f_0(t);
      e_65 = t;
      t = (ATerm) ATinsert(CheckATermList(y_64), e_65);
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm g_65 = NULL;
  g_65 = t;
  if(match_string(t, "-o"))
    {
      t = g_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_65;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm h_65 = NULL,i_65 = NULL;
  h_65 = t;
  t = term_q_26;
  i_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_26, h_65);
  t = z_11(i_65, h_65, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_65);
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
static ATerm x_11 (ATerm c_57, ATerm d_57, ATerm b_57, ATerm t)
{
  ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL;
  k_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_57, d_57);
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_29 = ATgetArgument(t, 0);
            ATerm q_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_57, d_57);
        t = w_11(c_57, d_57, t);
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
        t = (ATerm) ATempty;
      }
  }
  l_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_57, d_57, (ATerm) ATinsert(CheckATermList(l_65), b_57));
  t = lookup_table_0_1(c_57, t);
  o_65 = t;
  t = (ATerm) ATinsert(CheckATermList(l_65), b_57);
  m_65 = t;
  t = o_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(d_57, m_65, n_65, t);
  t = k_65;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL;
      t = term_d_28;
      t = o_0(t);
      z_65 = t;
      t = term_l_28;
      a_66 = t;
      t = term_m_28;
      b_66 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_28, term_m_28, z_65);
      t = x_11(a_66, b_66, z_65, t);
      _fail(t);
    }
  else
    {
      ATerm f_66 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_65 = ATgetFirst((ATermList) t);
          w_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_65;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_65 = ATgetFirst((ATermList) t);
          y_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_65;
      t = j_0(t);
      t = x_65;
      t = l_0(t);
      f_66 = t;
      t = (ATerm) ATinsert(CheckATermList(y_65), f_66);
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm h_66 = NULL;
  h_66 = t;
  if(match_string(t, "-i"))
    {
      t = h_66;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_66;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL;
  i_66 = t;
  t = term_t_27;
  j_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_27, i_66);
  t = z_11(j_66, i_66, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_66);
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
  ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_28;
  t = whoami_0_0(t);
  k_66 = t;
  t = term_s_29;
  m_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_29), k_66);
  n_66 = t;
  t = SSL_printnl(m_66, n_66);
  t = term_u_29;
  l_66 = t;
  t = SSL_exit(l_66);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm o_66 = NULL,p_66 = NULL;
  t = term_p_26;
  o_66 = t;
  t = term_w_27;
  p_66 = t;
  t = term_x_27;
  t = w_11(o_66, p_66, t);
  return(t);
}
static ATerm r_11 (ATerm k_54, ATerm l_54, ATerm t)
{
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_54, l_54);
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      t = SSL_addr(k_54, l_54);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_160 (ATerm), ATerm p_160 (ATerm), ATerm t)
{
  ATerm r_66 = NULL,s_66 = NULL,t_66 = NULL;
  r_66 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_66;
      t = o_160(t);
    }
  else
    {
      ATerm w_66 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_66 = ATgetFirst((ATermList) t);
          t_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_66;
      t = foldr_2_0(o_160, p_160, t);
      w_66 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_66, w_66);
      t = p_160(t);
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
  ATerm z_66 = NULL,p_5 = NULL,q_5 = NULL;
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
  z_66 = t;
  t = SSL_TicksToSeconds(z_66);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_67 = NULL,l_67 = NULL,m_67 = NULL;
  k_67 = t;
  if(match_cons(t, sym__2))
    {
      l_67 = ATgetArgument(t, 0);
      m_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_67;
        if((l_67 != t))
          {
            _fail(t);
          }
        t = k_67;
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
        t = (ATerm) ATmakeAppl(sym__2, l_67, m_67);
        {
          ATerm b_30 = t;
          int c_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_67, m_67);
              LocalPopChoice(c_30);
            }
          else
            {
              t = b_30;
              t = SSL_gtr(l_67, m_67);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_67, m_67);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_148 (ATerm), ATerm t)
{
  ATerm q_67 = NULL;
  q_67 = t;
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL;
        t = term_p_26;
        t_67 = t;
        t = term_w_28;
        u_67 = t;
        t = term_f_30;
        t = w_11(t_67, u_67, t);
        s_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_67, term_u_29);
        t = geq_0_0(t);
        t = q_67;
        t = k_148(t);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = q_67;
      }
  }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,z_67 = NULL,a_68 = NULL;
  t = run_time_0_0(t);
  w_67 = t;
  t = term_d_28;
  t = whoami_0_0(t);
  x_67 = t;
  t = term_s_29;
  z_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_30), w_67), term_g_30), x_67);
  a_68 = t;
  t = SSL_printnl(z_67, a_68);
  t = (ATerm) ATmakeAppl(sym__2, term_s_29, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_30), w_67), term_g_30), x_67));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_68 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_28;
  b_68 = t;
  t = SSL_exit(b_68);
  return(t);
}
static ATerm a_12 (ATerm r_61, ATerm s_61, ATerm t_61, ATerm t)
{
  ATerm c_68 = NULL;
  t = SSL_hashtable_put(t_61, r_61, s_61);
  c_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_68);
  return(t);
}
ATerm lookup_table_0_1 (ATerm o_58, ATerm t)
{
  ATerm l_68 = NULL;
  t = table_hashtable_0_0(t);
  l_68 = t;
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_6 = NULL;
        t = l_68;
        if(match_cons(t, sym_Hashtable_1))
          {
            f_6 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_12(o_58, f_6, t);
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
        {
          ATerm k_6 = NULL;
          t = o_58;
          t = table_create_0_0(t);
          t = l_68;
          if(match_cons(t, sym_Hashtable_1))
            {
              k_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_12(o_58, k_6, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm z_61, ATerm a_62, ATerm t)
{
  ATerm o_68 = NULL;
  t = SSL_hashtable_create(z_61, a_62);
  o_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_68);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL,t_68 = NULL,u_68 = NULL;
  p_68 = t;
  t = term_k_30;
  t_68 = t;
  t = term_l_30;
  u_68 = t;
  t = p_68;
  t = new_hashtable_0_2(t_68, u_68, t);
  q_68 = t;
  t = p_68;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(p_68, q_68, r_68, t);
  t = p_68;
  return(t);
}
static ATerm t_11 (ATerm w_61, ATerm x_61, ATerm t)
{
  ATerm v_68 = NULL;
  t = SSL_hashtable_remove(x_61, w_61);
  v_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_68);
  return(t);
}
static ATerm u_11 (ATerm b_62, ATerm t)
{
  ATerm w_68 = NULL;
  t = SSL_hashtable_destroy(b_62);
  w_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_68);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm x_68 = NULL;
  t = SSL_table_hashtable();
  x_68 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_68);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL;
  y_68 = t;
  t = table_hashtable_0_0(t);
  z_68 = t;
  t = lookup_table_0_1(y_68, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(b_69, t);
  t = z_68;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(y_68, a_69, t);
  t = y_68;
  return(t);
}
ATerm fetch_1_0 (ATerm q_158 (ATerm), ATerm t)
{
  static ATerm y_69 (ATerm t);
  static ATerm y_69 (ATerm t)
  {
    ATerm v_69 = NULL,w_69 = NULL,x_69 = NULL;
    v_69 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_69 = ATgetFirst((ATermList) t);
        x_69 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_30 = t;
      int n_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_6 = NULL,s_6 = NULL,x_9 = NULL;
          t = SSLgetAnnotations(v_69);
          p_6 = t;
          t = w_69;
          t = q_158(t);
          s_6 = t;
          t = (ATerm) ATinsert(CheckATermList(x_69), s_6);
          x_9 = t;
          t = SSLsetAnnotations(x_9, p_6);
          LocalPopChoice(n_30);
        }
      else
        {
          t = m_30;
          {
            ATerm a_7 = NULL,d_7 = NULL,f_14 = NULL;
            t = SSLgetAnnotations(v_69);
            a_7 = t;
            t = x_69;
            t = y_69(t);
            d_7 = t;
            t = (ATerm) ATinsert(CheckATermList(d_7), w_69);
            f_14 = t;
            t = SSLsetAnnotations(f_14, a_7);
          }
        }
    }
    return(t);
  }
  t = y_69(t);
  return(t);
}
static ATerm b_12 (ATerm u_61, ATerm v_61, ATerm t)
{
  t = SSL_hashtable_get(v_61, u_61);
  return(t);
}
static ATerm w_11 (ATerm v_58, ATerm w_58, ATerm t)
{
  ATerm b_70 = NULL;
  t = lookup_table_0_1(v_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_12(w_58, b_70, t);
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
  ATerm d_70 = NULL,e_70 = NULL;
  t = term_o_30;
  d_70 = t;
  t = term_d_28;
  e_70 = t;
  t = term_p_30;
  t = z_11(d_70, e_70, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_q_30;
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
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL;
  t = term_o_30;
  h_70 = t;
  t = term_d_28;
  i_70 = t;
  t = term_p_30;
  t = z_11(h_70, i_70, t);
  t = term_r_30;
  f_70 = t;
  t = term_d_28;
  g_70 = t;
  t = term_s_30;
  t = z_11(f_70, g_70, t);
  t = term_t_30;
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
ATerm Cons_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,k_14 = NULL;
  o_70 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_70 = ATgetFirst((ATermList) t);
      l_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_70);
  j_70 = t;
  t = k_70;
  t = m_109(t);
  m_70 = t;
  t = l_70;
  t = n_109(t);
  n_70 = t;
  t = (ATerm) ATinsert(CheckATermList(n_70), m_70);
  k_14 = t;
  t = SSLsetAnnotations(k_14, j_70);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_170 (ATerm), ATerm t)
{
  ATerm t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL,y_70 = NULL,z_70 = NULL,m_14 = NULL;
  t_70 = t;
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_31;
        t = c_170(t);
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
      }
  }
  t = t_70;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_70 = ATgetFirst((ATermList) t);
      w_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_70);
  u_70 = t;
  t = term_w_27;
  z_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_27, v_70);
  t = z_11(z_70, v_70, t);
  t = w_70;
  {
    static ATerm j_71 (ATerm t);
    static ATerm j_71 (ATerm t)
    {
      ATerm d_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_31 = t;
          int h_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_71 = NULL;
              c_71 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_71;
              LocalPopChoice(h_31);
            }
          else
            {
              t = g_31;
              t = c_170(t);
              t = Cons_2_0(_id, j_71, t);
            }
          LocalPopChoice(e_31);
        }
      else
        {
          t = d_31;
          {
            ATerm f_71 = NULL,g_71 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_71 = ATgetFirst((ATermList) t);
                g_71 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_71), (ATerm) ATmakeAppl(sym_Undefined_1, f_71));
          }
        }
      return(t);
    }
    t = j_71(t);
  }
  y_70 = t;
  t = (ATerm) ATinsert(CheckATermList(y_70), (ATerm) ATmakeAppl(sym_Program_1, v_70));
  m_14 = t;
  t = SSLsetAnnotations(m_14, u_70);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm w_71 = NULL;
  w_71 = t;
  if(match_string(t, "--help"))
    {
      t = w_71;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_71;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_71;
        }
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL;
  t = term_i_31;
  x_71 = t;
  t = term_d_28;
  y_71 = t;
  t = term_j_31;
  t = z_11(x_71, y_71, t);
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
ATerm parse_options_3_0 (ATerm z_169 (ATerm), ATerm a_170 (ATerm), ATerm b_170 (ATerm), ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL;
  q_71 = t;
  t = term_l_28;
  r_71 = t;
  t = term_n_31;
  t = lookup_table_0_1(r_71, t);
  v_71 = t;
  t = term_m_28;
  s_71 = t;
  t = (ATerm) ATempty;
  t_71 = t;
  t = v_71;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(s_71, t_71, u_71, t);
  t = q_71;
  {
    static ATerm l_5 (ATerm t);
    static ATerm l_5 (ATerm t)
    {
      ATerm p_31 = t;
      int q_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_169(t);
          LocalPopChoice(q_31);
        }
      else
        {
          t = p_31;
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
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_72 = NULL;
        k_72 = t;
        {
          ATerm w_31 = t;
          int x_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_7 = NULL;
              t = k_72;
              {
                ATerm y_31 = t;
                int a_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_7 = NULL,r_7 = NULL;
                    t = term_p_26;
                    q_7 = t;
                    t = term_i_31;
                    r_7 = t;
                    t = term_b_32;
                    t = w_11(q_7, r_7, t);
                    LocalPopChoice(a_32);
                  }
                else
                  {
                    t = y_31;
                    t = fetch_1_0(x_5, t);
                  }
              }
              t = k_72;
              t = a_170(t);
              t = term_x_28;
              p_7 = t;
              t = SSL_exit(p_7);
              LocalPopChoice(x_31);
            }
          else
            {
              t = w_31;
              {
                ATerm y_7 = NULL,d_8 = NULL,e_8 = NULL;
                t = term_p_26;
                d_8 = t;
                t = term_o_30;
                e_8 = t;
                t = term_c_32;
                t = w_11(d_8, e_8, t);
                t = k_72;
                t = b_170(t);
                t = term_x_28;
                y_7 = t;
                t = SSL_exit(y_7);
              }
            }
        }
        LocalPopChoice(v_31);
      }
    else
      {
        t = u_31;
        {
          ATerm d_32 = t;
          int e_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_72 = NULL,m_72 = NULL,n_72 = NULL;
              static ATerm y_5 (ATerm t);
              static ATerm y_5 (ATerm t)
              {
                ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL,o_14 = NULL;
                q_72 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_72 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_72);
                o_72 = t;
                t = p_72;
                if(((o_71 != NULL) && (o_71 != t)))
                  _fail(t);
                else
                  o_71 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_72);
                o_14 = t;
                t = SSLsetAnnotations(o_14, o_72);
                return(t);
              }
              t = fetch_1_0(y_5, t);
              t = term_s_29;
              m_72 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_71)), term_g_32);
              n_72 = t;
              t = SSL_printnl(m_72, n_72);
              t = (ATerm) ATmakeAppl(sym__2, term_s_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_71)), term_g_32));
              t = a_170(t);
              t = term_u_29;
              l_72 = t;
              t = SSL_exit(l_72);
              LocalPopChoice(e_32);
            }
          else
            {
              t = d_32;
            }
        }
      }
  }
  p_71 = t;
  t = term_l_28;
  t = table_destroy_0_0(t);
  t = p_71;
  return(t);
}
ATerm option_wrap_5_0 (ATerm c_168 (ATerm), ATerm d_168 (ATerm), ATerm e_168 (ATerm), ATerm f_168 (ATerm), ATerm g_168 (ATerm), ATerm t)
{
  ATerm v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL;
  t = parse_options_3_0(c_168, d_168, e_168, t);
  v_72 = t;
  t = term_h_32;
  t = table_create_0_0(t);
  t = term_h_32;
  w_72 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_32, term_i_32, v_72);
  t = lookup_table_0_1(w_72, t);
  z_72 = t;
  t = term_i_32;
  x_72 = t;
  t = z_72;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(x_72, v_72, y_72, t);
  t = v_72;
  t = f_168(t);
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_168(t);
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
              int r_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(b_6, c_6, d_6, t);
                  LocalPopChoice(r_32);
                }
              else
                {
                  t = p_32;
                  {
                    ATerm s_32 = t;
                    int t_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(t_32);
                      }
                    else
                      {
                        t = s_32;
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
  ATerm g_73 = NULL,h_73 = NULL;
  t = term_w_26;
  g_73 = t;
  t = term_d_28;
  h_73 = t;
  t = term_u_32;
  t = z_11(g_73, h_73, t);
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
  ATerm j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,a_15 = NULL,y_14 = NULL,x_14 = NULL,w_14 = NULL;
  x_73 = t;
  if(match_cons(t, sym_Specification_1))
    {
      k_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_73);
  j_73 = t;
  t = k_73;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_73 = ATgetFirst((ATermList) t);
      n_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_73);
  l_73 = t;
  t = n_73;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_73 = ATgetFirst((ATermList) t);
      r_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_73);
  p_73 = t;
  t = q_73;
  if(match_cons(t, sym_Strategies_1))
    {
      u_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_73);
  t_73 = t;
  t = u_73;
  t = map_1_0(h_6, t);
  v_73 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, v_73);
  w_14 = t;
  t = SSLsetAnnotations(w_14, t_73);
  w_73 = t;
  t = r_73;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_73), w_73);
  x_14 = t;
  t = SSLsetAnnotations(x_14, p_73);
  s_73 = t;
  t = (ATerm) ATinsert(CheckATermList(s_73), m_73);
  y_14 = t;
  t = SSLsetAnnotations(y_14, l_73);
  o_73 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, o_73);
  a_15 = t;
  t = SSLsetAnnotations(a_15, j_73);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm u_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL;
  y_74 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      u_74 = ATgetArgument(t, 0);
      v_74 = ATgetArgument(t, 1);
      w_74 = ATgetArgument(t, 2);
      x_74 = ATgetArgument(t, 3);
      {
        ATerm x_32 = t;
        int y_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_8 = NULL,t_8 = NULL,v_14 = NULL;
            t = SSLgetAnnotations(y_74);
            o_8 = t;
            t = x_74;
            t = topdown_1_0(i_6, t);
            t = simplify_0_0(t);
            t_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, u_74, v_74, w_74, t_8);
            v_14 = t;
            t = SSLsetAnnotations(v_14, o_8);
            LocalPopChoice(y_32);
          }
        else
          {
            t = x_32;
            t = y_74;
          }
      }
    }
  else
    {
      t = y_74;
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm a_33 = t;
  int b_33 = stack_ptr;
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
            ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
            v_8 = t;
            if(match_cons(t, sym_CallT_3))
              {
                w_8 = ATgetArgument(t, 0);
                x_8 = ATgetArgument(t, 1);
                y_8 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = v_8;
            t = f_11(w_8, x_8, y_8, t);
          }
        }
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(z_5, default_system_usage_0_0, default_system_about_0_0, _id, a_6, t);
  return(t);
}

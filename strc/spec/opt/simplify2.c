#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_As_2;
Symbol sym_Choice_2;
Symbol sym_AM_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_Prim_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_SDefT_4;
Symbol sym_Cong_2;
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
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
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
}
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_p_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_y_30;
ATerm term_s_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_s_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_y_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_k_26;
ATerm term_h_26;
ATerm term_e_26;
ATerm term_x_24;
ATerm term_d_24;
ATerm term_c_8;
ATerm term_q_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__2, term_k_26, term_m_26);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__2, term_k_26, term_r_26);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym__2, term_k_26, term_n_27);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym__2, term_a_28, term_b_28);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_28);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym__2, term_h_28, term_t_27);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__2, term_k_26, term_b_29);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym__2, term_k_26, term_a_28);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym__2, term_k_26, term_s_29);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__2, term_r_28, term_s_28);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__2, term_h_30, term_t_27);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_k_30, term_t_27);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym__2, term_s_29, term_t_27);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_k_26, term_h_30);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_r_26, term_t_27);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm bottomup_1_0 (ATerm j_103 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm m_104 (ATerm), ATerm t);
static ATerm t_0 (ATerm f_0, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm m_0 (ATerm t);
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
static ATerm u_10 (ATerm q_27, ATerm r_27, ATerm s_27, ATerm t);
ATerm genzip_4_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm j_124 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm k_54 (ATerm b_54, ATerm t);
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
ATerm topdown_1_0 (ATerm i_103 (ATerm), ATerm t);
ATerm map_1_0 (ATerm s_123 (ATerm), ATerm t);
static ATerm y_10 (ATerm v_43, ATerm w_43, ATerm t);
static ATerm z_10 (ATerm w_48, ATerm x_48, ATerm t);
static ATerm b_11 (ATerm m_117 (ATerm), ATerm o_428, ATerm c_49, ATerm t);
static ATerm a_11 (ATerm s_48, ATerm t_48, ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm output_1_0 (ATerm j_130 (ATerm), ATerm t);
static ATerm m_59 (ATerm g_59, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm c_11 (ATerm y_48, ATerm t);
static ATerm d_11 (ATerm o_42, ATerm p_42, ATerm t);
static ATerm e_11 (ATerm x_43, ATerm y_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm x_60 (ATerm w_59, ATerm t);
static ATerm y_60 (ATerm a_60, ATerm b_60, ATerm c_60, ATerm t);
static ATerm z_60 (ATerm k_60, ATerm l_60, ATerm m_60, ATerm t);
static ATerm f_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm k_130 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm m_11 (ATerm q_47, ATerm r_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm k_11 (ATerm u_52, ATerm v_52, ATerm t_52, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm g_11 (ATerm c_50, ATerm d_50, ATerm t);
ATerm foldr_2_0 (ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm j_115 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm need_help_1_0 (ATerm a_130 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_124 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm j_11 (ATerm l_54, ATerm m_54, ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_132 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm parse_options_1_0 (ATerm c_132 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm j_103 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = bottomup_1_0(j_103, t);
    return(t);
  }
  t = SRTS_all(a_0, t);
  t = j_103(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  static ATerm u_0 (ATerm t)
  {
    ATerm j_6 = t;
    int k_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_104(t);
        LocalPopChoice(k_6);
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
static ATerm t_0 (ATerm f_0, ATerm t)
{
  ATerm j_0 = NULL;
  t = SSL_explode_term(f_0);
  if(match_cons(t, sym__2))
    {
      ATerm l_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      j_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_0;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL,q_0 = NULL;
  q_0 = t;
  if(match_cons(t, sym__2))
    {
      o_0 = ATgetArgument(t, 0);
      p_0 = ATgetArgument(t, 1);
      {
        ATerm m_6 = t;
        int n_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_0 (ATerm t)
            {
              t = p_0;
              return(t);
            }
            t = o_0;
            t = at_end_1_0(b_0, t);
            LocalPopChoice(n_6);
          }
        else
          {
            t = m_6;
            t = t_0(q_0, t);
          }
      }
    }
  else
    {
      t = t_0(q_0, t);
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_6 = ATgetArgument(t, 0);
      if(((ATgetType(p_6) != AT_LIST) || !(ATisEmpty(p_6))))
        _fail(t);
      {
        ATerm q_6 = ATgetArgument(t, 1);
        if(((ATgetType(q_6) != AT_LIST) || !(ATisEmpty(q_6))))
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
  ATerm o_15 = NULL,r_15 = NULL,t_15 = NULL,a_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_6 = ATgetArgument(t, 0);
      if(((ATgetType(s_6) == AT_LIST) && !(ATisEmpty(s_6))))
        {
          o_15 = ATgetFirst((ATermList) s_6);
          r_15 = (ATerm) ATgetNext((ATermList) s_6);
        }
      else
        _fail(t);
      {
        ATerm t_6 = ATgetArgument(t, 1);
        if(((ATgetType(t_6) == AT_LIST) && !(ATisEmpty(t_6))))
          {
            t_15 = ATgetFirst((ATermList) t_6);
            a_16 = (ATerm) ATgetNext((ATermList) t_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_15, t_15), (ATerm) ATmakeAppl(sym__2, r_15, a_16));
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL;
  if(match_cons(t, sym__2))
    {
      b_16 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_16), b_16);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL;
  if(match_cons(t, sym__2))
    {
      d_16 = ATgetArgument(t, 0);
      e_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_16), (ATerm) ATmakeAppl(sym_Match_1, e_16));
  return(t);
}
static ATerm x_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_6 = ATgetArgument(t, 0);
      if(((ATgetType(u_6) != AT_LIST) || !(ATisEmpty(u_6))))
        _fail(t);
      {
        ATerm v_6 = ATgetArgument(t, 1);
        if(((ATgetType(v_6) != AT_LIST) || !(ATisEmpty(v_6))))
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
  ATerm e_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_6 = ATgetArgument(t, 0);
      if(((ATgetType(w_6) == AT_LIST) && !(ATisEmpty(w_6))))
        {
          e_25 = ATgetFirst((ATermList) w_6);
          g_25 = (ATerm) ATgetNext((ATermList) w_6);
        }
      else
        _fail(t);
      {
        ATerm x_6 = ATgetArgument(t, 1);
        if(((ATgetType(x_6) == AT_LIST) && !(ATisEmpty(x_6))))
          {
            h_25 = ATgetFirst((ATermList) x_6);
            i_25 = (ATerm) ATgetNext((ATermList) x_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_25, h_25), (ATerm) ATmakeAppl(sym__2, g_25, i_25));
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL;
  if(match_cons(t, sym__2))
    {
      j_25 = ATgetArgument(t, 0);
      k_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_25), j_25);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL;
  if(match_cons(t, sym__2))
    {
      l_25 = ATgetArgument(t, 0);
      m_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_25), (ATerm) ATmakeAppl(sym_Match_1, m_25));
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm y_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm b_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(a_7);
      {
        ATerm y_36 = NULL,z_36 = NULL;
        y_36 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm d_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        z_36 = t;
        t = SSLgetAnnotations(y_36);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_7 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) e_7) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm f_7 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(f_7) != AT_LIST) || !(ATisEmpty(f_7))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = z_36;
      }
    }
  else
    {
      t = y_6;
      {
        ATerm g_7 = t;
        int h_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm i_7 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) i_7) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm k_7 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_7);
            _fail(t);
          }
        else
          {
            t = g_7;
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
  static ATerm h_0 (ATerm t)
  {
    ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL;
    j_10 = t;
    if(match_cons(t, sym_Test_1))
      {
        i_10 = ATgetArgument(t, 0);
        t = i_10;
        if(match_cons(t, sym_Id_0))
          {
            ATerm l_7 = t;
            int o_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_q_7;
                t = h_0(t);
                LocalPopChoice(o_7);
              }
            else
              {
                t = l_7;
                {
                  ATerm t_7 = t;
                  int u_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,h_11 = NULL;
                      t = j_10;
                      t = new_0_0(t);
                      l_10 = t;
                      t = bottomup_1_0(h_0, t);
                      x_10 = t;
                      t = (ATerm) ATempty;
                      t = h_0(t);
                      h_11 = t;
                      t = (ATerm) ATinsert(CheckATermList(h_11), x_10);
                      t = h_0(t);
                      m_10 = t;
                      t = l_10;
                      t = bottomup_1_0(h_0, t);
                      w_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, w_10);
                      t = h_0(t);
                      v_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, v_10);
                      t = h_0(t);
                      o_10 = t;
                      t = i_10;
                      t = bottomup_1_0(h_0, t);
                      q_10 = t;
                      t = l_10;
                      t = bottomup_1_0(h_0, t);
                      t_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, t_10);
                      t = h_0(t);
                      s_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, s_10);
                      t = h_0(t);
                      r_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_10, r_10);
                      t = h_0(t);
                      p_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_10, p_10);
                      t = h_0(t);
                      n_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, m_10, n_10);
                      t = h_0(t);
                      LocalPopChoice(u_7);
                    }
                  else
                    {
                      t = t_7;
                      t = j_10;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm v_7 = t;
                int x_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_c_8;
                    t = h_0(t);
                    LocalPopChoice(x_7);
                  }
                else
                  {
                    t = v_7;
                    {
                      ATerm d_8 = t;
                      int e_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
                          t = j_10;
                          t = new_0_0(t);
                          n_11 = t;
                          t = bottomup_1_0(h_0, t);
                          y_11 = t;
                          t = (ATerm) ATempty;
                          t = h_0(t);
                          z_11 = t;
                          t = (ATerm) ATinsert(CheckATermList(z_11), y_11);
                          t = h_0(t);
                          o_11 = t;
                          t = n_11;
                          t = bottomup_1_0(h_0, t);
                          x_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, x_11);
                          t = h_0(t);
                          w_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, w_11);
                          t = h_0(t);
                          q_11 = t;
                          t = i_10;
                          t = bottomup_1_0(h_0, t);
                          s_11 = t;
                          t = n_11;
                          t = bottomup_1_0(h_0, t);
                          v_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, v_11);
                          t = h_0(t);
                          u_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                          t = h_0(t);
                          t_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_11, t_11);
                          t = h_0(t);
                          r_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_11, r_11);
                          t = h_0(t);
                          p_11 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, o_11, p_11);
                          t = h_0(t);
                          LocalPopChoice(e_8);
                        }
                      else
                        {
                          t = d_8;
                          t = j_10;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    f_10 = ATgetArgument(t, 0);
                    {
                      ATerm f_8 = t;
                      int g_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, f_10);
                          t = h_0(t);
                          LocalPopChoice(g_8);
                        }
                      else
                        {
                          t = f_8;
                          {
                            ATerm h_8 = t;
                            int j_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
                                t = j_10;
                                t = new_0_0(t);
                                d_12 = t;
                                t = bottomup_1_0(h_0, t);
                                o_12 = t;
                                t = (ATerm) ATempty;
                                t = h_0(t);
                                p_12 = t;
                                t = (ATerm) ATinsert(CheckATermList(p_12), o_12);
                                t = h_0(t);
                                e_12 = t;
                                t = d_12;
                                t = bottomup_1_0(h_0, t);
                                n_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, n_12);
                                t = h_0(t);
                                m_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, m_12);
                                t = h_0(t);
                                g_12 = t;
                                t = i_10;
                                t = bottomup_1_0(h_0, t);
                                i_12 = t;
                                t = d_12;
                                t = bottomup_1_0(h_0, t);
                                l_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, l_12);
                                t = h_0(t);
                                k_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, k_12);
                                t = h_0(t);
                                j_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_12, j_12);
                                t = h_0(t);
                                h_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, g_12, h_12);
                                t = h_0(t);
                                f_12 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, e_12, f_12);
                                t = h_0(t);
                                LocalPopChoice(j_8);
                              }
                            else
                              {
                                t = h_8;
                                t = j_10;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm k_8 = t;
                    int l_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
                        t = j_10;
                        t = new_0_0(t);
                        s_12 = t;
                        t = bottomup_1_0(h_0, t);
                        d_13 = t;
                        t = (ATerm) ATempty;
                        t = h_0(t);
                        e_13 = t;
                        t = (ATerm) ATinsert(CheckATermList(e_13), d_13);
                        t = h_0(t);
                        t_12 = t;
                        t = s_12;
                        t = bottomup_1_0(h_0, t);
                        c_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, c_13);
                        t = h_0(t);
                        b_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, b_13);
                        t = h_0(t);
                        v_12 = t;
                        t = i_10;
                        t = bottomup_1_0(h_0, t);
                        x_12 = t;
                        t = s_12;
                        t = bottomup_1_0(h_0, t);
                        a_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, a_13);
                        t = h_0(t);
                        z_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, z_12);
                        t = h_0(t);
                        y_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                        t = h_0(t);
                        w_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, v_12, w_12);
                        t = h_0(t);
                        u_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, t_12, u_12);
                        t = h_0(t);
                        LocalPopChoice(l_8);
                      }
                    else
                      {
                        t = k_8;
                        t = j_10;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            i_10 = ATgetArgument(t, 0);
            t = i_10;
            if(match_cons(t, sym_Id_0))
              {
                ATerm m_8 = t;
                int p_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_c_8;
                    t = h_0(t);
                    LocalPopChoice(p_8);
                  }
                else
                  {
                    t = m_8;
                    t = j_10;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm v_8 = t;
                    int w_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_q_7;
                        t = h_0(t);
                        LocalPopChoice(w_8);
                      }
                    else
                      {
                        t = v_8;
                        t = j_10;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        f_10 = ATgetArgument(t, 0);
                        {
                          ATerm x_8 = t;
                          int y_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, f_10);
                              t = h_0(t);
                              LocalPopChoice(y_8);
                            }
                          else
                            {
                              t = x_8;
                              t = j_10;
                            }
                        }
                      }
                    else
                      {
                        t = j_10;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                i_10 = ATgetArgument(t, 0);
                h_10 = ATgetArgument(t, 1);
                t = h_10;
                if(match_cons(t, sym_Id_0))
                  {
                    t = i_10;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = h_10;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = i_10;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                f_10 = ATgetArgument(t, 0);
                                g_10 = ATgetArgument(t, 1);
                                t = i_10;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    f_10 = ATgetArgument(t, 0);
                                    g_10 = ATgetArgument(t, 1);
                                    t = i_10;
                                  }
                                else
                                  {
                                    t = i_10;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        d_10 = ATgetArgument(t, 0);
                        e_10 = ATgetArgument(t, 1);
                        t = d_10;
                        if(match_cons(t, sym_Match_1))
                          {
                            c_10 = ATgetArgument(t, 0);
                            t = c_10;
                            if(match_cons(t, sym_Op_2))
                              {
                                a_10 = ATgetArgument(t, 0);
                                v_9 = ATgetArgument(t, 1);
                                t = i_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = h_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm z_8 = t;
                                        int a_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_c_8;
                                            t = h_0(t);
                                            LocalPopChoice(a_9);
                                          }
                                        else
                                          {
                                            t = z_8;
                                            t = j_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_10 = ATgetArgument(t, 0);
                                            g_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm b_9 = t;
                                              int c_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm g_15 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                  t = h_0(t);
                                                  g_15 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_15);
                                                  t = h_0(t);
                                                  LocalPopChoice(c_9);
                                                }
                                              else
                                                {
                                                  t = b_9;
                                                  t = j_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                t = f_10;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    b_10 = ATgetArgument(t, 0);
                                                    w_9 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm d_9 = t;
                                                      int e_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, b_10, a_10);
                                                          {
                                                            ATerm f_9 = t;
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
                                                                t = f_9;
                                                              }
                                                          }
                                                          t = term_c_8;
                                                          t = bottomup_1_0(h_0, t);
                                                          LocalPopChoice(e_9);
                                                        }
                                                      else
                                                        {
                                                          t = d_9;
                                                          {
                                                            ATerm g_9 = t;
                                                            int h_9 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm n_15 = NULL;
                                                                t = a_10;
                                                                if((b_10 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, w_9, v_9);
                                                                t = genzip_4_0(m_0, r_0, s_0, v_0, t);
                                                                n_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, b_10, w_9)), e_10));
                                                                t = bottomup_1_0(h_0, t);
                                                                LocalPopChoice(h_9);
                                                              }
                                                            else
                                                              {
                                                                t = g_9;
                                                                {
                                                                  ATerm i_9 = t;
                                                                  int k_9 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm q_16 = NULL;
                                                                      t = c_10;
                                                                      if((f_10 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, f_10);
                                                                      t = h_0(t);
                                                                      q_16 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_16, e_10);
                                                                      t = h_0(t);
                                                                      LocalPopChoice(k_9);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = i_9;
                                                                      t = j_10;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm n_9 = t;
                                                    int o_9 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm u_16 = NULL;
                                                        t = c_10;
                                                        if((f_10 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_10);
                                                        t = h_0(t);
                                                        u_16 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_16, e_10);
                                                        t = h_0(t);
                                                        LocalPopChoice(o_9);
                                                      }
                                                    else
                                                      {
                                                        t = n_9;
                                                        t = j_10;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    f_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm k_10 = t;
                                                      int i_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm y_16 = NULL;
                                                          t = c_10;
                                                          if((f_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, f_10);
                                                          t = h_0(t);
                                                          y_16 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_16, e_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(i_11);
                                                        }
                                                      else
                                                        {
                                                          t = k_10;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm l_11 = t;
                                                          int a_12 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm m_17 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                              t = h_0(t);
                                                              m_17 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, m_17);
                                                              t = h_0(t);
                                                              LocalPopChoice(a_12);
                                                            }
                                                          else
                                                            {
                                                              t = l_11;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = i_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = h_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm b_12 = t;
                                        int c_12 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_c_8;
                                            t = h_0(t);
                                            LocalPopChoice(c_12);
                                          }
                                        else
                                          {
                                            t = b_12;
                                            t = j_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_10 = ATgetArgument(t, 0);
                                            g_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm q_12 = t;
                                              int r_12 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm b_18 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                  t = h_0(t);
                                                  b_18 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, b_18);
                                                  t = h_0(t);
                                                  LocalPopChoice(r_12);
                                                }
                                              else
                                                {
                                                  t = q_12;
                                                  t = j_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                {
                                                  ATerm f_13 = t;
                                                  int g_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm h_18 = NULL;
                                                      t = c_10;
                                                      if((f_10 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, f_10);
                                                      t = h_0(t);
                                                      h_18 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_18, e_10);
                                                      t = h_0(t);
                                                      LocalPopChoice(g_13);
                                                    }
                                                  else
                                                    {
                                                      t = f_13;
                                                      t = j_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    f_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm h_13 = t;
                                                      int i_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm m_18 = NULL;
                                                          t = c_10;
                                                          if((f_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, f_10);
                                                          t = h_0(t);
                                                          m_18 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_18, e_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(i_13);
                                                        }
                                                      else
                                                        {
                                                          t = h_13;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_13 = t;
                                                          int k_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_18 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                              t = h_0(t);
                                                              u_18 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, u_18);
                                                              t = h_0(t);
                                                              LocalPopChoice(k_13);
                                                            }
                                                          else
                                                            {
                                                              t = j_13;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_10;
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
                                c_10 = ATgetArgument(t, 0);
                                t = c_10;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    a_10 = ATgetArgument(t, 0);
                                    t = i_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm l_13 = t;
                                            int m_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_c_8;
                                                t = h_0(t);
                                                LocalPopChoice(m_13);
                                              }
                                            else
                                              {
                                                t = l_13;
                                                t = j_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                g_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm n_13 = t;
                                                  int o_13 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm n_19 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                      t = h_0(t);
                                                      n_19 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, n_19);
                                                      t = h_0(t);
                                                      LocalPopChoice(o_13);
                                                    }
                                                  else
                                                    {
                                                      t = n_13;
                                                      t = j_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm p_13 = t;
                                                int q_13 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm s_13 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(q_13);
                                                    {
                                                      ATerm t_13 = t;
                                                      int u_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm x_19 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_10);
                                                          t = h_0(t);
                                                          x_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_19, e_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(u_13);
                                                        }
                                                      else
                                                        {
                                                          t = t_13;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = p_13;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        t = f_10;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            b_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm w_13 = t;
                                                              int x_13 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm g_20 = NULL,h_20 = NULL;
                                                                  t = a_10;
                                                                  if((b_10 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, b_10);
                                                                  t = h_0(t);
                                                                  h_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, h_20);
                                                                  t = h_0(t);
                                                                  g_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_20, e_10);
                                                                  t = h_0(t);
                                                                  LocalPopChoice(x_13);
                                                                }
                                                              else
                                                                {
                                                                  t = w_13;
                                                                  t = j_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_10 = ATgetArgument(t, 0);
                                                            g_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm a_14 = t;
                                                              int b_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm v_20 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                                  t = h_0(t);
                                                                  v_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, v_20);
                                                                  t = h_0(t);
                                                                  LocalPopChoice(b_14);
                                                                }
                                                              else
                                                                {
                                                                  t = a_14;
                                                                  t = j_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_10;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = i_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm d_14 = t;
                                            int e_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_c_8;
                                                t = h_0(t);
                                                LocalPopChoice(e_14);
                                              }
                                            else
                                              {
                                                t = d_14;
                                                t = j_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                g_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm f_14 = t;
                                                  int g_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm g_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                      t = h_0(t);
                                                      g_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, g_21);
                                                      t = h_0(t);
                                                      LocalPopChoice(g_14);
                                                    }
                                                  else
                                                    {
                                                      t = f_14;
                                                      t = j_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm h_14 = t;
                                                int i_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm k_14 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(i_14);
                                                    {
                                                      ATerm m_14 = t;
                                                      int o_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm s_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_10);
                                                          t = h_0(t);
                                                          s_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_21, e_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(o_14);
                                                        }
                                                      else
                                                        {
                                                          t = m_14;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = h_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_14 = t;
                                                          int q_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_22 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                              t = h_0(t);
                                                              b_22 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, b_22);
                                                              t = h_0(t);
                                                              LocalPopChoice(q_14);
                                                            }
                                                          else
                                                            {
                                                              t = p_14;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_10;
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
                                    c_10 = ATgetArgument(t, 0);
                                    x_9 = ATgetArgument(t, 1);
                                    y_9 = ATgetArgument(t, 2);
                                    t = i_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm r_14 = t;
                                            int v_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_c_8;
                                                t = h_0(t);
                                                LocalPopChoice(v_14);
                                              }
                                            else
                                              {
                                                t = r_14;
                                                t = j_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                g_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm x_14 = t;
                                                  int y_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm m_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                      t = h_0(t);
                                                      m_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, m_22);
                                                      t = h_0(t);
                                                      LocalPopChoice(y_14);
                                                    }
                                                  else
                                                    {
                                                      t = x_14;
                                                      t = j_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm z_14 = t;
                                                int a_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm b_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(a_15);
                                                    {
                                                      ATerm c_15 = t;
                                                      int d_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm a_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, c_10, x_9, y_9);
                                                          t = h_0(t);
                                                          a_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, e_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(d_15);
                                                        }
                                                      else
                                                        {
                                                          t = c_15;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = z_14;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm e_15 = t;
                                                          int f_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm j_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                              t = h_0(t);
                                                              j_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, j_23);
                                                              t = h_0(t);
                                                              LocalPopChoice(f_15);
                                                            }
                                                          else
                                                            {
                                                              t = e_15;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = i_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm h_15 = t;
                                            int i_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_c_8;
                                                t = h_0(t);
                                                LocalPopChoice(i_15);
                                              }
                                            else
                                              {
                                                t = h_15;
                                                t = j_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                g_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm j_15 = t;
                                                  int k_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                      t = h_0(t);
                                                      w_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, w_23);
                                                      t = h_0(t);
                                                      LocalPopChoice(k_15);
                                                    }
                                                  else
                                                    {
                                                      t = j_15;
                                                      t = j_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    f_10 = ATgetArgument(t, 0);
                                                    g_10 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm l_15 = t;
                                                      int m_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm f_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                          t = h_0(t);
                                                          f_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, f_24);
                                                          t = h_0(t);
                                                          LocalPopChoice(m_15);
                                                        }
                                                      else
                                                        {
                                                          t = l_15;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = j_10;
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
                            d_10 = ATgetArgument(t, 0);
                            t = d_10;
                            if(match_cons(t, sym_Op_2))
                              {
                                c_10 = ATgetArgument(t, 0);
                                x_9 = ATgetArgument(t, 1);
                                t = i_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = h_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm p_15 = t;
                                        int q_15 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_c_8;
                                            t = h_0(t);
                                            LocalPopChoice(q_15);
                                          }
                                        else
                                          {
                                            t = p_15;
                                            t = j_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_10 = ATgetArgument(t, 0);
                                            g_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm s_15 = t;
                                              int u_15 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm r_24 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                  t = h_0(t);
                                                  r_24 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, r_24);
                                                  t = h_0(t);
                                                  LocalPopChoice(u_15);
                                                }
                                              else
                                                {
                                                  t = s_15;
                                                  t = j_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                t = f_10;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    b_10 = ATgetArgument(t, 0);
                                                    w_9 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm v_15 = t;
                                                      int w_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, b_10, c_10);
                                                          {
                                                            ATerm x_15 = t;
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
                                                                t = x_15;
                                                              }
                                                          }
                                                          t = term_c_8;
                                                          t = bottomup_1_0(h_0, t);
                                                          LocalPopChoice(w_15);
                                                        }
                                                      else
                                                        {
                                                          t = v_15;
                                                          {
                                                            ATerm y_15 = t;
                                                            int z_15 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm a_25 = NULL;
                                                                t = c_10;
                                                                if((b_10 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, w_9, x_9);
                                                                t = genzip_4_0(x_0, y_0, z_0, a_1, t);
                                                                a_25 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_25), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, b_10, w_9)));
                                                                t = bottomup_1_0(h_0, t);
                                                                LocalPopChoice(z_15);
                                                              }
                                                            else
                                                              {
                                                                t = y_15;
                                                                {
                                                                  ATerm f_16 = t;
                                                                  int g_16 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = d_10;
                                                                      if((f_10 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, f_10);
                                                                      t = h_0(t);
                                                                      LocalPopChoice(g_16);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = f_16;
                                                                      t = j_10;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm h_16 = t;
                                                    int i_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = d_10;
                                                        if((f_10 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_10);
                                                        t = h_0(t);
                                                        LocalPopChoice(i_16);
                                                      }
                                                    else
                                                      {
                                                        t = h_16;
                                                        t = j_10;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    f_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm j_16 = t;
                                                      int k_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = d_10;
                                                          if((f_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, f_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(k_16);
                                                        }
                                                      else
                                                        {
                                                          t = j_16;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm l_16 = t;
                                                          int m_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_25 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                              t = h_0(t);
                                                              w_25 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, w_25);
                                                              t = h_0(t);
                                                              LocalPopChoice(m_16);
                                                            }
                                                          else
                                                            {
                                                              t = l_16;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_10;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = i_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = h_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm n_16 = t;
                                        int o_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_c_8;
                                            t = h_0(t);
                                            LocalPopChoice(o_16);
                                          }
                                        else
                                          {
                                            t = n_16;
                                            t = j_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            f_10 = ATgetArgument(t, 0);
                                            g_10 = ATgetArgument(t, 1);
                                            {
                                              ATerm p_16 = t;
                                              int r_16 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm l_26 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                  t = h_0(t);
                                                  l_26 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, l_26);
                                                  t = h_0(t);
                                                  LocalPopChoice(r_16);
                                                }
                                              else
                                                {
                                                  t = p_16;
                                                  t = j_10;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                {
                                                  ATerm s_16 = t;
                                                  int t_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = d_10;
                                                      if((f_10 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, f_10);
                                                      t = h_0(t);
                                                      LocalPopChoice(t_16);
                                                    }
                                                  else
                                                    {
                                                      t = s_16;
                                                      t = j_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    f_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm v_16 = t;
                                                      int w_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = d_10;
                                                          if((f_10 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, f_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(w_16);
                                                        }
                                                      else
                                                        {
                                                          t = v_16;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm x_16 = t;
                                                          int z_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                              t = h_0(t);
                                                              w_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, w_26);
                                                              t = h_0(t);
                                                              LocalPopChoice(z_16);
                                                            }
                                                          else
                                                            {
                                                              t = x_16;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_10;
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
                                d_10 = ATgetArgument(t, 0);
                                t = d_10;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    c_10 = ATgetArgument(t, 0);
                                    t = i_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm a_17 = t;
                                            int b_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_c_8;
                                                t = h_0(t);
                                                LocalPopChoice(b_17);
                                              }
                                            else
                                              {
                                                t = a_17;
                                                t = j_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                g_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm c_17 = t;
                                                  int d_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                      t = h_0(t);
                                                      d_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, d_28);
                                                      t = h_0(t);
                                                      LocalPopChoice(d_17);
                                                    }
                                                  else
                                                    {
                                                      t = c_17;
                                                      t = j_10;
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
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(i_17);
                                                        }
                                                      else
                                                        {
                                                          t = h_17;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = e_17;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        t = f_10;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            b_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm j_17 = t;
                                                              int k_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm i_28 = NULL;
                                                                  t = c_10;
                                                                  if((b_10 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, b_10);
                                                                  t = h_0(t);
                                                                  i_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, i_28);
                                                                  t = h_0(t);
                                                                  LocalPopChoice(k_17);
                                                                }
                                                              else
                                                                {
                                                                  t = j_17;
                                                                  t = j_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_10 = ATgetArgument(t, 0);
                                                            g_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm l_17 = t;
                                                              int n_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm o_28 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                                  t = h_0(t);
                                                                  o_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, o_28);
                                                                  t = h_0(t);
                                                                  LocalPopChoice(n_17);
                                                                }
                                                              else
                                                                {
                                                                  t = l_17;
                                                                  t = j_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_10;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = i_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm o_17 = t;
                                            int p_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_c_8;
                                                t = h_0(t);
                                                LocalPopChoice(p_17);
                                              }
                                            else
                                              {
                                                t = o_17;
                                                t = j_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                g_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm q_17 = t;
                                                  int r_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm z_28 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                      t = h_0(t);
                                                      z_28 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, z_28);
                                                      t = h_0(t);
                                                      LocalPopChoice(r_17);
                                                    }
                                                  else
                                                    {
                                                      t = q_17;
                                                      t = j_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm s_17 = t;
                                                int t_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm u_17 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(t_17);
                                                    {
                                                      ATerm v_17 = t;
                                                      int w_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_10);
                                                          t = h_0(t);
                                                          LocalPopChoice(w_17);
                                                        }
                                                      else
                                                        {
                                                          t = v_17;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = s_17;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm x_17 = t;
                                                          int y_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                              t = h_0(t);
                                                              g_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, g_29);
                                                              t = h_0(t);
                                                              LocalPopChoice(y_17);
                                                            }
                                                          else
                                                            {
                                                              t = x_17;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_10;
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
                                    d_10 = ATgetArgument(t, 0);
                                    e_10 = ATgetArgument(t, 1);
                                    z_9 = ATgetArgument(t, 2);
                                    t = i_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = h_10;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm z_17 = t;
                                            int a_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_c_8;
                                                t = h_0(t);
                                                LocalPopChoice(a_18);
                                              }
                                            else
                                              {
                                                t = z_17;
                                                t = j_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                g_10 = ATgetArgument(t, 1);
                                                {
                                                  ATerm c_18 = t;
                                                  int d_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                      t = h_0(t);
                                                      t_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, t_29);
                                                      t = h_0(t);
                                                      LocalPopChoice(d_18);
                                                    }
                                                  else
                                                    {
                                                      t = c_18;
                                                      t = j_10;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm e_18 = t;
                                                int f_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm g_18 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(f_18);
                                                    {
                                                      ATerm i_18 = t;
                                                      int j_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, d_10, e_10, z_9);
                                                          t = h_0(t);
                                                          LocalPopChoice(j_18);
                                                        }
                                                      else
                                                        {
                                                          t = i_18;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = e_18;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm k_18 = t;
                                                          int l_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm e_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                              t = h_0(t);
                                                              e_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, e_30);
                                                              t = h_0(t);
                                                              LocalPopChoice(l_18);
                                                            }
                                                          else
                                                            {
                                                              t = k_18;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = j_10;
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
                                        d_10 = ATgetArgument(t, 0);
                                        e_10 = ATgetArgument(t, 1);
                                        t = i_10;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = h_10;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm n_18 = t;
                                                int o_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_c_8;
                                                    t = h_0(t);
                                                    LocalPopChoice(o_18);
                                                  }
                                                else
                                                  {
                                                    t = n_18;
                                                    {
                                                      ATerm p_18 = t;
                                                      int q_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm u_30 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, e_10);
                                                          t = h_0(t);
                                                          u_30 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, d_10, u_30);
                                                          t = h_0(t);
                                                          LocalPopChoice(q_18);
                                                        }
                                                      else
                                                        {
                                                          t = p_18;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    f_10 = ATgetArgument(t, 0);
                                                    g_10 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm r_18 = t;
                                                      int s_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm z_30 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                          t = h_0(t);
                                                          z_30 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, z_30);
                                                          t = h_0(t);
                                                          LocalPopChoice(s_18);
                                                        }
                                                      else
                                                        {
                                                          t = r_18;
                                                          {
                                                            ATerm t_18 = t;
                                                            int v_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm d_31 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, e_10);
                                                                t = h_0(t);
                                                                d_31 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, d_10, d_31);
                                                                t = h_0(t);
                                                                LocalPopChoice(v_18);
                                                              }
                                                            else
                                                              {
                                                                t = t_18;
                                                                t = j_10;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_18 = t;
                                                          int x_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, e_10);
                                                              t = h_0(t);
                                                              i_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, d_10, i_31);
                                                              t = h_0(t);
                                                              LocalPopChoice(x_18);
                                                            }
                                                          else
                                                            {
                                                              t = w_18;
                                                              {
                                                                ATerm y_18 = t;
                                                                int z_18 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm n_31 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                                    t = h_0(t);
                                                                    n_31 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, n_31);
                                                                    t = h_0(t);
                                                                    LocalPopChoice(z_18);
                                                                  }
                                                                else
                                                                  {
                                                                    t = y_18;
                                                                    t = j_10;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm a_19 = t;
                                                        int b_19 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm s_31 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, e_10);
                                                            t = h_0(t);
                                                            s_31 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, d_10, s_31);
                                                            t = h_0(t);
                                                            LocalPopChoice(b_19);
                                                          }
                                                        else
                                                          {
                                                            t = a_19;
                                                            t = j_10;
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
                                            d_10 = ATgetArgument(t, 0);
                                            e_10 = ATgetArgument(t, 1);
                                            t = i_10;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = h_10;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm c_19 = t;
                                                    int d_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_c_8;
                                                        t = h_0(t);
                                                        LocalPopChoice(d_19);
                                                      }
                                                    else
                                                      {
                                                        t = c_19;
                                                        {
                                                          ATerm e_19 = t;
                                                          int f_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm d_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, e_10);
                                                              t = h_0(t);
                                                              d_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, d_10, d_32);
                                                              t = h_0(t);
                                                              LocalPopChoice(f_19);
                                                            }
                                                          else
                                                            {
                                                              t = e_19;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_19 = t;
                                                          int h_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                              t = h_0(t);
                                                              o_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, o_32);
                                                              t = h_0(t);
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
                                                                    ATerm s_32 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, e_10);
                                                                    t = h_0(t);
                                                                    s_32 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, d_10, s_32);
                                                                    t = h_0(t);
                                                                    LocalPopChoice(j_19);
                                                                  }
                                                                else
                                                                  {
                                                                    t = i_19;
                                                                    t = j_10;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_10 = ATgetArgument(t, 0);
                                                            g_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm k_19 = t;
                                                              int l_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm c_33 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, e_10);
                                                                  t = h_0(t);
                                                                  c_33 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, d_10, c_33);
                                                                  t = h_0(t);
                                                                  LocalPopChoice(l_19);
                                                                }
                                                              else
                                                                {
                                                                  t = k_19;
                                                                  {
                                                                    ATerm m_19 = t;
                                                                    int o_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm i_33 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                                        t = h_0(t);
                                                                        i_33 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, i_33);
                                                                        t = h_0(t);
                                                                        LocalPopChoice(o_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_19;
                                                                        t = j_10;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm p_19 = t;
                                                            int q_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm r_33 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, e_10);
                                                                t = h_0(t);
                                                                r_33 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, d_10, r_33);
                                                                t = h_0(t);
                                                                LocalPopChoice(q_19);
                                                              }
                                                            else
                                                              {
                                                                t = p_19;
                                                                t = j_10;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = i_10;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = h_10;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm r_19 = t;
                                                    int s_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_c_8;
                                                        t = h_0(t);
                                                        LocalPopChoice(s_19);
                                                      }
                                                    else
                                                      {
                                                        t = r_19;
                                                        t = j_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        f_10 = ATgetArgument(t, 0);
                                                        g_10 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm t_19 = t;
                                                          int u_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm k_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                              t = h_0(t);
                                                              k_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, k_34);
                                                              t = h_0(t);
                                                              LocalPopChoice(u_19);
                                                            }
                                                          else
                                                            {
                                                              t = t_19;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            f_10 = ATgetArgument(t, 0);
                                                            g_10 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm v_19 = t;
                                                              int w_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm t_34 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_10, h_10);
                                                                  t = h_0(t);
                                                                  t_34 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_10, t_34);
                                                                  t = h_0(t);
                                                                  LocalPopChoice(w_19);
                                                                }
                                                              else
                                                                {
                                                                  t = v_19;
                                                                  t = j_10;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = j_10;
                                                          }
                                                      }
                                                  }
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
                    i_10 = ATgetArgument(t, 0);
                    h_10 = ATgetArgument(t, 1);
                    t = h_10;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = i_10;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm y_19 = t;
                            int z_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_q_7;
                                t = h_0(t);
                                LocalPopChoice(z_19);
                              }
                            else
                              {
                                t = y_19;
                                t = i_10;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = h_10;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    f_10 = ATgetArgument(t, 0);
                                    g_10 = ATgetArgument(t, 1);
                                    t = i_10;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        f_10 = ATgetArgument(t, 0);
                                        t = i_10;
                                      }
                                    else
                                      {
                                        t = i_10;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = i_10;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm a_20 = t;
                            int b_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_q_7;
                                t = h_0(t);
                                LocalPopChoice(b_20);
                              }
                            else
                              {
                                t = a_20;
                                {
                                  ATerm c_20 = t;
                                  int d_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = h_10;
                                      if((i_10 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(d_20);
                                    }
                                  else
                                    {
                                      t = c_20;
                                      t = j_10;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = h_10;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    f_10 = ATgetArgument(t, 0);
                                    g_10 = ATgetArgument(t, 1);
                                    {
                                      ATerm e_20 = t;
                                      int f_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm r_36 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, g_10, h_10);
                                          t = h_0(t);
                                          r_36 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, f_10, r_36);
                                          t = h_0(t);
                                          LocalPopChoice(f_20);
                                        }
                                      else
                                        {
                                          t = e_20;
                                          {
                                            ATerm i_20 = t;
                                            int j_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = h_10;
                                                if((i_10 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(j_20);
                                              }
                                            else
                                              {
                                                t = i_20;
                                                t = j_10;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        f_10 = ATgetArgument(t, 0);
                                        {
                                          ATerm k_20 = t;
                                          int l_20 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = h_10;
                                              if((i_10 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(l_20);
                                            }
                                          else
                                            {
                                              t = k_20;
                                              {
                                                ATerm m_20 = t;
                                                int n_20 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = f_10;
                                                    t = topdown_1_0(b_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, f_10);
                                                    t = bottomup_1_0(h_0, t);
                                                    LocalPopChoice(n_20);
                                                  }
                                                else
                                                  {
                                                    t = m_20;
                                                    t = j_10;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm o_20 = t;
                                        int p_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = h_10;
                                            if((i_10 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(p_20);
                                          }
                                        else
                                          {
                                            t = o_20;
                                            t = j_10;
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
                        i_10 = ATgetArgument(t, 0);
                        h_10 = ATgetArgument(t, 1);
                        t = h_10;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = i_10;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm q_20 = t;
                                int r_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_q_7;
                                    t = h_0(t);
                                    LocalPopChoice(r_20);
                                  }
                                else
                                  {
                                    t = q_20;
                                    t = h_10;
                                  }
                              }
                            else
                              {
                                ATerm s_20 = t;
                                int t_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_q_7;
                                    t = h_0(t);
                                    LocalPopChoice(t_20);
                                  }
                                else
                                  {
                                    t = s_20;
                                    t = j_10;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = i_10;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm u_20 = t;
                                    int w_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_c_8;
                                        t = h_0(t);
                                        LocalPopChoice(w_20);
                                      }
                                    else
                                      {
                                        t = u_20;
                                        t = h_10;
                                      }
                                  }
                                else
                                  {
                                    ATerm x_20 = t;
                                    int y_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_c_8;
                                        t = h_0(t);
                                        LocalPopChoice(y_20);
                                      }
                                    else
                                      {
                                        t = x_20;
                                        t = j_10;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    d_10 = ATgetArgument(t, 0);
                                    e_10 = ATgetArgument(t, 1);
                                    t = i_10;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = h_10;
                                      }
                                    else
                                      {
                                        ATerm z_20 = t;
                                        int a_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm c_38 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, i_10, d_10);
                                            t = conc_0_0(t);
                                            c_38 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, c_38, e_10);
                                            t = bottomup_1_0(h_0, t);
                                            LocalPopChoice(a_21);
                                          }
                                        else
                                          {
                                            t = z_20;
                                            t = j_10;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = i_10;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = h_10;
                                      }
                                    else
                                      {
                                        t = j_10;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm b_21 = t;
                        int c_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm d_21 = ATgetArgument(t, 0);
                                h_10 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(c_21);
                            t = h_10;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm e_21 = t;
                                int f_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_q_7;
                                    t = h_0(t);
                                    LocalPopChoice(f_21);
                                  }
                                else
                                  {
                                    t = e_21;
                                    t = j_10;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm h_21 = t;
                                    int i_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_c_8;
                                        t = h_0(t);
                                        LocalPopChoice(i_21);
                                      }
                                    else
                                      {
                                        t = h_21;
                                        t = j_10;
                                      }
                                  }
                                else
                                  {
                                    t = j_10;
                                  }
                              }
                          }
                        else
                          {
                            t = b_21;
                            if(match_cons(t, sym_All_1))
                              {
                                i_10 = ATgetArgument(t, 0);
                                t = i_10;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm j_21 = t;
                                    int k_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_q_7;
                                        t = h_0(t);
                                        LocalPopChoice(k_21);
                                      }
                                    else
                                      {
                                        t = j_21;
                                        t = j_10;
                                      }
                                  }
                                else
                                  {
                                    t = j_10;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    i_10 = ATgetArgument(t, 0);
                                    t = i_10;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm l_21 = t;
                                        int m_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_q_7;
                                            t = h_0(t);
                                            LocalPopChoice(m_21);
                                          }
                                        else
                                          {
                                            t = l_21;
                                            {
                                              ATerm n_21 = t;
                                              int o_21 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm u_38 = NULL,v_38 = NULL,x_38 = NULL,y_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL;
                                                  t = j_10;
                                                  t = new_0_0(t);
                                                  u_38 = t;
                                                  t = bottomup_1_0(h_0, t);
                                                  h_39 = t;
                                                  t = (ATerm) ATempty;
                                                  t = h_0(t);
                                                  i_39 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(i_39), h_39);
                                                  t = h_0(t);
                                                  v_38 = t;
                                                  t = u_38;
                                                  t = bottomup_1_0(h_0, t);
                                                  g_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, g_39);
                                                  t = h_0(t);
                                                  f_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, f_39);
                                                  t = h_0(t);
                                                  y_38 = t;
                                                  t = i_10;
                                                  t = bottomup_1_0(h_0, t);
                                                  b_39 = t;
                                                  t = u_38;
                                                  t = bottomup_1_0(h_0, t);
                                                  e_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, e_39);
                                                  t = h_0(t);
                                                  d_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, d_39);
                                                  t = h_0(t);
                                                  c_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_39, c_39);
                                                  t = h_0(t);
                                                  a_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_38, a_39);
                                                  t = h_0(t);
                                                  x_38 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, v_38, x_38);
                                                  t = h_0(t);
                                                  LocalPopChoice(o_21);
                                                }
                                              else
                                                {
                                                  t = n_21;
                                                  t = j_10;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm p_21 = t;
                                            int q_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_c_8;
                                                t = h_0(t);
                                                LocalPopChoice(q_21);
                                              }
                                            else
                                              {
                                                t = p_21;
                                                {
                                                  ATerm r_21 = t;
                                                  int t_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,s_39 = NULL,t_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
                                                      t = j_10;
                                                      t = new_0_0(t);
                                                      m_39 = t;
                                                      t = bottomup_1_0(h_0, t);
                                                      g_40 = t;
                                                      t = (ATerm) ATempty;
                                                      t = h_0(t);
                                                      h_40 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(h_40), g_40);
                                                      t = h_0(t);
                                                      n_39 = t;
                                                      t = m_39;
                                                      t = bottomup_1_0(h_0, t);
                                                      f_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, f_40);
                                                      t = h_0(t);
                                                      d_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, d_40);
                                                      t = h_0(t);
                                                      p_39 = t;
                                                      t = i_10;
                                                      t = bottomup_1_0(h_0, t);
                                                      t_39 = t;
                                                      t = m_39;
                                                      t = bottomup_1_0(h_0, t);
                                                      c_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, c_40);
                                                      t = h_0(t);
                                                      b_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, b_40);
                                                      t = h_0(t);
                                                      a_40 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_39, a_40);
                                                      t = h_0(t);
                                                      s_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_39, s_39);
                                                      t = h_0(t);
                                                      o_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, n_39, o_39);
                                                      t = h_0(t);
                                                      LocalPopChoice(t_21);
                                                    }
                                                  else
                                                    {
                                                      t = r_21;
                                                      t = j_10;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                f_10 = ATgetArgument(t, 0);
                                                g_10 = ATgetArgument(t, 1);
                                                t = g_10;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    q_9 = ATgetArgument(t, 0);
                                                    s_9 = ATgetArgument(t, 1);
                                                    t = q_9;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        r_9 = ATgetArgument(t, 0);
                                                        t = f_10;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            b_10 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm u_21 = t;
                                                              int v_21 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, r_9);
                                                                  t = h_0(t);
                                                                  r_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, r_40, s_9);
                                                                  t = h_0(t);
                                                                  q_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_10, q_40);
                                                                  t = h_0(t);
                                                                  p_40 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, p_40);
                                                                  t = h_0(t);
                                                                  LocalPopChoice(v_21);
                                                                }
                                                              else
                                                                {
                                                                  t = u_21;
                                                                  {
                                                                    ATerm w_21 = t;
                                                                    int x_21 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm t_40 = NULL,u_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL;
                                                                        t = j_10;
                                                                        t = new_0_0(t);
                                                                        t_40 = t;
                                                                        t = bottomup_1_0(h_0, t);
                                                                        f_41 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = h_0(t);
                                                                        g_41 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(g_41), f_41);
                                                                        t = h_0(t);
                                                                        u_40 = t;
                                                                        t = t_40;
                                                                        t = bottomup_1_0(h_0, t);
                                                                        e_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, e_41);
                                                                        t = h_0(t);
                                                                        d_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, d_41);
                                                                        t = h_0(t);
                                                                        x_40 = t;
                                                                        t = i_10;
                                                                        t = bottomup_1_0(h_0, t);
                                                                        z_40 = t;
                                                                        t = t_40;
                                                                        t = bottomup_1_0(h_0, t);
                                                                        c_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, c_41);
                                                                        t = h_0(t);
                                                                        b_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, b_41);
                                                                        t = h_0(t);
                                                                        a_41 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, z_40, a_41);
                                                                        t = h_0(t);
                                                                        y_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_40, y_40);
                                                                        t = h_0(t);
                                                                        w_40 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, u_40, w_40);
                                                                        t = h_0(t);
                                                                        LocalPopChoice(x_21);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = w_21;
                                                                        t = j_10;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm y_21 = t;
                                                            int z_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,x_41 = NULL,b_42 = NULL,f_42 = NULL,g_42 = NULL,j_42 = NULL,l_42 = NULL,m_42 = NULL,r_42 = NULL,u_42 = NULL;
                                                                t = j_10;
                                                                t = new_0_0(t);
                                                                p_41 = t;
                                                                t = bottomup_1_0(h_0, t);
                                                                r_42 = t;
                                                                t = (ATerm) ATempty;
                                                                t = h_0(t);
                                                                u_42 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(u_42), r_42);
                                                                t = h_0(t);
                                                                q_41 = t;
                                                                t = p_41;
                                                                t = bottomup_1_0(h_0, t);
                                                                m_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, m_42);
                                                                t = h_0(t);
                                                                l_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, l_42);
                                                                t = h_0(t);
                                                                s_41 = t;
                                                                t = i_10;
                                                                t = bottomup_1_0(h_0, t);
                                                                b_42 = t;
                                                                t = p_41;
                                                                t = bottomup_1_0(h_0, t);
                                                                j_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, j_42);
                                                                t = h_0(t);
                                                                g_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, g_42);
                                                                t = h_0(t);
                                                                f_42 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, b_42, f_42);
                                                                t = h_0(t);
                                                                x_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, s_41, x_41);
                                                                t = h_0(t);
                                                                r_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, q_41, r_41);
                                                                t = h_0(t);
                                                                LocalPopChoice(z_21);
                                                              }
                                                            else
                                                              {
                                                                t = y_21;
                                                                t = j_10;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = f_10;
                                                        {
                                                          ATerm a_22 = t;
                                                          int c_22 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,g_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL;
                                                              t = j_10;
                                                              t = new_0_0(t);
                                                              x_42 = t;
                                                              t = bottomup_1_0(h_0, t);
                                                              q_43 = t;
                                                              t = (ATerm) ATempty;
                                                              t = h_0(t);
                                                              r_43 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(r_43), q_43);
                                                              t = h_0(t);
                                                              a_43 = t;
                                                              t = x_42;
                                                              t = bottomup_1_0(h_0, t);
                                                              p_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, p_43);
                                                              t = h_0(t);
                                                              o_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, o_43);
                                                              t = h_0(t);
                                                              c_43 = t;
                                                              t = i_10;
                                                              t = bottomup_1_0(h_0, t);
                                                              k_43 = t;
                                                              t = x_42;
                                                              t = bottomup_1_0(h_0, t);
                                                              n_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, n_43);
                                                              t = h_0(t);
                                                              m_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, m_43);
                                                              t = h_0(t);
                                                              l_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, k_43, l_43);
                                                              t = h_0(t);
                                                              g_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, c_43, g_43);
                                                              t = h_0(t);
                                                              b_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_43, b_43);
                                                              t = h_0(t);
                                                              LocalPopChoice(c_22);
                                                            }
                                                          else
                                                            {
                                                              t = a_22;
                                                              t = j_10;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = f_10;
                                                    {
                                                      ATerm d_22 = t;
                                                      int e_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm u_43 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL;
                                                          t = j_10;
                                                          t = new_0_0(t);
                                                          u_43 = t;
                                                          t = bottomup_1_0(h_0, t);
                                                          l_44 = t;
                                                          t = (ATerm) ATempty;
                                                          t = h_0(t);
                                                          m_44 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(m_44), l_44);
                                                          t = h_0(t);
                                                          b_44 = t;
                                                          t = u_43;
                                                          t = bottomup_1_0(h_0, t);
                                                          k_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, k_44);
                                                          t = h_0(t);
                                                          j_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, j_44);
                                                          t = h_0(t);
                                                          d_44 = t;
                                                          t = i_10;
                                                          t = bottomup_1_0(h_0, t);
                                                          f_44 = t;
                                                          t = u_43;
                                                          t = bottomup_1_0(h_0, t);
                                                          i_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, i_44);
                                                          t = h_0(t);
                                                          h_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, h_44);
                                                          t = h_0(t);
                                                          g_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_44, g_44);
                                                          t = h_0(t);
                                                          e_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_44, e_44);
                                                          t = h_0(t);
                                                          c_44 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, b_44, c_44);
                                                          t = h_0(t);
                                                          LocalPopChoice(e_22);
                                                        }
                                                      else
                                                        {
                                                          t = d_22;
                                                          t = j_10;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    f_10 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm f_22 = t;
                                                      int g_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, f_10);
                                                          t = h_0(t);
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
                                                                ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,d_45 = NULL;
                                                                t = j_10;
                                                                t = new_0_0(t);
                                                                q_44 = t;
                                                                t = bottomup_1_0(h_0, t);
                                                                b_45 = t;
                                                                t = (ATerm) ATempty;
                                                                t = h_0(t);
                                                                d_45 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(d_45), b_45);
                                                                t = h_0(t);
                                                                r_44 = t;
                                                                t = q_44;
                                                                t = bottomup_1_0(h_0, t);
                                                                a_45 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, a_45);
                                                                t = h_0(t);
                                                                z_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, z_44);
                                                                t = h_0(t);
                                                                t_44 = t;
                                                                t = i_10;
                                                                t = bottomup_1_0(h_0, t);
                                                                v_44 = t;
                                                                t = q_44;
                                                                t = bottomup_1_0(h_0, t);
                                                                y_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, y_44);
                                                                t = h_0(t);
                                                                x_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, x_44);
                                                                t = h_0(t);
                                                                w_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, v_44, w_44);
                                                                t = h_0(t);
                                                                u_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_44, u_44);
                                                                t = h_0(t);
                                                                s_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, r_44, s_44);
                                                                t = h_0(t);
                                                                LocalPopChoice(i_22);
                                                              }
                                                            else
                                                              {
                                                                t = h_22;
                                                                t = j_10;
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
                                                        ATerm i_45 = NULL,j_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL;
                                                        t = j_10;
                                                        t = new_0_0(t);
                                                        i_45 = t;
                                                        t = bottomup_1_0(h_0, t);
                                                        w_45 = t;
                                                        t = (ATerm) ATempty;
                                                        t = h_0(t);
                                                        x_45 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(x_45), w_45);
                                                        t = h_0(t);
                                                        j_45 = t;
                                                        t = i_45;
                                                        t = bottomup_1_0(h_0, t);
                                                        v_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, v_45);
                                                        t = h_0(t);
                                                        u_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, u_45);
                                                        t = h_0(t);
                                                        o_45 = t;
                                                        t = i_10;
                                                        t = bottomup_1_0(h_0, t);
                                                        q_45 = t;
                                                        t = i_45;
                                                        t = bottomup_1_0(h_0, t);
                                                        t_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, t_45);
                                                        t = h_0(t);
                                                        s_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, s_45);
                                                        t = h_0(t);
                                                        r_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, q_45, r_45);
                                                        t = h_0(t);
                                                        p_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, o_45, p_45);
                                                        t = h_0(t);
                                                        n_45 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, j_45, n_45);
                                                        t = h_0(t);
                                                        LocalPopChoice(k_22);
                                                      }
                                                    else
                                                      {
                                                        t = j_22;
                                                        t = j_10;
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
                                        i_10 = ATgetArgument(t, 0);
                                        t = i_10;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm l_22 = t;
                                            int n_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_q_7;
                                                t = h_0(t);
                                                LocalPopChoice(n_22);
                                              }
                                            else
                                              {
                                                t = l_22;
                                                t = j_10;
                                              }
                                          }
                                        else
                                          {
                                            t = j_10;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            i_10 = ATgetArgument(t, 0);
                                            t = i_10;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm o_22 = t;
                                                int p_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_c_8;
                                                    t = h_0(t);
                                                    LocalPopChoice(p_22);
                                                  }
                                                else
                                                  {
                                                    t = o_22;
                                                    t = j_10;
                                                  }
                                              }
                                            else
                                              {
                                                t = j_10;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                i_10 = ATgetArgument(t, 0);
                                                t = i_10;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm q_22 = t;
                                                    int r_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_c_8;
                                                        t = h_0(t);
                                                        LocalPopChoice(r_22);
                                                      }
                                                    else
                                                      {
                                                        t = q_22;
                                                        t = j_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = j_10;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm s_22 = t;
                                                int t_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm u_22 = ATgetArgument(t, 0);
                                                        h_10 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(t_22);
                                                    t = h_10;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm v_22 = t;
                                                        int w_22 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_c_8;
                                                            t = h_0(t);
                                                            LocalPopChoice(w_22);
                                                          }
                                                        else
                                                          {
                                                            t = v_22;
                                                            t = j_10;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = j_10;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = s_22;
                                                    {
                                                      ATerm x_22 = t;
                                                      int y_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm z_22 = ATgetArgument(t, 0);
                                                              h_10 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(y_22);
                                                          {
                                                            ATerm b_23 = t;
                                                            int c_23 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = h_10;
                                                                t = fetch_1_0(c_1, t);
                                                                t = term_c_8;
                                                                t = bottomup_1_0(h_0, t);
                                                                LocalPopChoice(c_23);
                                                              }
                                                            else
                                                              {
                                                                t = b_23;
                                                                t = j_10;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = x_22;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              i_10 = ATgetArgument(t, 0);
                                                              h_10 = ATgetArgument(t, 1);
                                                              t = h_10;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = i_10;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = h_10;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          f_10 = ATgetArgument(t, 0);
                                                                          g_10 = ATgetArgument(t, 1);
                                                                          t = i_10;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = i_10;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = i_10;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = h_10;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          f_10 = ATgetArgument(t, 0);
                                                                          g_10 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm d_23 = t;
                                                                            int e_23 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm e_47 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, g_10, h_10);
                                                                                t = h_0(t);
                                                                                e_47 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, f_10, e_47);
                                                                                t = h_0(t);
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
                                                                                      t = h_10;
                                                                                      if((i_10 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(g_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = f_23;
                                                                                      t = j_10;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm h_23 = t;
                                                                          int i_23 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = h_10;
                                                                              if((i_10 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(i_23);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_23;
                                                                              t = j_10;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  i_10 = ATgetArgument(t, 0);
                                                                  h_10 = ATgetArgument(t, 1);
                                                                  p_9 = ATgetArgument(t, 2);
                                                                  t = p_9;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm k_23 = t;
                                                                      int l_23 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, h_10);
                                                                          t = h_0(t);
                                                                          LocalPopChoice(l_23);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = k_23;
                                                                          t = j_10;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = j_10;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      i_10 = ATgetArgument(t, 0);
                                                                      h_10 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm m_23 = t;
                                                                        int n_23 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, i_10, h_10);
                                                                            t = h_0(t);
                                                                            LocalPopChoice(n_23);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = m_23;
                                                                            t = j_10;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          i_10 = ATgetArgument(t, 0);
                                                                          t = i_10;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              f_10 = ATgetFirst((ATermList) t);
                                                                              g_10 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm o_23 = t;
                                                                                int p_23 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm u_47 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, g_10);
                                                                                    t = h_0(t);
                                                                                    u_47 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, f_10, u_47);
                                                                                    t = h_0(t);
                                                                                    LocalPopChoice(p_23);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = o_23;
                                                                                    t = j_10;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm q_23 = t;
                                                                                  int r_23 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_c_8;
                                                                                      t = h_0(t);
                                                                                      LocalPopChoice(r_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = q_23;
                                                                                      t = j_10;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = j_10;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              i_10 = ATgetArgument(t, 0);
                                                                              t = i_10;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  f_10 = ATgetFirst((ATermList) t);
                                                                                  g_10 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm s_23 = t;
                                                                                    int t_23 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm b_48 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, g_10);
                                                                                        t = h_0(t);
                                                                                        b_48 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, f_10, b_48);
                                                                                        t = h_0(t);
                                                                                        LocalPopChoice(t_23);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = s_23;
                                                                                        t = j_10;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm u_23 = t;
                                                                                      int v_23 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_c_8;
                                                                                          t = h_0(t);
                                                                                          LocalPopChoice(v_23);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = u_23;
                                                                                          t = j_10;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = j_10;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  i_10 = ATgetArgument(t, 0);
                                                                                  t = i_10;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      f_10 = ATgetFirst((ATermList) t);
                                                                                      g_10 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm x_23 = t;
                                                                                        int y_23 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm h_48 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, g_10);
                                                                                            t = h_0(t);
                                                                                            h_48 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, f_10, h_48);
                                                                                            t = h_0(t);
                                                                                            LocalPopChoice(y_23);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = x_23;
                                                                                            t = j_10;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm z_23 = t;
                                                                                          int a_24 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_q_7;
                                                                                              t = h_0(t);
                                                                                              LocalPopChoice(a_24);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = z_23;
                                                                                              t = j_10;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = j_10;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      i_10 = ATgetArgument(t, 0);
                                                                                      h_10 = ATgetArgument(t, 1);
                                                                                      p_9 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm b_24 = t;
                                                                                        int c_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,u_48 = NULL;
                                                                                            t = term_d_24;
                                                                                            t = bottomup_1_0(h_0, t);
                                                                                            p_48 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = h_0(t);
                                                                                            u_48 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(u_48), p_9);
                                                                                            t = h_0(t);
                                                                                            r_48 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(r_48), i_10);
                                                                                            t = h_0(t);
                                                                                            q_48 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, p_48, q_48);
                                                                                            t = h_0(t);
                                                                                            o_48 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, h_10, o_48);
                                                                                            t = h_0(t);
                                                                                            LocalPopChoice(c_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = b_24;
                                                                                            t = j_10;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          i_10 = ATgetArgument(t, 0);
                                                                                          h_10 = ATgetArgument(t, 1);
                                                                                          p_9 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm e_24 = t;
                                                                                            int g_24 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, h_10);
                                                                                                t = h_0(t);
                                                                                                f_49 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, p_9);
                                                                                                t = h_0(t);
                                                                                                i_49 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = h_0(t);
                                                                                                j_49 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(j_49), i_49);
                                                                                                t = h_0(t);
                                                                                                h_49 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(h_49), i_10);
                                                                                                t = h_0(t);
                                                                                                g_49 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(g_49), f_49);
                                                                                                t = h_0(t);
                                                                                                e_49 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, e_49);
                                                                                                t = h_0(t);
                                                                                                LocalPopChoice(g_24);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = e_24;
                                                                                                t = j_10;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              i_10 = ATgetArgument(t, 0);
                                                                                              h_10 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm h_24 = t;
                                                                                                int i_24 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm o_49 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, h_10);
                                                                                                    t = h_0(t);
                                                                                                    o_49 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, i_10, o_49);
                                                                                                    t = h_0(t);
                                                                                                    LocalPopChoice(i_24);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = h_24;
                                                                                                    t = j_10;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  i_10 = ATgetArgument(t, 0);
                                                                                                  h_10 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm j_24 = t;
                                                                                                    int k_24 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm s_49 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, i_10);
                                                                                                        t = h_0(t);
                                                                                                        s_49 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, s_49, h_10);
                                                                                                        t = h_0(t);
                                                                                                        LocalPopChoice(k_24);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = j_24;
                                                                                                        t = j_10;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      i_10 = ATgetArgument(t, 0);
                                                                                                      h_10 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm l_24 = t;
                                                                                                        int m_24 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm w_49 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, h_10);
                                                                                                            t = h_0(t);
                                                                                                            w_49 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, w_49, i_10);
                                                                                                            t = h_0(t);
                                                                                                            LocalPopChoice(m_24);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = l_24;
                                                                                                            t = j_10;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          i_10 = ATgetArgument(t, 0);
                                                                                                          h_10 = ATgetArgument(t, 1);
                                                                                                          t = h_10;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              d_10 = ATgetArgument(t, 0);
                                                                                                              e_10 = ATgetArgument(t, 1);
                                                                                                              t = i_10;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = h_10;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm n_24 = t;
                                                                                                                  int o_24 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm j_50 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, i_10, d_10);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      j_50 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, j_50, e_10);
                                                                                                                      t = bottomup_1_0(h_0, t);
                                                                                                                      LocalPopChoice(o_24);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = n_24;
                                                                                                                      t = j_10;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  d_10 = ATgetArgument(t, 0);
                                                                                                                  e_10 = ATgetArgument(t, 1);
                                                                                                                  z_9 = ATgetArgument(t, 2);
                                                                                                                  t = z_9;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = e_10;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = d_10;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              c_10 = ATgetArgument(t, 0);
                                                                                                                              t = i_10;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = h_10;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      f_10 = ATgetFirst((ATermList) t);
                                                                                                                                      g_10 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = g_10;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = f_10;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              b_10 = ATgetArgument(t, 0);
                                                                                                                                              w_9 = ATgetArgument(t, 1);
                                                                                                                                              t_9 = ATgetArgument(t, 2);
                                                                                                                                              u_9 = ATgetArgument(t, 3);
                                                                                                                                              t = t_9;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = w_9;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm p_24 = t;
                                                                                                                                                      int q_24 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = c_10;
                                                                                                                                                          if((b_10 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = u_9;
                                                                                                                                                          {
                                                                                                                                                            ATerm s_24 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm e_1 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm t_24 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(t_24, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((b_10 != ATgetArgument(t_24, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(t_24, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm u_24 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(u_24) != AT_LIST) || !(ATisEmpty(u_24))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm v_24 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(v_24) != AT_LIST) || !(ATisEmpty(v_24))))
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
                                                                                                                                                                t = s_24;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = u_9;
                                                                                                                                                          t = bottomup_1_0(h_0, t);
                                                                                                                                                          LocalPopChoice(q_24);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = p_24;
                                                                                                                                                          t = j_10;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = j_10;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = j_10;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = j_10;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = j_10;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = j_10;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = i_10;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = h_10;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = j_10;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = i_10;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = h_10;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = j_10;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = i_10;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = h_10;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = j_10;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = i_10;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = h_10;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = j_10;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              i_10 = ATgetArgument(t, 0);
                                                                                                              h_10 = ATgetArgument(t, 1);
                                                                                                              t = i_10;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = h_10;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = j_10;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = j_10;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  }
                                              }
                                          }
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
  ATerm w_24 = t;
  if((PushChoice() == 0))
    {
      ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL,r_5 = NULL;
      b_52 = t;
      if(match_cons(t, sym_Var_1))
        {
          a_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_52);
      z_51 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, a_52);
      r_5 = t;
      t = SSLsetAnnotations(r_5, z_51);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_24;
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_24;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_52 = ATgetFirst((ATermList) t);
      d_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_52, d_52);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL,i_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_24 = ATgetArgument(t, 0);
      if(match_cons(y_24, sym__2))
        {
          e_52 = ATgetArgument(y_24, 0);
          f_52 = ATgetArgument(y_24, 1);
        }
      else
        _fail(t);
      {
        ATerm z_24 = ATgetArgument(t, 1);
        if(match_cons(z_24, sym__2))
          {
            g_52 = ATgetArgument(z_24, 0);
            i_52 = ATgetArgument(z_24, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_52), e_52), (ATerm) ATinsert(CheckATermList(i_52), f_52));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_24;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_52 = ATgetFirst((ATermList) t);
      k_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_52, k_52);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_25 = ATgetArgument(t, 0);
      if(match_cons(b_25, sym__2))
        {
          l_52 = ATgetArgument(b_25, 0);
          m_52 = ATgetArgument(b_25, 1);
        }
      else
        _fail(t);
      {
        ATerm c_25 = ATgetArgument(t, 1);
        if(match_cons(c_25, sym__2))
          {
            n_52 = ATgetArgument(c_25, 0);
            o_52 = ATgetArgument(c_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_52), l_52), (ATerm) ATinsert(CheckATermList(o_52), m_52));
  return(t);
}
static ATerm u_10 (ATerm q_27, ATerm r_27, ATerm s_27, ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,s_5 = NULL;
  t = s_27;
  t = fetch_1_0(f_1, t);
  t = s_27;
  t = genzip_4_0(g_1, h_1, i_1, LiftPrimArg_0_0, t);
  y_51 = t;
  if(match_cons(t, sym__2))
    {
      u_51 = ATgetArgument(t, 0);
      v_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_51);
  t_51 = t;
  t = u_51;
  t = concat_0_0(t);
  w_51 = t;
  t = v_51;
  t = genzip_4_0(j_1, k_1, l_1, _id, t);
  x_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_51, x_51);
  s_5 = t;
  t = SSLsetAnnotations(s_5, t_51);
  if(match_cons(t, sym__2))
    {
      q_51 = ATgetArgument(t, 0);
      {
        ATerm d_25 = ATgetArgument(t, 1);
        if(match_cons(d_25, sym__2))
          {
            r_51 = ATgetArgument(d_25, 0);
            s_51 = ATgetArgument(d_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, q_51, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_51), (ATerm) ATmakeAppl(sym_CallT_3, q_27, r_27, s_51)));
  return(t);
}
ATerm genzip_4_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm t)
{
  static ATerm z_52 (ATerm t)
  {
    ATerm f_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_107(t);
        LocalPopChoice(n_25);
      }
    else
      {
        t = f_25;
        {
          ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL,j_7 = NULL;
          t = v_107(t);
          y_52 = t;
          if(match_cons(t, sym__2))
            {
              r_52 = ATgetArgument(t, 0);
              s_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_52);
          q_52 = t;
          t = r_52;
          t = x_107(t);
          w_52 = t;
          t = s_52;
          t = z_52(t);
          x_52 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_52, x_52);
          j_7 = t;
          t = SSLsetAnnotations(j_7, q_52);
          t = w_107(t);
        }
      }
    return(t);
  }
  t = z_52(t);
  return(t);
}
ATerm at_end_1_0 (ATerm j_124 (ATerm), ATerm t)
{
  static ATerm n_53 (ATerm t)
  {
    ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL;
    m_53 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_53 = ATgetFirst((ATermList) t);
        l_53 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_1 = NULL,w_1 = NULL,p_7 = NULL;
          t = SSLgetAnnotations(m_53);
          t_1 = t;
          t = l_53;
          t = n_53(t);
          w_1 = t;
          t = (ATerm) ATinsert(CheckATermList(w_1), k_53);
          p_7 = t;
          t = SSLsetAnnotations(p_7, t_1);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_53;
        t = j_124(t);
      }
    return(t);
  }
  t = n_53(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_53 = NULL,s_53 = NULL,t_53 = NULL;
  q_53 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_53;
    }
  else
    {
      static ATerm m_1 (ATerm t)
      {
        t = not_null(t_53);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_53 = ATgetFirst((ATermList) t);
          if(((t_53 != NULL) && (t_53 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_53;
      t = at_end_1_0(m_1, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm k_54 (ATerm b_54, ATerm t)
{
  ATerm d_54 = NULL;
  t = b_54;
  {
    ATerm o_25 = t;
    if((PushChoice() == 0))
      {
        ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,r_7 = NULL;
        g_54 = t;
        if(match_cons(t, sym_Var_1))
          {
            f_54 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_54);
        e_54 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, f_54);
        r_7 = t;
        t = SSLsetAnnotations(r_7, e_54);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_25;
      }
  }
  t = new_0_0(t);
  d_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, d_54), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_54), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_54)))), (ATerm) ATmakeAppl(sym_Var_1, d_54)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL;
  h_54 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_54 = ATgetArgument(t, 0);
      {
        ATerm p_25 = t;
        int q_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_54(h_54, t);
            LocalPopChoice(q_25);
          }
        else
          {
            t = p_25;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATmakeAppl(sym_Var_1, i_54)));
          }
      }
    }
  else
    {
      t = k_54(h_54, t);
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm r_25 = t;
  if((PushChoice() == 0))
    {
      ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,w_7 = NULL;
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
      w_7 = t;
      t = SSLsetAnnotations(w_7, r_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_25;
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_24;
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
        ATerm t_25 = ATgetArgument(t, 1);
        if(match_cons(t_25, sym__2))
          {
            y_2 = ATgetArgument(t_25, 0);
            z_2 = ATgetArgument(t_25, 1);
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
  t = term_x_24;
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
      ATerm u_25 = ATgetArgument(t, 0);
      if(match_cons(u_25, sym__2))
        {
          c_3 = ATgetArgument(u_25, 0);
          d_3 = ATgetArgument(u_25, 1);
        }
      else
        _fail(t);
      {
        ATerm v_25 = ATgetArgument(t, 1);
        if(match_cons(v_25, sym__2))
          {
            e_3 = ATgetArgument(v_25, 0);
            f_3 = ATgetArgument(v_25, 1);
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
  ATerm x_25 = t;
  if((PushChoice() == 0))
    {
      ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,o_8 = NULL;
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
      o_8 = t;
      t = SSLsetAnnotations(o_8, z_3);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_25;
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_24;
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
      ATerm y_25 = ATgetArgument(t, 0);
      if(match_cons(y_25, sym__2))
        {
          e_4 = ATgetArgument(y_25, 0);
          f_4 = ATgetArgument(y_25, 1);
        }
      else
        _fail(t);
      {
        ATerm z_25 = ATgetArgument(t, 1);
        if(match_cons(z_25, sym__2))
          {
            g_4 = ATgetArgument(z_25, 0);
            h_4 = ATgetArgument(z_25, 1);
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
  t = term_x_24;
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
      ATerm a_26 = ATgetArgument(t, 0);
      if(match_cons(a_26, sym__2))
        {
          k_4 = ATgetArgument(a_26, 0);
          l_4 = ATgetArgument(a_26, 1);
        }
      else
        _fail(t);
      {
        ATerm b_26 = ATgetArgument(t, 1);
        if(match_cons(b_26, sym__2))
          {
            m_4 = ATgetArgument(b_26, 0);
            n_4 = ATgetArgument(b_26, 1);
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
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL;
  g_57 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      h_57 = ATgetArgument(t, 0);
      i_57 = ATgetArgument(t, 1);
      f_57 = ATgetArgument(t, 2);
      {
        ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,b_8 = NULL;
        t = f_57;
        t = fetch_1_0(n_1, t);
        t = f_57;
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
              ATerm c_26 = ATgetArgument(t, 1);
              if(match_cons(c_26, sym__2))
                {
                  j_2 = ATgetArgument(c_26, 0);
                  k_2 = ATgetArgument(c_26, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_2, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_2), (ATerm) ATmakeAppl(sym_PrimT_3, h_57, i_57, k_2)));
      }
    }
  else
    {
      ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,q_8 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          h_57 = ATgetArgument(t, 0);
          i_57 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_57;
      t = fetch_1_0(v_1, t);
      t = i_57;
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
      q_8 = t;
      t = SSLsetAnnotations(q_8, t_3);
      if(match_cons(t, sym__2))
        {
          q_3 = ATgetArgument(t, 0);
          {
            ATerm d_26 = ATgetArgument(t, 1);
            if(match_cons(d_26, sym__2))
              {
                r_3 = ATgetArgument(d_26, 0);
                s_3 = ATgetArgument(d_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, q_3, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_3), (ATerm) ATmakeAppl(sym_PrimT_3, h_57, (ATerm)ATempty, s_3)));
    }
  return(t);
}
ATerm topdown_1_0 (ATerm i_103 (ATerm), ATerm t)
{
  static ATerm d_2 (ATerm t)
  {
    t = topdown_1_0(i_103, t);
    return(t);
  }
  t = i_103(t);
  t = SRTS_all(d_2, t);
  return(t);
}
ATerm map_1_0 (ATerm s_123 (ATerm), ATerm t)
{
  static ATerm z_57 (ATerm t)
  {
    ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL;
    w_57 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_57;
      }
    else
      {
        ATerm v_4 = NULL,y_4 = NULL,z_4 = NULL,j_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_57 = ATgetFirst((ATermList) t);
            y_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_57);
        v_4 = t;
        t = x_57;
        t = s_123(t);
        y_4 = t;
        t = y_57;
        t = z_57(t);
        z_4 = t;
        t = (ATerm) ATinsert(CheckATermList(z_4), y_4);
        j_9 = t;
        t = SSLsetAnnotations(j_9, v_4);
      }
    return(t);
  }
  t = z_57(t);
  return(t);
}
static ATerm y_10 (ATerm v_43, ATerm w_43, ATerm t)
{
  ATerm g_58 = NULL;
  t = SSL_fputc(v_43, w_43);
  g_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_58);
  return(t);
}
static ATerm z_10 (ATerm w_48, ATerm x_48, ATerm t)
{
  ATerm h_58 = NULL;
  t = SSL_write_term_to_stream_text(w_48, x_48);
  h_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_58);
  return(t);
}
static ATerm b_11 (ATerm m_117 (ATerm), ATerm o_428, ATerm c_49, ATerm t)
{
  ATerm i_58 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_428, term_e_26);
  t = f_11(t);
  i_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_58, c_49);
  t = m_117(t);
  t = fclose_0_0(t);
  t = c_49;
  return(t);
}
static ATerm a_11 (ATerm s_48, ATerm t_48, ATerm t)
{
  ATerm j_58 = NULL;
  t = SSL_write_term_to_stream_baf(s_48, t_48);
  j_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_58);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_26 = ATgetArgument(t, 0);
      if(match_cons(f_26, sym_Stream_1))
        {
          q_58 = ATgetArgument(f_26, 0);
        }
      else
        _fail(t);
      r_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(q_58, r_58, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL,x_58 = NULL,y_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_26 = ATgetArgument(t, 0);
      if(match_cons(g_26, sym_Stream_1))
        {
          x_58 = ATgetArgument(g_26, 0);
        }
      else
        _fail(t);
      y_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(x_58, y_58, t);
  s_58 = t;
  t = term_h_26;
  t_58 = t;
  t = s_58;
  if(match_cons(t, sym_Stream_1))
    {
      u_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_26, s_58);
  t = y_10(t_58, u_58, t);
  return(t);
}
ATerm output_1_0 (ATerm j_130 (ATerm), ATerm t)
{
  ATerm k_58 = NULL,l_58 = NULL;
  t = j_130(t);
  l_58 = t;
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_58 = NULL,n_58 = NULL;
        t = term_k_26;
        m_58 = t;
        t = term_m_26;
        n_58 = t;
        t = term_n_26;
        t = j_11(m_58, n_58, t);
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
        t = term_o_26;
      }
  }
  k_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_58, l_58);
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_58 = NULL,p_58 = NULL;
        t = term_k_26;
        o_58 = t;
        t = term_r_26;
        p_58 = t;
        t = term_s_26;
        t = j_11(o_58, p_58, t);
        t = (ATerm) ATmakeAppl(sym__2, k_58, l_58);
        LocalPopChoice(q_26);
        if(match_cons(t, sym__2))
          {
            ATerm t_26 = ATgetArgument(t, 0);
            ATerm u_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_11(e_2, k_58, l_58, t);
      }
    else
      {
        t = p_26;
        if(match_cons(t, sym__2))
          {
            ATerm v_26 = ATgetArgument(t, 0);
            ATerm x_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_11(f_2, k_58, l_58, t);
      }
  }
  return(t);
}
static ATerm m_59 (ATerm g_59, ATerm t)
{
  t = SSL_fclose(g_59);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL;
  k_59 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_59 = ATgetArgument(t, 0);
      {
        ATerm y_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_59);
            LocalPopChoice(z_26);
          }
        else
          {
            t = y_26;
            t = m_59(k_59, t);
          }
      }
    }
  else
    {
      t = m_59(k_59, t);
    }
  return(t);
}
static ATerm c_11 (ATerm y_48, ATerm t)
{
  t = SSL_read_term_from_stream(y_48);
  return(t);
}
static ATerm d_11 (ATerm o_42, ATerm p_42, ATerm t)
{
  t = SSL_strcat(o_42, p_42);
  return(t);
}
static ATerm e_11 (ATerm x_43, ATerm y_43, ATerm t)
{
  ATerm n_59 = NULL;
  t = SSL_fopen(x_43, y_43);
  n_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_59);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_59 = NULL;
  t = SSL_stdin_stream();
  o_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_59);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_59 = NULL;
  t = SSL_stdout_stream();
  p_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_59);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_59 = NULL;
  t = SSL_stderr_stream();
  q_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_59);
  return(t);
}
static ATerm x_60 (ATerm w_59, ATerm t)
{
  ATerm x_59 = NULL;
  t = SSL_explode_term(w_59);
  if(match_cons(t, sym__2))
    {
      ATerm a_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_27 = ATgetArgument(t, 1);
        if(((ATgetType(b_27) == AT_LIST) && !(ATisEmpty(b_27))))
          {
            x_59 = ATgetFirst((ATermList) b_27);
            {
              ATerm c_27 = (ATerm) ATgetNext((ATermList) b_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_59;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_59;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_59;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_59;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm y_60 (ATerm a_60, ATerm b_60, ATerm c_60, ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL,i_60 = NULL,l_9 = NULL;
  t = SSLgetAnnotations(c_60);
  f_60 = t;
  t = a_60;
  if(match_cons(t, sym_Path_1))
    {
      i_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_60, b_60);
  l_9 = t;
  t = SSLsetAnnotations(l_9, f_60);
  if(match_cons(t, sym__2))
    {
      d_60 = ATgetArgument(t, 0);
      e_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(d_60, e_60, t);
  return(t);
}
static ATerm z_60 (ATerm k_60, ATerm l_60, ATerm m_60, ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL,s_60 = NULL,m_9 = NULL;
  t = SSLgetAnnotations(m_60);
  p_60 = t;
  t = SSL_is_string(k_60);
  s_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_60, l_60);
  m_9 = t;
  t = SSLsetAnnotations(m_9, p_60);
  if(match_cons(t, sym__2))
    {
      n_60 = ATgetArgument(t, 0);
      o_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(n_60, o_60, t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL;
  u_60 = t;
  if(match_cons(t, sym__2))
    {
      v_60 = ATgetArgument(t, 0);
      w_60 = ATgetArgument(t, 1);
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_60(u_60, t);
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            {
              ATerm f_27 = t;
              int g_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_60(v_60, w_60, u_60, t);
                  LocalPopChoice(g_27);
                }
              else
                {
                  t = f_27;
                  t = z_60(v_60, w_60, u_60, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_60(u_60, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,i_61 = NULL;
  i_61 = t;
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, i_61, term_j_27);
        t = f_11(t);
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        {
          ATerm m_5 = NULL,n_5 = NULL;
          t = term_k_27;
          n_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_27, i_61);
          t = d_11(n_5, i_61, t);
          m_5 = t;
          t = SSL_perror(m_5);
          _fail(t);
        }
      }
  }
  c_61 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(d_61, t);
  b_61 = t;
  t = c_61;
  t = fclose_0_0(t);
  t = b_61;
  return(t);
}
ATerm input_1_0 (ATerm k_130 (ATerm), ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_61 = NULL,m_61 = NULL;
      t = term_k_26;
      l_61 = t;
      t = term_n_27;
      m_61 = t;
      t = term_o_27;
      t = j_11(l_61, m_61, t);
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      t = term_p_27;
    }
  t = ReadFromFile_0_0(t);
  t = k_130(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL;
  n_61 = t;
  t = term_t_27;
  t = whoami_0_0(t);
  o_61 = t;
  t = term_u_27;
  q_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_27), o_61), term_v_27);
  r_61 = t;
  t = SSL_printnl(q_61, r_61);
  t = term_x_27;
  p_61 = t;
  t = SSL_exit(p_61);
  t = n_61;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm t_61 = NULL;
  t_61 = t;
  if(match_string(t, "-k"))
    {
      t = t_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_61;
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL;
  u_61 = t;
  t = SSL_string_to_int(u_61);
  v_61 = t;
  t = term_y_27;
  w_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_27, v_61);
  t = m_11(w_61, v_61, t);
  t = u_61;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_z_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_2, h_2, g_3, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm y_61 = NULL;
  y_61 = t;
  if(match_string(t, "-S"))
    {
      t = y_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_61;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL;
  t = term_a_28;
  z_61 = t;
  t = term_b_28;
  a_62 = t;
  t = term_c_28;
  t = m_11(z_61, a_62, t);
  t = term_e_28;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_f_28;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL;
  b_62 = t;
  t = SSL_string_to_int(b_62);
  c_62 = t;
  t = term_a_28;
  d_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_28, c_62);
  t = m_11(d_62, c_62, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_62);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_g_28;
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
  ATerm e_62 = NULL,f_62 = NULL;
  t = term_h_28;
  e_62 = t;
  t = term_t_27;
  f_62 = t;
  t = term_j_28;
  t = m_11(e_62, f_62, t);
  t = term_k_28;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_l_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, i_3, j_3, t);
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      {
        ATerm p_28 = t;
        int q_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_3, l_3, m_3, t);
            LocalPopChoice(q_28);
          }
        else
          {
            t = p_28;
            t = Option_3_0(n_3, o_3, p_3, t);
          }
      }
    }
  return(t);
}
static ATerm m_11 (ATerm q_47, ATerm r_47, ATerm t)
{
  ATerm g_62 = NULL;
  t = term_k_26;
  g_62 = t;
  t = SSL_table_put(g_62, q_47, r_47);
  t = (ATerm) ATmakeAppl(sym__3, term_k_26, q_47, r_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL;
      t = term_t_27;
      t = e_0(t);
      l_62 = t;
      t = term_r_28;
      m_62 = t;
      t = term_s_28;
      n_62 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_28, term_s_28, l_62);
      t = k_11(m_62, n_62, l_62, t);
      _fail(t);
    }
  else
    {
      ATerm q_62 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_62 = ATgetFirst((ATermList) t);
          k_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_62;
      t = c_0(t);
      t = term_t_27;
      t = d_0(t);
      q_62 = t;
      t = (ATerm) ATinsert(CheckATermList(k_62), q_62);
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm s_62 = NULL;
  s_62 = t;
  if(match_string(t, "-o"))
    {
      t = s_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_62;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm t_62 = NULL,u_62 = NULL;
  t_62 = t;
  t = term_m_26;
  u_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_26, t_62);
  t = m_11(u_62, t_62, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_62);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_t_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, q_4, t);
  return(t);
}
static ATerm k_11 (ATerm u_52, ATerm v_52, ATerm t_52, ATerm t)
{
  ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL;
  w_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_52, v_52);
  {
    ATerm u_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_28 = ATgetArgument(t, 0);
            ATerm x_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_52, v_52);
        t = j_11(u_52, v_52, t);
        LocalPopChoice(v_28);
      }
    else
      {
        t = u_28;
        t = (ATerm) ATempty;
      }
  }
  x_62 = t;
  t = (ATerm) ATinsert(CheckATermList(x_62), t_52);
  y_62 = t;
  t = SSL_table_put(u_52, v_52, y_62);
  t = w_62;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL;
      t = term_t_27;
      t = n_0(t);
      j_63 = t;
      t = term_r_28;
      k_63 = t;
      t = term_s_28;
      l_63 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_28, term_s_28, j_63);
      t = k_11(k_63, l_63, j_63, t);
      _fail(t);
    }
  else
    {
      ATerm p_63 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_63 = ATgetFirst((ATermList) t);
          g_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_63;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_63 = ATgetFirst((ATermList) t);
          i_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_63;
      t = k_0(t);
      t = h_63;
      t = l_0(t);
      p_63 = t;
      t = (ATerm) ATinsert(CheckATermList(i_63), p_63);
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm r_63 = NULL;
  r_63 = t;
  if(match_string(t, "-i"))
    {
      t = r_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_63;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL;
  s_63 = t;
  t = term_n_27;
  t_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_27, s_63);
  t = m_11(t_63, s_63, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_63);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_y_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_27;
  t = whoami_0_0(t);
  u_63 = t;
  t = term_u_27;
  w_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_29), u_63);
  x_63 = t;
  t = SSL_printnl(w_63, x_63);
  t = term_x_27;
  v_63 = t;
  t = SSL_exit(v_63);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm y_63 = NULL,z_63 = NULL;
  t = term_k_26;
  y_63 = t;
  t = term_b_29;
  z_63 = t;
  t = term_c_29;
  t = j_11(y_63, z_63, t);
  return(t);
}
static ATerm g_11 (ATerm c_50, ATerm d_50, ATerm t)
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_50, d_50);
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      t = SSL_addr(c_50, d_50);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL;
  b_64 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_64;
      t = i_122(t);
    }
  else
    {
      ATerm g_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_64 = ATgetFirst((ATermList) t);
          d_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_64;
      t = foldr_2_0(i_122, j_122, t);
      g_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_64, g_64);
      t = j_122(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_b_28;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL;
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      u_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_11(t_5, u_5, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_64 = NULL,p_5 = NULL,q_5 = NULL;
  t = times_0_0(t);
  q_5 = t;
  t = SSL_explode_term(q_5);
  if(match_cons(t, sym__2))
    {
      ATerm f_29 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5;
  t = foldr_2_0(u_4, w_4, t);
  j_64 = t;
  t = SSL_TicksToSeconds(j_64);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL;
  z_64 = t;
  if(match_cons(t, sym__2))
    {
      a_65 = ATgetArgument(t, 0);
      b_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_65;
        if((a_65 != t))
          {
            _fail(t);
          }
        t = z_64;
        LocalPopChoice(i_29);
      }
    else
      {
        t = h_29;
        t = (ATerm) ATmakeAppl(sym__2, a_65, b_65);
        {
          ATerm j_29 = t;
          int k_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_65, b_65);
              LocalPopChoice(k_29);
            }
          else
            {
              t = j_29;
              t = SSL_gtr(a_65, b_65);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, a_65, b_65);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_115 (ATerm), ATerm t)
{
  ATerm f_65 = NULL;
  f_65 = t;
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL;
        t = term_k_26;
        j_65 = t;
        t = term_a_28;
        k_65 = t;
        t = term_n_29;
        t = j_11(j_65, k_65, t);
        i_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_65, term_x_27);
        t = geq_0_0(t);
        t = f_65;
        t = j_115(t);
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
        t = f_65;
      }
  }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm m_65 = NULL,n_65 = NULL,p_65 = NULL,q_65 = NULL;
  t = run_time_0_0(t);
  m_65 = t;
  t = term_t_27;
  t = whoami_0_0(t);
  n_65 = t;
  t = term_u_27;
  p_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_29), m_65), term_o_29), n_65);
  q_65 = t;
  t = SSL_printnl(p_65, q_65);
  t = (ATerm) ATmakeAppl(sym__2, term_u_27, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_29), m_65), term_o_29), n_65));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_65 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_28;
  r_65 = t;
  t = SSL_exit(r_65);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL;
  c_66 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_66;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_66 = ATgetArgument(t, 0);
          {
            ATerm g_6 = NULL,r_13 = NULL;
            t = SSLgetAnnotations(c_66);
            g_6 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_66);
            r_13 = t;
            t = SSLsetAnnotations(r_13, g_6);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_66;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_130 (ATerm), ATerm t)
{
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_65 = NULL,v_65 = NULL;
      t = term_k_26;
      u_65 = t;
      t = term_s_29;
      v_65 = t;
      t = term_u_29;
      t = j_11(u_65, v_65, t);
      LocalPopChoice(r_29);
    }
  else
    {
      t = q_29;
      t = fetch_1_0(a_5, t);
    }
  t = a_130(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_66 = ATgetFirst((ATermList) t);
      g_66 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_66 = NULL,l_66 = NULL;
        static ATerm b_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_66)), not_null(l_66));
          return(t);
        }
        t = g_66;
        t = i_0(t);
        if(((k_66 != NULL) && (k_66 != t)))
          _fail(t);
        else
          k_66 = t;
        t = f_66;
        t = g_0(t);
        if(((l_66 != NULL) && (l_66 != t)))
          _fail(t);
        else
          l_66 = t;
        t = g_66;
        t = reverse_acc_2_0(g_0, b_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_27;
      t = i_0(t);
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm r_66 = NULL,s_66 = NULL,t_66 = NULL,v_13 = NULL;
  t_66 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_66);
  r_66 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_66);
  v_13 = t;
  t = SSLsetAnnotations(v_13, r_66);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm v_66 = NULL;
  v_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_66), term_v_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL;
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_66 = NULL,q_66 = NULL;
      t = term_k_26;
      p_66 = t;
      t = term_b_29;
      q_66 = t;
      t = term_c_29;
      t = j_11(p_66, q_66, t);
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      t = fetch_1_0(c_5, t);
    }
  t = term_y_29;
  t = echo_0_0(t);
  t = term_r_28;
  n_66 = t;
  t = term_s_28;
  o_66 = t;
  t = term_z_29;
  t = j_11(n_66, o_66, t);
  t = reverse_acc_2_0(_id, d_5, t);
  t = map_1_0(e_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_124 (ATerm), ATerm t)
{
  static ATerm s_67 (ATerm t)
  {
    ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL;
    p_67 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_67 = ATgetFirst((ATermList) t);
        r_67 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_30 = t;
      int b_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_6 = NULL,r_6 = NULL,y_13 = NULL;
          t = SSLgetAnnotations(p_67);
          o_6 = t;
          t = q_67;
          t = c_124(t);
          r_6 = t;
          t = (ATerm) ATinsert(CheckATermList(r_67), r_6);
          y_13 = t;
          t = SSLsetAnnotations(y_13, o_6);
          LocalPopChoice(b_30);
        }
      else
        {
          t = a_30;
          {
            ATerm z_6 = NULL,c_7 = NULL,z_13 = NULL;
            t = SSLgetAnnotations(p_67);
            z_6 = t;
            t = r_67;
            t = s_67(t);
            c_7 = t;
            t = (ATerm) ATinsert(CheckATermList(c_7), q_67);
            z_13 = t;
            t = SSLsetAnnotations(z_13, z_6);
          }
        }
    }
    return(t);
  }
  t = s_67(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL;
  w_67 = t;
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_67;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_30 = ATgetFirst((ATermList) t);
                ATerm g_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_67;
          }
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        t = (ATerm) ATinsert(ATempty, w_67);
      }
  }
  x_67 = t;
  t = term_o_26;
  y_67 = t;
  t = SSL_printnl(y_67, x_67);
  t = w_67;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_68 = NULL,d_68 = NULL;
  t = term_k_26;
  c_68 = t;
  t = term_b_29;
  d_68 = t;
  t = term_c_29;
  t = j_11(c_68, d_68, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm j_11 (ATerm l_54, ATerm m_54, ATerm t)
{
  t = SSL_table_get(l_54, m_54);
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
  ATerm e_68 = NULL,f_68 = NULL;
  t = term_h_30;
  e_68 = t;
  t = term_t_27;
  f_68 = t;
  t = term_i_30;
  t = m_11(e_68, f_68, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_j_30;
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
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL;
  t = term_h_30;
  i_68 = t;
  t = term_t_27;
  j_68 = t;
  t = term_i_30;
  t = m_11(i_68, j_68, t);
  t = term_k_30;
  g_68 = t;
  t = term_t_27;
  h_68 = t;
  t = term_l_30;
  t = m_11(g_68, h_68, t);
  t = term_m_30;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_n_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_5, g_5, h_5, t);
      LocalPopChoice(p_30);
    }
  else
    {
      t = o_30;
      t = Option_3_0(i_5, j_5, k_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm t)
{
  ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,c_14 = NULL;
  p_68 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_68 = ATgetFirst((ATermList) t);
      m_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_68);
  k_68 = t;
  t = l_68;
  t = l_88(t);
  n_68 = t;
  t = m_68;
  t = m_88(t);
  o_68 = t;
  t = (ATerm) ATinsert(CheckATermList(o_68), n_68);
  c_14 = t;
  t = SSLsetAnnotations(c_14, k_68);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_132 (ATerm), ATerm t)
{
  ATerm u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,z_68 = NULL,a_69 = NULL,j_14 = NULL;
  u_68 = t;
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_30;
        t = d_132(t);
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
      }
  }
  t = u_68;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_68 = ATgetFirst((ATermList) t);
      x_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_68);
  v_68 = t;
  t = term_b_29;
  a_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_29, w_68);
  t = m_11(a_69, w_68, t);
  t = x_68;
  {
    static ATerm k_69 (ATerm t)
    {
      ATerm t_30 = t;
      int v_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_30 = t;
          int x_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_69 = NULL;
              d_69 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_69;
              LocalPopChoice(x_30);
            }
          else
            {
              t = w_30;
              t = d_132(t);
              t = Cons_2_0(_id, k_69, t);
            }
          LocalPopChoice(v_30);
        }
      else
        {
          t = t_30;
          {
            ATerm g_69 = NULL,h_69 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_69 = ATgetFirst((ATermList) t);
                h_69 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_69), (ATerm) ATmakeAppl(sym_Undefined_1, g_69));
          }
        }
      return(t);
    }
    t = k_69(t);
  }
  z_68 = t;
  t = (ATerm) ATinsert(CheckATermList(z_68), (ATerm) ATmakeAppl(sym_Program_1, w_68));
  j_14 = t;
  t = SSLsetAnnotations(j_14, v_68);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm w_69 = NULL;
  w_69 = t;
  if(match_string(t, "--help"))
    {
      t = w_69;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_69;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_69;
        }
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL;
  t = term_s_29;
  x_69 = t;
  t = term_t_27;
  y_69 = t;
  t = term_y_30;
  t = m_11(x_69, y_69, t);
  t = term_a_31;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_b_31;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_132 (ATerm), ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL;
  r_69 = t;
  t = term_r_28;
  t_69 = t;
  t = term_s_28;
  u_69 = t;
  t = (ATerm) ATempty;
  v_69 = t;
  t = SSL_table_put(t_69, u_69, v_69);
  t = r_69;
  {
    static ATerm l_5 (ATerm t)
    {
      ATerm c_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_132(t);
          LocalPopChoice(e_31);
        }
      else
        {
          t = c_31;
          {
            ATerm f_31 = t;
            int g_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_5, v_5, w_5, t);
                LocalPopChoice(g_31);
              }
            else
              {
                t = f_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_5, t);
  }
  {
    ATerm h_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_70 = NULL;
        j_70 = t;
        {
          ATerm k_31 = t;
          int l_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_7 = NULL;
              t = j_70;
              {
                ATerm m_31 = t;
                int o_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_7 = NULL,s_7 = NULL;
                    t = term_k_26;
                    n_7 = t;
                    t = term_s_29;
                    s_7 = t;
                    t = term_u_29;
                    t = j_11(n_7, s_7, t);
                    LocalPopChoice(o_31);
                  }
                else
                  {
                    t = m_31;
                    t = fetch_1_0(x_5, t);
                  }
              }
              t = j_70;
              t = default_system_usage_0_0(t);
              t = term_b_28;
              m_7 = t;
              t = SSL_exit(m_7);
              LocalPopChoice(l_31);
            }
          else
            {
              t = k_31;
              {
                ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
                t = term_k_26;
                z_7 = t;
                t = term_h_30;
                a_8 = t;
                t = term_p_31;
                t = j_11(z_7, a_8, t);
                t = j_70;
                t = default_system_about_0_0(t);
                t = term_b_28;
                y_7 = t;
                t = SSL_exit(y_7);
              }
            }
        }
        LocalPopChoice(j_31);
      }
    else
      {
        t = h_31;
        {
          ATerm q_31 = t;
          int r_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_70 = NULL,l_70 = NULL,m_70 = NULL;
              static ATerm y_5 (ATerm t)
              {
                ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL,l_14 = NULL;
                p_70 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    o_70 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_70);
                n_70 = t;
                t = o_70;
                if(((p_69 != NULL) && (p_69 != t)))
                  _fail(t);
                else
                  p_69 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, o_70);
                l_14 = t;
                t = SSLsetAnnotations(l_14, n_70);
                return(t);
              }
              t = fetch_1_0(y_5, t);
              t = term_u_27;
              l_70 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_69)), term_t_31);
              m_70 = t;
              t = SSL_printnl(l_70, m_70);
              t = (ATerm) ATmakeAppl(sym__2, term_u_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_69)), term_t_31));
              t = default_system_usage_0_0(t);
              t = term_x_27;
              k_70 = t;
              t = SSL_exit(k_70);
              LocalPopChoice(r_31);
            }
          else
            {
              t = q_31;
            }
        }
      }
  }
  q_69 = t;
  t = term_r_28;
  s_69 = t;
  t = SSL_table_destroy(s_69);
  t = q_69;
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm t)
{
  ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL;
  t = parse_options_1_0(c_130, t);
  u_70 = t;
  t = term_u_31;
  x_70 = t;
  t = SSL_table_create(x_70);
  t = term_u_31;
  v_70 = t;
  t = term_v_31;
  w_70 = t;
  t = SSL_table_put(v_70, w_70, u_70);
  t = u_70;
  t = e_130(t);
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_130, t);
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
        {
          ATerm y_31 = t;
          int z_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_130(t);
              t = report_success_0_0(t);
              LocalPopChoice(z_31);
            }
          else
            {
              t = y_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm a_32 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(b_32);
    }
  else
    {
      t = a_32;
      {
        ATerm c_32 = t;
        int e_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(e_32);
          }
        else
          {
            t = c_32;
            {
              ATerm f_32 = t;
              int g_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(b_6, c_6, d_6, t);
                  LocalPopChoice(g_32);
                }
              else
                {
                  t = f_32;
                  {
                    ATerm h_32 = t;
                    int i_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(i_32);
                      }
                    else
                      {
                        t = h_32;
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
  ATerm e_71 = NULL,f_71 = NULL;
  t = term_r_26;
  e_71 = t;
  t = term_t_27;
  f_71 = t;
  t = term_j_32;
  t = m_11(e_71, f_71, t);
  t = term_k_32;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_l_32;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = output_1_0(f_6, t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_14 = NULL,u_14 = NULL,t_14 = NULL,s_14 = NULL;
  v_71 = t;
  if(match_cons(t, sym_Specification_1))
    {
      i_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_71);
  h_71 = t;
  t = i_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_71 = ATgetFirst((ATermList) t);
      l_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_71);
  j_71 = t;
  t = l_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_71 = ATgetFirst((ATermList) t);
      p_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_71);
  n_71 = t;
  t = o_71;
  if(match_cons(t, sym_Strategies_1))
    {
      s_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_71);
  r_71 = t;
  t = s_71;
  t = map_1_0(h_6, t);
  t_71 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, t_71);
  s_14 = t;
  t = SSLsetAnnotations(s_14, r_71);
  u_71 = t;
  t = p_71;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_71), u_71);
  t_14 = t;
  t = SSLsetAnnotations(t_14, n_71);
  q_71 = t;
  t = (ATerm) ATinsert(CheckATermList(q_71), k_71);
  u_14 = t;
  t = SSLsetAnnotations(u_14, j_71);
  m_71 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, m_71);
  w_14 = t;
  t = SSLsetAnnotations(w_14, h_71);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL;
  w_72 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      s_72 = ATgetArgument(t, 0);
      t_72 = ATgetArgument(t, 1);
      u_72 = ATgetArgument(t, 2);
      v_72 = ATgetArgument(t, 3);
      {
        ATerm m_32 = t;
        int n_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_8 = NULL,n_8 = NULL,n_14 = NULL;
            t = SSLgetAnnotations(w_72);
            i_8 = t;
            t = v_72;
            t = topdown_1_0(i_6, t);
            t = simplify_0_0(t);
            n_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, s_72, t_72, u_72, n_8);
            n_14 = t;
            t = SSLsetAnnotations(n_14, i_8);
            LocalPopChoice(n_32);
          }
        else
          {
            t = m_32;
            t = w_72;
          }
      }
    }
  else
    {
      t = w_72;
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm p_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_32 = t;
      int t_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = LiftPrimArgs_0_0(t);
          LocalPopChoice(t_32);
        }
      else
        {
          t = r_32;
          {
            ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL;
            r_8 = t;
            if(match_cons(t, sym_CallT_3))
              {
                s_8 = ATgetArgument(t, 0);
                t_8 = ATgetArgument(t, 1);
                u_8 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = r_8;
            t = u_10(s_8, t_8, u_8, t);
          }
        }
      LocalPopChoice(q_32);
    }
  else
    {
      t = p_32;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(z_5, default_usage_0_0, _id, a_6, t);
  return(t);
}

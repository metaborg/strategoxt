#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Cong_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_As_2;
Symbol sym_BuildDefault_1;
Symbol sym_Choice_2;
Symbol sym_GChoice_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_LGChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_ExtSDefInl_4;
Symbol sym_ExtSDef_3;
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
Symbol sym_Some_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Undefined_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
static void init_module_constructors (void)
{
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
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
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
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
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
}
ATerm term_h_15;
ATerm term_d_15;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_v_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_a_13;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_s_7;
ATerm term_p_7;
ATerm term_l_7;
ATerm term_h_7;
ATerm term_d_7;
ATerm term_z_6;
ATerm term_v_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_a_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym__2, term_b_9, term_c_9);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym__2, term_c_9, term_h_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_9);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_a_6);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym__2, term_b_9, term_t_10);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym__2, term_b_9, term_q_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym__2, term_x_9, term_y_9);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_a_6);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_s_12, term_a_6);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_a_6);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym__2, term_b_9, term_p_12);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym__2, term_i_14, term_a_6);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm debug_1_0 (ATerm c_87 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
ATerm term_expression_0_0 (ATerm t);
static ATerm h_0 (ATerm t);
ATerm match_term_exp_0_0 (ATerm t);
ATerm CallT_3_0 (ATerm e_63 (ATerm), ATerm f_63 (ATerm), ATerm g_63 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm strategy_expression_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm strategy_definition_0_0 (ATerm t);
ATerm map_1_0 (ATerm n_87 (ATerm), ATerm t);
static ATerm o_3 (ATerm v_37, ATerm w_37, ATerm t);
static ATerm p_3 (ATerm q_22, ATerm r_22, ATerm t);
static ATerm r_3 (ATerm e_87 (ATerm), ATerm k_141, ATerm w_22, ATerm t);
static ATerm q_3 (ATerm m_22, ATerm n_22, ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm n_104 (ATerm), ATerm t);
static ATerm w_47 (ATerm q_47, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_3 (ATerm s_22, ATerm t);
static ATerm t_3 (ATerm o_36, ATerm p_36, ATerm t);
static ATerm u_3 (ATerm x_37, ATerm y_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm l_49 (ATerm g_48, ATerm t);
static ATerm m_49 (ATerm k_48, ATerm l_48, ATerm m_48, ATerm t);
static ATerm n_49 (ATerm u_48, ATerm v_48, ATerm w_48, ATerm t);
static ATerm v_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm x_87 (ATerm), ATerm t);
static ATerm y_3 (ATerm a_54, ATerm b_54, ATerm t);
ATerm if_verbose2_1_0 (ATerm w_102 (ATerm), ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_4 (ATerm o_47, ATerm p_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_3 (ATerm j_52, ATerm k_52, ATerm i_52, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_3 (ATerm r_40, ATerm s_40, ATerm t);
ATerm foldr_2_0 (ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_102 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm need_help_1_0 (ATerm l_105 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm f_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm d_66 (ATerm), ATerm e_66 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm o_107 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm parse_options_1_0 (ATerm n_107 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm t);
static ATerm b_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm iowrap_3_0 (ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm t);
static ATerm i_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,t_0 = NULL,v_0 = NULL,l_1 = NULL;
  a_0 = t;
  t = term_a_6;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_o_6;
  v_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_6), b_0), term_p_6);
  l_1 = t;
  t = SSL_printnl(v_0, l_1);
  t = term_s_6;
  t_0 = t;
  t = SSL_exit(t_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,q_1 = NULL,r_1 = NULL;
  n_1 = t;
  t = c_87(t);
  o_1 = t;
  t = term_o_6;
  q_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_1), o_1);
  r_1 = t;
  t = SSL_printnl(q_1, r_1);
  t = n_1;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_v_6;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm x_6 = t;
  int y_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL;
      x_5 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = x_5;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              y_5 = ATgetArgument(t, 0);
              {
                ATerm j_0 = NULL,o_0 = NULL,c_2 = NULL;
                t = SSLgetAnnotations(x_5);
                j_0 = t;
                t = SSL_is_string(y_5);
                o_0 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, o_0);
                c_2 = t;
                t = SSLsetAnnotations(c_2, j_0);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  y_5 = ATgetArgument(t, 0);
                  {
                    ATerm w_0 = NULL,y_0 = NULL,d_2 = NULL;
                    t = SSLgetAnnotations(x_5);
                    w_0 = t;
                    t = SSL_is_int(y_5);
                    y_0 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, y_0);
                    d_2 = t;
                    t = SSLsetAnnotations(d_2, w_0);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      y_5 = ATgetArgument(t, 0);
                      {
                        ATerm e_1 = NULL,g_1 = NULL,e_2 = NULL;
                        t = SSLgetAnnotations(x_5);
                        e_1 = t;
                        t = SSL_is_real(y_5);
                        g_1 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, g_1);
                        e_2 = t;
                        t = SSLsetAnnotations(e_2, e_1);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          y_5 = ATgetArgument(t, 0);
                          {
                            ATerm p_1 = NULL,t_1 = NULL,f_2 = NULL;
                            t = SSLgetAnnotations(x_5);
                            p_1 = t;
                            t = SSL_is_string(y_5);
                            t_1 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, t_1);
                            f_2 = t;
                            t = SSLsetAnnotations(f_2, p_1);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              y_5 = ATgetArgument(t, 0);
                              {
                                ATerm z_1 = NULL,b_2 = NULL,k_2 = NULL;
                                t = SSLgetAnnotations(x_5);
                                z_1 = t;
                                t = y_5;
                                t = term_expression_0_0(t);
                                b_2 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, b_2);
                                k_2 = t;
                                t = SSLsetAnnotations(k_2, z_1);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  y_5 = ATgetArgument(t, 0);
                                  z_5 = ATgetArgument(t, 1);
                                  {
                                    ATerm v_2 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,h_3 = NULL,n_2 = NULL,m_2 = NULL;
                                    t = SSLgetAnnotations(x_5);
                                    v_2 = t;
                                    t = y_5;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        e_3 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(y_5);
                                    d_3 = t;
                                    t = SSL_is_string(e_3);
                                    f_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, f_3);
                                    m_2 = t;
                                    t = SSLsetAnnotations(m_2, d_3);
                                    h_3 = t;
                                    t = z_5;
                                    t = term_expression_0_0(t);
                                    c_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, h_3, c_3);
                                    n_2 = t;
                                    t = SSLsetAnnotations(n_2, v_2);
                                  }
                                }
                              else
                                {
                                  ATerm e_4 = NULL,n_4 = NULL,p_4 = NULL,o_2 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      y_5 = ATgetArgument(t, 0);
                                      z_5 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(x_5);
                                  e_4 = t;
                                  t = SSL_is_string(y_5);
                                  n_4 = t;
                                  t = z_5;
                                  t = map_1_0(term_expression_0_0, t);
                                  p_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, n_4, p_4);
                                  o_2 = t;
                                  t = SSLsetAnnotations(o_2, e_4);
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(y_6);
    }
  else
    {
      t = x_6;
      t = debug_1_0(f_0, t);
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_z_6;
  return(t);
}
ATerm match_term_exp_0_0 (ATerm t)
{
  ATerm a_7 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_11 = NULL,x_11 = NULL,e_12 = NULL;
      n_11 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = n_11;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              x_11 = ATgetArgument(t, 0);
              {
                ATerm c_5 = NULL,g_5 = NULL,b_3 = NULL;
                t = SSLgetAnnotations(n_11);
                c_5 = t;
                t = SSL_is_string(x_11);
                g_5 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, g_5);
                b_3 = t;
                t = SSLsetAnnotations(b_3, c_5);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  x_11 = ATgetArgument(t, 0);
                  {
                    ATerm h_6 = NULL,j_6 = NULL,g_3 = NULL;
                    t = SSLgetAnnotations(n_11);
                    h_6 = t;
                    t = SSL_is_int(x_11);
                    j_6 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, j_6);
                    g_3 = t;
                    t = SSLsetAnnotations(g_3, h_6);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      x_11 = ATgetArgument(t, 0);
                      {
                        ATerm u_6 = NULL,w_6 = NULL,n_3 = NULL;
                        t = SSLgetAnnotations(n_11);
                        u_6 = t;
                        t = SSL_is_real(x_11);
                        w_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, w_6);
                        n_3 = t;
                        t = SSLsetAnnotations(n_3, u_6);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          x_11 = ATgetArgument(t, 0);
                          {
                            ATerm c_7 = NULL,e_7 = NULL,c_4 = NULL;
                            t = SSLgetAnnotations(n_11);
                            c_7 = t;
                            t = SSL_is_string(x_11);
                            e_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, e_7);
                            c_4 = t;
                            t = SSLsetAnnotations(c_4, c_7);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              x_11 = ATgetArgument(t, 0);
                              {
                                ATerm k_7 = NULL,m_7 = NULL,d_4 = NULL;
                                t = SSLgetAnnotations(n_11);
                                k_7 = t;
                                t = x_11;
                                t = match_term_exp_0_0(t);
                                m_7 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, m_7);
                                d_4 = t;
                                t = SSLsetAnnotations(d_4, k_7);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  x_11 = ATgetArgument(t, 0);
                                  e_12 = ATgetArgument(t, 1);
                                  {
                                    ATerm t_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,a_9 = NULL,h_4 = NULL,g_4 = NULL;
                                    t = SSLgetAnnotations(n_11);
                                    t_7 = t;
                                    t = x_11;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        b_8 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(x_11);
                                    a_8 = t;
                                    t = SSL_is_string(b_8);
                                    c_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, c_8);
                                    g_4 = t;
                                    t = SSLsetAnnotations(g_4, a_8);
                                    a_9 = t;
                                    t = e_12;
                                    t = match_term_exp_0_0(t);
                                    z_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, a_9, z_7);
                                    h_4 = t;
                                    t = SSLsetAnnotations(h_4, t_7);
                                  }
                                }
                              else
                                {
                                  ATerm p_9 = NULL,s_9 = NULL,v_9 = NULL,i_4 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      x_11 = ATgetArgument(t, 0);
                                      e_12 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(n_11);
                                  p_9 = t;
                                  t = SSL_is_string(x_11);
                                  s_9 = t;
                                  t = e_12;
                                  t = map_1_0(match_term_exp_0_0, t);
                                  v_9 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, s_9, v_9);
                                  i_4 = t;
                                  t = SSLsetAnnotations(i_4, p_9);
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(b_7);
    }
  else
    {
      t = a_7;
      t = debug_1_0(h_0, t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm e_63 (ATerm), ATerm f_63 (ATerm), ATerm g_63 (ATerm), ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,x_13 = NULL,b_14 = NULL,f_14 = NULL,k_14 = NULL,l_14 = NULL,y_4 = NULL;
  l_14 = t;
  if(match_cons(t, sym_CallT_3))
    {
      p_13 = ATgetArgument(t, 0);
      q_13 = ATgetArgument(t, 1);
      x_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_14);
  o_13 = t;
  t = p_13;
  t = e_63(t);
  b_14 = t;
  t = q_13;
  t = f_63(t);
  f_14 = t;
  t = x_13;
  t = g_63(t);
  k_14 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, b_14, f_14, k_14);
  y_4 = t;
  t = SSLsetAnnotations(y_4, o_13);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = CallT_3_0(p_0, q_0, r_0, t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,n_20 = NULL,o_20 = NULL,p_5 = NULL;
  o_20 = t;
  if(match_cons(t, sym_SVar_1))
    {
      i_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_20);
  h_20 = t;
  t = SSL_is_string(i_20);
  n_20 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, n_20);
  p_5 = t;
  t = SSLsetAnnotations(p_5, h_20);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm p_20 = NULL,r_20 = NULL,s_20 = NULL,u_20 = NULL,q_5 = NULL;
  u_20 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_20);
  p_20 = t;
  t = SSL_is_string(r_20);
  s_20 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_20);
  q_5 = t;
  t = SSLsetAnnotations(q_5, p_20);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm l_26 = NULL;
  l_26 = t;
  t = SSL_is_string(l_26);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm b_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,i_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,u_7 = NULL,t_6 = NULL;
  m_30 = t;
  if(match_cons(t, sym_CallT_3))
    {
      d_30 = ATgetArgument(t, 0);
      e_30 = ATgetArgument(t, 1);
      f_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_30);
  b_30 = t;
  t = d_30;
  if(match_cons(t, sym_SVar_1))
    {
      i_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_30);
  g_30 = t;
  t = SSL_is_string(i_30);
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, k_30);
  t_6 = t;
  t = SSLsetAnnotations(t_6, g_30);
  l_30 = t;
  t = e_30;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = f_30;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, l_30, e_30, f_30);
  u_7 = t;
  t = SSLsetAnnotations(u_7, b_30);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm n_30 = NULL,p_30 = NULL,r_30 = NULL,s_30 = NULL,v_7 = NULL;
  s_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_30);
  n_30 = t;
  t = SSL_is_string(p_30);
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_30);
  v_7 = t;
  t = SSLsetAnnotations(v_7, n_30);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm g_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,o_34 = NULL;
  g_34 = t;
  if(match_cons(t, sym_SDef_3))
    {
      k_34 = ATgetArgument(t, 0);
      l_34 = ATgetArgument(t, 1);
      m_34 = ATgetArgument(t, 2);
      {
        ATerm s_36 = NULL,f_37 = NULL,m_37 = NULL,n_37 = NULL,e_8 = NULL;
        t = SSLgetAnnotations(g_34);
        s_36 = t;
        t = SSL_is_string(k_34);
        f_37 = t;
        t = l_34;
        t = map_1_0(b_1, t);
        m_37 = t;
        t = m_34;
        t = strategy_expression_0_0(t);
        n_37 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, f_37, m_37, n_37);
        e_8 = t;
        t = SSLsetAnnotations(e_8, s_36);
      }
    }
  else
    {
      ATerm g_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,u_39 = NULL,h_8 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          k_34 = ATgetArgument(t, 0);
          l_34 = ATgetArgument(t, 1);
          m_34 = ATgetArgument(t, 2);
          o_34 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_34);
      g_39 = t;
      t = SSL_is_string(k_34);
      o_39 = t;
      t = l_34;
      t = map_1_0(c_1, t);
      p_39 = t;
      t = m_34;
      t = map_1_0(d_1, t);
      q_39 = t;
      t = o_34;
      t = strategy_expression_0_0(t);
      u_39 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, o_39, p_39, q_39, u_39);
      h_8 = t;
      t = SSLsetAnnotations(h_8, g_39);
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,v_38 = NULL,d_8 = NULL;
  v_38 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      l_38 = ATgetArgument(t, 0);
      m_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_38);
  k_38 = t;
  t = SSL_is_string(l_38);
  n_38 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_38, m_38);
  d_8 = t;
  t = SSLsetAnnotations(d_8, k_38);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm n_45 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,b_48 = NULL,f_8 = NULL;
  b_48 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      h_47 = ATgetArgument(t, 0);
      i_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_48);
  n_45 = t;
  t = SSL_is_string(h_47);
  j_47 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_47, i_47);
  f_8 = t;
  t = SSLsetAnnotations(f_8, n_45);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL,c_49 = NULL,d_49 = NULL,g_8 = NULL;
  d_49 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_48 = ATgetArgument(t, 0);
      f_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_49);
  d_48 = t;
  t = SSL_is_string(e_48);
  c_49 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_49, f_48);
  g_8 = t;
  t = SSLsetAnnotations(g_8, d_48);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_d_7;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm f_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL;
      r_38 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = r_38;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = r_38;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  s_38 = ATgetArgument(t, 0);
                  {
                    ATerm u_14 = NULL,w_14 = NULL,d_5 = NULL;
                    t = SSLgetAnnotations(r_38);
                    u_14 = t;
                    t = s_38;
                    t = strategy_expression_0_0(t);
                    w_14 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, w_14);
                    d_5 = t;
                    t = SSLsetAnnotations(d_5, u_14);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      s_38 = ATgetArgument(t, 0);
                      {
                        ATerm c_15 = NULL,e_15 = NULL,f_5 = NULL;
                        t = SSLgetAnnotations(r_38);
                        c_15 = t;
                        t = s_38;
                        t = strategy_expression_0_0(t);
                        e_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, e_15);
                        f_5 = t;
                        t = SSLsetAnnotations(f_5, c_15);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          s_38 = ATgetArgument(t, 0);
                          t_38 = ATgetArgument(t, 1);
                          {
                            ATerm l_15 = NULL,o_15 = NULL,p_15 = NULL,h_5 = NULL;
                            t = SSLgetAnnotations(r_38);
                            l_15 = t;
                            t = s_38;
                            t = strategy_expression_0_0(t);
                            o_15 = t;
                            t = t_38;
                            t = strategy_expression_0_0(t);
                            p_15 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, o_15, p_15);
                            h_5 = t;
                            t = SSLsetAnnotations(h_5, l_15);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              s_38 = ATgetArgument(t, 0);
                              t_38 = ATgetArgument(t, 1);
                              {
                                ATerm x_15 = NULL,a_16 = NULL,b_16 = NULL,j_5 = NULL;
                                t = SSLgetAnnotations(r_38);
                                x_15 = t;
                                t = s_38;
                                t = strategy_expression_0_0(t);
                                a_16 = t;
                                t = t_38;
                                t = strategy_expression_0_0(t);
                                b_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, a_16, b_16);
                                j_5 = t;
                                t = SSLsetAnnotations(j_5, x_15);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  s_38 = ATgetArgument(t, 0);
                                  t_38 = ATgetArgument(t, 1);
                                  {
                                    ATerm j_16 = NULL,m_16 = NULL,n_16 = NULL,k_5 = NULL;
                                    t = SSLgetAnnotations(r_38);
                                    j_16 = t;
                                    t = s_38;
                                    t = strategy_expression_0_0(t);
                                    m_16 = t;
                                    t = t_38;
                                    t = strategy_expression_0_0(t);
                                    n_16 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, m_16, n_16);
                                    k_5 = t;
                                    t = SSLsetAnnotations(k_5, j_16);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      s_38 = ATgetArgument(t, 0);
                                      t_38 = ATgetArgument(t, 1);
                                      q_38 = ATgetArgument(t, 2);
                                      {
                                        ATerm w_16 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,l_5 = NULL;
                                        t = SSLgetAnnotations(r_38);
                                        w_16 = t;
                                        t = s_38;
                                        t = strategy_expression_0_0(t);
                                        f_17 = t;
                                        t = t_38;
                                        t = strategy_expression_0_0(t);
                                        g_17 = t;
                                        t = q_38;
                                        t = strategy_expression_0_0(t);
                                        h_17 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, f_17, g_17, h_17);
                                        l_5 = t;
                                        t = SSLsetAnnotations(l_5, w_16);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          s_38 = ATgetArgument(t, 0);
                                          t_38 = ATgetArgument(t, 1);
                                          {
                                            ATerm t_17 = NULL,x_17 = NULL,y_17 = NULL,m_5 = NULL;
                                            t = SSLgetAnnotations(r_38);
                                            t_17 = t;
                                            t = s_38;
                                            t = strategy_expression_0_0(t);
                                            x_17 = t;
                                            t = t_38;
                                            t = strategy_expression_0_0(t);
                                            y_17 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, x_17, y_17);
                                            m_5 = t;
                                            t = SSLsetAnnotations(m_5, t_17);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              s_38 = ATgetArgument(t, 0);
                                              t_38 = ATgetArgument(t, 1);
                                              {
                                                ATerm r_18 = NULL,u_18 = NULL,v_18 = NULL,n_5 = NULL;
                                                t = SSLgetAnnotations(r_38);
                                                r_18 = t;
                                                t = s_38;
                                                t = strategy_expression_0_0(t);
                                                u_18 = t;
                                                t = t_38;
                                                t = strategy_expression_0_0(t);
                                                v_18 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, u_18, v_18);
                                                n_5 = t;
                                                t = SSLsetAnnotations(n_5, r_18);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  s_38 = ATgetArgument(t, 0);
                                                  t_38 = ATgetArgument(t, 1);
                                                  q_38 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm m_19 = NULL,r_19 = NULL,s_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,e_20 = NULL,r_5 = NULL,o_5 = NULL;
                                                    t = SSLgetAnnotations(r_38);
                                                    m_19 = t;
                                                    t = s_38;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        x_19 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(s_38);
                                                    w_19 = t;
                                                    t = SSL_is_string(x_19);
                                                    y_19 = t;
                                                    t = (ATerm) ATmakeAppl(sym_SVar_1, y_19);
                                                    o_5 = t;
                                                    t = SSLsetAnnotations(o_5, w_19);
                                                    e_20 = t;
                                                    t = t_38;
                                                    t = map_1_0(m_0, t);
                                                    r_19 = t;
                                                    t = q_38;
                                                    t = map_1_0(s_0, t);
                                                    s_19 = t;
                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, e_20, r_19, s_19);
                                                    r_5 = t;
                                                    t = SSLsetAnnotations(r_5, m_19);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      s_38 = ATgetArgument(t, 0);
                                                      t_38 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm g_21 = NULL,l_21 = NULL,m_21 = NULL,s_5 = NULL;
                                                        t = SSLgetAnnotations(r_38);
                                                        g_21 = t;
                                                        t = SSL_is_string(s_38);
                                                        l_21 = t;
                                                        t = t_38;
                                                        t = strategy_expression_0_0(t);
                                                        m_21 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, l_21, m_21);
                                                        s_5 = t;
                                                        t = SSLsetAnnotations(s_5, g_21);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          s_38 = ATgetArgument(t, 0);
                                                          t_38 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm b_22 = NULL,e_22 = NULL,g_22 = NULL,t_5 = NULL;
                                                            t = SSLgetAnnotations(r_38);
                                                            b_22 = t;
                                                            t = SSL_is_int(s_38);
                                                            e_22 = t;
                                                            t = t_38;
                                                            t = strategy_expression_0_0(t);
                                                            g_22 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, e_22, g_22);
                                                            t_5 = t;
                                                            t = SSLsetAnnotations(t_5, b_22);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              s_38 = ATgetArgument(t, 0);
                                                              t_38 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm u_22 = NULL,y_22 = NULL,z_22 = NULL,u_5 = NULL;
                                                                t = SSLgetAnnotations(r_38);
                                                                u_22 = t;
                                                                t = SSL_is_string(s_38);
                                                                y_22 = t;
                                                                t = t_38;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                z_22 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, y_22, z_22);
                                                                u_5 = t;
                                                                t = SSLsetAnnotations(u_5, u_22);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  s_38 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm p_23 = NULL,t_23 = NULL,v_5 = NULL;
                                                                    t = SSLgetAnnotations(r_38);
                                                                    p_23 = t;
                                                                    t = s_38;
                                                                    t = strategy_expression_0_0(t);
                                                                    t_23 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, t_23);
                                                                    v_5 = t;
                                                                    t = SSLsetAnnotations(v_5, p_23);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      s_38 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm d_24 = NULL,f_24 = NULL,w_5 = NULL;
                                                                        t = SSLgetAnnotations(r_38);
                                                                        d_24 = t;
                                                                        t = s_38;
                                                                        t = strategy_expression_0_0(t);
                                                                        f_24 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, f_24);
                                                                        w_5 = t;
                                                                        t = SSLsetAnnotations(w_5, d_24);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          s_38 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm p_24 = NULL,s_24 = NULL,b_6 = NULL;
                                                                            t = SSLgetAnnotations(r_38);
                                                                            p_24 = t;
                                                                            t = s_38;
                                                                            t = strategy_expression_0_0(t);
                                                                            s_24 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, s_24);
                                                                            b_6 = t;
                                                                            t = SSLsetAnnotations(b_6, p_24);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              s_38 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm y_24 = NULL,b_25 = NULL,g_6 = NULL;
                                                                                t = SSLgetAnnotations(r_38);
                                                                                y_24 = t;
                                                                                t = s_38;
                                                                                t = strategy_expression_0_0(t);
                                                                                b_25 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, b_25);
                                                                                g_6 = t;
                                                                                t = SSLsetAnnotations(g_6, y_24);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  s_38 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm j_25 = NULL,l_25 = NULL,k_6 = NULL;
                                                                                    t = SSLgetAnnotations(r_38);
                                                                                    j_25 = t;
                                                                                    t = s_38;
                                                                                    t = match_term_exp_0_0(t);
                                                                                    l_25 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, l_25);
                                                                                    k_6 = t;
                                                                                    t = SSLsetAnnotations(k_6, j_25);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      s_38 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm s_25 = NULL,u_25 = NULL,m_6 = NULL;
                                                                                        t = SSLgetAnnotations(r_38);
                                                                                        s_25 = t;
                                                                                        t = s_38;
                                                                                        t = term_expression_0_0(t);
                                                                                        u_25 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, u_25);
                                                                                        m_6 = t;
                                                                                        t = SSLsetAnnotations(m_6, s_25);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          s_38 = ATgetArgument(t, 0);
                                                                                          t_38 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm f_26 = NULL,i_26 = NULL,j_26 = NULL,n_6 = NULL;
                                                                                            t = SSLgetAnnotations(r_38);
                                                                                            f_26 = t;
                                                                                            t = s_38;
                                                                                            t = map_1_0(u_0, t);
                                                                                            i_26 = t;
                                                                                            t = t_38;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            j_26 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, i_26, j_26);
                                                                                            n_6 = t;
                                                                                            t = SSLsetAnnotations(n_6, f_26);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              s_38 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm s_26 = NULL,u_26 = NULL,q_6 = NULL;
                                                                                                t = SSLgetAnnotations(r_38);
                                                                                                s_26 = t;
                                                                                                t = s_38;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                u_26 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, u_26);
                                                                                                q_6 = t;
                                                                                                t = SSLsetAnnotations(q_6, s_26);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  s_38 = ATgetArgument(t, 0);
                                                                                                  t_38 = ATgetArgument(t, 1);
                                                                                                  q_38 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm t_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,y_7 = NULL;
                                                                                                    t = SSLgetAnnotations(r_38);
                                                                                                    t_29 = t;
                                                                                                    t = SSL_is_string(s_38);
                                                                                                    x_29 = t;
                                                                                                    t = t_38;
                                                                                                    t = map_1_0(x_0, t);
                                                                                                    y_29 = t;
                                                                                                    t = q_38;
                                                                                                    t = map_1_0(z_0, t);
                                                                                                    z_29 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, x_29, y_29, z_29);
                                                                                                    y_7 = t;
                                                                                                    t = SSLsetAnnotations(y_7, t_29);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm a_31 = NULL,e_31 = NULL,f_31 = NULL,i_8 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      s_38 = ATgetArgument(t, 0);
                                                                                                      t_38 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(r_38);
                                                                                                  a_31 = t;
                                                                                                  t = s_38;
                                                                                                  t = map_1_0(a_1, t);
                                                                                                  e_31 = t;
                                                                                                  t = t_38;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  f_31 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, e_31, f_31);
                                                                                                  i_8 = t;
                                                                                                  t = SSLsetAnnotations(i_8, a_31);
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
      LocalPopChoice(g_7);
    }
  else
    {
      t = f_7;
      t = debug_1_0(f_1, t);
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,z_51 = NULL,g_52 = NULL,n_52 = NULL,h_10 = NULL;
  n_52 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      v_51 = ATgetArgument(t, 0);
      z_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_52);
  u_51 = t;
  t = SSL_is_string(v_51);
  g_52 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_52, z_51);
  h_10 = t;
  t = SSLsetAnnotations(h_10, u_51);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL,c_60 = NULL,d_60 = NULL,b_61 = NULL,j_10 = NULL;
  b_61 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      h_58 = ATgetArgument(t, 0);
      c_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_61);
  g_58 = t;
  t = SSL_is_string(h_58);
  d_60 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_60, c_60);
  j_10 = t;
  t = SSLsetAnnotations(j_10, g_58);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,k_10 = NULL;
  g_61 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      d_61 = ATgetArgument(t, 0);
      e_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_61);
  c_61 = t;
  t = SSL_is_string(d_61);
  f_61 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_61, e_61);
  k_10 = t;
  t = SSLsetAnnotations(k_10, c_61);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,m_10 = NULL;
  f_62 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      c_62 = ATgetArgument(t, 0);
      d_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_62);
  b_62 = t;
  t = SSL_is_string(c_62);
  e_62 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_62, d_62);
  m_10 = t;
  t = SSLsetAnnotations(m_10, b_62);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,n_10 = NULL;
  k_62 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      h_62 = ATgetArgument(t, 0);
      i_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_62);
  g_62 = t;
  t = SSL_is_string(h_62);
  j_62 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_62, i_62);
  n_10 = t;
  t = SSLsetAnnotations(n_10, g_62);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm c_63 = NULL,d_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,p_10 = NULL;
  j_63 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      d_63 = ATgetArgument(t, 0);
      h_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_63);
  c_63 = t;
  t = SSL_is_string(d_63);
  i_63 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_63, h_63);
  p_10 = t;
  t = SSLsetAnnotations(p_10, c_63);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,q_10 = NULL;
  o_63 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      l_63 = ATgetArgument(t, 0);
      m_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_63);
  k_63 = t;
  t = SSL_is_string(l_63);
  n_63 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_63, m_63);
  q_10 = t;
  t = SSLsetAnnotations(q_10, k_63);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_h_7;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL;
      j_44 = t;
      if(match_cons(t, sym_SDef_3))
        {
          k_44 = ATgetArgument(t, 0);
          l_44 = ATgetArgument(t, 1);
          m_44 = ATgetArgument(t, 2);
          {
            ATerm a_50 = NULL,k_51 = NULL,r_51 = NULL,s_51 = NULL,i_10 = NULL;
            t = SSLgetAnnotations(j_44);
            a_50 = t;
            t = SSL_is_string(k_44);
            k_51 = t;
            t = l_44;
            t = map_1_0(h_1, t);
            r_51 = t;
            t = m_44;
            t = strategy_expression_0_0(t);
            s_51 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, k_51, r_51, s_51);
            i_10 = t;
            t = SSLsetAnnotations(i_10, a_50);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              k_44 = ATgetArgument(t, 0);
              l_44 = ATgetArgument(t, 1);
              m_44 = ATgetArgument(t, 2);
              i_44 = ATgetArgument(t, 3);
              {
                ATerm l_55 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,e_58 = NULL,l_10 = NULL;
                t = SSLgetAnnotations(j_44);
                l_55 = t;
                t = SSL_is_string(k_44);
                k_57 = t;
                t = l_44;
                t = map_1_0(i_1, t);
                l_57 = t;
                t = m_44;
                t = map_1_0(j_1, t);
                m_57 = t;
                t = i_44;
                t = strategy_expression_0_0(t);
                e_58 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, k_57, l_57, m_57, e_58);
                l_10 = t;
                t = SSLsetAnnotations(l_10, l_55);
              }
            }
          else
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  k_44 = ATgetArgument(t, 0);
                  l_44 = ATgetArgument(t, 1);
                  m_44 = ATgetArgument(t, 2);
                  i_44 = ATgetArgument(t, 3);
                  {
                    ATerm r_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL,o_10 = NULL;
                    t = SSLgetAnnotations(j_44);
                    r_61 = t;
                    t = SSL_is_string(k_44);
                    w_61 = t;
                    t = l_44;
                    t = map_1_0(k_1, t);
                    x_61 = t;
                    t = m_44;
                    t = map_1_0(m_1, t);
                    y_61 = t;
                    t = i_44;
                    t = strategy_expression_0_0(t);
                    z_61 = t;
                    t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, w_61, x_61, y_61, z_61);
                    o_10 = t;
                    t = SSLsetAnnotations(o_10, r_61);
                  }
                }
              else
                {
                  ATerm u_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,r_10 = NULL;
                  if(match_cons(t, sym_ExtSDef_3))
                    {
                      k_44 = ATgetArgument(t, 0);
                      l_44 = ATgetArgument(t, 1);
                      m_44 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(j_44);
                  u_62 = t;
                  t = SSL_is_string(k_44);
                  y_62 = t;
                  t = l_44;
                  t = map_1_0(s_1, t);
                  z_62 = t;
                  t = m_44;
                  t = map_1_0(u_1, t);
                  a_63 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDef_3, y_62, z_62, a_63);
                  r_10 = t;
                  t = SSLsetAnnotations(r_10, u_62);
                }
            }
        }
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      t = debug_1_0(v_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm n_87 (ATerm), ATerm t)
{
  static ATerm f_45 (ATerm t)
  {
    ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL;
    c_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_45;
      }
    else
      {
        ATerm w_63 = NULL,z_63 = NULL,a_64 = NULL,d_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_45 = ATgetFirst((ATermList) t);
            e_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_45);
        w_63 = t;
        t = d_45;
        t = n_87(t);
        z_63 = t;
        t = e_45;
        t = f_45(t);
        a_64 = t;
        t = (ATerm) ATinsert(CheckATermList(a_64), z_63);
        d_11 = t;
        t = SSLsetAnnotations(d_11, w_63);
      }
    return(t);
  }
  t = f_45(t);
  return(t);
}
static ATerm o_3 (ATerm v_37, ATerm w_37, ATerm t)
{
  ATerm h_45 = NULL;
  t = SSL_fputc(v_37, w_37);
  h_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_45);
  return(t);
}
static ATerm p_3 (ATerm q_22, ATerm r_22, ATerm t)
{
  ATerm i_45 = NULL;
  t = SSL_write_term_to_stream_text(q_22, r_22);
  i_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_45);
  return(t);
}
static ATerm r_3 (ATerm e_87 (ATerm), ATerm k_141, ATerm w_22, ATerm t)
{
  ATerm j_45 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_141, term_l_7);
  t = v_3(t);
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_45, w_22);
  t = e_87(t);
  t = fclose_0_0(t);
  t = w_22;
  return(t);
}
static ATerm q_3 (ATerm m_22, ATerm n_22, ATerm t)
{
  ATerm k_45 = NULL;
  t = SSL_write_term_to_stream_baf(m_22, n_22);
  k_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_45);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_7 = ATgetArgument(t, 0);
      if(match_cons(n_7, sym_Stream_1))
        {
          o_64 = ATgetArgument(n_7, 0);
        }
      else
        _fail(t);
      p_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_3(o_64, p_64, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_7 = ATgetArgument(t, 0);
      if(match_cons(o_7, sym_Stream_1))
        {
          d_65 = ATgetArgument(o_7, 0);
        }
      else
        _fail(t);
      e_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3(d_65, e_65, t);
  a_65 = t;
  t = term_p_7;
  b_65 = t;
  t = a_65;
  if(match_cons(t, sym_Stream_1))
    {
      c_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_7, a_65);
  t = o_3(b_65, c_65, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,y_46 = NULL,z_46 = NULL,g_11 = NULL,f_11 = NULL;
  p_45 = t;
  if(match_cons(t, sym__2))
    {
      w_45 = ATgetArgument(t, 0);
      x_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_45);
  v_45 = t;
  t = w_45;
  {
    ATerm q_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm w_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((o_45 != NULL) && (o_45 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                o_45 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(w_1, t);
        LocalPopChoice(r_7);
      }
    else
      {
        t = q_7;
        t = term_s_7;
        o_45 = t;
      }
  }
  y_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_45, x_45);
  f_11 = t;
  t = SSLsetAnnotations(f_11, v_45);
  t = p_45;
  if(match_cons(t, sym__2))
    {
      r_45 = ATgetArgument(t, 0);
      s_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_45);
  q_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_45, (ATerm) ATmakeAppl(sym__2, not_null(o_45), s_45));
  g_11 = t;
  t = SSLsetAnnotations(g_11, q_45);
  u_45 = t;
  if(match_cons(t, sym__2))
    {
      y_46 = ATgetArgument(t, 0);
      z_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,h_11 = NULL;
        t = SSLgetAnnotations(u_45);
        h_64 = t;
        t = y_46;
        t = fetch_1_0(x_1, t);
        k_64 = t;
        t = z_46;
        if(match_cons(t, sym__2))
          {
            m_64 = ATgetArgument(t, 0);
            n_64 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_3(y_1, m_64, n_64, t);
        l_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_64, l_64);
        h_11 = t;
        t = SSLsetAnnotations(h_11, h_64);
        LocalPopChoice(x_7);
      }
    else
      {
        t = w_7;
        {
          ATerm u_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,i_11 = NULL;
          t = SSLgetAnnotations(u_45);
          u_64 = t;
          t = z_46;
          if(match_cons(t, sym__2))
            {
              y_64 = ATgetArgument(t, 0);
              z_64 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_3(a_2, y_64, z_64, t);
          x_64 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_46, x_64);
          i_11 = t;
          t = SSLsetAnnotations(i_11, u_64);
        }
      }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm n_104 (ATerm), ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
  g_47 = t;
  t = dtime_0_0(t);
  t = g_47;
  t = n_104(t);
  f_47 = t;
  t = dtime_0_0(t);
  c_47 = t;
  t = f_47;
  if(match_cons(t, sym__2))
    {
      d_47 = ATgetArgument(t, 0);
      e_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_47), (ATerm) ATmakeAppl(sym_Runtime_1, c_47)), e_47);
  return(t);
}
static ATerm w_47 (ATerm q_47, ATerm t)
{
  t = SSL_fclose(q_47);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL;
  u_47 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_47 = ATgetArgument(t, 0);
      {
        ATerm j_8 = t;
        int k_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_47);
            LocalPopChoice(k_8);
          }
        else
          {
            t = j_8;
            t = w_47(u_47, t);
          }
      }
    }
  else
    {
      t = w_47(u_47, t);
    }
  return(t);
}
static ATerm s_3 (ATerm s_22, ATerm t)
{
  t = SSL_read_term_from_stream(s_22);
  return(t);
}
static ATerm t_3 (ATerm o_36, ATerm p_36, ATerm t)
{
  t = SSL_strcat(o_36, p_36);
  return(t);
}
static ATerm u_3 (ATerm x_37, ATerm y_37, ATerm t)
{
  ATerm x_47 = NULL;
  t = SSL_fopen(x_37, y_37);
  x_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_47);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_47 = NULL;
  t = SSL_stdin_stream();
  y_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_47);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_47 = NULL;
  t = SSL_stdout_stream();
  z_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_47);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_48 = NULL;
  t = SSL_stderr_stream();
  a_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_48);
  return(t);
}
static ATerm l_49 (ATerm g_48, ATerm t)
{
  ATerm h_48 = NULL;
  t = SSL_explode_term(g_48);
  if(match_cons(t, sym__2))
    {
      ATerm l_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_8 = ATgetArgument(t, 1);
        if(((ATgetType(m_8) == AT_LIST) && !(ATisEmpty(m_8))))
          {
            h_48 = ATgetFirst((ATermList) m_8);
            {
              ATerm n_8 = (ATerm) ATgetNext((ATermList) m_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_48;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_48;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_48;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_48;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_49 (ATerm k_48, ATerm l_48, ATerm m_48, ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,s_48 = NULL,o_11 = NULL;
  t = SSLgetAnnotations(m_48);
  p_48 = t;
  t = k_48;
  if(match_cons(t, sym_Path_1))
    {
      s_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_48, l_48);
  o_11 = t;
  t = SSLsetAnnotations(o_11, p_48);
  if(match_cons(t, sym__2))
    {
      n_48 = ATgetArgument(t, 0);
      o_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(n_48, o_48, t);
  return(t);
}
static ATerm n_49 (ATerm u_48, ATerm v_48, ATerm w_48, ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,g_49 = NULL,p_11 = NULL;
  t = SSLgetAnnotations(w_48);
  z_48 = t;
  t = SSL_is_string(u_48);
  g_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_49, v_48);
  p_11 = t;
  t = SSLsetAnnotations(p_11, z_48);
  if(match_cons(t, sym__2))
    {
      x_48 = ATgetArgument(t, 0);
      y_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(x_48, y_48, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
  i_49 = t;
  if(match_cons(t, sym__2))
    {
      j_49 = ATgetArgument(t, 0);
      k_49 = ATgetArgument(t, 1);
      {
        ATerm o_8 = t;
        int p_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_49(i_49, t);
            LocalPopChoice(p_8);
          }
        else
          {
            t = o_8;
            {
              ATerm q_8 = t;
              int r_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_49(j_49, k_49, i_49, t);
                  LocalPopChoice(r_8);
                }
              else
                {
                  t = q_8;
                  t = n_49(j_49, k_49, i_49, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_49(i_49, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL,w_49 = NULL;
  w_49 = t;
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_49, term_u_8);
        t = v_3(t);
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        {
          ATerm p_65 = NULL,q_65 = NULL;
          t = term_v_8;
          q_65 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_8, w_49);
          t = t_3(q_65, w_49, t);
          p_65 = t;
          t = SSL_perror(p_65);
          _fail(t);
        }
      }
  }
  q_49 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_3(r_49, t);
  p_49 = t;
  t = q_49;
  t = fclose_0_0(t);
  t = p_49;
  return(t);
}
ATerm fetch_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  static ATerm v_50 (ATerm t)
  {
    ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
    s_50 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_50 = ATgetFirst((ATermList) t);
        u_50 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_8 = t;
      int x_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_65 = NULL,y_65 = NULL,s_11 = NULL;
          t = SSLgetAnnotations(s_50);
          v_65 = t;
          t = t_50;
          t = x_87(t);
          y_65 = t;
          t = (ATerm) ATinsert(CheckATermList(u_50), y_65);
          s_11 = t;
          t = SSLsetAnnotations(s_11, v_65);
          LocalPopChoice(x_8);
        }
      else
        {
          t = w_8;
          {
            ATerm i_66 = NULL,l_66 = NULL,t_11 = NULL;
            t = SSLgetAnnotations(s_50);
            i_66 = t;
            t = u_50;
            t = v_50(t);
            l_66 = t;
            t = (ATerm) ATinsert(CheckATermList(l_66), t_50);
            t_11 = t;
            t = SSLsetAnnotations(t_11, i_66);
          }
        }
    }
    return(t);
  }
  t = v_50(t);
  return(t);
}
static ATerm y_3 (ATerm a_54, ATerm b_54, ATerm t)
{
  t = SSL_table_get(a_54, b_54);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_102 (ATerm), ATerm t)
{
  ATerm z_50 = NULL;
  z_50 = t;
  {
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
        t = term_b_9;
        c_51 = t;
        t = term_c_9;
        d_51 = t;
        t = term_d_9;
        t = y_3(c_51, d_51, t);
        b_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_51, term_e_9);
        t = geq_0_0(t);
        t = z_50;
        t = w_102(t);
        LocalPopChoice(z_8);
      }
    else
      {
        t = y_8;
        t = z_50;
      }
  }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm g_51 = NULL;
  g_51 = t;
  if(match_string(t, "-k"))
    {
      t = g_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_51;
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
  h_51 = t;
  t = SSL_string_to_int(h_51);
  i_51 = t;
  t = term_f_9;
  j_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_9, i_51);
  t = b_4(j_51, i_51, t);
  t = h_51;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_g_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_2, h_2, i_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm l_51 = NULL;
  l_51 = t;
  if(match_string(t, "-S"))
    {
      t = l_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_51;
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL;
  t = term_c_9;
  m_51 = t;
  t = term_h_9;
  n_51 = t;
  t = term_i_9;
  t = b_4(m_51, n_51, t);
  t = term_j_9;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_k_9;
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
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL;
  o_51 = t;
  t = SSL_string_to_int(o_51);
  p_51 = t;
  t = term_c_9;
  q_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_9, p_51);
  t = b_4(q_51, p_51, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_51);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_l_9;
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
  ATerm w_51 = NULL,x_51 = NULL;
  t = term_m_9;
  w_51 = t;
  t = term_a_6;
  x_51 = t;
  t = term_n_9;
  t = b_4(w_51, x_51, t);
  t = term_o_9;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_q_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_2, l_2, p_2, t);
      LocalPopChoice(t_9);
    }
  else
    {
      t = r_9;
      {
        ATerm u_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_2, r_2, s_2, t);
            LocalPopChoice(w_9);
          }
        else
          {
            t = u_9;
            t = Option_3_0(t_2, u_2, w_2, t);
          }
      }
    }
  return(t);
}
static ATerm b_4 (ATerm o_47, ATerm p_47, ATerm t)
{
  ATerm y_51 = NULL;
  t = term_b_9;
  y_51 = t;
  t = SSL_table_put(y_51, o_47, p_47);
  t = (ATerm) ATmakeAppl(sym__3, term_b_9, o_47, p_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL;
      t = term_a_6;
      t = e_0(t);
      d_52 = t;
      t = term_x_9;
      e_52 = t;
      t = term_y_9;
      f_52 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_9, term_y_9, d_52);
      t = z_3(e_52, f_52, d_52, t);
      _fail(t);
    }
  else
    {
      ATerm m_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_52 = ATgetFirst((ATermList) t);
          c_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_52;
      t = c_0(t);
      t = term_a_6;
      t = d_0(t);
      m_52 = t;
      t = (ATerm) ATinsert(CheckATermList(c_52), m_52);
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm o_52 = NULL;
  o_52 = t;
  if(match_string(t, "-o"))
    {
      t = o_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_52;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL;
  p_52 = t;
  t = term_z_9;
  q_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_9, p_52);
  t = b_4(q_52, p_52, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_52);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_a_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_2, y_2, z_2, t);
  return(t);
}
static ATerm z_3 (ATerm j_52, ATerm k_52, ATerm i_52, ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL;
  s_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_52, k_52);
  {
    ATerm b_10 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_10 = ATgetArgument(t, 0);
            ATerm e_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_52, k_52);
        t = y_3(j_52, k_52, t);
        LocalPopChoice(c_10);
      }
    else
      {
        t = b_10;
        t = (ATerm) ATempty;
      }
  }
  t_52 = t;
  t = (ATerm) ATinsert(CheckATermList(t_52), i_52);
  u_52 = t;
  t = SSL_table_put(j_52, k_52, u_52);
  t = s_52;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL;
      t = term_a_6;
      t = n_0(t);
      f_53 = t;
      t = term_x_9;
      g_53 = t;
      t = term_y_9;
      h_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_9, term_y_9, f_53);
      t = z_3(g_53, h_53, f_53, t);
      _fail(t);
    }
  else
    {
      ATerm l_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_53 = ATgetFirst((ATermList) t);
          c_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_53;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_53 = ATgetFirst((ATermList) t);
          e_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_53;
      t = k_0(t);
      t = d_53;
      t = l_0(t);
      l_53 = t;
      t = (ATerm) ATinsert(CheckATermList(e_53), l_53);
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm n_53 = NULL;
  n_53 = t;
  if(match_string(t, "-i"))
    {
      t = n_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_53;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL;
  o_53 = t;
  t = term_f_10;
  p_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_10, o_53);
  t = b_4(p_53, o_53, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_53);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_g_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, i_3, j_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_6;
  t = whoami_0_0(t);
  q_53 = t;
  t = term_o_6;
  s_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_10), q_53);
  t_53 = t;
  t = SSL_printnl(s_53, t_53);
  t = term_s_6;
  r_53 = t;
  t = SSL_exit(r_53);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL;
  t = term_b_9;
  u_53 = t;
  t = term_t_10;
  v_53 = t;
  t = term_u_10;
  t = y_3(u_53, v_53, t);
  return(t);
}
static ATerm w_3 (ATerm r_40, ATerm s_40, ATerm t)
{
  ATerm v_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_40, s_40);
      LocalPopChoice(w_10);
    }
  else
    {
      t = v_10;
      t = SSL_addr(r_40, s_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm t)
{
  ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
  x_53 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_53;
      t = e_94(t);
    }
  else
    {
      ATerm e_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_53 = ATgetFirst((ATermList) t);
          z_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_53;
      t = foldr_2_0(e_94, f_94, t);
      e_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_53, e_54);
      t = f_94(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_h_9;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL;
  if(match_cons(t, sym__2))
    {
      u_66 = ATgetArgument(t, 0);
      v_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3(u_66, v_66, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_54 = NULL,q_66 = NULL,r_66 = NULL;
  t = times_0_0(t);
  r_66 = t;
  t = SSL_explode_term(r_66);
  if(match_cons(t, sym__2))
    {
      ATerm x_10 = ATgetArgument(t, 0);
      q_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_66;
  t = foldr_2_0(k_3, l_3, t);
  h_54 = t;
  t = SSL_TicksToSeconds(h_54);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL;
  s_54 = t;
  if(match_cons(t, sym__2))
    {
      t_54 = ATgetArgument(t, 0);
      u_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_54;
        if((t_54 != t))
          {
            _fail(t);
          }
        t = s_54;
        LocalPopChoice(z_10);
      }
    else
      {
        t = y_10;
        t = (ATerm) ATmakeAppl(sym__2, t_54, u_54);
        {
          ATerm a_11 = t;
          int b_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_54, u_54);
              LocalPopChoice(b_11);
            }
          else
            {
              t = a_11;
              t = SSL_gtr(t_54, u_54);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_54, u_54);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_102 (ATerm), ATerm t)
{
  ATerm y_54 = NULL;
  y_54 = t;
  {
    ATerm c_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL;
        t = term_b_9;
        b_55 = t;
        t = term_c_9;
        c_55 = t;
        t = term_d_9;
        t = y_3(b_55, c_55, t);
        a_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_55, term_s_6);
        t = geq_0_0(t);
        t = y_54;
        t = v_102(t);
        LocalPopChoice(e_11);
      }
    else
      {
        t = c_11;
        t = y_54;
      }
  }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL,h_55 = NULL,i_55 = NULL;
  t = run_time_0_0(t);
  e_55 = t;
  t = term_a_6;
  t = whoami_0_0(t);
  f_55 = t;
  t = term_o_6;
  h_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_11), e_55), term_j_11), f_55);
  i_55 = t;
  t = SSL_printnl(h_55, i_55);
  t = (ATerm) ATmakeAppl(sym__2, term_o_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_11), e_55), term_j_11), f_55));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_9;
  j_55 = t;
  t = SSL_exit(j_55);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL;
  u_55 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_55;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_55 = ATgetArgument(t, 0);
          {
            ATerm h_67 = NULL,w_11 = NULL;
            t = SSLgetAnnotations(u_55);
            h_67 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_55);
            w_11 = t;
            t = SSLsetAnnotations(w_11, h_67);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_55;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_105 (ATerm), ATerm t)
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_55 = NULL,n_55 = NULL;
      t = term_b_9;
      m_55 = t;
      t = term_q_11;
      n_55 = t;
      t = term_r_11;
      t = y_3(m_55, n_55, t);
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      t = fetch_1_0(x_3, t);
    }
  t = l_105(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_55 = ATgetFirst((ATermList) t);
      y_55 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_56 = NULL,d_56 = NULL;
        static ATerm a_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_56)), not_null(d_56));
          return(t);
        }
        t = y_55;
        t = i_0(t);
        if(((c_56 != NULL) && (c_56 != t)))
          _fail(t);
        else
          c_56 = t;
        t = x_55;
        t = g_0(t);
        if(((d_56 != NULL) && (d_56 != t)))
          _fail(t);
        else
          d_56 = t;
        t = y_55;
        t = reverse_acc_2_0(g_0, a_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_6;
      t = i_0(t);
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL,z_11 = NULL;
  l_56 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_56);
  j_56 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_56);
  z_11 = t;
  t = SSLsetAnnotations(z_11, j_56);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm n_56 = NULL;
  n_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_56), term_u_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL;
  ATerm v_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_56 = NULL,i_56 = NULL;
      t = term_b_9;
      h_56 = t;
      t = term_t_10;
      i_56 = t;
      t = term_u_10;
      t = y_3(h_56, i_56, t);
      LocalPopChoice(y_11);
    }
  else
    {
      t = v_11;
      t = fetch_1_0(f_4, t);
    }
  t = term_a_12;
  t = echo_0_0(t);
  t = term_x_9;
  f_56 = t;
  t = term_y_9;
  g_56 = t;
  t = term_c_12;
  t = y_3(f_56, g_56, t);
  t = reverse_acc_2_0(_id, j_4, t);
  t = map_1_0(k_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL;
  p_56 = t;
  {
    ATerm f_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_56;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_12 = ATgetFirst((ATermList) t);
                ATerm o_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_56;
          }
        LocalPopChoice(h_12);
      }
    else
      {
        t = f_12;
        t = (ATerm) ATinsert(ATempty, p_56);
      }
  }
  q_56 = t;
  t = term_s_7;
  r_56 = t;
  t = SSL_printnl(r_56, q_56);
  t = p_56;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL;
  t = term_b_9;
  v_56 = t;
  t = term_t_10;
  w_56 = t;
  t = term_u_10;
  t = y_3(v_56, w_56, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL;
  t = term_p_12;
  x_56 = t;
  t = term_a_6;
  y_56 = t;
  t = term_q_12;
  t = b_4(x_56, y_56, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_r_12;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL;
  t = term_p_12;
  b_57 = t;
  t = term_a_6;
  c_57 = t;
  t = term_q_12;
  t = b_4(b_57, c_57, t);
  t = term_s_12;
  z_56 = t;
  t = term_a_6;
  a_57 = t;
  t = term_t_12;
  t = b_4(z_56, a_57, t);
  t = term_u_12;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_v_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_4, m_4, o_4, t);
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      t = Option_3_0(q_4, r_4, s_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_66 (ATerm), ATerm e_66 (ATerm), ATerm t)
{
  ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,b_12 = NULL;
  i_57 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_57 = ATgetFirst((ATermList) t);
      f_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_57);
  d_57 = t;
  t = e_57;
  t = d_66(t);
  g_57 = t;
  t = f_57;
  t = e_66(t);
  h_57 = t;
  t = (ATerm) ATinsert(CheckATermList(h_57), g_57);
  b_12 = t;
  t = SSLsetAnnotations(b_12, d_57);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_107 (ATerm), ATerm t)
{
  ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL,s_57 = NULL,t_57 = NULL,d_12 = NULL;
  n_57 = t;
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_13;
        t = o_107(t);
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
      }
  }
  t = n_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_57 = ATgetFirst((ATermList) t);
      q_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_57);
  o_57 = t;
  t = term_t_10;
  t_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_10, p_57);
  t = b_4(t_57, p_57, t);
  t = q_57;
  {
    static ATerm d_58 (ATerm t)
    {
      ATerm b_13 = t;
      int c_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_13 = t;
          int e_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_57 = NULL;
              w_57 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_57;
              LocalPopChoice(e_13);
            }
          else
            {
              t = d_13;
              t = o_107(t);
              t = Cons_2_0(_id, d_58, t);
            }
          LocalPopChoice(c_13);
        }
      else
        {
          t = b_13;
          {
            ATerm z_57 = NULL,a_58 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_57 = ATgetFirst((ATermList) t);
                a_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(a_58), (ATerm) ATmakeAppl(sym_Undefined_1, z_57));
          }
        }
      return(t);
    }
    t = d_58(t);
  }
  s_57 = t;
  t = (ATerm) ATinsert(CheckATermList(s_57), (ATerm) ATmakeAppl(sym_Program_1, p_57));
  d_12 = t;
  t = SSLsetAnnotations(d_12, o_57);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm p_58 = NULL;
  p_58 = t;
  if(match_string(t, "--help"))
    {
      t = p_58;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_58;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_58;
        }
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL;
  t = term_q_11;
  q_58 = t;
  t = term_a_6;
  r_58 = t;
  t = term_f_13;
  t = b_4(q_58, r_58, t);
  t = term_g_13;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_h_13;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_107 (ATerm), ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL;
  k_58 = t;
  t = term_x_9;
  m_58 = t;
  t = term_y_9;
  n_58 = t;
  t = (ATerm) ATempty;
  o_58 = t;
  t = SSL_table_put(m_58, n_58, o_58);
  t = k_58;
  {
    static ATerm t_4 (ATerm t)
    {
      ATerm i_13 = t;
      int j_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_107(t);
          LocalPopChoice(j_13);
        }
      else
        {
          t = i_13;
          {
            ATerm k_13 = t;
            int l_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_4, v_4, w_4, t);
                LocalPopChoice(l_13);
              }
            else
              {
                t = k_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_4, t);
  }
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_59 = NULL;
        c_59 = t;
        {
          ATerm r_13 = t;
          int s_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_67 = NULL;
              t = c_59;
              {
                ATerm t_13 = t;
                int u_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_67 = NULL,q_67 = NULL;
                    t = term_b_9;
                    p_67 = t;
                    t = term_q_11;
                    q_67 = t;
                    t = term_r_11;
                    t = y_3(p_67, q_67, t);
                    LocalPopChoice(u_13);
                  }
                else
                  {
                    t = t_13;
                    t = fetch_1_0(x_4, t);
                  }
              }
              t = c_59;
              t = default_system_usage_0_0(t);
              t = term_h_9;
              o_67 = t;
              t = SSL_exit(o_67);
              LocalPopChoice(s_13);
            }
          else
            {
              t = r_13;
              {
                ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL;
                t = term_b_9;
                v_67 = t;
                t = term_p_12;
                w_67 = t;
                t = term_v_13;
                t = y_3(v_67, w_67, t);
                t = c_59;
                t = default_system_about_0_0(t);
                t = term_h_9;
                u_67 = t;
                t = SSL_exit(u_67);
              }
            }
        }
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        {
          ATerm w_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL;
              static ATerm z_4 (ATerm t)
              {
                ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL,g_12 = NULL;
                i_59 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    h_59 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(i_59);
                g_59 = t;
                t = h_59;
                if(((i_58 != NULL) && (i_58 != t)))
                  _fail(t);
                else
                  i_58 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, h_59);
                g_12 = t;
                t = SSLsetAnnotations(g_12, g_59);
                return(t);
              }
              t = fetch_1_0(z_4, t);
              t = term_o_6;
              e_59 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_58)), term_z_13);
              f_59 = t;
              t = SSL_printnl(e_59, f_59);
              t = (ATerm) ATmakeAppl(sym__2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_58)), term_z_13));
              t = default_system_usage_0_0(t);
              t = term_s_6;
              d_59 = t;
              t = SSL_exit(d_59);
              LocalPopChoice(y_13);
            }
          else
            {
              t = w_13;
            }
        }
      }
  }
  j_58 = t;
  t = term_x_9;
  l_58 = t;
  t = SSL_table_destroy(l_58);
  t = j_58;
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm t)
{
  ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL;
  t = parse_options_1_0(n_105, t);
  n_59 = t;
  t = term_a_14;
  q_59 = t;
  t = SSL_table_create(q_59);
  t = term_a_14;
  o_59 = t;
  t = term_c_14;
  p_59 = t;
  t = SSL_table_put(o_59, p_59, n_59);
  t = n_59;
  t = p_105(t);
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_105, t);
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
              t = q_105(t);
              t = report_success_0_0(t);
              LocalPopChoice(h_14);
            }
          else
            {
              t = g_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = if_verbose2_1_0(e_6, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm r_59 = NULL,s_59 = NULL;
  t = term_i_14;
  r_59 = t;
  t = term_a_6;
  s_59 = t;
  t = term_j_14;
  t = b_4(r_59, s_59, t);
  t = term_m_14;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_n_14;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL;
  t_59 = t;
  t = term_b_9;
  x_59 = t;
  t = term_t_10;
  y_59 = t;
  t = term_u_10;
  t = y_3(x_59, y_59, t);
  u_59 = t;
  t = term_o_6;
  v_59 = t;
  t = (ATerm) ATinsert(ATempty, u_59);
  w_59 = t;
  t = SSL_printnl(v_59, w_59);
  t = t_59;
  return(t);
}
ATerm iowrap_3_0 (ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm t)
{
  static ATerm a_5 (ATerm t)
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_104(t);
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        {
          ATerm q_14 = t;
          int r_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(r_14);
            }
          else
            {
              t = q_14;
              {
                ATerm s_14 = t;
                int t_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(t_14);
                  }
                else
                  {
                    t = s_14;
                    {
                      ATerm v_14 = t;
                      int x_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(i_5, c_6, d_6, t);
                          LocalPopChoice(x_14);
                        }
                      else
                        {
                          t = v_14;
                          {
                            ATerm y_14 = t;
                            int z_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(z_14);
                              }
                            else
                              {
                                t = y_14;
                                t = keep_option_0_0(t);
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
  static ATerm e_5 (ATerm t)
  {
    ATerm z_59 = NULL,a_60 = NULL,b_60 = NULL;
    a_60 = t;
    {
      ATerm a_15 = t;
      int b_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm f_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((z_59 != NULL) && (z_59 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_59 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_6, t);
          LocalPopChoice(b_15);
        }
      else
        {
          t = a_15;
          t = term_d_15;
          z_59 = t;
        }
    }
    t = not_null(z_59);
    t = ReadFromFile_0_0(t);
    b_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_60, b_60);
    t = apply_strategy_1_0(w_104, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(a_5, y_104, b_5, e_5, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,n_12 = NULL;
  i_60 = t;
  if(match_cons(t, sym__2))
    {
      f_60 = ATgetArgument(t, 0);
      g_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_60);
  e_60 = t;
  t = g_60;
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_60 = NULL,z_67 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,m_12 = NULL,l_12 = NULL,k_12 = NULL,i_12 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            z_60 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_60);
        z_67 = t;
        t = z_60;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_68 = ATgetFirst((ATermList) t);
            d_68 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_60);
        b_68 = t;
        t = d_68;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_68 = ATgetFirst((ATermList) t);
            h_68 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_68);
        f_68 = t;
        t = g_68;
        if(match_cons(t, sym_Strategies_1))
          {
            k_68 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_68);
        j_68 = t;
        t = k_68;
        t = map_1_0(strategy_definition_0_0, t);
        l_68 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, l_68);
        i_12 = t;
        t = SSLsetAnnotations(i_12, j_68);
        m_68 = t;
        t = h_68;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(h_68), m_68);
        k_12 = t;
        t = SSLsetAnnotations(k_12, f_68);
        i_68 = t;
        t = (ATerm) ATinsert(CheckATermList(i_68), c_68);
        l_12 = t;
        t = SSLsetAnnotations(l_12, b_68);
        e_68 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, e_68);
        m_12 = t;
        t = SSLsetAnnotations(m_12, z_67);
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        t = debug_1_0(l_6, t);
      }
  }
  h_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_60, h_60);
  n_12 = t;
  t = SSLsetAnnotations(n_12, e_60);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_h_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(i_6, _fail, default_usage_0_0, t);
  return(t);
}

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
Symbol sym_Hashtable_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
}
ATerm term_r_15;
ATerm term_n_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_j_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_s_12;
ATerm term_m_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_s_9;
ATerm term_r_9;
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
ATerm term_a_9;
ATerm term_z_8;
ATerm term_w_7;
ATerm term_t_7;
ATerm term_p_7;
ATerm term_l_7;
ATerm term_h_7;
ATerm term_d_7;
ATerm term_x_6;
ATerm term_v_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_l_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym__2, term_f_9, term_g_9);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym__2, term_g_9, term_l_9);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_l_6);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym__2, term_f_9, term_x_10);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, term_f_9, term_t_11);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym__2, term_b_10, term_c_10);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_l_6);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_l_6);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_l_6);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym__3, term_b_10, term_c_10, (ATerm) ATempty);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym__2, term_f_9, term_x_12);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym__2, term_t_14, term_l_6);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm debug_1_0 (ATerm l_88 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
ATerm term_expression_0_0 (ATerm t);
static ATerm h_0 (ATerm t);
ATerm match_term_exp_0_0 (ATerm t);
ATerm CallT_3_0 (ATerm n_64 (ATerm), ATerm o_64 (ATerm), ATerm p_64 (ATerm), ATerm t);
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
ATerm map_1_0 (ATerm w_88 (ATerm), ATerm t);
static ATerm a_4 (ATerm v_37, ATerm w_37, ATerm t);
static ATerm b_4 (ATerm q_22, ATerm r_22, ATerm t);
static ATerm d_4 (ATerm n_88 (ATerm), ATerm t_142, ATerm w_22, ATerm t);
static ATerm c_4 (ATerm m_22, ATerm n_22, ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm w_105 (ATerm), ATerm t);
static ATerm y_48 (ATerm s_48, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_4 (ATerm s_22, ATerm t);
static ATerm f_4 (ATerm o_36, ATerm p_36, ATerm t);
static ATerm g_4 (ATerm x_37, ATerm y_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_50 (ATerm m_49, ATerm t);
static ATerm o_50 (ATerm q_49, ATerm r_49, ATerm s_49, ATerm t);
static ATerm p_50 (ATerm a_50, ATerm b_50, ATerm c_50, ATerm t);
static ATerm h_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_89 (ATerm), ATerm t);
static ATerm m_4 (ATerm c_54, ATerm d_54, ATerm t);
ATerm if_verbose2_1_0 (ATerm f_104 (ATerm), ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_4 (ATerm o_47, ATerm p_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_4 (ATerm j_52, ATerm k_52, ATerm i_52, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm b_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_4 (ATerm r_40, ATerm s_40, ATerm t);
ATerm foldr_2_0 (ATerm n_95 (ATerm), ATerm o_95 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_104 (ATerm), ATerm t);
static ATerm n_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm need_help_1_0 (ATerm u_106 (ATerm), ATerm t);
static ATerm q_4 (ATerm q_55, ATerm r_55, ATerm s_55, ATerm t);
static ATerm r_4 (ATerm t_55, ATerm u_55, ATerm t);
ATerm lookup_table_0_1 (ATerm v_53, ATerm t);
ATerm new_hashtable_0_2 (ATerm y_55, ATerm z_55, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm k_4 (ATerm v_55, ATerm w_55, ATerm t);
static ATerm l_4 (ATerm a_56, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm x_108 (ATerm), ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm parse_options_1_0 (ATerm w_108 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm iowrap_3_0 (ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
static ATerm q_6 (ATerm t);
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
  t = term_l_6;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_r_6;
  v_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_6), b_0), term_s_6);
  l_1 = t;
  t = SSL_printnl(v_0, l_1);
  t = term_v_6;
  t_0 = t;
  t = SSL_exit(t_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm l_88 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,q_1 = NULL,r_1 = NULL;
  n_1 = t;
  t = l_88(t);
  o_1 = t;
  t = term_r_6;
  q_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_1), o_1);
  r_1 = t;
  t = SSL_printnl(q_1, r_1);
  t = n_1;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_x_6;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm b_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL;
      i_6 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = i_6;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              j_6 = ATgetArgument(t, 0);
              {
                ATerm j_0 = NULL,o_0 = NULL,c_2 = NULL;
                t = SSLgetAnnotations(i_6);
                j_0 = t;
                t = SSL_is_string(j_6);
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
                  j_6 = ATgetArgument(t, 0);
                  {
                    ATerm w_0 = NULL,y_0 = NULL,d_2 = NULL;
                    t = SSLgetAnnotations(i_6);
                    w_0 = t;
                    t = SSL_is_int(j_6);
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
                      j_6 = ATgetArgument(t, 0);
                      {
                        ATerm e_1 = NULL,g_1 = NULL,e_2 = NULL;
                        t = SSLgetAnnotations(i_6);
                        e_1 = t;
                        t = SSL_is_real(j_6);
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
                          j_6 = ATgetArgument(t, 0);
                          {
                            ATerm p_1 = NULL,t_1 = NULL,f_2 = NULL;
                            t = SSLgetAnnotations(i_6);
                            p_1 = t;
                            t = SSL_is_string(j_6);
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
                              j_6 = ATgetArgument(t, 0);
                              {
                                ATerm z_1 = NULL,b_2 = NULL,k_2 = NULL;
                                t = SSLgetAnnotations(i_6);
                                z_1 = t;
                                t = j_6;
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
                                  j_6 = ATgetArgument(t, 0);
                                  k_6 = ATgetArgument(t, 1);
                                  {
                                    ATerm n_2 = NULL,z_2 = NULL,c_3 = NULL,d_3 = NULL,g_3 = NULL,h_3 = NULL,q_2 = NULL,p_2 = NULL;
                                    t = SSLgetAnnotations(i_6);
                                    n_2 = t;
                                    t = j_6;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        d_3 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(j_6);
                                    c_3 = t;
                                    t = SSL_is_string(d_3);
                                    g_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, g_3);
                                    p_2 = t;
                                    t = SSLsetAnnotations(p_2, c_3);
                                    h_3 = t;
                                    t = k_6;
                                    t = term_expression_0_0(t);
                                    z_2 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, h_3, z_2);
                                    q_2 = t;
                                    t = SSLsetAnnotations(q_2, n_2);
                                  }
                                }
                              else
                                {
                                  ATerm s_3 = NULL,v_3 = NULL,w_3 = NULL,r_2 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      j_6 = ATgetArgument(t, 0);
                                      k_6 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(i_6);
                                  s_3 = t;
                                  t = SSL_is_string(j_6);
                                  v_3 = t;
                                  t = k_6;
                                  t = map_1_0(term_expression_0_0, t);
                                  w_3 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, v_3, w_3);
                                  r_2 = t;
                                  t = SSLsetAnnotations(r_2, s_3);
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(c_7);
    }
  else
    {
      t = b_7;
      t = debug_1_0(f_0, t);
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_d_7;
  return(t);
}
ATerm match_term_exp_0_0 (ATerm t)
{
  ATerm e_7 = t;
  int f_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_11 = NULL,b_12 = NULL,c_12 = NULL;
      v_11 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = v_11;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              b_12 = ATgetArgument(t, 0);
              {
                ATerm b_5 = NULL,f_5 = NULL,e_3 = NULL;
                t = SSLgetAnnotations(v_11);
                b_5 = t;
                t = SSL_is_string(b_12);
                f_5 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, f_5);
                e_3 = t;
                t = SSLsetAnnotations(e_3, b_5);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  b_12 = ATgetArgument(t, 0);
                  {
                    ATerm q_5 = NULL,u_5 = NULL,f_3 = NULL;
                    t = SSLgetAnnotations(v_11);
                    q_5 = t;
                    t = SSL_is_int(b_12);
                    u_5 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, u_5);
                    f_3 = t;
                    t = SSLsetAnnotations(f_3, q_5);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      b_12 = ATgetArgument(t, 0);
                      {
                        ATerm w_6 = NULL,y_6 = NULL,m_3 = NULL;
                        t = SSLgetAnnotations(v_11);
                        w_6 = t;
                        t = SSL_is_real(b_12);
                        y_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, y_6);
                        m_3 = t;
                        t = SSLsetAnnotations(m_3, w_6);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          b_12 = ATgetArgument(t, 0);
                          {
                            ATerm g_7 = NULL,i_7 = NULL,o_3 = NULL;
                            t = SSLgetAnnotations(v_11);
                            g_7 = t;
                            t = SSL_is_string(b_12);
                            i_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, i_7);
                            o_3 = t;
                            t = SSLsetAnnotations(o_3, g_7);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              b_12 = ATgetArgument(t, 0);
                              {
                                ATerm o_7 = NULL,q_7 = NULL,p_3 = NULL;
                                t = SSLgetAnnotations(v_11);
                                o_7 = t;
                                t = b_12;
                                t = match_term_exp_0_0(t);
                                q_7 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, q_7);
                                p_3 = t;
                                t = SSLsetAnnotations(p_3, o_7);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  b_12 = ATgetArgument(t, 0);
                                  c_12 = ATgetArgument(t, 1);
                                  {
                                    ATerm x_7 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,g_8 = NULL,h_8 = NULL,o_4 = NULL,x_3 = NULL;
                                    t = SSLgetAnnotations(v_11);
                                    x_7 = t;
                                    t = b_12;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        d_8 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(b_12);
                                    c_8 = t;
                                    t = SSL_is_string(d_8);
                                    g_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, g_8);
                                    x_3 = t;
                                    t = SSLsetAnnotations(x_3, c_8);
                                    h_8 = t;
                                    t = c_12;
                                    t = match_term_exp_0_0(t);
                                    b_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, h_8, b_8);
                                    o_4 = t;
                                    t = SSLsetAnnotations(o_4, x_7);
                                  }
                                }
                              else
                                {
                                  ATerm p_9 = NULL,t_9 = NULL,u_9 = NULL,s_4 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      b_12 = ATgetArgument(t, 0);
                                      c_12 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(v_11);
                                  p_9 = t;
                                  t = SSL_is_string(b_12);
                                  t_9 = t;
                                  t = c_12;
                                  t = map_1_0(match_term_exp_0_0, t);
                                  u_9 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, t_9, u_9);
                                  s_4 = t;
                                  t = SSLsetAnnotations(s_4, p_9);
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(f_7);
    }
  else
    {
      t = e_7;
      t = debug_1_0(h_0, t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm n_64 (ATerm), ATerm o_64 (ATerm), ATerm p_64 (ATerm), ATerm t)
{
  ATerm h_13 = NULL,t_13 = NULL,z_13 = NULL,b_14 = NULL,e_14 = NULL,f_14 = NULL,m_14 = NULL,n_14 = NULL,h_5 = NULL;
  n_14 = t;
  if(match_cons(t, sym_CallT_3))
    {
      t_13 = ATgetArgument(t, 0);
      z_13 = ATgetArgument(t, 1);
      b_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_14);
  h_13 = t;
  t = t_13;
  t = n_64(t);
  e_14 = t;
  t = z_13;
  t = o_64(t);
  f_14 = t;
  t = b_14;
  t = p_64(t);
  m_14 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, e_14, f_14, m_14);
  h_5 = t;
  t = SSLsetAnnotations(h_5, h_13);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = CallT_3_0(p_0, q_0, r_0, t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm h_20 = NULL,j_20 = NULL,k_20 = NULL,m_20 = NULL,a_6 = NULL;
  m_20 = t;
  if(match_cons(t, sym_SVar_1))
    {
      j_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_20);
  h_20 = t;
  t = SSL_is_string(j_20);
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, k_20);
  a_6 = t;
  t = SSLsetAnnotations(a_6, h_20);
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
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,s_20 = NULL,b_6 = NULL;
  s_20 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_20);
  o_20 = t;
  t = SSL_is_string(p_20);
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_20);
  b_6 = t;
  t = SSLsetAnnotations(b_6, o_20);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm k_27 = NULL;
  k_27 = t;
  t = SSL_is_string(k_27);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,y_7 = NULL,a_7 = NULL;
  w_28 = t;
  if(match_cons(t, sym_CallT_3))
    {
      o_28 = ATgetArgument(t, 0);
      p_28 = ATgetArgument(t, 1);
      q_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_28);
  n_28 = t;
  t = o_28;
  if(match_cons(t, sym_SVar_1))
    {
      t_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_28);
  s_28 = t;
  t = SSL_is_string(t_28);
  u_28 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, u_28);
  a_7 = t;
  t = SSLsetAnnotations(a_7, s_28);
  v_28 = t;
  t = p_28;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = q_28;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, v_28, p_28, q_28);
  y_7 = t;
  t = SSLsetAnnotations(y_7, n_28);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm x_28 = NULL,u_29 = NULL,v_29 = NULL,p_31 = NULL,e_8 = NULL;
  p_31 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_31);
  x_28 = t;
  t = SSL_is_string(u_29);
  v_29 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_29);
  e_8 = t;
  t = SSLsetAnnotations(e_8, x_28);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm g_34 = NULL,i_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL;
  g_34 = t;
  if(match_cons(t, sym_SDef_3))
    {
      i_34 = ATgetArgument(t, 0);
      k_34 = ATgetArgument(t, 1);
      l_34 = ATgetArgument(t, 2);
      {
        ATerm x_36 = NULL,d_37 = NULL,e_37 = NULL,g_37 = NULL,l_8 = NULL;
        t = SSLgetAnnotations(g_34);
        x_36 = t;
        t = SSL_is_string(i_34);
        d_37 = t;
        t = k_34;
        t = map_1_0(b_1, t);
        e_37 = t;
        t = l_34;
        t = strategy_expression_0_0(t);
        g_37 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, d_37, e_37, g_37);
        l_8 = t;
        t = SSLsetAnnotations(l_8, x_36);
      }
    }
  else
    {
      ATerm c_39 = NULL,w_39 = NULL,y_39 = NULL,c_40 = NULL,d_40 = NULL,s_8 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          i_34 = ATgetArgument(t, 0);
          k_34 = ATgetArgument(t, 1);
          l_34 = ATgetArgument(t, 2);
          m_34 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_34);
      c_39 = t;
      t = SSL_is_string(i_34);
      w_39 = t;
      t = k_34;
      t = map_1_0(c_1, t);
      y_39 = t;
      t = l_34;
      t = map_1_0(d_1, t);
      c_40 = t;
      t = m_34;
      t = strategy_expression_0_0(t);
      d_40 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, w_39, y_39, c_40, d_40);
      s_8 = t;
      t = SSLsetAnnotations(s_8, c_39);
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm k_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,i_8 = NULL;
  t_38 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      q_38 = ATgetArgument(t, 0);
      r_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_38);
  k_38 = t;
  t = SSL_is_string(q_38);
  s_38 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_38, r_38);
  i_8 = t;
  t = SSLsetAnnotations(i_8, k_38);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL,k_41 = NULL,l_41 = NULL,o_8 = NULL;
  l_41 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      h_41 = ATgetArgument(t, 0);
      i_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_41);
  g_41 = t;
  t = SSL_is_string(h_41);
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_41, i_41);
  o_8 = t;
  t = SSLsetAnnotations(o_8, g_41);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm n_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,r_8 = NULL;
  u_41 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      r_41 = ATgetArgument(t, 0);
      s_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_41);
  n_41 = t;
  t = SSL_is_string(r_41);
  t_41 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_41, s_41);
  r_8 = t;
  t = SSLsetAnnotations(r_8, n_41);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_h_7;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_38 = NULL,a_39 = NULL,d_39 = NULL,e_39 = NULL;
      a_39 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = a_39;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = a_39;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  d_39 = ATgetArgument(t, 0);
                  {
                    ATerm y_14 = NULL,a_15 = NULL,l_5 = NULL;
                    t = SSLgetAnnotations(a_39);
                    y_14 = t;
                    t = d_39;
                    t = strategy_expression_0_0(t);
                    a_15 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, a_15);
                    l_5 = t;
                    t = SSLsetAnnotations(l_5, y_14);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      d_39 = ATgetArgument(t, 0);
                      {
                        ATerm g_15 = NULL,i_15 = NULL,o_5 = NULL;
                        t = SSLgetAnnotations(a_39);
                        g_15 = t;
                        t = d_39;
                        t = strategy_expression_0_0(t);
                        i_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, i_15);
                        o_5 = t;
                        t = SSLsetAnnotations(o_5, g_15);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          d_39 = ATgetArgument(t, 0);
                          e_39 = ATgetArgument(t, 1);
                          {
                            ATerm p_15 = NULL,s_15 = NULL,t_15 = NULL,r_5 = NULL;
                            t = SSLgetAnnotations(a_39);
                            p_15 = t;
                            t = d_39;
                            t = strategy_expression_0_0(t);
                            s_15 = t;
                            t = e_39;
                            t = strategy_expression_0_0(t);
                            t_15 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, s_15, t_15);
                            r_5 = t;
                            t = SSLsetAnnotations(r_5, p_15);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              d_39 = ATgetArgument(t, 0);
                              e_39 = ATgetArgument(t, 1);
                              {
                                ATerm b_16 = NULL,e_16 = NULL,f_16 = NULL,t_5 = NULL;
                                t = SSLgetAnnotations(a_39);
                                b_16 = t;
                                t = d_39;
                                t = strategy_expression_0_0(t);
                                e_16 = t;
                                t = e_39;
                                t = strategy_expression_0_0(t);
                                f_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, e_16, f_16);
                                t_5 = t;
                                t = SSLsetAnnotations(t_5, b_16);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  d_39 = ATgetArgument(t, 0);
                                  e_39 = ATgetArgument(t, 1);
                                  {
                                    ATerm n_16 = NULL,q_16 = NULL,r_16 = NULL,v_5 = NULL;
                                    t = SSLgetAnnotations(a_39);
                                    n_16 = t;
                                    t = d_39;
                                    t = strategy_expression_0_0(t);
                                    q_16 = t;
                                    t = e_39;
                                    t = strategy_expression_0_0(t);
                                    r_16 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, q_16, r_16);
                                    v_5 = t;
                                    t = SSLsetAnnotations(v_5, n_16);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      d_39 = ATgetArgument(t, 0);
                                      e_39 = ATgetArgument(t, 1);
                                      w_38 = ATgetArgument(t, 2);
                                      {
                                        ATerm a_17 = NULL,e_17 = NULL,f_17 = NULL,h_17 = NULL,w_5 = NULL;
                                        t = SSLgetAnnotations(a_39);
                                        a_17 = t;
                                        t = d_39;
                                        t = strategy_expression_0_0(t);
                                        e_17 = t;
                                        t = e_39;
                                        t = strategy_expression_0_0(t);
                                        f_17 = t;
                                        t = w_38;
                                        t = strategy_expression_0_0(t);
                                        h_17 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, e_17, f_17, h_17);
                                        w_5 = t;
                                        t = SSLsetAnnotations(w_5, a_17);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          d_39 = ATgetArgument(t, 0);
                                          e_39 = ATgetArgument(t, 1);
                                          {
                                            ATerm x_17 = NULL,b_18 = NULL,c_18 = NULL,x_5 = NULL;
                                            t = SSLgetAnnotations(a_39);
                                            x_17 = t;
                                            t = d_39;
                                            t = strategy_expression_0_0(t);
                                            b_18 = t;
                                            t = e_39;
                                            t = strategy_expression_0_0(t);
                                            c_18 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, b_18, c_18);
                                            x_5 = t;
                                            t = SSLsetAnnotations(x_5, x_17);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              d_39 = ATgetArgument(t, 0);
                                              e_39 = ATgetArgument(t, 1);
                                              {
                                                ATerm p_18 = NULL,t_18 = NULL,u_18 = NULL,y_5 = NULL;
                                                t = SSLgetAnnotations(a_39);
                                                p_18 = t;
                                                t = d_39;
                                                t = strategy_expression_0_0(t);
                                                t_18 = t;
                                                t = e_39;
                                                t = strategy_expression_0_0(t);
                                                u_18 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, t_18, u_18);
                                                y_5 = t;
                                                t = SSLsetAnnotations(y_5, p_18);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  d_39 = ATgetArgument(t, 0);
                                                  e_39 = ATgetArgument(t, 1);
                                                  w_38 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm o_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,w_19 = NULL,x_19 = NULL,f_20 = NULL,c_6 = NULL,z_5 = NULL;
                                                    t = SSLgetAnnotations(a_39);
                                                    o_19 = t;
                                                    t = d_39;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        w_19 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(d_39);
                                                    u_19 = t;
                                                    t = SSL_is_string(w_19);
                                                    x_19 = t;
                                                    t = (ATerm) ATmakeAppl(sym_SVar_1, x_19);
                                                    z_5 = t;
                                                    t = SSLsetAnnotations(z_5, u_19);
                                                    f_20 = t;
                                                    t = e_39;
                                                    t = map_1_0(m_0, t);
                                                    s_19 = t;
                                                    t = w_38;
                                                    t = map_1_0(s_0, t);
                                                    t_19 = t;
                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, f_20, s_19, t_19);
                                                    c_6 = t;
                                                    t = SSLsetAnnotations(c_6, o_19);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      d_39 = ATgetArgument(t, 0);
                                                      e_39 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm h_21 = NULL,q_21 = NULL,s_21 = NULL,d_6 = NULL;
                                                        t = SSLgetAnnotations(a_39);
                                                        h_21 = t;
                                                        t = SSL_is_string(d_39);
                                                        q_21 = t;
                                                        t = e_39;
                                                        t = strategy_expression_0_0(t);
                                                        s_21 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, q_21, s_21);
                                                        d_6 = t;
                                                        t = SSLsetAnnotations(d_6, h_21);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          d_39 = ATgetArgument(t, 0);
                                                          e_39 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm k_22 = NULL,u_22 = NULL,v_22 = NULL,e_6 = NULL;
                                                            t = SSLgetAnnotations(a_39);
                                                            k_22 = t;
                                                            t = SSL_is_int(d_39);
                                                            u_22 = t;
                                                            t = e_39;
                                                            t = strategy_expression_0_0(t);
                                                            v_22 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, u_22, v_22);
                                                            e_6 = t;
                                                            t = SSLsetAnnotations(e_6, k_22);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              d_39 = ATgetArgument(t, 0);
                                                              e_39 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm i_23 = NULL,m_23 = NULL,n_23 = NULL,f_6 = NULL;
                                                                t = SSLgetAnnotations(a_39);
                                                                i_23 = t;
                                                                t = SSL_is_string(d_39);
                                                                m_23 = t;
                                                                t = e_39;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                n_23 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, m_23, n_23);
                                                                f_6 = t;
                                                                t = SSLsetAnnotations(f_6, i_23);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  d_39 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm y_23 = NULL,a_24 = NULL,g_6 = NULL;
                                                                    t = SSLgetAnnotations(a_39);
                                                                    y_23 = t;
                                                                    t = d_39;
                                                                    t = strategy_expression_0_0(t);
                                                                    a_24 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, a_24);
                                                                    g_6 = t;
                                                                    t = SSLsetAnnotations(g_6, y_23);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      d_39 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm m_24 = NULL,p_24 = NULL,h_6 = NULL;
                                                                        t = SSLgetAnnotations(a_39);
                                                                        m_24 = t;
                                                                        t = d_39;
                                                                        t = strategy_expression_0_0(t);
                                                                        p_24 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, p_24);
                                                                        h_6 = t;
                                                                        t = SSLsetAnnotations(h_6, m_24);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          d_39 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm b_25 = NULL,e_25 = NULL,m_6 = NULL;
                                                                            t = SSLgetAnnotations(a_39);
                                                                            b_25 = t;
                                                                            t = d_39;
                                                                            t = strategy_expression_0_0(t);
                                                                            e_25 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, e_25);
                                                                            m_6 = t;
                                                                            t = SSLsetAnnotations(m_6, b_25);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              d_39 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm l_25 = NULL,o_25 = NULL,n_6 = NULL;
                                                                                t = SSLgetAnnotations(a_39);
                                                                                l_25 = t;
                                                                                t = d_39;
                                                                                t = strategy_expression_0_0(t);
                                                                                o_25 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, o_25);
                                                                                n_6 = t;
                                                                                t = SSLsetAnnotations(n_6, l_25);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  d_39 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm a_26 = NULL,f_26 = NULL,o_6 = NULL;
                                                                                    t = SSLgetAnnotations(a_39);
                                                                                    a_26 = t;
                                                                                    t = d_39;
                                                                                    t = match_term_exp_0_0(t);
                                                                                    f_26 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, f_26);
                                                                                    o_6 = t;
                                                                                    t = SSLsetAnnotations(o_6, a_26);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      d_39 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm r_26 = NULL,u_26 = NULL,p_6 = NULL;
                                                                                        t = SSLgetAnnotations(a_39);
                                                                                        r_26 = t;
                                                                                        t = d_39;
                                                                                        t = term_expression_0_0(t);
                                                                                        u_26 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, u_26);
                                                                                        p_6 = t;
                                                                                        t = SSLsetAnnotations(p_6, r_26);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          d_39 = ATgetArgument(t, 0);
                                                                                          e_39 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm b_27 = NULL,f_27 = NULL,g_27 = NULL,u_6 = NULL;
                                                                                            t = SSLgetAnnotations(a_39);
                                                                                            b_27 = t;
                                                                                            t = d_39;
                                                                                            t = map_1_0(u_0, t);
                                                                                            f_27 = t;
                                                                                            t = e_39;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            g_27 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, f_27, g_27);
                                                                                            u_6 = t;
                                                                                            t = SSLsetAnnotations(u_6, b_27);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              d_39 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm q_27 = NULL,t_27 = NULL,z_6 = NULL;
                                                                                                t = SSLgetAnnotations(a_39);
                                                                                                q_27 = t;
                                                                                                t = d_39;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                t_27 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, t_27);
                                                                                                z_6 = t;
                                                                                                t = SSLsetAnnotations(z_6, q_27);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  d_39 = ATgetArgument(t, 0);
                                                                                                  e_39 = ATgetArgument(t, 1);
                                                                                                  w_38 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm d_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,f_8 = NULL;
                                                                                                    t = SSLgetAnnotations(a_39);
                                                                                                    d_28 = t;
                                                                                                    t = SSL_is_string(d_39);
                                                                                                    j_28 = t;
                                                                                                    t = e_39;
                                                                                                    t = map_1_0(x_0, t);
                                                                                                    k_28 = t;
                                                                                                    t = w_38;
                                                                                                    t = map_1_0(z_0, t);
                                                                                                    l_28 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, j_28, k_28, l_28);
                                                                                                    f_8 = t;
                                                                                                    t = SSLsetAnnotations(f_8, d_28);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm z_31 = NULL,c_32 = NULL,d_32 = NULL,t_8 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      d_39 = ATgetArgument(t, 0);
                                                                                                      e_39 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(a_39);
                                                                                                  z_31 = t;
                                                                                                  t = d_39;
                                                                                                  t = map_1_0(a_1, t);
                                                                                                  c_32 = t;
                                                                                                  t = e_39;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  d_32 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, c_32, d_32);
                                                                                                  t_8 = t;
                                                                                                  t = SSLsetAnnotations(t_8, z_31);
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
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      t = debug_1_0(f_1, t);
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,l_10 = NULL;
  n_48 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      p_46 = ATgetArgument(t, 0);
      l_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_48);
  o_46 = t;
  t = SSL_is_string(p_46);
  m_48 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_48, l_48);
  l_10 = t;
  t = SSLsetAnnotations(l_10, o_46);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm l_52 = NULL,s_52 = NULL,x_52 = NULL,j_53 = NULL,t_53 = NULL,n_10 = NULL;
  t_53 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      s_52 = ATgetArgument(t, 0);
      x_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_53);
  l_52 = t;
  t = SSL_is_string(s_52);
  j_53 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_53, x_52);
  n_10 = t;
  t = SSLsetAnnotations(n_10, l_52);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL,b_54 = NULL,m_54 = NULL,o_10 = NULL;
  m_54 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_53 = ATgetArgument(t, 0);
      y_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_54);
  w_53 = t;
  t = SSL_is_string(x_53);
  b_54 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_54, y_53);
  o_10 = t;
  t = SSLsetAnnotations(o_10, w_53);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm d_61 = NULL,a_63 = NULL,b_63 = NULL,z_63 = NULL,a_64 = NULL,q_10 = NULL;
  a_64 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      a_63 = ATgetArgument(t, 0);
      b_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_64);
  d_61 = t;
  t = SSL_is_string(a_63);
  z_63 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_63, b_63);
  q_10 = t;
  t = SSLsetAnnotations(q_10, d_61);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,r_10 = NULL;
  f_64 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      c_64 = ATgetArgument(t, 0);
      d_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_64);
  b_64 = t;
  t = SSL_is_string(c_64);
  e_64 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_64, d_64);
  r_10 = t;
  t = SSLsetAnnotations(r_10, b_64);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,t_10 = NULL;
  e_65 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      b_65 = ATgetArgument(t, 0);
      c_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_65);
  a_65 = t;
  t = SSL_is_string(b_65);
  d_65 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_65, c_65);
  t_10 = t;
  t = SSLsetAnnotations(t_10, a_65);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,u_10 = NULL;
  j_65 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      g_65 = ATgetArgument(t, 0);
      h_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_65);
  f_65 = t;
  t = SSL_is_string(g_65);
  i_65 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_65, h_65);
  u_10 = t;
  t = SSLsetAnnotations(u_10, f_65);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_l_7;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL;
      l_45 = t;
      if(match_cons(t, sym_SDef_3))
        {
          m_45 = ATgetArgument(t, 0);
          n_45 = ATgetArgument(t, 1);
          o_45 = ATgetArgument(t, 2);
          {
            ATerm f_42 = NULL,k_42 = NULL,t_45 = NULL,u_45 = NULL,m_10 = NULL;
            t = SSLgetAnnotations(l_45);
            f_42 = t;
            t = SSL_is_string(m_45);
            k_42 = t;
            t = n_45;
            t = map_1_0(h_1, t);
            t_45 = t;
            t = o_45;
            t = strategy_expression_0_0(t);
            u_45 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, k_42, t_45, u_45);
            m_10 = t;
            t = SSLsetAnnotations(m_10, f_42);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              m_45 = ATgetArgument(t, 0);
              n_45 = ATgetArgument(t, 1);
              o_45 = ATgetArgument(t, 2);
              k_45 = ATgetArgument(t, 3);
              {
                ATerm q_50 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,p_10 = NULL;
                t = SSLgetAnnotations(l_45);
                q_50 = t;
                t = SSL_is_string(m_45);
                s_51 = t;
                t = n_45;
                t = map_1_0(i_1, t);
                t_51 = t;
                t = o_45;
                t = map_1_0(j_1, t);
                u_51 = t;
                t = k_45;
                t = strategy_expression_0_0(t);
                v_51 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, s_51, t_51, u_51, v_51);
                p_10 = t;
                t = SSLsetAnnotations(p_10, q_50);
              }
            }
          else
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  m_45 = ATgetArgument(t, 0);
                  n_45 = ATgetArgument(t, 1);
                  o_45 = ATgetArgument(t, 2);
                  k_45 = ATgetArgument(t, 3);
                  {
                    ATerm s_58 = NULL,h_60 = NULL,i_60 = NULL,a_61 = NULL,b_61 = NULL,s_10 = NULL;
                    t = SSLgetAnnotations(l_45);
                    s_58 = t;
                    t = SSL_is_string(m_45);
                    h_60 = t;
                    t = n_45;
                    t = map_1_0(k_1, t);
                    i_60 = t;
                    t = o_45;
                    t = map_1_0(m_1, t);
                    a_61 = t;
                    t = k_45;
                    t = strategy_expression_0_0(t);
                    b_61 = t;
                    t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, h_60, i_60, a_61, b_61);
                    s_10 = t;
                    t = SSLsetAnnotations(s_10, s_58);
                  }
                }
              else
                {
                  ATerm s_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,v_10 = NULL;
                  if(match_cons(t, sym_ExtSDef_3))
                    {
                      m_45 = ATgetArgument(t, 0);
                      n_45 = ATgetArgument(t, 1);
                      o_45 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_45);
                  s_64 = t;
                  t = SSL_is_string(m_45);
                  w_64 = t;
                  t = n_45;
                  t = map_1_0(s_1, t);
                  x_64 = t;
                  t = o_45;
                  t = map_1_0(u_1, t);
                  y_64 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDef_3, w_64, x_64, y_64);
                  v_10 = t;
                  t = SSLsetAnnotations(v_10, s_64);
                }
            }
        }
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      t = debug_1_0(v_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm w_88 (ATerm), ATerm t)
{
  static ATerm h_46 (ATerm t)
  {
    ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL;
    e_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_46;
      }
    else
      {
        ATerm r_65 = NULL,u_65 = NULL,v_65 = NULL,h_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_46 = ATgetFirst((ATermList) t);
            g_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_46);
        r_65 = t;
        t = f_46;
        t = w_88(t);
        u_65 = t;
        t = g_46;
        t = h_46(t);
        v_65 = t;
        t = (ATerm) ATinsert(CheckATermList(v_65), u_65);
        h_11 = t;
        t = SSLsetAnnotations(h_11, r_65);
      }
    return(t);
  }
  t = h_46(t);
  return(t);
}
static ATerm a_4 (ATerm v_37, ATerm w_37, ATerm t)
{
  ATerm j_46 = NULL;
  t = SSL_fputc(v_37, w_37);
  j_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_46);
  return(t);
}
static ATerm b_4 (ATerm q_22, ATerm r_22, ATerm t)
{
  ATerm k_46 = NULL;
  t = SSL_write_term_to_stream_text(q_22, r_22);
  k_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_46);
  return(t);
}
static ATerm d_4 (ATerm n_88 (ATerm), ATerm t_142, ATerm w_22, ATerm t)
{
  ATerm l_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_142, term_p_7);
  t = h_4(t);
  l_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_46, w_22);
  t = n_88(t);
  t = fclose_0_0(t);
  t = w_22;
  return(t);
}
static ATerm c_4 (ATerm m_22, ATerm n_22, ATerm t)
{
  ATerm m_46 = NULL;
  t = SSL_write_term_to_stream_baf(m_22, n_22);
  m_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_46);
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
  ATerm j_66 = NULL,k_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_7 = ATgetArgument(t, 0);
      if(match_cons(r_7, sym_Stream_1))
        {
          j_66 = ATgetArgument(r_7, 0);
        }
      else
        _fail(t);
      k_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_4(j_66, k_66, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_7 = ATgetArgument(t, 0);
      if(match_cons(s_7, sym_Stream_1))
        {
          y_66 = ATgetArgument(s_7, 0);
        }
      else
        _fail(t);
      z_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4(y_66, z_66, t);
  v_66 = t;
  t = term_t_7;
  w_66 = t;
  t = v_66;
  if(match_cons(t, sym_Stream_1))
    {
      x_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_7, v_66);
  t = a_4(w_66, x_66, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,c_48 = NULL,d_48 = NULL,k_11 = NULL,j_11 = NULL;
  r_46 = t;
  if(match_cons(t, sym__2))
    {
      y_46 = ATgetArgument(t, 0);
      z_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_46);
  x_46 = t;
  t = y_46;
  {
    ATerm u_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm w_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((q_46 != NULL) && (q_46 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(w_1, t);
        LocalPopChoice(v_7);
      }
    else
      {
        t = u_7;
        t = term_w_7;
        q_46 = t;
      }
  }
  a_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_47, z_46);
  j_11 = t;
  t = SSLsetAnnotations(j_11, x_46);
  t = r_46;
  if(match_cons(t, sym__2))
    {
      t_46 = ATgetArgument(t, 0);
      u_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_46);
  s_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_46, (ATerm) ATmakeAppl(sym__2, not_null(q_46), u_46));
  k_11 = t;
  t = SSLsetAnnotations(k_11, s_46);
  w_46 = t;
  if(match_cons(t, sym__2))
    {
      c_48 = ATgetArgument(t, 0);
      d_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_7 = t;
    int a_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,l_11 = NULL;
        t = SSLgetAnnotations(w_46);
        c_66 = t;
        t = c_48;
        t = fetch_1_0(x_1, t);
        f_66 = t;
        t = d_48;
        if(match_cons(t, sym__2))
          {
            h_66 = ATgetArgument(t, 0);
            i_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_4(y_1, h_66, i_66, t);
        g_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_66, g_66);
        l_11 = t;
        t = SSLsetAnnotations(l_11, c_66);
        LocalPopChoice(a_8);
      }
    else
      {
        t = z_7;
        {
          ATerm p_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,m_11 = NULL;
          t = SSLgetAnnotations(w_46);
          p_66 = t;
          t = d_48;
          if(match_cons(t, sym__2))
            {
              t_66 = ATgetArgument(t, 0);
              u_66 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_4(a_2, t_66, u_66, t);
          s_66 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_48, s_66);
          m_11 = t;
          t = SSLsetAnnotations(m_11, p_66);
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
ATerm apply_strategy_1_0 (ATerm w_105 (ATerm), ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL;
  k_48 = t;
  t = dtime_0_0(t);
  t = k_48;
  t = w_105(t);
  j_48 = t;
  t = dtime_0_0(t);
  g_48 = t;
  t = j_48;
  if(match_cons(t, sym__2))
    {
      h_48 = ATgetArgument(t, 0);
      i_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_48), (ATerm) ATmakeAppl(sym_Runtime_1, g_48)), i_48);
  return(t);
}
static ATerm y_48 (ATerm s_48, ATerm t)
{
  t = SSL_fclose(s_48);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL;
  w_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_48 = ATgetArgument(t, 0);
      {
        ATerm j_8 = t;
        int k_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_48);
            LocalPopChoice(k_8);
          }
        else
          {
            t = j_8;
            t = y_48(w_48, t);
          }
      }
    }
  else
    {
      t = y_48(w_48, t);
    }
  return(t);
}
static ATerm e_4 (ATerm s_22, ATerm t)
{
  t = SSL_read_term_from_stream(s_22);
  return(t);
}
static ATerm f_4 (ATerm o_36, ATerm p_36, ATerm t)
{
  t = SSL_strcat(o_36, p_36);
  return(t);
}
static ATerm g_4 (ATerm x_37, ATerm y_37, ATerm t)
{
  ATerm z_48 = NULL;
  t = SSL_fopen(x_37, y_37);
  z_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_48);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_49 = NULL;
  t = SSL_stdin_stream();
  a_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_49);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_49 = NULL;
  t = SSL_stdout_stream();
  b_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_49);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_49 = NULL;
  t = SSL_stderr_stream();
  g_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_49);
  return(t);
}
static ATerm n_50 (ATerm m_49, ATerm t)
{
  ATerm n_49 = NULL;
  t = SSL_explode_term(m_49);
  if(match_cons(t, sym__2))
    {
      ATerm m_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_8 = ATgetArgument(t, 1);
        if(((ATgetType(n_8) == AT_LIST) && !(ATisEmpty(n_8))))
          {
            n_49 = ATgetFirst((ATermList) n_8);
            {
              ATerm p_8 = (ATerm) ATgetNext((ATermList) n_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_49;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_49;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_49;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_49;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_50 (ATerm q_49, ATerm r_49, ATerm s_49, ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL,y_49 = NULL,r_11 = NULL;
  t = SSLgetAnnotations(s_49);
  v_49 = t;
  t = q_49;
  if(match_cons(t, sym_Path_1))
    {
      y_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_49, r_49);
  r_11 = t;
  t = SSLsetAnnotations(r_11, v_49);
  if(match_cons(t, sym__2))
    {
      t_49 = ATgetArgument(t, 0);
      u_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(t_49, u_49, t);
  return(t);
}
static ATerm p_50 (ATerm a_50, ATerm b_50, ATerm c_50, ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,i_50 = NULL,s_11 = NULL;
  t = SSLgetAnnotations(c_50);
  f_50 = t;
  t = SSL_is_string(a_50);
  i_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_50, b_50);
  s_11 = t;
  t = SSLsetAnnotations(s_11, f_50);
  if(match_cons(t, sym__2))
    {
      d_50 = ATgetArgument(t, 0);
      e_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(d_50, e_50, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL;
  k_50 = t;
  if(match_cons(t, sym__2))
    {
      l_50 = ATgetArgument(t, 0);
      m_50 = ATgetArgument(t, 1);
      {
        ATerm q_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_50(k_50, t);
            LocalPopChoice(u_8);
          }
        else
          {
            t = q_8;
            {
              ATerm v_8 = t;
              int w_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_50(l_50, m_50, k_50, t);
                  LocalPopChoice(w_8);
                }
              else
                {
                  t = v_8;
                  t = p_50(l_50, m_50, k_50, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_50(k_50, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL,y_50 = NULL;
  y_50 = t;
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_50, term_z_8);
        t = h_4(t);
        LocalPopChoice(y_8);
      }
    else
      {
        t = x_8;
        {
          ATerm k_67 = NULL,l_67 = NULL;
          t = term_a_9;
          l_67 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_9, y_50);
          t = f_4(l_67, y_50, t);
          k_67 = t;
          t = SSL_perror(k_67);
          _fail(t);
        }
      }
  }
  s_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_4(t_50, t);
  r_50 = t;
  t = s_50;
  t = fclose_0_0(t);
  t = r_50;
  return(t);
}
ATerm fetch_1_0 (ATerm g_89 (ATerm), ATerm t)
{
  static ATerm c_52 (ATerm t)
  {
    ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL;
    z_51 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_52 = ATgetFirst((ATermList) t);
        b_52 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_9 = t;
      int c_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_67 = NULL,v_67 = NULL,w_11 = NULL;
          t = SSLgetAnnotations(z_51);
          s_67 = t;
          t = a_52;
          t = g_89(t);
          v_67 = t;
          t = (ATerm) ATinsert(CheckATermList(b_52), v_67);
          w_11 = t;
          t = SSLsetAnnotations(w_11, s_67);
          LocalPopChoice(c_9);
        }
      else
        {
          t = b_9;
          {
            ATerm d_68 = NULL,g_68 = NULL,x_11 = NULL;
            t = SSLgetAnnotations(z_51);
            d_68 = t;
            t = b_52;
            t = c_52(t);
            g_68 = t;
            t = (ATerm) ATinsert(CheckATermList(g_68), a_52);
            x_11 = t;
            t = SSLsetAnnotations(x_11, d_68);
          }
        }
    }
    return(t);
  }
  t = c_52(t);
  return(t);
}
static ATerm m_4 (ATerm c_54, ATerm d_54, ATerm t)
{
  ATerm f_52 = NULL;
  t = lookup_table_0_1(c_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_4(d_54, f_52, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm f_104 (ATerm), ATerm t)
{
  ATerm m_52 = NULL;
  m_52 = t;
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL;
        t = term_f_9;
        p_52 = t;
        t = term_g_9;
        q_52 = t;
        t = term_h_9;
        t = m_4(p_52, q_52, t);
        o_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_52, term_i_9);
        t = geq_0_0(t);
        t = m_52;
        t = f_104(t);
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        t = m_52;
      }
  }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm t_52 = NULL;
  t_52 = t;
  if(match_string(t, "-k"))
    {
      t = t_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_52;
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL;
  u_52 = t;
  t = SSL_string_to_int(u_52);
  v_52 = t;
  t = term_j_9;
  w_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_9, v_52);
  t = p_4(w_52, v_52, t);
  t = u_52;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_2, h_2, i_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm y_52 = NULL;
  y_52 = t;
  if(match_string(t, "-S"))
    {
      t = y_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_52;
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL;
  t = term_g_9;
  z_52 = t;
  t = term_l_9;
  a_53 = t;
  t = term_m_9;
  t = p_4(z_52, a_53, t);
  t = term_n_9;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_o_9;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL;
  b_53 = t;
  t = SSL_string_to_int(b_53);
  c_53 = t;
  t = term_g_9;
  d_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_9, c_53);
  t = p_4(d_53, c_53, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_53);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_q_9;
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
  ATerm e_53 = NULL,f_53 = NULL;
  t = term_r_9;
  e_53 = t;
  t = term_l_6;
  f_53 = t;
  t = term_s_9;
  t = p_4(e_53, f_53, t);
  t = term_v_9;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_w_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_2, l_2, m_2, t);
      LocalPopChoice(y_9);
    }
  else
    {
      t = x_9;
      {
        ATerm z_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_2, s_2, t_2, t);
            LocalPopChoice(a_10);
          }
        else
          {
            t = z_9;
            t = Option_3_0(u_2, v_2, w_2, t);
          }
      }
    }
  return(t);
}
static ATerm p_4 (ATerm o_47, ATerm p_47, ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL;
  t = term_f_9;
  g_53 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_9, o_47, p_47);
  t = lookup_table_0_1(g_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(o_47, p_47, h_53, t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_9, o_47, p_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL;
      t = term_l_6;
      t = e_0(t);
      n_53 = t;
      t = term_b_10;
      o_53 = t;
      t = term_c_10;
      p_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_10, term_c_10, n_53);
      t = n_4(o_53, p_53, n_53, t);
      _fail(t);
    }
  else
    {
      ATerm s_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_53 = ATgetFirst((ATermList) t);
          m_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_53;
      t = c_0(t);
      t = term_l_6;
      t = d_0(t);
      s_53 = t;
      t = (ATerm) ATinsert(CheckATermList(m_53), s_53);
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm u_53 = NULL;
  u_53 = t;
  if(match_string(t, "-o"))
    {
      t = u_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_53;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL;
  z_53 = t;
  t = term_d_10;
  a_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_10, z_53);
  t = p_4(a_54, z_53, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_53);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_e_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_2, y_2, a_3, t);
  return(t);
}
static ATerm n_4 (ATerm j_52, ATerm k_52, ATerm i_52, ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
  e_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_52, k_52);
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_10 = ATgetArgument(t, 0);
            ATerm i_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_52, k_52);
        t = m_4(j_52, k_52, t);
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
        t = (ATerm) ATempty;
      }
  }
  f_54 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_52, k_52, (ATerm) ATinsert(CheckATermList(f_54), i_52));
  t = lookup_table_0_1(j_52, t);
  i_54 = t;
  t = (ATerm) ATinsert(CheckATermList(f_54), i_52);
  g_54 = t;
  t = i_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(k_52, g_54, h_54, t);
  t = e_54;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL;
      t = term_l_6;
      t = n_0(t);
      t_54 = t;
      t = term_b_10;
      u_54 = t;
      t = term_c_10;
      v_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_10, term_c_10, t_54);
      t = n_4(u_54, v_54, t_54, t);
      _fail(t);
    }
  else
    {
      ATerm z_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_54 = ATgetFirst((ATermList) t);
          q_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_54;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_54 = ATgetFirst((ATermList) t);
          s_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_54;
      t = k_0(t);
      t = r_54;
      t = l_0(t);
      z_54 = t;
      t = (ATerm) ATinsert(CheckATermList(s_54), z_54);
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm b_55 = NULL;
  b_55 = t;
  if(match_string(t, "-i"))
    {
      t = b_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_55;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL;
  c_55 = t;
  t = term_j_10;
  d_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, c_55);
  t = p_4(d_55, c_55, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_55);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_3, i_3, j_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_6;
  t = whoami_0_0(t);
  e_55 = t;
  t = term_r_6;
  g_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_10), e_55);
  h_55 = t;
  t = SSL_printnl(g_55, h_55);
  t = term_v_6;
  f_55 = t;
  t = SSL_exit(f_55);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL;
  t = term_f_9;
  i_55 = t;
  t = term_x_10;
  j_55 = t;
  t = term_y_10;
  t = m_4(i_55, j_55, t);
  return(t);
}
static ATerm i_4 (ATerm r_40, ATerm s_40, ATerm t)
{
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_40, s_40);
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      t = SSL_addr(r_40, s_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_95 (ATerm), ATerm o_95 (ATerm), ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL;
  l_55 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_55;
      t = n_95(t);
    }
  else
    {
      ATerm x_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_55 = ATgetFirst((ATermList) t);
          n_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_55;
      t = foldr_2_0(n_95, o_95, t);
      x_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_55, x_55);
      t = o_95(t);
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
  t = term_l_9;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm p_68 = NULL,q_68 = NULL;
  if(match_cons(t, sym__2))
    {
      p_68 = ATgetArgument(t, 0);
      q_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(p_68, q_68, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_56 = NULL,l_68 = NULL,m_68 = NULL;
  t = times_0_0(t);
  m_68 = t;
  t = SSL_explode_term(m_68);
  if(match_cons(t, sym__2))
    {
      ATerm b_11 = ATgetArgument(t, 0);
      l_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_68;
  t = foldr_2_0(k_3, l_3, t);
  d_56 = t;
  t = SSL_TicksToSeconds(d_56);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL;
  o_56 = t;
  if(match_cons(t, sym__2))
    {
      p_56 = ATgetArgument(t, 0);
      q_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_56;
        if((p_56 != t))
          {
            _fail(t);
          }
        t = o_56;
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
        {
          ATerm e_11 = t;
          int f_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_56, q_56);
              LocalPopChoice(f_11);
            }
          else
            {
              t = e_11;
              t = SSL_gtr(p_56, q_56);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_104 (ATerm), ATerm t)
{
  ATerm u_56 = NULL;
  u_56 = t;
  {
    ATerm g_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
        t = term_f_9;
        x_56 = t;
        t = term_g_9;
        y_56 = t;
        t = term_h_9;
        t = m_4(x_56, y_56, t);
        w_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_56, term_v_6);
        t = geq_0_0(t);
        t = u_56;
        t = e_104(t);
        LocalPopChoice(i_11);
      }
    else
      {
        t = g_11;
        t = u_56;
      }
  }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL,d_57 = NULL,e_57 = NULL;
  t = run_time_0_0(t);
  a_57 = t;
  t = term_l_6;
  t = whoami_0_0(t);
  b_57 = t;
  t = term_r_6;
  d_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_11), a_57), term_n_11), b_57);
  e_57 = t;
  t = SSL_printnl(d_57, e_57);
  t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_11), a_57), term_n_11), b_57));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_9;
  f_57 = t;
  t = SSL_exit(f_57);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL;
  q_57 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_57;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_57 = ATgetArgument(t, 0);
          {
            ATerm c_69 = NULL,a_12 = NULL;
            t = SSLgetAnnotations(q_57);
            c_69 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_57);
            a_12 = t;
            t = SSLsetAnnotations(a_12, c_69);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_57;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_106 (ATerm), ATerm t)
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_57 = NULL,j_57 = NULL;
      t = term_f_9;
      i_57 = t;
      t = term_t_11;
      j_57 = t;
      t = term_u_11;
      t = m_4(i_57, j_57, t);
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      t = fetch_1_0(q_3, t);
    }
  t = u_106(t);
  return(t);
}
static ATerm q_4 (ATerm q_55, ATerm r_55, ATerm s_55, ATerm t)
{
  ATerm s_57 = NULL;
  t = SSL_hashtable_put(s_55, q_55, r_55);
  s_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_57);
  return(t);
}
static ATerm r_4 (ATerm t_55, ATerm u_55, ATerm t)
{
  t = SSL_hashtable_get(u_55, t_55);
  return(t);
}
ATerm lookup_table_0_1 (ATerm v_53, ATerm t)
{
  ATerm b_58 = NULL;
  t = table_hashtable_0_0(t);
  b_58 = t;
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_69 = NULL;
        t = b_58;
        if(match_cons(t, sym_Hashtable_1))
          {
            i_69 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_4(v_53, i_69, t);
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        {
          ATerm n_69 = NULL;
          t = v_53;
          t = table_create_0_0(t);
          t = b_58;
          if(match_cons(t, sym_Hashtable_1))
            {
              n_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_4(v_53, n_69, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm y_55, ATerm z_55, ATerm t)
{
  ATerm e_58 = NULL;
  t = SSL_hashtable_create(y_55, z_55);
  e_58 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_58);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL,j_58 = NULL,k_58 = NULL;
  f_58 = t;
  t = term_d_12;
  j_58 = t;
  t = term_e_12;
  k_58 = t;
  t = f_58;
  t = new_hashtable_0_2(j_58, k_58, t);
  g_58 = t;
  t = f_58;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(f_58, g_58, h_58, t);
  t = f_58;
  return(t);
}
static ATerm k_4 (ATerm v_55, ATerm w_55, ATerm t)
{
  ATerm l_58 = NULL;
  t = SSL_hashtable_remove(w_55, v_55);
  l_58 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_58);
  return(t);
}
static ATerm l_4 (ATerm a_56, ATerm t)
{
  ATerm m_58 = NULL;
  t = SSL_hashtable_destroy(a_56);
  m_58 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_58);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm n_58 = NULL;
  t = SSL_table_hashtable();
  n_58 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_58);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL;
  o_58 = t;
  t = table_hashtable_0_0(t);
  p_58 = t;
  t = lookup_table_0_1(o_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_4(r_58, t);
  t = p_58;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_4(o_58, q_58, t);
  t = o_58;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_58 = ATgetFirst((ATermList) t);
      u_58 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_58 = NULL,z_58 = NULL;
        static ATerm r_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_58)), not_null(z_58));
          return(t);
        }
        t = u_58;
        t = i_0(t);
        if(((y_58 != NULL) && (y_58 != t)))
          _fail(t);
        else
          y_58 = t;
        t = t_58;
        t = g_0(t);
        if(((z_58 != NULL) && (z_58 != t)))
          _fail(t);
        else
          z_58 = t;
        t = u_58;
        t = reverse_acc_2_0(g_0, r_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_6;
      t = i_0(t);
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL,f_12 = NULL;
  h_59 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_59);
  f_59 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_59);
  f_12 = t;
  t = SSLsetAnnotations(f_12, f_59);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm j_59 = NULL;
  j_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_59), term_g_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL;
  ATerm i_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_59 = NULL,e_59 = NULL;
      t = term_f_9;
      d_59 = t;
      t = term_x_10;
      e_59 = t;
      t = term_y_10;
      t = m_4(d_59, e_59, t);
      LocalPopChoice(k_12);
    }
  else
    {
      t = i_12;
      t = fetch_1_0(t_3, t);
    }
  t = term_m_12;
  t = echo_0_0(t);
  t = term_b_10;
  b_59 = t;
  t = term_c_10;
  c_59 = t;
  t = term_s_12;
  t = m_4(b_59, c_59, t);
  t = reverse_acc_2_0(_id, u_3, t);
  t = map_1_0(y_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL;
  l_59 = t;
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_59;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_12 = ATgetFirst((ATermList) t);
                ATerm w_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_59;
          }
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
        t = (ATerm) ATinsert(ATempty, l_59);
      }
  }
  m_59 = t;
  t = term_w_7;
  n_59 = t;
  t = SSL_printnl(n_59, m_59);
  t = l_59;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_59 = NULL,s_59 = NULL;
  t = term_f_9;
  r_59 = t;
  t = term_x_10;
  s_59 = t;
  t = term_y_10;
  t = m_4(r_59, s_59, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL;
  t = term_x_12;
  t_59 = t;
  t = term_l_6;
  u_59 = t;
  t = term_y_12;
  t = p_4(t_59, u_59, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_z_12;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL;
  t = term_x_12;
  x_59 = t;
  t = term_l_6;
  y_59 = t;
  t = term_y_12;
  t = p_4(x_59, y_59, t);
  t = term_a_13;
  v_59 = t;
  t = term_l_6;
  w_59 = t;
  t = term_b_13;
  t = p_4(v_59, w_59, t);
  t = term_c_13;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_d_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_3, j_4, t_4, t);
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
      t = Option_3_0(u_4, v_4, w_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm t)
{
  ATerm z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL,h_12 = NULL;
  e_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_60 = ATgetFirst((ATermList) t);
      b_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_60);
  z_59 = t;
  t = a_60;
  t = m_67(t);
  c_60 = t;
  t = b_60;
  t = n_67(t);
  d_60 = t;
  t = (ATerm) ATinsert(CheckATermList(d_60), c_60);
  h_12 = t;
  t = SSLsetAnnotations(h_12, z_59);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_108 (ATerm), ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,o_60 = NULL,p_60 = NULL,j_12 = NULL;
  j_60 = t;
  {
    ATerm g_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_13;
        t = x_108(t);
        LocalPopChoice(i_13);
      }
    else
      {
        t = g_13;
      }
  }
  t = j_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_60 = ATgetFirst((ATermList) t);
      m_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_60);
  k_60 = t;
  t = term_x_10;
  p_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_10, l_60);
  t = p_4(p_60, l_60, t);
  t = m_60;
  {
    static ATerm z_60 (ATerm t)
    {
      ATerm k_13 = t;
      int l_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_13 = t;
          int n_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_60 = NULL;
              s_60 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_60;
              LocalPopChoice(n_13);
            }
          else
            {
              t = m_13;
              t = x_108(t);
              t = Cons_2_0(_id, z_60, t);
            }
          LocalPopChoice(l_13);
        }
      else
        {
          t = k_13;
          {
            ATerm v_60 = NULL,w_60 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_60 = ATgetFirst((ATermList) t);
                w_60 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_60), (ATerm) ATmakeAppl(sym_Undefined_1, v_60));
          }
        }
      return(t);
    }
    t = z_60(t);
  }
  o_60 = t;
  t = (ATerm) ATinsert(CheckATermList(o_60), (ATerm) ATmakeAppl(sym_Program_1, l_60));
  j_12 = t;
  t = SSLsetAnnotations(j_12, k_60);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm m_61 = NULL;
  m_61 = t;
  if(match_string(t, "--help"))
    {
      t = m_61;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_61;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_61;
        }
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL;
  t = term_t_11;
  n_61 = t;
  t = term_l_6;
  o_61 = t;
  t = term_o_13;
  t = p_4(n_61, o_61, t);
  t = term_p_13;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_q_13;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_108 (ATerm), ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL;
  g_61 = t;
  t = term_b_10;
  h_61 = t;
  t = term_r_13;
  t = lookup_table_0_1(h_61, t);
  l_61 = t;
  t = term_c_10;
  i_61 = t;
  t = (ATerm) ATempty;
  j_61 = t;
  t = l_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(i_61, j_61, k_61, t);
  t = g_61;
  {
    static ATerm x_4 (ATerm t)
    {
      ATerm s_13 = t;
      int u_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_108(t);
          LocalPopChoice(u_13);
        }
      else
        {
          t = s_13;
          {
            ATerm v_13 = t;
            int w_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_4, z_4, a_5, t);
                LocalPopChoice(w_13);
              }
            else
              {
                t = v_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_4, t);
  }
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_61 = NULL;
        z_61 = t;
        {
          ATerm a_14 = t;
          int c_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_69 = NULL;
              t = z_61;
              {
                ATerm d_14 = t;
                int g_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_69 = NULL,t_69 = NULL;
                    t = term_f_9;
                    s_69 = t;
                    t = term_t_11;
                    t_69 = t;
                    t = term_u_11;
                    t = m_4(s_69, t_69, t);
                    LocalPopChoice(g_14);
                  }
                else
                  {
                    t = d_14;
                    t = fetch_1_0(c_5, t);
                  }
              }
              t = z_61;
              t = default_system_usage_0_0(t);
              t = term_l_9;
              r_69 = t;
              t = SSL_exit(r_69);
              LocalPopChoice(c_14);
            }
          else
            {
              t = a_14;
              {
                ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL;
                t = term_f_9;
                y_69 = t;
                t = term_x_12;
                z_69 = t;
                t = term_h_14;
                t = m_4(y_69, z_69, t);
                t = z_61;
                t = default_system_about_0_0(t);
                t = term_l_9;
                x_69 = t;
                t = SSL_exit(x_69);
              }
            }
        }
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        {
          ATerm i_14 = t;
          int j_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL;
              static ATerm d_5 (ATerm t)
              {
                ATerm d_62 = NULL,e_62 = NULL,f_62 = NULL,l_12 = NULL;
                f_62 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_62 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_62);
                d_62 = t;
                t = e_62;
                if(((e_61 != NULL) && (e_61 != t)))
                  _fail(t);
                else
                  e_61 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_62);
                l_12 = t;
                t = SSLsetAnnotations(l_12, d_62);
                return(t);
              }
              t = fetch_1_0(d_5, t);
              t = term_r_6;
              b_62 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_61)), term_k_14);
              c_62 = t;
              t = SSL_printnl(b_62, c_62);
              t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_61)), term_k_14));
              t = default_system_usage_0_0(t);
              t = term_v_6;
              a_62 = t;
              t = SSL_exit(a_62);
              LocalPopChoice(j_14);
            }
          else
            {
              t = i_14;
            }
        }
      }
  }
  f_61 = t;
  t = term_b_10;
  t = table_destroy_0_0(t);
  t = f_61;
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm t)
{
  ATerm k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL;
  t = parse_options_1_0(w_106, t);
  k_62 = t;
  t = term_l_14;
  t = table_create_0_0(t);
  t = term_l_14;
  l_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_14, term_o_14, k_62);
  t = lookup_table_0_1(l_62, t);
  o_62 = t;
  t = term_o_14;
  m_62 = t;
  t = o_62;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(m_62, k_62, n_62, t);
  t = k_62;
  t = y_106(t);
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_106, t);
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        {
          ATerm r_14 = t;
          int s_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_106(t);
              t = report_success_0_0(t);
              LocalPopChoice(s_14);
            }
          else
            {
              t = r_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = if_verbose2_1_0(n_5, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL;
  t = term_t_14;
  p_62 = t;
  t = term_l_6;
  q_62 = t;
  t = term_u_14;
  t = p_4(p_62, q_62, t);
  t = term_v_14;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_w_14;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL;
  r_62 = t;
  t = term_f_9;
  v_62 = t;
  t = term_x_10;
  w_62 = t;
  t = term_y_10;
  t = m_4(v_62, w_62, t);
  s_62 = t;
  t = term_r_6;
  t_62 = t;
  t = (ATerm) ATinsert(ATempty, s_62);
  u_62 = t;
  t = SSL_printnl(t_62, u_62);
  t = r_62;
  return(t);
}
ATerm iowrap_3_0 (ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm t)
{
  static ATerm e_5 (ATerm t)
  {
    ATerm x_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_106(t);
        LocalPopChoice(z_14);
      }
    else
      {
        t = x_14;
        {
          ATerm b_15 = t;
          int c_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(c_15);
            }
          else
            {
              t = b_15;
              {
                ATerm d_15 = t;
                int e_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(e_15);
                  }
                else
                  {
                    t = d_15;
                    {
                      ATerm f_15 = t;
                      int h_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(j_5, k_5, m_5, t);
                          LocalPopChoice(h_15);
                        }
                      else
                        {
                          t = f_15;
                          {
                            ATerm j_15 = t;
                            int k_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(k_15);
                              }
                            else
                              {
                                t = j_15;
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
  static ATerm i_5 (ATerm t)
  {
    ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL;
    y_62 = t;
    {
      ATerm l_15 = t;
      int m_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm p_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((x_62 != NULL) && (x_62 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(p_5, t);
          LocalPopChoice(m_15);
        }
      else
        {
          t = l_15;
          t = term_n_15;
          x_62 = t;
        }
    }
    t = not_null(x_62);
    t = ReadFromFile_0_0(t);
    z_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_62, z_62);
    t = apply_strategy_1_0(f_106, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(e_5, h_106, g_5, i_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL,r_12 = NULL;
  g_63 = t;
  if(match_cons(t, sym__2))
    {
      d_63 = ATgetArgument(t, 0);
      e_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_63);
  c_63 = t;
  t = e_63;
  {
    ATerm o_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_63 = NULL,c_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL,q_12 = NULL,p_12 = NULL,o_12 = NULL,n_12 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            x_63 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_63);
        c_70 = t;
        t = x_63;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_70 = ATgetFirst((ATermList) t);
            g_70 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_63);
        e_70 = t;
        t = g_70;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_70 = ATgetFirst((ATermList) t);
            k_70 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_70);
        i_70 = t;
        t = j_70;
        if(match_cons(t, sym_Strategies_1))
          {
            n_70 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_70);
        m_70 = t;
        t = n_70;
        t = map_1_0(strategy_definition_0_0, t);
        o_70 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, o_70);
        n_12 = t;
        t = SSLsetAnnotations(n_12, m_70);
        p_70 = t;
        t = k_70;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(k_70), p_70);
        o_12 = t;
        t = SSLsetAnnotations(o_12, i_70);
        l_70 = t;
        t = (ATerm) ATinsert(CheckATermList(l_70), f_70);
        p_12 = t;
        t = SSLsetAnnotations(p_12, e_70);
        h_70 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, h_70);
        q_12 = t;
        t = SSLsetAnnotations(q_12, c_70);
        LocalPopChoice(q_15);
      }
    else
      {
        t = o_15;
        t = debug_1_0(q_6, t);
      }
  }
  f_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_63, f_63);
  r_12 = t;
  t = SSLsetAnnotations(r_12, c_63);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_r_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(s_5, _fail, default_usage_0_0, t);
  return(t);
}

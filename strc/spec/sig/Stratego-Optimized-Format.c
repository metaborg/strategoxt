#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_SortVar_1;
Symbol sym_Sort_2;
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
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
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
static void init_module_constructors (void)
{
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_SortVar_1 = ATmakeSymbol("SortVar", 1, ATfalse);
  ATprotectSymbol(sym_SortVar_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
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
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
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
}
ATerm term_p_14;
ATerm term_k_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_m_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_t_11;
ATerm term_p_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_f_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_f_8;
ATerm term_d_8;
ATerm term_m_7;
ATerm term_j_7;
ATerm term_e_7;
ATerm term_b_7;
ATerm term_x_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_y_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_q_8);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_c_9);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_9);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_y_5);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_l_10);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_i_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym__2, term_u_9, term_w_9);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, term_y_11, term_y_5);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__2, term_c_12, term_y_5);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__2, term_i_11, term_y_5);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_y_11);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, term_t_13, term_y_5);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm debug_1_0 (ATerm z_86 (ATerm), ATerm t);
ATerm type_expression_0_0 (ATerm t);
static ATerm o_0 (ATerm t);
ATerm build_term_expression_0_0 (ATerm t);
static ATerm p_0 (ATerm t);
ATerm match_term_expression_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm strategy_expression_0_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm strategy_definition_0_0 (ATerm t);
ATerm map_1_0 (ATerm k_87 (ATerm), ATerm t);
static ATerm o_3 (ATerm t_37, ATerm u_37, ATerm t);
static ATerm p_3 (ATerm o_22, ATerm p_22, ATerm t);
static ATerm r_3 (ATerm b_87 (ATerm), ATerm j_141, ATerm u_22, ATerm t);
static ATerm q_3 (ATerm k_22, ATerm l_22, ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm k_104 (ATerm), ATerm t);
static ATerm f_44 (ATerm z_43, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_3 (ATerm q_22, ATerm t);
static ATerm t_3 (ATerm m_36, ATerm n_36, ATerm t);
static ATerm u_3 (ATerm v_37, ATerm w_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm q_45 (ATerm p_44, ATerm t);
static ATerm r_45 (ATerm t_44, ATerm u_44, ATerm v_44, ATerm t);
static ATerm s_45 (ATerm d_45, ATerm e_45, ATerm f_45, ATerm t);
static ATerm v_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_87 (ATerm), ATerm t);
static ATerm y_3 (ATerm y_53, ATerm z_53, ATerm t);
ATerm if_verbose2_1_0 (ATerm t_102 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_4 (ATerm m_47, ATerm n_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_3 (ATerm h_52, ATerm i_52, ATerm g_52, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_3 (ATerm p_40, ATerm q_40, ATerm t);
ATerm foldr_2_0 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm s_102 (ATerm), ATerm t);
static ATerm m_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm need_help_1_0 (ATerm i_105 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_66 (ATerm), ATerm s_66 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_107 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm parse_options_1_0 (ATerm k_107 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm iowrap_3_0 (ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,v_0 = NULL,i_1 = NULL,l_1 = NULL;
  a_0 = t;
  t = term_y_5;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_a_6;
  i_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_6), b_0), term_b_6);
  l_1 = t;
  t = SSL_printnl(i_1, l_1);
  t = term_d_6;
  v_0 = t;
  t = SSL_exit(v_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm z_86 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,q_1 = NULL,r_1 = NULL;
  n_1 = t;
  t = z_86(t);
  o_1 = t;
  t = term_a_6;
  q_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_1), o_1);
  r_1 = t;
  t = SSL_printnl(q_1, r_1);
  t = n_1;
  return(t);
}
ATerm type_expression_0_0 (ATerm t)
{
  ATerm o_4 = NULL,q_4 = NULL,s_4 = NULL;
  o_4 = t;
  if(match_cons(t, sym_ConstType_1))
    {
      q_4 = ATgetArgument(t, 0);
      {
        ATerm h_1 = NULL,k_1 = NULL,j_0 = NULL;
        t = SSLgetAnnotations(o_4);
        h_1 = t;
        t = q_4;
        {
          static ATerm z_2 (ATerm t)
          {
            ATerm s_2 = NULL,v_2 = NULL,y_2 = NULL;
            v_2 = t;
            if(match_cons(t, sym_Sort_2))
              {
                y_2 = ATgetArgument(t, 0);
                s_2 = ATgetArgument(t, 1);
                {
                  ATerm k_3 = NULL,f_4 = NULL,p_4 = NULL,f_0 = NULL;
                  t = SSLgetAnnotations(v_2);
                  k_3 = t;
                  t = SSL_is_string(y_2);
                  f_4 = t;
                  t = s_2;
                  t = map_1_0(z_2, t);
                  p_4 = t;
                  t = (ATerm) ATmakeAppl(sym_Sort_2, f_4, p_4);
                  f_0 = t;
                  t = SSLsetAnnotations(f_0, k_3);
                }
              }
            else
              {
                ATerm c_5 = NULL,f_5 = NULL,h_0 = NULL;
                if(match_cons(t, sym_SortVar_1))
                  {
                    y_2 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_2);
                c_5 = t;
                t = SSL_is_string(y_2);
                f_5 = t;
                t = (ATerm) ATmakeAppl(sym_SortVar_1, f_5);
                h_0 = t;
                t = SSLsetAnnotations(h_0, c_5);
              }
            return(t);
          }
          t = z_2(t);
        }
        k_1 = t;
        t = (ATerm) ATmakeAppl(sym_ConstType_1, k_1);
        j_0 = t;
        t = SSLsetAnnotations(j_0, h_1);
      }
    }
  else
    {
      ATerm m_5 = NULL,p_5 = NULL,q_5 = NULL,m_0 = NULL;
      if(match_cons(t, sym_FunType_2))
        {
          q_4 = ATgetArgument(t, 0);
          s_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_4);
      m_5 = t;
      t = q_4;
      t = map_1_0(type_expression_0_0, t);
      p_5 = t;
      t = s_4;
      t = type_expression_0_0(t);
      q_5 = t;
      t = (ATerm) ATmakeAppl(sym_FunType_2, p_5, q_5);
      m_0 = t;
      t = SSLsetAnnotations(m_0, m_5);
    }
  return(t);
}
static ATerm o_0 (ATerm t)
{
  t = term_e_6;
  return(t);
}
ATerm build_term_expression_0_0 (ATerm t)
{
  ATerm f_6 = t;
  int r_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
      w_8 = t;
      if(match_cons(t, sym_Var_1))
        {
          x_8 = ATgetArgument(t, 0);
          {
            ATerm x_5 = NULL,z_5 = NULL,s_0 = NULL;
            t = SSLgetAnnotations(w_8);
            x_5 = t;
            t = SSL_is_string(x_8);
            z_5 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, z_5);
            s_0 = t;
            t = SSLsetAnnotations(s_0, x_5);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              x_8 = ATgetArgument(t, 0);
              {
                ATerm w_6 = NULL,z_6 = NULL,t_0 = NULL;
                t = SSLgetAnnotations(w_8);
                w_6 = t;
                t = SSL_is_int(x_8);
                z_6 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, z_6);
                t_0 = t;
                t = SSLsetAnnotations(t_0, w_6);
              }
            }
          else
            {
              if(match_cons(t, sym_Real_1))
                {
                  x_8 = ATgetArgument(t, 0);
                  {
                    ATerm g_7 = NULL,i_7 = NULL,u_0 = NULL;
                    t = SSLgetAnnotations(w_8);
                    g_7 = t;
                    t = SSL_is_real(x_8);
                    i_7 = t;
                    t = (ATerm) ATmakeAppl(sym_Real_1, i_7);
                    u_0 = t;
                    t = SSLsetAnnotations(u_0, g_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      x_8 = ATgetArgument(t, 0);
                      {
                        ATerm s_7 = NULL,w_7 = NULL,w_0 = NULL;
                        t = SSLgetAnnotations(w_8);
                        s_7 = t;
                        t = SSL_is_string(x_8);
                        w_7 = t;
                        t = (ATerm) ATmakeAppl(sym_Str_1, w_7);
                        w_0 = t;
                        t = SSLsetAnnotations(w_0, s_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          x_8 = ATgetArgument(t, 0);
                          v_8 = ATgetArgument(t, 1);
                          {
                            ATerm g_8 = NULL,k_8 = NULL,f_9 = NULL,x_0 = NULL;
                            t = SSLgetAnnotations(w_8);
                            g_8 = t;
                            t = SSL_is_string(x_8);
                            k_8 = t;
                            t = v_8;
                            t = map_1_0(build_term_expression_0_0, t);
                            f_9 = t;
                            t = (ATerm) ATmakeAppl(sym_Op_2, k_8, f_9);
                            x_0 = t;
                            t = SSLsetAnnotations(x_0, g_8);
                          }
                        }
                      else
                        {
                          ATerm m_9 = NULL,o_9 = NULL,y_0 = NULL;
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              x_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(w_8);
                          m_9 = t;
                          t = x_8;
                          t = build_term_expression_0_0(t);
                          o_9 = t;
                          t = (ATerm) ATmakeAppl(sym_BuildDefault_1, o_9);
                          y_0 = t;
                          t = SSLsetAnnotations(y_0, m_9);
                        }
                    }
                }
            }
        }
      LocalPopChoice(r_6);
    }
  else
    {
      t = f_6;
      t = debug_1_0(o_0, t);
    }
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = term_e_6;
  return(t);
}
ATerm match_term_expression_0_0 (ATerm t)
{
  ATerm s_6 = t;
  int t_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_15 = NULL,d_15 = NULL,e_15 = NULL;
      a_15 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = a_15;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              d_15 = ATgetArgument(t, 0);
              {
                ATerm v_9 = NULL,x_9 = NULL,p_1 = NULL;
                t = SSLgetAnnotations(a_15);
                v_9 = t;
                t = SSL_is_string(d_15);
                x_9 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, x_9);
                p_1 = t;
                t = SSLsetAnnotations(p_1, v_9);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  d_15 = ATgetArgument(t, 0);
                  {
                    ATerm g_10 = NULL,j_10 = NULL,s_1 = NULL;
                    t = SSLgetAnnotations(a_15);
                    g_10 = t;
                    t = SSL_is_int(d_15);
                    j_10 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, j_10);
                    s_1 = t;
                    t = SSLsetAnnotations(s_1, g_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      d_15 = ATgetArgument(t, 0);
                      {
                        ATerm q_10 = NULL,s_10 = NULL,t_1 = NULL;
                        t = SSLgetAnnotations(a_15);
                        q_10 = t;
                        t = SSL_is_real(d_15);
                        s_10 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, s_10);
                        t_1 = t;
                        t = SSLsetAnnotations(t_1, q_10);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          d_15 = ATgetArgument(t, 0);
                          {
                            ATerm d_11 = NULL,f_11 = NULL,u_1 = NULL;
                            t = SSLgetAnnotations(a_15);
                            d_11 = t;
                            t = SSL_is_string(d_15);
                            f_11 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, f_11);
                            u_1 = t;
                            t = SSLsetAnnotations(u_1, d_11);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Op_2))
                            {
                              d_15 = ATgetArgument(t, 0);
                              e_15 = ATgetArgument(t, 1);
                              {
                                ATerm n_11 = NULL,q_11 = NULL,r_11 = NULL,v_1 = NULL;
                                t = SSLgetAnnotations(a_15);
                                n_11 = t;
                                t = SSL_is_string(d_15);
                                q_11 = t;
                                t = e_15;
                                t = map_1_0(match_term_expression_0_0, t);
                                r_11 = t;
                                t = (ATerm) ATmakeAppl(sym_Op_2, q_11, r_11);
                                v_1 = t;
                                t = SSLsetAnnotations(v_1, n_11);
                              }
                            }
                          else
                            {
                              ATerm b_12 = NULL,h_12 = NULL,i_12 = NULL,w_1 = NULL;
                              if(match_cons(t, sym_As_2))
                                {
                                  d_15 = ATgetArgument(t, 0);
                                  e_15 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(a_15);
                              b_12 = t;
                              t = d_15;
                              t = match_term_expression_0_0(t);
                              h_12 = t;
                              t = e_15;
                              t = match_term_expression_0_0(t);
                              i_12 = t;
                              t = (ATerm) ATmakeAppl(sym_As_2, h_12, i_12);
                              w_1 = t;
                              t = SSLsetAnnotations(w_1, b_12);
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(t_6);
    }
  else
    {
      t = s_6;
      t = debug_1_0(p_0, t);
    }
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm u_6 = t;
  int v_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_25 = NULL;
      v_25 = t;
      t = SSL_is_string(v_25);
      LocalPopChoice(v_6);
    }
  else
    {
      t = u_6;
      t = map_1_0(r_0, t);
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  t = SSL_is_int(g_26);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,c_3 = NULL;
  c_27 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      t_26 = ATgetArgument(t, 0);
      u_26 = ATgetArgument(t, 1);
      v_26 = ATgetArgument(t, 2);
      x_26 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_27);
  s_26 = t;
  t = SSL_is_string(t_26);
  y_26 = t;
  t = u_26;
  t = map_1_0(a_1, t);
  z_26 = t;
  t = v_26;
  t = map_1_0(b_1, t);
  a_27 = t;
  t = x_26;
  t = strategy_expression_0_0(t);
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, y_26, z_26, a_27, b_27);
  c_3 = t;
  t = SSLsetAnnotations(c_3, s_26);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,i_27 = NULL,j_27 = NULL,a_3 = NULL;
  j_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_27 = ATgetArgument(t, 0);
      f_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_27);
  d_27 = t;
  t = SSL_is_string(e_27);
  g_27 = t;
  t = f_27;
  t = type_expression_0_0(t);
  i_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_27, i_27);
  a_3 = t;
  t = SSLsetAnnotations(a_3, d_27);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,p_27 = NULL,q_27 = NULL,b_3 = NULL;
  q_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      l_27 = ATgetArgument(t, 0);
      m_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_27);
  k_27 = t;
  t = SSL_is_string(l_27);
  n_27 = t;
  t = m_27;
  t = type_expression_0_0(t);
  p_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_27, p_27);
  b_3 = t;
  t = SSLsetAnnotations(b_3, k_27);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_x_6;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm y_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL;
      q_34 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = q_34;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = q_34;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  r_34 = ATgetArgument(t, 0);
                  {
                    ATerm w_12 = NULL,z_12 = NULL,d_2 = NULL;
                    t = SSLgetAnnotations(q_34);
                    w_12 = t;
                    t = r_34;
                    t = strategy_expression_0_0(t);
                    z_12 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, z_12);
                    d_2 = t;
                    t = SSLsetAnnotations(d_2, w_12);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      r_34 = ATgetArgument(t, 0);
                      s_34 = ATgetArgument(t, 1);
                      {
                        ATerm k_13 = NULL,q_13 = NULL,r_13 = NULL,e_2 = NULL;
                        t = SSLgetAnnotations(q_34);
                        k_13 = t;
                        t = r_34;
                        t = strategy_expression_0_0(t);
                        q_13 = t;
                        t = s_34;
                        t = strategy_expression_0_0(t);
                        r_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, q_13, r_13);
                        e_2 = t;
                        t = SSLsetAnnotations(e_2, k_13);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Choice_2))
                        {
                          r_34 = ATgetArgument(t, 0);
                          s_34 = ATgetArgument(t, 1);
                          {
                            ATerm g_14 = NULL,l_14 = NULL,m_14 = NULL,f_2 = NULL;
                            t = SSLgetAnnotations(q_34);
                            g_14 = t;
                            t = r_34;
                            t = strategy_expression_0_0(t);
                            l_14 = t;
                            t = s_34;
                            t = strategy_expression_0_0(t);
                            m_14 = t;
                            t = (ATerm) ATmakeAppl(sym_Choice_2, l_14, m_14);
                            f_2 = t;
                            t = SSLsetAnnotations(f_2, g_14);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LChoice_2))
                            {
                              r_34 = ATgetArgument(t, 0);
                              s_34 = ATgetArgument(t, 1);
                              {
                                ATerm b_15 = NULL,h_15 = NULL,k_15 = NULL,g_2 = NULL;
                                t = SSLgetAnnotations(q_34);
                                b_15 = t;
                                t = r_34;
                                t = strategy_expression_0_0(t);
                                h_15 = t;
                                t = s_34;
                                t = strategy_expression_0_0(t);
                                k_15 = t;
                                t = (ATerm) ATmakeAppl(sym_LChoice_2, h_15, k_15);
                                g_2 = t;
                                t = SSLsetAnnotations(g_2, b_15);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GuardedLChoice_3))
                                {
                                  r_34 = ATgetArgument(t, 0);
                                  s_34 = ATgetArgument(t, 1);
                                  p_34 = ATgetArgument(t, 2);
                                  {
                                    ATerm x_15 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,h_2 = NULL;
                                    t = SSLgetAnnotations(q_34);
                                    x_15 = t;
                                    t = r_34;
                                    t = strategy_expression_0_0(t);
                                    b_16 = t;
                                    t = s_34;
                                    t = strategy_expression_0_0(t);
                                    c_16 = t;
                                    t = p_34;
                                    t = strategy_expression_0_0(t);
                                    d_16 = t;
                                    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, b_16, c_16, d_16);
                                    h_2 = t;
                                    t = SSLsetAnnotations(h_2, x_15);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GChoice_2))
                                    {
                                      r_34 = ATgetArgument(t, 0);
                                      s_34 = ATgetArgument(t, 1);
                                      {
                                        ATerm m_16 = NULL,p_16 = NULL,q_16 = NULL,i_2 = NULL;
                                        t = SSLgetAnnotations(q_34);
                                        m_16 = t;
                                        t = r_34;
                                        t = strategy_expression_0_0(t);
                                        p_16 = t;
                                        t = s_34;
                                        t = strategy_expression_0_0(t);
                                        q_16 = t;
                                        t = (ATerm) ATmakeAppl(sym_GChoice_2, p_16, q_16);
                                        i_2 = t;
                                        t = SSLsetAnnotations(i_2, m_16);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LGChoice_2))
                                        {
                                          r_34 = ATgetArgument(t, 0);
                                          s_34 = ATgetArgument(t, 1);
                                          {
                                            ATerm y_16 = NULL,b_17 = NULL,c_17 = NULL,j_2 = NULL;
                                            t = SSLgetAnnotations(q_34);
                                            y_16 = t;
                                            t = r_34;
                                            t = strategy_expression_0_0(t);
                                            b_17 = t;
                                            t = s_34;
                                            t = strategy_expression_0_0(t);
                                            c_17 = t;
                                            t = (ATerm) ATmakeAppl(sym_LGChoice_2, b_17, c_17);
                                            j_2 = t;
                                            t = SSLsetAnnotations(j_2, y_16);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              r_34 = ATgetArgument(t, 0);
                                              s_34 = ATgetArgument(t, 1);
                                              p_34 = ATgetArgument(t, 2);
                                              {
                                                ATerm l_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,l_2 = NULL,k_2 = NULL;
                                                t = SSLgetAnnotations(q_34);
                                                l_17 = t;
                                                t = r_34;
                                                if(match_cons(t, sym_SVar_1))
                                                  {
                                                    s_17 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(r_34);
                                                r_17 = t;
                                                t = SSL_is_string(s_17);
                                                t_17 = t;
                                                t = (ATerm) ATmakeAppl(sym_SVar_1, t_17);
                                                k_2 = t;
                                                t = SSLsetAnnotations(k_2, r_17);
                                                u_17 = t;
                                                t = s_34;
                                                t = map_1_0(strategy_expression_0_0, t);
                                                p_17 = t;
                                                t = p_34;
                                                t = map_1_0(build_term_expression_0_0, t);
                                                q_17 = t;
                                                t = (ATerm) ATmakeAppl(sym_CallT_3, u_17, p_17, q_17);
                                                l_2 = t;
                                                t = SSLsetAnnotations(l_2, l_17);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_PrimT_3))
                                                {
                                                  r_34 = ATgetArgument(t, 0);
                                                  s_34 = ATgetArgument(t, 1);
                                                  p_34 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm h_18 = NULL,t_18 = NULL,u_18 = NULL,w_18 = NULL,m_2 = NULL;
                                                    t = SSLgetAnnotations(q_34);
                                                    h_18 = t;
                                                    t = SSL_is_string(r_34);
                                                    t_18 = t;
                                                    t = s_34;
                                                    t = map_1_0(strategy_expression_0_0, t);
                                                    u_18 = t;
                                                    t = p_34;
                                                    t = map_1_0(build_term_expression_0_0, t);
                                                    w_18 = t;
                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, t_18, u_18, w_18);
                                                    m_2 = t;
                                                    t = SSLsetAnnotations(m_2, h_18);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      r_34 = ATgetArgument(t, 0);
                                                      s_34 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm n_19 = NULL,q_19 = NULL,t_19 = NULL,n_2 = NULL;
                                                        t = SSLgetAnnotations(q_34);
                                                        n_19 = t;
                                                        t = SSL_is_string(r_34);
                                                        q_19 = t;
                                                        t = s_34;
                                                        t = strategy_expression_0_0(t);
                                                        t_19 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, q_19, t_19);
                                                        n_2 = t;
                                                        t = SSLsetAnnotations(n_2, n_19);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          r_34 = ATgetArgument(t, 0);
                                                          s_34 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm g_20 = NULL,k_20 = NULL,l_20 = NULL,o_2 = NULL;
                                                            t = SSLgetAnnotations(q_34);
                                                            g_20 = t;
                                                            t = SSL_is_int(r_34);
                                                            k_20 = t;
                                                            t = s_34;
                                                            t = strategy_expression_0_0(t);
                                                            l_20 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, k_20, l_20);
                                                            o_2 = t;
                                                            t = SSLsetAnnotations(o_2, g_20);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_One_1))
                                                            {
                                                              r_34 = ATgetArgument(t, 0);
                                                              {
                                                                ATerm w_20 = NULL,y_20 = NULL,p_2 = NULL;
                                                                t = SSLgetAnnotations(q_34);
                                                                w_20 = t;
                                                                t = r_34;
                                                                t = strategy_expression_0_0(t);
                                                                y_20 = t;
                                                                t = (ATerm) ATmakeAppl(sym_One_1, y_20);
                                                                p_2 = t;
                                                                t = SSLsetAnnotations(p_2, w_20);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Some_1))
                                                                {
                                                                  r_34 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm f_21 = NULL,j_21 = NULL,q_2 = NULL;
                                                                    t = SSLgetAnnotations(q_34);
                                                                    f_21 = t;
                                                                    t = r_34;
                                                                    t = strategy_expression_0_0(t);
                                                                    j_21 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Some_1, j_21);
                                                                    q_2 = t;
                                                                    t = SSLsetAnnotations(q_2, f_21);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_All_1))
                                                                    {
                                                                      r_34 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm w_21 = NULL,c_22 = NULL,r_2 = NULL;
                                                                        t = SSLgetAnnotations(q_34);
                                                                        w_21 = t;
                                                                        t = r_34;
                                                                        t = strategy_expression_0_0(t);
                                                                        c_22 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_All_1, c_22);
                                                                        r_2 = t;
                                                                        t = SSLsetAnnotations(r_2, w_21);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Thread_1))
                                                                        {
                                                                          r_34 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm j_22 = NULL,n_22 = NULL,t_2 = NULL;
                                                                            t = SSLgetAnnotations(q_34);
                                                                            j_22 = t;
                                                                            t = r_34;
                                                                            t = strategy_expression_0_0(t);
                                                                            n_22 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_Thread_1, n_22);
                                                                            t_2 = t;
                                                                            t = SSLsetAnnotations(t_2, j_22);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Match_1))
                                                                            {
                                                                              r_34 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm y_22 = NULL,a_23 = NULL,u_2 = NULL;
                                                                                t = SSLgetAnnotations(q_34);
                                                                                y_22 = t;
                                                                                t = r_34;
                                                                                t = match_term_expression_0_0(t);
                                                                                a_23 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, a_23);
                                                                                u_2 = t;
                                                                                t = SSLsetAnnotations(u_2, y_22);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Build_1))
                                                                                {
                                                                                  r_34 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm h_23 = NULL,j_23 = NULL,w_2 = NULL;
                                                                                    t = SSLgetAnnotations(q_34);
                                                                                    h_23 = t;
                                                                                    t = r_34;
                                                                                    t = build_term_expression_0_0(t);
                                                                                    j_23 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, j_23);
                                                                                    w_2 = t;
                                                                                    t = SSLsetAnnotations(w_2, h_23);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Scope_2))
                                                                                    {
                                                                                      r_34 = ATgetArgument(t, 0);
                                                                                      s_34 = ATgetArgument(t, 1);
                                                                                      {
                                                                                        ATerm r_23 = NULL,u_23 = NULL,x_23 = NULL,x_2 = NULL;
                                                                                        t = SSLgetAnnotations(q_34);
                                                                                        r_23 = t;
                                                                                        t = r_34;
                                                                                        t = map_1_0(q_0, t);
                                                                                        u_23 = t;
                                                                                        t = s_34;
                                                                                        t = strategy_expression_0_0(t);
                                                                                        x_23 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, u_23, x_23);
                                                                                        x_2 = t;
                                                                                        t = SSLsetAnnotations(x_2, r_23);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      ATerm l_26 = NULL,o_26 = NULL,q_26 = NULL,d_3 = NULL;
                                                                                      if(match_cons(t, sym_Let_2))
                                                                                        {
                                                                                          r_34 = ATgetArgument(t, 0);
                                                                                          s_34 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = SSLgetAnnotations(q_34);
                                                                                      l_26 = t;
                                                                                      t = r_34;
                                                                                      t = map_1_0(z_0, t);
                                                                                      o_26 = t;
                                                                                      t = s_34;
                                                                                      t = strategy_expression_0_0(t);
                                                                                      q_26 = t;
                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, o_26, q_26);
                                                                                      d_3 = t;
                                                                                      t = SSLsetAnnotations(d_3, l_26);
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
      LocalPopChoice(a_7);
    }
  else
    {
      t = y_6;
      t = debug_1_0(c_1, t);
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,o_28 = NULL,g_6 = NULL;
  o_28 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      j_28 = ATgetArgument(t, 0);
      k_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_28);
  i_28 = t;
  t = SSL_is_string(j_28);
  l_28 = t;
  t = k_28;
  t = type_expression_0_0(t);
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, l_28, m_28);
  g_6 = t;
  t = SSLsetAnnotations(g_6, i_28);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,i_6 = NULL;
  o_30 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      h_30 = ATgetArgument(t, 0);
      l_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_30);
  g_30 = t;
  t = SSL_is_string(h_30);
  m_30 = t;
  t = l_30;
  t = type_expression_0_0(t);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_30, n_30);
  i_6 = t;
  t = SSLsetAnnotations(i_6, g_30);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,w_30 = NULL,y_30 = NULL,z_30 = NULL,j_6 = NULL;
  z_30 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      t_30 = ATgetArgument(t, 0);
      u_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_30);
  s_30 = t;
  t = SSL_is_string(t_30);
  w_30 = t;
  t = u_30;
  t = type_expression_0_0(t);
  y_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, w_30, y_30);
  j_6 = t;
  t = SSLsetAnnotations(j_6, s_30);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm q_32 = NULL,s_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,y_32 = NULL,l_6 = NULL;
  y_32 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      s_32 = ATgetArgument(t, 0);
      u_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_32);
  q_32 = t;
  t = SSL_is_string(s_32);
  v_32 = t;
  t = u_32;
  t = type_expression_0_0(t);
  w_32 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, v_32, w_32);
  l_6 = t;
  t = SSLsetAnnotations(l_6, q_32);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm z_32 = NULL,i_33 = NULL,j_33 = NULL,l_33 = NULL,s_33 = NULL,t_33 = NULL,m_6 = NULL;
  t_33 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_33 = ATgetArgument(t, 0);
      j_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_33);
  z_32 = t;
  t = SSL_is_string(i_33);
  l_33 = t;
  t = j_33;
  t = type_expression_0_0(t);
  s_33 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, l_33, s_33);
  m_6 = t;
  t = SSLsetAnnotations(m_6, z_32);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm d_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL,m_35 = NULL,o_6 = NULL;
  m_35 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      f_35 = ATgetArgument(t, 0);
      g_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_35);
  d_35 = t;
  t = SSL_is_string(f_35);
  h_35 = t;
  t = g_35;
  t = type_expression_0_0(t);
  i_35 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_35, i_35);
  o_6 = t;
  t = SSLsetAnnotations(o_6, d_35);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,p_6 = NULL;
  v_35 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      o_35 = ATgetArgument(t, 0);
      p_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_35);
  n_35 = t;
  t = SSL_is_string(o_35);
  t_35 = t;
  t = p_35;
  t = type_expression_0_0(t);
  u_35 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_35, u_35);
  p_6 = t;
  t = SSLsetAnnotations(p_6, n_35);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_b_7;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL;
      t_40 = t;
      if(match_cons(t, sym_SDef_3))
        {
          u_40 = ATgetArgument(t, 0);
          v_40 = ATgetArgument(t, 1);
          w_40 = ATgetArgument(t, 2);
          {
            ATerm z_27 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,h_6 = NULL;
            t = SSLgetAnnotations(t_40);
            z_27 = t;
            t = SSL_is_string(u_40);
            d_28 = t;
            t = v_40;
            t = map_1_0(d_1, t);
            e_28 = t;
            t = w_40;
            t = strategy_expression_0_0(t);
            f_28 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, d_28, e_28, f_28);
            h_6 = t;
            t = SSLsetAnnotations(h_6, z_27);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              u_40 = ATgetArgument(t, 0);
              v_40 = ATgetArgument(t, 1);
              w_40 = ATgetArgument(t, 2);
              s_40 = ATgetArgument(t, 3);
              {
                ATerm z_28 = NULL,t_29 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,k_6 = NULL;
                t = SSLgetAnnotations(t_40);
                z_28 = t;
                t = SSL_is_string(u_40);
                t_29 = t;
                t = v_40;
                t = map_1_0(e_1, t);
                c_30 = t;
                t = w_40;
                t = map_1_0(f_1, t);
                d_30 = t;
                t = s_40;
                t = strategy_expression_0_0(t);
                e_30 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, t_29, c_30, d_30, e_30);
                k_6 = t;
                t = SSLsetAnnotations(k_6, z_28);
              }
            }
          else
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  u_40 = ATgetArgument(t, 0);
                  v_40 = ATgetArgument(t, 1);
                  w_40 = ATgetArgument(t, 2);
                  s_40 = ATgetArgument(t, 3);
                  {
                    ATerm x_31 = NULL,f_32 = NULL,h_32 = NULL,n_32 = NULL,o_32 = NULL,n_6 = NULL;
                    t = SSLgetAnnotations(t_40);
                    x_31 = t;
                    t = SSL_is_string(u_40);
                    f_32 = t;
                    t = v_40;
                    t = map_1_0(g_1, t);
                    h_32 = t;
                    t = w_40;
                    t = map_1_0(j_1, t);
                    n_32 = t;
                    t = s_40;
                    t = strategy_expression_0_0(t);
                    o_32 = t;
                    t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, f_32, h_32, n_32, o_32);
                    n_6 = t;
                    t = SSLsetAnnotations(n_6, x_31);
                  }
                }
              else
                {
                  ATerm k_34 = NULL,v_34 = NULL,x_34 = NULL,b_35 = NULL,q_6 = NULL;
                  if(match_cons(t, sym_ExtSDef_3))
                    {
                      u_40 = ATgetArgument(t, 0);
                      v_40 = ATgetArgument(t, 1);
                      w_40 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_40);
                  k_34 = t;
                  t = SSL_is_string(u_40);
                  v_34 = t;
                  t = v_40;
                  t = map_1_0(m_1, t);
                  x_34 = t;
                  t = w_40;
                  t = map_1_0(x_1, t);
                  b_35 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDef_3, v_34, x_34, b_35);
                  q_6 = t;
                  t = SSLsetAnnotations(q_6, k_34);
                }
            }
        }
      LocalPopChoice(d_7);
    }
  else
    {
      t = c_7;
      t = debug_1_0(y_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm k_87 (ATerm), ATerm t)
{
  static ATerm p_41 (ATerm t)
  {
    ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
    m_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_41;
      }
    else
      {
        ATerm o_36 = NULL,x_37 = NULL,y_37 = NULL,x_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_41 = ATgetFirst((ATermList) t);
            o_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_41);
        o_36 = t;
        t = n_41;
        t = k_87(t);
        x_37 = t;
        t = o_41;
        t = p_41(t);
        y_37 = t;
        t = (ATerm) ATinsert(CheckATermList(y_37), x_37);
        x_7 = t;
        t = SSLsetAnnotations(x_7, o_36);
      }
    return(t);
  }
  t = p_41(t);
  return(t);
}
static ATerm o_3 (ATerm t_37, ATerm u_37, ATerm t)
{
  ATerm r_41 = NULL;
  t = SSL_fputc(t_37, u_37);
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_41);
  return(t);
}
static ATerm p_3 (ATerm o_22, ATerm p_22, ATerm t)
{
  ATerm s_41 = NULL;
  t = SSL_write_term_to_stream_text(o_22, p_22);
  s_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_41);
  return(t);
}
static ATerm r_3 (ATerm b_87 (ATerm), ATerm j_141, ATerm u_22, ATerm t)
{
  ATerm t_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_141, term_e_7);
  t = v_3(t);
  t_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_41, u_22);
  t = b_87(t);
  t = fclose_0_0(t);
  t = u_22;
  return(t);
}
static ATerm q_3 (ATerm k_22, ATerm l_22, ATerm t)
{
  ATerm u_41 = NULL;
  t = SSL_write_term_to_stream_baf(k_22, l_22);
  u_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_41);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_7 = ATgetArgument(t, 0);
      if(match_cons(f_7, sym_Stream_1))
        {
          n_44 = ATgetArgument(f_7, 0);
        }
      else
        _fail(t);
      o_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_3(n_44, o_44, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_7 = ATgetArgument(t, 0);
      if(match_cons(h_7, sym_Stream_1))
        {
          b_49 = ATgetArgument(h_7, 0);
        }
      else
        _fail(t);
      c_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3(b_49, c_49, t);
  w_48 = t;
  t = term_j_7;
  x_48 = t;
  t = w_48;
  if(match_cons(t, sym_Stream_1))
    {
      a_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_7, w_48);
  t = o_3(x_48, a_49, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,j_43 = NULL,k_43 = NULL,i_8 = NULL,e_8 = NULL;
  a_42 = t;
  if(match_cons(t, sym__2))
    {
      h_42 = ATgetArgument(t, 0);
      i_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_42);
  g_42 = t;
  t = h_42;
  {
    ATerm k_7 = t;
    int l_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((z_41 != NULL) && (z_41 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                z_41 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_1, t);
        LocalPopChoice(l_7);
      }
    else
      {
        t = k_7;
        t = term_m_7;
        z_41 = t;
      }
  }
  j_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_42, i_42);
  e_8 = t;
  t = SSLsetAnnotations(e_8, g_42);
  t = a_42;
  if(match_cons(t, sym__2))
    {
      c_42 = ATgetArgument(t, 0);
      d_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_42);
  b_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_42, (ATerm) ATmakeAppl(sym__2, not_null(z_41), d_42));
  i_8 = t;
  t = SSLsetAnnotations(i_8, b_42);
  f_42 = t;
  if(match_cons(t, sym__2))
    {
      j_43 = ATgetArgument(t, 0);
      k_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_7 = t;
    int o_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_41 = NULL,u_43 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,l_8 = NULL;
        t = SSLgetAnnotations(f_42);
        y_41 = t;
        t = j_43;
        t = fetch_1_0(a_2, t);
        u_43 = t;
        t = k_43;
        if(match_cons(t, sym__2))
          {
            l_44 = ATgetArgument(t, 0);
            m_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_3(b_2, l_44, m_44, t);
        k_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_43, k_44);
        l_8 = t;
        t = SSLsetAnnotations(l_8, y_41);
        LocalPopChoice(o_7);
      }
    else
      {
        t = n_7;
        {
          ATerm d_47 = NULL,b_48 = NULL,l_48 = NULL,p_48 = NULL,m_8 = NULL;
          t = SSLgetAnnotations(f_42);
          d_47 = t;
          t = k_43;
          if(match_cons(t, sym__2))
            {
              l_48 = ATgetArgument(t, 0);
              p_48 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_3(c_2, l_48, p_48, t);
          b_48 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_43, b_48);
          m_8 = t;
          t = SSLsetAnnotations(m_8, d_47);
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
ATerm apply_strategy_1_0 (ATerm k_104 (ATerm), ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL;
  r_43 = t;
  t = dtime_0_0(t);
  t = r_43;
  t = k_104(t);
  q_43 = t;
  t = dtime_0_0(t);
  n_43 = t;
  t = q_43;
  if(match_cons(t, sym__2))
    {
      o_43 = ATgetArgument(t, 0);
      p_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_43), (ATerm) ATmakeAppl(sym_Runtime_1, n_43)), p_43);
  return(t);
}
static ATerm f_44 (ATerm z_43, ATerm t)
{
  t = SSL_fclose(z_43);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL;
  d_44 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_44 = ATgetArgument(t, 0);
      {
        ATerm p_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_44);
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            t = f_44(d_44, t);
          }
      }
    }
  else
    {
      t = f_44(d_44, t);
    }
  return(t);
}
static ATerm s_3 (ATerm q_22, ATerm t)
{
  t = SSL_read_term_from_stream(q_22);
  return(t);
}
static ATerm t_3 (ATerm m_36, ATerm n_36, ATerm t)
{
  t = SSL_strcat(m_36, n_36);
  return(t);
}
static ATerm u_3 (ATerm v_37, ATerm w_37, ATerm t)
{
  ATerm g_44 = NULL;
  t = SSL_fopen(v_37, w_37);
  g_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_44);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_44 = NULL;
  t = SSL_stdin_stream();
  h_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_44);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_44 = NULL;
  t = SSL_stdout_stream();
  i_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_44);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_44 = NULL;
  t = SSL_stderr_stream();
  j_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_44);
  return(t);
}
static ATerm q_45 (ATerm p_44, ATerm t)
{
  ATerm q_44 = NULL;
  t = SSL_explode_term(p_44);
  if(match_cons(t, sym__2))
    {
      ATerm r_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_7 = ATgetArgument(t, 1);
        if(((ATgetType(t_7) == AT_LIST) && !(ATisEmpty(t_7))))
          {
            q_44 = ATgetFirst((ATermList) t_7);
            {
              ATerm u_7 = (ATerm) ATgetNext((ATermList) t_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_44;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_44;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_44;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_44;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm r_45 (ATerm t_44, ATerm u_44, ATerm v_44, ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL,b_45 = NULL,r_8 = NULL;
  t = SSLgetAnnotations(v_44);
  y_44 = t;
  t = t_44;
  if(match_cons(t, sym_Path_1))
    {
      b_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_45, u_44);
  r_8 = t;
  t = SSLsetAnnotations(r_8, y_44);
  if(match_cons(t, sym__2))
    {
      w_44 = ATgetArgument(t, 0);
      x_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(w_44, x_44, t);
  return(t);
}
static ATerm s_45 (ATerm d_45, ATerm e_45, ATerm f_45, ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL,l_45 = NULL,s_8 = NULL;
  t = SSLgetAnnotations(f_45);
  i_45 = t;
  t = SSL_is_string(d_45);
  l_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_45, e_45);
  s_8 = t;
  t = SSLsetAnnotations(s_8, i_45);
  if(match_cons(t, sym__2))
    {
      g_45 = ATgetArgument(t, 0);
      h_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(g_45, h_45, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
  n_45 = t;
  if(match_cons(t, sym__2))
    {
      o_45 = ATgetArgument(t, 0);
      p_45 = ATgetArgument(t, 1);
      {
        ATerm v_7 = t;
        int y_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_45(n_45, t);
            LocalPopChoice(y_7);
          }
        else
          {
            t = v_7;
            {
              ATerm z_7 = t;
              int a_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_45(o_45, p_45, n_45, t);
                  LocalPopChoice(a_8);
                }
              else
                {
                  t = z_7;
                  t = s_45(o_45, p_45, n_45, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_45(n_45, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,b_46 = NULL;
  b_46 = t;
  {
    ATerm b_8 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_46, term_d_8);
        t = v_3(t);
        LocalPopChoice(c_8);
      }
    else
      {
        t = b_8;
        {
          ATerm r_51 = NULL,s_51 = NULL;
          t = term_f_8;
          s_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_8, b_46);
          t = t_3(s_51, b_46, t);
          r_51 = t;
          t = SSL_perror(r_51);
          _fail(t);
        }
      }
  }
  v_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_3(w_45, t);
  u_45 = t;
  t = v_45;
  t = fclose_0_0(t);
  t = u_45;
  return(t);
}
ATerm fetch_1_0 (ATerm u_87 (ATerm), ATerm t)
{
  static ATerm a_47 (ATerm t)
  {
    ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
    x_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_46 = ATgetFirst((ATermList) t);
        z_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_8 = t;
      int j_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_52 = NULL,u_53 = NULL,z_8 = NULL;
          t = SSLgetAnnotations(x_46);
          x_52 = t;
          t = y_46;
          t = u_87(t);
          u_53 = t;
          t = (ATerm) ATinsert(CheckATermList(z_46), u_53);
          z_8 = t;
          t = SSLsetAnnotations(z_8, x_52);
          LocalPopChoice(j_8);
        }
      else
        {
          t = h_8;
          {
            ATerm m_57 = NULL,p_57 = NULL,a_9 = NULL;
            t = SSLgetAnnotations(x_46);
            m_57 = t;
            t = z_46;
            t = a_47(t);
            p_57 = t;
            t = (ATerm) ATinsert(CheckATermList(p_57), y_46);
            a_9 = t;
            t = SSLsetAnnotations(a_9, m_57);
          }
        }
    }
    return(t);
  }
  t = a_47(t);
  return(t);
}
static ATerm y_3 (ATerm y_53, ATerm z_53, ATerm t)
{
  t = SSL_table_get(y_53, z_53);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_102 (ATerm), ATerm t)
{
  ATerm e_47 = NULL;
  e_47 = t;
  {
    ATerm n_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL;
        t = term_p_8;
        h_47 = t;
        t = term_q_8;
        i_47 = t;
        t = term_t_8;
        t = y_3(h_47, i_47, t);
        g_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_47, term_u_8);
        t = geq_0_0(t);
        t = e_47;
        t = t_102(t);
        LocalPopChoice(o_8);
      }
    else
      {
        t = n_8;
        t = e_47;
      }
  }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm l_47 = NULL;
  l_47 = t;
  if(match_string(t, "-k"))
    {
      t = l_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_47;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL;
  o_47 = t;
  t = SSL_string_to_int(o_47);
  p_47 = t;
  t = term_y_8;
  q_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_8, p_47);
  t = b_4(q_47, p_47, t);
  t = o_47;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_b_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_3, f_3, g_3, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm s_47 = NULL;
  s_47 = t;
  if(match_string(t, "-S"))
    {
      t = s_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_47;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL;
  t = term_q_8;
  t_47 = t;
  t = term_c_9;
  u_47 = t;
  t = term_e_9;
  t = b_4(t_47, u_47, t);
  t = term_g_9;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_h_9;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL;
  v_47 = t;
  t = SSL_string_to_int(v_47);
  w_47 = t;
  t = term_q_8;
  x_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_8, w_47);
  t = b_4(x_47, w_47, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_47);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_i_9;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL;
  t = term_j_9;
  y_47 = t;
  t = term_y_5;
  z_47 = t;
  t = term_k_9;
  t = b_4(y_47, z_47, t);
  t = term_l_9;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_n_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, i_3, j_3, t);
      LocalPopChoice(q_9);
    }
  else
    {
      t = p_9;
      {
        ATerm r_9 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_3, m_3, n_3, t);
            LocalPopChoice(s_9);
          }
        else
          {
            t = r_9;
            t = Option_3_0(x_3, a_4, c_4, t);
          }
      }
    }
  return(t);
}
static ATerm b_4 (ATerm m_47, ATerm n_47, ATerm t)
{
  ATerm a_48 = NULL;
  t = term_p_8;
  a_48 = t;
  t = SSL_table_put(a_48, m_47, n_47);
  t = (ATerm) ATmakeAppl(sym__3, term_p_8, m_47, n_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL;
      t = term_y_5;
      t = e_0(t);
      f_48 = t;
      t = term_u_9;
      g_48 = t;
      t = term_w_9;
      h_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_9, term_w_9, f_48);
      t = z_3(g_48, h_48, f_48, t);
      _fail(t);
    }
  else
    {
      ATerm k_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_48 = ATgetFirst((ATermList) t);
          e_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_48;
      t = c_0(t);
      t = term_y_5;
      t = d_0(t);
      k_48 = t;
      t = (ATerm) ATinsert(CheckATermList(e_48), k_48);
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm m_48 = NULL;
  m_48 = t;
  if(match_string(t, "-o"))
    {
      t = m_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_48;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL;
  n_48 = t;
  t = term_y_9;
  o_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_9, n_48);
  t = b_4(o_48, n_48, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_48);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_z_9;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_4, e_4, g_4, t);
  return(t);
}
static ATerm z_3 (ATerm h_52, ATerm i_52, ATerm g_52, ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL;
  q_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_52, i_52);
  {
    ATerm a_10 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, h_52, i_52);
        t = y_3(h_52, i_52, t);
        LocalPopChoice(c_10);
      }
    else
      {
        t = a_10;
        t = (ATerm) ATempty;
      }
  }
  r_48 = t;
  t = (ATerm) ATinsert(CheckATermList(r_48), g_52);
  s_48 = t;
  t = SSL_table_put(h_52, i_52, s_48);
  t = q_48;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_48 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL;
      t = term_y_5;
      t = n_0(t);
      h_49 = t;
      t = term_u_9;
      i_49 = t;
      t = term_w_9;
      j_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_9, term_w_9, h_49);
      t = z_3(i_49, j_49, h_49, t);
      _fail(t);
    }
  else
    {
      ATerm n_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_48 = ATgetFirst((ATermList) t);
          e_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_49 = ATgetFirst((ATermList) t);
          g_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_48;
      t = k_0(t);
      t = f_49;
      t = l_0(t);
      n_49 = t;
      t = (ATerm) ATinsert(CheckATermList(g_49), n_49);
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm p_49 = NULL;
  p_49 = t;
  if(match_string(t, "-i"))
    {
      t = p_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_49;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL;
  q_49 = t;
  t = term_f_10;
  r_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_10, q_49);
  t = b_4(r_49, q_49, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_49);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_i_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, i_4, j_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_5;
  t = whoami_0_0(t);
  s_49 = t;
  t = term_a_6;
  u_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_10), s_49);
  v_49 = t;
  t = SSL_printnl(u_49, v_49);
  t = term_d_6;
  t_49 = t;
  t = SSL_exit(t_49);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL;
  t = term_p_8;
  w_49 = t;
  t = term_l_10;
  x_49 = t;
  t = term_m_10;
  t = y_3(w_49, x_49, t);
  return(t);
}
static ATerm w_3 (ATerm p_40, ATerm q_40, ATerm t)
{
  ATerm n_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_40, q_40);
      LocalPopChoice(o_10);
    }
  else
    {
      t = n_10;
      t = SSL_addr(p_40, q_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL;
  z_49 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_49;
      t = b_94(t);
    }
  else
    {
      ATerm e_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_50 = ATgetFirst((ATermList) t);
          b_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_50;
      t = foldr_2_0(b_94, c_94, t);
      e_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_50, e_50);
      t = c_94(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_c_9;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL;
  if(match_cons(t, sym__2))
    {
      y_57 = ATgetArgument(t, 0);
      z_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3(y_57, z_57, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_50 = NULL,u_57 = NULL,v_57 = NULL;
  t = times_0_0(t);
  v_57 = t;
  t = SSL_explode_term(v_57);
  if(match_cons(t, sym__2))
    {
      ATerm p_10 = ATgetArgument(t, 0);
      u_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_57;
  t = foldr_2_0(k_4, l_4, t);
  h_50 = t;
  t = SSL_TicksToSeconds(h_50);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
  s_50 = t;
  if(match_cons(t, sym__2))
    {
      t_50 = ATgetArgument(t, 0);
      u_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_50;
        if((t_50 != t))
          {
            _fail(t);
          }
        t = s_50;
        LocalPopChoice(t_10);
      }
    else
      {
        t = r_10;
        t = (ATerm) ATmakeAppl(sym__2, t_50, u_50);
        {
          ATerm u_10 = t;
          int w_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_50, u_50);
              LocalPopChoice(w_10);
            }
          else
            {
              t = u_10;
              t = SSL_gtr(t_50, u_50);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_50, u_50);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm y_50 = NULL;
  y_50 = t;
  {
    ATerm x_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL;
        t = term_p_8;
        b_51 = t;
        t = term_q_8;
        c_51 = t;
        t = term_t_8;
        t = y_3(b_51, c_51, t);
        a_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_51, term_d_6);
        t = geq_0_0(t);
        t = y_50;
        t = s_102(t);
        LocalPopChoice(y_10);
      }
    else
      {
        t = x_10;
        t = y_50;
      }
  }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL,h_51 = NULL,i_51 = NULL;
  t = run_time_0_0(t);
  e_51 = t;
  t = term_y_5;
  t = whoami_0_0(t);
  f_51 = t;
  t = term_a_6;
  h_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_11), e_51), term_c_11), f_51);
  i_51 = t;
  t = SSL_printnl(h_51, i_51);
  t = (ATerm) ATmakeAppl(sym__2, term_a_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_11), e_51), term_c_11), f_51));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_9;
  j_51 = t;
  t = SSL_exit(j_51);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL;
  z_51 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_51;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_51 = ATgetArgument(t, 0);
          {
            ATerm l_58 = NULL,d_9 = NULL;
            t = SSLgetAnnotations(z_51);
            l_58 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_51);
            d_9 = t;
            t = SSLsetAnnotations(d_9, l_58);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_51;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_105 (ATerm), ATerm t)
{
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_51 = NULL,n_51 = NULL;
      t = term_p_8;
      m_51 = t;
      t = term_i_11;
      n_51 = t;
      t = term_j_11;
      t = y_3(m_51, n_51, t);
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      t = fetch_1_0(n_4, t);
    }
  t = i_105(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_52 = ATgetFirst((ATermList) t);
      d_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_52 = NULL,m_52 = NULL;
        static ATerm r_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_52)), not_null(m_52));
          return(t);
        }
        t = d_52;
        t = i_0(t);
        if(((l_52 != NULL) && (l_52 != t)))
          _fail(t);
        else
          l_52 = t;
        t = c_52;
        t = g_0(t);
        if(((m_52 != NULL) && (m_52 != t)))
          _fail(t);
        else
          m_52 = t;
        t = d_52;
        t = reverse_acc_2_0(g_0, r_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_5;
      t = i_0(t);
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL,t_9 = NULL;
  u_52 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_52);
  s_52 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_52);
  t_9 = t;
  t = SSLsetAnnotations(t_9, s_52);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm w_52 = NULL;
  w_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_52), term_k_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL;
  ATerm l_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_52 = NULL,r_52 = NULL;
      t = term_p_8;
      q_52 = t;
      t = term_l_10;
      r_52 = t;
      t = term_m_10;
      t = y_3(q_52, r_52, t);
      LocalPopChoice(o_11);
    }
  else
    {
      t = l_11;
      t = fetch_1_0(t_4, t);
    }
  t = term_p_11;
  t = echo_0_0(t);
  t = term_u_9;
  o_52 = t;
  t = term_w_9;
  p_52 = t;
  t = term_t_11;
  t = y_3(o_52, p_52, t);
  t = reverse_acc_2_0(_id, u_4, t);
  t = map_1_0(v_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL;
  y_52 = t;
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_52;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_11 = ATgetFirst((ATermList) t);
                ATerm x_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_52;
          }
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
        t = (ATerm) ATinsert(ATempty, y_52);
      }
  }
  z_52 = t;
  t = term_m_7;
  a_53 = t;
  t = SSL_printnl(a_53, z_52);
  t = y_52;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL;
  t = term_p_8;
  e_53 = t;
  t = term_l_10;
  f_53 = t;
  t = term_m_10;
  t = y_3(e_53, f_53, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL;
  t = term_y_11;
  g_53 = t;
  t = term_y_5;
  h_53 = t;
  t = term_z_11;
  t = b_4(g_53, h_53, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_a_12;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL;
  t = term_y_11;
  k_53 = t;
  t = term_y_5;
  l_53 = t;
  t = term_z_11;
  t = b_4(k_53, l_53, t);
  t = term_c_12;
  i_53 = t;
  t = term_y_5;
  j_53 = t;
  t = term_d_12;
  t = b_4(i_53, j_53, t);
  t = term_e_12;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_f_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_4, x_4, y_4, t);
      LocalPopChoice(j_12);
    }
  else
    {
      t = g_12;
      t = Option_3_0(z_4, a_5, b_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_66 (ATerm), ATerm s_66 (ATerm), ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,b_10 = NULL;
  r_53 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_53 = ATgetFirst((ATermList) t);
      o_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_53);
  m_53 = t;
  t = n_53;
  t = r_66(t);
  p_53 = t;
  t = o_53;
  t = s_66(t);
  q_53 = t;
  t = (ATerm) ATinsert(CheckATermList(q_53), p_53);
  b_10 = t;
  t = SSLsetAnnotations(b_10, m_53);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL,a_54 = NULL,b_54 = NULL,d_54 = NULL,e_54 = NULL,h_10 = NULL;
  w_53 = t;
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_12;
        t = l_107(t);
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
      }
  }
  t = w_53;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_54 = ATgetFirst((ATermList) t);
      b_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_53);
  x_53 = t;
  t = term_l_10;
  e_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_10, a_54);
  t = b_4(e_54, a_54, t);
  t = b_54;
  {
    static ATerm o_54 (ATerm t)
    {
      ATerm n_12 = t;
      int o_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_12 = t;
          int q_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_54 = NULL;
              h_54 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_54;
              LocalPopChoice(q_12);
            }
          else
            {
              t = p_12;
              t = l_107(t);
              t = Cons_2_0(_id, o_54, t);
            }
          LocalPopChoice(o_12);
        }
      else
        {
          t = n_12;
          {
            ATerm k_54 = NULL,l_54 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_54 = ATgetFirst((ATermList) t);
                l_54 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_54), (ATerm) ATmakeAppl(sym_Undefined_1, k_54));
          }
        }
      return(t);
    }
    t = o_54(t);
  }
  d_54 = t;
  t = (ATerm) ATinsert(CheckATermList(d_54), (ATerm) ATmakeAppl(sym_Program_1, a_54));
  h_10 = t;
  t = SSLsetAnnotations(h_10, x_53);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm a_55 = NULL;
  a_55 = t;
  if(match_string(t, "--help"))
    {
      t = a_55;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_55;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_55;
        }
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL;
  t = term_i_11;
  b_55 = t;
  t = term_y_5;
  c_55 = t;
  t = term_r_12;
  t = b_4(b_55, c_55, t);
  t = term_s_12;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_t_12;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_107 (ATerm), ATerm t)
{
  ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL;
  v_54 = t;
  t = term_u_9;
  x_54 = t;
  t = term_w_9;
  y_54 = t;
  t = (ATerm) ATempty;
  z_54 = t;
  t = SSL_table_put(x_54, y_54, z_54);
  t = v_54;
  {
    static ATerm d_5 (ATerm t)
    {
      ATerm u_12 = t;
      int v_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_107(t);
          LocalPopChoice(v_12);
        }
      else
        {
          t = u_12;
          {
            ATerm x_12 = t;
            int y_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(e_5, g_5, h_5, t);
                LocalPopChoice(y_12);
              }
            else
              {
                t = x_12;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_5, t);
  }
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_55 = NULL;
        n_55 = t;
        {
          ATerm c_13 = t;
          int d_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_58 = NULL;
              t = n_55;
              {
                ATerm e_13 = t;
                int f_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_58 = NULL,u_58 = NULL;
                    t = term_p_8;
                    t_58 = t;
                    t = term_i_11;
                    u_58 = t;
                    t = term_j_11;
                    t = y_3(t_58, u_58, t);
                    LocalPopChoice(f_13);
                  }
                else
                  {
                    t = e_13;
                    t = fetch_1_0(i_5, t);
                  }
              }
              t = n_55;
              t = default_system_usage_0_0(t);
              t = term_c_9;
              s_58 = t;
              t = SSL_exit(s_58);
              LocalPopChoice(d_13);
            }
          else
            {
              t = c_13;
              {
                ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL;
                t = term_p_8;
                z_58 = t;
                t = term_y_11;
                a_59 = t;
                t = term_g_13;
                t = y_3(z_58, a_59, t);
                t = n_55;
                t = default_system_about_0_0(t);
                t = term_c_9;
                y_58 = t;
                t = SSL_exit(y_58);
              }
            }
        }
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        {
          ATerm h_13 = t;
          int i_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL;
              static ATerm j_5 (ATerm t)
              {
                ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,v_10 = NULL;
                t_55 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_55 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_55);
                r_55 = t;
                t = s_55;
                if(((t_54 != NULL) && (t_54 != t)))
                  _fail(t);
                else
                  t_54 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_55);
                v_10 = t;
                t = SSLsetAnnotations(v_10, r_55);
                return(t);
              }
              t = fetch_1_0(j_5, t);
              t = term_a_6;
              p_55 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_54)), term_j_13);
              q_55 = t;
              t = SSL_printnl(p_55, q_55);
              t = (ATerm) ATmakeAppl(sym__2, term_a_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_54)), term_j_13));
              t = default_system_usage_0_0(t);
              t = term_d_6;
              o_55 = t;
              t = SSL_exit(o_55);
              LocalPopChoice(i_13);
            }
          else
            {
              t = h_13;
            }
        }
      }
  }
  u_54 = t;
  t = term_u_9;
  w_54 = t;
  t = SSL_table_destroy(w_54);
  t = u_54;
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL;
  t = parse_options_1_0(k_105, t);
  y_55 = t;
  t = term_l_13;
  b_56 = t;
  t = SSL_table_create(b_56);
  t = term_l_13;
  z_55 = t;
  t = term_m_13;
  a_56 = t;
  t = SSL_table_put(z_55, a_56, y_55);
  t = y_55;
  t = m_105(t);
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_105, t);
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        {
          ATerm p_13 = t;
          int s_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_105(t);
              t = report_success_0_0(t);
              LocalPopChoice(s_13);
            }
          else
            {
              t = p_13;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = if_verbose2_1_0(t_5, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL;
  t = term_t_13;
  c_56 = t;
  t = term_y_5;
  d_56 = t;
  t = term_u_13;
  t = b_4(c_56, d_56, t);
  t = term_v_13;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_w_13;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL;
  e_56 = t;
  t = term_p_8;
  i_56 = t;
  t = term_l_10;
  j_56 = t;
  t = term_m_10;
  t = y_3(i_56, j_56, t);
  f_56 = t;
  t = term_a_6;
  g_56 = t;
  t = (ATerm) ATinsert(ATempty, f_56);
  h_56 = t;
  t = SSL_printnl(g_56, h_56);
  t = e_56;
  return(t);
}
ATerm iowrap_3_0 (ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm t)
{
  static ATerm k_5 (ATerm t)
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_104(t);
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        {
          ATerm z_13 = t;
          int a_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(a_14);
            }
          else
            {
              t = z_13;
              {
                ATerm b_14 = t;
                int c_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(c_14);
                  }
                else
                  {
                    t = b_14;
                    {
                      ATerm d_14 = t;
                      int e_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(o_5, r_5, s_5, t);
                          LocalPopChoice(e_14);
                        }
                      else
                        {
                          t = d_14;
                          {
                            ATerm f_14 = t;
                            int h_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(h_14);
                              }
                            else
                              {
                                t = f_14;
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
  static ATerm n_5 (ATerm t)
  {
    ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL;
    l_56 = t;
    {
      ATerm i_14 = t;
      int j_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm u_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((k_56 != NULL) && (k_56 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_56 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(u_5, t);
          LocalPopChoice(j_14);
        }
      else
        {
          t = i_14;
          t = term_k_14;
          k_56 = t;
        }
    }
    t = not_null(k_56);
    t = ReadFromFile_0_0(t);
    m_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_56, m_56);
    t = apply_strategy_1_0(t_104, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(k_5, v_104, l_5, n_5, t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL,s_11 = NULL;
  t_56 = t;
  if(match_cons(t, sym__2))
    {
      q_56 = ATgetArgument(t, 0);
      r_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_56);
  p_56 = t;
  t = r_56;
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_57 = NULL,d_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,m_11 = NULL,b_11 = NULL,a_11 = NULL,z_10 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            k_57 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_56);
        d_59 = t;
        t = k_57;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_59 = ATgetFirst((ATermList) t);
            h_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_57);
        f_59 = t;
        t = h_59;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_59 = ATgetFirst((ATermList) t);
            l_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_59);
        j_59 = t;
        t = k_59;
        if(match_cons(t, sym_Strategies_1))
          {
            o_59 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_59);
        n_59 = t;
        t = o_59;
        t = map_1_0(strategy_definition_0_0, t);
        p_59 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, p_59);
        z_10 = t;
        t = SSLsetAnnotations(z_10, n_59);
        q_59 = t;
        t = l_59;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(l_59), q_59);
        a_11 = t;
        t = SSLsetAnnotations(a_11, j_59);
        m_59 = t;
        t = (ATerm) ATinsert(CheckATermList(m_59), g_59);
        b_11 = t;
        t = SSLsetAnnotations(b_11, f_59);
        i_59 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, i_59);
        m_11 = t;
        t = SSLsetAnnotations(m_11, d_59);
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        t = debug_1_0(w_5, t);
      }
  }
  s_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_56, s_56);
  s_11 = t;
  t = SSLsetAnnotations(s_11, p_56);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_p_14;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(v_5, _fail, default_usage_0_0, t);
  return(t);
}

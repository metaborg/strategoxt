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
Symbol sym_Hashtable_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
}
ATerm term_y_14;
ATerm term_v_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_q_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_u_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_d_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_j_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_q_7;
ATerm term_m_7;
ATerm term_i_7;
ATerm term_f_7;
ATerm term_c_7;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_d_6;
ATerm term_b_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym__2, term_t_8, term_v_8);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym__2, term_v_8, term_a_9);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_9);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_b_6);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym__2, term_t_8, term_o_10);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym__2, term_t_8, term_l_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym__2, term_x_9, term_z_9);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_b_6);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_m_12, term_b_6);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_b_6);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__3, term_x_9, term_z_9, (ATerm) ATempty);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__2, term_t_8, term_h_12);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym__2, term_c_14, term_b_6);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm debug_1_0 (ATerm i_88 (ATerm), ATerm t);
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
ATerm map_1_0 (ATerm t_88 (ATerm), ATerm t);
static ATerm a_4 (ATerm t_37, ATerm u_37, ATerm t);
static ATerm b_4 (ATerm o_22, ATerm p_22, ATerm t);
static ATerm d_4 (ATerm k_88 (ATerm), ATerm s_142, ATerm u_22, ATerm t);
static ATerm c_4 (ATerm k_22, ATerm l_22, ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm t_105 (ATerm), ATerm t);
static ATerm h_45 (ATerm b_45, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_4 (ATerm q_22, ATerm t);
static ATerm f_4 (ATerm m_36, ATerm n_36, ATerm t);
static ATerm g_4 (ATerm v_37, ATerm w_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_46 (ATerm r_45, ATerm t);
static ATerm t_46 (ATerm v_45, ATerm w_45, ATerm x_45, ATerm t);
static ATerm u_46 (ATerm f_46, ATerm g_46, ATerm h_46, ATerm t);
static ATerm h_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_89 (ATerm), ATerm t);
static ATerm m_4 (ATerm a_54, ATerm b_54, ATerm t);
ATerm if_verbose2_1_0 (ATerm c_104 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_4 (ATerm m_47, ATerm n_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_4 (ATerm h_52, ATerm i_52, ATerm g_52, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_4 (ATerm p_40, ATerm q_40, ATerm t);
ATerm foldr_2_0 (ATerm k_95 (ATerm), ATerm l_95 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_104 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm need_help_1_0 (ATerm r_106 (ATerm), ATerm t);
static ATerm q_4 (ATerm o_55, ATerm p_55, ATerm q_55, ATerm t);
static ATerm r_4 (ATerm r_55, ATerm s_55, ATerm t);
ATerm lookup_table_0_1 (ATerm t_53, ATerm t);
ATerm new_hashtable_0_2 (ATerm w_55, ATerm x_55, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm k_4 (ATerm t_55, ATerm u_55, ATerm t);
static ATerm l_4 (ATerm y_55, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_108 (ATerm), ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm parse_options_1_0 (ATerm t_108 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm iowrap_3_0 (ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
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
  t = term_b_6;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_d_6;
  i_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_6), b_0), term_f_6);
  l_1 = t;
  t = SSL_printnl(i_1, l_1);
  t = term_h_6;
  v_0 = t;
  t = SSL_exit(v_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,q_1 = NULL,r_1 = NULL;
  n_1 = t;
  t = i_88(t);
  o_1 = t;
  t = term_d_6;
  q_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_1), o_1);
  r_1 = t;
  t = SSL_printnl(q_1, r_1);
  t = n_1;
  return(t);
}
ATerm type_expression_0_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
  z_4 = t;
  if(match_cons(t, sym_ConstType_1))
    {
      a_5 = ATgetArgument(t, 0);
      {
        ATerm h_1 = NULL,k_1 = NULL,j_0 = NULL;
        t = SSLgetAnnotations(z_4);
        h_1 = t;
        t = a_5;
        {
          static ATerm w_2 (ATerm t)
          {
            ATerm n_2 = NULL,o_2 = NULL,v_2 = NULL;
            o_2 = t;
            if(match_cons(t, sym_Sort_2))
              {
                v_2 = ATgetArgument(t, 0);
                n_2 = ATgetArgument(t, 1);
                {
                  ATerm l_3 = NULL,q_3 = NULL,r_3 = NULL,f_0 = NULL;
                  t = SSLgetAnnotations(o_2);
                  l_3 = t;
                  t = SSL_is_string(v_2);
                  q_3 = t;
                  t = n_2;
                  t = map_1_0(w_2, t);
                  r_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Sort_2, q_3, r_3);
                  f_0 = t;
                  t = SSLsetAnnotations(f_0, l_3);
                }
              }
            else
              {
                ATerm c_5 = NULL,f_5 = NULL,h_0 = NULL;
                if(match_cons(t, sym_SortVar_1))
                  {
                    v_2 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_2);
                c_5 = t;
                t = SSL_is_string(v_2);
                f_5 = t;
                t = (ATerm) ATmakeAppl(sym_SortVar_1, f_5);
                h_0 = t;
                t = SSLsetAnnotations(h_0, c_5);
              }
            return(t);
          }
          t = w_2(t);
        }
        k_1 = t;
        t = (ATerm) ATmakeAppl(sym_ConstType_1, k_1);
        j_0 = t;
        t = SSLsetAnnotations(j_0, h_1);
      }
    }
  else
    {
      ATerm q_5 = NULL,t_5 = NULL,u_5 = NULL,m_0 = NULL;
      if(match_cons(t, sym_FunType_2))
        {
          a_5 = ATgetArgument(t, 0);
          b_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_4);
      q_5 = t;
      t = a_5;
      t = map_1_0(type_expression_0_0, t);
      t_5 = t;
      t = b_5;
      t = type_expression_0_0(t);
      u_5 = t;
      t = (ATerm) ATmakeAppl(sym_FunType_2, t_5, u_5);
      m_0 = t;
      t = SSLsetAnnotations(m_0, q_5);
    }
  return(t);
}
static ATerm o_0 (ATerm t)
{
  t = term_i_6;
  return(t);
}
ATerm build_term_expression_0_0 (ATerm t)
{
  ATerm j_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
      h_9 = t;
      if(match_cons(t, sym_Var_1))
        {
          i_9 = ATgetArgument(t, 0);
          {
            ATerm c_6 = NULL,e_6 = NULL,s_0 = NULL;
            t = SSLgetAnnotations(h_9);
            c_6 = t;
            t = SSL_is_string(i_9);
            e_6 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, e_6);
            s_0 = t;
            t = SSLsetAnnotations(s_0, c_6);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              i_9 = ATgetArgument(t, 0);
              {
                ATerm l_6 = NULL,o_6 = NULL,t_0 = NULL;
                t = SSLgetAnnotations(h_9);
                l_6 = t;
                t = SSL_is_int(i_9);
                o_6 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, o_6);
                t_0 = t;
                t = SSLsetAnnotations(t_0, l_6);
              }
            }
          else
            {
              if(match_cons(t, sym_Real_1))
                {
                  i_9 = ATgetArgument(t, 0);
                  {
                    ATerm l_7 = NULL,o_7 = NULL,u_0 = NULL;
                    t = SSLgetAnnotations(h_9);
                    l_7 = t;
                    t = SSL_is_real(i_9);
                    o_7 = t;
                    t = (ATerm) ATmakeAppl(sym_Real_1, o_7);
                    u_0 = t;
                    t = SSLsetAnnotations(u_0, l_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      i_9 = ATgetArgument(t, 0);
                      {
                        ATerm v_7 = NULL,x_7 = NULL,w_0 = NULL;
                        t = SSLgetAnnotations(h_9);
                        v_7 = t;
                        t = SSL_is_string(i_9);
                        x_7 = t;
                        t = (ATerm) ATmakeAppl(sym_Str_1, x_7);
                        w_0 = t;
                        t = SSLsetAnnotations(w_0, v_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          i_9 = ATgetArgument(t, 0);
                          g_9 = ATgetArgument(t, 1);
                          {
                            ATerm j_8 = NULL,o_8 = NULL,p_8 = NULL,x_0 = NULL;
                            t = SSLgetAnnotations(h_9);
                            j_8 = t;
                            t = SSL_is_string(i_9);
                            o_8 = t;
                            t = g_9;
                            t = map_1_0(build_term_expression_0_0, t);
                            p_8 = t;
                            t = (ATerm) ATmakeAppl(sym_Op_2, o_8, p_8);
                            x_0 = t;
                            t = SSLsetAnnotations(x_0, j_8);
                          }
                        }
                      else
                        {
                          ATerm q_9 = NULL,s_9 = NULL,y_0 = NULL;
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              i_9 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(h_9);
                          q_9 = t;
                          t = i_9;
                          t = build_term_expression_0_0(t);
                          s_9 = t;
                          t = (ATerm) ATmakeAppl(sym_BuildDefault_1, s_9);
                          y_0 = t;
                          t = SSLsetAnnotations(y_0, q_9);
                        }
                    }
                }
            }
        }
      LocalPopChoice(k_6);
    }
  else
    {
      t = j_6;
      t = debug_1_0(o_0, t);
    }
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = term_i_6;
  return(t);
}
ATerm match_term_expression_0_0 (ATerm t)
{
  ATerm m_6 = t;
  int n_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL;
      m_15 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = m_15;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              n_15 = ATgetArgument(t, 0);
              {
                ATerm y_9 = NULL,a_10 = NULL,p_1 = NULL;
                t = SSLgetAnnotations(m_15);
                y_9 = t;
                t = SSL_is_string(n_15);
                a_10 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, a_10);
                p_1 = t;
                t = SSLsetAnnotations(p_1, y_9);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  n_15 = ATgetArgument(t, 0);
                  {
                    ATerm k_10 = NULL,m_10 = NULL,s_1 = NULL;
                    t = SSLgetAnnotations(m_15);
                    k_10 = t;
                    t = SSL_is_int(n_15);
                    m_10 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, m_10);
                    s_1 = t;
                    t = SSLsetAnnotations(s_1, k_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      n_15 = ATgetArgument(t, 0);
                      {
                        ATerm w_10 = NULL,y_10 = NULL,t_1 = NULL;
                        t = SSLgetAnnotations(m_15);
                        w_10 = t;
                        t = SSL_is_real(n_15);
                        y_10 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, y_10);
                        t_1 = t;
                        t = SSLsetAnnotations(t_1, w_10);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          n_15 = ATgetArgument(t, 0);
                          {
                            ATerm f_11 = NULL,h_11 = NULL,u_1 = NULL;
                            t = SSLgetAnnotations(m_15);
                            f_11 = t;
                            t = SSL_is_string(n_15);
                            h_11 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, h_11);
                            u_1 = t;
                            t = SSLsetAnnotations(u_1, f_11);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Op_2))
                            {
                              n_15 = ATgetArgument(t, 0);
                              o_15 = ATgetArgument(t, 1);
                              {
                                ATerm t_11 = NULL,x_11 = NULL,y_11 = NULL,v_1 = NULL;
                                t = SSLgetAnnotations(m_15);
                                t_11 = t;
                                t = SSL_is_string(n_15);
                                x_11 = t;
                                t = o_15;
                                t = map_1_0(match_term_expression_0_0, t);
                                y_11 = t;
                                t = (ATerm) ATmakeAppl(sym_Op_2, x_11, y_11);
                                v_1 = t;
                                t = SSLsetAnnotations(v_1, t_11);
                              }
                            }
                          else
                            {
                              ATerm g_12 = NULL,k_12 = NULL,l_12 = NULL,w_1 = NULL;
                              if(match_cons(t, sym_As_2))
                                {
                                  n_15 = ATgetArgument(t, 0);
                                  o_15 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(m_15);
                              g_12 = t;
                              t = n_15;
                              t = match_term_expression_0_0(t);
                              k_12 = t;
                              t = o_15;
                              t = match_term_expression_0_0(t);
                              l_12 = t;
                              t = (ATerm) ATmakeAppl(sym_As_2, k_12, l_12);
                              w_1 = t;
                              t = SSLsetAnnotations(w_1, g_12);
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(n_6);
    }
  else
    {
      t = m_6;
      t = debug_1_0(p_0, t);
    }
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm p_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_25 = NULL;
      c_25 = t;
      t = SSL_is_string(c_25);
      LocalPopChoice(q_6);
    }
  else
    {
      t = p_6;
      t = map_1_0(r_0, t);
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm n_25 = NULL;
  n_25 = t;
  t = SSL_is_int(n_25);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,c_28 = NULL,d_28 = NULL,c_3 = NULL;
  d_28 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      z_25 = ATgetArgument(t, 0);
      v_27 = ATgetArgument(t, 1);
      w_27 = ATgetArgument(t, 2);
      x_27 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_28);
  y_25 = t;
  t = SSL_is_string(z_25);
  y_27 = t;
  t = v_27;
  t = map_1_0(a_1, t);
  z_27 = t;
  t = w_27;
  t = map_1_0(b_1, t);
  a_28 = t;
  t = x_27;
  t = strategy_expression_0_0(t);
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, y_27, z_27, a_28, c_28);
  c_3 = t;
  t = SSLsetAnnotations(c_3, y_25);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,a_3 = NULL;
  j_28 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      f_28 = ATgetArgument(t, 0);
      g_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_28);
  e_28 = t;
  t = SSL_is_string(f_28);
  h_28 = t;
  t = g_28;
  t = type_expression_0_0(t);
  i_28 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_28, i_28);
  a_3 = t;
  t = SSLsetAnnotations(a_3, e_28);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,b_3 = NULL;
  q_28 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      m_28 = ATgetArgument(t, 0);
      n_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_28);
  l_28 = t;
  t = SSL_is_string(m_28);
  o_28 = t;
  t = n_28;
  t = type_expression_0_0(t);
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, o_28, p_28);
  b_3 = t;
  t = SSLsetAnnotations(b_3, l_28);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_c_7;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_34 = NULL,z_34 = NULL,c_35 = NULL,d_35 = NULL;
      z_34 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = z_34;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = z_34;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  c_35 = ATgetArgument(t, 0);
                  {
                    ATerm b_13 = NULL,e_13 = NULL,d_2 = NULL;
                    t = SSLgetAnnotations(z_34);
                    b_13 = t;
                    t = c_35;
                    t = strategy_expression_0_0(t);
                    e_13 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, e_13);
                    d_2 = t;
                    t = SSLsetAnnotations(d_2, b_13);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      c_35 = ATgetArgument(t, 0);
                      d_35 = ATgetArgument(t, 1);
                      {
                        ATerm n_13 = NULL,t_13 = NULL,u_13 = NULL,e_2 = NULL;
                        t = SSLgetAnnotations(z_34);
                        n_13 = t;
                        t = c_35;
                        t = strategy_expression_0_0(t);
                        t_13 = t;
                        t = d_35;
                        t = strategy_expression_0_0(t);
                        u_13 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_13, u_13);
                        e_2 = t;
                        t = SSLsetAnnotations(e_2, n_13);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Choice_2))
                        {
                          c_35 = ATgetArgument(t, 0);
                          d_35 = ATgetArgument(t, 1);
                          {
                            ATerm g_14 = NULL,k_14 = NULL,m_14 = NULL,f_2 = NULL;
                            t = SSLgetAnnotations(z_34);
                            g_14 = t;
                            t = c_35;
                            t = strategy_expression_0_0(t);
                            k_14 = t;
                            t = d_35;
                            t = strategy_expression_0_0(t);
                            m_14 = t;
                            t = (ATerm) ATmakeAppl(sym_Choice_2, k_14, m_14);
                            f_2 = t;
                            t = SSLsetAnnotations(f_2, g_14);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LChoice_2))
                            {
                              c_35 = ATgetArgument(t, 0);
                              d_35 = ATgetArgument(t, 1);
                              {
                                ATerm c_15 = NULL,f_15 = NULL,g_15 = NULL,g_2 = NULL;
                                t = SSLgetAnnotations(z_34);
                                c_15 = t;
                                t = c_35;
                                t = strategy_expression_0_0(t);
                                f_15 = t;
                                t = d_35;
                                t = strategy_expression_0_0(t);
                                g_15 = t;
                                t = (ATerm) ATmakeAppl(sym_LChoice_2, f_15, g_15);
                                g_2 = t;
                                t = SSLsetAnnotations(g_2, c_15);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GuardedLChoice_3))
                                {
                                  c_35 = ATgetArgument(t, 0);
                                  d_35 = ATgetArgument(t, 1);
                                  v_34 = ATgetArgument(t, 2);
                                  {
                                    ATerm a_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,h_2 = NULL;
                                    t = SSLgetAnnotations(z_34);
                                    a_16 = t;
                                    t = c_35;
                                    t = strategy_expression_0_0(t);
                                    f_16 = t;
                                    t = d_35;
                                    t = strategy_expression_0_0(t);
                                    g_16 = t;
                                    t = v_34;
                                    t = strategy_expression_0_0(t);
                                    h_16 = t;
                                    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, f_16, g_16, h_16);
                                    h_2 = t;
                                    t = SSLsetAnnotations(h_2, a_16);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GChoice_2))
                                    {
                                      c_35 = ATgetArgument(t, 0);
                                      d_35 = ATgetArgument(t, 1);
                                      {
                                        ATerm q_16 = NULL,t_16 = NULL,u_16 = NULL,i_2 = NULL;
                                        t = SSLgetAnnotations(z_34);
                                        q_16 = t;
                                        t = c_35;
                                        t = strategy_expression_0_0(t);
                                        t_16 = t;
                                        t = d_35;
                                        t = strategy_expression_0_0(t);
                                        u_16 = t;
                                        t = (ATerm) ATmakeAppl(sym_GChoice_2, t_16, u_16);
                                        i_2 = t;
                                        t = SSLsetAnnotations(i_2, q_16);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LGChoice_2))
                                        {
                                          c_35 = ATgetArgument(t, 0);
                                          d_35 = ATgetArgument(t, 1);
                                          {
                                            ATerm c_17 = NULL,f_17 = NULL,g_17 = NULL,j_2 = NULL;
                                            t = SSLgetAnnotations(z_34);
                                            c_17 = t;
                                            t = c_35;
                                            t = strategy_expression_0_0(t);
                                            f_17 = t;
                                            t = d_35;
                                            t = strategy_expression_0_0(t);
                                            g_17 = t;
                                            t = (ATerm) ATmakeAppl(sym_LGChoice_2, f_17, g_17);
                                            j_2 = t;
                                            t = SSLsetAnnotations(j_2, c_17);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              c_35 = ATgetArgument(t, 0);
                                              d_35 = ATgetArgument(t, 1);
                                              v_34 = ATgetArgument(t, 2);
                                              {
                                                ATerm p_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,l_2 = NULL,k_2 = NULL;
                                                t = SSLgetAnnotations(z_34);
                                                p_17 = t;
                                                t = c_35;
                                                if(match_cons(t, sym_SVar_1))
                                                  {
                                                    w_17 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(c_35);
                                                v_17 = t;
                                                t = SSL_is_string(w_17);
                                                x_17 = t;
                                                t = (ATerm) ATmakeAppl(sym_SVar_1, x_17);
                                                k_2 = t;
                                                t = SSLsetAnnotations(k_2, v_17);
                                                y_17 = t;
                                                t = d_35;
                                                t = map_1_0(strategy_expression_0_0, t);
                                                t_17 = t;
                                                t = v_34;
                                                t = map_1_0(build_term_expression_0_0, t);
                                                u_17 = t;
                                                t = (ATerm) ATmakeAppl(sym_CallT_3, y_17, t_17, u_17);
                                                l_2 = t;
                                                t = SSLsetAnnotations(l_2, p_17);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_PrimT_3))
                                                {
                                                  c_35 = ATgetArgument(t, 0);
                                                  d_35 = ATgetArgument(t, 1);
                                                  v_34 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm i_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,m_2 = NULL;
                                                    t = SSLgetAnnotations(z_34);
                                                    i_18 = t;
                                                    t = SSL_is_string(c_35);
                                                    u_18 = t;
                                                    t = d_35;
                                                    t = map_1_0(strategy_expression_0_0, t);
                                                    v_18 = t;
                                                    t = v_34;
                                                    t = map_1_0(build_term_expression_0_0, t);
                                                    w_18 = t;
                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, u_18, v_18, w_18);
                                                    m_2 = t;
                                                    t = SSLsetAnnotations(m_2, i_18);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      c_35 = ATgetArgument(t, 0);
                                                      d_35 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm j_19 = NULL,n_19 = NULL,t_19 = NULL,p_2 = NULL;
                                                        t = SSLgetAnnotations(z_34);
                                                        j_19 = t;
                                                        t = SSL_is_string(c_35);
                                                        n_19 = t;
                                                        t = d_35;
                                                        t = strategy_expression_0_0(t);
                                                        t_19 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, n_19, t_19);
                                                        p_2 = t;
                                                        t = SSLsetAnnotations(p_2, j_19);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          c_35 = ATgetArgument(t, 0);
                                                          d_35 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm n_20 = NULL,u_20 = NULL,x_20 = NULL,q_2 = NULL;
                                                            t = SSLgetAnnotations(z_34);
                                                            n_20 = t;
                                                            t = SSL_is_int(c_35);
                                                            u_20 = t;
                                                            t = d_35;
                                                            t = strategy_expression_0_0(t);
                                                            x_20 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, u_20, x_20);
                                                            q_2 = t;
                                                            t = SSLsetAnnotations(q_2, n_20);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_One_1))
                                                            {
                                                              c_35 = ATgetArgument(t, 0);
                                                              {
                                                                ATerm h_21 = NULL,m_21 = NULL,r_2 = NULL;
                                                                t = SSLgetAnnotations(z_34);
                                                                h_21 = t;
                                                                t = c_35;
                                                                t = strategy_expression_0_0(t);
                                                                m_21 = t;
                                                                t = (ATerm) ATmakeAppl(sym_One_1, m_21);
                                                                r_2 = t;
                                                                t = SSLsetAnnotations(r_2, h_21);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Some_1))
                                                                {
                                                                  c_35 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm t_21 = NULL,x_21 = NULL,s_2 = NULL;
                                                                    t = SSLgetAnnotations(z_34);
                                                                    t_21 = t;
                                                                    t = c_35;
                                                                    t = strategy_expression_0_0(t);
                                                                    x_21 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Some_1, x_21);
                                                                    s_2 = t;
                                                                    t = SSLsetAnnotations(s_2, t_21);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_All_1))
                                                                    {
                                                                      c_35 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm f_22 = NULL,h_22 = NULL,t_2 = NULL;
                                                                        t = SSLgetAnnotations(z_34);
                                                                        f_22 = t;
                                                                        t = c_35;
                                                                        t = strategy_expression_0_0(t);
                                                                        h_22 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_All_1, h_22);
                                                                        t_2 = t;
                                                                        t = SSLsetAnnotations(t_2, f_22);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Thread_1))
                                                                        {
                                                                          c_35 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm z_22 = NULL,f_23 = NULL,u_2 = NULL;
                                                                            t = SSLgetAnnotations(z_34);
                                                                            z_22 = t;
                                                                            t = c_35;
                                                                            t = strategy_expression_0_0(t);
                                                                            f_23 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_Thread_1, f_23);
                                                                            u_2 = t;
                                                                            t = SSLsetAnnotations(u_2, z_22);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Match_1))
                                                                            {
                                                                              c_35 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm o_23 = NULL,q_23 = NULL,x_2 = NULL;
                                                                                t = SSLgetAnnotations(z_34);
                                                                                o_23 = t;
                                                                                t = c_35;
                                                                                t = match_term_expression_0_0(t);
                                                                                q_23 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, q_23);
                                                                                x_2 = t;
                                                                                t = SSLsetAnnotations(x_2, o_23);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Build_1))
                                                                                {
                                                                                  c_35 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm x_23 = NULL,a_24 = NULL,y_2 = NULL;
                                                                                    t = SSLgetAnnotations(z_34);
                                                                                    x_23 = t;
                                                                                    t = c_35;
                                                                                    t = build_term_expression_0_0(t);
                                                                                    a_24 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, a_24);
                                                                                    y_2 = t;
                                                                                    t = SSLsetAnnotations(y_2, x_23);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Scope_2))
                                                                                    {
                                                                                      c_35 = ATgetArgument(t, 0);
                                                                                      d_35 = ATgetArgument(t, 1);
                                                                                      {
                                                                                        ATerm l_24 = NULL,q_24 = NULL,u_24 = NULL,z_2 = NULL;
                                                                                        t = SSLgetAnnotations(z_34);
                                                                                        l_24 = t;
                                                                                        t = c_35;
                                                                                        t = map_1_0(q_0, t);
                                                                                        q_24 = t;
                                                                                        t = d_35;
                                                                                        t = strategy_expression_0_0(t);
                                                                                        u_24 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, q_24, u_24);
                                                                                        z_2 = t;
                                                                                        t = SSLsetAnnotations(z_2, l_24);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      ATerm r_25 = NULL,v_25 = NULL,w_25 = NULL,e_3 = NULL;
                                                                                      if(match_cons(t, sym_Let_2))
                                                                                        {
                                                                                          c_35 = ATgetArgument(t, 0);
                                                                                          d_35 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = SSLgetAnnotations(z_34);
                                                                                      r_25 = t;
                                                                                      t = c_35;
                                                                                      t = map_1_0(z_0, t);
                                                                                      v_25 = t;
                                                                                      t = d_35;
                                                                                      t = strategy_expression_0_0(t);
                                                                                      w_25 = t;
                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, v_25, w_25);
                                                                                      e_3 = t;
                                                                                      t = SSLsetAnnotations(e_3, r_25);
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
      LocalPopChoice(e_7);
    }
  else
    {
      t = d_7;
      t = debug_1_0(c_1, t);
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm i_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,r_6 = NULL;
  o_29 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      k_29 = ATgetArgument(t, 0);
      l_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_29);
  i_29 = t;
  t = SSL_is_string(k_29);
  m_29 = t;
  t = l_29;
  t = type_expression_0_0(t);
  n_29 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_29, n_29);
  r_6 = t;
  t = SSLsetAnnotations(r_6, i_29);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,t_6 = NULL;
  q_30 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      m_30 = ATgetArgument(t, 0);
      n_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_30);
  l_30 = t;
  t = SSL_is_string(m_30);
  o_30 = t;
  t = n_30;
  t = type_expression_0_0(t);
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, o_30, p_30);
  t_6 = t;
  t = SSLsetAnnotations(t_6, l_30);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,u_6 = NULL;
  x_30 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      t_30 = ATgetArgument(t, 0);
      u_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_30);
  s_30 = t;
  t = SSL_is_string(t_30);
  v_30 = t;
  t = u_30;
  t = type_expression_0_0(t);
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, v_30, w_30);
  u_6 = t;
  t = SSLsetAnnotations(u_6, s_30);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm w_32 = NULL,y_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,w_6 = NULL;
  d_33 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      y_32 = ATgetArgument(t, 0);
      a_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_33);
  w_32 = t;
  t = SSL_is_string(y_32);
  b_33 = t;
  t = a_33;
  t = type_expression_0_0(t);
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_33, c_33);
  w_6 = t;
  t = SSLsetAnnotations(w_6, w_32);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,m_33 = NULL,x_6 = NULL;
  m_33 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      f_33 = ATgetArgument(t, 0);
      i_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_33);
  e_33 = t;
  t = SSL_is_string(f_33);
  j_33 = t;
  t = i_33;
  t = type_expression_0_0(t);
  k_33 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_33, k_33);
  x_6 = t;
  t = SSLsetAnnotations(x_6, e_33);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,k_35 = NULL,l_35 = NULL,n_35 = NULL,u_35 = NULL,z_6 = NULL;
  u_35 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      b_35 = ATgetArgument(t, 0);
      k_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_35);
  a_35 = t;
  t = SSL_is_string(b_35);
  l_35 = t;
  t = k_35;
  t = type_expression_0_0(t);
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, l_35, n_35);
  z_6 = t;
  t = SSLsetAnnotations(z_6, a_35);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm v_35 = NULL,x_35 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,a_7 = NULL;
  e_36 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_35 = ATgetArgument(t, 0);
      b_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_36);
  v_35 = t;
  t = SSL_is_string(x_35);
  c_36 = t;
  t = b_36;
  t = type_expression_0_0(t);
  d_36 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_36, d_36);
  a_7 = t;
  t = SSLsetAnnotations(a_7, v_35);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_f_7;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL;
      w_41 = t;
      if(match_cons(t, sym_SDef_3))
        {
          x_41 = ATgetArgument(t, 0);
          y_41 = ATgetArgument(t, 1);
          z_41 = ATgetArgument(t, 2);
          {
            ATerm a_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,s_6 = NULL;
            t = SSLgetAnnotations(w_41);
            a_29 = t;
            t = SSL_is_string(x_41);
            e_29 = t;
            t = y_41;
            t = map_1_0(d_1, t);
            f_29 = t;
            t = z_41;
            t = strategy_expression_0_0(t);
            g_29 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, e_29, f_29, g_29);
            s_6 = t;
            t = SSLsetAnnotations(s_6, a_29);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              x_41 = ATgetArgument(t, 0);
              y_41 = ATgetArgument(t, 1);
              z_41 = ATgetArgument(t, 2);
              u_41 = ATgetArgument(t, 3);
              {
                ATerm a_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,v_6 = NULL;
                t = SSLgetAnnotations(w_41);
                a_30 = t;
                t = SSL_is_string(x_41);
                f_30 = t;
                t = y_41;
                t = map_1_0(e_1, t);
                g_30 = t;
                t = z_41;
                t = map_1_0(f_1, t);
                h_30 = t;
                t = u_41;
                t = strategy_expression_0_0(t);
                i_30 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, f_30, g_30, h_30, i_30);
                v_6 = t;
                t = SSLsetAnnotations(v_6, a_30);
              }
            }
          else
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  x_41 = ATgetArgument(t, 0);
                  y_41 = ATgetArgument(t, 1);
                  z_41 = ATgetArgument(t, 2);
                  u_41 = ATgetArgument(t, 3);
                  {
                    ATerm g_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,u_32 = NULL,y_6 = NULL;
                    t = SSLgetAnnotations(w_41);
                    g_32 = t;
                    t = SSL_is_string(x_41);
                    o_32 = t;
                    t = y_41;
                    t = map_1_0(g_1, t);
                    p_32 = t;
                    t = z_41;
                    t = map_1_0(j_1, t);
                    q_32 = t;
                    t = u_41;
                    t = strategy_expression_0_0(t);
                    u_32 = t;
                    t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, o_32, p_32, q_32, u_32);
                    y_6 = t;
                    t = SSLsetAnnotations(y_6, g_32);
                  }
                }
              else
                {
                  ATerm p_34 = NULL,u_34 = NULL,w_34 = NULL,x_34 = NULL,b_7 = NULL;
                  if(match_cons(t, sym_ExtSDef_3))
                    {
                      x_41 = ATgetArgument(t, 0);
                      y_41 = ATgetArgument(t, 1);
                      z_41 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_41);
                  p_34 = t;
                  t = SSL_is_string(x_41);
                  u_34 = t;
                  t = y_41;
                  t = map_1_0(m_1, t);
                  w_34 = t;
                  t = z_41;
                  t = map_1_0(x_1, t);
                  x_34 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDef_3, u_34, w_34, x_34);
                  b_7 = t;
                  t = SSLsetAnnotations(b_7, p_34);
                }
            }
        }
      LocalPopChoice(h_7);
    }
  else
    {
      t = g_7;
      t = debug_1_0(y_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm t_88 (ATerm), ATerm t)
{
  static ATerm s_42 (ATerm t)
  {
    ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
    p_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_42;
      }
    else
      {
        ATerm s_36 = NULL,v_36 = NULL,w_36 = NULL,f_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_42 = ATgetFirst((ATermList) t);
            r_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_42);
        s_36 = t;
        t = q_42;
        t = t_88(t);
        v_36 = t;
        t = r_42;
        t = s_42(t);
        w_36 = t;
        t = (ATerm) ATinsert(CheckATermList(w_36), v_36);
        f_8 = t;
        t = SSLsetAnnotations(f_8, s_36);
      }
    return(t);
  }
  t = s_42(t);
  return(t);
}
static ATerm a_4 (ATerm t_37, ATerm u_37, ATerm t)
{
  ATerm u_42 = NULL;
  t = SSL_fputc(t_37, u_37);
  u_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_42);
  return(t);
}
static ATerm b_4 (ATerm o_22, ATerm p_22, ATerm t)
{
  ATerm v_42 = NULL;
  t = SSL_write_term_to_stream_text(o_22, p_22);
  v_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_42);
  return(t);
}
static ATerm d_4 (ATerm k_88 (ATerm), ATerm s_142, ATerm u_22, ATerm t)
{
  ATerm w_42 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_142, term_i_7);
  t = h_4(t);
  w_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_42, u_22);
  t = k_88(t);
  t = fclose_0_0(t);
  t = u_22;
  return(t);
}
static ATerm c_4 (ATerm k_22, ATerm l_22, ATerm t)
{
  ATerm x_42 = NULL;
  t = SSL_write_term_to_stream_baf(k_22, l_22);
  x_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_42);
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
  ATerm x_37 = NULL,y_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_7 = ATgetArgument(t, 0);
      if(match_cons(j_7, sym_Stream_1))
        {
          x_37 = ATgetArgument(j_7, 0);
        }
      else
        _fail(t);
      y_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_4(x_37, y_37, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm v_41 = NULL,e_42 = NULL,f_42 = NULL,y_42 = NULL,z_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_7 = ATgetArgument(t, 0);
      if(match_cons(k_7, sym_Stream_1))
        {
          y_42 = ATgetArgument(k_7, 0);
        }
      else
        _fail(t);
      z_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4(y_42, z_42, t);
  v_41 = t;
  t = term_m_7;
  e_42 = t;
  t = v_41;
  if(match_cons(t, sym_Stream_1))
    {
      f_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_7, v_41);
  t = a_4(e_42, f_42, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,l_44 = NULL,m_44 = NULL,n_8 = NULL,k_8 = NULL;
  c_43 = t;
  if(match_cons(t, sym__2))
    {
      j_43 = ATgetArgument(t, 0);
      k_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_43);
  i_43 = t;
  t = j_43;
  {
    ATerm n_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((b_43 != NULL) && (b_43 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_43 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_1, t);
        LocalPopChoice(p_7);
      }
    else
      {
        t = n_7;
        t = term_q_7;
        b_43 = t;
      }
  }
  l_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_43, k_43);
  k_8 = t;
  t = SSLsetAnnotations(k_8, i_43);
  t = c_43;
  if(match_cons(t, sym__2))
    {
      e_43 = ATgetArgument(t, 0);
      f_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_43);
  d_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_43, (ATerm) ATmakeAppl(sym__2, not_null(b_43), f_43));
  n_8 = t;
  t = SSLsetAnnotations(n_8, d_43);
  h_43 = t;
  if(match_cons(t, sym__2))
    {
      l_44 = ATgetArgument(t, 0);
      m_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_7 = t;
    int s_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_37 = NULL,m_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,q_8 = NULL;
        t = SSLgetAnnotations(h_43);
        j_37 = t;
        t = l_44;
        t = fetch_1_0(a_2, t);
        m_37 = t;
        t = m_44;
        if(match_cons(t, sym__2))
          {
            r_37 = ATgetArgument(t, 0);
            s_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_4(b_2, r_37, s_37, t);
        q_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_37, q_37);
        q_8 = t;
        t = SSLsetAnnotations(q_8, j_37);
        LocalPopChoice(s_7);
      }
    else
      {
        t = r_7;
        {
          ATerm g_38 = NULL,m_38 = NULL,o_38 = NULL,p_38 = NULL,u_8 = NULL;
          t = SSLgetAnnotations(h_43);
          g_38 = t;
          t = m_44;
          if(match_cons(t, sym__2))
            {
              o_38 = ATgetArgument(t, 0);
              p_38 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_4(c_2, o_38, p_38, t);
          m_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_44, m_38);
          u_8 = t;
          t = SSLsetAnnotations(u_8, g_38);
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
ATerm apply_strategy_1_0 (ATerm t_105 (ATerm), ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL;
  t_44 = t;
  t = dtime_0_0(t);
  t = t_44;
  t = t_105(t);
  s_44 = t;
  t = dtime_0_0(t);
  p_44 = t;
  t = s_44;
  if(match_cons(t, sym__2))
    {
      q_44 = ATgetArgument(t, 0);
      r_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_44), (ATerm) ATmakeAppl(sym_Runtime_1, p_44)), r_44);
  return(t);
}
static ATerm h_45 (ATerm b_45, ATerm t)
{
  t = SSL_fclose(b_45);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL;
  f_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_45 = ATgetArgument(t, 0);
      {
        ATerm t_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_45);
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
            t = h_45(f_45, t);
          }
      }
    }
  else
    {
      t = h_45(f_45, t);
    }
  return(t);
}
static ATerm e_4 (ATerm q_22, ATerm t)
{
  t = SSL_read_term_from_stream(q_22);
  return(t);
}
static ATerm f_4 (ATerm m_36, ATerm n_36, ATerm t)
{
  t = SSL_strcat(m_36, n_36);
  return(t);
}
static ATerm g_4 (ATerm v_37, ATerm w_37, ATerm t)
{
  ATerm i_45 = NULL;
  t = SSL_fopen(v_37, w_37);
  i_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_45);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_45 = NULL;
  t = SSL_stdin_stream();
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_45);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_45 = NULL;
  t = SSL_stdout_stream();
  k_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_45);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_45 = NULL;
  t = SSL_stderr_stream();
  l_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_45);
  return(t);
}
static ATerm s_46 (ATerm r_45, ATerm t)
{
  ATerm s_45 = NULL;
  t = SSL_explode_term(r_45);
  if(match_cons(t, sym__2))
    {
      ATerm w_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_7 = ATgetArgument(t, 1);
        if(((ATgetType(y_7) == AT_LIST) && !(ATisEmpty(y_7))))
          {
            s_45 = ATgetFirst((ATermList) y_7);
            {
              ATerm z_7 = (ATerm) ATgetNext((ATermList) y_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_45;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_45;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_45;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_45;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm t_46 (ATerm v_45, ATerm w_45, ATerm x_45, ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL,d_46 = NULL,c_9 = NULL;
  t = SSLgetAnnotations(x_45);
  a_46 = t;
  t = v_45;
  if(match_cons(t, sym_Path_1))
    {
      d_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_46, w_45);
  c_9 = t;
  t = SSLsetAnnotations(c_9, a_46);
  if(match_cons(t, sym__2))
    {
      y_45 = ATgetArgument(t, 0);
      z_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(y_45, z_45, t);
  return(t);
}
static ATerm u_46 (ATerm f_46, ATerm g_46, ATerm h_46, ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL,n_46 = NULL,d_9 = NULL;
  t = SSLgetAnnotations(h_46);
  k_46 = t;
  t = SSL_is_string(f_46);
  n_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_46, g_46);
  d_9 = t;
  t = SSLsetAnnotations(d_9, k_46);
  if(match_cons(t, sym__2))
    {
      i_46 = ATgetArgument(t, 0);
      j_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(i_46, j_46, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
  p_46 = t;
  if(match_cons(t, sym__2))
    {
      q_46 = ATgetArgument(t, 0);
      r_46 = ATgetArgument(t, 1);
      {
        ATerm a_8 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_46(p_46, t);
            LocalPopChoice(b_8);
          }
        else
          {
            t = a_8;
            {
              ATerm c_8 = t;
              int d_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_46(q_46, r_46, p_46, t);
                  LocalPopChoice(d_8);
                }
              else
                {
                  t = c_8;
                  t = u_46(q_46, r_46, p_46, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_46(p_46, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL,d_47 = NULL;
  d_47 = t;
  {
    ATerm e_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_47, term_h_8);
        t = h_4(t);
        LocalPopChoice(g_8);
      }
    else
      {
        t = e_8;
        {
          ATerm g_47 = NULL,h_47 = NULL;
          t = term_i_8;
          h_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_8, d_47);
          t = f_4(h_47, d_47, t);
          g_47 = t;
          t = SSL_perror(g_47);
          _fail(t);
        }
      }
  }
  x_46 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_4(y_46, t);
  w_46 = t;
  t = x_46;
  t = fclose_0_0(t);
  t = w_46;
  return(t);
}
ATerm fetch_1_0 (ATerm d_89 (ATerm), ATerm t)
{
  static ATerm e_48 (ATerm t)
  {
    ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL;
    b_48 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_48 = ATgetFirst((ATermList) t);
        d_48 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_8 = t;
      int m_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_49 = NULL,d_49 = NULL,k_9 = NULL;
          t = SSLgetAnnotations(b_48);
          a_49 = t;
          t = c_48;
          t = d_89(t);
          d_49 = t;
          t = (ATerm) ATinsert(CheckATermList(d_48), d_49);
          k_9 = t;
          t = SSLsetAnnotations(k_9, a_49);
          LocalPopChoice(m_8);
        }
      else
        {
          t = l_8;
          {
            ATerm p_51 = NULL,s_51 = NULL,l_9 = NULL;
            t = SSLgetAnnotations(b_48);
            p_51 = t;
            t = d_48;
            t = e_48(t);
            s_51 = t;
            t = (ATerm) ATinsert(CheckATermList(s_51), c_48);
            l_9 = t;
            t = SSLsetAnnotations(l_9, p_51);
          }
        }
    }
    return(t);
  }
  t = e_48(t);
  return(t);
}
static ATerm m_4 (ATerm a_54, ATerm b_54, ATerm t)
{
  ATerm h_48 = NULL;
  t = lookup_table_0_1(a_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_4(b_54, h_48, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm c_104 (ATerm), ATerm t)
{
  ATerm k_48 = NULL;
  k_48 = t;
  {
    ATerm r_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL;
        t = term_t_8;
        n_48 = t;
        t = term_v_8;
        o_48 = t;
        t = term_w_8;
        t = m_4(n_48, o_48, t);
        m_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_48, term_x_8);
        t = geq_0_0(t);
        t = k_48;
        t = c_104(t);
        LocalPopChoice(s_8);
      }
    else
      {
        t = r_8;
        t = k_48;
      }
  }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm r_48 = NULL;
  r_48 = t;
  if(match_string(t, "-k"))
    {
      t = r_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_48;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
  s_48 = t;
  t = SSL_string_to_int(s_48);
  t_48 = t;
  t = term_y_8;
  u_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_8, t_48);
  t = p_4(u_48, t_48, t);
  t = s_48;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_3, f_3, g_3, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm w_48 = NULL;
  w_48 = t;
  if(match_string(t, "-S"))
    {
      t = w_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_48;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL;
  t = term_v_8;
  x_48 = t;
  t = term_a_9;
  y_48 = t;
  t = term_b_9;
  t = p_4(x_48, y_48, t);
  t = term_e_9;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_f_9;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm z_48 = NULL,e_49 = NULL,f_49 = NULL;
  z_48 = t;
  t = SSL_string_to_int(z_48);
  e_49 = t;
  t = term_v_8;
  f_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_8, e_49);
  t = p_4(f_49, e_49, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_48);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_j_9;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL;
  t = term_m_9;
  g_49 = t;
  t = term_b_6;
  h_49 = t;
  t = term_n_9;
  t = p_4(g_49, h_49, t);
  t = term_p_9;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_r_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, i_3, j_3, t);
      LocalPopChoice(u_9);
    }
  else
    {
      t = t_9;
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_3, m_3, n_3, t);
            LocalPopChoice(w_9);
          }
        else
          {
            t = v_9;
            t = Option_3_0(o_3, p_3, s_3, t);
          }
      }
    }
  return(t);
}
static ATerm p_4 (ATerm m_47, ATerm n_47, ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL;
  t = term_t_8;
  i_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_8, m_47, n_47);
  t = lookup_table_0_1(i_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(m_47, n_47, j_49, t);
  t = (ATerm) ATmakeAppl(sym__3, term_t_8, m_47, n_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
      t = term_b_6;
      t = e_0(t);
      p_49 = t;
      t = term_x_9;
      q_49 = t;
      t = term_z_9;
      r_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_9, term_z_9, p_49);
      t = n_4(q_49, r_49, p_49, t);
      _fail(t);
    }
  else
    {
      ATerm u_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_49 = ATgetFirst((ATermList) t);
          o_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_49;
      t = c_0(t);
      t = term_b_6;
      t = d_0(t);
      u_49 = t;
      t = (ATerm) ATinsert(CheckATermList(o_49), u_49);
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm w_49 = NULL;
  w_49 = t;
  if(match_string(t, "-o"))
    {
      t = w_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_49;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL;
  x_49 = t;
  t = term_b_10;
  y_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_10, x_49);
  t = p_4(y_49, x_49, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_49);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_d_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_3, u_3, v_3, t);
  return(t);
}
static ATerm n_4 (ATerm h_52, ATerm i_52, ATerm g_52, ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL;
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_52, i_52);
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
        t = (ATerm) ATmakeAppl(sym__2, h_52, i_52);
        t = m_4(h_52, i_52, t);
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
        t = (ATerm) ATempty;
      }
  }
  b_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_52, i_52, (ATerm) ATinsert(CheckATermList(b_50), g_52));
  t = lookup_table_0_1(h_52, t);
  e_50 = t;
  t = (ATerm) ATinsert(CheckATermList(b_50), g_52);
  c_50 = t;
  t = e_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(i_52, c_50, d_50, t);
  t = a_50;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
      t = term_b_6;
      t = n_0(t);
      p_50 = t;
      t = term_x_9;
      q_50 = t;
      t = term_z_9;
      r_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_9, term_z_9, p_50);
      t = n_4(q_50, r_50, p_50, t);
      _fail(t);
    }
  else
    {
      ATerm v_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_50 = ATgetFirst((ATermList) t);
          m_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_50 = ATgetFirst((ATermList) t);
          o_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_50;
      t = k_0(t);
      t = n_50;
      t = l_0(t);
      v_50 = t;
      t = (ATerm) ATinsert(CheckATermList(o_50), v_50);
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm x_50 = NULL;
  x_50 = t;
  if(match_string(t, "-i"))
    {
      t = x_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_50;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL;
  y_50 = t;
  t = term_j_10;
  z_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, y_50);
  t = p_4(z_50, y_50, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_50);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_l_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_3, x_3, y_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_6;
  t = whoami_0_0(t);
  a_51 = t;
  t = term_d_6;
  c_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_10), a_51);
  d_51 = t;
  t = SSL_printnl(c_51, d_51);
  t = term_h_6;
  b_51 = t;
  t = SSL_exit(b_51);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL;
  t = term_t_8;
  e_51 = t;
  t = term_o_10;
  f_51 = t;
  t = term_p_10;
  t = m_4(e_51, f_51, t);
  return(t);
}
static ATerm i_4 (ATerm p_40, ATerm q_40, ATerm t)
{
  ATerm r_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_40, q_40);
      LocalPopChoice(t_10);
    }
  else
    {
      t = r_10;
      t = SSL_addr(p_40, q_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_95 (ATerm), ATerm l_95 (ATerm), ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
  h_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_51;
      t = k_95(t);
    }
  else
    {
      ATerm m_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_51 = ATgetFirst((ATermList) t);
          j_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_51;
      t = foldr_2_0(k_95, l_95, t);
      m_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_51, m_51);
      t = l_95(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_a_9;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm p_53 = NULL,u_53 = NULL;
  if(match_cons(t, sym__2))
    {
      p_53 = ATgetArgument(t, 0);
      u_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(p_53, u_53, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_51 = NULL,o_52 = NULL,b_53 = NULL;
  t = times_0_0(t);
  b_53 = t;
  t = SSL_explode_term(b_53);
  if(match_cons(t, sym__2))
    {
      ATerm u_10 = ATgetArgument(t, 0);
      o_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_52;
  t = foldr_2_0(z_3, j_4, t);
  u_51 = t;
  t = SSL_TicksToSeconds(u_51);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL;
  j_52 = t;
  if(match_cons(t, sym__2))
    {
      k_52 = ATgetArgument(t, 0);
      l_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_52;
        if((k_52 != t))
          {
            _fail(t);
          }
        t = j_52;
        LocalPopChoice(x_10);
      }
    else
      {
        t = v_10;
        t = (ATerm) ATmakeAppl(sym__2, k_52, l_52);
        {
          ATerm z_10 = t;
          int a_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_52, l_52);
              LocalPopChoice(a_11);
            }
          else
            {
              t = z_10;
              t = SSL_gtr(k_52, l_52);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_52, l_52);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  ATerm p_52 = NULL;
  p_52 = t;
  {
    ATerm b_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL;
        t = term_t_8;
        s_52 = t;
        t = term_v_8;
        t_52 = t;
        t = term_w_8;
        t = m_4(s_52, t_52, t);
        r_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_52, term_h_6);
        t = geq_0_0(t);
        t = p_52;
        t = b_104(t);
        LocalPopChoice(d_11);
      }
    else
      {
        t = b_11;
        t = p_52;
      }
  }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,y_52 = NULL,z_52 = NULL;
  t = run_time_0_0(t);
  v_52 = t;
  t = term_b_6;
  t = whoami_0_0(t);
  w_52 = t;
  t = term_d_6;
  y_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_11), v_52), term_e_11), w_52);
  z_52 = t;
  t = SSL_printnl(y_52, z_52);
  t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_11), v_52), term_e_11), w_52));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_53 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_9;
  a_53 = t;
  t = SSL_exit(a_53);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL;
  l_53 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_53;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_53 = ATgetArgument(t, 0);
          {
            ATerm n_57 = NULL,o_9 = NULL;
            t = SSLgetAnnotations(l_53);
            n_57 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_53);
            o_9 = t;
            t = SSLsetAnnotations(o_9, n_57);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_53;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_106 (ATerm), ATerm t)
{
  ATerm i_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_53 = NULL,e_53 = NULL;
      t = term_t_8;
      d_53 = t;
      t = term_l_11;
      e_53 = t;
      t = term_m_11;
      t = m_4(d_53, e_53, t);
      LocalPopChoice(k_11);
    }
  else
    {
      t = i_11;
      t = fetch_1_0(s_4, t);
    }
  t = r_106(t);
  return(t);
}
static ATerm q_4 (ATerm o_55, ATerm p_55, ATerm q_55, ATerm t)
{
  ATerm n_53 = NULL;
  t = SSL_hashtable_put(q_55, o_55, p_55);
  n_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_53);
  return(t);
}
static ATerm r_4 (ATerm r_55, ATerm s_55, ATerm t)
{
  t = SSL_hashtable_get(s_55, r_55);
  return(t);
}
ATerm lookup_table_0_1 (ATerm t_53, ATerm t)
{
  ATerm c_54 = NULL;
  t = table_hashtable_0_0(t);
  c_54 = t;
  {
    ATerm n_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_60 = NULL;
        t = c_54;
        if(match_cons(t, sym_Hashtable_1))
          {
            m_60 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_4(t_53, m_60, t);
        LocalPopChoice(r_11);
      }
    else
      {
        t = n_11;
        {
          ATerm r_60 = NULL;
          t = t_53;
          t = table_create_0_0(t);
          t = c_54;
          if(match_cons(t, sym_Hashtable_1))
            {
              r_60 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_4(t_53, r_60, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm w_55, ATerm x_55, ATerm t)
{
  ATerm f_54 = NULL;
  t = SSL_hashtable_create(w_55, x_55);
  f_54 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_54);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,k_54 = NULL,l_54 = NULL;
  g_54 = t;
  t = term_s_11;
  k_54 = t;
  t = term_u_11;
  l_54 = t;
  t = g_54;
  t = new_hashtable_0_2(k_54, l_54, t);
  h_54 = t;
  t = g_54;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(g_54, h_54, i_54, t);
  t = g_54;
  return(t);
}
static ATerm k_4 (ATerm t_55, ATerm u_55, ATerm t)
{
  ATerm m_54 = NULL;
  t = SSL_hashtable_remove(u_55, t_55);
  m_54 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_54);
  return(t);
}
static ATerm l_4 (ATerm y_55, ATerm t)
{
  ATerm n_54 = NULL;
  t = SSL_hashtable_destroy(y_55);
  n_54 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_54);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm o_54 = NULL;
  t = SSL_table_hashtable();
  o_54 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_54);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL;
  p_54 = t;
  t = table_hashtable_0_0(t);
  q_54 = t;
  t = lookup_table_0_1(p_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_4(s_54, t);
  t = q_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_4(p_54, r_54, t);
  t = p_54;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm u_54 = NULL,v_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_54 = ATgetFirst((ATermList) t);
      v_54 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_54 = NULL,a_55 = NULL;
        static ATerm t_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_54)), not_null(a_55));
          return(t);
        }
        t = v_54;
        t = i_0(t);
        if(((z_54 != NULL) && (z_54 != t)))
          _fail(t);
        else
          z_54 = t;
        t = u_54;
        t = g_0(t);
        if(((a_55 != NULL) && (a_55 != t)))
          _fail(t);
        else
          a_55 = t;
        t = v_54;
        t = reverse_acc_2_0(g_0, t_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_6;
      t = i_0(t);
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL,c_10 = NULL;
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
  c_10 = t;
  t = SSLsetAnnotations(c_10, g_55);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm k_55 = NULL;
  k_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_55), term_v_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL;
  ATerm w_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_55 = NULL,f_55 = NULL;
      t = term_t_8;
      e_55 = t;
      t = term_o_10;
      f_55 = t;
      t = term_p_10;
      t = m_4(e_55, f_55, t);
      LocalPopChoice(z_11);
    }
  else
    {
      t = w_11;
      t = fetch_1_0(u_4, t);
    }
  t = term_a_12;
  t = echo_0_0(t);
  t = term_x_9;
  c_55 = t;
  t = term_z_9;
  d_55 = t;
  t = term_b_12;
  t = m_4(c_55, d_55, t);
  t = reverse_acc_2_0(_id, v_4, t);
  t = map_1_0(w_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL,v_55 = NULL;
  m_55 = t;
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_55;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_12 = ATgetFirst((ATermList) t);
                ATerm f_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_55;
          }
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        t = (ATerm) ATinsert(ATempty, m_55);
      }
  }
  n_55 = t;
  t = term_q_7;
  v_55 = t;
  t = SSL_printnl(v_55, n_55);
  t = m_55;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL;
  t = term_t_8;
  c_56 = t;
  t = term_o_10;
  d_56 = t;
  t = term_p_10;
  t = m_4(c_56, d_56, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL;
  t = term_h_12;
  e_56 = t;
  t = term_b_6;
  f_56 = t;
  t = term_i_12;
  t = p_4(e_56, f_56, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_j_12;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL;
  t = term_h_12;
  i_56 = t;
  t = term_b_6;
  j_56 = t;
  t = term_i_12;
  t = p_4(i_56, j_56, t);
  t = term_m_12;
  g_56 = t;
  t = term_b_6;
  h_56 = t;
  t = term_n_12;
  t = p_4(g_56, h_56, t);
  t = term_o_12;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_p_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_4, y_4, d_5, t);
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      t = Option_3_0(e_5, g_5, h_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,e_10 = NULL;
  p_56 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_56 = ATgetFirst((ATermList) t);
      m_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_56);
  k_56 = t;
  t = l_56;
  t = a_68(t);
  n_56 = t;
  t = m_56;
  t = b_68(t);
  o_56 = t;
  t = (ATerm) ATinsert(CheckATermList(o_56), n_56);
  e_10 = t;
  t = SSLsetAnnotations(e_10, k_56);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_108 (ATerm), ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL,z_56 = NULL,a_57 = NULL,q_10 = NULL;
  u_56 = t;
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_12;
        t = u_108(t);
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
      }
  }
  t = u_56;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_56 = ATgetFirst((ATermList) t);
      x_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_56);
  v_56 = t;
  t = term_o_10;
  a_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_10, w_56);
  t = p_4(a_57, w_56, t);
  t = x_56;
  {
    static ATerm k_57 (ATerm t)
    {
      ATerm v_12 = t;
      int w_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_12 = t;
          int y_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_57 = NULL;
              d_57 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_57;
              LocalPopChoice(y_12);
            }
          else
            {
              t = x_12;
              t = u_108(t);
              t = Cons_2_0(_id, k_57, t);
            }
          LocalPopChoice(w_12);
        }
      else
        {
          t = v_12;
          {
            ATerm g_57 = NULL,h_57 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_57 = ATgetFirst((ATermList) t);
                h_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_57), (ATerm) ATmakeAppl(sym_Undefined_1, g_57));
          }
        }
      return(t);
    }
    t = k_57(t);
  }
  z_56 = t;
  t = (ATerm) ATinsert(CheckATermList(z_56), (ATerm) ATmakeAppl(sym_Program_1, w_56));
  q_10 = t;
  t = SSLsetAnnotations(q_10, v_56);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm x_57 = NULL;
  x_57 = t;
  if(match_string(t, "--help"))
    {
      t = x_57;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_57;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_57;
        }
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL;
  t = term_l_11;
  y_57 = t;
  t = term_b_6;
  z_57 = t;
  t = term_z_12;
  t = p_4(y_57, z_57, t);
  t = term_a_13;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_c_13;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_108 (ATerm), ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL;
  r_57 = t;
  t = term_x_9;
  s_57 = t;
  t = term_d_13;
  t = lookup_table_0_1(s_57, t);
  w_57 = t;
  t = term_z_9;
  t_57 = t;
  t = (ATerm) ATempty;
  u_57 = t;
  t = w_57;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(t_57, u_57, v_57, t);
  t = r_57;
  {
    static ATerm i_5 (ATerm t)
    {
      ATerm f_13 = t;
      int g_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_108(t);
          LocalPopChoice(g_13);
        }
      else
        {
          t = f_13;
          {
            ATerm h_13 = t;
            int i_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_5, k_5, l_5, t);
                LocalPopChoice(i_13);
              }
            else
              {
                t = h_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_5, t);
  }
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_58 = NULL;
        k_58 = t;
        {
          ATerm l_13 = t;
          int m_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_60 = NULL;
              t = k_58;
              {
                ATerm o_13 = t;
                int p_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_60 = NULL,x_60 = NULL;
                    t = term_t_8;
                    w_60 = t;
                    t = term_l_11;
                    x_60 = t;
                    t = term_m_11;
                    t = m_4(w_60, x_60, t);
                    LocalPopChoice(p_13);
                  }
                else
                  {
                    t = o_13;
                    t = fetch_1_0(m_5, t);
                  }
              }
              t = k_58;
              t = default_system_usage_0_0(t);
              t = term_a_9;
              v_60 = t;
              t = SSL_exit(v_60);
              LocalPopChoice(m_13);
            }
          else
            {
              t = l_13;
              {
                ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL;
                t = term_t_8;
                c_61 = t;
                t = term_h_12;
                d_61 = t;
                t = term_q_13;
                t = m_4(c_61, d_61, t);
                t = k_58;
                t = default_system_about_0_0(t);
                t = term_a_9;
                b_61 = t;
                t = SSL_exit(b_61);
              }
            }
        }
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        {
          ATerm r_13 = t;
          int s_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL;
              static ATerm n_5 (ATerm t)
              {
                ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL,s_10 = NULL;
                q_58 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_58 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_58);
                o_58 = t;
                t = p_58;
                if(((p_57 != NULL) && (p_57 != t)))
                  _fail(t);
                else
                  p_57 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_58);
                s_10 = t;
                t = SSLsetAnnotations(s_10, o_58);
                return(t);
              }
              t = fetch_1_0(n_5, t);
              t = term_d_6;
              m_58 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_57)), term_v_13);
              n_58 = t;
              t = SSL_printnl(m_58, n_58);
              t = (ATerm) ATmakeAppl(sym__2, term_d_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_57)), term_v_13));
              t = default_system_usage_0_0(t);
              t = term_h_6;
              l_58 = t;
              t = SSL_exit(l_58);
              LocalPopChoice(s_13);
            }
          else
            {
              t = r_13;
            }
        }
      }
  }
  q_57 = t;
  t = term_x_9;
  t = table_destroy_0_0(t);
  t = q_57;
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL;
  t = parse_options_1_0(t_106, t);
  v_58 = t;
  t = term_w_13;
  t = table_create_0_0(t);
  t = term_w_13;
  w_58 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_13, term_x_13, v_58);
  t = lookup_table_0_1(w_58, t);
  z_58 = t;
  t = term_x_13;
  x_58 = t;
  t = z_58;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(x_58, v_58, y_58, t);
  t = v_58;
  t = v_106(t);
  {
    ATerm y_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_106, t);
        LocalPopChoice(z_13);
      }
    else
      {
        t = y_13;
        {
          ATerm a_14 = t;
          int b_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_106(t);
              t = report_success_0_0(t);
              LocalPopChoice(b_14);
            }
          else
            {
              t = a_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = if_verbose2_1_0(x_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL;
  t = term_c_14;
  a_59 = t;
  t = term_b_6;
  b_59 = t;
  t = term_d_14;
  t = p_4(a_59, b_59, t);
  t = term_e_14;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_f_14;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL;
  c_59 = t;
  t = term_t_8;
  g_59 = t;
  t = term_o_10;
  h_59 = t;
  t = term_p_10;
  t = m_4(g_59, h_59, t);
  d_59 = t;
  t = term_d_6;
  e_59 = t;
  t = (ATerm) ATinsert(ATempty, d_59);
  f_59 = t;
  t = SSL_printnl(e_59, f_59);
  t = c_59;
  return(t);
}
ATerm iowrap_3_0 (ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm t)
{
  static ATerm o_5 (ATerm t)
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_106(t);
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        {
          ATerm j_14 = t;
          int l_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(l_14);
            }
          else
            {
              t = j_14;
              {
                ATerm n_14 = t;
                int o_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(o_14);
                  }
                else
                  {
                    t = n_14;
                    {
                      ATerm p_14 = t;
                      int q_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(s_5, v_5, w_5, t);
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
                                t = verbose_option_0_0(t);
                                LocalPopChoice(s_14);
                              }
                            else
                              {
                                t = r_14;
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
  static ATerm r_5 (ATerm t)
  {
    ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL;
    j_59 = t;
    {
      ATerm t_14 = t;
      int u_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm y_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((i_59 != NULL) && (i_59 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_59 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_5, t);
          LocalPopChoice(u_14);
        }
      else
        {
          t = t_14;
          t = term_v_14;
          i_59 = t;
        }
    }
    t = not_null(i_59);
    t = ReadFromFile_0_0(t);
    k_59 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_59, k_59);
    t = apply_strategy_1_0(c_106, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(o_5, e_106, p_5, r_5, t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,q_11 = NULL;
  r_59 = t;
  if(match_cons(t, sym__2))
    {
      o_59 = ATgetArgument(t, 0);
      p_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_59);
  n_59 = t;
  t = p_59;
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_60 = NULL,g_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,p_11 = NULL,o_11 = NULL,j_11 = NULL,c_11 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            i_60 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_59);
        g_61 = t;
        t = i_60;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_61 = ATgetFirst((ATermList) t);
            k_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_60);
        i_61 = t;
        t = k_61;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_61 = ATgetFirst((ATermList) t);
            o_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_61);
        m_61 = t;
        t = n_61;
        if(match_cons(t, sym_Strategies_1))
          {
            r_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_61);
        q_61 = t;
        t = r_61;
        t = map_1_0(strategy_definition_0_0, t);
        s_61 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, s_61);
        c_11 = t;
        t = SSLsetAnnotations(c_11, q_61);
        t_61 = t;
        t = o_61;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(o_61), t_61);
        j_11 = t;
        t = SSLsetAnnotations(j_11, m_61);
        p_61 = t;
        t = (ATerm) ATinsert(CheckATermList(p_61), j_61);
        o_11 = t;
        t = SSLsetAnnotations(o_11, i_61);
        l_61 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, l_61);
        p_11 = t;
        t = SSLsetAnnotations(p_11, g_61);
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = debug_1_0(a_6, t);
      }
  }
  q_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_59, q_59);
  q_11 = t;
  t = SSLsetAnnotations(q_11, n_59);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_y_14;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(z_5, _fail, default_usage_0_0, t);
  return(t);
}

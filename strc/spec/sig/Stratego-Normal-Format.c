#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Cong_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
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
Symbol sym_Mod_2;
Symbol sym_VarDec_2;
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
static void init_module_constructors (void)
{
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
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
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
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
}
ATerm term_j_15;
ATerm term_g_15;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_j_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_s_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_p_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_r_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_r_7;
ATerm term_n_7;
ATerm term_j_7;
ATerm term_o_6;
ATerm term_g_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym__2, term_r_8, term_u_8);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym__2, term_u_8, term_z_8);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_8);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_y_5);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym__2, term_r_8, term_f_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__2, term_r_8, term_w_10);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_r_9);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym__2, term_s_11, term_y_5);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__2, term_c_12, term_y_5);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_y_5);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym__3, term_q_9, term_r_9, (ATerm) ATempty);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym__2, term_r_8, term_s_11);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym__2, term_j_14, term_y_5);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm debug_1_0 (ATerm q_88 (ATerm), ATerm t);
ATerm list_1_0 (ATerm f_89 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
ATerm term_expression_0_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm strategy_expression_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm strategy_definition_0_0 (ATerm t);
ATerm map_1_0 (ATerm b_89 (ATerm), ATerm t);
static ATerm a_4 (ATerm t_37, ATerm u_37, ATerm t);
static ATerm b_4 (ATerm o_22, ATerm p_22, ATerm t);
static ATerm d_4 (ATerm s_88 (ATerm), ATerm b_143, ATerm u_22, ATerm t);
static ATerm c_4 (ATerm k_22, ATerm l_22, ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm j_106 (ATerm), ATerm t);
static ATerm c_43 (ATerm w_42, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_4 (ATerm q_22, ATerm t);
static ATerm f_4 (ATerm m_36, ATerm n_36, ATerm t);
static ATerm g_4 (ATerm v_37, ATerm w_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_44 (ATerm m_43, ATerm t);
static ATerm o_44 (ATerm q_43, ATerm r_43, ATerm s_43, ATerm t);
static ATerm p_44 (ATerm a_44, ATerm b_44, ATerm c_44, ATerm t);
static ATerm h_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_89 (ATerm), ATerm t);
static ATerm m_4 (ATerm a_54, ATerm b_54, ATerm t);
ATerm if_verbose2_1_0 (ATerm s_104 (ATerm), ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_4 (ATerm m_47, ATerm n_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_4 (ATerm h_52, ATerm i_52, ATerm g_52, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_4 (ATerm p_40, ATerm q_40, ATerm t);
ATerm foldr_2_0 (ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_104 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm need_help_1_0 (ATerm h_107 (ATerm), ATerm t);
static ATerm q_4 (ATerm z_55, ATerm a_56, ATerm b_56, ATerm t);
static ATerm r_4 (ATerm c_56, ATerm d_56, ATerm t);
ATerm lookup_table_0_1 (ATerm t_53, ATerm t);
ATerm new_hashtable_0_2 (ATerm h_56, ATerm i_56, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm k_4 (ATerm e_56, ATerm f_56, ATerm t);
static ATerm l_4 (ATerm j_56, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm l_68 (ATerm), ATerm m_68 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_109 (ATerm), ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm parse_options_1_0 (ATerm j_109 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm iowrap_3_0 (ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
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
  t = term_y_5;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_z_5;
  v_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_6), b_0), term_a_6);
  l_1 = t;
  t = SSL_printnl(v_0, l_1);
  t = term_c_6;
  t_0 = t;
  t = SSL_exit(t_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm q_88 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,q_1 = NULL,r_1 = NULL;
  n_1 = t;
  t = q_88(t);
  o_1 = t;
  t = term_z_5;
  q_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_1), o_1);
  r_1 = t;
  t = SSL_printnl(q_1, r_1);
  t = n_1;
  return(t);
}
ATerm list_1_0 (ATerm f_89 (ATerm), ATerm t)
{
  t = map_1_0(f_89, t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_d_6;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm e_6 = t;
  int f_6 = stack_ptr;
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
      LocalPopChoice(f_6);
    }
  else
    {
      t = e_6;
      t = debug_1_0(f_0, t);
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm s_19 = NULL;
  s_19 = t;
  t = SSL_is_string(s_19);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,v_22 = NULL,w_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,n_5 = NULL;
  b_23 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      j_22 = ATgetArgument(t, 0);
      r_22 = ATgetArgument(t, 1);
      s_22 = ATgetArgument(t, 2);
      t_22 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_23);
  i_22 = t;
  t = SSL_is_string(j_22);
  v_22 = t;
  t = r_22;
  t = map_1_0(p_0, t);
  w_22 = t;
  t = s_22;
  t = map_1_0(q_0, t);
  z_22 = t;
  t = t_22;
  t = strategy_expression_0_0(t);
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, v_22, w_22, z_22, a_23);
  n_5 = t;
  t = SSLsetAnnotations(n_5, i_22);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm d_25 = NULL,h_25 = NULL,i_25 = NULL,l_25 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,q_27 = NULL,k_5 = NULL,j_5 = NULL;
  q_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      h_25 = ATgetArgument(t, 0);
      i_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_27);
  d_25 = t;
  t = SSL_is_string(h_25);
  l_25 = t;
  t = i_25;
  if(match_cons(t, sym_FunType_2))
    {
      k_27 = ATgetArgument(t, 0);
      l_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_25);
  j_27 = t;
  t = k_27;
  t = list_1_0(_id, t);
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym_FunType_2, m_27, l_27);
  j_5 = t;
  t = SSLsetAnnotations(j_5, j_27);
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, l_25, n_27);
  k_5 = t;
  t = SSLsetAnnotations(k_5, d_25);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm t_27 = NULL,v_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,c_28 = NULL,e_28 = NULL,m_5 = NULL,l_5 = NULL;
  e_28 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      v_27 = ATgetArgument(t, 0);
      x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_28);
  t_27 = t;
  t = SSL_is_string(v_27);
  y_27 = t;
  t = x_27;
  if(match_cons(t, sym_ConstType_1))
    {
      a_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_27);
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, a_28);
  l_5 = t;
  t = SSLsetAnnotations(l_5, z_27);
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_27, c_28);
  m_5 = t;
  t = SSLsetAnnotations(m_5, t_27);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_g_6;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm h_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_28 = NULL,a_29 = NULL,c_29 = NULL,h_29 = NULL;
      a_29 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = a_29;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = a_29;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  c_29 = ATgetArgument(t, 0);
                  {
                    ATerm m_7 = NULL,o_7 = NULL,e_3 = NULL;
                    t = SSLgetAnnotations(a_29);
                    m_7 = t;
                    t = c_29;
                    t = strategy_expression_0_0(t);
                    o_7 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, o_7);
                    e_3 = t;
                    t = SSLsetAnnotations(e_3, m_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      c_29 = ATgetArgument(t, 0);
                      {
                        ATerm u_7 = NULL,w_7 = NULL,f_3 = NULL;
                        t = SSLgetAnnotations(a_29);
                        u_7 = t;
                        t = c_29;
                        t = strategy_expression_0_0(t);
                        w_7 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, w_7);
                        f_3 = t;
                        t = SSLsetAnnotations(f_3, u_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          c_29 = ATgetArgument(t, 0);
                          h_29 = ATgetArgument(t, 1);
                          {
                            ATerm d_8 = NULL,g_8 = NULL,h_8 = NULL,m_3 = NULL;
                            t = SSLgetAnnotations(a_29);
                            d_8 = t;
                            t = c_29;
                            t = strategy_expression_0_0(t);
                            g_8 = t;
                            t = h_29;
                            t = strategy_expression_0_0(t);
                            h_8 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, g_8, h_8);
                            m_3 = t;
                            t = SSLsetAnnotations(m_3, d_8);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              c_29 = ATgetArgument(t, 0);
                              h_29 = ATgetArgument(t, 1);
                              {
                                ATerm p_8 = NULL,s_8 = NULL,t_8 = NULL,o_3 = NULL;
                                t = SSLgetAnnotations(a_29);
                                p_8 = t;
                                t = c_29;
                                t = strategy_expression_0_0(t);
                                s_8 = t;
                                t = h_29;
                                t = strategy_expression_0_0(t);
                                t_8 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, s_8, t_8);
                                o_3 = t;
                                t = SSLsetAnnotations(o_3, p_8);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  c_29 = ATgetArgument(t, 0);
                                  h_29 = ATgetArgument(t, 1);
                                  {
                                    ATerm b_9 = NULL,e_9 = NULL,f_9 = NULL,p_3 = NULL;
                                    t = SSLgetAnnotations(a_29);
                                    b_9 = t;
                                    t = c_29;
                                    t = strategy_expression_0_0(t);
                                    e_9 = t;
                                    t = h_29;
                                    t = strategy_expression_0_0(t);
                                    f_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, e_9, f_9);
                                    p_3 = t;
                                    t = SSLsetAnnotations(p_3, b_9);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      c_29 = ATgetArgument(t, 0);
                                      h_29 = ATgetArgument(t, 1);
                                      v_28 = ATgetArgument(t, 2);
                                      {
                                        ATerm o_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,x_3 = NULL;
                                        t = SSLgetAnnotations(a_29);
                                        o_9 = t;
                                        t = c_29;
                                        t = strategy_expression_0_0(t);
                                        s_9 = t;
                                        t = h_29;
                                        t = strategy_expression_0_0(t);
                                        t_9 = t;
                                        t = v_28;
                                        t = strategy_expression_0_0(t);
                                        u_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, s_9, t_9, u_9);
                                        x_3 = t;
                                        t = SSLsetAnnotations(x_3, o_9);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          c_29 = ATgetArgument(t, 0);
                                          h_29 = ATgetArgument(t, 1);
                                          {
                                            ATerm e_10 = NULL,j_10 = NULL,k_10 = NULL,o_4 = NULL;
                                            t = SSLgetAnnotations(a_29);
                                            e_10 = t;
                                            t = c_29;
                                            t = strategy_expression_0_0(t);
                                            j_10 = t;
                                            t = h_29;
                                            t = strategy_expression_0_0(t);
                                            k_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, j_10, k_10);
                                            o_4 = t;
                                            t = SSLsetAnnotations(o_4, e_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              c_29 = ATgetArgument(t, 0);
                                              h_29 = ATgetArgument(t, 1);
                                              {
                                                ATerm y_10 = NULL,b_11 = NULL,c_11 = NULL,s_4 = NULL;
                                                t = SSLgetAnnotations(a_29);
                                                y_10 = t;
                                                t = c_29;
                                                t = strategy_expression_0_0(t);
                                                b_11 = t;
                                                t = h_29;
                                                t = strategy_expression_0_0(t);
                                                c_11 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, b_11, c_11);
                                                s_4 = t;
                                                t = SSLsetAnnotations(s_4, y_10);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  c_29 = ATgetArgument(t, 0);
                                                  h_29 = ATgetArgument(t, 1);
                                                  v_28 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm p_11 = NULL,u_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,f_12 = NULL,w_4 = NULL,v_4 = NULL;
                                                    t = SSLgetAnnotations(a_29);
                                                    p_11 = t;
                                                    t = c_29;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        y_11 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(c_29);
                                                    x_11 = t;
                                                    t = y_11;
                                                    {
                                                      ATerm m_6 = t;
                                                      int n_6 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = SSL_is_string(y_11);
                                                          LocalPopChoice(n_6);
                                                        }
                                                      else
                                                        {
                                                          t = m_6;
                                                          {
                                                            ATerm q_12 = NULL,r_12 = NULL,b_13 = NULL,f_13 = NULL,i_13 = NULL,t_4 = NULL;
                                                            if(match_cons(t, sym_Mod_2))
                                                              {
                                                                q_12 = ATgetArgument(t, 0);
                                                                r_12 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSLgetAnnotations(y_11);
                                                            b_13 = t;
                                                            t = SSL_is_string(q_12);
                                                            f_13 = t;
                                                            t = SSL_is_string(r_12);
                                                            i_13 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Mod_2, f_13, i_13);
                                                            t_4 = t;
                                                            t = SSLsetAnnotations(t_4, b_13);
                                                          }
                                                        }
                                                    }
                                                    z_11 = t;
                                                    t = (ATerm) ATmakeAppl(sym_SVar_1, z_11);
                                                    v_4 = t;
                                                    t = SSLsetAnnotations(v_4, x_11);
                                                    f_12 = t;
                                                    t = h_29;
                                                    t = map_1_0(strategy_expression_0_0, t);
                                                    u_11 = t;
                                                    t = v_28;
                                                    t = map_1_0(term_expression_0_0, t);
                                                    w_11 = t;
                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, f_12, u_11, w_11);
                                                    w_4 = t;
                                                    t = SSLsetAnnotations(w_4, p_11);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      c_29 = ATgetArgument(t, 0);
                                                      h_29 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm q_13 = NULL,u_13 = NULL,v_13 = NULL,x_4 = NULL;
                                                        t = SSLgetAnnotations(a_29);
                                                        q_13 = t;
                                                        t = SSL_is_string(c_29);
                                                        u_13 = t;
                                                        t = h_29;
                                                        t = strategy_expression_0_0(t);
                                                        v_13 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, u_13, v_13);
                                                        x_4 = t;
                                                        t = SSLsetAnnotations(x_4, q_13);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          c_29 = ATgetArgument(t, 0);
                                                          h_29 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm g_14 = NULL,l_14 = NULL,m_14 = NULL,y_4 = NULL;
                                                            t = SSLgetAnnotations(a_29);
                                                            g_14 = t;
                                                            t = SSL_is_int(c_29);
                                                            l_14 = t;
                                                            t = h_29;
                                                            t = strategy_expression_0_0(t);
                                                            m_14 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, l_14, m_14);
                                                            y_4 = t;
                                                            t = SSLsetAnnotations(y_4, g_14);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              c_29 = ATgetArgument(t, 0);
                                                              h_29 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm x_14 = NULL,e_15 = NULL,f_15 = NULL,z_4 = NULL;
                                                                t = SSLgetAnnotations(a_29);
                                                                x_14 = t;
                                                                t = SSL_is_string(c_29);
                                                                e_15 = t;
                                                                t = h_29;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                f_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, e_15, f_15);
                                                                z_4 = t;
                                                                t = SSLsetAnnotations(z_4, x_14);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  c_29 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm r_15 = NULL,u_15 = NULL,a_5 = NULL;
                                                                    t = SSLgetAnnotations(a_29);
                                                                    r_15 = t;
                                                                    t = c_29;
                                                                    t = strategy_expression_0_0(t);
                                                                    u_15 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, u_15);
                                                                    a_5 = t;
                                                                    t = SSLsetAnnotations(a_5, r_15);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      c_29 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm f_16 = NULL,k_16 = NULL,b_5 = NULL;
                                                                        t = SSLgetAnnotations(a_29);
                                                                        f_16 = t;
                                                                        t = c_29;
                                                                        t = strategy_expression_0_0(t);
                                                                        k_16 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, k_16);
                                                                        b_5 = t;
                                                                        t = SSLsetAnnotations(b_5, f_16);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          c_29 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm x_16 = NULL,z_16 = NULL,c_5 = NULL;
                                                                            t = SSLgetAnnotations(a_29);
                                                                            x_16 = t;
                                                                            t = c_29;
                                                                            t = strategy_expression_0_0(t);
                                                                            z_16 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, z_16);
                                                                            c_5 = t;
                                                                            t = SSLsetAnnotations(c_5, x_16);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              c_29 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm g_17 = NULL,k_17 = NULL,d_5 = NULL;
                                                                                t = SSLgetAnnotations(a_29);
                                                                                g_17 = t;
                                                                                t = c_29;
                                                                                t = strategy_expression_0_0(t);
                                                                                k_17 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, k_17);
                                                                                d_5 = t;
                                                                                t = SSLsetAnnotations(d_5, g_17);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  c_29 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm u_17 = NULL,w_17 = NULL,e_5 = NULL;
                                                                                    t = SSLgetAnnotations(a_29);
                                                                                    u_17 = t;
                                                                                    t = c_29;
                                                                                    t = term_expression_0_0(t);
                                                                                    w_17 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, w_17);
                                                                                    e_5 = t;
                                                                                    t = SSLsetAnnotations(e_5, u_17);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      c_29 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm r_18 = NULL,t_18 = NULL,f_5 = NULL;
                                                                                        t = SSLgetAnnotations(a_29);
                                                                                        r_18 = t;
                                                                                        t = c_29;
                                                                                        t = term_expression_0_0(t);
                                                                                        t_18 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, t_18);
                                                                                        f_5 = t;
                                                                                        t = SSLsetAnnotations(f_5, r_18);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          c_29 = ATgetArgument(t, 0);
                                                                                          h_29 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm i_19 = NULL,m_19 = NULL,o_19 = NULL,g_5 = NULL;
                                                                                            t = SSLgetAnnotations(a_29);
                                                                                            i_19 = t;
                                                                                            t = c_29;
                                                                                            t = map_1_0(h_0, t);
                                                                                            m_19 = t;
                                                                                            t = h_29;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            o_19 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, m_19, o_19);
                                                                                            g_5 = t;
                                                                                            t = SSLsetAnnotations(g_5, i_19);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              c_29 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm a_20 = NULL,h_20 = NULL,h_5 = NULL;
                                                                                                t = SSLgetAnnotations(a_29);
                                                                                                a_20 = t;
                                                                                                t = c_29;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                h_20 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, h_20);
                                                                                                h_5 = t;
                                                                                                t = SSLsetAnnotations(h_5, a_20);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  c_29 = ATgetArgument(t, 0);
                                                                                                  h_29 = ATgetArgument(t, 1);
                                                                                                  v_28 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm b_21 = NULL,l_21 = NULL,n_21 = NULL,p_21 = NULL,i_5 = NULL;
                                                                                                    t = SSLgetAnnotations(a_29);
                                                                                                    b_21 = t;
                                                                                                    t = SSL_is_string(c_29);
                                                                                                    l_21 = t;
                                                                                                    t = h_29;
                                                                                                    t = map_1_0(strategy_expression_0_0, t);
                                                                                                    n_21 = t;
                                                                                                    t = v_28;
                                                                                                    t = map_1_0(term_expression_0_0, t);
                                                                                                    p_21 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, l_21, n_21, p_21);
                                                                                                    i_5 = t;
                                                                                                    t = SSLsetAnnotations(i_5, b_21);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm b_22 = NULL,f_22 = NULL,g_22 = NULL,o_5 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      c_29 = ATgetArgument(t, 0);
                                                                                                      h_29 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(a_29);
                                                                                                  b_22 = t;
                                                                                                  t = c_29;
                                                                                                  t = map_1_0(m_0, t);
                                                                                                  f_22 = t;
                                                                                                  t = h_29;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  g_22 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, f_22, g_22);
                                                                                                  o_5 = t;
                                                                                                  t = SSLsetAnnotations(o_5, b_22);
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
      LocalPopChoice(l_6);
    }
  else
    {
      t = h_6;
      t = debug_1_0(r_0, t);
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,x_6 = NULL;
  x_30 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      u_30 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_30);
  t_30 = t;
  t = SSL_is_string(u_30);
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, w_30, v_30);
  x_6 = t;
  t = SSLsetAnnotations(x_6, t_30);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,y_6 = NULL;
  s_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      z_30 = ATgetArgument(t, 0);
      q_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_31);
  y_30 = t;
  t = SSL_is_string(z_30);
  r_31 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_31, q_31);
  y_6 = t;
  t = SSLsetAnnotations(y_6, y_30);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,p_34 = NULL,b_7 = NULL;
  p_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      l_34 = ATgetArgument(t, 0);
      m_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_34);
  k_34 = t;
  t = SSL_is_string(l_34);
  n_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_34, m_34);
  b_7 = t;
  t = SSLsetAnnotations(b_7, k_34);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL,v_34 = NULL,w_34 = NULL,c_7 = NULL;
  w_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      s_34 = ATgetArgument(t, 0);
      t_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_34);
  r_34 = t;
  t = SSL_is_string(s_34);
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, v_34, t_34);
  c_7 = t;
  t = SSLsetAnnotations(c_7, r_34);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,j_38 = NULL,k_38 = NULL,f_7 = NULL;
  k_38 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      g_38 = ATgetArgument(t, 0);
      h_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_38);
  f_38 = t;
  t = SSL_is_string(g_38);
  j_38 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_38, h_38);
  f_7 = t;
  t = SSLsetAnnotations(f_7, f_38);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,g_7 = NULL;
  u_40 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_39 = ATgetArgument(t, 0);
      s_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_40);
  w_39 = t;
  t = SSL_is_string(x_39);
  t_40 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_40, s_40);
  g_7 = t;
  t = SSLsetAnnotations(g_7, w_39);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_o_6;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm p_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL;
      m_39 = t;
      if(match_cons(t, sym_SDefT_4))
        {
          n_39 = ATgetArgument(t, 0);
          o_39 = ATgetArgument(t, 1);
          p_39 = ATgetArgument(t, 2);
          l_39 = ATgetArgument(t, 3);
          {
            ATerm s_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,z_6 = NULL;
            t = SSLgetAnnotations(m_39);
            s_29 = t;
            t = n_39;
            {
              ATerm r_6 = t;
              int s_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_is_string(n_39);
                  LocalPopChoice(s_6);
                }
              else
                {
                  t = r_6;
                  {
                    ATerm q_30 = NULL,s_30 = NULL,b_32 = NULL,e_32 = NULL,f_32 = NULL,w_6 = NULL;
                    if(match_cons(t, sym_Mod_2))
                      {
                        q_30 = ATgetArgument(t, 0);
                        s_30 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(n_39);
                    b_32 = t;
                    t = SSL_is_string(q_30);
                    e_32 = t;
                    t = SSL_is_string(s_30);
                    f_32 = t;
                    t = (ATerm) ATmakeAppl(sym_Mod_2, e_32, f_32);
                    w_6 = t;
                    t = SSLsetAnnotations(w_6, b_32);
                  }
                }
            }
            y_29 = t;
            t = o_39;
            t = map_1_0(s_0, t);
            z_29 = t;
            t = p_39;
            t = map_1_0(u_0, t);
            a_30 = t;
            t = l_39;
            t = strategy_expression_0_0(t);
            b_30 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, y_29, z_29, a_30, b_30);
            z_6 = t;
            t = SSLsetAnnotations(z_6, s_29);
          }
        }
      else
        {
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              n_39 = ATgetArgument(t, 0);
              o_39 = ATgetArgument(t, 1);
              p_39 = ATgetArgument(t, 2);
              l_39 = ATgetArgument(t, 3);
              {
                ATerm t_32 = NULL,z_32 = NULL,a_33 = NULL,d_33 = NULL,e_33 = NULL,d_7 = NULL;
                t = SSLgetAnnotations(m_39);
                t_32 = t;
                t = n_39;
                {
                  ATerm t_6 = t;
                  int u_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_is_string(n_39);
                      LocalPopChoice(u_6);
                    }
                  else
                    {
                      t = t_6;
                      {
                        ATerm c_34 = NULL,e_34 = NULL,y_35 = NULL,b_36 = NULL,f_36 = NULL,a_7 = NULL;
                        if(match_cons(t, sym_Mod_2))
                          {
                            c_34 = ATgetArgument(t, 0);
                            e_34 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(n_39);
                        y_35 = t;
                        t = SSL_is_string(c_34);
                        b_36 = t;
                        t = SSL_is_string(e_34);
                        f_36 = t;
                        t = (ATerm) ATmakeAppl(sym_Mod_2, b_36, f_36);
                        a_7 = t;
                        t = SSLsetAnnotations(a_7, y_35);
                      }
                    }
                }
                z_32 = t;
                t = o_39;
                t = map_1_0(x_0, t);
                a_33 = t;
                t = p_39;
                t = map_1_0(z_0, t);
                d_33 = t;
                t = l_39;
                t = strategy_expression_0_0(t);
                e_33 = t;
                t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, z_32, a_33, d_33, e_33);
                d_7 = t;
                t = SSLsetAnnotations(d_7, t_32);
              }
            }
          else
            {
              ATerm w_36 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_7 = NULL;
              if(match_cons(t, sym_ExtSDef_3))
                {
                  n_39 = ATgetArgument(t, 0);
                  o_39 = ATgetArgument(t, 1);
                  p_39 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_39);
              w_36 = t;
              t = n_39;
              {
                ATerm v_6 = t;
                int i_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_is_string(n_39);
                    LocalPopChoice(i_7);
                  }
                else
                  {
                    t = v_6;
                    {
                      ATerm a_38 = NULL,d_38 = NULL,k_43 = NULL,b_45 = NULL,c_45 = NULL,e_7 = NULL;
                      if(match_cons(t, sym_Mod_2))
                        {
                          a_38 = ATgetArgument(t, 0);
                          d_38 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(n_39);
                      k_43 = t;
                      t = SSL_is_string(a_38);
                      b_45 = t;
                      t = SSL_is_string(d_38);
                      c_45 = t;
                      t = (ATerm) ATmakeAppl(sym_Mod_2, b_45, c_45);
                      e_7 = t;
                      t = SSLsetAnnotations(e_7, k_43);
                    }
                  }
              }
              e_37 = t;
              t = o_39;
              t = map_1_0(a_1, t);
              f_37 = t;
              t = p_39;
              t = map_1_0(b_1, t);
              g_37 = t;
              t = (ATerm) ATmakeAppl(sym_ExtSDef_3, e_37, f_37, g_37);
              h_7 = t;
              t = SSLsetAnnotations(h_7, w_36);
            }
        }
      LocalPopChoice(q_6);
    }
  else
    {
      t = p_6;
      t = debug_1_0(c_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm b_89 (ATerm), ATerm t)
{
  static ATerm k_40 (ATerm t)
  {
    ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL;
    h_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_40;
      }
    else
      {
        ATerm k_47 = NULL,a_48 = NULL,n_48 = NULL,e_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_40 = ATgetFirst((ATermList) t);
            j_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_40);
        k_47 = t;
        t = i_40;
        t = b_89(t);
        a_48 = t;
        t = j_40;
        t = k_40(t);
        n_48 = t;
        t = (ATerm) ATinsert(CheckATermList(n_48), a_48);
        e_11 = t;
        t = SSLsetAnnotations(e_11, k_47);
      }
    return(t);
  }
  t = k_40(t);
  return(t);
}
static ATerm a_4 (ATerm t_37, ATerm u_37, ATerm t)
{
  ATerm m_40 = NULL;
  t = SSL_fputc(t_37, u_37);
  m_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_40);
  return(t);
}
static ATerm b_4 (ATerm o_22, ATerm p_22, ATerm t)
{
  ATerm n_40 = NULL;
  t = SSL_write_term_to_stream_text(o_22, p_22);
  n_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_40);
  return(t);
}
static ATerm d_4 (ATerm s_88 (ATerm), ATerm b_143, ATerm u_22, ATerm t)
{
  ATerm o_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_143, term_j_7);
  t = h_4(t);
  o_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_40, u_22);
  t = s_88(t);
  t = fclose_0_0(t);
  t = u_22;
  return(t);
}
static ATerm c_4 (ATerm k_22, ATerm l_22, ATerm t)
{
  ATerm r_40 = NULL;
  t = SSL_write_term_to_stream_baf(k_22, l_22);
  r_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_40);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_7 = ATgetArgument(t, 0);
      if(match_cons(k_7, sym_Stream_1))
        {
          q_51 = ATgetArgument(k_7, 0);
        }
      else
        _fail(t);
      r_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_4(q_51, r_51, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL,w_54 = NULL,x_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_7 = ATgetArgument(t, 0);
      if(match_cons(l_7, sym_Stream_1))
        {
          w_54 = ATgetArgument(l_7, 0);
        }
      else
        _fail(t);
      x_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4(w_54, x_54, t);
  c_54 = t;
  t = term_n_7;
  d_54 = t;
  t = c_54;
  if(match_cons(t, sym_Stream_1))
    {
      e_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_7, c_54);
  t = a_4(d_54, e_54, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_42 = NULL,h_42 = NULL,q_11 = NULL,j_11 = NULL;
  w_40 = t;
  if(match_cons(t, sym__2))
    {
      d_41 = ATgetArgument(t, 0);
      e_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_40);
  c_41 = t;
  t = d_41;
  {
    ATerm p_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm d_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((v_40 != NULL) && (v_40 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(d_1, t);
        LocalPopChoice(q_7);
      }
    else
      {
        t = p_7;
        t = term_r_7;
        v_40 = t;
      }
  }
  f_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_41, e_41);
  j_11 = t;
  t = SSLsetAnnotations(j_11, c_41);
  t = w_40;
  if(match_cons(t, sym__2))
    {
      y_40 = ATgetArgument(t, 0);
      z_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_40);
  x_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_40, (ATerm) ATmakeAppl(sym__2, not_null(v_40), z_40));
  q_11 = t;
  t = SSLsetAnnotations(q_11, x_40);
  b_41 = t;
  if(match_cons(t, sym__2))
    {
      g_42 = ATgetArgument(t, 0);
      h_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_7 = t;
    int t_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_49 = NULL,o_50 = NULL,a_51 = NULL,b_51 = NULL,p_51 = NULL,v_11 = NULL;
        t = SSLgetAnnotations(b_41);
        o_49 = t;
        t = g_42;
        t = fetch_1_0(f_1, t);
        o_50 = t;
        t = h_42;
        if(match_cons(t, sym__2))
          {
            b_51 = ATgetArgument(t, 0);
            p_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_4(h_1, b_51, p_51, t);
        a_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_50, a_51);
        v_11 = t;
        t = SSLsetAnnotations(v_11, o_49);
        LocalPopChoice(t_7);
      }
    else
      {
        t = s_7;
        {
          ATerm q_52 = NULL,v_53 = NULL,w_53 = NULL,z_53 = NULL,a_12 = NULL;
          t = SSLgetAnnotations(b_41);
          q_52 = t;
          t = h_42;
          if(match_cons(t, sym__2))
            {
              w_53 = ATgetArgument(t, 0);
              z_53 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_4(i_1, w_53, z_53, t);
          v_53 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_42, v_53);
          a_12 = t;
          t = SSLsetAnnotations(a_12, q_52);
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
ATerm apply_strategy_1_0 (ATerm j_106 (ATerm), ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL;
  o_42 = t;
  t = dtime_0_0(t);
  t = o_42;
  t = j_106(t);
  n_42 = t;
  t = dtime_0_0(t);
  k_42 = t;
  t = n_42;
  if(match_cons(t, sym__2))
    {
      l_42 = ATgetArgument(t, 0);
      m_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_42), (ATerm) ATmakeAppl(sym_Runtime_1, k_42)), m_42);
  return(t);
}
static ATerm c_43 (ATerm w_42, ATerm t)
{
  t = SSL_fclose(w_42);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL;
  a_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_42 = ATgetArgument(t, 0);
      {
        ATerm v_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_42);
            LocalPopChoice(x_7);
          }
        else
          {
            t = v_7;
            t = c_43(a_43, t);
          }
      }
    }
  else
    {
      t = c_43(a_43, t);
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
  ATerm d_43 = NULL;
  t = SSL_fopen(v_37, w_37);
  d_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_43);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_43 = NULL;
  t = SSL_stdin_stream();
  e_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_43);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_43 = NULL;
  t = SSL_stdout_stream();
  f_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_43);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_43 = NULL;
  t = SSL_stderr_stream();
  g_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_43);
  return(t);
}
static ATerm n_44 (ATerm m_43, ATerm t)
{
  ATerm n_43 = NULL;
  t = SSL_explode_term(m_43);
  if(match_cons(t, sym__2))
    {
      ATerm y_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_7 = ATgetArgument(t, 1);
        if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
          {
            n_43 = ATgetFirst((ATermList) z_7);
            {
              ATerm a_8 = (ATerm) ATgetNext((ATermList) z_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_43;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_43;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_43;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_43;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_44 (ATerm q_43, ATerm r_43, ATerm s_43, ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL,y_43 = NULL,h_12 = NULL;
  t = SSLgetAnnotations(s_43);
  v_43 = t;
  t = q_43;
  if(match_cons(t, sym_Path_1))
    {
      y_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_43, r_43);
  h_12 = t;
  t = SSLsetAnnotations(h_12, v_43);
  if(match_cons(t, sym__2))
    {
      t_43 = ATgetArgument(t, 0);
      u_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(t_43, u_43, t);
  return(t);
}
static ATerm p_44 (ATerm a_44, ATerm b_44, ATerm c_44, ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL,i_44 = NULL,i_12 = NULL;
  t = SSLgetAnnotations(c_44);
  f_44 = t;
  t = SSL_is_string(a_44);
  i_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_44, b_44);
  i_12 = t;
  t = SSLsetAnnotations(i_12, f_44);
  if(match_cons(t, sym__2))
    {
      d_44 = ATgetArgument(t, 0);
      e_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(d_44, e_44, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL;
  k_44 = t;
  if(match_cons(t, sym__2))
    {
      l_44 = ATgetArgument(t, 0);
      m_44 = ATgetArgument(t, 1);
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_44(k_44, t);
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
            {
              ATerm e_8 = t;
              int f_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_44(l_44, m_44, k_44, t);
                  LocalPopChoice(f_8);
                }
              else
                {
                  t = e_8;
                  t = p_44(l_44, m_44, k_44, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_44(k_44, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,y_44 = NULL;
  y_44 = t;
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_44, term_k_8);
        t = h_4(t);
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        {
          ATerm l_58 = NULL,m_58 = NULL;
          t = term_l_8;
          m_58 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_8, y_44);
          t = f_4(m_58, y_44, t);
          l_58 = t;
          t = SSL_perror(l_58);
          _fail(t);
        }
      }
  }
  s_44 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_4(t_44, t);
  r_44 = t;
  t = s_44;
  t = fclose_0_0(t);
  t = r_44;
  return(t);
}
ATerm fetch_1_0 (ATerm l_89 (ATerm), ATerm t)
{
  static ATerm x_45 (ATerm t)
  {
    ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL;
    u_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_45 = ATgetFirst((ATermList) t);
        w_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_8 = t;
      int n_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_58 = NULL,u_58 = NULL,l_12 = NULL;
          t = SSLgetAnnotations(u_45);
          r_58 = t;
          t = v_45;
          t = l_89(t);
          u_58 = t;
          t = (ATerm) ATinsert(CheckATermList(w_45), u_58);
          l_12 = t;
          t = SSLsetAnnotations(l_12, r_58);
          LocalPopChoice(n_8);
        }
      else
        {
          t = m_8;
          {
            ATerm c_59 = NULL,f_59 = NULL,m_12 = NULL;
            t = SSLgetAnnotations(u_45);
            c_59 = t;
            t = w_45;
            t = x_45(t);
            f_59 = t;
            t = (ATerm) ATinsert(CheckATermList(f_59), v_45);
            m_12 = t;
            t = SSLsetAnnotations(m_12, c_59);
          }
        }
    }
    return(t);
  }
  t = x_45(t);
  return(t);
}
static ATerm m_4 (ATerm a_54, ATerm b_54, ATerm t)
{
  ATerm a_46 = NULL;
  t = lookup_table_0_1(a_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_4(b_54, a_46, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_104 (ATerm), ATerm t)
{
  ATerm d_46 = NULL;
  d_46 = t;
  {
    ATerm o_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
        t = term_r_8;
        g_46 = t;
        t = term_u_8;
        h_46 = t;
        t = term_v_8;
        t = m_4(g_46, h_46, t);
        f_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_46, term_w_8);
        t = geq_0_0(t);
        t = d_46;
        t = s_104(t);
        LocalPopChoice(q_8);
      }
    else
      {
        t = o_8;
        t = d_46;
      }
  }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm k_46 = NULL;
  k_46 = t;
  if(match_string(t, "-k"))
    {
      t = k_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_46;
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL;
  l_46 = t;
  t = SSL_string_to_int(l_46);
  m_46 = t;
  t = term_x_8;
  n_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_8, m_46);
  t = p_4(n_46, m_46, t);
  t = l_46;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_y_8;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_1, k_1, m_1, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm p_46 = NULL;
  p_46 = t;
  if(match_string(t, "-S"))
    {
      t = p_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_46;
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL;
  t = term_u_8;
  q_46 = t;
  t = term_z_8;
  r_46 = t;
  t = term_a_9;
  t = p_4(q_46, r_46, t);
  t = term_c_9;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_d_9;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL;
  s_46 = t;
  t = SSL_string_to_int(s_46);
  t_46 = t;
  t = term_u_8;
  u_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_8, t_46);
  t = p_4(u_46, t_46, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_46);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_g_9;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL;
  t = term_h_9;
  v_46 = t;
  t = term_y_5;
  w_46 = t;
  t = term_i_9;
  t = p_4(v_46, w_46, t);
  t = term_j_9;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_1, u_1, v_1, t);
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
      {
        ATerm n_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_1, x_1, y_1, t);
            LocalPopChoice(p_9);
          }
        else
          {
            t = n_9;
            t = Option_3_0(a_2, g_2, h_2, t);
          }
      }
    }
  return(t);
}
static ATerm p_4 (ATerm m_47, ATerm n_47, ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL;
  t = term_r_8;
  x_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_8, m_47, n_47);
  t = lookup_table_0_1(x_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(m_47, n_47, y_46, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_8, m_47, n_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL;
      t = term_y_5;
      t = e_0(t);
      e_47 = t;
      t = term_q_9;
      f_47 = t;
      t = term_r_9;
      g_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_9, term_r_9, e_47);
      t = n_4(f_47, g_47, e_47, t);
      _fail(t);
    }
  else
    {
      ATerm j_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_47 = ATgetFirst((ATermList) t);
          d_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_47;
      t = c_0(t);
      t = term_y_5;
      t = d_0(t);
      j_47 = t;
      t = (ATerm) ATinsert(CheckATermList(d_47), j_47);
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm l_47 = NULL;
  l_47 = t;
  if(match_string(t, "-o"))
    {
      t = l_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_47;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL;
  o_47 = t;
  t = term_v_9;
  p_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_9, o_47);
  t = p_4(p_47, o_47, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_47);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_w_9;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_2, j_2, l_2, t);
  return(t);
}
static ATerm n_4 (ATerm h_52, ATerm i_52, ATerm g_52, ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL;
  r_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_52, i_52);
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_9 = ATgetArgument(t, 0);
            ATerm a_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_52, i_52);
        t = m_4(h_52, i_52, t);
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
        t = (ATerm) ATempty;
      }
  }
  s_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_52, i_52, (ATerm) ATinsert(CheckATermList(s_47), g_52));
  t = lookup_table_0_1(h_52, t);
  v_47 = t;
  t = (ATerm) ATinsert(CheckATermList(s_47), g_52);
  t_47 = t;
  t = v_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(i_52, t_47, u_47, t);
  t = r_47;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL;
      t = term_y_5;
      t = n_0(t);
      g_48 = t;
      t = term_q_9;
      h_48 = t;
      t = term_r_9;
      i_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_9, term_r_9, g_48);
      t = n_4(h_48, i_48, g_48, t);
      _fail(t);
    }
  else
    {
      ATerm m_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_48 = ATgetFirst((ATermList) t);
          d_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_48 = ATgetFirst((ATermList) t);
          f_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_48;
      t = k_0(t);
      t = e_48;
      t = l_0(t);
      m_48 = t;
      t = (ATerm) ATinsert(CheckATermList(f_48), m_48);
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm o_48 = NULL;
  o_48 = t;
  if(match_string(t, "-i"))
    {
      t = o_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_48;
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL;
  p_48 = t;
  t = term_b_10;
  q_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_10, p_48);
  t = p_4(q_48, p_48, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_48);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_c_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_2, o_2, s_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_5;
  t = whoami_0_0(t);
  r_48 = t;
  t = term_z_5;
  t_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_10), r_48);
  u_48 = t;
  t = SSL_printnl(t_48, u_48);
  t = term_c_6;
  s_48 = t;
  t = SSL_exit(s_48);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL;
  t = term_r_8;
  v_48 = t;
  t = term_f_10;
  w_48 = t;
  t = term_g_10;
  t = m_4(v_48, w_48, t);
  return(t);
}
static ATerm i_4 (ATerm p_40, ATerm q_40, ATerm t)
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_40, q_40);
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      t = SSL_addr(p_40, q_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,e_49 = NULL;
  y_48 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_48;
      t = a_96(t);
    }
  else
    {
      ATerm h_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_48 = ATgetFirst((ATermList) t);
          e_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_49;
      t = foldr_2_0(a_96, b_96, t);
      h_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_48, h_49);
      t = b_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_z_8;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL;
  if(match_cons(t, sym__2))
    {
      o_59 = ATgetArgument(t, 0);
      p_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(o_59, p_59, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_49 = NULL,k_59 = NULL,l_59 = NULL;
  t = times_0_0(t);
  l_59 = t;
  t = SSL_explode_term(l_59);
  if(match_cons(t, sym__2))
    {
      ATerm l_10 = ATgetArgument(t, 0);
      k_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_59;
  t = foldr_2_0(t_2, u_2, t);
  k_49 = t;
  t = SSL_TicksToSeconds(k_49);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL;
  v_49 = t;
  if(match_cons(t, sym__2))
    {
      w_49 = ATgetArgument(t, 0);
      x_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_49;
        if((w_49 != t))
          {
            _fail(t);
          }
        t = v_49;
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        t = (ATerm) ATmakeAppl(sym__2, w_49, x_49);
        {
          ATerm o_10 = t;
          int p_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_49, x_49);
              LocalPopChoice(p_10);
            }
          else
            {
              t = o_10;
              t = SSL_gtr(w_49, x_49);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_49, x_49);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_104 (ATerm), ATerm t)
{
  ATerm b_50 = NULL;
  b_50 = t;
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
        t = term_r_8;
        e_50 = t;
        t = term_u_8;
        f_50 = t;
        t = term_v_8;
        t = m_4(e_50, f_50, t);
        d_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_50, term_c_6);
        t = geq_0_0(t);
        t = b_50;
        t = r_104(t);
        LocalPopChoice(r_10);
      }
    else
      {
        t = q_10;
        t = b_50;
      }
  }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL,k_50 = NULL,l_50 = NULL;
  t = run_time_0_0(t);
  h_50 = t;
  t = term_y_5;
  t = whoami_0_0(t);
  i_50 = t;
  t = term_z_5;
  k_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_10), h_50), term_s_10), i_50);
  l_50 = t;
  t = SSL_printnl(k_50, l_50);
  t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_10), h_50), term_s_10), i_50));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_8;
  m_50 = t;
  t = SSL_exit(m_50);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL;
  x_50 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = x_50;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          w_50 = ATgetArgument(t, 0);
          {
            ATerm b_60 = NULL,s_12 = NULL;
            t = SSLgetAnnotations(x_50);
            b_60 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, w_50);
            s_12 = t;
            t = SSLsetAnnotations(s_12, b_60);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = x_50;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_107 (ATerm), ATerm t)
{
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_50 = NULL,q_50 = NULL;
      t = term_r_8;
      p_50 = t;
      t = term_w_10;
      q_50 = t;
      t = term_x_10;
      t = m_4(p_50, q_50, t);
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      t = fetch_1_0(w_2, t);
    }
  t = h_107(t);
  return(t);
}
static ATerm q_4 (ATerm z_55, ATerm a_56, ATerm b_56, ATerm t)
{
  ATerm z_50 = NULL;
  t = SSL_hashtable_put(b_56, z_55, a_56);
  z_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_50);
  return(t);
}
static ATerm r_4 (ATerm c_56, ATerm d_56, ATerm t)
{
  t = SSL_hashtable_get(d_56, c_56);
  return(t);
}
ATerm lookup_table_0_1 (ATerm t_53, ATerm t)
{
  ATerm i_51 = NULL;
  t = table_hashtable_0_0(t);
  i_51 = t;
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_60 = NULL;
        t = i_51;
        if(match_cons(t, sym_Hashtable_1))
          {
            h_60 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_4(t_53, h_60, t);
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        {
          ATerm m_60 = NULL;
          t = t_53;
          t = table_create_0_0(t);
          t = i_51;
          if(match_cons(t, sym_Hashtable_1))
            {
              m_60 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_4(t_53, m_60, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm h_56, ATerm i_56, ATerm t)
{
  ATerm l_51 = NULL;
  t = SSL_hashtable_create(h_56, i_56);
  l_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_51);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL,v_51 = NULL,w_51 = NULL;
  m_51 = t;
  t = term_d_11;
  v_51 = t;
  t = term_f_11;
  w_51 = t;
  t = m_51;
  t = new_hashtable_0_2(v_51, w_51, t);
  n_51 = t;
  t = m_51;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(m_51, n_51, o_51, t);
  t = m_51;
  return(t);
}
static ATerm k_4 (ATerm e_56, ATerm f_56, ATerm t)
{
  ATerm x_51 = NULL;
  t = SSL_hashtable_remove(f_56, e_56);
  x_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_51);
  return(t);
}
static ATerm l_4 (ATerm j_56, ATerm t)
{
  ATerm y_51 = NULL;
  t = SSL_hashtable_destroy(j_56);
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_51);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm z_51 = NULL;
  t = SSL_table_hashtable();
  z_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_51);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL;
  a_52 = t;
  t = table_hashtable_0_0(t);
  b_52 = t;
  t = lookup_table_0_1(a_52, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_4(d_52, t);
  t = b_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_4(a_52, c_52, t);
  t = a_52;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_52 = ATgetFirst((ATermList) t);
      k_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_52 = NULL,p_52 = NULL;
        static ATerm x_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_52)), not_null(p_52));
          return(t);
        }
        t = k_52;
        t = i_0(t);
        if(((o_52 != NULL) && (o_52 != t)))
          _fail(t);
        else
          o_52 = t;
        t = j_52;
        t = g_0(t);
        if(((p_52 != NULL) && (p_52 != t)))
          _fail(t);
        else
          p_52 = t;
        t = k_52;
        t = reverse_acc_2_0(g_0, x_2, t);
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
static ATerm y_2 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL,v_12 = NULL;
  x_52 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_52);
  v_52 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_52);
  v_12 = t;
  t = SSLsetAnnotations(v_12, v_52);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm z_52 = NULL;
  z_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_52), term_g_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL;
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_52 = NULL,u_52 = NULL;
      t = term_r_8;
      t_52 = t;
      t = term_f_10;
      u_52 = t;
      t = term_g_10;
      t = m_4(t_52, u_52, t);
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      t = fetch_1_0(y_2, t);
    }
  t = term_k_11;
  t = echo_0_0(t);
  t = term_q_9;
  r_52 = t;
  t = term_r_9;
  s_52 = t;
  t = term_l_11;
  t = m_4(r_52, s_52, t);
  t = reverse_acc_2_0(_id, a_3, t);
  t = map_1_0(b_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL;
  b_53 = t;
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_53;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_11 = ATgetFirst((ATermList) t);
                ATerm r_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_53;
          }
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        t = (ATerm) ATinsert(ATempty, b_53);
      }
  }
  c_53 = t;
  t = term_r_7;
  d_53 = t;
  t = SSL_printnl(d_53, c_53);
  t = b_53;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm h_53 = NULL,i_53 = NULL;
  t = term_r_8;
  h_53 = t;
  t = term_f_10;
  i_53 = t;
  t = term_g_10;
  t = m_4(h_53, i_53, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL;
  t = term_s_11;
  j_53 = t;
  t = term_y_5;
  k_53 = t;
  t = term_t_11;
  t = p_4(j_53, k_53, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_b_12;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL;
  t = term_s_11;
  n_53 = t;
  t = term_y_5;
  o_53 = t;
  t = term_t_11;
  t = p_4(n_53, o_53, t);
  t = term_c_12;
  l_53 = t;
  t = term_y_5;
  m_53 = t;
  t = term_d_12;
  t = p_4(l_53, m_53, t);
  t = term_e_12;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_g_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_3, j_3, k_3, t);
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      t = Option_3_0(l_3, n_3, q_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_68 (ATerm), ATerm m_68 (ATerm), ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,x_53 = NULL,y_53 = NULL,g_13 = NULL;
  y_53 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_53 = ATgetFirst((ATermList) t);
      r_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_53);
  p_53 = t;
  t = q_53;
  t = l_68(t);
  s_53 = t;
  t = r_53;
  t = m_68(t);
  x_53 = t;
  t = (ATerm) ATinsert(CheckATermList(x_53), s_53);
  g_13 = t;
  t = SSLsetAnnotations(g_13, p_53);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_109 (ATerm), ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL,k_54 = NULL,l_54 = NULL,n_13 = NULL;
  f_54 = t;
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_12;
        t = k_109(t);
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
      }
  }
  t = f_54;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_54 = ATgetFirst((ATermList) t);
      i_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_54);
  g_54 = t;
  t = term_f_10;
  l_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_10, h_54);
  t = p_4(l_54, h_54, t);
  t = i_54;
  {
    static ATerm v_54 (ATerm t)
    {
      ATerm t_12 = t;
      int u_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_12 = t;
          int x_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_54 = NULL;
              o_54 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_54;
              LocalPopChoice(x_12);
            }
          else
            {
              t = w_12;
              t = k_109(t);
              t = Cons_2_0(_id, v_54, t);
            }
          LocalPopChoice(u_12);
        }
      else
        {
          t = t_12;
          {
            ATerm r_54 = NULL,s_54 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_54 = ATgetFirst((ATermList) t);
                s_54 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_54), (ATerm) ATmakeAppl(sym_Undefined_1, r_54));
          }
        }
      return(t);
    }
    t = v_54(t);
  }
  k_54 = t;
  t = (ATerm) ATinsert(CheckATermList(k_54), (ATerm) ATmakeAppl(sym_Program_1, h_54));
  n_13 = t;
  t = SSLsetAnnotations(n_13, g_54);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm i_55 = NULL;
  i_55 = t;
  if(match_string(t, "--help"))
    {
      t = i_55;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_55;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_55;
        }
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL;
  t = term_w_10;
  j_55 = t;
  t = term_y_5;
  k_55 = t;
  t = term_y_12;
  t = p_4(j_55, k_55, t);
  t = term_z_12;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_a_13;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_109 (ATerm), ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL;
  c_55 = t;
  t = term_q_9;
  d_55 = t;
  t = term_c_13;
  t = lookup_table_0_1(d_55, t);
  h_55 = t;
  t = term_r_9;
  e_55 = t;
  t = (ATerm) ATempty;
  f_55 = t;
  t = h_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(e_55, f_55, g_55, t);
  t = c_55;
  {
    static ATerm r_3 (ATerm t)
    {
      ATerm d_13 = t;
      int e_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_109(t);
          LocalPopChoice(e_13);
        }
      else
        {
          t = d_13;
          {
            ATerm h_13 = t;
            int j_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_3, u_3, y_3, t);
                LocalPopChoice(j_13);
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
    t = parse_options_p__1_0(r_3, t);
  }
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_55 = NULL;
        v_55 = t;
        {
          ATerm m_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_60 = NULL;
              t = v_55;
              {
                ATerm p_13 = t;
                int r_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_60 = NULL,s_60 = NULL;
                    t = term_r_8;
                    r_60 = t;
                    t = term_w_10;
                    s_60 = t;
                    t = term_x_10;
                    t = m_4(r_60, s_60, t);
                    LocalPopChoice(r_13);
                  }
                else
                  {
                    t = p_13;
                    t = fetch_1_0(z_3, t);
                  }
              }
              t = v_55;
              t = default_system_usage_0_0(t);
              t = term_z_8;
              q_60 = t;
              t = SSL_exit(q_60);
              LocalPopChoice(o_13);
            }
          else
            {
              t = m_13;
              {
                ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL;
                t = term_r_8;
                x_60 = t;
                t = term_s_11;
                y_60 = t;
                t = term_s_13;
                t = m_4(x_60, y_60, t);
                t = v_55;
                t = default_system_about_0_0(t);
                t = term_z_8;
                w_60 = t;
                t = SSL_exit(w_60);
              }
            }
        }
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        {
          ATerm w_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL;
              static ATerm j_4 (ATerm t)
              {
                ATerm g_56 = NULL,k_56 = NULL,l_56 = NULL,t_13 = NULL;
                l_56 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    k_56 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_56);
                g_56 = t;
                t = k_56;
                if(((a_55 != NULL) && (a_55 != t)))
                  _fail(t);
                else
                  a_55 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, k_56);
                t_13 = t;
                t = SSLsetAnnotations(t_13, g_56);
                return(t);
              }
              t = fetch_1_0(j_4, t);
              t = term_z_5;
              x_55 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_55)), term_y_13);
              y_55 = t;
              t = SSL_printnl(x_55, y_55);
              t = (ATerm) ATmakeAppl(sym__2, term_z_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_55)), term_y_13));
              t = default_system_usage_0_0(t);
              t = term_c_6;
              w_55 = t;
              t = SSL_exit(w_55);
              LocalPopChoice(x_13);
            }
          else
            {
              t = w_13;
            }
        }
      }
  }
  b_55 = t;
  t = term_q_9;
  t = table_destroy_0_0(t);
  t = b_55;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL;
  t = parse_options_1_0(j_107, t);
  q_56 = t;
  t = term_z_13;
  t = table_create_0_0(t);
  t = term_z_13;
  r_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_13, term_a_14, q_56);
  t = lookup_table_0_1(r_56, t);
  u_56 = t;
  t = term_a_14;
  s_56 = t;
  t = u_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(s_56, q_56, t_56, t);
  t = q_56;
  t = l_107(t);
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_107, t);
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        {
          ATerm e_14 = t;
          int h_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_107(t);
              t = report_success_0_0(t);
              LocalPopChoice(h_14);
            }
          else
            {
              t = e_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = if_verbose2_1_0(u_5, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL;
  t = term_j_14;
  v_56 = t;
  t = term_y_5;
  w_56 = t;
  t = term_n_14;
  t = p_4(v_56, w_56, t);
  t = term_p_14;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_q_14;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL;
  x_56 = t;
  t = term_r_8;
  b_57 = t;
  t = term_f_10;
  c_57 = t;
  t = term_g_10;
  t = m_4(b_57, c_57, t);
  y_56 = t;
  t = term_z_5;
  z_56 = t;
  t = (ATerm) ATinsert(ATempty, y_56);
  a_57 = t;
  t = SSL_printnl(z_56, a_57);
  t = x_56;
  return(t);
}
ATerm iowrap_3_0 (ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm t)
{
  static ATerm u_4 (ATerm t)
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_106(t);
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        {
          ATerm t_14 = t;
          int u_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(u_14);
            }
          else
            {
              t = t_14;
              {
                ATerm v_14 = t;
                int w_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(w_14);
                  }
                else
                  {
                    t = v_14;
                    {
                      ATerm y_14 = t;
                      int z_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(r_5, s_5, t_5, t);
                          LocalPopChoice(z_14);
                        }
                      else
                        {
                          t = y_14;
                          {
                            ATerm a_15 = t;
                            int b_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(b_15);
                              }
                            else
                              {
                                t = a_15;
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
  static ATerm q_5 (ATerm t)
  {
    ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL;
    e_57 = t;
    {
      ATerm c_15 = t;
      int d_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm v_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((d_57 != NULL) && (d_57 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_57 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_5, t);
          LocalPopChoice(d_15);
        }
      else
        {
          t = c_15;
          t = term_g_15;
          d_57 = t;
        }
    }
    t = not_null(d_57);
    t = ReadFromFile_0_0(t);
    f_57 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_57, f_57);
    t = apply_strategy_1_0(s_106, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(u_4, u_106, p_5, q_5, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,o_14 = NULL;
  m_57 = t;
  if(match_cons(t, sym__2))
    {
      j_57 = ATgetArgument(t, 0);
      k_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_57);
  i_57 = t;
  t = k_57;
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_58 = NULL,b_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,k_14 = NULL,i_14 = NULL,f_14 = NULL,d_14 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            d_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_57);
        b_61 = t;
        t = d_58;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_61 = ATgetFirst((ATermList) t);
            f_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_58);
        d_61 = t;
        t = f_61;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_61 = ATgetFirst((ATermList) t);
            j_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_61);
        h_61 = t;
        t = i_61;
        if(match_cons(t, sym_Strategies_1))
          {
            m_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_61);
        l_61 = t;
        t = m_61;
        t = map_1_0(strategy_definition_0_0, t);
        n_61 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, n_61);
        d_14 = t;
        t = SSLsetAnnotations(d_14, l_61);
        o_61 = t;
        t = j_61;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(j_61), o_61);
        f_14 = t;
        t = SSLsetAnnotations(f_14, h_61);
        k_61 = t;
        t = (ATerm) ATinsert(CheckATermList(k_61), e_61);
        i_14 = t;
        t = SSLsetAnnotations(i_14, d_61);
        g_61 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, g_61);
        k_14 = t;
        t = SSLsetAnnotations(k_14, b_61);
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
        t = debug_1_0(x_5, t);
      }
  }
  l_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_57, l_57);
  o_14 = t;
  t = SSLsetAnnotations(o_14, i_57);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_j_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(w_5, _fail, default_usage_0_0, t);
  return(t);
}

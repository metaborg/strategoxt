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
Symbol sym_Prefix_2;
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
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_u_15;
ATerm term_r_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_s_13;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_e_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_l_9;
ATerm term_e_9;
ATerm term_v_8;
ATerm term_s_8;
ATerm term_g_8;
ATerm term_t_7;
ATerm term_p_7;
ATerm term_l_7;
ATerm term_h_7;
ATerm term_d_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_v_6;
ATerm term_t_6;
ATerm term_x_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
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
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_x_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_x_5);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__2, term_v_10, term_w_10);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_x_5);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__2, term_g_13, term_x_5);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_x_5);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_x_5);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm debug_1_0 (ATerm r_85 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
ATerm term_expression_0_0 (ATerm t);
static ATerm c_0 (ATerm t);
ATerm match_term_exp_0_0 (ATerm t);
ATerm CallT_3_0 (ATerm u_61 (ATerm), ATerm v_61 (ATerm), ATerm w_61 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm strategy_expression_0_0 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm strategy_definition_0_0 (ATerm t);
ATerm map_1_0 (ATerm c_86 (ATerm), ATerm t);
static ATerm t_3 (ATerm i_37, ATerm j_37, ATerm t);
static ATerm u_3 (ATerm p_22, ATerm q_22, ATerm t);
static ATerm w_3 (ATerm t_85 (ATerm), ATerm s_138, ATerm t_22, ATerm t);
static ATerm v_3 (ATerm l_22, ATerm m_22, ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm o_102 (ATerm), ATerm t);
static ATerm f_47 (ATerm x_46, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_3 (ATerm r_22, ATerm t);
static ATerm y_3 (ATerm k_37, ATerm l_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm z_48 (ATerm u_47, ATerm t);
static ATerm a_49 (ATerm y_47, ATerm z_47, ATerm a_48, ATerm t);
static ATerm b_49 (ATerm i_48, ATerm j_48, ATerm k_48, ATerm t);
static ATerm z_3 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm m_86 (ATerm), ATerm t);
static ATerm s_3 (ATerm c_36, ATerm d_36, ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm x_100 (ATerm), ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm f_4 (ATerm a_47, ATerm b_47, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_4 (ATerm a_52, ATerm b_52, ATerm z_51, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm a_4 (ATerm d_40, ATerm e_40, ATerm t);
ATerm foldr_2_0 (ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_100 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm need_help_1_0 (ATerm m_103 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm c_4 (ATerm r_53, ATerm s_53, ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm t_64 (ATerm), ATerm u_64 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_105 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm parse_options_1_0 (ATerm o_105 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm o_103 (ATerm), ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm r_103 (ATerm), ATerm t);
static ATerm b_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm iowrap_3_0 (ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,e_0 = NULL,f_0 = NULL,j_0 = NULL,s_0 = NULL;
  a_0 = t;
  t = term_x_5;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_t_6;
  j_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_6), e_0), term_v_6);
  s_0 = t;
  t = SSL_printnl(j_0, s_0);
  t = term_y_6;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm r_85 (ATerm), ATerm t)
{
  ATerm x_0 = NULL,c_1 = NULL,d_1 = NULL,o_1 = NULL;
  x_0 = t;
  t = r_85(t);
  c_1 = t;
  t = term_t_6;
  d_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_0), c_1);
  o_1 = t;
  t = SSL_printnl(d_1, o_1);
  t = x_0;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_z_6;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm a_7 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
      u_5 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = u_5;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              v_5 = ATgetArgument(t, 0);
              {
                ATerm h_0 = NULL,q_0 = NULL,b_2 = NULL;
                t = SSLgetAnnotations(u_5);
                h_0 = t;
                t = SSL_is_string(v_5);
                q_0 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, q_0);
                b_2 = t;
                t = SSLsetAnnotations(b_2, h_0);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  v_5 = ATgetArgument(t, 0);
                  {
                    ATerm y_0 = NULL,a_1 = NULL,c_2 = NULL;
                    t = SSLgetAnnotations(u_5);
                    y_0 = t;
                    t = SSL_is_int(v_5);
                    a_1 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, a_1);
                    c_2 = t;
                    t = SSLsetAnnotations(c_2, y_0);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      v_5 = ATgetArgument(t, 0);
                      {
                        ATerm i_1 = NULL,k_1 = NULL,e_2 = NULL;
                        t = SSLgetAnnotations(u_5);
                        i_1 = t;
                        t = SSL_is_real(v_5);
                        k_1 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, k_1);
                        e_2 = t;
                        t = SSLsetAnnotations(e_2, i_1);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          v_5 = ATgetArgument(t, 0);
                          {
                            ATerm r_1 = NULL,t_1 = NULL,f_2 = NULL;
                            t = SSLgetAnnotations(u_5);
                            r_1 = t;
                            t = SSL_is_string(v_5);
                            t_1 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, t_1);
                            f_2 = t;
                            t = SSLsetAnnotations(f_2, r_1);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              v_5 = ATgetArgument(t, 0);
                              {
                                ATerm z_1 = NULL,d_2 = NULL,g_2 = NULL;
                                t = SSLgetAnnotations(u_5);
                                z_1 = t;
                                t = v_5;
                                t = term_expression_0_0(t);
                                d_2 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, d_2);
                                g_2 = t;
                                t = SSLsetAnnotations(g_2, z_1);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  v_5 = ATgetArgument(t, 0);
                                  w_5 = ATgetArgument(t, 1);
                                  {
                                    ATerm z_2 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,k_3 = NULL,l_3 = NULL,i_2 = NULL,h_2 = NULL;
                                    t = SSLgetAnnotations(u_5);
                                    z_2 = t;
                                    t = v_5;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        i_3 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(v_5);
                                    h_3 = t;
                                    t = SSL_is_string(i_3);
                                    k_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, k_3);
                                    h_2 = t;
                                    t = SSLsetAnnotations(h_2, h_3);
                                    l_3 = t;
                                    t = w_5;
                                    t = term_expression_0_0(t);
                                    g_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, l_3, g_3);
                                    i_2 = t;
                                    t = SSLsetAnnotations(i_2, z_2);
                                  }
                                }
                              else
                                {
                                  ATerm i_4 = NULL,o_4 = NULL,q_4 = NULL,j_2 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      v_5 = ATgetArgument(t, 0);
                                      w_5 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(u_5);
                                  i_4 = t;
                                  t = SSL_is_string(v_5);
                                  o_4 = t;
                                  t = w_5;
                                  t = map_1_0(term_expression_0_0, t);
                                  q_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, o_4, q_4);
                                  j_2 = t;
                                  t = SSLsetAnnotations(j_2, i_4);
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
      t = debug_1_0(b_0, t);
    }
  return(t);
}
static ATerm c_0 (ATerm t)
{
  t = term_d_7;
  return(t);
}
ATerm match_term_exp_0_0 (ATerm t)
{
  ATerm f_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_11 = NULL,o_11 = NULL,q_11 = NULL;
      n_11 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = n_11;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              o_11 = ATgetArgument(t, 0);
              {
                ATerm d_5 = NULL,z_5 = NULL,y_2 = NULL;
                t = SSLgetAnnotations(n_11);
                d_5 = t;
                t = SSL_is_string(o_11);
                z_5 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, z_5);
                y_2 = t;
                t = SSLsetAnnotations(y_2, d_5);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  o_11 = ATgetArgument(t, 0);
                  {
                    ATerm g_6 = NULL,l_6 = NULL,a_3 = NULL;
                    t = SSLgetAnnotations(n_11);
                    g_6 = t;
                    t = SSL_is_int(o_11);
                    l_6 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, l_6);
                    a_3 = t;
                    t = SSLsetAnnotations(a_3, g_6);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      o_11 = ATgetArgument(t, 0);
                      {
                        ATerm u_6 = NULL,w_6 = NULL,b_3 = NULL;
                        t = SSLgetAnnotations(n_11);
                        u_6 = t;
                        t = SSL_is_real(o_11);
                        w_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, w_6);
                        b_3 = t;
                        t = SSLsetAnnotations(b_3, u_6);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          o_11 = ATgetArgument(t, 0);
                          {
                            ATerm c_7 = NULL,e_7 = NULL,e_3 = NULL;
                            t = SSLgetAnnotations(n_11);
                            c_7 = t;
                            t = SSL_is_string(o_11);
                            e_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, e_7);
                            e_3 = t;
                            t = SSLsetAnnotations(e_3, c_7);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              o_11 = ATgetArgument(t, 0);
                              {
                                ATerm k_7 = NULL,m_7 = NULL,f_3 = NULL;
                                t = SSLgetAnnotations(n_11);
                                k_7 = t;
                                t = o_11;
                                t = match_term_exp_0_0(t);
                                m_7 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, m_7);
                                f_3 = t;
                                t = SSLsetAnnotations(f_3, k_7);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  o_11 = ATgetArgument(t, 0);
                                  q_11 = ATgetArgument(t, 1);
                                  {
                                    ATerm u_7 = NULL,y_7 = NULL,w_8 = NULL,x_8 = NULL,z_8 = NULL,a_9 = NULL,q_3 = NULL,j_3 = NULL;
                                    t = SSLgetAnnotations(n_11);
                                    u_7 = t;
                                    t = o_11;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        x_8 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(o_11);
                                    w_8 = t;
                                    t = SSL_is_string(x_8);
                                    z_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, z_8);
                                    j_3 = t;
                                    t = SSLsetAnnotations(j_3, w_8);
                                    a_9 = t;
                                    t = q_11;
                                    t = match_term_exp_0_0(t);
                                    y_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, a_9, y_7);
                                    q_3 = t;
                                    t = SSLsetAnnotations(q_3, u_7);
                                  }
                                }
                              else
                                {
                                  ATerm o_9 = NULL,t_9 = NULL,v_9 = NULL,g_4 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      o_11 = ATgetArgument(t, 0);
                                      q_11 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(n_11);
                                  o_9 = t;
                                  t = SSL_is_string(o_11);
                                  t_9 = t;
                                  t = q_11;
                                  t = map_1_0(match_term_exp_0_0, t);
                                  v_9 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, t_9, v_9);
                                  g_4 = t;
                                  t = SSLsetAnnotations(g_4, o_9);
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
      t = debug_1_0(c_0, t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm u_61 (ATerm), ATerm v_61 (ATerm), ATerm w_61 (ATerm), ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,x_12 = NULL,j_13 = NULL,k_13 = NULL,q_13 = NULL,r_13 = NULL,u_13 = NULL,y_4 = NULL;
  u_13 = t;
  if(match_cons(t, sym_CallT_3))
    {
      t_12 = ATgetArgument(t, 0);
      x_12 = ATgetArgument(t, 1);
      j_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_13);
  s_12 = t;
  t = t_12;
  t = u_61(t);
  k_13 = t;
  t = x_12;
  t = v_61(t);
  q_13 = t;
  t = j_13;
  t = w_61(t);
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, k_13, q_13, r_13);
  y_4 = t;
  t = SSLsetAnnotations(y_4, s_12);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = CallT_3_0(r_0, t_0, u_0, t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,m_5 = NULL;
  p_20 = t;
  if(match_cons(t, sym_SVar_1))
    {
      n_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_20);
  m_20 = t;
  t = SSL_is_string(n_20);
  o_20 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, o_20);
  m_5 = t;
  t = SSLsetAnnotations(m_5, m_20);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,x_20 = NULL,y_20 = NULL,n_5 = NULL;
  y_20 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_20);
  s_20 = t;
  t = SSL_is_string(t_20);
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_20);
  n_5 = t;
  t = SSLsetAnnotations(n_5, s_20);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm w_28 = NULL;
  w_28 = t;
  t = SSL_is_string(w_28);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,j_30 = NULL,s_7 = NULL,q_6 = NULL;
  j_30 = t;
  if(match_cons(t, sym_CallT_3))
    {
      a_30 = ATgetArgument(t, 0);
      b_30 = ATgetArgument(t, 1);
      c_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_30);
  z_29 = t;
  t = a_30;
  if(match_cons(t, sym_SVar_1))
    {
      f_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_30);
  e_30 = t;
  t = SSL_is_string(f_30);
  g_30 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, g_30);
  q_6 = t;
  t = SSLsetAnnotations(q_6, e_30);
  h_30 = t;
  t = b_30;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = c_30;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, h_30, b_30, c_30);
  s_7 = t;
  t = SSLsetAnnotations(s_7, z_29);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,v_7 = NULL;
  o_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_30);
  l_30 = t;
  t = SSL_is_string(m_30);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_30);
  v_7 = t;
  t = SSLsetAnnotations(v_7, l_30);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm r_34 = NULL,u_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL;
  r_34 = t;
  if(match_cons(t, sym_SDef_3))
    {
      u_34 = ATgetArgument(t, 0);
      w_34 = ATgetArgument(t, 1);
      x_34 = ATgetArgument(t, 2);
      {
        ATerm h_37 = NULL,r_37 = NULL,x_37 = NULL,y_37 = NULL,b_8 = NULL;
        t = SSLgetAnnotations(r_34);
        h_37 = t;
        t = SSL_is_string(u_34);
        r_37 = t;
        t = w_34;
        t = map_1_0(f_1, t);
        x_37 = t;
        t = x_34;
        t = strategy_expression_0_0(t);
        y_37 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, r_37, x_37, y_37);
        b_8 = t;
        t = SSLsetAnnotations(b_8, h_37);
      }
    }
  else
    {
      ATerm z_39 = NULL,a_44 = NULL,b_44 = NULL,u_44 = NULL,v_44 = NULL,e_8 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          u_34 = ATgetArgument(t, 0);
          w_34 = ATgetArgument(t, 1);
          x_34 = ATgetArgument(t, 2);
          y_34 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_34);
      z_39 = t;
      t = SSL_is_string(u_34);
      a_44 = t;
      t = w_34;
      t = map_1_0(g_1, t);
      b_44 = t;
      t = x_34;
      t = map_1_0(h_1, t);
      u_44 = t;
      t = y_34;
      t = strategy_expression_0_0(t);
      v_44 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, a_44, b_44, u_44, v_44);
      e_8 = t;
      t = SSLsetAnnotations(e_8, z_39);
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm s_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,c_39 = NULL,a_8 = NULL;
  c_39 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      w_38 = ATgetArgument(t, 0);
      x_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_39);
  s_38 = t;
  t = SSL_is_string(w_38);
  y_38 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_38, x_38);
  a_8 = t;
  t = SSLsetAnnotations(a_8, s_38);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm w_48 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,g_50 = NULL,c_8 = NULL;
  g_50 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      h_49 = ATgetArgument(t, 0);
      i_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_50);
  w_48 = t;
  t = SSL_is_string(h_49);
  j_49 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_49, i_49);
  c_8 = t;
  t = SSLsetAnnotations(c_8, w_48);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,c_51 = NULL,i_51 = NULL,j_51 = NULL,d_8 = NULL;
  j_51 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      j_50 = ATgetArgument(t, 0);
      c_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_51);
  i_50 = t;
  t = SSL_is_string(j_50);
  i_51 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_51, c_51);
  d_8 = t;
  t = SSLsetAnnotations(d_8, i_50);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_h_7;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_38 = NULL,d_38 = NULL,h_38 = NULL,m_38 = NULL;
      d_38 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = d_38;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = d_38;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  h_38 = ATgetArgument(t, 0);
                  {
                    ATerm u_14 = NULL,w_14 = NULL,c_5 = NULL;
                    t = SSLgetAnnotations(d_38);
                    u_14 = t;
                    t = h_38;
                    t = strategy_expression_0_0(t);
                    w_14 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, w_14);
                    c_5 = t;
                    t = SSLsetAnnotations(c_5, u_14);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      h_38 = ATgetArgument(t, 0);
                      {
                        ATerm c_15 = NULL,e_15 = NULL,e_5 = NULL;
                        t = SSLgetAnnotations(d_38);
                        c_15 = t;
                        t = h_38;
                        t = strategy_expression_0_0(t);
                        e_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, e_15);
                        e_5 = t;
                        t = SSLsetAnnotations(e_5, c_15);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          h_38 = ATgetArgument(t, 0);
                          m_38 = ATgetArgument(t, 1);
                          {
                            ATerm l_15 = NULL,o_15 = NULL,p_15 = NULL,f_5 = NULL;
                            t = SSLgetAnnotations(d_38);
                            l_15 = t;
                            t = h_38;
                            t = strategy_expression_0_0(t);
                            o_15 = t;
                            t = m_38;
                            t = strategy_expression_0_0(t);
                            p_15 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, o_15, p_15);
                            f_5 = t;
                            t = SSLsetAnnotations(f_5, l_15);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              h_38 = ATgetArgument(t, 0);
                              m_38 = ATgetArgument(t, 1);
                              {
                                ATerm x_15 = NULL,a_16 = NULL,b_16 = NULL,g_5 = NULL;
                                t = SSLgetAnnotations(d_38);
                                x_15 = t;
                                t = h_38;
                                t = strategy_expression_0_0(t);
                                a_16 = t;
                                t = m_38;
                                t = strategy_expression_0_0(t);
                                b_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, a_16, b_16);
                                g_5 = t;
                                t = SSLsetAnnotations(g_5, x_15);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  h_38 = ATgetArgument(t, 0);
                                  m_38 = ATgetArgument(t, 1);
                                  {
                                    ATerm j_16 = NULL,m_16 = NULL,n_16 = NULL,h_5 = NULL;
                                    t = SSLgetAnnotations(d_38);
                                    j_16 = t;
                                    t = h_38;
                                    t = strategy_expression_0_0(t);
                                    m_16 = t;
                                    t = m_38;
                                    t = strategy_expression_0_0(t);
                                    n_16 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, m_16, n_16);
                                    h_5 = t;
                                    t = SSLsetAnnotations(h_5, j_16);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      h_38 = ATgetArgument(t, 0);
                                      m_38 = ATgetArgument(t, 1);
                                      c_38 = ATgetArgument(t, 2);
                                      {
                                        ATerm e_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,i_5 = NULL;
                                        t = SSLgetAnnotations(d_38);
                                        e_17 = t;
                                        t = h_38;
                                        t = strategy_expression_0_0(t);
                                        j_17 = t;
                                        t = m_38;
                                        t = strategy_expression_0_0(t);
                                        k_17 = t;
                                        t = c_38;
                                        t = strategy_expression_0_0(t);
                                        l_17 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, j_17, k_17, l_17);
                                        i_5 = t;
                                        t = SSLsetAnnotations(i_5, e_17);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          h_38 = ATgetArgument(t, 0);
                                          m_38 = ATgetArgument(t, 1);
                                          {
                                            ATerm y_17 = NULL,h_18 = NULL,i_18 = NULL,j_5 = NULL;
                                            t = SSLgetAnnotations(d_38);
                                            y_17 = t;
                                            t = h_38;
                                            t = strategy_expression_0_0(t);
                                            h_18 = t;
                                            t = m_38;
                                            t = strategy_expression_0_0(t);
                                            i_18 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, h_18, i_18);
                                            j_5 = t;
                                            t = SSLsetAnnotations(j_5, y_17);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              h_38 = ATgetArgument(t, 0);
                                              m_38 = ATgetArgument(t, 1);
                                              {
                                                ATerm x_18 = NULL,b_19 = NULL,c_19 = NULL,k_5 = NULL;
                                                t = SSLgetAnnotations(d_38);
                                                x_18 = t;
                                                t = h_38;
                                                t = strategy_expression_0_0(t);
                                                b_19 = t;
                                                t = m_38;
                                                t = strategy_expression_0_0(t);
                                                c_19 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, b_19, c_19);
                                                k_5 = t;
                                                t = SSLsetAnnotations(k_5, x_18);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  h_38 = ATgetArgument(t, 0);
                                                  m_38 = ATgetArgument(t, 1);
                                                  c_38 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm w_19 = NULL,e_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,o_5 = NULL,l_5 = NULL;
                                                    t = SSLgetAnnotations(d_38);
                                                    w_19 = t;
                                                    t = h_38;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        i_20 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(h_38);
                                                    h_20 = t;
                                                    t = SSL_is_string(i_20);
                                                    j_20 = t;
                                                    t = (ATerm) ATmakeAppl(sym_SVar_1, j_20);
                                                    l_5 = t;
                                                    t = SSLsetAnnotations(l_5, h_20);
                                                    k_20 = t;
                                                    t = m_38;
                                                    t = map_1_0(m_0, t);
                                                    e_20 = t;
                                                    t = c_38;
                                                    t = map_1_0(v_0, t);
                                                    g_20 = t;
                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, k_20, e_20, g_20);
                                                    o_5 = t;
                                                    t = SSLsetAnnotations(o_5, w_19);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      h_38 = ATgetArgument(t, 0);
                                                      m_38 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm k_21 = NULL,o_21 = NULL,p_21 = NULL,p_5 = NULL;
                                                        t = SSLgetAnnotations(d_38);
                                                        k_21 = t;
                                                        t = SSL_is_string(h_38);
                                                        o_21 = t;
                                                        t = m_38;
                                                        t = strategy_expression_0_0(t);
                                                        p_21 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, o_21, p_21);
                                                        p_5 = t;
                                                        t = SSLsetAnnotations(p_5, k_21);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          h_38 = ATgetArgument(t, 0);
                                                          m_38 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm a_22 = NULL,f_22 = NULL,j_22 = NULL,q_5 = NULL;
                                                            t = SSLgetAnnotations(d_38);
                                                            a_22 = t;
                                                            t = SSL_is_int(h_38);
                                                            f_22 = t;
                                                            t = m_38;
                                                            t = strategy_expression_0_0(t);
                                                            j_22 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, f_22, j_22);
                                                            q_5 = t;
                                                            t = SSLsetAnnotations(q_5, a_22);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              h_38 = ATgetArgument(t, 0);
                                                              m_38 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm c_23 = NULL,f_23 = NULL,g_23 = NULL,r_5 = NULL;
                                                                t = SSLgetAnnotations(d_38);
                                                                c_23 = t;
                                                                t = SSL_is_string(h_38);
                                                                f_23 = t;
                                                                t = m_38;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                g_23 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, f_23, g_23);
                                                                r_5 = t;
                                                                t = SSLsetAnnotations(r_5, c_23);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  h_38 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm s_23 = NULL,u_23 = NULL,s_5 = NULL;
                                                                    t = SSLgetAnnotations(d_38);
                                                                    s_23 = t;
                                                                    t = h_38;
                                                                    t = strategy_expression_0_0(t);
                                                                    u_23 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, u_23);
                                                                    s_5 = t;
                                                                    t = SSLsetAnnotations(s_5, s_23);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      h_38 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm b_24 = NULL,e_24 = NULL,t_5 = NULL;
                                                                        t = SSLgetAnnotations(d_38);
                                                                        b_24 = t;
                                                                        t = h_38;
                                                                        t = strategy_expression_0_0(t);
                                                                        e_24 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, e_24);
                                                                        t_5 = t;
                                                                        t = SSLsetAnnotations(t_5, b_24);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          h_38 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm m_24 = NULL,o_24 = NULL,c_6 = NULL;
                                                                            t = SSLgetAnnotations(d_38);
                                                                            m_24 = t;
                                                                            t = h_38;
                                                                            t = strategy_expression_0_0(t);
                                                                            o_24 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, o_24);
                                                                            c_6 = t;
                                                                            t = SSLsetAnnotations(c_6, m_24);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              h_38 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm v_24 = NULL,y_24 = NULL,h_6 = NULL;
                                                                                t = SSLgetAnnotations(d_38);
                                                                                v_24 = t;
                                                                                t = h_38;
                                                                                t = strategy_expression_0_0(t);
                                                                                y_24 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, y_24);
                                                                                h_6 = t;
                                                                                t = SSLsetAnnotations(h_6, v_24);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  h_38 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm h_25 = NULL,j_25 = NULL,i_6 = NULL;
                                                                                    t = SSLgetAnnotations(d_38);
                                                                                    h_25 = t;
                                                                                    t = h_38;
                                                                                    t = match_term_exp_0_0(t);
                                                                                    j_25 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, j_25);
                                                                                    i_6 = t;
                                                                                    t = SSLsetAnnotations(i_6, h_25);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      h_38 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm p_25 = NULL,s_25 = NULL,k_6 = NULL;
                                                                                        t = SSLgetAnnotations(d_38);
                                                                                        p_25 = t;
                                                                                        t = h_38;
                                                                                        t = term_expression_0_0(t);
                                                                                        s_25 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, s_25);
                                                                                        k_6 = t;
                                                                                        t = SSLsetAnnotations(k_6, p_25);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          h_38 = ATgetArgument(t, 0);
                                                                                          m_38 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm o_28 = NULL,s_28 = NULL,u_28 = NULL,n_6 = NULL;
                                                                                            t = SSLgetAnnotations(d_38);
                                                                                            o_28 = t;
                                                                                            t = h_38;
                                                                                            t = map_1_0(w_0, t);
                                                                                            s_28 = t;
                                                                                            t = m_38;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            u_28 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, s_28, u_28);
                                                                                            n_6 = t;
                                                                                            t = SSLsetAnnotations(n_6, o_28);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              h_38 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm d_29 = NULL,f_29 = NULL,p_6 = NULL;
                                                                                                t = SSLgetAnnotations(d_38);
                                                                                                d_29 = t;
                                                                                                t = h_38;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                f_29 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, f_29);
                                                                                                p_6 = t;
                                                                                                t = SSLsetAnnotations(p_6, d_29);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  h_38 = ATgetArgument(t, 0);
                                                                                                  m_38 = ATgetArgument(t, 1);
                                                                                                  c_38 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm p_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,z_7 = NULL;
                                                                                                    t = SSLgetAnnotations(d_38);
                                                                                                    p_29 = t;
                                                                                                    t = SSL_is_string(h_38);
                                                                                                    v_29 = t;
                                                                                                    t = m_38;
                                                                                                    t = map_1_0(z_0, t);
                                                                                                    w_29 = t;
                                                                                                    t = c_38;
                                                                                                    t = map_1_0(b_1, t);
                                                                                                    x_29 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, v_29, w_29, x_29);
                                                                                                    z_7 = t;
                                                                                                    t = SSLsetAnnotations(z_7, p_29);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm y_30 = NULL,b_31 = NULL,d_31 = NULL,f_8 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      h_38 = ATgetArgument(t, 0);
                                                                                                      m_38 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(d_38);
                                                                                                  y_30 = t;
                                                                                                  t = h_38;
                                                                                                  t = map_1_0(e_1, t);
                                                                                                  b_31 = t;
                                                                                                  t = m_38;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  d_31 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, b_31, d_31);
                                                                                                  f_8 = t;
                                                                                                  t = SSLsetAnnotations(f_8, y_30);
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
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      t = debug_1_0(j_1, t);
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm x_53 = NULL,f_54 = NULL,r_54 = NULL,s_54 = NULL,e_55 = NULL,h_10 = NULL;
  e_55 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      f_54 = ATgetArgument(t, 0);
      r_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_55);
  x_53 = t;
  t = SSL_is_string(f_54);
  s_54 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_54, r_54);
  h_10 = t;
  t = SSLsetAnnotations(h_10, x_53);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,j_10 = NULL;
  c_61 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      z_60 = ATgetArgument(t, 0);
      a_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_61);
  y_60 = t;
  t = SSL_is_string(z_60);
  b_61 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_61, a_61);
  j_10 = t;
  t = SSLsetAnnotations(j_10, y_60);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,k_10 = NULL;
  h_61 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_61 = ATgetArgument(t, 0);
      f_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_61);
  d_61 = t;
  t = SSL_is_string(e_61);
  g_61 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_61, f_61);
  k_10 = t;
  t = SSLsetAnnotations(k_10, d_61);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,m_10 = NULL;
  j_62 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      g_62 = ATgetArgument(t, 0);
      h_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_62);
  f_62 = t;
  t = SSL_is_string(g_62);
  i_62 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_62, h_62);
  m_10 = t;
  t = SSLsetAnnotations(m_10, f_62);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,n_10 = NULL;
  o_62 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      l_62 = ATgetArgument(t, 0);
      m_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_62);
  k_62 = t;
  t = SSL_is_string(l_62);
  n_62 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_62, m_62);
  n_10 = t;
  t = SSLsetAnnotations(n_10, k_62);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,p_10 = NULL;
  k_63 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      h_63 = ATgetArgument(t, 0);
      i_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_63);
  g_63 = t;
  t = SSL_is_string(h_63);
  j_63 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_63, i_63);
  p_10 = t;
  t = SSLsetAnnotations(p_10, g_63);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_10 = NULL;
  p_63 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      m_63 = ATgetArgument(t, 0);
      n_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_63);
  l_63 = t;
  t = SSL_is_string(m_63);
  o_63 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, o_63, n_63);
  q_10 = t;
  t = SSLsetAnnotations(q_10, l_63);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_l_7;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL;
      s_43 = t;
      if(match_cons(t, sym_SDef_3))
        {
          t_43 = ATgetArgument(t, 0);
          u_43 = ATgetArgument(t, 1);
          v_43 = ATgetArgument(t, 2);
          {
            ATerm t_51 = NULL,w_52 = NULL,a_53 = NULL,h_53 = NULL,i_10 = NULL;
            t = SSLgetAnnotations(s_43);
            t_51 = t;
            t = SSL_is_string(t_43);
            w_52 = t;
            t = u_43;
            t = map_1_0(l_1, t);
            a_53 = t;
            t = v_43;
            t = strategy_expression_0_0(t);
            h_53 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, w_52, a_53, h_53);
            i_10 = t;
            t = SSLsetAnnotations(i_10, t_51);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              t_43 = ATgetArgument(t, 0);
              u_43 = ATgetArgument(t, 1);
              v_43 = ATgetArgument(t, 2);
              r_43 = ATgetArgument(t, 3);
              {
                ATerm d_58 = NULL,w_59 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,l_10 = NULL;
                t = SSLgetAnnotations(s_43);
                d_58 = t;
                t = SSL_is_string(t_43);
                w_59 = t;
                t = u_43;
                t = map_1_0(m_1, t);
                u_60 = t;
                t = v_43;
                t = map_1_0(n_1, t);
                v_60 = t;
                t = r_43;
                t = strategy_expression_0_0(t);
                w_60 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, w_59, u_60, v_60, w_60);
                l_10 = t;
                t = SSLsetAnnotations(l_10, d_58);
              }
            }
          else
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  t_43 = ATgetArgument(t, 0);
                  u_43 = ATgetArgument(t, 1);
                  v_43 = ATgetArgument(t, 2);
                  r_43 = ATgetArgument(t, 3);
                  {
                    ATerm s_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,o_10 = NULL;
                    t = SSLgetAnnotations(s_43);
                    s_61 = t;
                    t = SSL_is_string(t_43);
                    a_62 = t;
                    t = u_43;
                    t = map_1_0(p_1, t);
                    b_62 = t;
                    t = v_43;
                    t = map_1_0(q_1, t);
                    c_62 = t;
                    t = r_43;
                    t = strategy_expression_0_0(t);
                    d_62 = t;
                    t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, a_62, b_62, c_62, d_62);
                    o_10 = t;
                    t = SSLsetAnnotations(o_10, s_61);
                  }
                }
              else
                {
                  ATerm y_62 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,r_10 = NULL;
                  if(match_cons(t, sym_ExtSDef_3))
                    {
                      t_43 = ATgetArgument(t, 0);
                      u_43 = ATgetArgument(t, 1);
                      v_43 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_43);
                  y_62 = t;
                  t = SSL_is_string(t_43);
                  c_63 = t;
                  t = u_43;
                  t = map_1_0(s_1, t);
                  d_63 = t;
                  t = v_43;
                  t = map_1_0(u_1, t);
                  e_63 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDef_3, c_63, d_63, e_63);
                  r_10 = t;
                  t = SSLsetAnnotations(r_10, y_62);
                }
            }
        }
      LocalPopChoice(o_7);
    }
  else
    {
      t = n_7;
      t = debug_1_0(v_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm c_86 (ATerm), ATerm t)
{
  static ATerm o_44 (ATerm t)
  {
    ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL;
    l_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_44;
      }
    else
      {
        ATerm x_63 = NULL,a_64 = NULL,b_64 = NULL,d_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_44 = ATgetFirst((ATermList) t);
            n_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_44);
        x_63 = t;
        t = m_44;
        t = c_86(t);
        a_64 = t;
        t = n_44;
        t = o_44(t);
        b_64 = t;
        t = (ATerm) ATinsert(CheckATermList(b_64), a_64);
        d_11 = t;
        t = SSLsetAnnotations(d_11, x_63);
      }
    return(t);
  }
  t = o_44(t);
  return(t);
}
static ATerm t_3 (ATerm i_37, ATerm j_37, ATerm t)
{
  ATerm q_44 = NULL;
  t = SSL_fputc(i_37, j_37);
  q_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_44);
  return(t);
}
static ATerm u_3 (ATerm p_22, ATerm q_22, ATerm t)
{
  ATerm r_44 = NULL;
  t = SSL_write_term_to_stream_text(p_22, q_22);
  r_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_44);
  return(t);
}
static ATerm w_3 (ATerm t_85 (ATerm), ATerm s_138, ATerm t_22, ATerm t)
{
  ATerm s_44 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_138, term_p_7);
  t = z_3(t);
  s_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_44, t_22);
  t = t_85(t);
  t = fclose_0_0(t);
  t = t_22;
  return(t);
}
static ATerm v_3 (ATerm l_22, ATerm m_22, ATerm t)
{
  ATerm t_44 = NULL;
  t = SSL_write_term_to_stream_baf(l_22, m_22);
  t_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_44);
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
  ATerm p_64 = NULL,q_64 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_7 = ATgetArgument(t, 0);
      if(match_cons(q_7, sym_Stream_1))
        {
          p_64 = ATgetArgument(q_7, 0);
        }
      else
        _fail(t);
      q_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(p_64, q_64, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_7 = ATgetArgument(t, 0);
      if(match_cons(r_7, sym_Stream_1))
        {
          g_65 = ATgetArgument(r_7, 0);
        }
      else
        _fail(t);
      h_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(g_65, h_65, t);
  d_65 = t;
  t = term_t_7;
  e_65 = t;
  t = d_65;
  if(match_cons(t, sym_Stream_1))
    {
      f_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_7, d_65);
  t = t_3(e_65, f_65, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,h_46 = NULL,i_46 = NULL,g_11 = NULL,f_11 = NULL;
  y_44 = t;
  if(match_cons(t, sym__2))
    {
      f_45 = ATgetArgument(t, 0);
      g_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_44);
  e_45 = t;
  t = f_45;
  {
    ATerm w_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm w_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((x_44 != NULL) && (x_44 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_44 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(w_1, t);
        LocalPopChoice(x_7);
      }
    else
      {
        t = w_7;
        t = term_g_8;
        x_44 = t;
      }
  }
  h_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_45, g_45);
  f_11 = t;
  t = SSLsetAnnotations(f_11, e_45);
  t = y_44;
  if(match_cons(t, sym__2))
    {
      a_45 = ATgetArgument(t, 0);
      b_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_44);
  z_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_45, (ATerm) ATmakeAppl(sym__2, not_null(x_44), b_45));
  g_11 = t;
  t = SSLsetAnnotations(g_11, z_44);
  d_45 = t;
  if(match_cons(t, sym__2))
    {
      h_46 = ATgetArgument(t, 0);
      i_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,h_11 = NULL;
        t = SSLgetAnnotations(d_45);
        i_64 = t;
        t = h_46;
        t = fetch_1_0(x_1, t);
        l_64 = t;
        t = i_46;
        if(match_cons(t, sym__2))
          {
            n_64 = ATgetArgument(t, 0);
            o_64 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_3(y_1, n_64, o_64, t);
        m_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_64, m_64);
        h_11 = t;
        t = SSLsetAnnotations(h_11, i_64);
        LocalPopChoice(i_8);
      }
    else
      {
        t = h_8;
        {
          ATerm x_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,i_11 = NULL;
          t = SSLgetAnnotations(d_45);
          x_64 = t;
          t = i_46;
          if(match_cons(t, sym__2))
            {
              b_65 = ATgetArgument(t, 0);
              c_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_3(a_2, b_65, c_65, t);
          a_65 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_46, a_65);
          i_11 = t;
          t = SSLsetAnnotations(i_11, x_64);
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
ATerm apply_strategy_1_0 (ATerm o_102 (ATerm), ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL;
  p_46 = t;
  t = dtime_0_0(t);
  t = p_46;
  t = o_102(t);
  o_46 = t;
  t = dtime_0_0(t);
  l_46 = t;
  t = o_46;
  if(match_cons(t, sym__2))
    {
      m_46 = ATgetArgument(t, 0);
      n_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_46), (ATerm) ATmakeAppl(sym_Runtime_1, l_46)), n_46);
  return(t);
}
static ATerm f_47 (ATerm x_46, ATerm t)
{
  t = SSL_fclose(x_46);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL;
  d_47 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_47 = ATgetArgument(t, 0);
      {
        ATerm j_8 = t;
        int k_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_47);
            LocalPopChoice(k_8);
          }
        else
          {
            t = j_8;
            t = f_47(d_47, t);
          }
      }
    }
  else
    {
      t = f_47(d_47, t);
    }
  return(t);
}
static ATerm x_3 (ATerm r_22, ATerm t)
{
  t = SSL_read_term_from_stream(r_22);
  return(t);
}
static ATerm y_3 (ATerm k_37, ATerm l_37, ATerm t)
{
  ATerm g_47 = NULL;
  t = SSL_fopen(k_37, l_37);
  g_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_47);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_47 = NULL;
  t = SSL_stdin_stream();
  h_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_47);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_47 = NULL;
  t = SSL_stdout_stream();
  i_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_47);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_47 = NULL;
  t = SSL_stderr_stream();
  o_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_47);
  return(t);
}
static ATerm z_48 (ATerm u_47, ATerm t)
{
  ATerm v_47 = NULL;
  t = SSL_explode_term(u_47);
  if(match_cons(t, sym__2))
    {
      ATerm l_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_8 = ATgetArgument(t, 1);
        if(((ATgetType(m_8) == AT_LIST) && !(ATisEmpty(m_8))))
          {
            v_47 = ATgetFirst((ATermList) m_8);
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
  t = v_47;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_47;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_47;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_47;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm a_49 (ATerm y_47, ATerm z_47, ATerm a_48, ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL,g_48 = NULL,p_11 = NULL;
  t = SSLgetAnnotations(a_48);
  d_48 = t;
  t = y_47;
  if(match_cons(t, sym_Path_1))
    {
      g_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_48, z_47);
  p_11 = t;
  t = SSLsetAnnotations(p_11, d_48);
  if(match_cons(t, sym__2))
    {
      b_48 = ATgetArgument(t, 0);
      c_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(b_48, c_48, t);
  return(t);
}
static ATerm b_49 (ATerm i_48, ATerm j_48, ATerm k_48, ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL,q_48 = NULL,s_11 = NULL;
  t = SSLgetAnnotations(k_48);
  n_48 = t;
  t = SSL_is_string(i_48);
  q_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_48, j_48);
  s_11 = t;
  t = SSLsetAnnotations(s_11, n_48);
  if(match_cons(t, sym__2))
    {
      l_48 = ATgetArgument(t, 0);
      m_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(l_48, m_48, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm s_48 = NULL,x_48 = NULL,y_48 = NULL;
  s_48 = t;
  if(match_cons(t, sym__2))
    {
      x_48 = ATgetArgument(t, 0);
      y_48 = ATgetArgument(t, 1);
      {
        ATerm o_8 = t;
        int p_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_48(s_48, t);
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
                  t = a_49(x_48, y_48, s_48, t);
                  LocalPopChoice(r_8);
                }
              else
                {
                  t = q_8;
                  t = b_49(x_48, y_48, s_48, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_48(s_48, t);
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_s_8;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
  ATerm t_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_49 = NULL;
      f_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_49, term_v_8);
      t = z_3(t);
      LocalPopChoice(u_8);
    }
  else
    {
      t = t_8;
      t = debug_1_0(k_2, t);
      _fail(t);
    }
  d_49 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(e_49, t);
  c_49 = t;
  t = d_49;
  t = fclose_0_0(t);
  t = c_49;
  return(t);
}
ATerm fetch_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  static ATerm d_50 (ATerm t)
  {
    ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL;
    a_50 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_50 = ATgetFirst((ATermList) t);
        c_50 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_8 = t;
      int b_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_65 = NULL,w_65 = NULL,v_11 = NULL;
          t = SSLgetAnnotations(a_50);
          t_65 = t;
          t = b_50;
          t = m_86(t);
          w_65 = t;
          t = (ATerm) ATinsert(CheckATermList(c_50), w_65);
          v_11 = t;
          t = SSLsetAnnotations(v_11, t_65);
          LocalPopChoice(b_9);
        }
      else
        {
          t = y_8;
          {
            ATerm e_66 = NULL,h_66 = NULL,w_11 = NULL;
            t = SSLgetAnnotations(a_50);
            e_66 = t;
            t = c_50;
            t = d_50(t);
            h_66 = t;
            t = (ATerm) ATinsert(CheckATermList(h_66), b_50);
            w_11 = t;
            t = SSLsetAnnotations(w_11, e_66);
          }
        }
    }
    return(t);
  }
  t = d_50(t);
  return(t);
}
static ATerm s_3 (ATerm c_36, ATerm d_36, ATerm t)
{
  t = SSL_strcat(c_36, d_36);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_e_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_50 = NULL;
      m_50 = t;
      t = SSL_is_string(m_50);
      LocalPopChoice(g_9);
    }
  else
    {
      t = f_9;
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_2, t);
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
            {
              ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
              s_50 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_50 = ATgetArgument(t, 0);
                  t = t_50;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_50 = ATgetArgument(t, 0);
                      t = t_50;
                      {
                        ATerm j_9 = t;
                        int k_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(k_9);
                          }
                        else
                          {
                            t = j_9;
                            t = debug_1_0(m_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_50 = NULL,z_50 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_50 = ATgetArgument(t, 0);
                          u_50 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_50;
                      t = eval_config_0_0(t);
                      y_50 = t;
                      t = u_50;
                      t = eval_config_0_0(t);
                      z_50 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_50, z_50);
                      t = s_3(y_50, z_50, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL;
  d_51 = t;
  t = term_l_9;
  e_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_9, d_51);
  t = c_4(e_51, d_51, t);
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_51 = NULL,g_51 = NULL;
        t = eval_config_0_0(t);
        f_51 = t;
        t = term_l_9;
        g_51 = t;
        t = SSL_table_put(g_51, d_51, f_51);
        t = f_51;
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_100 (ATerm), ATerm t)
{
  ATerm p_51 = NULL;
  p_51 = t;
  {
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_51 = NULL;
        t = term_r_9;
        t = get_config_0_0(t);
        r_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_51, term_s_9);
        t = geq_0_0(t);
        t = p_51;
        t = x_100(t);
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        t = p_51;
      }
  }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm u_51 = NULL;
  u_51 = t;
  if(match_string(t, "-k"))
    {
      t = u_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_51;
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL,y_51 = NULL;
  v_51 = t;
  t = SSL_string_to_int(v_51);
  w_51 = t;
  t = term_u_9;
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_9, w_51);
  t = f_4(y_51, w_51, t);
  t = v_51;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_w_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_2, o_2, p_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm d_52 = NULL;
  d_52 = t;
  if(match_string(t, "-S"))
    {
      t = d_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_52;
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL;
  t = term_r_9;
  e_52 = t;
  t = term_x_9;
  f_52 = t;
  t = term_y_9;
  t = f_4(e_52, f_52, t);
  t = term_z_9;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_a_10;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
  g_52 = t;
  t = SSL_string_to_int(g_52);
  h_52 = t;
  t = term_r_9;
  i_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_9, h_52);
  t = f_4(i_52, h_52, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_52);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_b_10;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL;
  t = term_c_10;
  j_52 = t;
  t = term_x_5;
  k_52 = t;
  t = term_d_10;
  t = f_4(j_52, k_52, t);
  t = term_e_10;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_f_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_2, r_2, s_2, t);
      LocalPopChoice(s_10);
    }
  else
    {
      t = g_10;
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_2, u_2, v_2, t);
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            t = Option_3_0(w_2, x_2, c_3, t);
          }
      }
    }
  return(t);
}
static ATerm f_4 (ATerm a_47, ATerm b_47, ATerm t)
{
  ATerm l_52 = NULL;
  t = term_l_9;
  l_52 = t;
  t = SSL_table_put(l_52, a_47, b_47);
  t = (ATerm) ATmakeAppl(sym__3, term_l_9, a_47, b_47);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL;
      t = term_x_5;
      t = i_0(t);
      q_52 = t;
      t = term_v_10;
      r_52 = t;
      t = term_w_10;
      s_52 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_10, term_w_10, q_52);
      t = d_4(r_52, s_52, q_52, t);
      _fail(t);
    }
  else
    {
      ATerm v_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_52 = ATgetFirst((ATermList) t);
          p_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_52;
      t = d_0(t);
      t = term_x_5;
      t = g_0(t);
      v_52 = t;
      t = (ATerm) ATinsert(CheckATermList(p_52), v_52);
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm x_52 = NULL;
  x_52 = t;
  if(match_string(t, "-o"))
    {
      t = x_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_52;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL;
  y_52 = t;
  t = term_x_10;
  z_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_10, y_52);
  t = f_4(z_52, y_52, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_52);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_y_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_3, m_3, n_3, t);
  return(t);
}
static ATerm d_4 (ATerm a_52, ATerm b_52, ATerm z_51, ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL;
  b_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_52, b_52);
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_11 = ATgetArgument(t, 0);
            ATerm c_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_52, b_52);
        t = c_4(a_52, b_52, t);
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        t = (ATerm) ATempty;
      }
  }
  c_53 = t;
  t = (ATerm) ATinsert(CheckATermList(c_53), z_51);
  d_53 = t;
  t = SSL_table_put(a_52, b_52, d_53);
  t = b_53;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL;
      t = term_x_5;
      t = p_0(t);
      o_53 = t;
      t = term_v_10;
      p_53 = t;
      t = term_w_10;
      q_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_10, term_w_10, o_53);
      t = d_4(p_53, q_53, o_53, t);
      _fail(t);
    }
  else
    {
      ATerm w_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_53 = ATgetFirst((ATermList) t);
          l_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_53;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_53 = ATgetFirst((ATermList) t);
          n_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_53;
      t = n_0(t);
      t = m_53;
      t = o_0(t);
      w_53 = t;
      t = (ATerm) ATinsert(CheckATermList(n_53), w_53);
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm y_53 = NULL;
  y_53 = t;
  if(match_string(t, "-i"))
    {
      t = y_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_53;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL;
  z_53 = t;
  t = term_e_11;
  a_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, z_53);
  t = f_4(a_54, z_53, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_53);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_j_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_3, p_3, r_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_5;
  t = whoami_0_0(t);
  b_54 = t;
  t = term_t_6;
  d_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_11), b_54);
  e_54 = t;
  t = SSL_printnl(d_54, e_54);
  t = term_y_6;
  c_54 = t;
  t = SSL_exit(c_54);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_11;
  t = get_config_0_0(t);
  return(t);
}
static ATerm a_4 (ATerm d_40, ATerm e_40, ATerm t)
{
  ATerm m_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_40, e_40);
      LocalPopChoice(r_11);
    }
  else
    {
      t = m_11;
      t = SSL_addr(d_40, e_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL;
  g_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_54;
      t = f_92(t);
    }
  else
    {
      ATerm l_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_54 = ATgetFirst((ATermList) t);
          i_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_54;
      t = foldr_2_0(f_92, g_92, t);
      l_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_54, l_54);
      t = g_92(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_x_9;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm y_66 = NULL,z_66 = NULL;
  if(match_cons(t, sym__2))
    {
      y_66 = ATgetArgument(t, 0);
      z_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(y_66, z_66, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_54 = NULL,u_66 = NULL,v_66 = NULL;
  t = times_0_0(t);
  v_66 = t;
  t = SSL_explode_term(v_66);
  if(match_cons(t, sym__2))
    {
      ATerm t_11 = ATgetArgument(t, 0);
      u_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_66;
  t = foldr_2_0(b_4, e_4, t);
  o_54 = t;
  t = SSL_TicksToSeconds(o_54);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL;
  z_54 = t;
  if(match_cons(t, sym__2))
    {
      a_55 = ATgetArgument(t, 0);
      b_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_55;
        if((a_55 != t))
          {
            _fail(t);
          }
        t = z_54;
        LocalPopChoice(x_11);
      }
    else
      {
        t = u_11;
        t = (ATerm) ATmakeAppl(sym__2, a_55, b_55);
        {
          ATerm y_11 = t;
          int a_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_55, b_55);
              LocalPopChoice(a_12);
            }
          else
            {
              t = y_11;
              t = SSL_gtr(a_55, b_55);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, a_55, b_55);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_100 (ATerm), ATerm t)
{
  ATerm f_55 = NULL;
  f_55 = t;
  {
    ATerm c_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_55 = NULL;
        t = term_r_9;
        t = get_config_0_0(t);
        h_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_55, term_y_6);
        t = geq_0_0(t);
        t = f_55;
        t = w_100(t);
        LocalPopChoice(e_12);
      }
    else
      {
        t = c_12;
        t = f_55;
      }
  }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL,m_55 = NULL,n_55 = NULL;
  t = run_time_0_0(t);
  j_55 = t;
  t = term_x_5;
  t = whoami_0_0(t);
  k_55 = t;
  t = term_t_6;
  m_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_12), j_55), term_g_12), k_55);
  n_55 = t;
  t = SSL_printnl(m_55, n_55);
  t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_12), j_55), term_g_12), k_55));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_9;
  o_55 = t;
  t = SSL_exit(o_55);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm w_55 = NULL,x_55 = NULL;
  x_55 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = x_55;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          w_55 = ATgetArgument(t, 0);
          {
            ATerm l_67 = NULL,z_11 = NULL;
            t = SSLgetAnnotations(x_55);
            l_67 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, w_55);
            z_11 = t;
            t = SSLsetAnnotations(z_11, l_67);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = x_55;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_103 (ATerm), ATerm t)
{
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_12;
      t = get_config_0_0(t);
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      t = fetch_1_0(j_4, t);
    }
  t = m_103(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_56 = ATgetFirst((ATermList) t);
      b_56 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_56 = NULL,g_56 = NULL;
        static ATerm k_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_56)), not_null(g_56));
          return(t);
        }
        t = b_56;
        t = l_0(t);
        if(((f_56 != NULL) && (f_56 != t)))
          _fail(t);
        else
          f_56 = t;
        t = a_56;
        t = k_0(t);
        if(((g_56 != NULL) && (g_56 != t)))
          _fail(t);
        else
          g_56 = t;
        t = b_56;
        t = reverse_acc_2_0(k_0, k_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_5;
      t = l_0(t);
    }
  return(t);
}
static ATerm c_4 (ATerm r_53, ATerm s_53, ATerm t)
{
  t = SSL_table_get(r_53, s_53);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL,b_12 = NULL;
  m_56 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_56);
  k_56 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_56);
  b_12 = t;
  t = SSLsetAnnotations(b_12, k_56);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm o_56 = NULL;
  o_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_56), term_r_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL;
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_11;
      t = get_config_0_0(t);
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      t = fetch_1_0(l_4, t);
    }
  t = term_w_12;
  t = echo_0_0(t);
  t = term_v_10;
  i_56 = t;
  t = term_w_10;
  j_56 = t;
  t = term_y_12;
  t = c_4(i_56, j_56, t);
  t = reverse_acc_2_0(_id, m_4, t);
  t = map_1_0(n_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL;
  q_56 = t;
  {
    ATerm z_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_56;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_13 = ATgetFirst((ATermList) t);
                ATerm c_13 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_56;
          }
        LocalPopChoice(a_13);
      }
    else
      {
        t = z_12;
        t = (ATerm) ATinsert(ATempty, q_56);
      }
  }
  r_56 = t;
  t = term_g_8;
  s_56 = t;
  t = SSL_printnl(s_56, r_56);
  t = q_56;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_11;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL;
  t = term_d_13;
  w_56 = t;
  t = term_x_5;
  x_56 = t;
  t = term_e_13;
  t = f_4(w_56, x_56, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_f_13;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL;
  t = term_d_13;
  a_57 = t;
  t = term_x_5;
  b_57 = t;
  t = term_e_13;
  t = f_4(a_57, b_57, t);
  t = term_g_13;
  y_56 = t;
  t = term_x_5;
  z_56 = t;
  t = term_h_13;
  t = f_4(y_56, z_56, t);
  t = term_i_13;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_l_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_4, r_4, s_4, t);
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      t = Option_3_0(t_4, u_4, v_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_64 (ATerm), ATerm u_64 (ATerm), ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,d_12 = NULL;
  h_57 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_57 = ATgetFirst((ATermList) t);
      e_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_57);
  c_57 = t;
  t = d_57;
  t = t_64(t);
  f_57 = t;
  t = e_57;
  t = u_64(t);
  g_57 = t;
  t = (ATerm) ATinsert(CheckATermList(g_57), f_57);
  d_12 = t;
  t = SSLsetAnnotations(d_12, c_57);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_105 (ATerm), ATerm t)
{
  ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL,r_57 = NULL,s_57 = NULL,f_12 = NULL;
  m_57 = t;
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_13;
        t = p_105(t);
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
      }
  }
  t = m_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_57 = ATgetFirst((ATermList) t);
      p_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_57);
  n_57 = t;
  t = term_l_11;
  s_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_11, o_57);
  t = f_4(s_57, o_57, t);
  t = p_57;
  {
    static ATerm c_58 (ATerm t)
    {
      ATerm t_13 = t;
      int v_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_57 = NULL;
              v_57 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_57;
              LocalPopChoice(x_13);
            }
          else
            {
              t = w_13;
              t = p_105(t);
              t = Cons_2_0(_id, c_58, t);
            }
          LocalPopChoice(v_13);
        }
      else
        {
          t = t_13;
          {
            ATerm y_57 = NULL,z_57 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_57 = ATgetFirst((ATermList) t);
                z_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_57), (ATerm) ATmakeAppl(sym_Undefined_1, y_57));
          }
        }
      return(t);
    }
    t = c_58(t);
  }
  r_57 = t;
  t = (ATerm) ATinsert(CheckATermList(r_57), (ATerm) ATmakeAppl(sym_Program_1, o_57));
  f_12 = t;
  t = SSLsetAnnotations(f_12, n_57);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm o_58 = NULL;
  o_58 = t;
  if(match_string(t, "--help"))
    {
      t = o_58;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_58;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_58;
        }
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL;
  t = term_q_12;
  p_58 = t;
  t = term_x_5;
  q_58 = t;
  t = term_y_13;
  t = f_4(p_58, q_58, t);
  t = term_z_13;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_a_14;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL;
  j_58 = t;
  t = term_v_10;
  l_58 = t;
  t = term_w_10;
  m_58 = t;
  t = (ATerm) ATempty;
  n_58 = t;
  t = SSL_table_put(l_58, m_58, n_58);
  t = j_58;
  {
    static ATerm w_4 (ATerm t)
    {
      ATerm b_14 = t;
      int c_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_105(t);
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
                t = Option_3_0(x_4, z_4, a_5, t);
                LocalPopChoice(e_14);
              }
            else
              {
                t = d_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_4, t);
  }
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_58 = NULL;
        x_58 = t;
        {
          ATerm h_14 = t;
          int i_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_67 = NULL;
              t = x_58;
              {
                ATerm j_14 = t;
                int k_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_q_12;
                    t = get_config_0_0(t);
                    LocalPopChoice(k_14);
                  }
                else
                  {
                    t = j_14;
                    t = fetch_1_0(b_5, t);
                  }
              }
              t = x_58;
              t = default_system_usage_0_0(t);
              t = term_x_9;
              s_67 = t;
              t = SSL_exit(s_67);
              LocalPopChoice(i_14);
            }
          else
            {
              t = h_14;
              {
                ATerm w_67 = NULL;
                t = term_d_13;
                t = get_config_0_0(t);
                t = x_58;
                t = default_system_about_0_0(t);
                t = term_x_9;
                w_67 = t;
                t = SSL_exit(w_67);
              }
            }
        }
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
        {
          ATerm l_14 = t;
          int m_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL;
              static ATerm y_5 (ATerm t)
              {
                ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL,h_12 = NULL;
                d_59 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_59 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_59);
                b_59 = t;
                t = c_59;
                if(((h_58 != NULL) && (h_58 != t)))
                  _fail(t);
                else
                  h_58 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_59);
                h_12 = t;
                t = SSLsetAnnotations(h_12, b_59);
                return(t);
              }
              t = fetch_1_0(y_5, t);
              t = term_t_6;
              z_58 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_58)), term_n_14);
              a_59 = t;
              t = SSL_printnl(z_58, a_59);
              t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_58)), term_n_14));
              t = default_system_usage_0_0(t);
              t = term_y_6;
              y_58 = t;
              t = SSL_exit(y_58);
              LocalPopChoice(m_14);
            }
          else
            {
              t = l_14;
            }
        }
      }
  }
  i_58 = t;
  t = term_v_10;
  k_58 = t;
  t = SSL_table_destroy(k_58);
  t = i_58;
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_103 (ATerm), ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm r_103 (ATerm), ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL;
  t = parse_options_1_0(o_103, t);
  i_59 = t;
  t = term_o_14;
  l_59 = t;
  t = SSL_table_create(l_59);
  t = term_o_14;
  j_59 = t;
  t = term_p_14;
  k_59 = t;
  t = SSL_table_put(j_59, k_59, i_59);
  t = i_59;
  t = q_103(t);
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_103, t);
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
              t = r_103(t);
              t = report_success_0_0(t);
              LocalPopChoice(t_14);
            }
          else
            {
              t = s_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = if_verbose2_1_0(m_6, t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL;
  t = term_v_14;
  m_59 = t;
  t = term_x_5;
  n_59 = t;
  t = term_x_14;
  t = f_4(m_59, n_59, t);
  t = term_y_14;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_z_14;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL;
  o_59 = t;
  t = term_l_11;
  t = get_config_0_0(t);
  p_59 = t;
  t = term_t_6;
  q_59 = t;
  t = (ATerm) ATinsert(ATempty, p_59);
  r_59 = t;
  t = SSL_printnl(q_59, r_59);
  t = o_59;
  return(t);
}
ATerm iowrap_3_0 (ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm t)
{
  static ATerm a_6 (ATerm t)
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_102(t);
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        {
          ATerm d_15 = t;
          int f_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(f_15);
            }
          else
            {
              t = d_15;
              {
                ATerm g_15 = t;
                int h_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(h_15);
                  }
                else
                  {
                    t = g_15;
                    {
                      ATerm i_15 = t;
                      int j_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(e_6, f_6, j_6, t);
                          LocalPopChoice(j_15);
                        }
                      else
                        {
                          t = i_15;
                          {
                            ATerm k_15 = t;
                            int m_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(m_15);
                              }
                            else
                              {
                                t = k_15;
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
  static ATerm d_6 (ATerm t)
  {
    ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL;
    t_59 = t;
    {
      ATerm n_15 = t;
      int q_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm o_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((s_59 != NULL) && (s_59 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_59 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_6, t);
          LocalPopChoice(q_15);
        }
      else
        {
          t = n_15;
          t = term_r_15;
          s_59 = t;
        }
    }
    t = not_null(s_59);
    t = ReadFromFile_0_0(t);
    u_59 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_59, u_59);
    t = apply_strategy_1_0(x_102, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(a_6, z_102, b_6, d_6, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,n_12 = NULL;
  b_60 = t;
  if(match_cons(t, sym__2))
    {
      y_59 = ATgetArgument(t, 0);
      z_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_60);
  x_59 = t;
  t = z_59;
  {
    ATerm s_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_60 = NULL,z_67 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,m_12 = NULL,l_12 = NULL,k_12 = NULL,j_12 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            s_60 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_59);
        z_67 = t;
        t = s_60;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_68 = ATgetFirst((ATermList) t);
            d_68 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_60);
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
        j_12 = t;
        t = SSLsetAnnotations(j_12, j_68);
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
        LocalPopChoice(t_15);
      }
    else
      {
        t = s_15;
        t = debug_1_0(s_6, t);
      }
  }
  a_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_59, a_60);
  n_12 = t;
  t = SSLsetAnnotations(n_12, x_59);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_u_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(r_6, _fail, default_usage_0_0, t);
  return(t);
}

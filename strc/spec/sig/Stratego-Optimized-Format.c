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
}
ATerm term_c_15;
ATerm term_z_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_x_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_i_9;
ATerm term_y_8;
ATerm term_m_8;
ATerm term_e_8;
ATerm term_p_7;
ATerm term_m_7;
ATerm term_j_7;
ATerm term_e_7;
ATerm term_b_7;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_c_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_t_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_c_6);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym__2, term_q_10, term_r_10);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym__2, term_k_12, term_c_6);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, term_n_12, term_c_6);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym__2, term_z_11, term_c_6);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym__2, term_d_14, term_c_6);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm debug_1_0 (ATerm k_84 (ATerm), ATerm t);
ATerm type_expression_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm build_term_expression_0_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm match_term_expression_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm strategy_expression_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm strategy_definition_0_0 (ATerm t);
ATerm map_1_0 (ATerm v_84 (ATerm), ATerm t);
static ATerm t_3 (ATerm c_37, ATerm d_37, ATerm t);
static ATerm u_3 (ATerm l_22, ATerm m_22, ATerm t);
static ATerm w_3 (ATerm m_84 (ATerm), ATerm k_137, ATerm p_22, ATerm t);
static ATerm v_3 (ATerm h_22, ATerm i_22, ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm c_101 (ATerm), ATerm t);
static ATerm o_43 (ATerm i_43, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_3 (ATerm n_22, ATerm t);
static ATerm y_3 (ATerm e_37, ATerm f_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm z_44 (ATerm y_43, ATerm t);
static ATerm a_45 (ATerm c_44, ATerm d_44, ATerm e_44, ATerm t);
static ATerm b_45 (ATerm m_44, ATerm n_44, ATerm o_44, ATerm t);
static ATerm z_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_85 (ATerm), ATerm t);
static ATerm s_3 (ATerm w_35, ATerm x_35, ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm l_99 (ATerm), ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm f_4 (ATerm y_45, ATerm z_45, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_4 (ATerm w_50, ATerm x_50, ATerm v_50, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm a_4 (ATerm x_39, ATerm y_39, ATerm t);
ATerm foldr_2_0 (ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm k_99 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm need_help_1_0 (ATerm a_102 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm c_4 (ATerm n_52, ATerm o_52, ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm d_64 (ATerm), ATerm e_64 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_104 (ATerm), ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm parse_options_1_0 (ATerm c_104 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm f_102 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm iowrap_3_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,j_0 = NULL,m_0 = NULL,o_0 = NULL,x_0 = NULL;
  a_0 = t;
  t = term_c_6;
  t = whoami_0_0(t);
  j_0 = t;
  t = term_o_6;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_6), j_0), term_p_6);
  x_0 = t;
  t = SSL_printnl(o_0, x_0);
  t = term_r_6;
  m_0 = t;
  t = SSL_exit(m_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm k_84 (ATerm), ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL,j_1 = NULL,p_1 = NULL;
  c_1 = t;
  t = k_84(t);
  d_1 = t;
  t = term_o_6;
  j_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_1), d_1);
  p_1 = t;
  t = SSL_printnl(j_1, p_1);
  t = c_1;
  return(t);
}
ATerm type_expression_0_0 (ATerm t)
{
  ATerm n_4 = NULL,p_4 = NULL,r_4 = NULL;
  n_4 = t;
  if(match_cons(t, sym_ConstType_1))
    {
      p_4 = ATgetArgument(t, 0);
      {
        ATerm m_1 = NULL,o_1 = NULL,h_0 = NULL;
        t = SSLgetAnnotations(n_4);
        m_1 = t;
        t = p_4;
        {
          static ATerm g_3 (ATerm t)
          {
            ATerm w_2 = NULL,z_2 = NULL,c_3 = NULL;
            z_2 = t;
            if(match_cons(t, sym_Sort_2))
              {
                c_3 = ATgetArgument(t, 0);
                w_2 = ATgetArgument(t, 1);
                {
                  ATerm o_3 = NULL,o_4 = NULL,q_4 = NULL,b_0 = NULL;
                  t = SSLgetAnnotations(z_2);
                  o_3 = t;
                  t = SSL_is_string(c_3);
                  o_4 = t;
                  t = w_2;
                  t = map_1_0(g_3, t);
                  q_4 = t;
                  t = (ATerm) ATmakeAppl(sym_Sort_2, o_4, q_4);
                  b_0 = t;
                  t = SSLsetAnnotations(b_0, o_3);
                }
              }
            else
              {
                ATerm d_5 = NULL,f_5 = NULL,f_0 = NULL;
                if(match_cons(t, sym_SortVar_1))
                  {
                    c_3 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_2);
                d_5 = t;
                t = SSL_is_string(c_3);
                f_5 = t;
                t = (ATerm) ATmakeAppl(sym_SortVar_1, f_5);
                f_0 = t;
                t = SSLsetAnnotations(f_0, d_5);
              }
            return(t);
          }
          t = g_3(t);
        }
        o_1 = t;
        t = (ATerm) ATmakeAppl(sym_ConstType_1, o_1);
        h_0 = t;
        t = SSLsetAnnotations(h_0, m_1);
      }
    }
  else
    {
      ATerm m_5 = NULL,p_5 = NULL,q_5 = NULL,p_0 = NULL;
      if(match_cons(t, sym_FunType_2))
        {
          p_4 = ATgetArgument(t, 0);
          r_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_4);
      m_5 = t;
      t = p_4;
      t = map_1_0(type_expression_0_0, t);
      p_5 = t;
      t = r_4;
      t = type_expression_0_0(t);
      q_5 = t;
      t = (ATerm) ATmakeAppl(sym_FunType_2, p_5, q_5);
      p_0 = t;
      t = SSLsetAnnotations(p_0, m_5);
    }
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_s_6;
  return(t);
}
ATerm build_term_expression_0_0 (ATerm t)
{
  ATerm t_6 = t;
  int u_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
      t_8 = t;
      if(match_cons(t, sym_Var_1))
        {
          u_8 = ATgetArgument(t, 0);
          {
            ATerm x_5 = NULL,z_5 = NULL,u_0 = NULL;
            t = SSLgetAnnotations(t_8);
            x_5 = t;
            t = SSL_is_string(u_8);
            z_5 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, z_5);
            u_0 = t;
            t = SSLsetAnnotations(u_0, x_5);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              u_8 = ATgetArgument(t, 0);
              {
                ATerm w_6 = NULL,y_6 = NULL,v_0 = NULL;
                t = SSLgetAnnotations(t_8);
                w_6 = t;
                t = SSL_is_int(u_8);
                y_6 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, y_6);
                v_0 = t;
                t = SSLsetAnnotations(v_0, w_6);
              }
            }
          else
            {
              if(match_cons(t, sym_Real_1))
                {
                  u_8 = ATgetArgument(t, 0);
                  {
                    ATerm f_7 = NULL,i_7 = NULL,w_0 = NULL;
                    t = SSLgetAnnotations(t_8);
                    f_7 = t;
                    t = SSL_is_real(u_8);
                    i_7 = t;
                    t = (ATerm) ATmakeAppl(sym_Real_1, i_7);
                    w_0 = t;
                    t = SSLsetAnnotations(w_0, f_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      u_8 = ATgetArgument(t, 0);
                      {
                        ATerm t_7 = NULL,w_7 = NULL,y_0 = NULL;
                        t = SSLgetAnnotations(t_8);
                        t_7 = t;
                        t = SSL_is_string(u_8);
                        w_7 = t;
                        t = (ATerm) ATmakeAppl(sym_Str_1, w_7);
                        y_0 = t;
                        t = SSLsetAnnotations(y_0, t_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          u_8 = ATgetArgument(t, 0);
                          s_8 = ATgetArgument(t, 1);
                          {
                            ATerm g_8 = NULL,e_9 = NULL,f_9 = NULL,z_0 = NULL;
                            t = SSLgetAnnotations(t_8);
                            g_8 = t;
                            t = SSL_is_string(u_8);
                            e_9 = t;
                            t = s_8;
                            t = map_1_0(build_term_expression_0_0, t);
                            f_9 = t;
                            t = (ATerm) ATmakeAppl(sym_Op_2, e_9, f_9);
                            z_0 = t;
                            t = SSLsetAnnotations(z_0, g_8);
                          }
                        }
                      else
                        {
                          ATerm m_9 = NULL,o_9 = NULL,a_1 = NULL;
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              u_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(t_8);
                          m_9 = t;
                          t = u_8;
                          t = build_term_expression_0_0(t);
                          o_9 = t;
                          t = (ATerm) ATmakeAppl(sym_BuildDefault_1, o_9);
                          a_1 = t;
                          t = SSLsetAnnotations(a_1, m_9);
                        }
                    }
                }
            }
        }
      LocalPopChoice(u_6);
    }
  else
    {
      t = t_6;
      t = debug_1_0(q_0, t);
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_s_6;
  return(t);
}
ATerm match_term_expression_0_0 (ATerm t)
{
  ATerm v_6 = t;
  int x_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_14 = NULL,t_14 = NULL,x_14 = NULL;
      o_14 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = o_14;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              t_14 = ATgetArgument(t, 0);
              {
                ATerm u_9 = NULL,y_9 = NULL,r_1 = NULL;
                t = SSLgetAnnotations(o_14);
                u_9 = t;
                t = SSL_is_string(t_14);
                y_9 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, y_9);
                r_1 = t;
                t = SSLsetAnnotations(r_1, u_9);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  t_14 = ATgetArgument(t, 0);
                  {
                    ATerm m_10 = NULL,o_10 = NULL,s_1 = NULL;
                    t = SSLgetAnnotations(o_14);
                    m_10 = t;
                    t = SSL_is_int(t_14);
                    o_10 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, o_10);
                    s_1 = t;
                    t = SSLsetAnnotations(s_1, m_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      t_14 = ATgetArgument(t, 0);
                      {
                        ATerm v_10 = NULL,x_10 = NULL,t_1 = NULL;
                        t = SSLgetAnnotations(o_14);
                        v_10 = t;
                        t = SSL_is_real(t_14);
                        x_10 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, x_10);
                        t_1 = t;
                        t = SSLsetAnnotations(t_1, v_10);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          t_14 = ATgetArgument(t, 0);
                          {
                            ATerm e_11 = NULL,k_11 = NULL,u_1 = NULL;
                            t = SSLgetAnnotations(o_14);
                            e_11 = t;
                            t = SSL_is_string(t_14);
                            k_11 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, k_11);
                            u_1 = t;
                            t = SSLsetAnnotations(u_1, e_11);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Op_2))
                            {
                              t_14 = ATgetArgument(t, 0);
                              x_14 = ATgetArgument(t, 1);
                              {
                                ATerm s_11 = NULL,v_11 = NULL,w_11 = NULL,v_1 = NULL;
                                t = SSLgetAnnotations(o_14);
                                s_11 = t;
                                t = SSL_is_string(t_14);
                                v_11 = t;
                                t = x_14;
                                t = map_1_0(match_term_expression_0_0, t);
                                w_11 = t;
                                t = (ATerm) ATmakeAppl(sym_Op_2, v_11, w_11);
                                v_1 = t;
                                t = SSLsetAnnotations(v_1, s_11);
                              }
                            }
                          else
                            {
                              ATerm h_12 = NULL,o_12 = NULL,s_12 = NULL,w_1 = NULL;
                              if(match_cons(t, sym_As_2))
                                {
                                  t_14 = ATgetArgument(t, 0);
                                  x_14 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(o_14);
                              h_12 = t;
                              t = t_14;
                              t = match_term_expression_0_0(t);
                              o_12 = t;
                              t = x_14;
                              t = match_term_expression_0_0(t);
                              s_12 = t;
                              t = (ATerm) ATmakeAppl(sym_As_2, o_12, s_12);
                              w_1 = t;
                              t = SSLsetAnnotations(w_1, h_12);
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(x_6);
    }
  else
    {
      t = v_6;
      t = debug_1_0(r_0, t);
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm z_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_25 = NULL;
      q_25 = t;
      t = SSL_is_string(q_25);
      LocalPopChoice(a_7);
    }
  else
    {
      t = z_6;
      t = map_1_0(t_0, t);
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm c_26 = NULL;
  c_26 = t;
  t = SSL_is_int(c_26);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,y_26 = NULL,a_3 = NULL;
  y_26 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      o_26 = ATgetArgument(t, 0);
      p_26 = ATgetArgument(t, 1);
      r_26 = ATgetArgument(t, 2);
      s_26 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_26);
  n_26 = t;
  t = SSL_is_string(o_26);
  t_26 = t;
  t = p_26;
  t = map_1_0(e_1, t);
  u_26 = t;
  t = r_26;
  t = map_1_0(f_1, t);
  v_26 = t;
  t = s_26;
  t = strategy_expression_0_0(t);
  w_26 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, t_26, u_26, v_26, w_26);
  a_3 = t;
  t = SSLsetAnnotations(a_3, n_26);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,x_2 = NULL;
  e_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      a_27 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_27);
  z_26 = t;
  t = SSL_is_string(a_27);
  c_27 = t;
  t = b_27;
  t = type_expression_0_0(t);
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_27, d_27);
  x_2 = t;
  t = SSLsetAnnotations(x_2, z_26);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,y_2 = NULL;
  l_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      g_27 = ATgetArgument(t, 0);
      h_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_27);
  f_27 = t;
  t = SSL_is_string(g_27);
  j_27 = t;
  t = h_27;
  t = type_expression_0_0(t);
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_27, k_27);
  y_2 = t;
  t = SSLsetAnnotations(y_2, f_27);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_b_7;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_34 = NULL,c_34 = NULL,g_34 = NULL,l_34 = NULL;
      c_34 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = c_34;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = c_34;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  g_34 = ATgetArgument(t, 0);
                  {
                    ATerm g_13 = NULL,i_13 = NULL,d_2 = NULL;
                    t = SSLgetAnnotations(c_34);
                    g_13 = t;
                    t = g_34;
                    t = strategy_expression_0_0(t);
                    i_13 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, i_13);
                    d_2 = t;
                    t = SSLsetAnnotations(d_2, g_13);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      g_34 = ATgetArgument(t, 0);
                      l_34 = ATgetArgument(t, 1);
                      {
                        ATerm t_13 = NULL,z_13 = NULL,a_14 = NULL,e_2 = NULL;
                        t = SSLgetAnnotations(c_34);
                        t_13 = t;
                        t = g_34;
                        t = strategy_expression_0_0(t);
                        z_13 = t;
                        t = l_34;
                        t = strategy_expression_0_0(t);
                        a_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, a_14);
                        e_2 = t;
                        t = SSLsetAnnotations(e_2, t_13);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Choice_2))
                        {
                          g_34 = ATgetArgument(t, 0);
                          l_34 = ATgetArgument(t, 1);
                          {
                            ATerm p_14 = NULL,s_14 = NULL,u_14 = NULL,f_2 = NULL;
                            t = SSLgetAnnotations(c_34);
                            p_14 = t;
                            t = g_34;
                            t = strategy_expression_0_0(t);
                            s_14 = t;
                            t = l_34;
                            t = strategy_expression_0_0(t);
                            u_14 = t;
                            t = (ATerm) ATmakeAppl(sym_Choice_2, s_14, u_14);
                            f_2 = t;
                            t = SSLsetAnnotations(f_2, p_14);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LChoice_2))
                            {
                              g_34 = ATgetArgument(t, 0);
                              l_34 = ATgetArgument(t, 1);
                              {
                                ATerm k_15 = NULL,n_15 = NULL,o_15 = NULL,g_2 = NULL;
                                t = SSLgetAnnotations(c_34);
                                k_15 = t;
                                t = g_34;
                                t = strategy_expression_0_0(t);
                                n_15 = t;
                                t = l_34;
                                t = strategy_expression_0_0(t);
                                o_15 = t;
                                t = (ATerm) ATmakeAppl(sym_LChoice_2, n_15, o_15);
                                g_2 = t;
                                t = SSLsetAnnotations(g_2, k_15);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GuardedLChoice_3))
                                {
                                  g_34 = ATgetArgument(t, 0);
                                  l_34 = ATgetArgument(t, 1);
                                  b_34 = ATgetArgument(t, 2);
                                  {
                                    ATerm x_15 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,h_2 = NULL;
                                    t = SSLgetAnnotations(c_34);
                                    x_15 = t;
                                    t = g_34;
                                    t = strategy_expression_0_0(t);
                                    b_16 = t;
                                    t = l_34;
                                    t = strategy_expression_0_0(t);
                                    c_16 = t;
                                    t = b_34;
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
                                      g_34 = ATgetArgument(t, 0);
                                      l_34 = ATgetArgument(t, 1);
                                      {
                                        ATerm m_16 = NULL,p_16 = NULL,q_16 = NULL,i_2 = NULL;
                                        t = SSLgetAnnotations(c_34);
                                        m_16 = t;
                                        t = g_34;
                                        t = strategy_expression_0_0(t);
                                        p_16 = t;
                                        t = l_34;
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
                                          g_34 = ATgetArgument(t, 0);
                                          l_34 = ATgetArgument(t, 1);
                                          {
                                            ATerm y_16 = NULL,b_17 = NULL,c_17 = NULL,j_2 = NULL;
                                            t = SSLgetAnnotations(c_34);
                                            y_16 = t;
                                            t = g_34;
                                            t = strategy_expression_0_0(t);
                                            b_17 = t;
                                            t = l_34;
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
                                              g_34 = ATgetArgument(t, 0);
                                              l_34 = ATgetArgument(t, 1);
                                              b_34 = ATgetArgument(t, 2);
                                              {
                                                ATerm l_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,l_2 = NULL,k_2 = NULL;
                                                t = SSLgetAnnotations(c_34);
                                                l_17 = t;
                                                t = g_34;
                                                if(match_cons(t, sym_SVar_1))
                                                  {
                                                    u_17 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(g_34);
                                                s_17 = t;
                                                t = SSL_is_string(u_17);
                                                v_17 = t;
                                                t = (ATerm) ATmakeAppl(sym_SVar_1, v_17);
                                                k_2 = t;
                                                t = SSLsetAnnotations(k_2, s_17);
                                                w_17 = t;
                                                t = l_34;
                                                t = map_1_0(strategy_expression_0_0, t);
                                                q_17 = t;
                                                t = b_34;
                                                t = map_1_0(build_term_expression_0_0, t);
                                                r_17 = t;
                                                t = (ATerm) ATmakeAppl(sym_CallT_3, w_17, q_17, r_17);
                                                l_2 = t;
                                                t = SSLsetAnnotations(l_2, l_17);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_PrimT_3))
                                                {
                                                  g_34 = ATgetArgument(t, 0);
                                                  l_34 = ATgetArgument(t, 1);
                                                  b_34 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm v_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,m_2 = NULL;
                                                    t = SSLgetAnnotations(c_34);
                                                    v_18 = t;
                                                    t = SSL_is_string(g_34);
                                                    z_18 = t;
                                                    t = l_34;
                                                    t = map_1_0(strategy_expression_0_0, t);
                                                    a_19 = t;
                                                    t = b_34;
                                                    t = map_1_0(build_term_expression_0_0, t);
                                                    b_19 = t;
                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, z_18, a_19, b_19);
                                                    m_2 = t;
                                                    t = SSLsetAnnotations(m_2, v_18);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      g_34 = ATgetArgument(t, 0);
                                                      l_34 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm q_19 = NULL,w_19 = NULL,x_19 = NULL,n_2 = NULL;
                                                        t = SSLgetAnnotations(c_34);
                                                        q_19 = t;
                                                        t = SSL_is_string(g_34);
                                                        w_19 = t;
                                                        t = l_34;
                                                        t = strategy_expression_0_0(t);
                                                        x_19 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, w_19, x_19);
                                                        n_2 = t;
                                                        t = SSLsetAnnotations(n_2, q_19);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          g_34 = ATgetArgument(t, 0);
                                                          l_34 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm h_20 = NULL,l_20 = NULL,m_20 = NULL,o_2 = NULL;
                                                            t = SSLgetAnnotations(c_34);
                                                            h_20 = t;
                                                            t = SSL_is_int(g_34);
                                                            l_20 = t;
                                                            t = l_34;
                                                            t = strategy_expression_0_0(t);
                                                            m_20 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, l_20, m_20);
                                                            o_2 = t;
                                                            t = SSLsetAnnotations(o_2, h_20);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_One_1))
                                                            {
                                                              g_34 = ATgetArgument(t, 0);
                                                              {
                                                                ATerm a_21 = NULL,f_21 = NULL,p_2 = NULL;
                                                                t = SSLgetAnnotations(c_34);
                                                                a_21 = t;
                                                                t = g_34;
                                                                t = strategy_expression_0_0(t);
                                                                f_21 = t;
                                                                t = (ATerm) ATmakeAppl(sym_One_1, f_21);
                                                                p_2 = t;
                                                                t = SSLsetAnnotations(p_2, a_21);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Some_1))
                                                                {
                                                                  g_34 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm m_21 = NULL,o_21 = NULL,q_2 = NULL;
                                                                    t = SSLgetAnnotations(c_34);
                                                                    m_21 = t;
                                                                    t = g_34;
                                                                    t = strategy_expression_0_0(t);
                                                                    o_21 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Some_1, o_21);
                                                                    q_2 = t;
                                                                    t = SSLsetAnnotations(q_2, m_21);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_All_1))
                                                                    {
                                                                      g_34 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm v_21 = NULL,x_21 = NULL,r_2 = NULL;
                                                                        t = SSLgetAnnotations(c_34);
                                                                        v_21 = t;
                                                                        t = g_34;
                                                                        t = strategy_expression_0_0(t);
                                                                        x_21 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_All_1, x_21);
                                                                        r_2 = t;
                                                                        t = SSLsetAnnotations(r_2, v_21);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Thread_1))
                                                                        {
                                                                          g_34 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm e_22 = NULL,g_22 = NULL,s_2 = NULL;
                                                                            t = SSLgetAnnotations(c_34);
                                                                            e_22 = t;
                                                                            t = g_34;
                                                                            t = strategy_expression_0_0(t);
                                                                            g_22 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_Thread_1, g_22);
                                                                            s_2 = t;
                                                                            t = SSLsetAnnotations(s_2, e_22);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Match_1))
                                                                            {
                                                                              g_34 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm t_22 = NULL,v_22 = NULL,t_2 = NULL;
                                                                                t = SSLgetAnnotations(c_34);
                                                                                t_22 = t;
                                                                                t = g_34;
                                                                                t = match_term_expression_0_0(t);
                                                                                v_22 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, v_22);
                                                                                t_2 = t;
                                                                                t = SSLsetAnnotations(t_2, t_22);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Build_1))
                                                                                {
                                                                                  g_34 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm x_24 = NULL,z_24 = NULL,u_2 = NULL;
                                                                                    t = SSLgetAnnotations(c_34);
                                                                                    x_24 = t;
                                                                                    t = g_34;
                                                                                    t = build_term_expression_0_0(t);
                                                                                    z_24 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, z_24);
                                                                                    u_2 = t;
                                                                                    t = SSLsetAnnotations(u_2, x_24);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Scope_2))
                                                                                    {
                                                                                      g_34 = ATgetArgument(t, 0);
                                                                                      l_34 = ATgetArgument(t, 1);
                                                                                      {
                                                                                        ATerm h_25 = NULL,l_25 = NULL,m_25 = NULL,v_2 = NULL;
                                                                                        t = SSLgetAnnotations(c_34);
                                                                                        h_25 = t;
                                                                                        t = g_34;
                                                                                        t = map_1_0(s_0, t);
                                                                                        l_25 = t;
                                                                                        t = l_34;
                                                                                        t = strategy_expression_0_0(t);
                                                                                        m_25 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, l_25, m_25);
                                                                                        v_2 = t;
                                                                                        t = SSLsetAnnotations(v_2, h_25);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      ATerm g_26 = NULL,k_26 = NULL,l_26 = NULL,b_3 = NULL;
                                                                                      if(match_cons(t, sym_Let_2))
                                                                                        {
                                                                                          g_34 = ATgetArgument(t, 0);
                                                                                          l_34 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = SSLgetAnnotations(c_34);
                                                                                      g_26 = t;
                                                                                      t = g_34;
                                                                                      t = map_1_0(b_1, t);
                                                                                      k_26 = t;
                                                                                      t = l_34;
                                                                                      t = strategy_expression_0_0(t);
                                                                                      l_26 = t;
                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, k_26, l_26);
                                                                                      b_3 = t;
                                                                                      t = SSLsetAnnotations(b_3, g_26);
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
      LocalPopChoice(d_7);
    }
  else
    {
      t = c_7;
      t = debug_1_0(g_1, t);
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,d_6 = NULL;
  f_29 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_28 = ATgetArgument(t, 0);
      c_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_29);
  d_28 = t;
  t = SSL_is_string(e_28);
  d_29 = t;
  t = c_29;
  t = type_expression_0_0(t);
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_29, e_29);
  d_6 = t;
  t = SSLsetAnnotations(d_6, d_28);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,m_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,f_6 = NULL;
  z_30 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      k_30 = ATgetArgument(t, 0);
      m_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_30);
  j_30 = t;
  t = SSL_is_string(k_30);
  x_30 = t;
  t = m_30;
  t = type_expression_0_0(t);
  y_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_30, y_30);
  f_6 = t;
  t = SSLsetAnnotations(f_6, j_30);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm c_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,j_31 = NULL,g_6 = NULL;
  j_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_31 = ATgetArgument(t, 0);
      f_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_31);
  c_31 = t;
  t = SSL_is_string(e_31);
  g_31 = t;
  t = f_31;
  t = type_expression_0_0(t);
  h_31 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_31, h_31);
  g_6 = t;
  t = SSLsetAnnotations(g_6, c_31);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,i_6 = NULL;
  n_33 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      g_33 = ATgetArgument(t, 0);
      k_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_33);
  f_33 = t;
  t = SSL_is_string(g_33);
  l_33 = t;
  t = k_33;
  t = type_expression_0_0(t);
  m_33 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, l_33, m_33);
  i_6 = t;
  t = SSLsetAnnotations(i_6, f_33);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm o_33 = NULL,w_33 = NULL,x_33 = NULL,z_33 = NULL,d_34 = NULL,e_34 = NULL,j_6 = NULL;
  e_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      w_33 = ATgetArgument(t, 0);
      x_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_34);
  o_33 = t;
  t = SSL_is_string(w_33);
  z_33 = t;
  t = x_33;
  t = type_expression_0_0(t);
  d_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_33, d_34);
  j_6 = t;
  t = SSLsetAnnotations(j_6, o_33);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,y_35 = NULL,z_35 = NULL,g_37 = NULL,l_6 = NULL;
  g_37 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      u_35 = ATgetArgument(t, 0);
      v_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_37);
  t_35 = t;
  t = SSL_is_string(u_35);
  y_35 = t;
  t = v_35;
  t = type_expression_0_0(t);
  z_35 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_35, z_35);
  l_6 = t;
  t = SSLsetAnnotations(l_6, t_35);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm h_37 = NULL,l_37 = NULL,k_40 = NULL,l_40 = NULL,d_41 = NULL,f_41 = NULL,m_6 = NULL;
  f_41 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      l_37 = ATgetArgument(t, 0);
      k_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_41);
  h_37 = t;
  t = SSL_is_string(l_37);
  l_40 = t;
  t = k_40;
  t = type_expression_0_0(t);
  d_41 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, l_40, d_41);
  m_6 = t;
  t = SSLsetAnnotations(m_6, h_37);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_e_7;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL;
      c_40 = t;
      if(match_cons(t, sym_SDef_3))
        {
          d_40 = ATgetArgument(t, 0);
          e_40 = ATgetArgument(t, 1);
          f_40 = ATgetArgument(t, 2);
          {
            ATerm u_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,e_6 = NULL;
            t = SSLgetAnnotations(c_40);
            u_27 = t;
            t = SSL_is_string(d_40);
            z_27 = t;
            t = e_40;
            t = map_1_0(h_1, t);
            a_28 = t;
            t = f_40;
            t = strategy_expression_0_0(t);
            b_28 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, z_27, a_28, b_28);
            e_6 = t;
            t = SSLsetAnnotations(e_6, u_27);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              d_40 = ATgetArgument(t, 0);
              e_40 = ATgetArgument(t, 1);
              f_40 = ATgetArgument(t, 2);
              b_40 = ATgetArgument(t, 3);
              {
                ATerm v_29 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,h_6 = NULL;
                t = SSLgetAnnotations(c_40);
                v_29 = t;
                t = SSL_is_string(d_40);
                c_30 = t;
                t = e_40;
                t = map_1_0(i_1, t);
                d_30 = t;
                t = f_40;
                t = map_1_0(k_1, t);
                e_30 = t;
                t = b_40;
                t = strategy_expression_0_0(t);
                f_30 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, c_30, d_30, e_30, f_30);
                h_6 = t;
                t = SSLsetAnnotations(h_6, v_29);
              }
            }
          else
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  d_40 = ATgetArgument(t, 0);
                  e_40 = ATgetArgument(t, 1);
                  f_40 = ATgetArgument(t, 2);
                  b_40 = ATgetArgument(t, 3);
                  {
                    ATerm k_32 = NULL,x_32 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,k_6 = NULL;
                    t = SSLgetAnnotations(c_40);
                    k_32 = t;
                    t = SSL_is_string(d_40);
                    x_32 = t;
                    t = e_40;
                    t = map_1_0(l_1, t);
                    b_33 = t;
                    t = f_40;
                    t = map_1_0(n_1, t);
                    c_33 = t;
                    t = b_40;
                    t = strategy_expression_0_0(t);
                    d_33 = t;
                    t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, x_32, b_33, c_33, d_33);
                    k_6 = t;
                    t = SSLsetAnnotations(k_6, k_32);
                  }
                }
              else
                {
                  ATerm v_34 = NULL,c_35 = NULL,d_35 = NULL,f_35 = NULL,n_6 = NULL;
                  if(match_cons(t, sym_ExtSDef_3))
                    {
                      d_40 = ATgetArgument(t, 0);
                      e_40 = ATgetArgument(t, 1);
                      f_40 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(c_40);
                  v_34 = t;
                  t = SSL_is_string(d_40);
                  c_35 = t;
                  t = e_40;
                  t = map_1_0(q_1, t);
                  d_35 = t;
                  t = f_40;
                  t = map_1_0(x_1, t);
                  f_35 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDef_3, c_35, d_35, f_35);
                  n_6 = t;
                  t = SSLsetAnnotations(n_6, v_34);
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
ATerm map_1_0 (ATerm v_84 (ATerm), ATerm t)
{
  static ATerm y_40 (ATerm t)
  {
    ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
    v_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_40;
      }
    else
      {
        ATerm v_43 = NULL,h_45 = NULL,i_45 = NULL,y_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_40 = ATgetFirst((ATermList) t);
            x_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_40);
        v_43 = t;
        t = w_40;
        t = v_84(t);
        h_45 = t;
        t = x_40;
        t = y_40(t);
        i_45 = t;
        t = (ATerm) ATinsert(CheckATermList(i_45), h_45);
        y_7 = t;
        t = SSLsetAnnotations(y_7, v_43);
      }
    return(t);
  }
  t = y_40(t);
  return(t);
}
static ATerm t_3 (ATerm c_37, ATerm d_37, ATerm t)
{
  ATerm a_41 = NULL;
  t = SSL_fputc(c_37, d_37);
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_41);
  return(t);
}
static ATerm u_3 (ATerm l_22, ATerm m_22, ATerm t)
{
  ATerm b_41 = NULL;
  t = SSL_write_term_to_stream_text(l_22, m_22);
  b_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_41);
  return(t);
}
static ATerm w_3 (ATerm m_84 (ATerm), ATerm k_137, ATerm p_22, ATerm t)
{
  ATerm c_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_137, term_j_7);
  t = z_3(t);
  c_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_41, p_22);
  t = m_84(t);
  t = fclose_0_0(t);
  t = p_22;
  return(t);
}
static ATerm v_3 (ATerm h_22, ATerm i_22, ATerm t)
{
  ATerm e_41 = NULL;
  t = SSL_write_term_to_stream_baf(h_22, i_22);
  e_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_41);
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
  ATerm r_47 = NULL,s_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_7 = ATgetArgument(t, 0);
      if(match_cons(k_7, sym_Stream_1))
        {
          r_47 = ATgetArgument(k_7, 0);
        }
      else
        _fail(t);
      s_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(r_47, s_47, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,k_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_7 = ATgetArgument(t, 0);
      if(match_cons(l_7, sym_Stream_1))
        {
          i_50 = ATgetArgument(l_7, 0);
        }
      else
        _fail(t);
      k_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(i_50, k_50, t);
  f_50 = t;
  t = term_m_7;
  g_50 = t;
  t = f_50;
  if(match_cons(t, sym_Stream_1))
    {
      h_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_7, f_50);
  t = t_3(g_50, h_50, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,s_42 = NULL,t_42 = NULL,h_8 = NULL,f_8 = NULL;
  j_41 = t;
  if(match_cons(t, sym__2))
    {
      q_41 = ATgetArgument(t, 0);
      r_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_41);
  p_41 = t;
  t = q_41;
  {
    ATerm n_7 = t;
    int o_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((i_41 != NULL) && (i_41 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                i_41 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_1, t);
        LocalPopChoice(o_7);
      }
    else
      {
        t = n_7;
        t = term_p_7;
        i_41 = t;
      }
  }
  s_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_41, r_41);
  f_8 = t;
  t = SSLsetAnnotations(f_8, p_41);
  t = j_41;
  if(match_cons(t, sym__2))
    {
      l_41 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_41);
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_41, (ATerm) ATmakeAppl(sym__2, not_null(i_41), m_41));
  h_8 = t;
  t = SSLsetAnnotations(h_8, k_41);
  o_41 = t;
  if(match_cons(t, sym__2))
    {
      s_42 = ATgetArgument(t, 0);
      t_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_46 = NULL,q_46 = NULL,j_47 = NULL,p_47 = NULL,q_47 = NULL,i_8 = NULL;
        t = SSLgetAnnotations(o_41);
        n_46 = t;
        t = s_42;
        t = fetch_1_0(a_2, t);
        q_46 = t;
        t = t_42;
        if(match_cons(t, sym__2))
          {
            p_47 = ATgetArgument(t, 0);
            q_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_3(b_2, p_47, q_47, t);
        j_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_46, j_47);
        i_8 = t;
        t = SSLsetAnnotations(i_8, n_46);
        LocalPopChoice(r_7);
      }
    else
      {
        t = q_7;
        {
          ATerm y_48 = NULL,k_49 = NULL,x_49 = NULL,e_50 = NULL,j_8 = NULL;
          t = SSLgetAnnotations(o_41);
          y_48 = t;
          t = t_42;
          if(match_cons(t, sym__2))
            {
              x_49 = ATgetArgument(t, 0);
              e_50 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_3(c_2, x_49, e_50, t);
          k_49 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_42, k_49);
          j_8 = t;
          t = SSLsetAnnotations(j_8, y_48);
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
ATerm apply_strategy_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
  a_43 = t;
  t = dtime_0_0(t);
  t = a_43;
  t = c_101(t);
  z_42 = t;
  t = dtime_0_0(t);
  w_42 = t;
  t = z_42;
  if(match_cons(t, sym__2))
    {
      x_42 = ATgetArgument(t, 0);
      y_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_42), (ATerm) ATmakeAppl(sym_Runtime_1, w_42)), y_42);
  return(t);
}
static ATerm o_43 (ATerm i_43, ATerm t)
{
  t = SSL_fclose(i_43);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL;
  m_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_43 = ATgetArgument(t, 0);
      {
        ATerm s_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_43);
            LocalPopChoice(u_7);
          }
        else
          {
            t = s_7;
            t = o_43(m_43, t);
          }
      }
    }
  else
    {
      t = o_43(m_43, t);
    }
  return(t);
}
static ATerm x_3 (ATerm n_22, ATerm t)
{
  t = SSL_read_term_from_stream(n_22);
  return(t);
}
static ATerm y_3 (ATerm e_37, ATerm f_37, ATerm t)
{
  ATerm p_43 = NULL;
  t = SSL_fopen(e_37, f_37);
  p_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_43);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_43 = NULL;
  t = SSL_stdin_stream();
  q_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_43);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_43 = NULL;
  t = SSL_stdout_stream();
  r_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_43);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_43 = NULL;
  t = SSL_stderr_stream();
  s_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_43);
  return(t);
}
static ATerm z_44 (ATerm y_43, ATerm t)
{
  ATerm z_43 = NULL;
  t = SSL_explode_term(y_43);
  if(match_cons(t, sym__2))
    {
      ATerm v_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_7 = ATgetArgument(t, 1);
        if(((ATgetType(x_7) == AT_LIST) && !(ATisEmpty(x_7))))
          {
            z_43 = ATgetFirst((ATermList) x_7);
            {
              ATerm z_7 = (ATerm) ATgetNext((ATermList) x_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_43;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_43;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_43;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_43;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm a_45 (ATerm c_44, ATerm d_44, ATerm e_44, ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,k_44 = NULL,o_8 = NULL;
  t = SSLgetAnnotations(e_44);
  h_44 = t;
  t = c_44;
  if(match_cons(t, sym_Path_1))
    {
      k_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_44, d_44);
  o_8 = t;
  t = SSLsetAnnotations(o_8, h_44);
  if(match_cons(t, sym__2))
    {
      f_44 = ATgetArgument(t, 0);
      g_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(f_44, g_44, t);
  return(t);
}
static ATerm b_45 (ATerm m_44, ATerm n_44, ATerm o_44, ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL,u_44 = NULL,p_8 = NULL;
  t = SSLgetAnnotations(o_44);
  r_44 = t;
  t = SSL_is_string(m_44);
  u_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_44, n_44);
  p_8 = t;
  t = SSLsetAnnotations(p_8, r_44);
  if(match_cons(t, sym__2))
    {
      p_44 = ATgetArgument(t, 0);
      q_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(p_44, q_44, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL;
  w_44 = t;
  if(match_cons(t, sym__2))
    {
      x_44 = ATgetArgument(t, 0);
      y_44 = ATgetArgument(t, 1);
      {
        ATerm a_8 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_44(w_44, t);
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
                  t = a_45(x_44, y_44, w_44, t);
                  LocalPopChoice(d_8);
                }
              else
                {
                  t = c_8;
                  t = b_45(x_44, y_44, w_44, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_44(w_44, t);
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_e_8;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL;
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_45 = NULL;
      f_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_45, term_m_8);
      t = z_3(t);
      LocalPopChoice(l_8);
    }
  else
    {
      t = k_8;
      t = debug_1_0(d_3, t);
      _fail(t);
    }
  d_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(e_45, t);
  c_45 = t;
  t = d_45;
  t = fclose_0_0(t);
  t = c_45;
  return(t);
}
ATerm fetch_1_0 (ATerm f_85 (ATerm), ATerm t)
{
  static ATerm f_46 (ATerm t)
  {
    ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
    c_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_46 = ATgetFirst((ATermList) t);
        e_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_8 = t;
      int q_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_53 = NULL,p_54 = NULL,w_8 = NULL;
          t = SSLgetAnnotations(c_46);
          v_53 = t;
          t = d_46;
          t = f_85(t);
          p_54 = t;
          t = (ATerm) ATinsert(CheckATermList(e_46), p_54);
          w_8 = t;
          t = SSLsetAnnotations(w_8, v_53);
          LocalPopChoice(q_8);
        }
      else
        {
          t = n_8;
          {
            ATerm i_57 = NULL,l_57 = NULL,x_8 = NULL;
            t = SSLgetAnnotations(c_46);
            i_57 = t;
            t = e_46;
            t = f_46(t);
            l_57 = t;
            t = (ATerm) ATinsert(CheckATermList(l_57), d_46);
            x_8 = t;
            t = SSLsetAnnotations(x_8, i_57);
          }
        }
    }
    return(t);
  }
  t = f_46(t);
  return(t);
}
static ATerm s_3 (ATerm w_35, ATerm x_35, ATerm t)
{
  t = SSL_strcat(w_35, x_35);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm r_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(v_8);
    }
  else
    {
      t = r_8;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_y_8;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_8 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_46 = NULL;
      t_46 = t;
      t = SSL_is_string(t_46);
      LocalPopChoice(b_9);
    }
  else
    {
      t = z_8;
      {
        ATerm c_9 = t;
        int d_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(e_3, t);
            LocalPopChoice(d_9);
          }
        else
          {
            t = c_9;
            {
              ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL;
              z_46 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_47 = ATgetArgument(t, 0);
                  t = a_47;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_47 = ATgetArgument(t, 0);
                      t = a_47;
                      {
                        ATerm g_9 = t;
                        int h_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(h_9);
                          }
                        else
                          {
                            t = g_9;
                            t = debug_1_0(f_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm f_47 = NULL,g_47 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_47 = ATgetArgument(t, 0);
                          b_47 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_47;
                      t = eval_config_0_0(t);
                      f_47 = t;
                      t = b_47;
                      t = eval_config_0_0(t);
                      g_47 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_47, g_47);
                      t = s_3(f_47, g_47, t);
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
  ATerm k_47 = NULL,l_47 = NULL;
  k_47 = t;
  t = term_i_9;
  l_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_9, k_47);
  t = c_4(l_47, k_47, t);
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_47 = NULL,n_47 = NULL;
        t = eval_config_0_0(t);
        m_47 = t;
        t = term_i_9;
        n_47 = t;
        t = SSL_table_put(n_47, k_47, m_47);
        t = m_47;
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm l_99 (ATerm), ATerm t)
{
  ATerm v_47 = NULL;
  v_47 = t;
  {
    ATerm l_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_47 = NULL;
        t = term_p_9;
        t = get_config_0_0(t);
        x_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_47, term_q_9);
        t = geq_0_0(t);
        t = v_47;
        t = l_99(t);
        LocalPopChoice(n_9);
      }
    else
      {
        t = l_9;
        t = v_47;
      }
  }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm a_48 = NULL;
  a_48 = t;
  if(match_string(t, "-k"))
    {
      t = a_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_48;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL;
  b_48 = t;
  t = SSL_string_to_int(b_48);
  c_48 = t;
  t = term_r_9;
  d_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_9, c_48);
  t = f_4(d_48, c_48, t);
  t = b_48;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_3, i_3, j_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm f_48 = NULL;
  f_48 = t;
  if(match_string(t, "-S"))
    {
      t = f_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_48;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL;
  t = term_p_9;
  g_48 = t;
  t = term_t_9;
  h_48 = t;
  t = term_v_9;
  t = f_4(g_48, h_48, t);
  t = term_x_9;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_a_10;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL;
  i_48 = t;
  t = SSL_string_to_int(i_48);
  j_48 = t;
  t = term_p_9;
  k_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_9, j_48);
  t = f_4(k_48, j_48, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_48);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_b_10;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL;
  t = term_c_10;
  l_48 = t;
  t = term_c_6;
  m_48 = t;
  t = term_e_10;
  t = f_4(l_48, m_48, t);
  t = term_f_10;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_h_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_3, l_3, m_3, t);
      LocalPopChoice(k_10);
    }
  else
    {
      t = j_10;
      {
        ATerm n_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_3, p_3, q_3, t);
            LocalPopChoice(p_10);
          }
        else
          {
            t = n_10;
            t = Option_3_0(r_3, b_4, e_4, t);
          }
      }
    }
  return(t);
}
static ATerm f_4 (ATerm y_45, ATerm z_45, ATerm t)
{
  ATerm n_48 = NULL;
  t = term_i_9;
  n_48 = t;
  t = SSL_table_put(n_48, y_45, z_45);
  t = (ATerm) ATmakeAppl(sym__3, term_i_9, y_45, z_45);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
      t = term_c_6;
      t = e_0(t);
      s_48 = t;
      t = term_q_10;
      t_48 = t;
      t = term_r_10;
      u_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_10, term_r_10, s_48);
      t = d_4(t_48, u_48, s_48, t);
      _fail(t);
    }
  else
    {
      ATerm x_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_48 = ATgetFirst((ATermList) t);
          r_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_48;
      t = c_0(t);
      t = term_c_6;
      t = d_0(t);
      x_48 = t;
      t = (ATerm) ATinsert(CheckATermList(r_48), x_48);
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm z_48 = NULL;
  z_48 = t;
  if(match_string(t, "-o"))
    {
      t = z_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_48;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL;
  a_49 = t;
  t = term_t_10;
  b_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_10, a_49);
  t = f_4(b_49, a_49, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_49);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, h_4, i_4, t);
  return(t);
}
static ATerm d_4 (ATerm w_50, ATerm x_50, ATerm v_50, ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL;
  d_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_50, x_50);
  {
    ATerm w_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_11 = ATgetArgument(t, 0);
            ATerm b_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_50, x_50);
        t = c_4(w_50, x_50, t);
        LocalPopChoice(y_10);
      }
    else
      {
        t = w_10;
        t = (ATerm) ATempty;
      }
  }
  e_49 = t;
  t = (ATerm) ATinsert(CheckATermList(e_49), v_50);
  f_49 = t;
  t = SSL_table_put(w_50, x_50, f_49);
  t = d_49;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL;
      t = term_c_6;
      t = n_0(t);
      q_49 = t;
      t = term_q_10;
      r_49 = t;
      t = term_r_10;
      s_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_10, term_r_10, q_49);
      t = d_4(r_49, s_49, q_49, t);
      _fail(t);
    }
  else
    {
      ATerm w_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_49 = ATgetFirst((ATermList) t);
          n_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_49 = ATgetFirst((ATermList) t);
          p_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_49;
      t = k_0(t);
      t = o_49;
      t = l_0(t);
      w_49 = t;
      t = (ATerm) ATinsert(CheckATermList(p_49), w_49);
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm y_49 = NULL;
  y_49 = t;
  if(match_string(t, "-i"))
    {
      t = y_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_49;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL;
  z_49 = t;
  t = term_c_11;
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_11, z_49);
  t = f_4(a_50, z_49, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_49);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_d_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_4, k_4, l_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL,j_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_6;
  t = whoami_0_0(t);
  b_50 = t;
  t = term_o_6;
  d_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_11), b_50);
  j_50 = t;
  t = SSL_printnl(d_50, j_50);
  t = term_r_6;
  c_50 = t;
  t = SSL_exit(c_50);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_11;
  t = get_config_0_0(t);
  return(t);
}
static ATerm a_4 (ATerm x_39, ATerm y_39, ATerm t)
{
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_39, y_39);
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      t = SSL_addr(x_39, y_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
  l_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_50;
      t = y_90(t);
    }
  else
    {
      ATerm q_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_50 = ATgetFirst((ATermList) t);
          n_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_50;
      t = foldr_2_0(y_90, z_90, t);
      q_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_50, q_50);
      t = z_90(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_t_9;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL;
  if(match_cons(t, sym__2))
    {
      c_58 = ATgetArgument(t, 0);
      d_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(c_58, d_58, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_50 = NULL,y_57 = NULL,z_57 = NULL;
  t = times_0_0(t);
  z_57 = t;
  t = SSL_explode_term(z_57);
  if(match_cons(t, sym__2))
    {
      ATerm l_11 = ATgetArgument(t, 0);
      y_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_57;
  t = foldr_2_0(m_4, s_4, t);
  u_50 = t;
  t = SSL_TicksToSeconds(u_50);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL;
  i_51 = t;
  if(match_cons(t, sym__2))
    {
      j_51 = ATgetArgument(t, 0);
      k_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_51;
        if((j_51 != t))
          {
            _fail(t);
          }
        t = i_51;
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        t = (ATerm) ATmakeAppl(sym__2, j_51, k_51);
        {
          ATerm o_11 = t;
          int p_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_51, k_51);
              LocalPopChoice(p_11);
            }
          else
            {
              t = o_11;
              t = SSL_gtr(j_51, k_51);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_51, k_51);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_99 (ATerm), ATerm t)
{
  ATerm o_51 = NULL;
  o_51 = t;
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_51 = NULL;
        t = term_p_9;
        t = get_config_0_0(t);
        q_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_51, term_r_6);
        t = geq_0_0(t);
        t = o_51;
        t = k_99(t);
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = o_51;
      }
  }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,v_51 = NULL,w_51 = NULL;
  t = run_time_0_0(t);
  s_51 = t;
  t = term_c_6;
  t = whoami_0_0(t);
  t_51 = t;
  t = term_o_6;
  v_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_11), s_51), term_t_11), t_51);
  w_51 = t;
  t = SSL_printnl(v_51, w_51);
  t = (ATerm) ATmakeAppl(sym__2, term_o_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_11), s_51), term_t_11), t_51));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_9;
  x_51 = t;
  t = SSL_exit(x_51);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL;
  g_52 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = g_52;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          f_52 = ATgetArgument(t, 0);
          {
            ATerm p_58 = NULL,a_9 = NULL;
            t = SSLgetAnnotations(g_52);
            p_58 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, f_52);
            a_9 = t;
            t = SSLsetAnnotations(a_9, p_58);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = g_52;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_102 (ATerm), ATerm t)
{
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_11;
      t = get_config_0_0(t);
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      t = fetch_1_0(u_4, t);
    }
  t = a_102(t);
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
        ATerm q_52 = NULL,r_52 = NULL;
        static ATerm v_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_52)), not_null(r_52));
          return(t);
        }
        t = k_52;
        t = i_0(t);
        if(((q_52 != NULL) && (q_52 != t)))
          _fail(t);
        else
          q_52 = t;
        t = j_52;
        t = g_0(t);
        if(((r_52 != NULL) && (r_52 != t)))
          _fail(t);
        else
          r_52 = t;
        t = k_52;
        t = reverse_acc_2_0(g_0, v_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_6;
      t = i_0(t);
    }
  return(t);
}
static ATerm c_4 (ATerm n_52, ATerm o_52, ATerm t)
{
  t = SSL_table_get(n_52, o_52);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL,w_9 = NULL;
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
  w_9 = t;
  t = SSLsetAnnotations(w_9, v_52);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm z_52 = NULL;
  z_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_52), term_a_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL;
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_11;
      t = get_config_0_0(t);
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      t = fetch_1_0(w_4, t);
    }
  t = term_d_12;
  t = echo_0_0(t);
  t = term_q_10;
  t_52 = t;
  t = term_r_10;
  u_52 = t;
  t = term_e_12;
  t = c_4(t_52, u_52, t);
  t = reverse_acc_2_0(_id, x_4, t);
  t = map_1_0(y_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL;
  b_53 = t;
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
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
                ATerm i_12 = ATgetFirst((ATermList) t);
                ATerm j_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_53;
          }
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
        t = (ATerm) ATinsert(ATempty, b_53);
      }
  }
  c_53 = t;
  t = term_p_7;
  d_53 = t;
  t = SSL_printnl(d_53, c_53);
  t = b_53;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_h_11;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm h_53 = NULL,i_53 = NULL;
  t = term_k_12;
  h_53 = t;
  t = term_c_6;
  i_53 = t;
  t = term_l_12;
  t = f_4(h_53, i_53, t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_m_12;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL;
  t = term_k_12;
  l_53 = t;
  t = term_c_6;
  m_53 = t;
  t = term_l_12;
  t = f_4(l_53, m_53, t);
  t = term_n_12;
  j_53 = t;
  t = term_c_6;
  k_53 = t;
  t = term_p_12;
  t = f_4(j_53, k_53, t);
  t = term_q_12;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_r_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_4, a_5, b_5, t);
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      t = Option_3_0(c_5, e_5, g_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_64 (ATerm), ATerm e_64 (ATerm), ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,z_9 = NULL;
  s_53 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_53 = ATgetFirst((ATermList) t);
      p_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_53);
  n_53 = t;
  t = o_53;
  t = d_64(t);
  q_53 = t;
  t = p_53;
  t = e_64(t);
  r_53 = t;
  t = (ATerm) ATinsert(CheckATermList(r_53), q_53);
  z_9 = t;
  t = SSLsetAnnotations(z_9, n_53);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_104 (ATerm), ATerm t)
{
  ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,c_54 = NULL,d_54 = NULL,d_10 = NULL;
  x_53 = t;
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_12;
        t = d_104(t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
      }
  }
  t = x_53;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_53 = ATgetFirst((ATermList) t);
      a_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_53);
  y_53 = t;
  t = term_h_11;
  d_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_11, z_53);
  t = f_4(d_54, z_53, t);
  t = a_54;
  {
    static ATerm n_54 (ATerm t)
    {
      ATerm y_12 = t;
      int z_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_13 = t;
          int b_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_54 = NULL;
              g_54 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_54;
              LocalPopChoice(b_13);
            }
          else
            {
              t = a_13;
              t = d_104(t);
              t = Cons_2_0(_id, n_54, t);
            }
          LocalPopChoice(z_12);
        }
      else
        {
          t = y_12;
          {
            ATerm j_54 = NULL,k_54 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_54 = ATgetFirst((ATermList) t);
                k_54 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_54), (ATerm) ATmakeAppl(sym_Undefined_1, j_54));
          }
        }
      return(t);
    }
    t = n_54(t);
  }
  c_54 = t;
  t = (ATerm) ATinsert(CheckATermList(c_54), (ATerm) ATmakeAppl(sym_Program_1, z_53));
  d_10 = t;
  t = SSLsetAnnotations(d_10, y_53);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm z_54 = NULL;
  z_54 = t;
  if(match_string(t, "--help"))
    {
      t = z_54;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_54;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_54;
        }
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL;
  t = term_z_11;
  a_55 = t;
  t = term_c_6;
  b_55 = t;
  t = term_c_13;
  t = f_4(a_55, b_55, t);
  t = term_d_13;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_e_13;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_104 (ATerm), ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL;
  u_54 = t;
  t = term_q_10;
  w_54 = t;
  t = term_r_10;
  x_54 = t;
  t = (ATerm) ATempty;
  y_54 = t;
  t = SSL_table_put(w_54, x_54, y_54);
  t = u_54;
  {
    static ATerm h_5 (ATerm t)
    {
      ATerm f_13 = t;
      int h_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_104(t);
          LocalPopChoice(h_13);
        }
      else
        {
          t = f_13;
          {
            ATerm j_13 = t;
            int k_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_5, j_5, k_5, t);
                LocalPopChoice(k_13);
              }
            else
              {
                t = j_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_5, t);
  }
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_55 = NULL;
        i_55 = t;
        {
          ATerm n_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_58 = NULL;
              t = i_55;
              {
                ATerm p_13 = t;
                int q_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_z_11;
                    t = get_config_0_0(t);
                    LocalPopChoice(q_13);
                  }
                else
                  {
                    t = p_13;
                    t = fetch_1_0(l_5, t);
                  }
              }
              t = i_55;
              t = default_system_usage_0_0(t);
              t = term_t_9;
              w_58 = t;
              t = SSL_exit(w_58);
              LocalPopChoice(o_13);
            }
          else
            {
              t = n_13;
              {
                ATerm a_59 = NULL;
                t = term_k_12;
                t = get_config_0_0(t);
                t = i_55;
                t = default_system_about_0_0(t);
                t = term_t_9;
                a_59 = t;
                t = SSL_exit(a_59);
              }
            }
        }
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        {
          ATerm r_13 = t;
          int s_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL;
              static ATerm n_5 (ATerm t)
              {
                ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,g_10 = NULL;
                o_55 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_55 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_55);
                m_55 = t;
                t = n_55;
                if(((s_54 != NULL) && (s_54 != t)))
                  _fail(t);
                else
                  s_54 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_55);
                g_10 = t;
                t = SSLsetAnnotations(g_10, m_55);
                return(t);
              }
              t = fetch_1_0(n_5, t);
              t = term_o_6;
              k_55 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_54)), term_u_13);
              l_55 = t;
              t = SSL_printnl(k_55, l_55);
              t = (ATerm) ATmakeAppl(sym__2, term_o_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_54)), term_u_13));
              t = default_system_usage_0_0(t);
              t = term_r_6;
              j_55 = t;
              t = SSL_exit(j_55);
              LocalPopChoice(s_13);
            }
          else
            {
              t = r_13;
            }
        }
      }
  }
  t_54 = t;
  t = term_q_10;
  v_54 = t;
  t = SSL_table_destroy(v_54);
  t = t_54;
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm f_102 (ATerm), ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL;
  t = parse_options_1_0(c_102, t);
  t_55 = t;
  t = term_v_13;
  w_55 = t;
  t = SSL_table_create(w_55);
  t = term_v_13;
  u_55 = t;
  t = term_w_13;
  v_55 = t;
  t = SSL_table_put(u_55, v_55, t_55);
  t = t_55;
  t = e_102(t);
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_102, t);
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        {
          ATerm b_14 = t;
          int c_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_102(t);
              t = report_success_0_0(t);
              LocalPopChoice(c_14);
            }
          else
            {
              t = b_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = if_verbose2_1_0(w_5, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL;
  t = term_d_14;
  x_55 = t;
  t = term_c_6;
  y_55 = t;
  t = term_e_14;
  t = f_4(x_55, y_55, t);
  t = term_f_14;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_g_14;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL;
  z_55 = t;
  t = term_h_11;
  t = get_config_0_0(t);
  a_56 = t;
  t = term_o_6;
  b_56 = t;
  t = (ATerm) ATinsert(ATempty, a_56);
  c_56 = t;
  t = SSL_printnl(b_56, c_56);
  t = z_55;
  return(t);
}
ATerm iowrap_3_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm t)
{
  static ATerm o_5 (ATerm t)
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_101(t);
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        {
          ATerm j_14 = t;
          int k_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(k_14);
            }
          else
            {
              t = j_14;
              {
                ATerm l_14 = t;
                int m_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(m_14);
                  }
                else
                  {
                    t = l_14;
                    {
                      ATerm n_14 = t;
                      int q_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(t_5, u_5, v_5, t);
                          LocalPopChoice(q_14);
                        }
                      else
                        {
                          t = n_14;
                          {
                            ATerm r_14 = t;
                            int v_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(v_14);
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
  static ATerm s_5 (ATerm t)
  {
    ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL;
    e_56 = t;
    {
      ATerm w_14 = t;
      int y_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm y_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((d_56 != NULL) && (d_56 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_56 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_5, t);
          LocalPopChoice(y_14);
        }
      else
        {
          t = w_14;
          t = term_z_14;
          d_56 = t;
        }
    }
    t = not_null(d_56);
    t = ReadFromFile_0_0(t);
    f_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_56, f_56);
    t = apply_strategy_1_0(l_101, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(o_5, n_101, r_5, s_5, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,f_11 = NULL;
  m_56 = t;
  if(match_cons(t, sym__2))
    {
      j_56 = ATgetArgument(t, 0);
      k_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_56);
  i_56 = t;
  t = k_56;
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_57 = NULL,d_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,z_10 = NULL,s_10 = NULL,l_10 = NULL,i_10 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            d_57 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_56);
        d_59 = t;
        t = d_57;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_59 = ATgetFirst((ATermList) t);
            h_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_57);
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
        i_10 = t;
        t = SSLsetAnnotations(i_10, n_59);
        q_59 = t;
        t = l_59;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(l_59), q_59);
        l_10 = t;
        t = SSLsetAnnotations(l_10, j_59);
        m_59 = t;
        t = (ATerm) ATinsert(CheckATermList(m_59), g_59);
        s_10 = t;
        t = SSLsetAnnotations(s_10, f_59);
        i_59 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, i_59);
        z_10 = t;
        t = SSLsetAnnotations(z_10, d_59);
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = debug_1_0(b_6, t);
      }
  }
  l_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_56, l_56);
  f_11 = t;
  t = SSLsetAnnotations(f_11, i_56);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_c_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(a_6, _fail, default_usage_0_0, t);
  return(t);
}

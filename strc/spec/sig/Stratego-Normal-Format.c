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
ATerm term_i_15;
ATerm term_e_15;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_o_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_a_13;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_c_9;
ATerm term_s_8;
ATerm term_k_8;
ATerm term_h_8;
ATerm term_r_7;
ATerm term_n_7;
ATerm term_j_7;
ATerm term_n_6;
ATerm term_i_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_y_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_m_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym__2, term_u_9, term_y_5);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_d_10);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym__2, term_f_12, term_y_5);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym__2, term_k_12, term_y_5);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_m_11, term_y_5);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_y_5);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm debug_1_0 (ATerm x_82 (ATerm), ATerm t);
ATerm list_1_0 (ATerm m_83 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
ATerm term_expression_0_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm strategy_expression_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm strategy_definition_0_0 (ATerm t);
ATerm map_1_0 (ATerm i_83 (ATerm), ATerm t);
static ATerm t_3 (ATerm k_36, ATerm l_36, ATerm t);
static ATerm u_3 (ATerm t_21, ATerm u_21, ATerm t);
static ATerm w_3 (ATerm z_82 (ATerm), ATerm h_136, ATerm x_21, ATerm t);
static ATerm v_3 (ATerm p_21, ATerm q_21, ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm p_99 (ATerm), ATerm t);
static ATerm j_41 (ATerm d_41, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_3 (ATerm v_21, ATerm t);
static ATerm y_3 (ATerm m_36, ATerm n_36, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_42 (ATerm t_41, ATerm t);
static ATerm v_42 (ATerm x_41, ATerm y_41, ATerm z_41, ATerm t);
static ATerm w_42 (ATerm h_42, ATerm i_42, ATerm j_42, ATerm t);
static ATerm z_3 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_83 (ATerm), ATerm t);
static ATerm s_3 (ATerm e_35, ATerm f_35, ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm y_97 (ATerm), ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm f_4 (ATerm g_45, ATerm h_45, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_4 (ATerm e_50, ATerm f_50, ATerm d_50, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm a_4 (ATerm f_39, ATerm g_39, ATerm t);
ATerm foldr_2_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_97 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm need_help_1_0 (ATerm n_100 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm c_4 (ATerm v_51, ATerm w_51, ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm t_62 (ATerm), ATerm u_62 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm q_102 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm parse_options_1_0 (ATerm p_102 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm iowrap_3_0 (ATerm y_99 (ATerm), ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm t);
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
  ATerm a_0 = NULL,j_0 = NULL,m_0 = NULL,o_0 = NULL,s_0 = NULL;
  a_0 = t;
  t = term_y_5;
  t = whoami_0_0(t);
  j_0 = t;
  t = term_b_6;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_6), j_0), term_c_6);
  s_0 = t;
  t = SSL_printnl(o_0, s_0);
  t = term_e_6;
  m_0 = t;
  t = SSL_exit(m_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm x_0 = NULL,c_1 = NULL,d_1 = NULL,o_1 = NULL;
  x_0 = t;
  t = x_82(t);
  c_1 = t;
  t = term_b_6;
  d_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_0), c_1);
  o_1 = t;
  t = SSL_printnl(d_1, o_1);
  t = x_0;
  return(t);
}
ATerm list_1_0 (ATerm m_83 (ATerm), ATerm t)
{
  t = map_1_0(m_83, t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_f_6;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm g_6 = t;
  int h_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_5 = NULL,z_5 = NULL,a_6 = NULL;
      u_5 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = u_5;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              z_5 = ATgetArgument(t, 0);
              {
                ATerm h_0 = NULL,q_0 = NULL,b_2 = NULL;
                t = SSLgetAnnotations(u_5);
                h_0 = t;
                t = SSL_is_string(z_5);
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
                  z_5 = ATgetArgument(t, 0);
                  {
                    ATerm y_0 = NULL,a_1 = NULL,c_2 = NULL;
                    t = SSLgetAnnotations(u_5);
                    y_0 = t;
                    t = SSL_is_int(z_5);
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
                      z_5 = ATgetArgument(t, 0);
                      {
                        ATerm i_1 = NULL,k_1 = NULL,e_2 = NULL;
                        t = SSLgetAnnotations(u_5);
                        i_1 = t;
                        t = SSL_is_real(z_5);
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
                          z_5 = ATgetArgument(t, 0);
                          {
                            ATerm r_1 = NULL,t_1 = NULL,f_2 = NULL;
                            t = SSLgetAnnotations(u_5);
                            r_1 = t;
                            t = SSL_is_string(z_5);
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
                              z_5 = ATgetArgument(t, 0);
                              {
                                ATerm z_1 = NULL,d_2 = NULL,g_2 = NULL;
                                t = SSLgetAnnotations(u_5);
                                z_1 = t;
                                t = z_5;
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
                                  z_5 = ATgetArgument(t, 0);
                                  a_6 = ATgetArgument(t, 1);
                                  {
                                    ATerm z_2 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,k_3 = NULL,l_3 = NULL,i_2 = NULL,h_2 = NULL;
                                    t = SSLgetAnnotations(u_5);
                                    z_2 = t;
                                    t = z_5;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        i_3 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(z_5);
                                    h_3 = t;
                                    t = SSL_is_string(i_3);
                                    k_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, k_3);
                                    h_2 = t;
                                    t = SSLsetAnnotations(h_2, h_3);
                                    l_3 = t;
                                    t = a_6;
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
                                      z_5 = ATgetArgument(t, 0);
                                      a_6 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(u_5);
                                  i_4 = t;
                                  t = SSL_is_string(z_5);
                                  o_4 = t;
                                  t = a_6;
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
      LocalPopChoice(h_6);
    }
  else
    {
      t = g_6;
      t = debug_1_0(b_0, t);
    }
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm a_20 = NULL;
  a_20 = t;
  t = SSL_is_string(a_20);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm n_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,v_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,j_5 = NULL;
  a_25 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      q_24 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
      s_24 = ATgetArgument(t, 2);
      t_24 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_25);
  n_24 = t;
  t = SSL_is_string(q_24);
  v_24 = t;
  t = r_24;
  t = map_1_0(r_0, t);
  x_24 = t;
  t = s_24;
  t = map_1_0(t_0, t);
  y_24 = t;
  t = t_24;
  t = strategy_expression_0_0(t);
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, v_24, x_24, y_24, z_24);
  j_5 = t;
  t = SSLsetAnnotations(j_5, n_24);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,i_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,g_5 = NULL,f_5 = NULL;
  q_26 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      g_26 = ATgetArgument(t, 0);
      i_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_26);
  f_26 = t;
  t = SSL_is_string(g_26);
  k_26 = t;
  t = i_26;
  if(match_cons(t, sym_FunType_2))
    {
      m_26 = ATgetArgument(t, 0);
      n_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_26);
  l_26 = t;
  t = m_26;
  t = list_1_0(_id, t);
  o_26 = t;
  t = (ATerm) ATmakeAppl(sym_FunType_2, o_26, n_26);
  f_5 = t;
  t = SSLsetAnnotations(f_5, l_26);
  p_26 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_26, p_26);
  g_5 = t;
  t = SSLsetAnnotations(g_5, f_26);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm t_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,c_27 = NULL,d_27 = NULL,i_5 = NULL,h_5 = NULL;
  d_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      v_26 = ATgetArgument(t, 0);
      w_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_27);
  t_26 = t;
  t = SSL_is_string(v_26);
  x_26 = t;
  t = w_26;
  if(match_cons(t, sym_ConstType_1))
    {
      z_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_26);
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, z_26);
  h_5 = t;
  t = SSLsetAnnotations(h_5, y_26);
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_26, c_27);
  i_5 = t;
  t = SSLsetAnnotations(i_5, t_26);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_i_6;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm j_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
      w_28 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = w_28;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = w_28;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  x_28 = ATgetArgument(t, 0);
                  {
                    ATerm i_7 = NULL,k_7 = NULL,y_2 = NULL;
                    t = SSLgetAnnotations(w_28);
                    i_7 = t;
                    t = x_28;
                    t = strategy_expression_0_0(t);
                    k_7 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, k_7);
                    y_2 = t;
                    t = SSLsetAnnotations(y_2, i_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      x_28 = ATgetArgument(t, 0);
                      {
                        ATerm q_7 = NULL,s_7 = NULL,a_3 = NULL;
                        t = SSLgetAnnotations(w_28);
                        q_7 = t;
                        t = x_28;
                        t = strategy_expression_0_0(t);
                        s_7 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, s_7);
                        a_3 = t;
                        t = SSLsetAnnotations(a_3, q_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          x_28 = ATgetArgument(t, 0);
                          y_28 = ATgetArgument(t, 1);
                          {
                            ATerm z_7 = NULL,c_8 = NULL,d_8 = NULL,b_3 = NULL;
                            t = SSLgetAnnotations(w_28);
                            z_7 = t;
                            t = x_28;
                            t = strategy_expression_0_0(t);
                            c_8 = t;
                            t = y_28;
                            t = strategy_expression_0_0(t);
                            d_8 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, c_8, d_8);
                            b_3 = t;
                            t = SSLsetAnnotations(b_3, z_7);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              x_28 = ATgetArgument(t, 0);
                              y_28 = ATgetArgument(t, 1);
                              {
                                ATerm l_8 = NULL,o_8 = NULL,p_8 = NULL,e_3 = NULL;
                                t = SSLgetAnnotations(w_28);
                                l_8 = t;
                                t = x_28;
                                t = strategy_expression_0_0(t);
                                o_8 = t;
                                t = y_28;
                                t = strategy_expression_0_0(t);
                                p_8 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, o_8, p_8);
                                e_3 = t;
                                t = SSLsetAnnotations(e_3, l_8);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  x_28 = ATgetArgument(t, 0);
                                  y_28 = ATgetArgument(t, 1);
                                  {
                                    ATerm x_8 = NULL,a_9 = NULL,b_9 = NULL,f_3 = NULL;
                                    t = SSLgetAnnotations(w_28);
                                    x_8 = t;
                                    t = x_28;
                                    t = strategy_expression_0_0(t);
                                    a_9 = t;
                                    t = y_28;
                                    t = strategy_expression_0_0(t);
                                    b_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, a_9, b_9);
                                    f_3 = t;
                                    t = SSLsetAnnotations(f_3, x_8);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      x_28 = ATgetArgument(t, 0);
                                      y_28 = ATgetArgument(t, 1);
                                      v_28 = ATgetArgument(t, 2);
                                      {
                                        ATerm k_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,j_3 = NULL;
                                        t = SSLgetAnnotations(w_28);
                                        k_9 = t;
                                        t = x_28;
                                        t = strategy_expression_0_0(t);
                                        o_9 = t;
                                        t = y_28;
                                        t = strategy_expression_0_0(t);
                                        p_9 = t;
                                        t = v_28;
                                        t = strategy_expression_0_0(t);
                                        q_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, o_9, p_9, q_9);
                                        j_3 = t;
                                        t = SSLsetAnnotations(j_3, k_9);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          x_28 = ATgetArgument(t, 0);
                                          y_28 = ATgetArgument(t, 1);
                                          {
                                            ATerm e_10 = NULL,h_10 = NULL,i_10 = NULL,q_3 = NULL;
                                            t = SSLgetAnnotations(w_28);
                                            e_10 = t;
                                            t = x_28;
                                            t = strategy_expression_0_0(t);
                                            h_10 = t;
                                            t = y_28;
                                            t = strategy_expression_0_0(t);
                                            i_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, h_10, i_10);
                                            q_3 = t;
                                            t = SSLsetAnnotations(q_3, e_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              x_28 = ATgetArgument(t, 0);
                                              y_28 = ATgetArgument(t, 1);
                                              {
                                                ATerm a_11 = NULL,d_11 = NULL,e_11 = NULL,g_4 = NULL;
                                                t = SSLgetAnnotations(w_28);
                                                a_11 = t;
                                                t = x_28;
                                                t = strategy_expression_0_0(t);
                                                d_11 = t;
                                                t = y_28;
                                                t = strategy_expression_0_0(t);
                                                e_11 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, d_11, e_11);
                                                g_4 = t;
                                                t = SSLsetAnnotations(g_4, a_11);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  x_28 = ATgetArgument(t, 0);
                                                  y_28 = ATgetArgument(t, 1);
                                                  v_28 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm p_11 = NULL,y_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,l_4 = NULL,j_4 = NULL;
                                                    t = SSLgetAnnotations(w_28);
                                                    p_11 = t;
                                                    t = x_28;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        c_12 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(x_28);
                                                    b_12 = t;
                                                    t = c_12;
                                                    {
                                                      ATerm l_6 = t;
                                                      int m_6 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = SSL_is_string(c_12);
                                                          LocalPopChoice(m_6);
                                                        }
                                                      else
                                                        {
                                                          t = l_6;
                                                          {
                                                            ATerm q_12 = NULL,r_12 = NULL,h_13 = NULL,m_13 = NULL,n_13 = NULL,h_4 = NULL;
                                                            if(match_cons(t, sym_Mod_2))
                                                              {
                                                                q_12 = ATgetArgument(t, 0);
                                                                r_12 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSLgetAnnotations(c_12);
                                                            h_13 = t;
                                                            t = SSL_is_string(q_12);
                                                            m_13 = t;
                                                            t = SSL_is_string(r_12);
                                                            n_13 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Mod_2, m_13, n_13);
                                                            h_4 = t;
                                                            t = SSLsetAnnotations(h_4, h_13);
                                                          }
                                                        }
                                                    }
                                                    d_12 = t;
                                                    t = (ATerm) ATmakeAppl(sym_SVar_1, d_12);
                                                    j_4 = t;
                                                    t = SSLsetAnnotations(j_4, b_12);
                                                    e_12 = t;
                                                    t = y_28;
                                                    t = map_1_0(strategy_expression_0_0, t);
                                                    y_11 = t;
                                                    t = v_28;
                                                    t = map_1_0(term_expression_0_0, t);
                                                    a_12 = t;
                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, e_12, y_11, a_12);
                                                    l_4 = t;
                                                    t = SSLsetAnnotations(l_4, p_11);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      x_28 = ATgetArgument(t, 0);
                                                      y_28 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm u_13 = NULL,z_13 = NULL,a_14 = NULL,n_4 = NULL;
                                                        t = SSLgetAnnotations(w_28);
                                                        u_13 = t;
                                                        t = SSL_is_string(x_28);
                                                        z_13 = t;
                                                        t = y_28;
                                                        t = strategy_expression_0_0(t);
                                                        a_14 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, z_13, a_14);
                                                        n_4 = t;
                                                        t = SSLsetAnnotations(n_4, u_13);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          x_28 = ATgetArgument(t, 0);
                                                          y_28 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm m_14 = NULL,q_14 = NULL,s_14 = NULL,p_4 = NULL;
                                                            t = SSLgetAnnotations(w_28);
                                                            m_14 = t;
                                                            t = SSL_is_int(x_28);
                                                            q_14 = t;
                                                            t = y_28;
                                                            t = strategy_expression_0_0(t);
                                                            s_14 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, q_14, s_14);
                                                            p_4 = t;
                                                            t = SSLsetAnnotations(p_4, m_14);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              x_28 = ATgetArgument(t, 0);
                                                              y_28 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm g_15 = NULL,k_15 = NULL,l_15 = NULL,s_4 = NULL;
                                                                t = SSLgetAnnotations(w_28);
                                                                g_15 = t;
                                                                t = SSL_is_string(x_28);
                                                                k_15 = t;
                                                                t = y_28;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                l_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, k_15, l_15);
                                                                s_4 = t;
                                                                t = SSLsetAnnotations(s_4, g_15);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  x_28 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm d_16 = NULL,f_16 = NULL,t_4 = NULL;
                                                                    t = SSLgetAnnotations(w_28);
                                                                    d_16 = t;
                                                                    t = x_28;
                                                                    t = strategy_expression_0_0(t);
                                                                    f_16 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, f_16);
                                                                    t_4 = t;
                                                                    t = SSLsetAnnotations(t_4, d_16);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      x_28 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm m_16 = NULL,o_16 = NULL,v_4 = NULL;
                                                                        t = SSLgetAnnotations(w_28);
                                                                        m_16 = t;
                                                                        t = x_28;
                                                                        t = strategy_expression_0_0(t);
                                                                        o_16 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, o_16);
                                                                        v_4 = t;
                                                                        t = SSLsetAnnotations(v_4, m_16);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          x_28 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm y_16 = NULL,d_17 = NULL,y_4 = NULL;
                                                                            t = SSLgetAnnotations(w_28);
                                                                            y_16 = t;
                                                                            t = x_28;
                                                                            t = strategy_expression_0_0(t);
                                                                            d_17 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, d_17);
                                                                            y_4 = t;
                                                                            t = SSLsetAnnotations(y_4, y_16);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              x_28 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm n_17 = NULL,u_17 = NULL,z_4 = NULL;
                                                                                t = SSLgetAnnotations(w_28);
                                                                                n_17 = t;
                                                                                t = x_28;
                                                                                t = strategy_expression_0_0(t);
                                                                                u_17 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, u_17);
                                                                                z_4 = t;
                                                                                t = SSLsetAnnotations(z_4, n_17);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  x_28 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm i_18 = NULL,n_18 = NULL,a_5 = NULL;
                                                                                    t = SSLgetAnnotations(w_28);
                                                                                    i_18 = t;
                                                                                    t = x_28;
                                                                                    t = term_expression_0_0(t);
                                                                                    n_18 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, n_18);
                                                                                    a_5 = t;
                                                                                    t = SSLsetAnnotations(a_5, i_18);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      x_28 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm z_18 = NULL,f_19 = NULL,b_5 = NULL;
                                                                                        t = SSLgetAnnotations(w_28);
                                                                                        z_18 = t;
                                                                                        t = x_28;
                                                                                        t = term_expression_0_0(t);
                                                                                        f_19 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_19);
                                                                                        b_5 = t;
                                                                                        t = SSLsetAnnotations(b_5, z_18);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          x_28 = ATgetArgument(t, 0);
                                                                                          y_28 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm o_19 = NULL,u_19 = NULL,v_19 = NULL,c_5 = NULL;
                                                                                            t = SSLgetAnnotations(w_28);
                                                                                            o_19 = t;
                                                                                            t = x_28;
                                                                                            t = map_1_0(f_0, t);
                                                                                            u_19 = t;
                                                                                            t = y_28;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            v_19 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, u_19, v_19);
                                                                                            c_5 = t;
                                                                                            t = SSLsetAnnotations(c_5, o_19);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              x_28 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm j_20 = NULL,l_20 = NULL,d_5 = NULL;
                                                                                                t = SSLgetAnnotations(w_28);
                                                                                                j_20 = t;
                                                                                                t = x_28;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                l_20 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, l_20);
                                                                                                d_5 = t;
                                                                                                t = SSLsetAnnotations(d_5, j_20);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  x_28 = ATgetArgument(t, 0);
                                                                                                  y_28 = ATgetArgument(t, 1);
                                                                                                  v_28 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm u_20 = NULL,y_20 = NULL,z_20 = NULL,c_21 = NULL,e_5 = NULL;
                                                                                                    t = SSLgetAnnotations(w_28);
                                                                                                    u_20 = t;
                                                                                                    t = SSL_is_string(x_28);
                                                                                                    y_20 = t;
                                                                                                    t = y_28;
                                                                                                    t = map_1_0(strategy_expression_0_0, t);
                                                                                                    z_20 = t;
                                                                                                    t = v_28;
                                                                                                    t = map_1_0(term_expression_0_0, t);
                                                                                                    c_21 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, y_20, z_20, c_21);
                                                                                                    e_5 = t;
                                                                                                    t = SSLsetAnnotations(e_5, u_20);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm y_22 = NULL,k_24 = NULL,l_24 = NULL,k_5 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      x_28 = ATgetArgument(t, 0);
                                                                                                      y_28 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(w_28);
                                                                                                  y_22 = t;
                                                                                                  t = x_28;
                                                                                                  t = map_1_0(p_0, t);
                                                                                                  k_24 = t;
                                                                                                  t = y_28;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  l_24 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, k_24, l_24);
                                                                                                  k_5 = t;
                                                                                                  t = SSLsetAnnotations(k_5, y_22);
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
      LocalPopChoice(k_6);
    }
  else
    {
      t = j_6;
      t = debug_1_0(u_0, t);
    }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,t_6 = NULL;
  j_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      g_31 = ATgetArgument(t, 0);
      h_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_31);
  f_31 = t;
  t = SSL_is_string(g_31);
  i_31 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_31, h_31);
  t_6 = t;
  t = SSLsetAnnotations(t_6, f_31);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,u_6 = NULL;
  o_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      l_31 = ATgetArgument(t, 0);
      m_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_31);
  k_31 = t;
  t = SSL_is_string(l_31);
  n_31 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_31, m_31);
  u_6 = t;
  t = SSLsetAnnotations(u_6, k_31);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL,w_34 = NULL,x_34 = NULL,x_6 = NULL;
  x_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      r_34 = ATgetArgument(t, 0);
      s_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_34);
  q_34 = t;
  t = SSL_is_string(r_34);
  w_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, w_34, s_34);
  x_6 = t;
  t = SSLsetAnnotations(x_6, q_34);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm y_34 = NULL,a_35 = NULL,b_35 = NULL,o_36 = NULL,p_36 = NULL,y_6 = NULL;
  p_36 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      a_35 = ATgetArgument(t, 0);
      b_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_36);
  y_34 = t;
  t = SSL_is_string(a_35);
  o_36 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, o_36, b_35);
  y_6 = t;
  t = SSLsetAnnotations(y_6, y_34);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm a_47 = NULL,e_47 = NULL,f_47 = NULL,s_47 = NULL,a_48 = NULL,b_7 = NULL;
  a_48 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_47 = ATgetArgument(t, 0);
      f_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_48);
  a_47 = t;
  t = SSL_is_string(e_47);
  s_47 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_47, f_47);
  b_7 = t;
  t = SSLsetAnnotations(b_7, a_47);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm m_48 = NULL,n_48 = NULL,z_48 = NULL,k_49 = NULL,l_49 = NULL,c_7 = NULL;
  l_49 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      n_48 = ATgetArgument(t, 0);
      z_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_49);
  m_48 = t;
  t = SSL_is_string(n_48);
  k_49 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_49, z_48);
  c_7 = t;
  t = SSLsetAnnotations(c_7, m_48);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_n_6;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm o_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL;
      t_37 = t;
      if(match_cons(t, sym_SDefT_4))
        {
          u_37 = ATgetArgument(t, 0);
          v_37 = ATgetArgument(t, 1);
          w_37 = ATgetArgument(t, 2);
          s_37 = ATgetArgument(t, 3);
          {
            ATerm v_29 = NULL,a_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,v_6 = NULL;
            t = SSLgetAnnotations(t_37);
            v_29 = t;
            t = u_37;
            {
              ATerm q_6 = t;
              int r_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_is_string(u_37);
                  LocalPopChoice(r_6);
                }
              else
                {
                  t = q_6;
                  {
                    ATerm d_31 = NULL,e_31 = NULL,x_31 = NULL,i_32 = NULL,p_32 = NULL,s_6 = NULL;
                    if(match_cons(t, sym_Mod_2))
                      {
                        d_31 = ATgetArgument(t, 0);
                        e_31 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(u_37);
                    x_31 = t;
                    t = SSL_is_string(d_31);
                    i_32 = t;
                    t = SSL_is_string(e_31);
                    p_32 = t;
                    t = (ATerm) ATmakeAppl(sym_Mod_2, i_32, p_32);
                    s_6 = t;
                    t = SSLsetAnnotations(s_6, x_31);
                  }
                }
            }
            a_30 = t;
            t = v_37;
            t = map_1_0(v_0, t);
            d_30 = t;
            t = w_37;
            t = map_1_0(w_0, t);
            e_30 = t;
            t = s_37;
            t = strategy_expression_0_0(t);
            f_30 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, a_30, d_30, e_30, f_30);
            v_6 = t;
            t = SSLsetAnnotations(v_6, v_29);
          }
        }
      else
        {
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              u_37 = ATgetArgument(t, 0);
              v_37 = ATgetArgument(t, 1);
              w_37 = ATgetArgument(t, 2);
              s_37 = ATgetArgument(t, 3);
              {
                ATerm b_33 = NULL,j_33 = NULL,r_33 = NULL,s_33 = NULL,u_33 = NULL,z_6 = NULL;
                t = SSLgetAnnotations(t_37);
                b_33 = t;
                t = u_37;
                {
                  ATerm e_7 = t;
                  int f_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_is_string(u_37);
                      LocalPopChoice(f_7);
                    }
                  else
                    {
                      t = e_7;
                      {
                        ATerm l_34 = NULL,m_34 = NULL,x_40 = NULL,p_41 = NULL,q_41 = NULL,w_6 = NULL;
                        if(match_cons(t, sym_Mod_2))
                          {
                            l_34 = ATgetArgument(t, 0);
                            m_34 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(u_37);
                        x_40 = t;
                        t = SSL_is_string(l_34);
                        p_41 = t;
                        t = SSL_is_string(m_34);
                        q_41 = t;
                        t = (ATerm) ATmakeAppl(sym_Mod_2, p_41, q_41);
                        w_6 = t;
                        t = SSLsetAnnotations(w_6, x_40);
                      }
                    }
                }
                j_33 = t;
                t = v_37;
                t = map_1_0(z_0, t);
                r_33 = t;
                t = w_37;
                t = map_1_0(b_1, t);
                s_33 = t;
                t = s_37;
                t = strategy_expression_0_0(t);
                u_33 = t;
                t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, j_33, r_33, s_33, u_33);
                z_6 = t;
                t = SSLsetAnnotations(z_6, b_33);
              }
            }
          else
            {
              ATerm c_44 = NULL,e_45 = NULL,l_45 = NULL,p_45 = NULL,d_7 = NULL;
              if(match_cons(t, sym_ExtSDef_3))
                {
                  u_37 = ATgetArgument(t, 0);
                  v_37 = ATgetArgument(t, 1);
                  w_37 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_37);
              c_44 = t;
              t = u_37;
              {
                ATerm g_7 = t;
                int h_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_is_string(u_37);
                    LocalPopChoice(h_7);
                  }
                else
                  {
                    t = g_7;
                    {
                      ATerm y_46 = NULL,z_46 = NULL,l_50 = NULL,n_51 = NULL,o_51 = NULL,a_7 = NULL;
                      if(match_cons(t, sym_Mod_2))
                        {
                          y_46 = ATgetArgument(t, 0);
                          z_46 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(u_37);
                      l_50 = t;
                      t = SSL_is_string(y_46);
                      n_51 = t;
                      t = SSL_is_string(z_46);
                      o_51 = t;
                      t = (ATerm) ATmakeAppl(sym_Mod_2, n_51, o_51);
                      a_7 = t;
                      t = SSLsetAnnotations(a_7, l_50);
                    }
                  }
              }
              e_45 = t;
              t = v_37;
              t = map_1_0(e_1, t);
              l_45 = t;
              t = w_37;
              t = map_1_0(f_1, t);
              p_45 = t;
              t = (ATerm) ATmakeAppl(sym_ExtSDef_3, e_45, l_45, p_45);
              d_7 = t;
              t = SSLsetAnnotations(d_7, c_44);
            }
        }
      LocalPopChoice(p_6);
    }
  else
    {
      t = o_6;
      t = debug_1_0(g_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm i_83 (ATerm), ATerm t)
{
  static ATerm r_38 (ATerm t)
  {
    ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
    o_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_38;
      }
    else
      {
        ATerm b_54 = NULL,b_55 = NULL,c_55 = NULL,s_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_38 = ATgetFirst((ATermList) t);
            q_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_38);
        b_54 = t;
        t = p_38;
        t = i_83(t);
        b_55 = t;
        t = q_38;
        t = r_38(t);
        c_55 = t;
        t = (ATerm) ATinsert(CheckATermList(c_55), b_55);
        s_10 = t;
        t = SSLsetAnnotations(s_10, b_54);
      }
    return(t);
  }
  t = r_38(t);
  return(t);
}
static ATerm t_3 (ATerm k_36, ATerm l_36, ATerm t)
{
  ATerm t_38 = NULL;
  t = SSL_fputc(k_36, l_36);
  t_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_38);
  return(t);
}
static ATerm u_3 (ATerm t_21, ATerm u_21, ATerm t)
{
  ATerm u_38 = NULL;
  t = SSL_write_term_to_stream_text(t_21, u_21);
  u_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_38);
  return(t);
}
static ATerm w_3 (ATerm z_82 (ATerm), ATerm h_136, ATerm x_21, ATerm t)
{
  ATerm v_38 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_136, term_j_7);
  t = z_3(t);
  v_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_38, x_21);
  t = z_82(t);
  t = fclose_0_0(t);
  t = x_21;
  return(t);
}
static ATerm v_3 (ATerm p_21, ATerm q_21, ATerm t)
{
  ATerm w_38 = NULL;
  t = SSL_write_term_to_stream_baf(p_21, q_21);
  w_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_38);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_7 = ATgetArgument(t, 0);
      if(match_cons(l_7, sym_Stream_1))
        {
          q_55 = ATgetArgument(l_7, 0);
        }
      else
        _fail(t);
      r_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(q_55, r_55, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_7 = ATgetArgument(t, 0);
      if(match_cons(m_7, sym_Stream_1))
        {
          f_56 = ATgetArgument(m_7, 0);
        }
      else
        _fail(t);
      g_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(f_56, g_56, t);
  c_56 = t;
  t = term_n_7;
  d_56 = t;
  t = c_56;
  if(match_cons(t, sym_Stream_1))
    {
      e_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_7, c_56);
  t = t_3(d_56, e_56, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_40 = NULL,o_40 = NULL,y_10 = NULL,u_10 = NULL;
  b_39 = t;
  if(match_cons(t, sym__2))
    {
      k_39 = ATgetArgument(t, 0);
      l_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_39);
  j_39 = t;
  t = k_39;
  {
    ATerm o_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((a_39 != NULL) && (a_39 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(h_1, t);
        LocalPopChoice(p_7);
      }
    else
      {
        t = o_7;
        t = term_r_7;
        a_39 = t;
      }
  }
  m_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_39, l_39);
  u_10 = t;
  t = SSLsetAnnotations(u_10, j_39);
  t = b_39;
  if(match_cons(t, sym__2))
    {
      d_39 = ATgetArgument(t, 0);
      e_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_39);
  c_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_39, (ATerm) ATmakeAppl(sym__2, not_null(a_39), e_39));
  y_10 = t;
  t = SSLsetAnnotations(y_10, c_39);
  i_39 = t;
  if(match_cons(t, sym__2))
    {
      n_40 = ATgetArgument(t, 0);
      o_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,z_10 = NULL;
        t = SSLgetAnnotations(i_39);
        j_55 = t;
        t = n_40;
        t = fetch_1_0(j_1, t);
        m_55 = t;
        t = o_40;
        if(match_cons(t, sym__2))
          {
            o_55 = ATgetArgument(t, 0);
            p_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_3(l_1, o_55, p_55, t);
        n_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_55, n_55);
        z_10 = t;
        t = SSLsetAnnotations(z_10, j_55);
        LocalPopChoice(u_7);
      }
    else
      {
        t = t_7;
        {
          ATerm w_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,g_11 = NULL;
          t = SSLgetAnnotations(i_39);
          w_55 = t;
          t = o_40;
          if(match_cons(t, sym__2))
            {
              a_56 = ATgetArgument(t, 0);
              b_56 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_3(m_1, a_56, b_56, t);
          z_55 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_40, z_55);
          g_11 = t;
          t = SSLsetAnnotations(g_11, w_55);
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
ATerm apply_strategy_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL;
  v_40 = t;
  t = dtime_0_0(t);
  t = v_40;
  t = p_99(t);
  u_40 = t;
  t = dtime_0_0(t);
  r_40 = t;
  t = u_40;
  if(match_cons(t, sym__2))
    {
      s_40 = ATgetArgument(t, 0);
      t_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_40), (ATerm) ATmakeAppl(sym_Runtime_1, r_40)), t_40);
  return(t);
}
static ATerm j_41 (ATerm d_41, ATerm t)
{
  t = SSL_fclose(d_41);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL;
  h_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_41 = ATgetArgument(t, 0);
      {
        ATerm v_7 = t;
        int w_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_41);
            LocalPopChoice(w_7);
          }
        else
          {
            t = v_7;
            t = j_41(h_41, t);
          }
      }
    }
  else
    {
      t = j_41(h_41, t);
    }
  return(t);
}
static ATerm x_3 (ATerm v_21, ATerm t)
{
  t = SSL_read_term_from_stream(v_21);
  return(t);
}
static ATerm y_3 (ATerm m_36, ATerm n_36, ATerm t)
{
  ATerm k_41 = NULL;
  t = SSL_fopen(m_36, n_36);
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_41);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_41 = NULL;
  t = SSL_stdin_stream();
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_41);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_41 = NULL;
  t = SSL_stdout_stream();
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_41);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_41 = NULL;
  t = SSL_stderr_stream();
  n_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_41);
  return(t);
}
static ATerm u_42 (ATerm t_41, ATerm t)
{
  ATerm u_41 = NULL;
  t = SSL_explode_term(t_41);
  if(match_cons(t, sym__2))
    {
      ATerm x_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_7 = ATgetArgument(t, 1);
        if(((ATgetType(y_7) == AT_LIST) && !(ATisEmpty(y_7))))
          {
            u_41 = ATgetFirst((ATermList) y_7);
            {
              ATerm a_8 = (ATerm) ATgetNext((ATermList) y_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_41;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_41;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_41;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_41;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_42 (ATerm x_41, ATerm y_41, ATerm z_41, ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL,f_42 = NULL,u_11 = NULL;
  t = SSLgetAnnotations(z_41);
  c_42 = t;
  t = x_41;
  if(match_cons(t, sym_Path_1))
    {
      f_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_42, y_41);
  u_11 = t;
  t = SSLsetAnnotations(u_11, c_42);
  if(match_cons(t, sym__2))
    {
      a_42 = ATgetArgument(t, 0);
      b_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(a_42, b_42, t);
  return(t);
}
static ATerm w_42 (ATerm h_42, ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,p_42 = NULL,v_11 = NULL;
  t = SSLgetAnnotations(j_42);
  m_42 = t;
  t = SSL_is_string(h_42);
  p_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_42, i_42);
  v_11 = t;
  t = SSLsetAnnotations(v_11, m_42);
  if(match_cons(t, sym__2))
    {
      k_42 = ATgetArgument(t, 0);
      l_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(k_42, l_42, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL;
  r_42 = t;
  if(match_cons(t, sym__2))
    {
      s_42 = ATgetArgument(t, 0);
      t_42 = ATgetArgument(t, 1);
      {
        ATerm b_8 = t;
        int e_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_42(r_42, t);
            LocalPopChoice(e_8);
          }
        else
          {
            t = b_8;
            {
              ATerm f_8 = t;
              int g_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_42(s_42, t_42, r_42, t);
                  LocalPopChoice(g_8);
                }
              else
                {
                  t = f_8;
                  t = w_42(s_42, t_42, r_42, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_42(r_42, t);
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_h_8;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL;
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_43 = NULL;
      a_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_43, term_k_8);
      t = z_3(t);
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      t = debug_1_0(n_1, t);
      _fail(t);
    }
  y_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(z_42, t);
  x_42 = t;
  t = y_42;
  t = fclose_0_0(t);
  t = x_42;
  return(t);
}
ATerm fetch_1_0 (ATerm s_83 (ATerm), ATerm t)
{
  static ATerm y_43 (ATerm t)
  {
    ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
    v_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_43 = ATgetFirst((ATermList) t);
        x_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_8 = t;
      int n_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_56 = NULL,v_56 = NULL,h_12 = NULL;
          t = SSLgetAnnotations(v_43);
          s_56 = t;
          t = w_43;
          t = s_83(t);
          v_56 = t;
          t = (ATerm) ATinsert(CheckATermList(x_43), v_56);
          h_12 = t;
          t = SSLsetAnnotations(h_12, s_56);
          LocalPopChoice(n_8);
        }
      else
        {
          t = m_8;
          {
            ATerm d_57 = NULL,g_57 = NULL,i_12 = NULL;
            t = SSLgetAnnotations(v_43);
            d_57 = t;
            t = x_43;
            t = y_43(t);
            g_57 = t;
            t = (ATerm) ATinsert(CheckATermList(g_57), w_43);
            i_12 = t;
            t = SSLsetAnnotations(i_12, d_57);
          }
        }
    }
    return(t);
  }
  t = y_43(t);
  return(t);
}
static ATerm s_3 (ATerm e_35, ATerm f_35, ATerm t)
{
  t = SSL_strcat(e_35, f_35);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_s_8;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_44 = NULL;
      h_44 = t;
      t = SSL_is_string(h_44);
      LocalPopChoice(u_8);
    }
  else
    {
      t = t_8;
      {
        ATerm v_8 = t;
        int w_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_1, t);
            LocalPopChoice(w_8);
          }
        else
          {
            t = v_8;
            {
              ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL;
              n_44 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_44 = ATgetArgument(t, 0);
                  t = o_44;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_44 = ATgetArgument(t, 0);
                      t = o_44;
                      {
                        ATerm y_8 = t;
                        int z_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(z_8);
                          }
                        else
                          {
                            t = y_8;
                            t = debug_1_0(q_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_44 = NULL,u_44 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_44 = ATgetArgument(t, 0);
                          p_44 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_44;
                      t = eval_config_0_0(t);
                      t_44 = t;
                      t = p_44;
                      t = eval_config_0_0(t);
                      u_44 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_44, u_44);
                      t = s_3(t_44, u_44, t);
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
  ATerm y_44 = NULL,z_44 = NULL;
  y_44 = t;
  t = term_c_9;
  z_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_9, y_44);
  t = c_4(z_44, y_44, t);
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_45 = NULL,b_45 = NULL;
        t = eval_config_0_0(t);
        a_45 = t;
        t = term_c_9;
        b_45 = t;
        t = SSL_table_put(b_45, y_44, a_45);
        t = a_45;
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_97 (ATerm), ATerm t)
{
  ATerm f_45 = NULL;
  f_45 = t;
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_45 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        j_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_45, term_i_9);
        t = geq_0_0(t);
        t = f_45;
        t = y_97(t);
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        t = f_45;
      }
  }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm m_45 = NULL;
  m_45 = t;
  if(match_string(t, "-k"))
    {
      t = m_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_45;
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,u_45 = NULL;
  n_45 = t;
  t = SSL_string_to_int(n_45);
  o_45 = t;
  t = term_j_9;
  u_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_9, o_45);
  t = f_4(u_45, o_45, t);
  t = n_45;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_1, u_1, v_1, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm w_45 = NULL;
  w_45 = t;
  if(match_string(t, "-S"))
    {
      t = w_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_45;
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL;
  t = term_h_9;
  x_45 = t;
  t = term_m_9;
  y_45 = t;
  t = term_n_9;
  t = f_4(x_45, y_45, t);
  t = term_r_9;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_s_9;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL;
  z_45 = t;
  t = SSL_string_to_int(z_45);
  a_46 = t;
  t = term_h_9;
  b_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_9, a_46);
  t = f_4(b_46, a_46, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_45);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_t_9;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL;
  t = term_u_9;
  c_46 = t;
  t = term_y_5;
  d_46 = t;
  t = term_v_9;
  t = f_4(c_46, d_46, t);
  t = term_w_9;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_x_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_1, x_1, y_1, t);
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      {
        ATerm a_10 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_2, k_2, l_2, t);
            LocalPopChoice(b_10);
          }
        else
          {
            t = a_10;
            t = Option_3_0(m_2, n_2, o_2, t);
          }
      }
    }
  return(t);
}
static ATerm f_4 (ATerm g_45, ATerm h_45, ATerm t)
{
  ATerm e_46 = NULL;
  t = term_c_9;
  e_46 = t;
  t = SSL_table_put(e_46, g_45, h_45);
  t = (ATerm) ATmakeAppl(sym__3, term_c_9, g_45, h_45);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL;
      t = term_y_5;
      t = e_0(t);
      j_46 = t;
      t = term_c_10;
      k_46 = t;
      t = term_d_10;
      l_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_10, term_d_10, j_46);
      t = d_4(k_46, l_46, j_46, t);
      _fail(t);
    }
  else
    {
      ATerm o_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_46 = ATgetFirst((ATermList) t);
          i_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_46;
      t = c_0(t);
      t = term_y_5;
      t = d_0(t);
      o_46 = t;
      t = (ATerm) ATinsert(CheckATermList(i_46), o_46);
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm q_46 = NULL;
  q_46 = t;
  if(match_string(t, "-o"))
    {
      t = q_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_46;
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL;
  r_46 = t;
  t = term_f_10;
  s_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_10, r_46);
  t = f_4(s_46, r_46, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_46);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_g_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_2, q_2, r_2, t);
  return(t);
}
static ATerm d_4 (ATerm e_50, ATerm f_50, ATerm d_50, ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL;
  u_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_50, f_50);
  {
    ATerm j_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_10 = ATgetArgument(t, 0);
            ATerm m_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_50, f_50);
        t = c_4(e_50, f_50, t);
        LocalPopChoice(k_10);
      }
    else
      {
        t = j_10;
        t = (ATerm) ATempty;
      }
  }
  v_46 = t;
  t = (ATerm) ATinsert(CheckATermList(v_46), d_50);
  w_46 = t;
  t = SSL_table_put(e_50, f_50, w_46);
  t = u_46;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL;
      t = term_y_5;
      t = n_0(t);
      l_47 = t;
      t = term_c_10;
      m_47 = t;
      t = term_d_10;
      n_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_10, term_d_10, l_47);
      t = d_4(m_47, n_47, l_47, t);
      _fail(t);
    }
  else
    {
      ATerm r_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_47 = ATgetFirst((ATermList) t);
          i_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_47;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_47 = ATgetFirst((ATermList) t);
          k_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_47;
      t = k_0(t);
      t = j_47;
      t = l_0(t);
      r_47 = t;
      t = (ATerm) ATinsert(CheckATermList(k_47), r_47);
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm t_47 = NULL;
  t_47 = t;
  if(match_string(t, "-i"))
    {
      t = t_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_47;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL;
  u_47 = t;
  t = term_n_10;
  v_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_10, u_47);
  t = f_4(v_47, u_47, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_47);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_o_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, t_2, u_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_5;
  t = whoami_0_0(t);
  w_47 = t;
  t = term_b_6;
  y_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_10), w_47);
  z_47 = t;
  t = SSL_printnl(y_47, z_47);
  t = term_e_6;
  x_47 = t;
  t = SSL_exit(x_47);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_10;
  t = get_config_0_0(t);
  return(t);
}
static ATerm a_4 (ATerm f_39, ATerm g_39, ATerm t)
{
  ATerm r_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_39, g_39);
      LocalPopChoice(t_10);
    }
  else
    {
      t = r_10;
      t = SSL_addr(f_39, g_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL;
  b_48 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_48;
      t = l_89(t);
    }
  else
    {
      ATerm g_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_48 = ATgetFirst((ATermList) t);
          d_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_48;
      t = foldr_2_0(l_89, m_89, t);
      g_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_48, g_48);
      t = m_89(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_m_9;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL;
  if(match_cons(t, sym__2))
    {
      x_57 = ATgetArgument(t, 0);
      y_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(x_57, y_57, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_48 = NULL,t_57 = NULL,u_57 = NULL;
  t = times_0_0(t);
  u_57 = t;
  t = SSL_explode_term(u_57);
  if(match_cons(t, sym__2))
    {
      ATerm v_10 = ATgetArgument(t, 0);
      t_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_57;
  t = foldr_2_0(v_2, w_2, t);
  j_48 = t;
  t = SSL_TicksToSeconds(j_48);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL;
  u_48 = t;
  if(match_cons(t, sym__2))
    {
      v_48 = ATgetArgument(t, 0);
      w_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_48;
        if((v_48 != t))
          {
            _fail(t);
          }
        t = u_48;
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
        t = (ATerm) ATmakeAppl(sym__2, v_48, w_48);
        {
          ATerm b_11 = t;
          int c_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_48, w_48);
              LocalPopChoice(c_11);
            }
          else
            {
              t = b_11;
              t = SSL_gtr(v_48, w_48);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_48, w_48);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_97 (ATerm), ATerm t)
{
  ATerm a_49 = NULL;
  a_49 = t;
  {
    ATerm f_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_49 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        c_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_49, term_e_6);
        t = geq_0_0(t);
        t = a_49;
        t = x_97(t);
        LocalPopChoice(h_11);
      }
    else
      {
        t = f_11;
        t = a_49;
      }
  }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL,h_49 = NULL,i_49 = NULL;
  t = run_time_0_0(t);
  e_49 = t;
  t = term_y_5;
  t = whoami_0_0(t);
  f_49 = t;
  t = term_b_6;
  h_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_11), e_49), term_i_11), f_49);
  i_49 = t;
  t = SSL_printnl(h_49, i_49);
  t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_11), e_49), term_i_11), f_49));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_9;
  j_49 = t;
  t = SSL_exit(j_49);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL;
  x_49 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = x_49;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          w_49 = ATgetArgument(t, 0);
          {
            ATerm k_58 = NULL,l_12 = NULL;
            t = SSLgetAnnotations(x_49);
            k_58 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, w_49);
            l_12 = t;
            t = SSLsetAnnotations(l_12, k_58);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = x_49;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_100 (ATerm), ATerm t)
{
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_11;
      t = get_config_0_0(t);
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      t = fetch_1_0(c_3, t);
    }
  t = n_100(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm a_50 = NULL,c_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_50 = ATgetFirst((ATermList) t);
      c_50 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_50 = NULL,k_50 = NULL;
        static ATerm d_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_50)), not_null(k_50));
          return(t);
        }
        t = c_50;
        t = i_0(t);
        if(((j_50 != NULL) && (j_50 != t)))
          _fail(t);
        else
          j_50 = t;
        t = a_50;
        t = g_0(t);
        if(((k_50 != NULL) && (k_50 != t)))
          _fail(t);
        else
          k_50 = t;
        t = c_50;
        t = reverse_acc_2_0(g_0, d_3, t);
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
static ATerm c_4 (ATerm v_51, ATerm w_51, ATerm t)
{
  t = SSL_table_get(v_51, w_51);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL,n_12 = NULL;
  q_50 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_50);
  o_50 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_50);
  n_12 = t;
  t = SSLsetAnnotations(n_12, o_50);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm s_50 = NULL;
  s_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_50), term_n_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL;
  ATerm o_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_10;
      t = get_config_0_0(t);
      LocalPopChoice(q_11);
    }
  else
    {
      t = o_11;
      t = fetch_1_0(m_3, t);
    }
  t = term_r_11;
  t = echo_0_0(t);
  t = term_c_10;
  m_50 = t;
  t = term_d_10;
  n_50 = t;
  t = term_s_11;
  t = c_4(m_50, n_50, t);
  t = reverse_acc_2_0(_id, n_3, t);
  t = map_1_0(o_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL;
  u_50 = t;
  {
    ATerm t_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_50;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_11 = ATgetFirst((ATermList) t);
                ATerm z_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_50;
          }
        LocalPopChoice(w_11);
      }
    else
      {
        t = t_11;
        t = (ATerm) ATinsert(ATempty, u_50);
      }
  }
  v_50 = t;
  t = term_r_7;
  w_50 = t;
  t = SSL_printnl(w_50, v_50);
  t = u_50;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_10;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL;
  t = term_f_12;
  a_51 = t;
  t = term_y_5;
  b_51 = t;
  t = term_g_12;
  t = f_4(a_51, b_51, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_j_12;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL,f_51 = NULL;
  t = term_f_12;
  e_51 = t;
  t = term_y_5;
  f_51 = t;
  t = term_g_12;
  t = f_4(e_51, f_51, t);
  t = term_k_12;
  c_51 = t;
  t = term_y_5;
  d_51 = t;
  t = term_m_12;
  t = f_4(c_51, d_51, t);
  t = term_o_12;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_p_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_3, r_3, b_4, t);
      LocalPopChoice(v_12);
    }
  else
    {
      t = t_12;
      t = Option_3_0(e_4, k_4, m_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_62 (ATerm), ATerm u_62 (ATerm), ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,s_12 = NULL;
  l_51 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_51 = ATgetFirst((ATermList) t);
      i_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_51);
  g_51 = t;
  t = h_51;
  t = t_62(t);
  j_51 = t;
  t = i_51;
  t = u_62(t);
  k_51 = t;
  t = (ATerm) ATinsert(CheckATermList(k_51), j_51);
  s_12 = t;
  t = SSLsetAnnotations(s_12, g_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_102 (ATerm), ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,x_51 = NULL,y_51 = NULL,u_12 = NULL;
  q_51 = t;
  {
    ATerm w_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_13;
        t = q_102(t);
        LocalPopChoice(y_12);
      }
    else
      {
        t = w_12;
      }
  }
  t = q_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_51 = ATgetFirst((ATermList) t);
      t_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_51);
  r_51 = t;
  t = term_q_10;
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_10, s_51);
  t = f_4(y_51, s_51, t);
  t = t_51;
  {
    static ATerm i_52 (ATerm t)
    {
      ATerm b_13 = t;
      int e_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_13 = t;
          int g_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_52 = NULL;
              b_52 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_52;
              LocalPopChoice(g_13);
            }
          else
            {
              t = f_13;
              t = q_102(t);
              t = Cons_2_0(_id, i_52, t);
            }
          LocalPopChoice(e_13);
        }
      else
        {
          t = b_13;
          {
            ATerm e_52 = NULL,f_52 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_52 = ATgetFirst((ATermList) t);
                f_52 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_52), (ATerm) ATmakeAppl(sym_Undefined_1, e_52));
          }
        }
      return(t);
    }
    t = i_52(t);
  }
  x_51 = t;
  t = (ATerm) ATinsert(CheckATermList(x_51), (ATerm) ATmakeAppl(sym_Program_1, s_51));
  u_12 = t;
  t = SSLsetAnnotations(u_12, r_51);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm u_52 = NULL;
  u_52 = t;
  if(match_string(t, "--help"))
    {
      t = u_52;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_52;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_52;
        }
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL;
  t = term_m_11;
  v_52 = t;
  t = term_y_5;
  w_52 = t;
  t = term_i_13;
  t = f_4(v_52, w_52, t);
  t = term_j_13;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_o_13;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL;
  p_52 = t;
  t = term_c_10;
  r_52 = t;
  t = term_d_10;
  s_52 = t;
  t = (ATerm) ATempty;
  t_52 = t;
  t = SSL_table_put(r_52, s_52, t_52);
  t = p_52;
  {
    static ATerm r_4 (ATerm t)
    {
      ATerm p_13 = t;
      int q_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_102(t);
          LocalPopChoice(q_13);
        }
      else
        {
          t = p_13;
          {
            ATerm r_13 = t;
            int s_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_4, w_4, x_4, t);
                LocalPopChoice(s_13);
              }
            else
              {
                t = r_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_4, t);
  }
  {
    ATerm t_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_53 = NULL;
        d_53 = t;
        {
          ATerm w_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_58 = NULL;
              t = d_53;
              {
                ATerm y_13 = t;
                int b_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_11;
                    t = get_config_0_0(t);
                    LocalPopChoice(b_14);
                  }
                else
                  {
                    t = y_13;
                    t = fetch_1_0(l_5, t);
                  }
              }
              t = d_53;
              t = default_system_usage_0_0(t);
              t = term_m_9;
              r_58 = t;
              t = SSL_exit(r_58);
              LocalPopChoice(x_13);
            }
          else
            {
              t = w_13;
              {
                ATerm v_58 = NULL;
                t = term_f_12;
                t = get_config_0_0(t);
                t = d_53;
                t = default_system_about_0_0(t);
                t = term_m_9;
                v_58 = t;
                t = SSL_exit(v_58);
              }
            }
        }
        LocalPopChoice(v_13);
      }
    else
      {
        t = t_13;
        {
          ATerm c_14 = t;
          int d_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
              static ATerm m_5 (ATerm t)
              {
                ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL,x_12 = NULL;
                j_53 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_53 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_53);
                h_53 = t;
                t = i_53;
                if(((n_52 != NULL) && (n_52 != t)))
                  _fail(t);
                else
                  n_52 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_53);
                x_12 = t;
                t = SSLsetAnnotations(x_12, h_53);
                return(t);
              }
              t = fetch_1_0(m_5, t);
              t = term_b_6;
              f_53 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_52)), term_e_14);
              g_53 = t;
              t = SSL_printnl(f_53, g_53);
              t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_52)), term_e_14));
              t = default_system_usage_0_0(t);
              t = term_e_6;
              e_53 = t;
              t = SSL_exit(e_53);
              LocalPopChoice(d_14);
            }
          else
            {
              t = c_14;
            }
        }
      }
  }
  o_52 = t;
  t = term_c_10;
  q_52 = t;
  t = SSL_table_destroy(q_52);
  t = o_52;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL;
  t = parse_options_1_0(p_100, t);
  o_53 = t;
  t = term_f_14;
  r_53 = t;
  t = SSL_table_create(r_53);
  t = term_f_14;
  p_53 = t;
  t = term_g_14;
  q_53 = t;
  t = SSL_table_put(p_53, q_53, o_53);
  t = o_53;
  t = r_100(t);
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_100, t);
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
              t = s_100(t);
              t = report_success_0_0(t);
              LocalPopChoice(k_14);
            }
          else
            {
              t = j_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = if_verbose2_1_0(t_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL;
  t = term_l_14;
  s_53 = t;
  t = term_y_5;
  t_53 = t;
  t = term_n_14;
  t = f_4(s_53, t_53, t);
  t = term_o_14;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_p_14;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL;
  u_53 = t;
  t = term_q_10;
  t = get_config_0_0(t);
  v_53 = t;
  t = term_b_6;
  w_53 = t;
  t = (ATerm) ATinsert(ATempty, v_53);
  x_53 = t;
  t = SSL_printnl(w_53, x_53);
  t = u_53;
  return(t);
}
ATerm iowrap_3_0 (ATerm y_99 (ATerm), ATerm z_99 (ATerm), ATerm a_100 (ATerm), ATerm t)
{
  static ATerm n_5 (ATerm t)
  {
    ATerm r_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_99(t);
        LocalPopChoice(t_14);
      }
    else
      {
        t = r_14;
        {
          ATerm u_14 = t;
          int v_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(v_14);
            }
          else
            {
              t = u_14;
              {
                ATerm w_14 = t;
                int x_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(x_14);
                  }
                else
                  {
                    t = w_14;
                    {
                      ATerm y_14 = t;
                      int z_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(q_5, r_5, s_5, t);
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
  static ATerm p_5 (ATerm t)
  {
    ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL;
    z_53 = t;
    {
      ATerm c_15 = t;
      int d_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm v_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((y_53 != NULL) && (y_53 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_53 = ATgetArgument(t, 0);
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
          t = term_e_15;
          y_53 = t;
        }
    }
    t = not_null(y_53);
    t = ReadFromFile_0_0(t);
    a_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_53, a_54);
    t = apply_strategy_1_0(y_99, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(n_5, a_100, o_5, p_5, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,l_13 = NULL;
  h_54 = t;
  if(match_cons(t, sym__2))
    {
      e_54 = ATgetArgument(t, 0);
      f_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_54);
  d_54 = t;
  t = f_54;
  {
    ATerm f_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_54 = NULL,y_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,k_13 = NULL,d_13 = NULL,c_13 = NULL,z_12 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            y_54 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_54);
        y_58 = t;
        t = y_54;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_59 = ATgetFirst((ATermList) t);
            c_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_54);
        a_59 = t;
        t = c_59;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_59 = ATgetFirst((ATermList) t);
            g_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_59);
        e_59 = t;
        t = f_59;
        if(match_cons(t, sym_Strategies_1))
          {
            j_59 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_59);
        i_59 = t;
        t = j_59;
        t = map_1_0(strategy_definition_0_0, t);
        k_59 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, k_59);
        z_12 = t;
        t = SSLsetAnnotations(z_12, i_59);
        l_59 = t;
        t = g_59;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(g_59), l_59);
        c_13 = t;
        t = SSLsetAnnotations(c_13, e_59);
        h_59 = t;
        t = (ATerm) ATinsert(CheckATermList(h_59), b_59);
        d_13 = t;
        t = SSLsetAnnotations(d_13, a_59);
        d_59 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, d_59);
        k_13 = t;
        t = SSLsetAnnotations(k_13, y_58);
        LocalPopChoice(h_15);
      }
    else
      {
        t = f_15;
        t = debug_1_0(x_5, t);
      }
  }
  g_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_54, g_54);
  l_13 = t;
  t = SSLsetAnnotations(l_13, d_54);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_i_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(w_5, _fail, default_usage_0_0, t);
  return(t);
}

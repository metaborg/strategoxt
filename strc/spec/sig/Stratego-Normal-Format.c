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
}
ATerm term_x_14;
ATerm term_u_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_h_13;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_f_12;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_n_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_n_7;
ATerm term_j_7;
ATerm term_f_7;
ATerm term_k_6;
ATerm term_f_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_q_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_v_8);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_8);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym__2, term_d_9, term_u_5);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_a_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_s_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_n_9);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym__2, term_h_11, term_u_5);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym__2, term_p_11, term_u_5);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, term_s_10, term_u_5);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__2, term_n_8, term_h_11);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__2, term_x_13, term_u_5);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm debug_1_0 (ATerm m_85 (ATerm), ATerm t);
ATerm list_1_0 (ATerm b_86 (ATerm), ATerm t);
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
ATerm map_1_0 (ATerm x_85 (ATerm), ATerm t);
static ATerm o_3 (ATerm b_37, ATerm c_37, ATerm t);
static ATerm p_3 (ATerm w_21, ATerm x_21, ATerm t);
static ATerm r_3 (ATerm o_85 (ATerm), ATerm g_140, ATerm c_22, ATerm t);
static ATerm q_3 (ATerm s_21, ATerm t_21, ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm x_102 (ATerm), ATerm t);
static ATerm a_42 (ATerm u_41, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_3 (ATerm y_21, ATerm t);
static ATerm t_3 (ATerm u_35, ATerm v_35, ATerm t);
static ATerm u_3 (ATerm d_37, ATerm e_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm l_43 (ATerm k_42, ATerm t);
static ATerm m_43 (ATerm o_42, ATerm p_42, ATerm q_42, ATerm t);
static ATerm n_43 (ATerm y_42, ATerm z_42, ATerm a_43, ATerm t);
static ATerm v_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm h_86 (ATerm), ATerm t);
static ATerm y_3 (ATerm g_53, ATerm h_53, ATerm t);
ATerm if_verbose2_1_0 (ATerm g_101 (ATerm), ATerm t);
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
static ATerm b_4 (ATerm u_46, ATerm v_46, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_3 (ATerm p_51, ATerm q_51, ATerm o_51, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_3 (ATerm x_39, ATerm y_39, ATerm t);
ATerm foldr_2_0 (ATerm o_92 (ATerm), ATerm p_92 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm f_101 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm need_help_1_0 (ATerm v_103 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm h_65 (ATerm), ATerm i_65 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm y_105 (ATerm), ATerm t);
static ATerm f_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm parse_options_1_0 (ATerm x_105 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm iowrap_3_0 (ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
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
  t = term_u_5;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_v_5;
  v_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_5), b_0), term_w_5);
  l_1 = t;
  t = SSL_printnl(v_0, l_1);
  t = term_a_6;
  t_0 = t;
  t = SSL_exit(t_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm m_85 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,q_1 = NULL,r_1 = NULL;
  n_1 = t;
  t = m_85(t);
  o_1 = t;
  t = term_v_5;
  q_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_1), o_1);
  r_1 = t;
  t = SSL_printnl(q_1, r_1);
  t = n_1;
  return(t);
}
ATerm list_1_0 (ATerm b_86 (ATerm), ATerm t)
{
  t = map_1_0(b_86, t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_b_6;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm d_6 = t;
  int e_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_5 = NULL,y_5 = NULL,c_6 = NULL;
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
                                  c_6 = ATgetArgument(t, 1);
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
                                    t = c_6;
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
                                      c_6 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(x_5);
                                  e_4 = t;
                                  t = SSL_is_string(y_5);
                                  n_4 = t;
                                  t = c_6;
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
      LocalPopChoice(e_6);
    }
  else
    {
      t = d_6;
      t = debug_1_0(f_0, t);
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm u_19 = NULL;
  u_19 = t;
  t = SSL_is_string(u_19);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm z_21 = NULL,b_22 = NULL,e_22 = NULL,f_22 = NULL,i_22 = NULL,j_22 = NULL,m_22 = NULL,n_22 = NULL,r_22 = NULL,s_22 = NULL,j_5 = NULL;
  s_22 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      b_22 = ATgetArgument(t, 0);
      e_22 = ATgetArgument(t, 1);
      f_22 = ATgetArgument(t, 2);
      i_22 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_22);
  z_21 = t;
  t = SSL_is_string(b_22);
  j_22 = t;
  t = e_22;
  t = map_1_0(p_0, t);
  m_22 = t;
  t = f_22;
  t = map_1_0(q_0, t);
  n_22 = t;
  t = i_22;
  t = strategy_expression_0_0(t);
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, j_22, m_22, n_22, r_22);
  j_5 = t;
  t = SSLsetAnnotations(j_5, z_21);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,g_5 = NULL,f_5 = NULL;
  r_26 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_26 = ATgetArgument(t, 0);
      j_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_26);
  h_26 = t;
  t = SSL_is_string(i_26);
  k_26 = t;
  t = j_26;
  if(match_cons(t, sym_FunType_2))
    {
      n_26 = ATgetArgument(t, 0);
      o_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_26);
  l_26 = t;
  t = n_26;
  t = list_1_0(_id, t);
  p_26 = t;
  t = (ATerm) ATmakeAppl(sym_FunType_2, p_26, o_26);
  f_5 = t;
  t = SSLsetAnnotations(f_5, l_26);
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_26, q_26);
  g_5 = t;
  t = SSLsetAnnotations(g_5, h_26);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,z_26 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,g_27 = NULL,i_5 = NULL,h_5 = NULL;
  g_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_26 = ATgetArgument(t, 0);
      z_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_27);
  w_26 = t;
  t = SSL_is_string(x_26);
  b_27 = t;
  t = z_26;
  if(match_cons(t, sym_ConstType_1))
    {
      d_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_26);
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, d_27);
  h_5 = t;
  t = SSLsetAnnotations(h_5, c_27);
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_27, e_27);
  i_5 = t;
  t = SSLsetAnnotations(i_5, w_26);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_f_6;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm g_6 = t;
  int h_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL;
      n_29 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = n_29;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = n_29;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  o_29 = ATgetArgument(t, 0);
                  {
                    ATerm h_7 = NULL,k_7 = NULL,b_3 = NULL;
                    t = SSLgetAnnotations(n_29);
                    h_7 = t;
                    t = o_29;
                    t = strategy_expression_0_0(t);
                    k_7 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, k_7);
                    b_3 = t;
                    t = SSLsetAnnotations(b_3, h_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      o_29 = ATgetArgument(t, 0);
                      {
                        ATerm q_7 = NULL,s_7 = NULL,g_3 = NULL;
                        t = SSLgetAnnotations(n_29);
                        q_7 = t;
                        t = o_29;
                        t = strategy_expression_0_0(t);
                        s_7 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, s_7);
                        g_3 = t;
                        t = SSLsetAnnotations(g_3, q_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          o_29 = ATgetArgument(t, 0);
                          p_29 = ATgetArgument(t, 1);
                          {
                            ATerm z_7 = NULL,c_8 = NULL,d_8 = NULL,n_3 = NULL;
                            t = SSLgetAnnotations(n_29);
                            z_7 = t;
                            t = o_29;
                            t = strategy_expression_0_0(t);
                            c_8 = t;
                            t = p_29;
                            t = strategy_expression_0_0(t);
                            d_8 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, c_8, d_8);
                            n_3 = t;
                            t = SSLsetAnnotations(n_3, z_7);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              o_29 = ATgetArgument(t, 0);
                              p_29 = ATgetArgument(t, 1);
                              {
                                ATerm l_8 = NULL,o_8 = NULL,p_8 = NULL,c_4 = NULL;
                                t = SSLgetAnnotations(n_29);
                                l_8 = t;
                                t = o_29;
                                t = strategy_expression_0_0(t);
                                o_8 = t;
                                t = p_29;
                                t = strategy_expression_0_0(t);
                                p_8 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, o_8, p_8);
                                c_4 = t;
                                t = SSLsetAnnotations(c_4, l_8);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  o_29 = ATgetArgument(t, 0);
                                  p_29 = ATgetArgument(t, 1);
                                  {
                                    ATerm x_8 = NULL,a_9 = NULL,b_9 = NULL,d_4 = NULL;
                                    t = SSLgetAnnotations(n_29);
                                    x_8 = t;
                                    t = o_29;
                                    t = strategy_expression_0_0(t);
                                    a_9 = t;
                                    t = p_29;
                                    t = strategy_expression_0_0(t);
                                    b_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, a_9, b_9);
                                    d_4 = t;
                                    t = SSLsetAnnotations(d_4, x_8);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      o_29 = ATgetArgument(t, 0);
                                      p_29 = ATgetArgument(t, 1);
                                      m_29 = ATgetArgument(t, 2);
                                      {
                                        ATerm k_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,g_4 = NULL;
                                        t = SSLgetAnnotations(n_29);
                                        k_9 = t;
                                        t = o_29;
                                        t = strategy_expression_0_0(t);
                                        o_9 = t;
                                        t = p_29;
                                        t = strategy_expression_0_0(t);
                                        p_9 = t;
                                        t = m_29;
                                        t = strategy_expression_0_0(t);
                                        q_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, o_9, p_9, q_9);
                                        g_4 = t;
                                        t = SSLsetAnnotations(g_4, k_9);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          o_29 = ATgetArgument(t, 0);
                                          p_29 = ATgetArgument(t, 1);
                                          {
                                            ATerm e_10 = NULL,i_10 = NULL,j_10 = NULL,h_4 = NULL;
                                            t = SSLgetAnnotations(n_29);
                                            e_10 = t;
                                            t = o_29;
                                            t = strategy_expression_0_0(t);
                                            i_10 = t;
                                            t = p_29;
                                            t = strategy_expression_0_0(t);
                                            j_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, i_10, j_10);
                                            h_4 = t;
                                            t = SSLsetAnnotations(h_4, e_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              o_29 = ATgetArgument(t, 0);
                                              p_29 = ATgetArgument(t, 1);
                                              {
                                                ATerm u_10 = NULL,y_10 = NULL,z_10 = NULL,i_4 = NULL;
                                                t = SSLgetAnnotations(n_29);
                                                u_10 = t;
                                                t = o_29;
                                                t = strategy_expression_0_0(t);
                                                y_10 = t;
                                                t = p_29;
                                                t = strategy_expression_0_0(t);
                                                z_10 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, y_10, z_10);
                                                i_4 = t;
                                                t = SSLsetAnnotations(i_4, u_10);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  o_29 = ATgetArgument(t, 0);
                                                  p_29 = ATgetArgument(t, 1);
                                                  m_29 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm k_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,m_4 = NULL,l_4 = NULL;
                                                    t = SSLgetAnnotations(n_29);
                                                    k_11 = t;
                                                    t = o_29;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        w_11 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(o_29);
                                                    v_11 = t;
                                                    t = w_11;
                                                    {
                                                      ATerm i_6 = t;
                                                      int j_6 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = SSL_is_string(w_11);
                                                          LocalPopChoice(j_6);
                                                        }
                                                      else
                                                        {
                                                          t = i_6;
                                                          {
                                                            ATerm k_12 = NULL,l_12 = NULL,x_12 = NULL,b_13 = NULL,c_13 = NULL,k_4 = NULL;
                                                            if(match_cons(t, sym_Mod_2))
                                                              {
                                                                k_12 = ATgetArgument(t, 0);
                                                                l_12 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSLgetAnnotations(w_11);
                                                            x_12 = t;
                                                            t = SSL_is_string(k_12);
                                                            b_13 = t;
                                                            t = SSL_is_string(l_12);
                                                            c_13 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Mod_2, b_13, c_13);
                                                            k_4 = t;
                                                            t = SSLsetAnnotations(k_4, x_12);
                                                          }
                                                        }
                                                    }
                                                    x_11 = t;
                                                    t = (ATerm) ATmakeAppl(sym_SVar_1, x_11);
                                                    l_4 = t;
                                                    t = SSLsetAnnotations(l_4, v_11);
                                                    y_11 = t;
                                                    t = p_29;
                                                    t = map_1_0(strategy_expression_0_0, t);
                                                    t_11 = t;
                                                    t = m_29;
                                                    t = map_1_0(term_expression_0_0, t);
                                                    u_11 = t;
                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, y_11, t_11, u_11);
                                                    m_4 = t;
                                                    t = SSLsetAnnotations(m_4, k_11);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      o_29 = ATgetArgument(t, 0);
                                                      p_29 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm k_13 = NULL,q_13 = NULL,r_13 = NULL,o_4 = NULL;
                                                        t = SSLgetAnnotations(n_29);
                                                        k_13 = t;
                                                        t = SSL_is_string(o_29);
                                                        q_13 = t;
                                                        t = p_29;
                                                        t = strategy_expression_0_0(t);
                                                        r_13 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, q_13, r_13);
                                                        o_4 = t;
                                                        t = SSLsetAnnotations(o_4, k_13);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          o_29 = ATgetArgument(t, 0);
                                                          p_29 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm d_14 = NULL,h_14 = NULL,j_14 = NULL,q_4 = NULL;
                                                            t = SSLgetAnnotations(n_29);
                                                            d_14 = t;
                                                            t = SSL_is_int(o_29);
                                                            h_14 = t;
                                                            t = p_29;
                                                            t = strategy_expression_0_0(t);
                                                            j_14 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, h_14, j_14);
                                                            q_4 = t;
                                                            t = SSLsetAnnotations(q_4, d_14);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              o_29 = ATgetArgument(t, 0);
                                                              p_29 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm z_14 = NULL,c_15 = NULL,d_15 = NULL,t_4 = NULL;
                                                                t = SSLgetAnnotations(n_29);
                                                                z_14 = t;
                                                                t = SSL_is_string(o_29);
                                                                c_15 = t;
                                                                t = p_29;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                d_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, c_15, d_15);
                                                                t_4 = t;
                                                                t = SSLsetAnnotations(t_4, z_14);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  o_29 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm t_15 = NULL,x_15 = NULL,v_4 = NULL;
                                                                    t = SSLgetAnnotations(n_29);
                                                                    t_15 = t;
                                                                    t = o_29;
                                                                    t = strategy_expression_0_0(t);
                                                                    x_15 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, x_15);
                                                                    v_4 = t;
                                                                    t = SSLsetAnnotations(v_4, t_15);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      o_29 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm i_16 = NULL,k_16 = NULL,x_4 = NULL;
                                                                        t = SSLgetAnnotations(n_29);
                                                                        i_16 = t;
                                                                        t = o_29;
                                                                        t = strategy_expression_0_0(t);
                                                                        k_16 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, k_16);
                                                                        x_4 = t;
                                                                        t = SSLsetAnnotations(x_4, i_16);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          o_29 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm t_16 = NULL,v_16 = NULL,y_4 = NULL;
                                                                            t = SSLgetAnnotations(n_29);
                                                                            t_16 = t;
                                                                            t = o_29;
                                                                            t = strategy_expression_0_0(t);
                                                                            v_16 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, v_16);
                                                                            y_4 = t;
                                                                            t = SSLsetAnnotations(y_4, t_16);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              o_29 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm f_17 = NULL,h_17 = NULL,z_4 = NULL;
                                                                                t = SSLgetAnnotations(n_29);
                                                                                f_17 = t;
                                                                                t = o_29;
                                                                                t = strategy_expression_0_0(t);
                                                                                h_17 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, h_17);
                                                                                z_4 = t;
                                                                                t = SSLsetAnnotations(z_4, f_17);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  o_29 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm v_17 = NULL,x_17 = NULL,a_5 = NULL;
                                                                                    t = SSLgetAnnotations(n_29);
                                                                                    v_17 = t;
                                                                                    t = o_29;
                                                                                    t = term_expression_0_0(t);
                                                                                    x_17 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, x_17);
                                                                                    a_5 = t;
                                                                                    t = SSLsetAnnotations(a_5, v_17);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      o_29 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm m_18 = NULL,r_18 = NULL,b_5 = NULL;
                                                                                        t = SSLgetAnnotations(n_29);
                                                                                        m_18 = t;
                                                                                        t = o_29;
                                                                                        t = term_expression_0_0(t);
                                                                                        r_18 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, r_18);
                                                                                        b_5 = t;
                                                                                        t = SSLsetAnnotations(b_5, m_18);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          o_29 = ATgetArgument(t, 0);
                                                                                          p_29 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm j_19 = NULL,q_19 = NULL,r_19 = NULL,c_5 = NULL;
                                                                                            t = SSLgetAnnotations(n_29);
                                                                                            j_19 = t;
                                                                                            t = o_29;
                                                                                            t = map_1_0(h_0, t);
                                                                                            q_19 = t;
                                                                                            t = p_29;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            r_19 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, q_19, r_19);
                                                                                            c_5 = t;
                                                                                            t = SSLsetAnnotations(c_5, j_19);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              o_29 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm c_20 = NULL,g_20 = NULL,d_5 = NULL;
                                                                                                t = SSLgetAnnotations(n_29);
                                                                                                c_20 = t;
                                                                                                t = o_29;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                g_20 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, g_20);
                                                                                                d_5 = t;
                                                                                                t = SSLsetAnnotations(d_5, c_20);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  o_29 = ATgetArgument(t, 0);
                                                                                                  p_29 = ATgetArgument(t, 1);
                                                                                                  m_29 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm u_20 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,e_5 = NULL;
                                                                                                    t = SSLgetAnnotations(n_29);
                                                                                                    u_20 = t;
                                                                                                    t = SSL_is_string(o_29);
                                                                                                    c_21 = t;
                                                                                                    t = p_29;
                                                                                                    t = map_1_0(strategy_expression_0_0, t);
                                                                                                    d_21 = t;
                                                                                                    t = m_29;
                                                                                                    t = map_1_0(term_expression_0_0, t);
                                                                                                    e_21 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, c_21, d_21, e_21);
                                                                                                    e_5 = t;
                                                                                                    t = SSLsetAnnotations(e_5, u_20);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm o_21 = NULL,r_21 = NULL,u_21 = NULL,k_5 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      o_29 = ATgetArgument(t, 0);
                                                                                                      p_29 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(n_29);
                                                                                                  o_21 = t;
                                                                                                  t = o_29;
                                                                                                  t = map_1_0(m_0, t);
                                                                                                  r_21 = t;
                                                                                                  t = p_29;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  u_21 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, r_21, u_21);
                                                                                                  k_5 = t;
                                                                                                  t = SSLsetAnnotations(k_5, o_21);
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
      LocalPopChoice(h_6);
    }
  else
    {
      t = g_6;
      t = debug_1_0(r_0, t);
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,b_31 = NULL,c_31 = NULL,t_6 = NULL;
  c_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_30 = ATgetArgument(t, 0);
      y_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_31);
  w_30 = t;
  t = SSL_is_string(x_30);
  b_31 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_31, y_30);
  t_6 = t;
  t = SSLsetAnnotations(t_6, w_30);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm d_31 = NULL,f_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,u_6 = NULL;
  o_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      f_31 = ATgetArgument(t, 0);
      m_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_31);
  d_31 = t;
  t = SSL_is_string(f_31);
  n_31 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_31, m_31);
  u_6 = t;
  t = SSLsetAnnotations(u_6, d_31);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL,p_34 = NULL,q_34 = NULL,x_6 = NULL;
  q_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      g_34 = ATgetArgument(t, 0);
      h_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_34);
  f_34 = t;
  t = SSL_is_string(g_34);
  p_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_34, h_34);
  x_6 = t;
  t = SSLsetAnnotations(x_6, f_34);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm s_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,a_35 = NULL,y_6 = NULL;
  a_35 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      w_34 = ATgetArgument(t, 0);
      x_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_35);
  s_34 = t;
  t = SSL_is_string(w_34);
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_34, x_34);
  y_6 = t;
  t = SSLsetAnnotations(y_6, s_34);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm f_45 = NULL,k_45 = NULL,u_45 = NULL,e_46 = NULL,i_46 = NULL,b_7 = NULL;
  i_46 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      k_45 = ATgetArgument(t, 0);
      u_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_46);
  f_45 = t;
  t = SSL_is_string(k_45);
  e_46 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_46, u_45);
  b_7 = t;
  t = SSLsetAnnotations(b_7, f_45);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,f_47 = NULL,p_47 = NULL,b_48 = NULL,c_7 = NULL;
  b_48 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      q_46 = ATgetArgument(t, 0);
      f_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_48);
  p_46 = t;
  t = SSL_is_string(q_46);
  p_47 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_47, f_47);
  c_7 = t;
  t = SSLsetAnnotations(c_7, p_46);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_k_6;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm l_6 = t;
  int m_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
      k_38 = t;
      if(match_cons(t, sym_SDefT_4))
        {
          l_38 = ATgetArgument(t, 0);
          m_38 = ATgetArgument(t, 1);
          n_38 = ATgetArgument(t, 2);
          j_38 = ATgetArgument(t, 3);
          {
            ATerm v_28 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,v_6 = NULL;
            t = SSLgetAnnotations(k_38);
            v_28 = t;
            t = l_38;
            {
              ATerm n_6 = t;
              int o_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_is_string(l_38);
                  LocalPopChoice(o_6);
                }
              else
                {
                  t = n_6;
                  {
                    ATerm u_30 = NULL,v_30 = NULL,x_31 = NULL,a_32 = NULL,b_32 = NULL,s_6 = NULL;
                    if(match_cons(t, sym_Mod_2))
                      {
                        u_30 = ATgetArgument(t, 0);
                        v_30 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(l_38);
                    x_31 = t;
                    t = SSL_is_string(u_30);
                    a_32 = t;
                    t = SSL_is_string(v_30);
                    b_32 = t;
                    t = (ATerm) ATmakeAppl(sym_Mod_2, a_32, b_32);
                    s_6 = t;
                    t = SSLsetAnnotations(s_6, x_31);
                  }
                }
            }
            z_29 = t;
            t = m_38;
            t = map_1_0(s_0, t);
            a_30 = t;
            t = n_38;
            t = map_1_0(u_0, t);
            b_30 = t;
            t = j_38;
            t = strategy_expression_0_0(t);
            c_30 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, z_29, a_30, b_30, c_30);
            v_6 = t;
            t = SSLsetAnnotations(v_6, v_28);
          }
        }
      else
        {
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              l_38 = ATgetArgument(t, 0);
              m_38 = ATgetArgument(t, 1);
              n_38 = ATgetArgument(t, 2);
              j_38 = ATgetArgument(t, 3);
              {
                ATerm n_32 = NULL,u_32 = NULL,d_33 = NULL,e_33 = NULL,g_33 = NULL,z_6 = NULL;
                t = SSLgetAnnotations(k_38);
                n_32 = t;
                t = l_38;
                {
                  ATerm p_6 = t;
                  int q_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_is_string(l_38);
                      LocalPopChoice(q_6);
                    }
                  else
                    {
                      t = p_6;
                      {
                        ATerm d_34 = NULL,e_34 = NULL,p_35 = NULL,x_35 = NULL,y_35 = NULL,w_6 = NULL;
                        if(match_cons(t, sym_Mod_2))
                          {
                            d_34 = ATgetArgument(t, 0);
                            e_34 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(l_38);
                        p_35 = t;
                        t = SSL_is_string(d_34);
                        x_35 = t;
                        t = SSL_is_string(e_34);
                        y_35 = t;
                        t = (ATerm) ATmakeAppl(sym_Mod_2, x_35, y_35);
                        w_6 = t;
                        t = SSLsetAnnotations(w_6, p_35);
                      }
                    }
                }
                u_32 = t;
                t = m_38;
                t = map_1_0(x_0, t);
                d_33 = t;
                t = n_38;
                t = map_1_0(z_0, t);
                e_33 = t;
                t = j_38;
                t = strategy_expression_0_0(t);
                g_33 = t;
                t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, u_32, d_33, e_33, g_33);
                z_6 = t;
                t = SSLsetAnnotations(z_6, n_32);
              }
            }
          else
            {
              ATerm v_38 = NULL,d_41 = NULL,n_41 = NULL,o_41 = NULL,d_7 = NULL;
              if(match_cons(t, sym_ExtSDef_3))
                {
                  l_38 = ATgetArgument(t, 0);
                  m_38 = ATgetArgument(t, 1);
                  n_38 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_38);
              v_38 = t;
              t = l_38;
              {
                ATerm r_6 = t;
                int e_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_is_string(l_38);
                    LocalPopChoice(e_7);
                  }
                else
                  {
                    t = r_6;
                    {
                      ATerm b_44 = NULL,y_44 = NULL,g_49 = NULL,j_50 = NULL,x_50 = NULL,a_7 = NULL;
                      if(match_cons(t, sym_Mod_2))
                        {
                          b_44 = ATgetArgument(t, 0);
                          y_44 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(l_38);
                      g_49 = t;
                      t = SSL_is_string(b_44);
                      j_50 = t;
                      t = SSL_is_string(y_44);
                      x_50 = t;
                      t = (ATerm) ATmakeAppl(sym_Mod_2, j_50, x_50);
                      a_7 = t;
                      t = SSLsetAnnotations(a_7, g_49);
                    }
                  }
              }
              d_41 = t;
              t = m_38;
              t = map_1_0(a_1, t);
              n_41 = t;
              t = n_38;
              t = map_1_0(b_1, t);
              o_41 = t;
              t = (ATerm) ATmakeAppl(sym_ExtSDef_3, d_41, n_41, o_41);
              d_7 = t;
              t = SSLsetAnnotations(d_7, v_38);
            }
        }
      LocalPopChoice(m_6);
    }
  else
    {
      t = l_6;
      t = debug_1_0(c_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  static ATerm i_39 (ATerm t)
  {
    ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
    f_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_39;
      }
    else
      {
        ATerm k_51 = NULL,n_51 = NULL,i_52 = NULL,c_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_39 = ATgetFirst((ATermList) t);
            h_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_39);
        k_51 = t;
        t = g_39;
        t = x_85(t);
        n_51 = t;
        t = h_39;
        t = i_39(t);
        i_52 = t;
        t = (ATerm) ATinsert(CheckATermList(i_52), n_51);
        c_11 = t;
        t = SSLsetAnnotations(c_11, k_51);
      }
    return(t);
  }
  t = i_39(t);
  return(t);
}
static ATerm o_3 (ATerm b_37, ATerm c_37, ATerm t)
{
  ATerm k_39 = NULL;
  t = SSL_fputc(b_37, c_37);
  k_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_39);
  return(t);
}
static ATerm p_3 (ATerm w_21, ATerm x_21, ATerm t)
{
  ATerm l_39 = NULL;
  t = SSL_write_term_to_stream_text(w_21, x_21);
  l_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_39);
  return(t);
}
static ATerm r_3 (ATerm o_85 (ATerm), ATerm g_140, ATerm c_22, ATerm t)
{
  ATerm m_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_140, term_f_7);
  t = v_3(t);
  m_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_39, c_22);
  t = o_85(t);
  t = fclose_0_0(t);
  t = c_22;
  return(t);
}
static ATerm q_3 (ATerm s_21, ATerm t_21, ATerm t)
{
  ATerm n_39 = NULL;
  t = SSL_write_term_to_stream_baf(s_21, t_21);
  n_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_39);
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
  ATerm p_55 = NULL,q_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_7 = ATgetArgument(t, 0);
      if(match_cons(g_7, sym_Stream_1))
        {
          p_55 = ATgetArgument(g_7, 0);
        }
      else
        _fail(t);
      q_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_3(p_55, q_55, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_7 = ATgetArgument(t, 0);
      if(match_cons(i_7, sym_Stream_1))
        {
          e_56 = ATgetArgument(i_7, 0);
        }
      else
        _fail(t);
      f_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3(e_56, f_56, t);
  b_56 = t;
  t = term_j_7;
  c_56 = t;
  t = b_56;
  if(match_cons(t, sym_Stream_1))
    {
      d_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_7, b_56);
  t = o_3(c_56, d_56, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_41 = NULL,f_41 = NULL,m_11 = NULL,l_11 = NULL;
  s_39 = t;
  if(match_cons(t, sym__2))
    {
      b_40 = ATgetArgument(t, 0);
      c_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_39);
  a_40 = t;
  t = b_40;
  {
    ATerm l_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm d_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((r_39 != NULL) && (r_39 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(d_1, t);
        LocalPopChoice(m_7);
      }
    else
      {
        t = l_7;
        t = term_n_7;
        r_39 = t;
      }
  }
  d_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_40, c_40);
  l_11 = t;
  t = SSLsetAnnotations(l_11, a_40);
  t = s_39;
  if(match_cons(t, sym__2))
    {
      u_39 = ATgetArgument(t, 0);
      v_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_39);
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_39, (ATerm) ATmakeAppl(sym__2, not_null(r_39), v_39));
  m_11 = t;
  t = SSLsetAnnotations(m_11, t_39);
  z_39 = t;
  if(match_cons(t, sym__2))
    {
      e_41 = ATgetArgument(t, 0);
      f_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,n_11 = NULL;
        t = SSLgetAnnotations(z_39);
        i_55 = t;
        t = e_41;
        t = fetch_1_0(f_1, t);
        l_55 = t;
        t = f_41;
        if(match_cons(t, sym__2))
          {
            n_55 = ATgetArgument(t, 0);
            o_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_3(h_1, n_55, o_55, t);
        m_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_55, m_55);
        n_11 = t;
        t = SSLsetAnnotations(n_11, i_55);
        LocalPopChoice(p_7);
      }
    else
      {
        t = o_7;
        {
          ATerm v_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,o_11 = NULL;
          t = SSLgetAnnotations(z_39);
          v_55 = t;
          t = f_41;
          if(match_cons(t, sym__2))
            {
              z_55 = ATgetArgument(t, 0);
              a_56 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_3(i_1, z_55, a_56, t);
          y_55 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_41, y_55);
          o_11 = t;
          t = SSLsetAnnotations(o_11, v_55);
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
ATerm apply_strategy_1_0 (ATerm x_102 (ATerm), ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL;
  m_41 = t;
  t = dtime_0_0(t);
  t = m_41;
  t = x_102(t);
  l_41 = t;
  t = dtime_0_0(t);
  i_41 = t;
  t = l_41;
  if(match_cons(t, sym__2))
    {
      j_41 = ATgetArgument(t, 0);
      k_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_41), (ATerm) ATmakeAppl(sym_Runtime_1, i_41)), k_41);
  return(t);
}
static ATerm a_42 (ATerm u_41, ATerm t)
{
  t = SSL_fclose(u_41);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL;
  y_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_41 = ATgetArgument(t, 0);
      {
        ATerm r_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_41);
            LocalPopChoice(t_7);
          }
        else
          {
            t = r_7;
            t = a_42(y_41, t);
          }
      }
    }
  else
    {
      t = a_42(y_41, t);
    }
  return(t);
}
static ATerm s_3 (ATerm y_21, ATerm t)
{
  t = SSL_read_term_from_stream(y_21);
  return(t);
}
static ATerm t_3 (ATerm u_35, ATerm v_35, ATerm t)
{
  t = SSL_strcat(u_35, v_35);
  return(t);
}
static ATerm u_3 (ATerm d_37, ATerm e_37, ATerm t)
{
  ATerm b_42 = NULL;
  t = SSL_fopen(d_37, e_37);
  b_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_42);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_42 = NULL;
  t = SSL_stdin_stream();
  c_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_42);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_42 = NULL;
  t = SSL_stdout_stream();
  d_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_42);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_42 = NULL;
  t = SSL_stderr_stream();
  e_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_42);
  return(t);
}
static ATerm l_43 (ATerm k_42, ATerm t)
{
  ATerm l_42 = NULL;
  t = SSL_explode_term(k_42);
  if(match_cons(t, sym__2))
    {
      ATerm u_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_7 = ATgetArgument(t, 1);
        if(((ATgetType(v_7) == AT_LIST) && !(ATisEmpty(v_7))))
          {
            l_42 = ATgetFirst((ATermList) v_7);
            {
              ATerm w_7 = (ATerm) ATgetNext((ATermList) v_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_42;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_42;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_42;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_42;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_43 (ATerm o_42, ATerm p_42, ATerm q_42, ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL,w_42 = NULL,d_12 = NULL;
  t = SSLgetAnnotations(q_42);
  t_42 = t;
  t = o_42;
  if(match_cons(t, sym_Path_1))
    {
      w_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_42, p_42);
  d_12 = t;
  t = SSLsetAnnotations(d_12, t_42);
  if(match_cons(t, sym__2))
    {
      r_42 = ATgetArgument(t, 0);
      s_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(r_42, s_42, t);
  return(t);
}
static ATerm n_43 (ATerm y_42, ATerm z_42, ATerm a_43, ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,g_43 = NULL,e_12 = NULL;
  t = SSLgetAnnotations(a_43);
  d_43 = t;
  t = SSL_is_string(y_42);
  g_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_43, z_42);
  e_12 = t;
  t = SSLsetAnnotations(e_12, d_43);
  if(match_cons(t, sym__2))
    {
      b_43 = ATgetArgument(t, 0);
      c_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(b_43, c_43, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL;
  i_43 = t;
  if(match_cons(t, sym__2))
    {
      j_43 = ATgetArgument(t, 0);
      k_43 = ATgetArgument(t, 1);
      {
        ATerm x_7 = t;
        int y_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_43(i_43, t);
            LocalPopChoice(y_7);
          }
        else
          {
            t = x_7;
            {
              ATerm a_8 = t;
              int b_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_43(j_43, k_43, i_43, t);
                  LocalPopChoice(b_8);
                }
              else
                {
                  t = a_8;
                  t = n_43(j_43, k_43, i_43, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_43(i_43, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL,w_43 = NULL;
  w_43 = t;
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_43, term_g_8);
        t = v_3(t);
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        {
          ATerm q_56 = NULL,r_56 = NULL;
          t = term_h_8;
          r_56 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_8, w_43);
          t = t_3(r_56, w_43, t);
          q_56 = t;
          t = SSL_perror(q_56);
          _fail(t);
        }
      }
  }
  q_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_3(r_43, t);
  p_43 = t;
  t = q_43;
  t = fclose_0_0(t);
  t = p_43;
  return(t);
}
ATerm fetch_1_0 (ATerm h_86 (ATerm), ATerm t)
{
  static ATerm v_44 (ATerm t)
  {
    ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
    s_44 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_44 = ATgetFirst((ATermList) t);
        u_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_8 = t;
      int j_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_56 = NULL,z_56 = NULL,h_12 = NULL;
          t = SSLgetAnnotations(s_44);
          w_56 = t;
          t = t_44;
          t = h_86(t);
          z_56 = t;
          t = (ATerm) ATinsert(CheckATermList(u_44), z_56);
          h_12 = t;
          t = SSLsetAnnotations(h_12, w_56);
          LocalPopChoice(j_8);
        }
      else
        {
          t = i_8;
          {
            ATerm h_57 = NULL,k_57 = NULL,i_12 = NULL;
            t = SSLgetAnnotations(s_44);
            h_57 = t;
            t = u_44;
            t = v_44(t);
            k_57 = t;
            t = (ATerm) ATinsert(CheckATermList(k_57), t_44);
            i_12 = t;
            t = SSLsetAnnotations(i_12, h_57);
          }
        }
    }
    return(t);
  }
  t = v_44(t);
  return(t);
}
static ATerm y_3 (ATerm g_53, ATerm h_53, ATerm t)
{
  t = SSL_table_get(g_53, h_53);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_101 (ATerm), ATerm t)
{
  ATerm z_44 = NULL;
  z_44 = t;
  {
    ATerm k_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL;
        t = term_n_8;
        c_45 = t;
        t = term_q_8;
        d_45 = t;
        t = term_r_8;
        t = y_3(c_45, d_45, t);
        b_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_45, term_s_8);
        t = geq_0_0(t);
        t = z_44;
        t = g_101(t);
        LocalPopChoice(m_8);
      }
    else
      {
        t = k_8;
        t = z_44;
      }
  }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm g_45 = NULL;
  g_45 = t;
  if(match_string(t, "-k"))
    {
      t = g_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_45;
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL;
  h_45 = t;
  t = SSL_string_to_int(h_45);
  i_45 = t;
  t = term_t_8;
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_8, i_45);
  t = b_4(j_45, i_45, t);
  t = h_45;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_u_8;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_1, k_1, m_1, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm l_45 = NULL;
  l_45 = t;
  if(match_string(t, "-S"))
    {
      t = l_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_45;
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL;
  t = term_q_8;
  m_45 = t;
  t = term_v_8;
  n_45 = t;
  t = term_w_8;
  t = b_4(m_45, n_45, t);
  t = term_y_8;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_z_8;
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
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL;
  o_45 = t;
  t = SSL_string_to_int(o_45);
  p_45 = t;
  t = term_q_8;
  q_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_8, p_45);
  t = b_4(q_45, p_45, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_45);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_c_9;
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
  ATerm r_45 = NULL,s_45 = NULL;
  t = term_d_9;
  r_45 = t;
  t = term_u_5;
  s_45 = t;
  t = term_e_9;
  t = b_4(r_45, s_45, t);
  t = term_f_9;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_g_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_1, u_1, v_1, t);
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      {
        ATerm j_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_1, x_1, y_1, t);
            LocalPopChoice(l_9);
          }
        else
          {
            t = j_9;
            t = Option_3_0(a_2, g_2, h_2, t);
          }
      }
    }
  return(t);
}
static ATerm b_4 (ATerm u_46, ATerm v_46, ATerm t)
{
  ATerm t_45 = NULL;
  t = term_n_8;
  t_45 = t;
  t = SSL_table_put(t_45, u_46, v_46);
  t = (ATerm) ATmakeAppl(sym__3, term_n_8, u_46, v_46);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
      t = term_u_5;
      t = e_0(t);
      y_45 = t;
      t = term_m_9;
      z_45 = t;
      t = term_n_9;
      a_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_9, term_n_9, y_45);
      t = z_3(z_45, a_46, y_45, t);
      _fail(t);
    }
  else
    {
      ATerm d_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_45 = ATgetFirst((ATermList) t);
          x_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_45;
      t = c_0(t);
      t = term_u_5;
      t = d_0(t);
      d_46 = t;
      t = (ATerm) ATinsert(CheckATermList(x_45), d_46);
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm f_46 = NULL;
  f_46 = t;
  if(match_string(t, "-o"))
    {
      t = f_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_46;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL;
  g_46 = t;
  t = term_r_9;
  h_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_9, g_46);
  t = b_4(h_46, g_46, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_46);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_2, j_2, l_2, t);
  return(t);
}
static ATerm z_3 (ATerm p_51, ATerm q_51, ATerm o_51, ATerm t)
{
  ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL;
  j_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_51, q_51);
  {
    ATerm t_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_9 = ATgetArgument(t, 0);
            ATerm w_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_51, q_51);
        t = y_3(p_51, q_51, t);
        LocalPopChoice(u_9);
      }
    else
      {
        t = t_9;
        t = (ATerm) ATempty;
      }
  }
  k_46 = t;
  t = (ATerm) ATinsert(CheckATermList(k_46), o_51);
  l_46 = t;
  t = SSL_table_put(p_51, q_51, l_46);
  t = j_46;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL,w_46 = NULL,x_46 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL;
      t = term_u_5;
      t = n_0(t);
      y_46 = t;
      t = term_m_9;
      z_46 = t;
      t = term_n_9;
      a_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_9, term_n_9, y_46);
      t = z_3(z_46, a_47, y_46, t);
      _fail(t);
    }
  else
    {
      ATerm e_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_46 = ATgetFirst((ATermList) t);
          t_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_46;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_46 = ATgetFirst((ATermList) t);
          x_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_46;
      t = k_0(t);
      t = w_46;
      t = l_0(t);
      e_47 = t;
      t = (ATerm) ATinsert(CheckATermList(x_46), e_47);
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm g_47 = NULL;
  g_47 = t;
  if(match_string(t, "-i"))
    {
      t = g_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_47;
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL;
  h_47 = t;
  t = term_x_9;
  i_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_9, h_47);
  t = b_4(i_47, h_47, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_47);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_y_9;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_2, q_2, r_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_5;
  t = whoami_0_0(t);
  j_47 = t;
  t = term_v_5;
  l_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_9), j_47);
  m_47 = t;
  t = SSL_printnl(l_47, m_47);
  t = term_a_6;
  k_47 = t;
  t = SSL_exit(k_47);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL;
  t = term_n_8;
  n_47 = t;
  t = term_a_10;
  o_47 = t;
  t = term_b_10;
  t = y_3(n_47, o_47, t);
  return(t);
}
static ATerm w_3 (ATerm x_39, ATerm y_39, ATerm t)
{
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_39, y_39);
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      t = SSL_addr(x_39, y_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_92 (ATerm), ATerm p_92 (ATerm), ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL;
  q_47 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_47;
      t = o_92(t);
    }
  else
    {
      ATerm v_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_47 = ATgetFirst((ATermList) t);
          s_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_47;
      t = foldr_2_0(o_92, p_92, t);
      v_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_47, v_47);
      t = p_92(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_v_8;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL;
  if(match_cons(t, sym__2))
    {
      t_57 = ATgetArgument(t, 0);
      u_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3(t_57, u_57, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_47 = NULL,p_57 = NULL,q_57 = NULL;
  t = times_0_0(t);
  q_57 = t;
  t = SSL_explode_term(q_57);
  if(match_cons(t, sym__2))
    {
      ATerm f_10 = ATgetArgument(t, 0);
      p_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_57;
  t = foldr_2_0(s_2, t_2, t);
  y_47 = t;
  t = SSL_TicksToSeconds(y_47);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL;
  n_48 = t;
  if(match_cons(t, sym__2))
    {
      o_48 = ATgetArgument(t, 0);
      p_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_48;
        if((o_48 != t))
          {
            _fail(t);
          }
        t = n_48;
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
        t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
        {
          ATerm k_10 = t;
          int l_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_48, p_48);
              LocalPopChoice(l_10);
            }
          else
            {
              t = k_10;
              t = SSL_gtr(o_48, p_48);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_101 (ATerm), ATerm t)
{
  ATerm t_48 = NULL;
  t_48 = t;
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL;
        t = term_n_8;
        w_48 = t;
        t = term_q_8;
        x_48 = t;
        t = term_r_8;
        t = y_3(w_48, x_48, t);
        v_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_48, term_a_6);
        t = geq_0_0(t);
        t = t_48;
        t = f_101(t);
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        t = t_48;
      }
  }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,c_49 = NULL,d_49 = NULL;
  t = run_time_0_0(t);
  z_48 = t;
  t = term_u_5;
  t = whoami_0_0(t);
  a_49 = t;
  t = term_v_5;
  c_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_10), z_48), term_o_10), a_49);
  d_49 = t;
  t = SSL_printnl(c_49, d_49);
  t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_10), z_48), term_o_10), a_49));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_8;
  e_49 = t;
  t = SSL_exit(e_49);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL;
  p_49 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_49;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_49 = ATgetArgument(t, 0);
          {
            ATerm g_58 = NULL,o_12 = NULL;
            t = SSLgetAnnotations(p_49);
            g_58 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_49);
            o_12 = t;
            t = SSLsetAnnotations(o_12, g_58);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_49;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_103 (ATerm), ATerm t)
{
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_49 = NULL,i_49 = NULL;
      t = term_n_8;
      h_49 = t;
      t = term_s_10;
      i_49 = t;
      t = term_t_10;
      t = y_3(h_49, i_49, t);
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      t = fetch_1_0(w_2, t);
    }
  t = v_103(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_49 = ATgetFirst((ATermList) t);
      t_49 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_49 = NULL,y_49 = NULL;
        static ATerm x_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_49)), not_null(y_49));
          return(t);
        }
        t = t_49;
        t = i_0(t);
        if(((x_49 != NULL) && (x_49 != t)))
          _fail(t);
        else
          x_49 = t;
        t = s_49;
        t = g_0(t);
        if(((y_49 != NULL) && (y_49 != t)))
          _fail(t);
        else
          y_49 = t;
        t = t_49;
        t = reverse_acc_2_0(g_0, x_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_5;
      t = i_0(t);
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,r_12 = NULL;
  g_50 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_50);
  e_50 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_50);
  r_12 = t;
  t = SSLsetAnnotations(r_12, e_50);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm i_50 = NULL;
  i_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_50), term_v_10);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL;
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_50 = NULL,d_50 = NULL;
      t = term_n_8;
      c_50 = t;
      t = term_a_10;
      d_50 = t;
      t = term_b_10;
      t = y_3(c_50, d_50, t);
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
      t = fetch_1_0(y_2, t);
    }
  t = term_a_11;
  t = echo_0_0(t);
  t = term_m_9;
  a_50 = t;
  t = term_n_9;
  b_50 = t;
  t = term_b_11;
  t = y_3(a_50, b_50, t);
  t = reverse_acc_2_0(_id, z_2, t);
  t = map_1_0(a_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL;
  k_50 = t;
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_50;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_11 = ATgetFirst((ATermList) t);
                ATerm g_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_50;
          }
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
        t = (ATerm) ATinsert(ATempty, k_50);
      }
  }
  l_50 = t;
  t = term_n_7;
  m_50 = t;
  t = SSL_printnl(m_50, l_50);
  t = k_50;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm q_50 = NULL,r_50 = NULL;
  t = term_n_8;
  q_50 = t;
  t = term_a_10;
  r_50 = t;
  t = term_b_10;
  t = y_3(q_50, r_50, t);
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
  ATerm s_50 = NULL,t_50 = NULL;
  t = term_h_11;
  s_50 = t;
  t = term_u_5;
  t_50 = t;
  t = term_i_11;
  t = b_4(s_50, t_50, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_j_11;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,c_51 = NULL;
  t = term_h_11;
  w_50 = t;
  t = term_u_5;
  c_51 = t;
  t = term_i_11;
  t = b_4(w_50, c_51, t);
  t = term_p_11;
  u_50 = t;
  t = term_u_5;
  v_50 = t;
  t = term_q_11;
  t = b_4(u_50, v_50, t);
  t = term_r_11;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_3, j_3, k_3, t);
      LocalPopChoice(a_12);
    }
  else
    {
      t = z_11;
      t = Option_3_0(l_3, m_3, x_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_65 (ATerm), ATerm i_65 (ATerm), ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,d_13 = NULL;
  i_51 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_51 = ATgetFirst((ATermList) t);
      f_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_51);
  d_51 = t;
  t = e_51;
  t = h_65(t);
  g_51 = t;
  t = f_51;
  t = i_65(t);
  h_51 = t;
  t = (ATerm) ATinsert(CheckATermList(h_51), g_51);
  d_13 = t;
  t = SSLsetAnnotations(d_13, d_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_105 (ATerm), ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,w_51 = NULL,x_51 = NULL,l_13 = NULL;
  r_51 = t;
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_12;
        t = y_105(t);
        LocalPopChoice(c_12);
      }
    else
      {
        t = b_12;
      }
  }
  t = r_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_51 = ATgetFirst((ATermList) t);
      u_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_51);
  s_51 = t;
  t = term_a_10;
  x_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_10, t_51);
  t = b_4(x_51, t_51, t);
  t = u_51;
  {
    static ATerm h_52 (ATerm t)
    {
      ATerm g_12 = t;
      int j_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_12 = t;
          int n_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_52 = NULL;
              a_52 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_52;
              LocalPopChoice(n_12);
            }
          else
            {
              t = m_12;
              t = y_105(t);
              t = Cons_2_0(_id, h_52, t);
            }
          LocalPopChoice(j_12);
        }
      else
        {
          t = g_12;
          {
            ATerm d_52 = NULL,e_52 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_52 = ATgetFirst((ATermList) t);
                e_52 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(e_52), (ATerm) ATmakeAppl(sym_Undefined_1, d_52));
          }
        }
      return(t);
    }
    t = h_52(t);
  }
  w_51 = t;
  t = (ATerm) ATinsert(CheckATermList(w_51), (ATerm) ATmakeAppl(sym_Program_1, t_51));
  l_13 = t;
  t = SSLsetAnnotations(l_13, s_51);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm t_52 = NULL;
  t_52 = t;
  if(match_string(t, "--help"))
    {
      t = t_52;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_52;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_52;
        }
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL;
  t = term_s_10;
  u_52 = t;
  t = term_u_5;
  v_52 = t;
  t = term_p_12;
  t = b_4(u_52, v_52, t);
  t = term_q_12;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_s_12;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_105 (ATerm), ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL;
  o_52 = t;
  t = term_m_9;
  q_52 = t;
  t = term_n_9;
  r_52 = t;
  t = (ATerm) ATempty;
  s_52 = t;
  t = SSL_table_put(q_52, r_52, s_52);
  t = o_52;
  {
    static ATerm a_4 (ATerm t)
    {
      ATerm t_12 = t;
      int u_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_105(t);
          LocalPopChoice(u_12);
        }
      else
        {
          t = t_12;
          {
            ATerm v_12 = t;
            int w_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_4, j_4, r_4, t);
                LocalPopChoice(w_12);
              }
            else
              {
                t = v_12;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_4, t);
  }
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_53 = NULL;
        i_53 = t;
        {
          ATerm a_13 = t;
          int e_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_58 = NULL;
              t = i_53;
              {
                ATerm f_13 = t;
                int g_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_58 = NULL,p_58 = NULL;
                    t = term_n_8;
                    o_58 = t;
                    t = term_s_10;
                    p_58 = t;
                    t = term_t_10;
                    t = y_3(o_58, p_58, t);
                    LocalPopChoice(g_13);
                  }
                else
                  {
                    t = f_13;
                    t = fetch_1_0(s_4, t);
                  }
              }
              t = i_53;
              t = default_system_usage_0_0(t);
              t = term_v_8;
              n_58 = t;
              t = SSL_exit(n_58);
              LocalPopChoice(e_13);
            }
          else
            {
              t = a_13;
              {
                ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL;
                t = term_n_8;
                u_58 = t;
                t = term_h_11;
                v_58 = t;
                t = term_h_13;
                t = y_3(u_58, v_58, t);
                t = i_53;
                t = default_system_about_0_0(t);
                t = term_v_8;
                t_58 = t;
                t = SSL_exit(t_58);
              }
            }
        }
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        {
          ATerm i_13 = t;
          int j_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL;
              static ATerm u_4 (ATerm t)
              {
                ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL,p_13 = NULL;
                o_53 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_53 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_53);
                m_53 = t;
                t = n_53;
                if(((m_52 != NULL) && (m_52 != t)))
                  _fail(t);
                else
                  m_52 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_53);
                p_13 = t;
                t = SSLsetAnnotations(p_13, m_53);
                return(t);
              }
              t = fetch_1_0(u_4, t);
              t = term_v_5;
              k_53 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_52)), term_m_13);
              l_53 = t;
              t = SSL_printnl(k_53, l_53);
              t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_52)), term_m_13));
              t = default_system_usage_0_0(t);
              t = term_a_6;
              j_53 = t;
              t = SSL_exit(j_53);
              LocalPopChoice(j_13);
            }
          else
            {
              t = i_13;
            }
        }
      }
  }
  n_52 = t;
  t = term_m_9;
  p_52 = t;
  t = SSL_table_destroy(p_52);
  t = n_52;
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL;
  t = parse_options_1_0(x_103, t);
  t_53 = t;
  t = term_n_13;
  w_53 = t;
  t = SSL_table_create(w_53);
  t = term_n_13;
  u_53 = t;
  t = term_o_13;
  v_53 = t;
  t = SSL_table_put(u_53, v_53, t_53);
  t = t_53;
  t = z_103(t);
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_103, t);
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        {
          ATerm v_13 = t;
          int w_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_104(t);
              t = report_success_0_0(t);
              LocalPopChoice(w_13);
            }
          else
            {
              t = v_13;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = if_verbose2_1_0(q_5, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm x_53 = NULL,y_53 = NULL;
  t = term_x_13;
  x_53 = t;
  t = term_u_5;
  y_53 = t;
  t = term_z_13;
  t = b_4(x_53, y_53, t);
  t = term_a_14;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL;
  z_53 = t;
  t = term_n_8;
  d_54 = t;
  t = term_a_10;
  e_54 = t;
  t = term_b_10;
  t = y_3(d_54, e_54, t);
  a_54 = t;
  t = term_v_5;
  b_54 = t;
  t = (ATerm) ATinsert(ATempty, a_54);
  c_54 = t;
  t = SSL_printnl(b_54, c_54);
  t = z_53;
  return(t);
}
ATerm iowrap_3_0 (ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm t)
{
  static ATerm w_4 (ATerm t)
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_103(t);
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        {
          ATerm k_14 = t;
          int l_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(l_14);
            }
          else
            {
              t = k_14;
              {
                ATerm m_14 = t;
                int n_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(n_14);
                  }
                else
                  {
                    t = m_14;
                    {
                      ATerm o_14 = t;
                      int p_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(n_5, o_5, p_5, t);
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
                                t = verbose_option_0_0(t);
                                LocalPopChoice(r_14);
                              }
                            else
                              {
                                t = q_14;
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
  static ATerm m_5 (ATerm t)
  {
    ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
    g_54 = t;
    {
      ATerm s_14 = t;
      int t_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm r_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((f_54 != NULL) && (f_54 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_54 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_5, t);
          LocalPopChoice(t_14);
        }
      else
        {
          t = s_14;
          t = term_u_14;
          f_54 = t;
        }
    }
    t = not_null(f_54);
    t = ReadFromFile_0_0(t);
    h_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_54, h_54);
    t = apply_strategy_1_0(g_103, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(w_4, i_103, l_5, m_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,i_14 = NULL;
  o_54 = t;
  if(match_cons(t, sym__2))
    {
      l_54 = ATgetArgument(t, 0);
      m_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_54);
  k_54 = t;
  t = m_54;
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_55 = NULL,y_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,g_14 = NULL,c_14 = NULL,y_13 = NULL,u_13 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            f_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_54);
        y_58 = t;
        t = f_55;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_59 = ATgetFirst((ATermList) t);
            c_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_55);
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
        u_13 = t;
        t = SSLsetAnnotations(u_13, i_59);
        l_59 = t;
        t = g_59;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(g_59), l_59);
        y_13 = t;
        t = SSLsetAnnotations(y_13, e_59);
        h_59 = t;
        t = (ATerm) ATinsert(CheckATermList(h_59), b_59);
        c_14 = t;
        t = SSLsetAnnotations(c_14, a_59);
        d_59 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, d_59);
        g_14 = t;
        t = SSLsetAnnotations(g_14, y_58);
        LocalPopChoice(w_14);
      }
    else
      {
        t = v_14;
        t = debug_1_0(t_5, t);
      }
  }
  n_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_54, n_54);
  i_14 = t;
  t = SSLsetAnnotations(i_14, k_54);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(s_5, _fail, default_usage_0_0, t);
  return(t);
}

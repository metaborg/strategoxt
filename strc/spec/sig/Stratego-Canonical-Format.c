#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Some_1;
Symbol sym_Undefined_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
void init_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  init_constant_terms();
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
ATerm term_t_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_u_12;
ATerm term_q_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_m_11;
ATerm term_l_11;
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
ATerm term_w_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_l_9;
ATerm term_e_9;
ATerm term_u_8;
ATerm term_r_8;
ATerm term_f_8;
ATerm term_u_7;
ATerm term_p_7;
ATerm term_l_7;
ATerm term_h_7;
ATerm term_d_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_v_6;
ATerm term_t_6;
ATerm term_w_5;
void init_constant_terms (void)
{
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym__0);
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
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_w_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_w_5);
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
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__2, term_v_10, term_w_10);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym__2, term_e_13, term_w_5);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_h_13, term_w_5);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_w_5);
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
  term_x_14 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_w_5);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm debug_1_0 (ATerm k_92 (ATerm), ATerm);
ATerm b_0 (ATerm);
ATerm term_expression_0_0 (ATerm);
ATerm f_0 (ATerm);
ATerm match_term_exp_0_0 (ATerm);
ATerm CallT_3_0 (ATerm s_62 (ATerm), ATerm t_62 (ATerm), ATerm u_62 (ATerm), ATerm);
ATerm q_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm y_0 (ATerm);
ATerm a_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm k_1 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm map_1_0 (ATerm p_79 (ATerm), ATerm);
ATerm t_3 (ATerm x_38, ATerm y_38, ATerm);
ATerm u_3 (ATerm l_42, ATerm m_42, ATerm);
ATerm w_3 (ATerm m_92 (ATerm), ATerm k_401, ATerm p_42, ATerm);
ATerm v_3 (ATerm h_42, ATerm i_42, ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm d_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm o_95 (ATerm), ATerm);
ATerm n_47 (ATerm h_47, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_3 (ATerm n_42, ATerm);
ATerm y_3 (ATerm z_38, ATerm a_39, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm h_49 (ATerm c_48, ATerm);
ATerm i_49 (ATerm g_48, ATerm h_48, ATerm i_48, ATerm);
ATerm j_49 (ATerm u_48, ATerm v_48, ATerm w_48, ATerm);
ATerm z_3 (ATerm);
ATerm j_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm z_79 (ATerm), ATerm);
ATerm s_3 (ATerm m_33, ATerm n_33, ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm x_93 (ATerm), ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm z_2 (ATerm);
ATerm d_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm f_4 (ATerm o_43, ATerm p_43, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm g_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm d_4 (ATerm m_48, ATerm n_48, ATerm l_48, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm r_3 (ATerm);
ATerm b_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_4 (ATerm x_35, ATerm y_35, ATerm);
ATerm foldr_2_0 (ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_93 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm i_4 (ATerm);
ATerm need_help_1_0 (ATerm m_96 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm c_4 (ATerm d_50, ATerm e_50, ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm w_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm t_57 (ATerm), ATerm u_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm p_98 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm parse_options_1_0 (ATerm o_98 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm);
ATerm d_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm l_6 (ATerm);
ATerm o_6 (ATerm);
ATerm iowrap_3_0 (ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,l_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL;
  a_0 = t;
  t = term_w_5;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_t_6;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_6), l_0), term_v_6);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_y_6;
  m_0 = t;
  t = SSL_exit(m_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm k_92 (ATerm), ATerm t)
{
  ATerm s_0 = NULL,x_0 = NULL,c_1 = NULL,d_1 = NULL;
  s_0 = t;
  t = k_92(t);
  x_0 = t;
  t = term_t_6;
  c_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_0), x_0);
  d_1 = t;
  t = SSL_printnl(c_1, d_1);
  t = s_0;
  return(t);
}
ATerm b_0 (ATerm t)
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
      ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL;
      t_5 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = t_5;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              u_5 = ATgetArgument(t, 0);
              {
                ATerm p_0 = NULL,r_0 = NULL,a_2 = NULL;
                t = SSLgetAnnotations(t_5);
                p_0 = t;
                t = SSL_is_string(u_5);
                r_0 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, r_0);
                a_2 = t;
                t = SSLsetAnnotations(a_2, p_0);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  u_5 = ATgetArgument(t, 0);
                  {
                    ATerm z_0 = NULL,b_1 = NULL,b_2 = NULL;
                    t = SSLgetAnnotations(t_5);
                    z_0 = t;
                    t = SSL_is_int(u_5);
                    b_1 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, b_1);
                    b_2 = t;
                    t = SSLsetAnnotations(b_2, z_0);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      u_5 = ATgetArgument(t, 0);
                      {
                        ATerm j_1 = NULL,l_1 = NULL,c_2 = NULL;
                        t = SSLgetAnnotations(t_5);
                        j_1 = t;
                        t = SSL_is_real(u_5);
                        l_1 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, l_1);
                        c_2 = t;
                        t = SSLsetAnnotations(c_2, j_1);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          u_5 = ATgetArgument(t, 0);
                          {
                            ATerm r_1 = NULL,t_1 = NULL,e_2 = NULL;
                            t = SSLgetAnnotations(t_5);
                            r_1 = t;
                            t = SSL_is_string(u_5);
                            t_1 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, t_1);
                            e_2 = t;
                            t = SSLsetAnnotations(e_2, r_1);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              u_5 = ATgetArgument(t, 0);
                              {
                                ATerm z_1 = NULL,k_2 = NULL,f_2 = NULL;
                                t = SSLgetAnnotations(t_5);
                                z_1 = t;
                                t = u_5;
                                t = term_expression_0_0(t);
                                k_2 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, k_2);
                                f_2 = t;
                                t = SSLsetAnnotations(f_2, z_1);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  u_5 = ATgetArgument(t, 0);
                                  v_5 = ATgetArgument(t, 1);
                                  {
                                    ATerm c_3 = NULL,h_3 = NULL,i_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,h_2 = NULL,g_2 = NULL;
                                    t = SSLgetAnnotations(t_5);
                                    c_3 = t;
                                    t = u_5;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        k_3 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(u_5);
                                    i_3 = t;
                                    t = SSL_is_string(k_3);
                                    l_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, l_3);
                                    g_2 = t;
                                    t = SSLsetAnnotations(g_2, i_3);
                                    m_3 = t;
                                    t = v_5;
                                    t = term_expression_0_0(t);
                                    h_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, m_3, h_3);
                                    h_2 = t;
                                    t = SSLsetAnnotations(h_2, c_3);
                                  }
                                }
                              else
                                {
                                  ATerm k_4 = NULL,q_4 = NULL,r_4 = NULL,i_2 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      u_5 = ATgetArgument(t, 0);
                                      v_5 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(t_5);
                                  k_4 = t;
                                  t = SSL_is_string(u_5);
                                  q_4 = t;
                                  t = v_5;
                                  t = map_1_0(term_expression_0_0, t);
                                  r_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, q_4, r_4);
                                  i_2 = t;
                                  t = SSLsetAnnotations(i_2, k_4);
                                }
                            }
                        }
                    }
                }
            }
        }
      ;
      LocalPopChoice(b_7);
    }
  else
    {
      t = a_7;
      t = debug_1_0(b_0, t);
    }
  return(t);
}
ATerm f_0 (ATerm t)
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
      ATerm k_11 = NULL,n_11 = NULL,o_11 = NULL;
      k_11 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = k_11;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              n_11 = ATgetArgument(t, 0);
              {
                ATerm y_5 = NULL,a_6 = NULL,x_2 = NULL;
                t = SSLgetAnnotations(k_11);
                y_5 = t;
                t = SSL_is_string(n_11);
                a_6 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, a_6);
                x_2 = t;
                t = SSLsetAnnotations(x_2, y_5);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  n_11 = ATgetArgument(t, 0);
                  {
                    ATerm j_6 = NULL,m_6 = NULL,y_2 = NULL;
                    t = SSLgetAnnotations(k_11);
                    j_6 = t;
                    t = SSL_is_int(n_11);
                    m_6 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, m_6);
                    y_2 = t;
                    t = SSLsetAnnotations(y_2, j_6);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      n_11 = ATgetArgument(t, 0);
                      {
                        ATerm u_6 = NULL,w_6 = NULL,a_3 = NULL;
                        t = SSLgetAnnotations(k_11);
                        u_6 = t;
                        t = SSL_is_real(n_11);
                        w_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, w_6);
                        a_3 = t;
                        t = SSLsetAnnotations(a_3, u_6);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          n_11 = ATgetArgument(t, 0);
                          {
                            ATerm c_7 = NULL,e_7 = NULL,b_3 = NULL;
                            t = SSLgetAnnotations(k_11);
                            c_7 = t;
                            t = SSL_is_string(n_11);
                            e_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, e_7);
                            b_3 = t;
                            t = SSLsetAnnotations(b_3, c_7);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              n_11 = ATgetArgument(t, 0);
                              {
                                ATerm k_7 = NULL,m_7 = NULL,e_3 = NULL;
                                t = SSLgetAnnotations(k_11);
                                k_7 = t;
                                t = n_11;
                                t = match_term_exp_0_0(t);
                                m_7 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, m_7);
                                e_3 = t;
                                t = SSLsetAnnotations(e_3, k_7);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  n_11 = ATgetArgument(t, 0);
                                  o_11 = ATgetArgument(t, 1);
                                  {
                                    ATerm w_7 = NULL,w_8 = NULL,x_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,j_3 = NULL,f_3 = NULL;
                                    t = SSLgetAnnotations(k_11);
                                    w_7 = t;
                                    t = n_11;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        z_8 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(n_11);
                                    x_8 = t;
                                    t = SSL_is_string(z_8);
                                    a_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, a_9);
                                    f_3 = t;
                                    t = SSLsetAnnotations(f_3, x_8);
                                    b_9 = t;
                                    t = o_11;
                                    t = match_term_exp_0_0(t);
                                    w_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, b_9, w_8);
                                    j_3 = t;
                                    t = SSLsetAnnotations(j_3, w_7);
                                  }
                                }
                              else
                                {
                                  ATerm r_9 = NULL,v_9 = NULL,x_9 = NULL,q_3 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      n_11 = ATgetArgument(t, 0);
                                      o_11 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(k_11);
                                  r_9 = t;
                                  t = SSL_is_string(n_11);
                                  v_9 = t;
                                  t = o_11;
                                  t = map_1_0(match_term_exp_0_0, t);
                                  x_9 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, v_9, x_9);
                                  q_3 = t;
                                  t = SSLsetAnnotations(q_3, r_9);
                                }
                            }
                        }
                    }
                }
            }
        }
      ;
      LocalPopChoice(g_7);
    }
  else
    {
      t = f_7;
      t = debug_1_0(f_0, t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm s_62 (ATerm), ATerm t_62 (ATerm), ATerm u_62 (ATerm), ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,x_12 = NULL,j_13 = NULL,k_13 = NULL,q_13 = NULL,r_13 = NULL,v_4 = NULL;
  r_13 = t;
  if(match_cons(t, sym_CallT_3))
    {
      s_12 = ATgetArgument(t, 0);
      t_12 = ATgetArgument(t, 1);
      x_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_13);
  r_12 = t;
  t = s_12;
  t = s_62(t);
  j_13 = t;
  t = t_12;
  t = t_62(t);
  k_13 = t;
  t = x_12;
  t = u_62(t);
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, j_13, k_13, q_13);
  v_4 = t;
  t = SSLsetAnnotations(v_4, r_12);
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = CallT_3_0(t_0, u_0, v_0, t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,s_20 = NULL,l_5 = NULL;
  s_20 = t;
  if(match_cons(t, sym_SVar_1))
    {
      o_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_20);
  n_20 = t;
  t = SSL_is_string(o_20);
  p_20 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, p_20);
  l_5 = t;
  t = SSLsetAnnotations(l_5, n_20);
  return(t);
}
ATerm u_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm t_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,m_5 = NULL;
  z_20 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_20);
  t_20 = t;
  t = SSL_is_string(x_20);
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_20);
  m_5 = t;
  t = SSLsetAnnotations(m_5, t_20);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  t = SSL_is_string(r_28);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,c_30 = NULL,e_30 = NULL,f_30 = NULL,q_7 = NULL,p_6 = NULL;
  f_30 = t;
  if(match_cons(t, sym_CallT_3))
    {
      v_29 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
      y_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_30);
  u_29 = t;
  t = v_29;
  if(match_cons(t, sym_SVar_1))
    {
      a_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_29);
  z_29 = t;
  t = SSL_is_string(a_30);
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, c_30);
  p_6 = t;
  t = SSLsetAnnotations(p_6, z_29);
  e_30 = t;
  t = x_29;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = y_29;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, e_30, x_29, y_29);
  q_7 = t;
  t = SSLsetAnnotations(q_7, u_29);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,j_30 = NULL,l_30 = NULL,s_7 = NULL;
  l_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_30);
  g_30 = t;
  t = SSL_is_string(h_30);
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_30);
  s_7 = t;
  t = SSLsetAnnotations(s_7, g_30);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm q_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
  q_34 = t;
  if(match_cons(t, sym_SDef_3))
    {
      s_34 = ATgetArgument(t, 0);
      t_34 = ATgetArgument(t, 1);
      u_34 = ATgetArgument(t, 2);
      {
        ATerm e_37 = NULL,q_37 = NULL,u_37 = NULL,v_37 = NULL,a_8 = NULL;
        t = SSLgetAnnotations(q_34);
        e_37 = t;
        t = SSL_is_string(s_34);
        q_37 = t;
        t = t_34;
        t = map_1_0(g_1, t);
        u_37 = t;
        t = u_34;
        t = strategy_expression_0_0(t);
        v_37 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, q_37, u_37, v_37);
        a_8 = t;
        t = SSLsetAnnotations(a_8, e_37);
      }
    }
  else
    {
      ATerm v_39 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,d_8 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          s_34 = ATgetArgument(t, 0);
          t_34 = ATgetArgument(t, 1);
          u_34 = ATgetArgument(t, 2);
          v_34 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_34);
      v_39 = t;
      t = SSL_is_string(s_34);
      y_43 = t;
      t = t_34;
      t = map_1_0(h_1, t);
      z_43 = t;
      t = u_34;
      t = map_1_0(i_1, t);
      a_44 = t;
      t = v_34;
      t = strategy_expression_0_0(t);
      b_44 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, y_43, z_43, a_44, b_44);
      d_8 = t;
      t = SSLsetAnnotations(d_8, v_39);
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm o_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,w_38 = NULL,z_7 = NULL;
  w_38 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      s_38 = ATgetArgument(t, 0);
      t_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_38);
  o_38 = t;
  t = SSL_is_string(s_38);
  u_38 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_38, t_38);
  z_7 = t;
  t = SSLsetAnnotations(z_7, o_38);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,b_8 = NULL;
  b_48 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      y_47 = ATgetArgument(t, 0);
      z_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_48);
  x_47 = t;
  t = SSL_is_string(y_47);
  a_48 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_48, z_47);
  b_8 = t;
  t = SSLsetAnnotations(b_8, x_47);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL,q_50 = NULL,r_50 = NULL,c_8 = NULL;
  r_50 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      q_49 = ATgetArgument(t, 0);
      r_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_50);
  p_49 = t;
  t = SSL_is_string(q_49);
  q_50 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, q_50, r_49);
  c_8 = t;
  t = SSLsetAnnotations(c_8, p_49);
  return(t);
}
ATerm k_1 (ATerm t)
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
      ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,x_37 = NULL;
      s_37 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = s_37;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = s_37;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  t_37 = ATgetArgument(t, 0);
                  {
                    ATerm u_14 = NULL,w_14 = NULL,a_5 = NULL;
                    t = SSLgetAnnotations(s_37);
                    u_14 = t;
                    t = t_37;
                    t = strategy_expression_0_0(t);
                    w_14 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, w_14);
                    a_5 = t;
                    t = SSLsetAnnotations(a_5, u_14);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      t_37 = ATgetArgument(t, 0);
                      {
                        ATerm c_15 = NULL,e_15 = NULL,c_5 = NULL;
                        t = SSLgetAnnotations(s_37);
                        c_15 = t;
                        t = t_37;
                        t = strategy_expression_0_0(t);
                        e_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, e_15);
                        c_5 = t;
                        t = SSLsetAnnotations(c_5, c_15);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          t_37 = ATgetArgument(t, 0);
                          x_37 = ATgetArgument(t, 1);
                          {
                            ATerm l_15 = NULL,o_15 = NULL,p_15 = NULL,e_5 = NULL;
                            t = SSLgetAnnotations(s_37);
                            l_15 = t;
                            t = t_37;
                            t = strategy_expression_0_0(t);
                            o_15 = t;
                            t = x_37;
                            t = strategy_expression_0_0(t);
                            p_15 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, o_15, p_15);
                            e_5 = t;
                            t = SSLsetAnnotations(e_5, l_15);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              t_37 = ATgetArgument(t, 0);
                              x_37 = ATgetArgument(t, 1);
                              {
                                ATerm x_15 = NULL,a_16 = NULL,b_16 = NULL,f_5 = NULL;
                                t = SSLgetAnnotations(s_37);
                                x_15 = t;
                                t = t_37;
                                t = strategy_expression_0_0(t);
                                a_16 = t;
                                t = x_37;
                                t = strategy_expression_0_0(t);
                                b_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, a_16, b_16);
                                f_5 = t;
                                t = SSLsetAnnotations(f_5, x_15);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  t_37 = ATgetArgument(t, 0);
                                  x_37 = ATgetArgument(t, 1);
                                  {
                                    ATerm j_16 = NULL,m_16 = NULL,q_16 = NULL,g_5 = NULL;
                                    t = SSLgetAnnotations(s_37);
                                    j_16 = t;
                                    t = t_37;
                                    t = strategy_expression_0_0(t);
                                    m_16 = t;
                                    t = x_37;
                                    t = strategy_expression_0_0(t);
                                    q_16 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, m_16, q_16);
                                    g_5 = t;
                                    t = SSLsetAnnotations(g_5, j_16);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      t_37 = ATgetArgument(t, 0);
                                      x_37 = ATgetArgument(t, 1);
                                      r_37 = ATgetArgument(t, 2);
                                      {
                                        ATerm f_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,h_5 = NULL;
                                        t = SSLgetAnnotations(s_37);
                                        f_17 = t;
                                        t = t_37;
                                        t = strategy_expression_0_0(t);
                                        k_17 = t;
                                        t = x_37;
                                        t = strategy_expression_0_0(t);
                                        l_17 = t;
                                        t = r_37;
                                        t = strategy_expression_0_0(t);
                                        m_17 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, k_17, l_17, m_17);
                                        h_5 = t;
                                        t = SSLsetAnnotations(h_5, f_17);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          t_37 = ATgetArgument(t, 0);
                                          x_37 = ATgetArgument(t, 1);
                                          {
                                            ATerm b_18 = NULL,i_18 = NULL,j_18 = NULL,i_5 = NULL;
                                            t = SSLgetAnnotations(s_37);
                                            b_18 = t;
                                            t = t_37;
                                            t = strategy_expression_0_0(t);
                                            i_18 = t;
                                            t = x_37;
                                            t = strategy_expression_0_0(t);
                                            j_18 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, i_18, j_18);
                                            i_5 = t;
                                            t = SSLsetAnnotations(i_5, b_18);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              t_37 = ATgetArgument(t, 0);
                                              x_37 = ATgetArgument(t, 1);
                                              {
                                                ATerm y_18 = NULL,c_19 = NULL,d_19 = NULL,j_5 = NULL;
                                                t = SSLgetAnnotations(s_37);
                                                y_18 = t;
                                                t = t_37;
                                                t = strategy_expression_0_0(t);
                                                c_19 = t;
                                                t = x_37;
                                                t = strategy_expression_0_0(t);
                                                d_19 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, c_19, d_19);
                                                j_5 = t;
                                                t = SSLsetAnnotations(j_5, y_18);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  t_37 = ATgetArgument(t, 0);
                                                  x_37 = ATgetArgument(t, 1);
                                                  r_37 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm x_19 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,n_5 = NULL,k_5 = NULL;
                                                    t = SSLgetAnnotations(s_37);
                                                    x_19 = t;
                                                    t = t_37;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        j_20 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(t_37);
                                                    i_20 = t;
                                                    t = SSL_is_string(j_20);
                                                    k_20 = t;
                                                    t = (ATerm) ATmakeAppl(sym_SVar_1, k_20);
                                                    k_5 = t;
                                                    t = SSLsetAnnotations(k_5, i_20);
                                                    l_20 = t;
                                                    t = x_37;
                                                    t = map_1_0(q_0, t);
                                                    g_20 = t;
                                                    t = r_37;
                                                    t = map_1_0(w_0, t);
                                                    h_20 = t;
                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, l_20, g_20, h_20);
                                                    n_5 = t;
                                                    t = SSLsetAnnotations(n_5, x_19);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      t_37 = ATgetArgument(t, 0);
                                                      x_37 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm m_21 = NULL,q_21 = NULL,r_21 = NULL,o_5 = NULL;
                                                        t = SSLgetAnnotations(s_37);
                                                        m_21 = t;
                                                        t = SSL_is_string(t_37);
                                                        q_21 = t;
                                                        t = x_37;
                                                        t = strategy_expression_0_0(t);
                                                        r_21 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, q_21, r_21);
                                                        o_5 = t;
                                                        t = SSLsetAnnotations(o_5, m_21);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          t_37 = ATgetArgument(t, 0);
                                                          x_37 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm a_22 = NULL,h_22 = NULL,i_22 = NULL,p_5 = NULL;
                                                            t = SSLgetAnnotations(s_37);
                                                            a_22 = t;
                                                            t = SSL_is_int(t_37);
                                                            h_22 = t;
                                                            t = x_37;
                                                            t = strategy_expression_0_0(t);
                                                            i_22 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, h_22, i_22);
                                                            p_5 = t;
                                                            t = SSLsetAnnotations(p_5, a_22);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              t_37 = ATgetArgument(t, 0);
                                                              x_37 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm y_22 = NULL,b_23 = NULL,c_23 = NULL,q_5 = NULL;
                                                                t = SSLgetAnnotations(s_37);
                                                                y_22 = t;
                                                                t = SSL_is_string(t_37);
                                                                b_23 = t;
                                                                t = x_37;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                c_23 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, b_23, c_23);
                                                                q_5 = t;
                                                                t = SSLsetAnnotations(q_5, y_22);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  t_37 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm o_23 = NULL,q_23 = NULL,r_5 = NULL;
                                                                    t = SSLgetAnnotations(s_37);
                                                                    o_23 = t;
                                                                    t = t_37;
                                                                    t = strategy_expression_0_0(t);
                                                                    q_23 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, q_23);
                                                                    r_5 = t;
                                                                    t = SSLsetAnnotations(r_5, o_23);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      t_37 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm x_23 = NULL,z_23 = NULL,s_5 = NULL;
                                                                        t = SSLgetAnnotations(s_37);
                                                                        x_23 = t;
                                                                        t = t_37;
                                                                        t = strategy_expression_0_0(t);
                                                                        z_23 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, z_23);
                                                                        s_5 = t;
                                                                        t = SSLsetAnnotations(s_5, x_23);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          t_37 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm h_24 = NULL,j_24 = NULL,x_5 = NULL;
                                                                            t = SSLgetAnnotations(s_37);
                                                                            h_24 = t;
                                                                            t = t_37;
                                                                            t = strategy_expression_0_0(t);
                                                                            j_24 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, j_24);
                                                                            x_5 = t;
                                                                            t = SSLsetAnnotations(x_5, h_24);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              t_37 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm r_24 = NULL,u_24 = NULL,c_6 = NULL;
                                                                                t = SSLgetAnnotations(s_37);
                                                                                r_24 = t;
                                                                                t = t_37;
                                                                                t = strategy_expression_0_0(t);
                                                                                u_24 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, u_24);
                                                                                c_6 = t;
                                                                                t = SSLsetAnnotations(c_6, r_24);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  t_37 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm c_25 = NULL,e_25 = NULL,h_6 = NULL;
                                                                                    t = SSLgetAnnotations(s_37);
                                                                                    c_25 = t;
                                                                                    t = t_37;
                                                                                    t = match_term_exp_0_0(t);
                                                                                    e_25 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, e_25);
                                                                                    h_6 = t;
                                                                                    t = SSLsetAnnotations(h_6, c_25);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      t_37 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm l_25 = NULL,n_25 = NULL,i_6 = NULL;
                                                                                        t = SSLgetAnnotations(s_37);
                                                                                        l_25 = t;
                                                                                        t = t_37;
                                                                                        t = term_expression_0_0(t);
                                                                                        n_25 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, n_25);
                                                                                        i_6 = t;
                                                                                        t = SSLsetAnnotations(i_6, l_25);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          t_37 = ATgetArgument(t, 0);
                                                                                          x_37 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm j_28 = NULL,n_28 = NULL,p_28 = NULL,k_6 = NULL;
                                                                                            t = SSLgetAnnotations(s_37);
                                                                                            j_28 = t;
                                                                                            t = t_37;
                                                                                            t = map_1_0(y_0, t);
                                                                                            n_28 = t;
                                                                                            t = x_37;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            p_28 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, n_28, p_28);
                                                                                            k_6 = t;
                                                                                            t = SSLsetAnnotations(k_6, j_28);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              t_37 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm y_28 = NULL,a_29 = NULL,n_6 = NULL;
                                                                                                t = SSLgetAnnotations(s_37);
                                                                                                y_28 = t;
                                                                                                t = t_37;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                a_29 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, a_29);
                                                                                                n_6 = t;
                                                                                                t = SSLsetAnnotations(n_6, y_28);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  t_37 = ATgetArgument(t, 0);
                                                                                                  x_37 = ATgetArgument(t, 1);
                                                                                                  r_37 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm m_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,v_7 = NULL;
                                                                                                    t = SSLgetAnnotations(s_37);
                                                                                                    m_29 = t;
                                                                                                    t = SSL_is_string(t_37);
                                                                                                    q_29 = t;
                                                                                                    t = x_37;
                                                                                                    t = map_1_0(a_1, t);
                                                                                                    r_29 = t;
                                                                                                    t = r_37;
                                                                                                    t = map_1_0(e_1, t);
                                                                                                    s_29 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, q_29, r_29, s_29);
                                                                                                    v_7 = t;
                                                                                                    t = SSLsetAnnotations(v_7, m_29);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm t_30 = NULL,x_30 = NULL,y_30 = NULL,e_8 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      t_37 = ATgetArgument(t, 0);
                                                                                                      x_37 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(s_37);
                                                                                                  t_30 = t;
                                                                                                  t = t_37;
                                                                                                  t = map_1_0(f_1, t);
                                                                                                  x_30 = t;
                                                                                                  t = x_37;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  y_30 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, x_30, y_30);
                                                                                                  e_8 = t;
                                                                                                  t = SSLsetAnnotations(e_8, t_30);
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
      ;
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      t = debug_1_0(k_1, t);
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm e_54 = NULL,q_54 = NULL,r_54 = NULL,d_55 = NULL,o_55 = NULL,h_10 = NULL;
  o_55 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      q_54 = ATgetArgument(t, 0);
      r_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_55);
  e_54 = t;
  t = SSL_is_string(q_54);
  d_55 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_55, r_54);
  h_10 = t;
  t = SSLsetAnnotations(h_10, e_54);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,j_10 = NULL;
  e_61 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      b_61 = ATgetArgument(t, 0);
      c_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_61);
  a_61 = t;
  t = SSL_is_string(b_61);
  d_61 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_61, c_61);
  j_10 = t;
  t = SSLsetAnnotations(j_10, a_61);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_10 = NULL;
  j_61 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      g_61 = ATgetArgument(t, 0);
      h_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_61);
  f_61 = t;
  t = SSL_is_string(g_61);
  i_61 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_61, h_61);
  k_10 = t;
  t = SSLsetAnnotations(k_10, f_61);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,m_10 = NULL;
  i_62 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      f_62 = ATgetArgument(t, 0);
      g_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_62);
  e_62 = t;
  t = SSL_is_string(f_62);
  h_62 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_62, g_62);
  m_10 = t;
  t = SSLsetAnnotations(m_10, e_62);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,n_10 = NULL;
  n_62 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      k_62 = ATgetArgument(t, 0);
      l_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_62);
  j_62 = t;
  t = SSL_is_string(k_62);
  m_62 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_62, l_62);
  n_10 = t;
  t = SSLsetAnnotations(n_10, j_62);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,p_10 = NULL;
  m_63 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      j_63 = ATgetArgument(t, 0);
      k_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_63);
  i_63 = t;
  t = SSL_is_string(j_63);
  l_63 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, l_63, k_63);
  p_10 = t;
  t = SSLsetAnnotations(p_10, i_63);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,q_10 = NULL;
  r_63 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      o_63 = ATgetArgument(t, 0);
      p_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_63);
  n_63 = t;
  t = SSL_is_string(o_63);
  q_63 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, q_63, p_63);
  q_10 = t;
  t = SSLsetAnnotations(q_10, n_63);
  return(t);
}
ATerm v_1 (ATerm t)
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
      ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
      t_43 = t;
      if(match_cons(t, sym_SDef_3))
        {
          u_43 = ATgetArgument(t, 0);
          v_43 = ATgetArgument(t, 1);
          w_43 = ATgetArgument(t, 2);
          {
            ATerm y_51 = NULL,b_53 = NULL,i_53 = NULL,j_53 = NULL,i_10 = NULL;
            t = SSLgetAnnotations(t_43);
            y_51 = t;
            t = SSL_is_string(u_43);
            b_53 = t;
            t = v_43;
            t = map_1_0(m_1, t);
            i_53 = t;
            t = w_43;
            t = strategy_expression_0_0(t);
            j_53 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, b_53, i_53, j_53);
            i_10 = t;
            t = SSLsetAnnotations(i_10, y_51);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              u_43 = ATgetArgument(t, 0);
              v_43 = ATgetArgument(t, 1);
              w_43 = ATgetArgument(t, 2);
              s_43 = ATgetArgument(t, 3);
              {
                ATerm f_58 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,l_10 = NULL;
                t = SSLgetAnnotations(t_43);
                f_58 = t;
                t = SSL_is_string(u_43);
                v_60 = t;
                t = v_43;
                t = map_1_0(n_1, t);
                w_60 = t;
                t = w_43;
                t = map_1_0(o_1, t);
                x_60 = t;
                t = s_43;
                t = strategy_expression_0_0(t);
                y_60 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, v_60, w_60, x_60, y_60);
                l_10 = t;
                t = SSLsetAnnotations(l_10, f_58);
              }
            }
          else
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  u_43 = ATgetArgument(t, 0);
                  v_43 = ATgetArgument(t, 1);
                  w_43 = ATgetArgument(t, 2);
                  s_43 = ATgetArgument(t, 3);
                  {
                    ATerm u_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,o_10 = NULL;
                    t = SSLgetAnnotations(t_43);
                    u_61 = t;
                    t = SSL_is_string(u_43);
                    z_61 = t;
                    t = v_43;
                    t = map_1_0(p_1, t);
                    a_62 = t;
                    t = w_43;
                    t = map_1_0(q_1, t);
                    b_62 = t;
                    t = s_43;
                    t = strategy_expression_0_0(t);
                    c_62 = t;
                    t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, z_61, a_62, b_62, c_62);
                    o_10 = t;
                    t = SSLsetAnnotations(o_10, u_61);
                  }
                }
              else
                {
                  ATerm a_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL,r_10 = NULL;
                  if(match_cons(t, sym_ExtSDef_3))
                    {
                      u_43 = ATgetArgument(t, 0);
                      v_43 = ATgetArgument(t, 1);
                      w_43 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_43);
                  a_63 = t;
                  t = SSL_is_string(u_43);
                  e_63 = t;
                  t = v_43;
                  t = map_1_0(s_1, t);
                  f_63 = t;
                  t = w_43;
                  t = map_1_0(u_1, t);
                  g_63 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDef_3, e_63, f_63, g_63);
                  r_10 = t;
                  t = SSLsetAnnotations(r_10, a_63);
                }
            }
        }
      ;
      LocalPopChoice(o_7);
    }
  else
    {
      t = n_7;
      t = debug_1_0(v_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm p_79 (ATerm), ATerm t)
{
  ATerm u_44 (ATerm t)
  {
    ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL;
    r_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_44;
      }
    else
      {
        ATerm z_63 = NULL,c_64 = NULL,d_64 = NULL,d_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_44 = ATgetFirst((ATermList) t);
            t_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_44);
        z_63 = t;
        t = s_44;
        t = p_79(t);
        c_64 = t;
        t = t_44;
        t = u_44(t);
        d_64 = t;
        t = (ATerm) ATinsert(CheckATermList(d_64), c_64);
        d_11 = t;
        t = SSLsetAnnotations(d_11, z_63);
      }
    return(t);
  }
  t = u_44(t);
  return(t);
}
ATerm t_3 (ATerm x_38, ATerm y_38, ATerm t)
{
  ATerm w_44 = NULL;
  t = SSL_fputc(x_38, y_38);
  w_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_44);
  return(t);
}
ATerm u_3 (ATerm l_42, ATerm m_42, ATerm t)
{
  ATerm x_44 = NULL;
  t = SSL_write_term_to_stream_text(l_42, m_42);
  x_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_44);
  return(t);
}
ATerm w_3 (ATerm m_92 (ATerm), ATerm k_401, ATerm p_42, ATerm t)
{
  ATerm y_44 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_401, term_p_7);
  t = z_3(t);
  y_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_44, p_42);
  t = m_92(t);
  t = fclose_0_0(t);
  t = p_42;
  return(t);
}
ATerm v_3 (ATerm h_42, ATerm i_42, ATerm t)
{
  ATerm z_44 = NULL;
  t = SSL_write_term_to_stream_baf(h_42, i_42);
  z_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_44);
  return(t);
}
ATerm x_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm r_64 = NULL,s_64 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_7 = ATgetArgument(t, 0);
      if(match_cons(r_7, sym_Stream_1))
        {
          r_64 = ATgetArgument(r_7, 0);
        }
      else
        _fail(t);
      s_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(r_64, s_64, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_7 = ATgetArgument(t, 0);
      if(match_cons(t_7, sym_Stream_1))
        {
          g_65 = ATgetArgument(t_7, 0);
        }
      else
        _fail(t);
      h_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(g_65, h_65, t);
  d_65 = t;
  t = term_u_7;
  e_65 = t;
  t = d_65;
  if(match_cons(t, sym_Stream_1))
    {
      f_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_7, d_65);
  t = t_3(e_65, f_65, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,r_46 = NULL,s_46 = NULL,g_11 = NULL,f_11 = NULL;
  e_45 = t;
  if(match_cons(t, sym__2))
    {
      p_45 = ATgetArgument(t, 0);
      q_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_45);
  o_45 = t;
  t = p_45;
  {
    ATerm x_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((d_45 != NULL) && (d_45 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_45 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(w_1, t);
        ;
        LocalPopChoice(y_7);
      }
    else
      {
        t = x_7;
        t = term_f_8;
        d_45 = t;
      }
    r_45 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_45, q_45);
    f_11 = t;
    t = SSLsetAnnotations(f_11, o_45);
    t = e_45;
    if(match_cons(t, sym__2))
      {
        k_45 = ATgetArgument(t, 0);
        l_45 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_45);
    j_45 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_45, (ATerm) ATmakeAppl(sym__2, not_null(d_45), l_45));
    g_11 = t;
    t = SSLsetAnnotations(g_11, j_45);
    n_45 = t;
    if(match_cons(t, sym__2))
      {
        r_46 = ATgetArgument(t, 0);
        s_46 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm g_8 = t;
      int h_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,h_11 = NULL;
          t = SSLgetAnnotations(n_45);
          k_64 = t;
          t = r_46;
          t = fetch_1_0(x_1, t);
          n_64 = t;
          t = s_46;
          if(match_cons(t, sym__2))
            {
              p_64 = ATgetArgument(t, 0);
              q_64 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_3(y_1, p_64, q_64, t);
          o_64 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_64, o_64);
          h_11 = t;
          t = SSLsetAnnotations(h_11, k_64);
          ;
          LocalPopChoice(h_8);
        }
      else
        {
          t = g_8;
          {
            ATerm x_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,i_11 = NULL;
            t = SSLgetAnnotations(n_45);
            x_64 = t;
            t = s_46;
            if(match_cons(t, sym__2))
              {
                b_65 = ATgetArgument(t, 0);
                c_65 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_3(d_2, b_65, c_65, t);
            a_65 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_46, a_65);
            i_11 = t;
            t = SSLsetAnnotations(i_11, x_64);
          }
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
ATerm apply_strategy_1_0 (ATerm o_95 (ATerm), ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL;
  z_46 = t;
  t = dtime_0_0(t);
  t = z_46;
  t = o_95(t);
  y_46 = t;
  t = dtime_0_0(t);
  v_46 = t;
  t = y_46;
  if(match_cons(t, sym__2))
    {
      w_46 = ATgetArgument(t, 0);
      x_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_46), (ATerm) ATmakeAppl(sym_Runtime_1, v_46)), x_46);
  return(t);
}
ATerm n_47 (ATerm h_47, ATerm t)
{
  t = SSL_fclose(h_47);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL;
  l_47 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_47 = ATgetArgument(t, 0);
      {
        ATerm i_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_47);
            ;
            LocalPopChoice(j_8);
          }
        else
          {
            t = i_8;
            t = n_47(l_47, t);
          }
      }
    }
  else
    {
      t = n_47(l_47, t);
    }
  return(t);
}
ATerm x_3 (ATerm n_42, ATerm t)
{
  t = SSL_read_term_from_stream(n_42);
  return(t);
}
ATerm y_3 (ATerm z_38, ATerm a_39, ATerm t)
{
  ATerm o_47 = NULL;
  t = SSL_fopen(z_38, a_39);
  o_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_47);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_47 = NULL;
  t = SSL_stdin_stream();
  p_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_47);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_47 = NULL;
  t = SSL_stdout_stream();
  q_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_47);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_47 = NULL;
  t = SSL_stderr_stream();
  r_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_47);
  return(t);
}
ATerm h_49 (ATerm c_48, ATerm t)
{
  ATerm d_48 = NULL;
  t = SSL_explode_term(c_48);
  if(match_cons(t, sym__2))
    {
      ATerm k_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_8 = ATgetArgument(t, 1);
        if(((ATgetType(l_8) == AT_LIST) && !(ATisEmpty(l_8))))
          {
            d_48 = ATgetFirst((ATermList) l_8);
            {
              ATerm m_8 = (ATerm) ATgetNext((ATermList) l_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_48;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_48;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_48;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_48;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm i_49 (ATerm g_48, ATerm h_48, ATerm i_48, ATerm t)
{
  ATerm k_48 = NULL,o_48 = NULL,p_48 = NULL,s_48 = NULL,r_11 = NULL;
  t = SSLgetAnnotations(i_48);
  p_48 = t;
  t = g_48;
  if(match_cons(t, sym_Path_1))
    {
      s_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_48, h_48);
  r_11 = t;
  t = SSLsetAnnotations(r_11, p_48);
  if(match_cons(t, sym__2))
    {
      k_48 = ATgetArgument(t, 0);
      o_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(k_48, o_48, t);
  return(t);
}
ATerm j_49 (ATerm u_48, ATerm v_48, ATerm w_48, ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,c_49 = NULL,s_11 = NULL;
  t = SSLgetAnnotations(w_48);
  z_48 = t;
  t = SSL_is_string(u_48);
  c_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_49, v_48);
  s_11 = t;
  t = SSLsetAnnotations(s_11, z_48);
  if(match_cons(t, sym__2))
    {
      x_48 = ATgetArgument(t, 0);
      y_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(x_48, y_48, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL;
  e_49 = t;
  if(match_cons(t, sym__2))
    {
      f_49 = ATgetArgument(t, 0);
      g_49 = ATgetArgument(t, 1);
      {
        ATerm n_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_49(e_49, t);
            ;
            LocalPopChoice(o_8);
          }
        else
          {
            t = n_8;
            {
              ATerm p_8 = t;
              int q_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_49(f_49, g_49, e_49, t);
                  ;
                  LocalPopChoice(q_8);
                }
              else
                {
                  t = p_8;
                  t = j_49(f_49, g_49, e_49, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_49(e_49, t);
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_r_8;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL;
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_49 = NULL;
      n_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_49, term_u_8);
      t = z_3(t);
      ;
      LocalPopChoice(t_8);
    }
  else
    {
      t = s_8;
      t = debug_1_0(j_2, t);
      _fail(t);
    }
  l_49 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(m_49, t);
  k_49 = t;
  t = l_49;
  t = fclose_0_0(t);
  t = k_49;
  return(t);
}
ATerm fetch_1_0 (ATerm z_79 (ATerm), ATerm t)
{
  ATerm n_50 (ATerm t)
  {
    ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL;
    k_50 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_50 = ATgetFirst((ATermList) t);
        m_50 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_8 = t;
      int y_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_65 = NULL,w_65 = NULL,v_11 = NULL;
          t = SSLgetAnnotations(k_50);
          t_65 = t;
          t = l_50;
          t = z_79(t);
          w_65 = t;
          t = (ATerm) ATinsert(CheckATermList(m_50), w_65);
          v_11 = t;
          t = SSLsetAnnotations(v_11, t_65);
          ;
          LocalPopChoice(y_8);
        }
      else
        {
          t = v_8;
          {
            ATerm e_66 = NULL,h_66 = NULL,w_11 = NULL;
            t = SSLgetAnnotations(k_50);
            e_66 = t;
            t = m_50;
            t = n_50(t);
            h_66 = t;
            t = (ATerm) ATinsert(CheckATermList(h_66), l_50);
            w_11 = t;
            t = SSLsetAnnotations(w_11, e_66);
          }
        }
    }
    return(t);
  }
  t = n_50(t);
  return(t);
}
ATerm s_3 (ATerm m_33, ATerm n_33, ATerm t)
{
  t = SSL_strcat(m_33, n_33);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
    }
  return(t);
}
ATerm m_2 (ATerm t)
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
      ATerm w_50 = NULL;
      w_50 = t;
      t = SSL_is_string(w_50);
      ;
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
            ;
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
            {
              ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
              c_51 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_51 = ATgetArgument(t, 0);
                  t = d_51;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_51 = ATgetArgument(t, 0);
                      t = d_51;
                      {
                        ATerm j_9 = t;
                        int k_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
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
                      ATerm i_51 = NULL,j_51 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_51 = ATgetArgument(t, 0);
                          e_51 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_51;
                      t = eval_config_0_0(t);
                      i_51 = t;
                      t = e_51;
                      t = eval_config_0_0(t);
                      j_51 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_51, j_51);
                      t = s_3(i_51, j_51, t);
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
  ATerm n_51 = NULL,o_51 = NULL;
  n_51 = t;
  t = term_l_9;
  o_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_9, n_51);
  t = c_4(o_51, n_51, t);
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_51 = NULL,q_51 = NULL;
        t = eval_config_0_0(t);
        p_51 = t;
        t = term_l_9;
        q_51 = t;
        t = SSL_table_put(q_51, n_51, p_51);
        t = p_51;
        ;
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm u_51 = NULL;
  u_51 = t;
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_51 = NULL;
        t = term_q_9;
        t = get_config_0_0(t);
        w_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_51, term_s_9);
        t = geq_0_0(t);
        t = u_51;
        t = x_93(t);
        ;
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        t = u_51;
      }
  }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm z_51 = NULL;
  z_51 = t;
  if(match_string(t, "-k"))
    {
      t = z_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_51;
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL;
  a_52 = t;
  t = SSL_string_to_int(a_52);
  b_52 = t;
  t = term_t_9;
  c_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_9, b_52);
  t = f_4(c_52, b_52, t);
  t = a_52;
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_u_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_2, o_2, p_2, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm e_52 = NULL;
  e_52 = t;
  if(match_string(t, "-S"))
    {
      t = e_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_52;
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL;
  t = term_q_9;
  f_52 = t;
  t = term_w_9;
  g_52 = t;
  t = term_y_9;
  t = f_4(f_52, g_52, t);
  t = term_z_9;
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_a_10;
  return(t);
}
ATerm t_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL;
  h_52 = t;
  t = SSL_string_to_int(h_52);
  i_52 = t;
  t = term_q_9;
  j_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_9, i_52);
  t = f_4(j_52, i_52, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_52);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_b_10;
  return(t);
}
ATerm w_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL;
  t = term_c_10;
  k_52 = t;
  t = term_w_5;
  l_52 = t;
  t = term_d_10;
  t = f_4(k_52, l_52, t);
  t = term_e_10;
  return(t);
}
ATerm d_3 (ATerm t)
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
      ;
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
            ;
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            t = Option_3_0(w_2, z_2, d_3, t);
          }
      }
    }
  return(t);
}
ATerm f_4 (ATerm o_43, ATerm p_43, ATerm t)
{
  ATerm m_52 = NULL;
  t = term_l_9;
  m_52 = t;
  t = SSL_table_put(m_52, o_43, p_43);
  t = (ATerm) ATmakeAppl(sym__3, term_l_9, o_43, p_43);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL;
      t = term_w_5;
      t = e_0(t);
      r_52 = t;
      t = term_v_10;
      s_52 = t;
      t = term_w_10;
      t_52 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_10, term_w_10, r_52);
      t = d_4(s_52, t_52, r_52, t);
      _fail(t);
    }
  else
    {
      ATerm w_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_52 = ATgetFirst((ATermList) t);
          q_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_52;
      t = c_0(t);
      t = term_w_5;
      t = d_0(t);
      w_52 = t;
      t = (ATerm) ATinsert(CheckATermList(q_52), w_52);
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm y_52 = NULL;
  y_52 = t;
  if(match_string(t, "-o"))
    {
      t = y_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_52;
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL;
  z_52 = t;
  t = term_x_10;
  a_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_10, z_52);
  t = f_4(a_53, z_52, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_52);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_y_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_3, n_3, o_3, t);
  return(t);
}
ATerm d_4 (ATerm m_48, ATerm n_48, ATerm l_48, ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL;
  c_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_48, n_48);
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
        t = (ATerm) ATmakeAppl(sym__2, m_48, n_48);
        t = c_4(m_48, n_48, t);
        ;
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        t = (ATerm) ATempty;
      }
    d_53 = t;
    t = (ATerm) ATinsert(CheckATermList(d_53), l_48);
    e_53 = t;
    t = SSL_table_put(m_48, n_48, e_53);
    t = c_53;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL;
      t = term_w_5;
      t = k_0(t);
      p_53 = t;
      t = term_v_10;
      q_53 = t;
      t = term_w_10;
      r_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_10, term_w_10, p_53);
      t = d_4(q_53, r_53, p_53, t);
      _fail(t);
    }
  else
    {
      ATerm v_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_53 = ATgetFirst((ATermList) t);
          m_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_53;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_53 = ATgetFirst((ATermList) t);
          o_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_53;
      t = i_0(t);
      t = n_53;
      t = j_0(t);
      v_53 = t;
      t = (ATerm) ATinsert(CheckATermList(o_53), v_53);
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm x_53 = NULL;
  x_53 = t;
  if(match_string(t, "-i"))
    {
      t = x_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_53;
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL;
  y_53 = t;
  t = term_e_11;
  z_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, y_53);
  t = f_4(z_53, y_53, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_53);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_j_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_3, r_3, b_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_5;
  t = whoami_0_0(t);
  a_54 = t;
  t = term_t_6;
  c_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_11), a_54);
  d_54 = t;
  t = SSL_printnl(c_54, d_54);
  t = term_y_6;
  b_54 = t;
  t = SSL_exit(b_54);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_m_11;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_4 (ATerm x_35, ATerm y_35, ATerm t)
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_35, y_35);
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      t = SSL_addr(x_35, y_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
  f_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_54;
      t = s_85(t);
    }
  else
    {
      ATerm k_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_54 = ATgetFirst((ATermList) t);
          h_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_54;
      t = foldr_2_0(s_85, t_85, t);
      k_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_54, k_54);
      t = t_85(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_w_9;
  return(t);
}
ATerm g_4 (ATerm t)
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
  ATerm n_54 = NULL,u_66 = NULL,v_66 = NULL;
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
  t = foldr_2_0(e_4, g_4, t);
  n_54 = t;
  t = SSL_TicksToSeconds(n_54);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
  y_54 = t;
  if(match_cons(t, sym__2))
    {
      z_54 = ATgetArgument(t, 0);
      a_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_55;
        if((z_54 != t))
          {
            _fail(t);
          }
        t = y_54;
        ;
        LocalPopChoice(x_11);
      }
    else
      {
        t = u_11;
        t = (ATerm) ATmakeAppl(sym__2, z_54, a_55);
        {
          ATerm y_11 = t;
          int a_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_54, a_55);
              ;
              LocalPopChoice(a_12);
            }
          else
            {
              t = y_11;
              t = SSL_gtr(z_54, a_55);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_54, a_55);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_93 (ATerm), ATerm t)
{
  ATerm e_55 = NULL;
  e_55 = t;
  {
    ATerm c_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_55 = NULL;
        t = term_q_9;
        t = get_config_0_0(t);
        g_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_55, term_y_6);
        t = geq_0_0(t);
        t = e_55;
        t = w_93(t);
        ;
        LocalPopChoice(e_12);
      }
    else
      {
        t = c_12;
        t = e_55;
      }
  }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL,l_55 = NULL,m_55 = NULL;
  t = run_time_0_0(t);
  i_55 = t;
  t = term_w_5;
  t = whoami_0_0(t);
  j_55 = t;
  t = term_t_6;
  l_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_12), i_55), term_g_12), j_55);
  m_55 = t;
  t = SSL_printnl(l_55, m_55);
  t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_12), i_55), term_g_12), j_55));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_9;
  n_55 = t;
  t = SSL_exit(n_55);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL;
  w_55 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_55;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_55 = ATgetArgument(t, 0);
          {
            ATerm l_67 = NULL,z_11 = NULL;
            t = SSLgetAnnotations(w_55);
            l_67 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_55);
            z_11 = t;
            t = SSLsetAnnotations(z_11, l_67);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_55;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_96 (ATerm), ATerm t)
{
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      t = fetch_1_0(i_4, t);
    }
  t = m_96(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_55 = ATgetFirst((ATermList) t);
      a_56 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_56 = NULL,f_56 = NULL;
        ATerm j_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_56)), not_null(f_56));
          return(t);
        }
        t = a_56;
        t = h_0(t);
        if(((e_56 != NULL) && (e_56 != t)))
          _fail(t);
        else
          e_56 = t;
        t = z_55;
        t = g_0(t);
        if(((f_56 != NULL) && (f_56 != t)))
          _fail(t);
        else
          f_56 = t;
        t = a_56;
        t = reverse_acc_2_0(g_0, j_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_5;
      t = h_0(t);
    }
  return(t);
}
ATerm c_4 (ATerm d_50, ATerm e_50, ATerm t)
{
  t = SSL_table_get(d_50, e_50);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL,b_12 = NULL;
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
  b_12 = t;
  t = SSLsetAnnotations(b_12, j_56);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm n_56 = NULL;
  n_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_56), term_u_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL;
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      t = fetch_1_0(l_4, t);
    }
  t = term_y_12;
  t = echo_0_0(t);
  t = term_v_10;
  h_56 = t;
  t = term_w_10;
  i_56 = t;
  t = term_z_12;
  t = c_4(h_56, i_56, t);
  t = reverse_acc_2_0(_id, m_4, t);
  t = map_1_0(n_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL;
  p_56 = t;
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
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
                ATerm c_13 = ATgetFirst((ATermList) t);
                ATerm d_13 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_56;
          }
        ;
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        t = (ATerm) ATinsert(ATempty, p_56);
      }
    q_56 = t;
    t = term_f_8;
    r_56 = t;
    t = SSL_printnl(r_56, q_56);
    t = p_56;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_11;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL;
  t = term_e_13;
  v_56 = t;
  t = term_w_5;
  w_56 = t;
  t = term_f_13;
  t = f_4(v_56, w_56, t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_g_13;
  return(t);
}
ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL;
  t = term_e_13;
  z_56 = t;
  t = term_w_5;
  a_57 = t;
  t = term_f_13;
  t = f_4(z_56, a_57, t);
  t = term_h_13;
  x_56 = t;
  t = term_w_5;
  y_56 = t;
  t = term_i_13;
  t = f_4(x_56, y_56, t);
  t = term_l_13;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_m_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_4, p_4, s_4, t);
      ;
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      t = Option_3_0(t_4, u_4, w_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_57 (ATerm), ATerm u_57 (ATerm), ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,d_12 = NULL;
  g_57 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_57 = ATgetFirst((ATermList) t);
      d_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_57);
  b_57 = t;
  t = c_57;
  t = t_57(t);
  e_57 = t;
  t = d_57;
  t = u_57(t);
  f_57 = t;
  t = (ATerm) ATinsert(CheckATermList(f_57), e_57);
  d_12 = t;
  t = SSLsetAnnotations(d_12, b_57);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_98 (ATerm), ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL,q_57 = NULL,r_57 = NULL,f_12 = NULL;
  l_57 = t;
  {
    ATerm p_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_13;
        t = p_98(t);
        ;
        LocalPopChoice(s_13);
      }
    else
      {
        t = p_13;
      }
    t = l_57;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_57 = ATgetFirst((ATermList) t);
        o_57 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_57);
    m_57 = t;
    t = term_m_11;
    r_57 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_11, n_57);
    t = f_4(r_57, n_57, t);
    t = o_57;
    {
      ATerm d_58 (ATerm t)
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_13 = t;
            int x_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_57 = NULL;
                w_57 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = w_57;
                ;
                LocalPopChoice(x_13);
              }
            else
              {
                t = w_13;
                t = p_98(t);
                t = Cons_2_0(_id, d_58, t);
              }
            ;
            LocalPopChoice(v_13);
          }
        else
          {
            t = u_13;
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
      q_57 = t;
      t = (ATerm) ATinsert(CheckATermList(q_57), (ATerm) ATmakeAppl(sym_Program_1, n_57));
      f_12 = t;
      t = SSLsetAnnotations(f_12, m_57);
    }
  }
  return(t);
}
ATerm y_4 (ATerm t)
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
ATerm z_4 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL;
  t = term_q_12;
  q_58 = t;
  t = term_w_5;
  r_58 = t;
  t = term_y_13;
  t = f_4(q_58, r_58, t);
  t = term_z_13;
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm d_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_98 (ATerm), ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL;
  k_58 = t;
  t = term_v_10;
  m_58 = t;
  t = term_w_10;
  n_58 = t;
  t = (ATerm) ATempty;
  o_58 = t;
  t = SSL_table_put(m_58, n_58, o_58);
  t = k_58;
  {
    ATerm x_4 (ATerm t)
    {
      ATerm b_14 = t;
      int c_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_98(t);
          ;
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
                t = Option_3_0(y_4, z_4, b_5, t);
                ;
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
    t = parse_options_p__1_0(x_4, t);
    {
      ATerm f_14 = t;
      int g_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_58 = NULL;
          y_58 = t;
          {
            ATerm h_14 = t;
            int i_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_67 = NULL;
                t = y_58;
                {
                  ATerm j_14 = t;
                  int k_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_q_12;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(k_14);
                    }
                  else
                    {
                      t = j_14;
                      t = fetch_1_0(d_5, t);
                    }
                  t = y_58;
                  t = default_system_usage_0_0(t);
                  t = term_w_9;
                  s_67 = t;
                  t = SSL_exit(s_67);
                }
                ;
                LocalPopChoice(i_14);
              }
            else
              {
                t = h_14;
                {
                  ATerm w_67 = NULL;
                  t = term_e_13;
                  t = get_config_0_0(t);
                  t = y_58;
                  t = default_system_about_0_0(t);
                  t = term_w_9;
                  w_67 = t;
                  t = SSL_exit(w_67);
                }
              }
          }
          ;
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
                ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL;
                ATerm z_5 (ATerm t)
                {
                  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL,h_12 = NULL;
                  e_59 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      d_59 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_59);
                  c_59 = t;
                  t = d_59;
                  if(((i_58 != NULL) && (i_58 != t)))
                    _fail(t);
                  else
                    i_58 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, d_59);
                  h_12 = t;
                  t = SSLsetAnnotations(h_12, c_59);
                  return(t);
                }
                t = fetch_1_0(z_5, t);
                t = term_t_6;
                a_59 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_58)), term_n_14);
                b_59 = t;
                t = SSL_printnl(a_59, b_59);
                t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_58)), term_n_14));
                t = default_system_usage_0_0(t);
                t = term_y_6;
                z_58 = t;
                t = SSL_exit(z_58);
                ;
                LocalPopChoice(m_14);
              }
            else
              {
                t = l_14;
              }
          }
        }
      j_58 = t;
      t = term_v_10;
      l_58 = t;
      t = SSL_table_destroy(l_58);
      t = j_58;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL;
  t = parse_options_1_0(o_96, t);
  j_59 = t;
  t = term_o_14;
  m_59 = t;
  t = SSL_table_create(m_59);
  t = term_o_14;
  k_59 = t;
  t = term_p_14;
  l_59 = t;
  t = SSL_table_put(k_59, l_59, j_59);
  t = j_59;
  t = q_96(t);
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_96, t);
        ;
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
              t = r_96(t);
              t = report_success_0_0(t);
              ;
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
ATerm d_6 (ATerm t)
{
  t = if_verbose2_1_0(o_6, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm n_59 = NULL,o_59 = NULL;
  t = term_v_14;
  n_59 = t;
  t = term_w_5;
  o_59 = t;
  t = term_x_14;
  t = f_4(n_59, o_59, t);
  t = term_y_14;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_z_14;
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL;
  p_59 = t;
  t = term_m_11;
  t = get_config_0_0(t);
  q_59 = t;
  t = term_t_6;
  r_59 = t;
  t = (ATerm) ATinsert(ATempty, q_59);
  s_59 = t;
  t = SSL_printnl(r_59, s_59);
  t = p_59;
  return(t);
}
ATerm iowrap_3_0 (ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_95(t);
        ;
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
              ;
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
                    ;
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
                          t = Option_3_0(f_6, g_6, l_6, t);
                          ;
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
                                ;
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
  ATerm e_6 (ATerm t)
  {
    ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL;
    u_59 = t;
    {
      ATerm n_15 = t;
      int q_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((t_59 != NULL) && (t_59 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_59 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_6, t);
          ;
          LocalPopChoice(q_15);
        }
      else
        {
          t = n_15;
          t = term_r_15;
          t_59 = t;
        }
      t = not_null(t_59);
      t = ReadFromFile_0_0(t);
      v_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_59, v_59);
      t = apply_strategy_1_0(x_95, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(b_6, z_95, d_6, e_6, t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,n_12 = NULL;
  c_60 = t;
  if(match_cons(t, sym__2))
    {
      z_59 = ATgetArgument(t, 0);
      a_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_60);
  y_59 = t;
  t = a_60;
  {
    ATerm s_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_60 = NULL,z_67 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,m_12 = NULL,l_12 = NULL,k_12 = NULL,j_12 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            t_60 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_60);
        z_67 = t;
        t = t_60;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_68 = ATgetFirst((ATermList) t);
            d_68 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_60);
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
        ;
        LocalPopChoice(t_15);
      }
    else
      {
        t = s_15;
        t = debug_1_0(s_6, t);
      }
    b_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_59, b_60);
    n_12 = t;
    t = SSLsetAnnotations(n_12, y_59);
  }
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = term_u_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(r_6, _fail, default_usage_0_0, t);
  return(t);
}
